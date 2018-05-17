// Copyright 2016 The Fuchsia Authors
//
// Use of this source code is governed by a MIT-style
// license that can be found in the LICENSE file or at
// https://opensource.org/licenses/MIT

#include <object/interrupt_dispatcher.h>
#include <zircon/syscalls/port.h>
#include <object/port_dispatcher.h>
#include <object/process_dispatcher.h>
#include <dev/interrupt.h>
#include <platform.h>

InterruptDispatcher::InterruptDispatcher()
    : timestamp_(0), state_(InterruptState::IDLE) {
    event_init(&event_, false, EVENT_FLAG_AUTOUNSIGNAL);
}

zx_status_t InterruptDispatcher::RegisterInterruptHandler_HelperLocked(uint32_t vector,
                                                                       uint32_t flags) {
    bool is_virtual = !!(flags & INTERRUPT_VIRTUAL);

    flags_ = flags;
    vector_ = static_cast<uint16_t>(vector);

    if (!is_virtual) {
        zx_status_t status = RegisterInterruptHandler(vector, this);
        if (status != ZX_OK) {
            return status;
        }
    }
    return ZX_OK;
}

zx_status_t InterruptDispatcher::WaitForInterrupt(zx_time_t* out_timestamp) {
    while (true) {
        {
            AutoSpinLock guard(&spinlock_);
            if (port_dispatcher_) {
                return ZX_ERR_BAD_STATE;
            }
            switch (state_) {
            case InterruptState::DESTROYED:
                return ZX_ERR_CANCELED;
            case InterruptState::TRIGGERED:
                state_ = InterruptState::NEEDACK;
                *out_timestamp = timestamp_;
                timestamp_ = 0;
                return event_unsignal(&event_);
            case InterruptState::NEEDACK:
                if (flags_ & INTERRUPT_UNMASK_PREWAIT) {
                    UnmaskInterrupt(vector_);
                }
                break;
            case InterruptState::IDLE:
                break;
            default:
                return ZX_ERR_BAD_STATE;
            }
            state_ = InterruptState::WAITING;
        }

        zx_status_t status = event_wait_deadline(&event_, ZX_TIME_INFINITE, true);
        if (status != ZX_OK) {
            return status;
        }
    }
}

bool InterruptDispatcher::SendPacketLocked(zx_time_t timestamp) {
    bool status = port_dispatcher_->QueueInterruptPacket(&port_packet_, timestamp);
    if (flags_ & INTERRUPT_MASK_POSTWAIT) {
        MaskInterrupt(vector_);
    }
    timestamp_ = 0;
    return status;
}

zx_status_t InterruptDispatcher::UserSignal(zx_time_t timestamp) {

    // TODO(braval): Currently @johngro's driver uses zx_interrupt_trigger
    // to wake up a thread waiting on a physical interrupt
    // Once his driver adopts the interrupt with ports bounded, we can enforce
    // the below condition again
    /*
    if (!(interrupt_.flags & INTERRUPT_VIRTUAL))
        return ZX_ERR_BAD_STATE;
    */

    AutoSpinLock guard(&spinlock_);
    // only record timestamp if this is the first signal since we started waiting
    if (!timestamp_) {
        timestamp_ = timestamp;
    }
    if (state_ == InterruptState::DESTROYED) {
        return ZX_ERR_CANCELED;
    }
    if (state_ == InterruptState::NEEDACK && port_dispatcher_) {
        // Cannot trigger a interrupt without ACK
        // only record timestamp if this is the first signal since we started waiting
        return ZX_OK;
    }

    if (port_dispatcher_) {
        SendPacketLocked(timestamp);
        state_ = InterruptState::NEEDACK;
    } else {
        Signal();
        state_ = InterruptState::TRIGGERED;
    }
    return ZX_OK;
}

void InterruptDispatcher::InterruptHandler(bool pci) {
    AutoSpinLock guard(&spinlock_);
    // only record timestamp if this is the first IRQ since we started waiting
    if (!timestamp_) {
        timestamp_ = current_time();
    }
    if (state_ == InterruptState::NEEDACK && port_dispatcher_) {
        return;
    }

    if (!pci && (flags_ & INTERRUPT_MASK_POSTWAIT))
        MaskInterrupt(vector_);

    if (port_dispatcher_) {
        SendPacketLocked(timestamp_);
        state_ = InterruptState::NEEDACK;
    } else {
        Signal();
        state_ = InterruptState::TRIGGERED;
    }
}

zx_status_t InterruptDispatcher::Destroy() {
    AutoSpinLock guard(&spinlock_);
    bool packet_in_queue = false;

    if (!(flags_ & INTERRUPT_VIRTUAL)) {
        MaskInterrupt(vector_);
        UnregisterInterruptHandler(vector_);
    }
    if (port_dispatcher_) {
        packet_in_queue = port_dispatcher_->RemoveInterruptPacket(&port_packet_);
        if ((state_ == InterruptState::NEEDACK) &&
            !packet_in_queue) {
            state_ = InterruptState::DESTROYED;
            return ZX_ERR_NOT_FOUND;
        }
        if ((state_ == InterruptState::IDLE) ||
            ((state_ == InterruptState::NEEDACK) &&
             packet_in_queue)) {
            state_ = InterruptState::DESTROYED;
            return ZX_OK;
        }
    } else {
        state_ = InterruptState::DESTROYED;
        Signal();
    }
    return ZX_OK;
}

zx_status_t InterruptDispatcher::Bind(fbl::RefPtr<PortDispatcher> port_dispatcher,
                                      fbl::RefPtr<InterruptDispatcher> interrupt, uint64_t key) {
    AutoSpinLock guard(&spinlock_);
    if (state_ == InterruptState::DESTROYED) {
        return ZX_ERR_CANCELED;
    }
    if (port_dispatcher_) {
        return ZX_ERR_ALREADY_BOUND;
    }
    if (state_ == InterruptState::WAITING) {
        return ZX_ERR_BAD_STATE;
    }

    port_dispatcher_ = fbl::move(port_dispatcher);
    port_packet_.key = key;
    return ZX_OK;
}

zx_status_t InterruptDispatcher::Ack() {
    AutoSpinLock guard(&spinlock_);
    if (port_dispatcher_ == nullptr) {
        return ZX_ERR_BAD_STATE;
    }
    if (state_ == InterruptState::DESTROYED) {
        return ZX_ERR_CANCELED;
    }
    if (state_ == InterruptState::NEEDACK) {
        if (flags_ & INTERRUPT_UNMASK_PREWAIT) {
            UnmaskInterrupt(vector_);
        }
        if (timestamp_) {
            if (!SendPacketLocked(timestamp_)) {
                // We cannot queue another packet here.
                // If we reach here it means that the
                // interrupt packed has not been processed,
                // another interrupt has occured & then the
                // interrupt was ACK'd
                return ZX_ERR_BAD_STATE;
            }
        } else {
            state_ = InterruptState::IDLE;
        }
    }
    return ZX_OK;
}

void InterruptDispatcher::on_zero_handles() {
    Destroy();
}
