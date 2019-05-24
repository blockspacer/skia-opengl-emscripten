// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "device/gamepad/public/mojom/gamepad.mojom-shared-internal.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
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



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::GamepadQuaternionDataView> {
  using Data = ::device::mojom::internal::GamepadQuaternion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::GamepadVectorDataView> {
  using Data = ::device::mojom::internal::GamepadVector_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::GamepadButtonDataView> {
  using Data = ::device::mojom::internal::GamepadButton_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::GamepadPoseDataView> {
  using Data = ::device::mojom::internal::GamepadPose_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::GamepadHapticActuatorDataView> {
  using Data = ::device::mojom::internal::GamepadHapticActuator_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::GamepadDataView> {
  using Data = ::device::mojom::internal::Gamepad_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::GamepadEffectParametersDataView> {
  using Data = ::device::mojom::internal::GamepadEffectParameters_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class GamepadHand : int32_t {
  
  GamepadHandNone = 0,
  
  GamepadHandLeft = 1,
  
  GamepadHandRight = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, GamepadHand value);
inline bool IsKnownEnumValue(GamepadHand value) {
  return internal::GamepadHand_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class GamepadHapticActuatorType : int32_t {
  
  GamepadHapticActuatorTypeVibration = 0,
  
  GamepadHapticActuatorTypeDualRumble = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, GamepadHapticActuatorType value);
inline bool IsKnownEnumValue(GamepadHapticActuatorType value) {
  return internal::GamepadHapticActuatorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class GamepadHapticEffectType : int32_t {
  
  GamepadHapticEffectTypeDualRumble = 0,
  kMinValue = 0,
  kMaxValue = 0,
};

COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, GamepadHapticEffectType value);
inline bool IsKnownEnumValue(GamepadHapticEffectType value) {
  return internal::GamepadHapticEffectType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class GamepadHapticsResult : int32_t {
  
  GamepadHapticsResultError = 0,
  
  GamepadHapticsResultComplete = 1,
  
  GamepadHapticsResultPreempted = 2,
  
  GamepadHapticsResultInvalidParameter = 3,
  
  GamepadHapticsResultNotSupported = 4,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, GamepadHapticsResult value);
inline bool IsKnownEnumValue(GamepadHapticsResult value) {
  return internal::GamepadHapticsResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class GamepadObserverInterfaceBase {};

using GamepadObserverPtrDataView =
    mojo::InterfacePtrDataView<GamepadObserverInterfaceBase>;
using GamepadObserverRequestDataView =
    mojo::InterfaceRequestDataView<GamepadObserverInterfaceBase>;
using GamepadObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GamepadObserverInterfaceBase>;
using GamepadObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GamepadObserverInterfaceBase>;
class GamepadMonitorInterfaceBase {};

using GamepadMonitorPtrDataView =
    mojo::InterfacePtrDataView<GamepadMonitorInterfaceBase>;
using GamepadMonitorRequestDataView =
    mojo::InterfaceRequestDataView<GamepadMonitorInterfaceBase>;
using GamepadMonitorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GamepadMonitorInterfaceBase>;
using GamepadMonitorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GamepadMonitorInterfaceBase>;
class GamepadHapticsManagerInterfaceBase {};

using GamepadHapticsManagerPtrDataView =
    mojo::InterfacePtrDataView<GamepadHapticsManagerInterfaceBase>;
using GamepadHapticsManagerRequestDataView =
    mojo::InterfaceRequestDataView<GamepadHapticsManagerInterfaceBase>;
using GamepadHapticsManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GamepadHapticsManagerInterfaceBase>;
using GamepadHapticsManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GamepadHapticsManagerInterfaceBase>;
class GamepadQuaternionDataView {
 public:
  GamepadQuaternionDataView() {}

  GamepadQuaternionDataView(
      internal::GamepadQuaternion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
  float z() const {
    return data_->z;
  }
  float w() const {
    return data_->w;
  }
 private:
  internal::GamepadQuaternion_Data* data_ = nullptr;
};

class GamepadVectorDataView {
 public:
  GamepadVectorDataView() {}

  GamepadVectorDataView(
      internal::GamepadVector_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
  float z() const {
    return data_->z;
  }
 private:
  internal::GamepadVector_Data* data_ = nullptr;
};

class GamepadButtonDataView {
 public:
  GamepadButtonDataView() {}

  GamepadButtonDataView(
      internal::GamepadButton_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool pressed() const {
    return data_->pressed;
  }
  bool touched() const {
    return data_->touched;
  }
  double value() const {
    return data_->value;
  }
 private:
  internal::GamepadButton_Data* data_ = nullptr;
};

class GamepadPoseDataView {
 public:
  GamepadPoseDataView() {}

  GamepadPoseDataView(
      internal::GamepadPose_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOrientationDataView(
      GamepadQuaternionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrientation(UserType* output) {
    auto* pointer = data_->orientation.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadQuaternionDataView>(
        pointer, output, context_);
  }
  inline void GetPositionDataView(
      GamepadVectorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPosition(UserType* output) {
    auto* pointer = data_->position.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadVectorDataView>(
        pointer, output, context_);
  }
  inline void GetAngularVelocityDataView(
      GamepadVectorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAngularVelocity(UserType* output) {
    auto* pointer = data_->angular_velocity.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadVectorDataView>(
        pointer, output, context_);
  }
  inline void GetLinearVelocityDataView(
      GamepadVectorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLinearVelocity(UserType* output) {
    auto* pointer = data_->linear_velocity.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadVectorDataView>(
        pointer, output, context_);
  }
  inline void GetAngularAccelerationDataView(
      GamepadVectorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAngularAcceleration(UserType* output) {
    auto* pointer = data_->angular_acceleration.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadVectorDataView>(
        pointer, output, context_);
  }
  inline void GetLinearAccelerationDataView(
      GamepadVectorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLinearAcceleration(UserType* output) {
    auto* pointer = data_->linear_acceleration.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadVectorDataView>(
        pointer, output, context_);
  }
 private:
  internal::GamepadPose_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadHapticActuatorDataView {
 public:
  GamepadHapticActuatorDataView() {}

  GamepadHapticActuatorDataView(
      internal::GamepadHapticActuator_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::GamepadHapticActuatorType>(
        data_value, output);
  }

  GamepadHapticActuatorType type() const {
    return static_cast<GamepadHapticActuatorType>(data_->type);
  }
 private:
  internal::GamepadHapticActuator_Data* data_ = nullptr;
};

class GamepadDataView {
 public:
  GamepadDataView() {}

  GamepadDataView(
      internal::Gamepad_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool connected() const {
    return data_->connected;
  }
  inline void GetIdDataView(
      mojo::ArrayDataView<uint16_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint16_t>>(
        pointer, output, context_);
  }
  int64_t timestamp() const {
    return data_->timestamp;
  }
  inline void GetAxesDataView(
      mojo::ArrayDataView<double>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAxes(UserType* output) {
    auto* pointer = data_->axes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<double>>(
        pointer, output, context_);
  }
  inline void GetButtonsDataView(
      mojo::ArrayDataView<GamepadButtonDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadButtons(UserType* output) {
    auto* pointer = data_->buttons.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::GamepadButtonDataView>>(
        pointer, output, context_);
  }
  inline void GetVibrationActuatorDataView(
      GamepadHapticActuatorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVibrationActuator(UserType* output) {
    auto* pointer = data_->vibration_actuator.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadHapticActuatorDataView>(
        pointer, output, context_);
  }
  inline void GetMappingDataView(
      mojo::ArrayDataView<uint16_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMapping(UserType* output) {
    auto* pointer = data_->mapping.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint16_t>>(
        pointer, output, context_);
  }
  inline void GetPoseDataView(
      GamepadPoseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPose(UserType* output) {
    auto* pointer = data_->pose.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadPoseDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHand(UserType* output) const {
    auto data_value = data_->hand;
    return mojo::internal::Deserialize<::device::mojom::GamepadHand>(
        data_value, output);
  }

  GamepadHand hand() const {
    return static_cast<GamepadHand>(data_->hand);
  }
  uint32_t display_id() const {
    return data_->display_id;
  }
 private:
  internal::Gamepad_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadEffectParametersDataView {
 public:
  GamepadEffectParametersDataView() {}

  GamepadEffectParametersDataView(
      internal::GamepadEffectParameters_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double duration() const {
    return data_->duration;
  }
  double start_delay() const {
    return data_->start_delay;
  }
  double strong_magnitude() const {
    return data_->strong_magnitude;
  }
  double weak_magnitude() const {
    return data_->weak_magnitude;
  }
 private:
  internal::GamepadEffectParameters_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::GamepadHand>
    : public mojo::internal::EnumHashImpl<::device::mojom::GamepadHand> {};

template <>
struct hash<::device::mojom::GamepadHapticActuatorType>
    : public mojo::internal::EnumHashImpl<::device::mojom::GamepadHapticActuatorType> {};

template <>
struct hash<::device::mojom::GamepadHapticEffectType>
    : public mojo::internal::EnumHashImpl<::device::mojom::GamepadHapticEffectType> {};

template <>
struct hash<::device::mojom::GamepadHapticsResult>
    : public mojo::internal::EnumHashImpl<::device::mojom::GamepadHapticsResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::GamepadHand, ::device::mojom::GamepadHand> {
  static ::device::mojom::GamepadHand ToMojom(::device::mojom::GamepadHand input) { return input; }
  static bool FromMojom(::device::mojom::GamepadHand input, ::device::mojom::GamepadHand* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadHand, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::GamepadHand, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::GamepadHand>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::GamepadHapticActuatorType, ::device::mojom::GamepadHapticActuatorType> {
  static ::device::mojom::GamepadHapticActuatorType ToMojom(::device::mojom::GamepadHapticActuatorType input) { return input; }
  static bool FromMojom(::device::mojom::GamepadHapticActuatorType input, ::device::mojom::GamepadHapticActuatorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadHapticActuatorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::GamepadHapticActuatorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::GamepadHapticActuatorType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::GamepadHapticEffectType, ::device::mojom::GamepadHapticEffectType> {
  static ::device::mojom::GamepadHapticEffectType ToMojom(::device::mojom::GamepadHapticEffectType input) { return input; }
  static bool FromMojom(::device::mojom::GamepadHapticEffectType input, ::device::mojom::GamepadHapticEffectType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadHapticEffectType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::GamepadHapticEffectType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::GamepadHapticEffectType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::GamepadHapticsResult, ::device::mojom::GamepadHapticsResult> {
  static ::device::mojom::GamepadHapticsResult ToMojom(::device::mojom::GamepadHapticsResult input) { return input; }
  static bool FromMojom(::device::mojom::GamepadHapticsResult input, ::device::mojom::GamepadHapticsResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadHapticsResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::GamepadHapticsResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::GamepadHapticsResult>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadQuaternionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadQuaternionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::GamepadQuaternion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
    (*output)->z = Traits::z(input);
    (*output)->w = Traits::w(input);
  }

  static bool Deserialize(::device::mojom::internal::GamepadQuaternion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadQuaternionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadVectorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadVectorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::GamepadVector_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
    (*output)->z = Traits::z(input);
  }

  static bool Deserialize(::device::mojom::internal::GamepadVector_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadVectorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadButtonDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadButtonDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::GamepadButton_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->pressed = Traits::pressed(input);
    (*output)->touched = Traits::touched(input);
    (*output)->value = Traits::value(input);
  }

  static bool Deserialize(::device::mojom::internal::GamepadButton_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadButtonDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadPoseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadPoseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::GamepadPose_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::orientation(input)) in_orientation = Traits::orientation(input);
    typename decltype((*output)->orientation)::BaseType::BufferWriter
        orientation_writer;
    mojo::internal::Serialize<::device::mojom::GamepadQuaternionDataView>(
        in_orientation, buffer, &orientation_writer, context);
    (*output)->orientation.Set(
        orientation_writer.is_null() ? nullptr : orientation_writer.data());
    decltype(Traits::position(input)) in_position = Traits::position(input);
    typename decltype((*output)->position)::BaseType::BufferWriter
        position_writer;
    mojo::internal::Serialize<::device::mojom::GamepadVectorDataView>(
        in_position, buffer, &position_writer, context);
    (*output)->position.Set(
        position_writer.is_null() ? nullptr : position_writer.data());
    decltype(Traits::angular_velocity(input)) in_angular_velocity = Traits::angular_velocity(input);
    typename decltype((*output)->angular_velocity)::BaseType::BufferWriter
        angular_velocity_writer;
    mojo::internal::Serialize<::device::mojom::GamepadVectorDataView>(
        in_angular_velocity, buffer, &angular_velocity_writer, context);
    (*output)->angular_velocity.Set(
        angular_velocity_writer.is_null() ? nullptr : angular_velocity_writer.data());
    decltype(Traits::linear_velocity(input)) in_linear_velocity = Traits::linear_velocity(input);
    typename decltype((*output)->linear_velocity)::BaseType::BufferWriter
        linear_velocity_writer;
    mojo::internal::Serialize<::device::mojom::GamepadVectorDataView>(
        in_linear_velocity, buffer, &linear_velocity_writer, context);
    (*output)->linear_velocity.Set(
        linear_velocity_writer.is_null() ? nullptr : linear_velocity_writer.data());
    decltype(Traits::angular_acceleration(input)) in_angular_acceleration = Traits::angular_acceleration(input);
    typename decltype((*output)->angular_acceleration)::BaseType::BufferWriter
        angular_acceleration_writer;
    mojo::internal::Serialize<::device::mojom::GamepadVectorDataView>(
        in_angular_acceleration, buffer, &angular_acceleration_writer, context);
    (*output)->angular_acceleration.Set(
        angular_acceleration_writer.is_null() ? nullptr : angular_acceleration_writer.data());
    decltype(Traits::linear_acceleration(input)) in_linear_acceleration = Traits::linear_acceleration(input);
    typename decltype((*output)->linear_acceleration)::BaseType::BufferWriter
        linear_acceleration_writer;
    mojo::internal::Serialize<::device::mojom::GamepadVectorDataView>(
        in_linear_acceleration, buffer, &linear_acceleration_writer, context);
    (*output)->linear_acceleration.Set(
        linear_acceleration_writer.is_null() ? nullptr : linear_acceleration_writer.data());
  }

  static bool Deserialize(::device::mojom::internal::GamepadPose_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadPoseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadHapticActuatorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadHapticActuatorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::GamepadHapticActuator_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::device::mojom::GamepadHapticActuatorType>(
        Traits::type(input), &(*output)->type);
  }

  static bool Deserialize(::device::mojom::internal::GamepadHapticActuator_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadHapticActuatorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::Gamepad_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->connected = Traits::connected(input);
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    const mojo::internal::ContainerValidateParams id_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint16_t>>(
        in_id, buffer, &id_writer, &id_validate_params,
        context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in Gamepad struct");
    (*output)->timestamp = Traits::timestamp(input);
    decltype(Traits::axes(input)) in_axes = Traits::axes(input);
    typename decltype((*output)->axes)::BaseType::BufferWriter
        axes_writer;
    const mojo::internal::ContainerValidateParams axes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<double>>(
        in_axes, buffer, &axes_writer, &axes_validate_params,
        context);
    (*output)->axes.Set(
        axes_writer.is_null() ? nullptr : axes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->axes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null axes in Gamepad struct");
    decltype(Traits::buttons(input)) in_buttons = Traits::buttons(input);
    typename decltype((*output)->buttons)::BaseType::BufferWriter
        buttons_writer;
    const mojo::internal::ContainerValidateParams buttons_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::GamepadButtonDataView>>(
        in_buttons, buffer, &buttons_writer, &buttons_validate_params,
        context);
    (*output)->buttons.Set(
        buttons_writer.is_null() ? nullptr : buttons_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->buttons.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null buttons in Gamepad struct");
    decltype(Traits::vibration_actuator(input)) in_vibration_actuator = Traits::vibration_actuator(input);
    typename decltype((*output)->vibration_actuator)::BaseType::BufferWriter
        vibration_actuator_writer;
    mojo::internal::Serialize<::device::mojom::GamepadHapticActuatorDataView>(
        in_vibration_actuator, buffer, &vibration_actuator_writer, context);
    (*output)->vibration_actuator.Set(
        vibration_actuator_writer.is_null() ? nullptr : vibration_actuator_writer.data());
    decltype(Traits::mapping(input)) in_mapping = Traits::mapping(input);
    typename decltype((*output)->mapping)::BaseType::BufferWriter
        mapping_writer;
    const mojo::internal::ContainerValidateParams mapping_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint16_t>>(
        in_mapping, buffer, &mapping_writer, &mapping_validate_params,
        context);
    (*output)->mapping.Set(
        mapping_writer.is_null() ? nullptr : mapping_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mapping.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mapping in Gamepad struct");
    decltype(Traits::pose(input)) in_pose = Traits::pose(input);
    typename decltype((*output)->pose)::BaseType::BufferWriter
        pose_writer;
    mojo::internal::Serialize<::device::mojom::GamepadPoseDataView>(
        in_pose, buffer, &pose_writer, context);
    (*output)->pose.Set(
        pose_writer.is_null() ? nullptr : pose_writer.data());
    mojo::internal::Serialize<::device::mojom::GamepadHand>(
        Traits::hand(input), &(*output)->hand);
    (*output)->display_id = Traits::display_id(input);
  }

  static bool Deserialize(::device::mojom::internal::Gamepad_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GamepadEffectParametersDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::GamepadEffectParametersDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::GamepadEffectParameters_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->duration = Traits::duration(input);
    (*output)->start_delay = Traits::start_delay(input);
    (*output)->strong_magnitude = Traits::strong_magnitude(input);
    (*output)->weak_magnitude = Traits::weak_magnitude(input);
  }

  static bool Deserialize(::device::mojom::internal::GamepadEffectParameters_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GamepadEffectParametersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {







inline void GamepadPoseDataView::GetOrientationDataView(
    GamepadQuaternionDataView* output) {
  auto pointer = data_->orientation.Get();
  *output = GamepadQuaternionDataView(pointer, context_);
}
inline void GamepadPoseDataView::GetPositionDataView(
    GamepadVectorDataView* output) {
  auto pointer = data_->position.Get();
  *output = GamepadVectorDataView(pointer, context_);
}
inline void GamepadPoseDataView::GetAngularVelocityDataView(
    GamepadVectorDataView* output) {
  auto pointer = data_->angular_velocity.Get();
  *output = GamepadVectorDataView(pointer, context_);
}
inline void GamepadPoseDataView::GetLinearVelocityDataView(
    GamepadVectorDataView* output) {
  auto pointer = data_->linear_velocity.Get();
  *output = GamepadVectorDataView(pointer, context_);
}
inline void GamepadPoseDataView::GetAngularAccelerationDataView(
    GamepadVectorDataView* output) {
  auto pointer = data_->angular_acceleration.Get();
  *output = GamepadVectorDataView(pointer, context_);
}
inline void GamepadPoseDataView::GetLinearAccelerationDataView(
    GamepadVectorDataView* output) {
  auto pointer = data_->linear_acceleration.Get();
  *output = GamepadVectorDataView(pointer, context_);
}




inline void GamepadDataView::GetIdDataView(
    mojo::ArrayDataView<uint16_t>* output) {
  auto pointer = data_->id.Get();
  *output = mojo::ArrayDataView<uint16_t>(pointer, context_);
}
inline void GamepadDataView::GetAxesDataView(
    mojo::ArrayDataView<double>* output) {
  auto pointer = data_->axes.Get();
  *output = mojo::ArrayDataView<double>(pointer, context_);
}
inline void GamepadDataView::GetButtonsDataView(
    mojo::ArrayDataView<GamepadButtonDataView>* output) {
  auto pointer = data_->buttons.Get();
  *output = mojo::ArrayDataView<GamepadButtonDataView>(pointer, context_);
}
inline void GamepadDataView::GetVibrationActuatorDataView(
    GamepadHapticActuatorDataView* output) {
  auto pointer = data_->vibration_actuator.Get();
  *output = GamepadHapticActuatorDataView(pointer, context_);
}
inline void GamepadDataView::GetMappingDataView(
    mojo::ArrayDataView<uint16_t>* output) {
  auto pointer = data_->mapping.Get();
  *output = mojo::ArrayDataView<uint16_t>(pointer, context_);
}
inline void GamepadDataView::GetPoseDataView(
    GamepadPoseDataView* output) {
  auto pointer = data_->pose.Get();
  *output = GamepadPoseDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace device

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_H_