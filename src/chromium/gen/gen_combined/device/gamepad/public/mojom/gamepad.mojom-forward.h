// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_FORWARD_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace device {
namespace mojom {
class GamepadQuaternionDataView;

class GamepadVectorDataView;

class GamepadButtonDataView;

class GamepadPoseDataView;

class GamepadHapticActuatorDataView;

class GamepadDataView;

class GamepadEffectParametersDataView;


enum class GamepadHand : int32_t;

enum class GamepadHapticActuatorType : int32_t;

enum class GamepadHapticEffectType : int32_t;

enum class GamepadHapticsResult : int32_t;
class GamepadQuaternion;
using GamepadQuaternionPtr = mojo::InlinedStructPtr<GamepadQuaternion>;

class GamepadVector;
using GamepadVectorPtr = mojo::InlinedStructPtr<GamepadVector>;

class GamepadButton;
using GamepadButtonPtr = mojo::InlinedStructPtr<GamepadButton>;

class GamepadPose;
using GamepadPosePtr = mojo::StructPtr<GamepadPose>;

class GamepadHapticActuator;
using GamepadHapticActuatorPtr = mojo::InlinedStructPtr<GamepadHapticActuator>;

class Gamepad;
using GamepadPtr = mojo::StructPtr<Gamepad>;

class GamepadEffectParameters;
using GamepadEffectParametersPtr = mojo::InlinedStructPtr<GamepadEffectParameters>;

class GamepadObserver;
using GamepadObserverPtr = mojo::InterfacePtr<GamepadObserver>;
using GamepadObserverPtrInfo = mojo::InterfacePtrInfo<GamepadObserver>;
using ThreadSafeGamepadObserverPtr =
    mojo::ThreadSafeInterfacePtr<GamepadObserver>;
using GamepadObserverRequest = mojo::InterfaceRequest<GamepadObserver>;
using GamepadObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<GamepadObserver>;
using ThreadSafeGamepadObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GamepadObserver>;
using GamepadObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GamepadObserver>;
using GamepadObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GamepadObserver>;

class GamepadMonitor;
using GamepadMonitorPtr = mojo::InterfacePtr<GamepadMonitor>;
using GamepadMonitorPtrInfo = mojo::InterfacePtrInfo<GamepadMonitor>;
using ThreadSafeGamepadMonitorPtr =
    mojo::ThreadSafeInterfacePtr<GamepadMonitor>;
using GamepadMonitorRequest = mojo::InterfaceRequest<GamepadMonitor>;
using GamepadMonitorAssociatedPtr =
    mojo::AssociatedInterfacePtr<GamepadMonitor>;
using ThreadSafeGamepadMonitorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GamepadMonitor>;
using GamepadMonitorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GamepadMonitor>;
using GamepadMonitorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GamepadMonitor>;

class GamepadHapticsManager;
using GamepadHapticsManagerPtr = mojo::InterfacePtr<GamepadHapticsManager>;
using GamepadHapticsManagerPtrInfo = mojo::InterfacePtrInfo<GamepadHapticsManager>;
using ThreadSafeGamepadHapticsManagerPtr =
    mojo::ThreadSafeInterfacePtr<GamepadHapticsManager>;
using GamepadHapticsManagerRequest = mojo::InterfaceRequest<GamepadHapticsManager>;
using GamepadHapticsManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<GamepadHapticsManager>;
using ThreadSafeGamepadHapticsManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GamepadHapticsManager>;
using GamepadHapticsManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GamepadHapticsManager>;
using GamepadHapticsManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GamepadHapticsManager>;




}  // namespace mojom
}  // namespace device
#include "device/gamepad/public/cpp/gamepad.h"

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_FORWARD_H_