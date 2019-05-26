// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_BLINK_FORWARD_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_BLINK_FORWARD_H_

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

enum class GamepadHand : int32_t;

enum class GamepadHapticActuatorType : int32_t;

enum class GamepadHapticEffectType : int32_t;

enum class GamepadHapticsResult : int32_t;
}  // namespace device
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct device_mojom_internal_GamepadHand_DataHashFn;

template <>
struct DefaultHash<::device::mojom::GamepadHand> {
  using Hash = device_mojom_internal_GamepadHand_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_GamepadHapticActuatorType_DataHashFn;

template <>
struct DefaultHash<::device::mojom::GamepadHapticActuatorType> {
  using Hash = device_mojom_internal_GamepadHapticActuatorType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_GamepadHapticEffectType_DataHashFn;

template <>
struct DefaultHash<::device::mojom::GamepadHapticEffectType> {
  using Hash = device_mojom_internal_GamepadHapticEffectType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_GamepadHapticsResult_DataHashFn;

template <>
struct DefaultHash<::device::mojom::GamepadHapticsResult> {
  using Hash = device_mojom_internal_GamepadHapticsResult_DataHashFn;
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {
using GamepadHand = GamepadHand;  // Alias for definition in the parent namespace.
using GamepadHapticActuatorType = GamepadHapticActuatorType;  // Alias for definition in the parent namespace.
using GamepadHapticEffectType = GamepadHapticEffectType;  // Alias for definition in the parent namespace.
using GamepadHapticsResult = GamepadHapticsResult;  // Alias for definition in the parent namespace.
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




}  // namespace blink
}  // namespace mojom
}  // namespace device
#include "device/gamepad/public/cpp/gamepad.h"

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_BLINK_FORWARD_H_