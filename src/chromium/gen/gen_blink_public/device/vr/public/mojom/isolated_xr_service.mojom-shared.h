// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_SHARED_H_
#define DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_SHARED_H_

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
#include "device/vr/public/mojom/isolated_xr_service.mojom-shared-internal.h"
#include "device/vr/public/mojom/vr_service.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace device {
namespace mojom {
class XRRuntimeSessionOptionsDataView;

class XRGamepadButtonDataView;

class XRGamepadDataView;

class XRGamepadDataDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::XRRuntimeSessionOptionsDataView> {
  using Data = ::device::mojom::internal::XRRuntimeSessionOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRGamepadButtonDataView> {
  using Data = ::device::mojom::internal::XRGamepadButton_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRGamepadDataView> {
  using Data = ::device::mojom::internal::XRGamepad_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRGamepadDataDataView> {
  using Data = ::device::mojom::internal::XRGamepadData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {
// Interface base classes. They are used for type safety check.
class XRSessionControllerInterfaceBase {};

using XRSessionControllerPtrDataView =
    mojo::InterfacePtrDataView<XRSessionControllerInterfaceBase>;
using XRSessionControllerRequestDataView =
    mojo::InterfaceRequestDataView<XRSessionControllerInterfaceBase>;
using XRSessionControllerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<XRSessionControllerInterfaceBase>;
using XRSessionControllerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<XRSessionControllerInterfaceBase>;
class XRRuntimeEventListenerInterfaceBase {};

using XRRuntimeEventListenerPtrDataView =
    mojo::InterfacePtrDataView<XRRuntimeEventListenerInterfaceBase>;
using XRRuntimeEventListenerRequestDataView =
    mojo::InterfaceRequestDataView<XRRuntimeEventListenerInterfaceBase>;
using XRRuntimeEventListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<XRRuntimeEventListenerInterfaceBase>;
using XRRuntimeEventListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<XRRuntimeEventListenerInterfaceBase>;
class XRRuntimeInterfaceBase {};

using XRRuntimePtrDataView =
    mojo::InterfacePtrDataView<XRRuntimeInterfaceBase>;
using XRRuntimeRequestDataView =
    mojo::InterfaceRequestDataView<XRRuntimeInterfaceBase>;
using XRRuntimeAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<XRRuntimeInterfaceBase>;
using XRRuntimeAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<XRRuntimeInterfaceBase>;
class IsolatedXRGamepadProviderInterfaceBase {};

using IsolatedXRGamepadProviderPtrDataView =
    mojo::InterfacePtrDataView<IsolatedXRGamepadProviderInterfaceBase>;
using IsolatedXRGamepadProviderRequestDataView =
    mojo::InterfaceRequestDataView<IsolatedXRGamepadProviderInterfaceBase>;
using IsolatedXRGamepadProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IsolatedXRGamepadProviderInterfaceBase>;
using IsolatedXRGamepadProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IsolatedXRGamepadProviderInterfaceBase>;
class IsolatedXRGamepadProviderFactoryInterfaceBase {};

using IsolatedXRGamepadProviderFactoryPtrDataView =
    mojo::InterfacePtrDataView<IsolatedXRGamepadProviderFactoryInterfaceBase>;
using IsolatedXRGamepadProviderFactoryRequestDataView =
    mojo::InterfaceRequestDataView<IsolatedXRGamepadProviderFactoryInterfaceBase>;
using IsolatedXRGamepadProviderFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IsolatedXRGamepadProviderFactoryInterfaceBase>;
using IsolatedXRGamepadProviderFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IsolatedXRGamepadProviderFactoryInterfaceBase>;
class ImmersiveOverlayInterfaceBase {};

using ImmersiveOverlayPtrDataView =
    mojo::InterfacePtrDataView<ImmersiveOverlayInterfaceBase>;
using ImmersiveOverlayRequestDataView =
    mojo::InterfaceRequestDataView<ImmersiveOverlayInterfaceBase>;
using ImmersiveOverlayAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ImmersiveOverlayInterfaceBase>;
using ImmersiveOverlayAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ImmersiveOverlayInterfaceBase>;
class XRCompositorHostInterfaceBase {};

using XRCompositorHostPtrDataView =
    mojo::InterfacePtrDataView<XRCompositorHostInterfaceBase>;
using XRCompositorHostRequestDataView =
    mojo::InterfaceRequestDataView<XRCompositorHostInterfaceBase>;
using XRCompositorHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<XRCompositorHostInterfaceBase>;
using XRCompositorHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<XRCompositorHostInterfaceBase>;
class IsolatedXRRuntimeProviderClientInterfaceBase {};

using IsolatedXRRuntimeProviderClientPtrDataView =
    mojo::InterfacePtrDataView<IsolatedXRRuntimeProviderClientInterfaceBase>;
using IsolatedXRRuntimeProviderClientRequestDataView =
    mojo::InterfaceRequestDataView<IsolatedXRRuntimeProviderClientInterfaceBase>;
using IsolatedXRRuntimeProviderClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IsolatedXRRuntimeProviderClientInterfaceBase>;
using IsolatedXRRuntimeProviderClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IsolatedXRRuntimeProviderClientInterfaceBase>;
class IsolatedXRRuntimeProviderInterfaceBase {};

using IsolatedXRRuntimeProviderPtrDataView =
    mojo::InterfacePtrDataView<IsolatedXRRuntimeProviderInterfaceBase>;
using IsolatedXRRuntimeProviderRequestDataView =
    mojo::InterfaceRequestDataView<IsolatedXRRuntimeProviderInterfaceBase>;
using IsolatedXRRuntimeProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IsolatedXRRuntimeProviderInterfaceBase>;
using IsolatedXRRuntimeProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IsolatedXRRuntimeProviderInterfaceBase>;
class XRRuntimeSessionOptionsDataView {
 public:
  XRRuntimeSessionOptionsDataView() {}

  XRRuntimeSessionOptionsDataView(
      internal::XRRuntimeSessionOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool immersive() const {
    return data_->immersive;
  }
  bool environment_integration() const {
    return data_->environment_integration;
  }
  int32_t render_process_id() const {
    return data_->render_process_id;
  }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
  bool use_legacy_webvr_render_path() const {
    return data_->use_legacy_webvr_render_path;
  }
 private:
  internal::XRRuntimeSessionOptions_Data* data_ = nullptr;
};

class XRGamepadButtonDataView {
 public:
  XRGamepadButtonDataView() {}

  XRGamepadButtonDataView(
      internal::XRGamepadButton_Data* data,
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
  internal::XRGamepadButton_Data* data_ = nullptr;
};

class XRGamepadDataView {
 public:
  XRGamepadDataView() {}

  XRGamepadDataView(
      internal::XRGamepad_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool can_provide_orientation() const {
    return data_->can_provide_orientation;
  }
  bool can_provide_position() const {
    return data_->can_provide_position;
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
      mojo::ArrayDataView<XRGamepadButtonDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadButtons(UserType* output) {
    auto* pointer = data_->buttons.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::XRGamepadButtonDataView>>(
        pointer, output, context_);
  }
  inline void GetPoseDataView(
      ::device::mojom::VRPoseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPose(UserType* output) {
    auto* pointer = data_->pose.Get();
    return mojo::internal::Deserialize<::device::mojom::VRPoseDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHand(UserType* output) const {
    auto data_value = data_->hand;
    return mojo::internal::Deserialize<::device::mojom::XRHandedness>(
        data_value, output);
  }

  ::device::mojom::XRHandedness hand() const {
    return static_cast<::device::mojom::XRHandedness>(data_->hand);
  }
  uint32_t controller_id() const {
    return data_->controller_id;
  }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRGamepad_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRGamepadDataDataView {
 public:
  XRGamepadDataDataView() {}

  XRGamepadDataDataView(
      internal::XRGamepadData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGamepadsDataView(
      mojo::ArrayDataView<XRGamepadDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGamepads(UserType* output) {
    auto* pointer = data_->gamepads.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::XRGamepadDataView>>(
        pointer, output, context_);
  }
 private:
  internal::XRGamepadData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRRuntimeSessionOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRRuntimeSessionOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRRuntimeSessionOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->immersive = Traits::immersive(input);
    (*output)->environment_integration = Traits::environment_integration(input);
    (*output)->render_process_id = Traits::render_process_id(input);
    (*output)->render_frame_id = Traits::render_frame_id(input);
    (*output)->use_legacy_webvr_render_path = Traits::use_legacy_webvr_render_path(input);
  }

  static bool Deserialize(::device::mojom::internal::XRRuntimeSessionOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRRuntimeSessionOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRGamepadButtonDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRGamepadButtonDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRGamepadButton_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->pressed = Traits::pressed(input);
    (*output)->touched = Traits::touched(input);
    (*output)->value = Traits::value(input);
  }

  static bool Deserialize(::device::mojom::internal::XRGamepadButton_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRGamepadButtonDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRGamepadDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRGamepadDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRGamepad_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->can_provide_orientation = Traits::can_provide_orientation(input);
    (*output)->can_provide_position = Traits::can_provide_position(input);
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
        "null axes in XRGamepad struct");
    decltype(Traits::buttons(input)) in_buttons = Traits::buttons(input);
    typename decltype((*output)->buttons)::BaseType::BufferWriter
        buttons_writer;
    const mojo::internal::ContainerValidateParams buttons_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::XRGamepadButtonDataView>>(
        in_buttons, buffer, &buttons_writer, &buttons_validate_params,
        context);
    (*output)->buttons.Set(
        buttons_writer.is_null() ? nullptr : buttons_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->buttons.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null buttons in XRGamepad struct");
    decltype(Traits::pose(input)) in_pose = Traits::pose(input);
    typename decltype((*output)->pose)::BaseType::BufferWriter
        pose_writer;
    mojo::internal::Serialize<::device::mojom::VRPoseDataView>(
        in_pose, buffer, &pose_writer, context);
    (*output)->pose.Set(
        pose_writer.is_null() ? nullptr : pose_writer.data());
    mojo::internal::Serialize<::device::mojom::XRHandedness>(
        Traits::hand(input), &(*output)->hand);
    (*output)->controller_id = Traits::controller_id(input);
    decltype(Traits::timestamp(input)) in_timestamp = Traits::timestamp(input);
    typename decltype((*output)->timestamp)::BaseType::BufferWriter
        timestamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_timestamp, buffer, &timestamp_writer, context);
    (*output)->timestamp.Set(
        timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->timestamp.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null timestamp in XRGamepad struct");
  }

  static bool Deserialize(::device::mojom::internal::XRGamepad_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRGamepadDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRGamepadDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRGamepadDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRGamepadData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::gamepads(input)) in_gamepads = Traits::gamepads(input);
    typename decltype((*output)->gamepads)::BaseType::BufferWriter
        gamepads_writer;
    const mojo::internal::ContainerValidateParams gamepads_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::XRGamepadDataView>>(
        in_gamepads, buffer, &gamepads_writer, &gamepads_validate_params,
        context);
    (*output)->gamepads.Set(
        gamepads_writer.is_null() ? nullptr : gamepads_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->gamepads.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null gamepads in XRGamepadData struct");
  }

  static bool Deserialize(::device::mojom::internal::XRGamepadData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRGamepadDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {





inline void XRGamepadDataView::GetAxesDataView(
    mojo::ArrayDataView<double>* output) {
  auto pointer = data_->axes.Get();
  *output = mojo::ArrayDataView<double>(pointer, context_);
}
inline void XRGamepadDataView::GetButtonsDataView(
    mojo::ArrayDataView<XRGamepadButtonDataView>* output) {
  auto pointer = data_->buttons.Get();
  *output = mojo::ArrayDataView<XRGamepadButtonDataView>(pointer, context_);
}
inline void XRGamepadDataView::GetPoseDataView(
    ::device::mojom::VRPoseDataView* output) {
  auto pointer = data_->pose.Get();
  *output = ::device::mojom::VRPoseDataView(pointer, context_);
}
inline void XRGamepadDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}


inline void XRGamepadDataDataView::GetGamepadsDataView(
    mojo::ArrayDataView<XRGamepadDataView>* output) {
  auto pointer = data_->gamepads.Get();
  *output = mojo::ArrayDataView<XRGamepadDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_SHARED_H_