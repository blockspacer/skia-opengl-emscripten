// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/input_service.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class InputDeviceInfoDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::InputDeviceInfoDataView> {
  using Data = ::device::mojom::internal::InputDeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class InputDeviceSubsystem : int32_t {
  
  SUBSYSTEM_HID = 0,
  
  SUBSYSTEM_INPUT = 1,
  
  SUBSYSTEM_UNKNOWN = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, InputDeviceSubsystem value);
inline bool IsKnownEnumValue(InputDeviceSubsystem value) {
  return internal::InputDeviceSubsystem_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class InputDeviceType : int32_t {
  
  TYPE_BLUETOOTH = 0,
  
  TYPE_USB = 1,
  
  TYPE_SERIO = 2,
  
  TYPE_UNKNOWN = 3,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, InputDeviceType value);
inline bool IsKnownEnumValue(InputDeviceType value) {
  return internal::InputDeviceType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class InputDeviceManagerClientInterfaceBase {};

using InputDeviceManagerClientPtrDataView =
    mojo::InterfacePtrDataView<InputDeviceManagerClientInterfaceBase>;
using InputDeviceManagerClientRequestDataView =
    mojo::InterfaceRequestDataView<InputDeviceManagerClientInterfaceBase>;
using InputDeviceManagerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InputDeviceManagerClientInterfaceBase>;
using InputDeviceManagerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InputDeviceManagerClientInterfaceBase>;
class InputDeviceManagerInterfaceBase {};

using InputDeviceManagerPtrDataView =
    mojo::InterfacePtrDataView<InputDeviceManagerInterfaceBase>;
using InputDeviceManagerRequestDataView =
    mojo::InterfaceRequestDataView<InputDeviceManagerInterfaceBase>;
using InputDeviceManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InputDeviceManagerInterfaceBase>;
using InputDeviceManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InputDeviceManagerInterfaceBase>;
class InputDeviceInfoDataView {
 public:
  InputDeviceInfoDataView() {}

  InputDeviceInfoDataView(
      internal::InputDeviceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubsystem(UserType* output) const {
    auto data_value = data_->subsystem;
    return mojo::internal::Deserialize<::device::mojom::InputDeviceSubsystem>(
        data_value, output);
  }

  InputDeviceSubsystem subsystem() const {
    return static_cast<InputDeviceSubsystem>(data_->subsystem);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::InputDeviceType>(
        data_value, output);
  }

  InputDeviceType type() const {
    return static_cast<InputDeviceType>(data_->type);
  }
  bool is_accelerometer() const {
    return data_->is_accelerometer;
  }
  bool is_joystick() const {
    return data_->is_joystick;
  }
  bool is_key() const {
    return data_->is_key;
  }
  bool is_keyboard() const {
    return data_->is_keyboard;
  }
  bool is_mouse() const {
    return data_->is_mouse;
  }
  bool is_tablet() const {
    return data_->is_tablet;
  }
  bool is_touchpad() const {
    return data_->is_touchpad;
  }
  bool is_touchscreen() const {
    return data_->is_touchscreen;
  }
 private:
  internal::InputDeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::InputDeviceSubsystem>
    : public mojo::internal::EnumHashImpl<::device::mojom::InputDeviceSubsystem> {};

template <>
struct hash<::device::mojom::InputDeviceType>
    : public mojo::internal::EnumHashImpl<::device::mojom::InputDeviceType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::InputDeviceSubsystem, ::device::mojom::InputDeviceSubsystem> {
  static ::device::mojom::InputDeviceSubsystem ToMojom(::device::mojom::InputDeviceSubsystem input) { return input; }
  static bool FromMojom(::device::mojom::InputDeviceSubsystem input, ::device::mojom::InputDeviceSubsystem* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::InputDeviceSubsystem, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::InputDeviceSubsystem, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::InputDeviceSubsystem>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::InputDeviceType, ::device::mojom::InputDeviceType> {
  static ::device::mojom::InputDeviceType ToMojom(::device::mojom::InputDeviceType input) { return input; }
  static bool FromMojom(::device::mojom::InputDeviceType input, ::device::mojom::InputDeviceType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::InputDeviceType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::InputDeviceType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::InputDeviceType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::InputDeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::InputDeviceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::InputDeviceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in InputDeviceInfo struct");
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in InputDeviceInfo struct");
    mojo::internal::Serialize<::device::mojom::InputDeviceSubsystem>(
        Traits::subsystem(input), &(*output)->subsystem);
    mojo::internal::Serialize<::device::mojom::InputDeviceType>(
        Traits::type(input), &(*output)->type);
    (*output)->is_accelerometer = Traits::is_accelerometer(input);
    (*output)->is_joystick = Traits::is_joystick(input);
    (*output)->is_key = Traits::is_key(input);
    (*output)->is_keyboard = Traits::is_keyboard(input);
    (*output)->is_mouse = Traits::is_mouse(input);
    (*output)->is_tablet = Traits::is_tablet(input);
    (*output)->is_touchpad = Traits::is_touchpad(input);
    (*output)->is_touchscreen = Traits::is_touchscreen(input);
  }

  static bool Deserialize(::device::mojom::internal::InputDeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::InputDeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {

inline void InputDeviceInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void InputDeviceInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_H_