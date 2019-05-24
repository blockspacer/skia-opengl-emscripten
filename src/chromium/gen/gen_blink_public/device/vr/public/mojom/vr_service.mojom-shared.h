// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_H_

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
#include "device/vr/public/mojom/vr_service.mojom-shared-internal.h"
#include "device/gamepad/public/mojom/gamepad.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared.h"
#include "gpu/ipc/common/sync_token.mojom-shared.h"
#include "ui/display/mojo/display.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/gpu_fence_handle.mojom-shared.h"
#include "ui/gfx/mojo/transform.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace device {
namespace mojom {
class XRSessionOptionsDataView;

class XRSessionDataView;

class XRPresentationConnectionDataView;

class XRInputSourceDescriptionDataView;

class XRInputSourceStateDataView;

class VRFieldOfViewDataView;

class VRPoseDataView;

class XRRayDataView;

class XRHitResultDataView;

class VRDisplayCapabilitiesDataView;

class VREyeParametersDataView;

class VRStageParametersDataView;

class VRDisplayInfoDataView;

class XRPresentationTransportOptionsDataView;

class XRPlanePointDataDataView;

class XRPlaneDataDataView;

class XRFrameDataDataView;

class XRFrameDataRequestOptionsDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::XRSessionOptionsDataView> {
  using Data = ::device::mojom::internal::XRSessionOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRSessionDataView> {
  using Data = ::device::mojom::internal::XRSession_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRPresentationConnectionDataView> {
  using Data = ::device::mojom::internal::XRPresentationConnection_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRInputSourceDescriptionDataView> {
  using Data = ::device::mojom::internal::XRInputSourceDescription_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRInputSourceStateDataView> {
  using Data = ::device::mojom::internal::XRInputSourceState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VRFieldOfViewDataView> {
  using Data = ::device::mojom::internal::VRFieldOfView_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VRPoseDataView> {
  using Data = ::device::mojom::internal::VRPose_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRRayDataView> {
  using Data = ::device::mojom::internal::XRRay_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRHitResultDataView> {
  using Data = ::device::mojom::internal::XRHitResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VRDisplayCapabilitiesDataView> {
  using Data = ::device::mojom::internal::VRDisplayCapabilities_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VREyeParametersDataView> {
  using Data = ::device::mojom::internal::VREyeParameters_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VRStageParametersDataView> {
  using Data = ::device::mojom::internal::VRStageParameters_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::VRDisplayInfoDataView> {
  using Data = ::device::mojom::internal::VRDisplayInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRPresentationTransportOptionsDataView> {
  using Data = ::device::mojom::internal::XRPresentationTransportOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRPlanePointDataDataView> {
  using Data = ::device::mojom::internal::XRPlanePointData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRPlaneDataDataView> {
  using Data = ::device::mojom::internal::XRPlaneData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRFrameDataDataView> {
  using Data = ::device::mojom::internal::XRFrameData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::XRFrameDataRequestOptionsDataView> {
  using Data = ::device::mojom::internal::XRFrameDataRequestOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class XRDeviceId : int32_t {
  
  LAYOUT_TEST_DEVICE_ID = 0,
  
  GVR_DEVICE_ID = 1,
  
  ARCORE_DEVICE_ID = 4,
  
  ORIENTATION_DEVICE_ID = 5,
  
  FAKE_DEVICE_ID = 6,
  kMinValue = 0,
  kMaxValue = 6,
};

COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) std::ostream& operator<<(std::ostream& os, XRDeviceId value);
inline bool IsKnownEnumValue(XRDeviceId value) {
  return internal::XRDeviceId_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class XRHandedness : int32_t {
  
  NONE = 0,
  
  LEFT = 1,
  
  RIGHT = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) std::ostream& operator<<(std::ostream& os, XRHandedness value);
inline bool IsKnownEnumValue(XRHandedness value) {
  return internal::XRHandedness_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class XRTargetRayMode : int32_t {
  
  GAZING = 1,
  
  POINTING = 2,
  
  TAPPING = 3,
  kMinValue = 1,
  kMaxValue = 3,
};

COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) std::ostream& operator<<(std::ostream& os, XRTargetRayMode value);
inline bool IsKnownEnumValue(XRTargetRayMode value) {
  return internal::XRTargetRayMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class XRPresentationTransportMethod : int32_t {
  
  NONE = 0,
  
  SUBMIT_AS_TEXTURE_HANDLE = 1,
  
  SUBMIT_AS_MAILBOX_HOLDER = 2,
  
  DRAW_INTO_TEXTURE_MAILBOX = 3,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) std::ostream& operator<<(std::ostream& os, XRPresentationTransportMethod value);
inline bool IsKnownEnumValue(XRPresentationTransportMethod value) {
  return internal::XRPresentationTransportMethod_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class XRPlaneOrientation : int32_t {
  
  UNKNOWN = 0,
  
  HORIZONTAL = 1,
  
  VERTICAL = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) std::ostream& operator<<(std::ostream& os, XRPlaneOrientation value);
inline bool IsKnownEnumValue(XRPlaneOrientation value) {
  return internal::XRPlaneOrientation_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class VRDisplayEventReason : int32_t {
  
  NONE = 0,
  
  NAVIGATION = 1,
  
  MOUNTED = 2,
  
  UNMOUNTED = 3,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) std::ostream& operator<<(std::ostream& os, VRDisplayEventReason value);
inline bool IsKnownEnumValue(VRDisplayEventReason value) {
  return internal::VRDisplayEventReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class VRServiceInterfaceBase {};

using VRServicePtrDataView =
    mojo::InterfacePtrDataView<VRServiceInterfaceBase>;
using VRServiceRequestDataView =
    mojo::InterfaceRequestDataView<VRServiceInterfaceBase>;
using VRServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VRServiceInterfaceBase>;
using VRServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VRServiceInterfaceBase>;
class VRServiceClientInterfaceBase {};

using VRServiceClientPtrDataView =
    mojo::InterfacePtrDataView<VRServiceClientInterfaceBase>;
using VRServiceClientRequestDataView =
    mojo::InterfaceRequestDataView<VRServiceClientInterfaceBase>;
using VRServiceClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VRServiceClientInterfaceBase>;
using VRServiceClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VRServiceClientInterfaceBase>;
class XRDeviceInterfaceBase {};

using XRDevicePtrDataView =
    mojo::InterfacePtrDataView<XRDeviceInterfaceBase>;
using XRDeviceRequestDataView =
    mojo::InterfaceRequestDataView<XRDeviceInterfaceBase>;
using XRDeviceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<XRDeviceInterfaceBase>;
using XRDeviceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<XRDeviceInterfaceBase>;
class XREnvironmentIntegrationProviderInterfaceBase {};

using XREnvironmentIntegrationProviderPtrDataView =
    mojo::InterfacePtrDataView<XREnvironmentIntegrationProviderInterfaceBase>;
using XREnvironmentIntegrationProviderRequestDataView =
    mojo::InterfaceRequestDataView<XREnvironmentIntegrationProviderInterfaceBase>;
using XREnvironmentIntegrationProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<XREnvironmentIntegrationProviderInterfaceBase>;
using XREnvironmentIntegrationProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<XREnvironmentIntegrationProviderInterfaceBase>;
class XRFrameDataProviderInterfaceBase {};

using XRFrameDataProviderPtrDataView =
    mojo::InterfacePtrDataView<XRFrameDataProviderInterfaceBase>;
using XRFrameDataProviderRequestDataView =
    mojo::InterfaceRequestDataView<XRFrameDataProviderInterfaceBase>;
using XRFrameDataProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<XRFrameDataProviderInterfaceBase>;
using XRFrameDataProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<XRFrameDataProviderInterfaceBase>;
class XRPresentationProviderInterfaceBase {};

using XRPresentationProviderPtrDataView =
    mojo::InterfacePtrDataView<XRPresentationProviderInterfaceBase>;
using XRPresentationProviderRequestDataView =
    mojo::InterfaceRequestDataView<XRPresentationProviderInterfaceBase>;
using XRPresentationProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<XRPresentationProviderInterfaceBase>;
using XRPresentationProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<XRPresentationProviderInterfaceBase>;
class XRPresentationClientInterfaceBase {};

using XRPresentationClientPtrDataView =
    mojo::InterfacePtrDataView<XRPresentationClientInterfaceBase>;
using XRPresentationClientRequestDataView =
    mojo::InterfaceRequestDataView<XRPresentationClientInterfaceBase>;
using XRPresentationClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<XRPresentationClientInterfaceBase>;
using XRPresentationClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<XRPresentationClientInterfaceBase>;
class XRSessionClientInterfaceBase {};

using XRSessionClientPtrDataView =
    mojo::InterfacePtrDataView<XRSessionClientInterfaceBase>;
using XRSessionClientRequestDataView =
    mojo::InterfaceRequestDataView<XRSessionClientInterfaceBase>;
using XRSessionClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<XRSessionClientInterfaceBase>;
using XRSessionClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<XRSessionClientInterfaceBase>;
class VRDisplayClientInterfaceBase {};

using VRDisplayClientPtrDataView =
    mojo::InterfacePtrDataView<VRDisplayClientInterfaceBase>;
using VRDisplayClientRequestDataView =
    mojo::InterfaceRequestDataView<VRDisplayClientInterfaceBase>;
using VRDisplayClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VRDisplayClientInterfaceBase>;
using VRDisplayClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VRDisplayClientInterfaceBase>;
class XRSessionOptionsDataView {
 public:
  XRSessionOptionsDataView() {}

  XRSessionOptionsDataView(
      internal::XRSessionOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool immersive() const {
    return data_->immersive;
  }
  bool environment_integration() const {
    return data_->environment_integration;
  }
  bool use_legacy_webvr_render_path() const {
    return data_->use_legacy_webvr_render_path;
  }
 private:
  internal::XRSessionOptions_Data* data_ = nullptr;
};

class XRSessionDataView {
 public:
  XRSessionDataView() {}

  XRSessionDataView(
      internal::XRSession_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDataProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::XRFrameDataProviderPtrDataView>(
            &data_->data_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::XRSessionClientRequestDataView>(
            &data_->client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDisplayInfoDataView(
      VRDisplayInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayInfo(UserType* output) {
    auto* pointer = data_->display_info.Get();
    return mojo::internal::Deserialize<::device::mojom::VRDisplayInfoDataView>(
        pointer, output, context_);
  }
  inline void GetSubmitFrameSinkDataView(
      XRPresentationConnectionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubmitFrameSink(UserType* output) {
    auto* pointer = data_->submit_frame_sink.Get();
    return mojo::internal::Deserialize<::device::mojom::XRPresentationConnectionDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRSession_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRPresentationConnectionDataView {
 public:
  XRPresentationConnectionDataView() {}

  XRPresentationConnectionDataView(
      internal::XRPresentationConnection_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::XRPresentationProviderPtrDataView>(
            &data_->provider, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::XRPresentationClientRequestDataView>(
            &data_->client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetTransportOptionsDataView(
      XRPresentationTransportOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransportOptions(UserType* output) {
    auto* pointer = data_->transport_options.Get();
    return mojo::internal::Deserialize<::device::mojom::XRPresentationTransportOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRPresentationConnection_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRInputSourceDescriptionDataView {
 public:
  XRInputSourceDescriptionDataView() {}

  XRInputSourceDescriptionDataView(
      internal::XRInputSourceDescription_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTargetRayMode(UserType* output) const {
    auto data_value = data_->target_ray_mode;
    return mojo::internal::Deserialize<::device::mojom::XRTargetRayMode>(
        data_value, output);
  }

  XRTargetRayMode target_ray_mode() const {
    return static_cast<XRTargetRayMode>(data_->target_ray_mode);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHandedness(UserType* output) const {
    auto data_value = data_->handedness;
    return mojo::internal::Deserialize<::device::mojom::XRHandedness>(
        data_value, output);
  }

  XRHandedness handedness() const {
    return static_cast<XRHandedness>(data_->handedness);
  }
  bool emulated_position() const {
    return data_->emulated_position;
  }
  inline void GetPointerOffsetDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointerOffset(UserType* output) {
    auto* pointer = data_->pointer_offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRInputSourceDescription_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRInputSourceStateDataView {
 public:
  XRInputSourceStateDataView() {}

  XRInputSourceStateDataView(
      internal::XRInputSourceState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t source_id() const {
    return data_->source_id;
  }
  inline void GetDescriptionDataView(
      XRInputSourceDescriptionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<::device::mojom::XRInputSourceDescriptionDataView>(
        pointer, output, context_);
  }
  inline void GetGripDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGrip(UserType* output) {
    auto* pointer = data_->grip.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformDataView>(
        pointer, output, context_);
  }
  bool primary_input_pressed() const {
    return data_->primary_input_pressed;
  }
  bool primary_input_clicked() const {
    return data_->primary_input_clicked;
  }
  inline void GetGamepadDataView(
      ::device::mojom::GamepadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGamepad(UserType* output) {
    auto* pointer = data_->gamepad.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRInputSourceState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRFieldOfViewDataView {
 public:
  VRFieldOfViewDataView() {}

  VRFieldOfViewDataView(
      internal::VRFieldOfView_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float upDegrees() const {
    return data_->upDegrees;
  }
  float downDegrees() const {
    return data_->downDegrees;
  }
  float leftDegrees() const {
    return data_->leftDegrees;
  }
  float rightDegrees() const {
    return data_->rightDegrees;
  }
 private:
  internal::VRFieldOfView_Data* data_ = nullptr;
};

class VRPoseDataView {
 public:
  VRPoseDataView() {}

  VRPoseDataView(
      internal::VRPose_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOrientationDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrientation(UserType* output) {
    auto* pointer = data_->orientation.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetPositionDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPosition(UserType* output) {
    auto* pointer = data_->position.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetAngularVelocityDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAngularVelocity(UserType* output) {
    auto* pointer = data_->angularVelocity.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetLinearVelocityDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLinearVelocity(UserType* output) {
    auto* pointer = data_->linearVelocity.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetAngularAccelerationDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAngularAcceleration(UserType* output) {
    auto* pointer = data_->angularAcceleration.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetLinearAccelerationDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLinearAcceleration(UserType* output) {
    auto* pointer = data_->linearAcceleration.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetInputStateDataView(
      mojo::ArrayDataView<XRInputSourceStateDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputState(UserType* output) {
    auto* pointer = data_->input_state.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::XRInputSourceStateDataView>>(
        pointer, output, context_);
  }
  bool pose_reset() const {
    return data_->pose_reset;
  }
 private:
  internal::VRPose_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRRayDataView {
 public:
  XRRayDataView() {}

  XRRayDataView(
      internal::XRRay_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::gfx::mojom::Point3FDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Point3FDataView>(
        pointer, output, context_);
  }
  inline void GetDirectionDataView(
      ::gfx::mojom::Vector3dFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirection(UserType* output) {
    auto* pointer = data_->direction.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector3dFDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRRay_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRHitResultDataView {
 public:
  XRHitResultDataView() {}

  XRHitResultDataView(
      internal::XRHitResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHitMatrixDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHitMatrix(UserType* output) {
    auto* pointer = data_->hit_matrix.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
 private:
  internal::XRHitResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRDisplayCapabilitiesDataView {
 public:
  VRDisplayCapabilitiesDataView() {}

  VRDisplayCapabilitiesDataView(
      internal::VRDisplayCapabilities_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool hasPosition() const {
    return data_->hasPosition;
  }
  bool hasExternalDisplay() const {
    return data_->hasExternalDisplay;
  }
  bool canPresent() const {
    return data_->canPresent;
  }
  bool canProvideEnvironmentIntegration() const {
    return data_->canProvideEnvironmentIntegration;
  }
 private:
  internal::VRDisplayCapabilities_Data* data_ = nullptr;
};

class VREyeParametersDataView {
 public:
  VREyeParametersDataView() {}

  VREyeParametersDataView(
      internal::VREyeParameters_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFieldOfViewDataView(
      VRFieldOfViewDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFieldOfView(UserType* output) {
    auto* pointer = data_->fieldOfView.Get();
    return mojo::internal::Deserialize<::device::mojom::VRFieldOfViewDataView>(
        pointer, output, context_);
  }
  inline void GetOffsetDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOffset(UserType* output) {
    auto* pointer = data_->offset.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  uint32_t renderWidth() const {
    return data_->renderWidth;
  }
  uint32_t renderHeight() const {
    return data_->renderHeight;
  }
 private:
  internal::VREyeParameters_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRStageParametersDataView {
 public:
  VRStageParametersDataView() {}

  VRStageParametersDataView(
      internal::VRStageParameters_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStandingTransformDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStandingTransform(UserType* output) {
    auto* pointer = data_->standingTransform.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  float sizeX() const {
    return data_->sizeX;
  }
  float sizeZ() const {
    return data_->sizeZ;
  }
  inline void GetBoundsDataView(
      mojo::ArrayDataView<::gfx::mojom::Point3FDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBounds(UserType* output) {
    auto* pointer = data_->bounds.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::Point3FDataView>>(
        pointer, output, context_);
  }
 private:
  internal::VRStageParameters_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRDisplayInfoDataView {
 public:
  VRDisplayInfoDataView() {}

  VRDisplayInfoDataView(
      internal::VRDisplayInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) const {
    auto data_value = data_->id;
    return mojo::internal::Deserialize<::device::mojom::XRDeviceId>(
        data_value, output);
  }

  XRDeviceId id() const {
    return static_cast<XRDeviceId>(data_->id);
  }
  inline void GetDisplayNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayName(UserType* output) {
    auto* pointer = data_->displayName.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCapabilitiesDataView(
      VRDisplayCapabilitiesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCapabilities(UserType* output) {
    auto* pointer = data_->capabilities.Get();
    return mojo::internal::Deserialize<::device::mojom::VRDisplayCapabilitiesDataView>(
        pointer, output, context_);
  }
  inline void GetStageParametersDataView(
      VRStageParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStageParameters(UserType* output) {
    auto* pointer = data_->stageParameters.Get();
    return mojo::internal::Deserialize<::device::mojom::VRStageParametersDataView>(
        pointer, output, context_);
  }
  inline void GetLeftEyeDataView(
      VREyeParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLeftEye(UserType* output) {
    auto* pointer = data_->leftEye.Get();
    return mojo::internal::Deserialize<::device::mojom::VREyeParametersDataView>(
        pointer, output, context_);
  }
  inline void GetRightEyeDataView(
      VREyeParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRightEye(UserType* output) {
    auto* pointer = data_->rightEye.Get();
    return mojo::internal::Deserialize<::device::mojom::VREyeParametersDataView>(
        pointer, output, context_);
  }
  float webvr_default_framebuffer_scale() const {
    return data_->webvr_default_framebuffer_scale;
  }
  float webxr_default_framebuffer_scale() const {
    return data_->webxr_default_framebuffer_scale;
  }
 private:
  internal::VRDisplayInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRPresentationTransportOptionsDataView {
 public:
  XRPresentationTransportOptionsDataView() {}

  XRPresentationTransportOptionsDataView(
      internal::XRPresentationTransportOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransportMethod(UserType* output) const {
    auto data_value = data_->transport_method;
    return mojo::internal::Deserialize<::device::mojom::XRPresentationTransportMethod>(
        data_value, output);
  }

  XRPresentationTransportMethod transport_method() const {
    return static_cast<XRPresentationTransportMethod>(data_->transport_method);
  }
  bool wait_for_transfer_notification() const {
    return data_->wait_for_transfer_notification;
  }
  bool wait_for_render_notification() const {
    return data_->wait_for_render_notification;
  }
  bool wait_for_gpu_fence() const {
    return data_->wait_for_gpu_fence;
  }
 private:
  internal::XRPresentationTransportOptions_Data* data_ = nullptr;
};

class XRPlanePointDataDataView {
 public:
  XRPlanePointDataDataView() {}

  XRPlanePointDataDataView(
      internal::XRPlanePointData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float z() const {
    return data_->z;
  }
 private:
  internal::XRPlanePointData_Data* data_ = nullptr;
};

class XRPlaneDataDataView {
 public:
  XRPlaneDataDataView() {}

  XRPlaneDataDataView(
      internal::XRPlaneData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t id() const {
    return data_->id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrientation(UserType* output) const {
    auto data_value = data_->orientation;
    return mojo::internal::Deserialize<::device::mojom::XRPlaneOrientation>(
        data_value, output);
  }

  XRPlaneOrientation orientation() const {
    return static_cast<XRPlaneOrientation>(data_->orientation);
  }
  inline void GetPoseDataView(
      VRPoseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPose(UserType* output) {
    auto* pointer = data_->pose.Get();
    return mojo::internal::Deserialize<::device::mojom::VRPoseDataView>(
        pointer, output, context_);
  }
  inline void GetPolygonDataView(
      mojo::ArrayDataView<XRPlanePointDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPolygon(UserType* output) {
    auto* pointer = data_->polygon.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::XRPlanePointDataDataView>>(
        pointer, output, context_);
  }
 private:
  internal::XRPlaneData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRFrameDataDataView {
 public:
  XRFrameDataDataView() {}

  XRFrameDataDataView(
      internal::XRFrameData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPoseDataView(
      VRPoseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPose(UserType* output) {
    auto* pointer = data_->pose.Get();
    return mojo::internal::Deserialize<::device::mojom::VRPoseDataView>(
        pointer, output, context_);
  }
  inline void GetTimeDeltaDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeDelta(UserType* output) {
    auto* pointer = data_->time_delta.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetBufferHolderDataView(
      ::gpu::mojom::MailboxHolderDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBufferHolder(UserType* output) {
    auto* pointer = data_->buffer_holder.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxHolderDataView>(
        pointer, output, context_);
  }
  int16_t frame_id() const {
    return data_->frame_id;
  }
  inline void GetLeftEyeDataView(
      VREyeParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLeftEye(UserType* output) {
    auto* pointer = data_->left_eye.Get();
    return mojo::internal::Deserialize<::device::mojom::VREyeParametersDataView>(
        pointer, output, context_);
  }
  inline void GetRightEyeDataView(
      VREyeParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRightEye(UserType* output) {
    auto* pointer = data_->right_eye.Get();
    return mojo::internal::Deserialize<::device::mojom::VREyeParametersDataView>(
        pointer, output, context_);
  }
  bool stage_parameters_updated() const {
    return data_->stage_parameters_updated;
  }
  inline void GetStageParametersDataView(
      VRStageParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStageParameters(UserType* output) {
    auto* pointer = data_->stage_parameters.Get();
    return mojo::internal::Deserialize<::device::mojom::VRStageParametersDataView>(
        pointer, output, context_);
  }
  inline void GetDetectedPlanesDataView(
      mojo::ArrayDataView<XRPlaneDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDetectedPlanes(UserType* output) {
    auto* pointer = data_->detected_planes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::XRPlaneDataDataView>>(
        pointer, output, context_);
  }
 private:
  internal::XRFrameData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRFrameDataRequestOptionsDataView {
 public:
  XRFrameDataRequestOptionsDataView() {}

  XRFrameDataRequestOptionsDataView(
      internal::XRFrameDataRequestOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool include_plane_data() const {
    return data_->include_plane_data;
  }
 private:
  internal::XRFrameDataRequestOptions_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::XRDeviceId>
    : public mojo::internal::EnumHashImpl<::device::mojom::XRDeviceId> {};

template <>
struct hash<::device::mojom::XRHandedness>
    : public mojo::internal::EnumHashImpl<::device::mojom::XRHandedness> {};

template <>
struct hash<::device::mojom::XRTargetRayMode>
    : public mojo::internal::EnumHashImpl<::device::mojom::XRTargetRayMode> {};

template <>
struct hash<::device::mojom::XRPresentationTransportMethod>
    : public mojo::internal::EnumHashImpl<::device::mojom::XRPresentationTransportMethod> {};

template <>
struct hash<::device::mojom::XRPlaneOrientation>
    : public mojo::internal::EnumHashImpl<::device::mojom::XRPlaneOrientation> {};

template <>
struct hash<::device::mojom::VRDisplayEventReason>
    : public mojo::internal::EnumHashImpl<::device::mojom::VRDisplayEventReason> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::XRDeviceId, ::device::mojom::XRDeviceId> {
  static ::device::mojom::XRDeviceId ToMojom(::device::mojom::XRDeviceId input) { return input; }
  static bool FromMojom(::device::mojom::XRDeviceId input, ::device::mojom::XRDeviceId* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRDeviceId, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::XRDeviceId, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::XRDeviceId>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::XRHandedness, ::device::mojom::XRHandedness> {
  static ::device::mojom::XRHandedness ToMojom(::device::mojom::XRHandedness input) { return input; }
  static bool FromMojom(::device::mojom::XRHandedness input, ::device::mojom::XRHandedness* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRHandedness, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::XRHandedness, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::XRHandedness>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::XRTargetRayMode, ::device::mojom::XRTargetRayMode> {
  static ::device::mojom::XRTargetRayMode ToMojom(::device::mojom::XRTargetRayMode input) { return input; }
  static bool FromMojom(::device::mojom::XRTargetRayMode input, ::device::mojom::XRTargetRayMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRTargetRayMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::XRTargetRayMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::XRTargetRayMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::XRPresentationTransportMethod, ::device::mojom::XRPresentationTransportMethod> {
  static ::device::mojom::XRPresentationTransportMethod ToMojom(::device::mojom::XRPresentationTransportMethod input) { return input; }
  static bool FromMojom(::device::mojom::XRPresentationTransportMethod input, ::device::mojom::XRPresentationTransportMethod* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRPresentationTransportMethod, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::XRPresentationTransportMethod, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::XRPresentationTransportMethod>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::XRPlaneOrientation, ::device::mojom::XRPlaneOrientation> {
  static ::device::mojom::XRPlaneOrientation ToMojom(::device::mojom::XRPlaneOrientation input) { return input; }
  static bool FromMojom(::device::mojom::XRPlaneOrientation input, ::device::mojom::XRPlaneOrientation* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRPlaneOrientation, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::XRPlaneOrientation, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::XRPlaneOrientation>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::VRDisplayEventReason, ::device::mojom::VRDisplayEventReason> {
  static ::device::mojom::VRDisplayEventReason ToMojom(::device::mojom::VRDisplayEventReason input) { return input; }
  static bool FromMojom(::device::mojom::VRDisplayEventReason input, ::device::mojom::VRDisplayEventReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRDisplayEventReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::VRDisplayEventReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::VRDisplayEventReason>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRSessionOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRSessionOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRSessionOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->immersive = Traits::immersive(input);
    (*output)->environment_integration = Traits::environment_integration(input);
    (*output)->use_legacy_webvr_render_path = Traits::use_legacy_webvr_render_path(input);
  }

  static bool Deserialize(::device::mojom::internal::XRSessionOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRSessionOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRSessionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRSessionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRSession_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::data_provider(input)) in_data_provider = Traits::data_provider(input);
    mojo::internal::Serialize<::device::mojom::XRFrameDataProviderPtrDataView>(
        in_data_provider, &(*output)->data_provider, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->data_provider),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid data_provider in XRSession struct");
    decltype(Traits::client_request(input)) in_client_request = Traits::client_request(input);
    mojo::internal::Serialize<::device::mojom::XRSessionClientRequestDataView>(
        in_client_request, &(*output)->client_request, context);
    decltype(Traits::display_info(input)) in_display_info = Traits::display_info(input);
    typename decltype((*output)->display_info)::BaseType::BufferWriter
        display_info_writer;
    mojo::internal::Serialize<::device::mojom::VRDisplayInfoDataView>(
        in_display_info, buffer, &display_info_writer, context);
    (*output)->display_info.Set(
        display_info_writer.is_null() ? nullptr : display_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->display_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null display_info in XRSession struct");
    decltype(Traits::submit_frame_sink(input)) in_submit_frame_sink = Traits::submit_frame_sink(input);
    typename decltype((*output)->submit_frame_sink)::BaseType::BufferWriter
        submit_frame_sink_writer;
    mojo::internal::Serialize<::device::mojom::XRPresentationConnectionDataView>(
        in_submit_frame_sink, buffer, &submit_frame_sink_writer, context);
    (*output)->submit_frame_sink.Set(
        submit_frame_sink_writer.is_null() ? nullptr : submit_frame_sink_writer.data());
  }

  static bool Deserialize(::device::mojom::internal::XRSession_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRSessionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRPresentationConnectionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRPresentationConnectionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRPresentationConnection_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::provider(input)) in_provider = Traits::provider(input);
    mojo::internal::Serialize<::device::mojom::XRPresentationProviderPtrDataView>(
        in_provider, &(*output)->provider, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->provider),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid provider in XRPresentationConnection struct");
    decltype(Traits::client_request(input)) in_client_request = Traits::client_request(input);
    mojo::internal::Serialize<::device::mojom::XRPresentationClientRequestDataView>(
        in_client_request, &(*output)->client_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->client_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid client_request in XRPresentationConnection struct");
    decltype(Traits::transport_options(input)) in_transport_options = Traits::transport_options(input);
    typename decltype((*output)->transport_options)::BaseType::BufferWriter
        transport_options_writer;
    mojo::internal::Serialize<::device::mojom::XRPresentationTransportOptionsDataView>(
        in_transport_options, buffer, &transport_options_writer, context);
    (*output)->transport_options.Set(
        transport_options_writer.is_null() ? nullptr : transport_options_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->transport_options.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null transport_options in XRPresentationConnection struct");
  }

  static bool Deserialize(::device::mojom::internal::XRPresentationConnection_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRPresentationConnectionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRInputSourceDescriptionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRInputSourceDescriptionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRInputSourceDescription_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::device::mojom::XRTargetRayMode>(
        Traits::target_ray_mode(input), &(*output)->target_ray_mode);
    mojo::internal::Serialize<::device::mojom::XRHandedness>(
        Traits::handedness(input), &(*output)->handedness);
    (*output)->emulated_position = Traits::emulated_position(input);
    decltype(Traits::pointer_offset(input)) in_pointer_offset = Traits::pointer_offset(input);
    typename decltype((*output)->pointer_offset)::BaseType::BufferWriter
        pointer_offset_writer;
    mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
        in_pointer_offset, buffer, &pointer_offset_writer, context);
    (*output)->pointer_offset.Set(
        pointer_offset_writer.is_null() ? nullptr : pointer_offset_writer.data());
  }

  static bool Deserialize(::device::mojom::internal::XRInputSourceDescription_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRInputSourceDescriptionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRInputSourceStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRInputSourceStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRInputSourceState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->source_id = Traits::source_id(input);
    decltype(Traits::description(input)) in_description = Traits::description(input);
    typename decltype((*output)->description)::BaseType::BufferWriter
        description_writer;
    mojo::internal::Serialize<::device::mojom::XRInputSourceDescriptionDataView>(
        in_description, buffer, &description_writer, context);
    (*output)->description.Set(
        description_writer.is_null() ? nullptr : description_writer.data());
    decltype(Traits::grip(input)) in_grip = Traits::grip(input);
    typename decltype((*output)->grip)::BaseType::BufferWriter
        grip_writer;
    mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
        in_grip, buffer, &grip_writer, context);
    (*output)->grip.Set(
        grip_writer.is_null() ? nullptr : grip_writer.data());
    (*output)->primary_input_pressed = Traits::primary_input_pressed(input);
    (*output)->primary_input_clicked = Traits::primary_input_clicked(input);
    decltype(Traits::gamepad(input)) in_gamepad = Traits::gamepad(input);
    typename decltype((*output)->gamepad)::BaseType::BufferWriter
        gamepad_writer;
    mojo::internal::Serialize<::device::mojom::GamepadDataView>(
        in_gamepad, buffer, &gamepad_writer, context);
    (*output)->gamepad.Set(
        gamepad_writer.is_null() ? nullptr : gamepad_writer.data());
  }

  static bool Deserialize(::device::mojom::internal::XRInputSourceState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRInputSourceStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRFieldOfViewDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VRFieldOfViewDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VRFieldOfView_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->upDegrees = Traits::upDegrees(input);
    (*output)->downDegrees = Traits::downDegrees(input);
    (*output)->leftDegrees = Traits::leftDegrees(input);
    (*output)->rightDegrees = Traits::rightDegrees(input);
  }

  static bool Deserialize(::device::mojom::internal::VRFieldOfView_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VRFieldOfViewDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRPoseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VRPoseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VRPose_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::orientation(input)) in_orientation = Traits::orientation(input);
    typename decltype((*output)->orientation)::BaseType::BufferWriter
        orientation_writer;
    const mojo::internal::ContainerValidateParams orientation_validate_params(
        4, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_orientation, buffer, &orientation_writer, &orientation_validate_params,
        context);
    (*output)->orientation.Set(
        orientation_writer.is_null() ? nullptr : orientation_writer.data());
    decltype(Traits::position(input)) in_position = Traits::position(input);
    typename decltype((*output)->position)::BaseType::BufferWriter
        position_writer;
    const mojo::internal::ContainerValidateParams position_validate_params(
        3, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_position, buffer, &position_writer, &position_validate_params,
        context);
    (*output)->position.Set(
        position_writer.is_null() ? nullptr : position_writer.data());
    decltype(Traits::angularVelocity(input)) in_angularVelocity = Traits::angularVelocity(input);
    typename decltype((*output)->angularVelocity)::BaseType::BufferWriter
        angularVelocity_writer;
    const mojo::internal::ContainerValidateParams angularVelocity_validate_params(
        3, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_angularVelocity, buffer, &angularVelocity_writer, &angularVelocity_validate_params,
        context);
    (*output)->angularVelocity.Set(
        angularVelocity_writer.is_null() ? nullptr : angularVelocity_writer.data());
    decltype(Traits::linearVelocity(input)) in_linearVelocity = Traits::linearVelocity(input);
    typename decltype((*output)->linearVelocity)::BaseType::BufferWriter
        linearVelocity_writer;
    const mojo::internal::ContainerValidateParams linearVelocity_validate_params(
        3, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_linearVelocity, buffer, &linearVelocity_writer, &linearVelocity_validate_params,
        context);
    (*output)->linearVelocity.Set(
        linearVelocity_writer.is_null() ? nullptr : linearVelocity_writer.data());
    decltype(Traits::angularAcceleration(input)) in_angularAcceleration = Traits::angularAcceleration(input);
    typename decltype((*output)->angularAcceleration)::BaseType::BufferWriter
        angularAcceleration_writer;
    const mojo::internal::ContainerValidateParams angularAcceleration_validate_params(
        3, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_angularAcceleration, buffer, &angularAcceleration_writer, &angularAcceleration_validate_params,
        context);
    (*output)->angularAcceleration.Set(
        angularAcceleration_writer.is_null() ? nullptr : angularAcceleration_writer.data());
    decltype(Traits::linearAcceleration(input)) in_linearAcceleration = Traits::linearAcceleration(input);
    typename decltype((*output)->linearAcceleration)::BaseType::BufferWriter
        linearAcceleration_writer;
    const mojo::internal::ContainerValidateParams linearAcceleration_validate_params(
        3, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_linearAcceleration, buffer, &linearAcceleration_writer, &linearAcceleration_validate_params,
        context);
    (*output)->linearAcceleration.Set(
        linearAcceleration_writer.is_null() ? nullptr : linearAcceleration_writer.data());
    decltype(Traits::input_state(input)) in_input_state = Traits::input_state(input);
    typename decltype((*output)->input_state)::BaseType::BufferWriter
        input_state_writer;
    const mojo::internal::ContainerValidateParams input_state_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::XRInputSourceStateDataView>>(
        in_input_state, buffer, &input_state_writer, &input_state_validate_params,
        context);
    (*output)->input_state.Set(
        input_state_writer.is_null() ? nullptr : input_state_writer.data());
    (*output)->pose_reset = Traits::pose_reset(input);
  }

  static bool Deserialize(::device::mojom::internal::VRPose_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VRPoseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRRayDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRRayDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRRay_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::origin(input)) in_origin = Traits::origin(input);
    typename decltype((*output)->origin)::BaseType::BufferWriter
        origin_writer;
    mojo::internal::Serialize<::gfx::mojom::Point3FDataView>(
        in_origin, buffer, &origin_writer, context);
    (*output)->origin.Set(
        origin_writer.is_null() ? nullptr : origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origin in XRRay struct");
    decltype(Traits::direction(input)) in_direction = Traits::direction(input);
    typename decltype((*output)->direction)::BaseType::BufferWriter
        direction_writer;
    mojo::internal::Serialize<::gfx::mojom::Vector3dFDataView>(
        in_direction, buffer, &direction_writer, context);
    (*output)->direction.Set(
        direction_writer.is_null() ? nullptr : direction_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->direction.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null direction in XRRay struct");
  }

  static bool Deserialize(::device::mojom::internal::XRRay_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRRayDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRHitResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRHitResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRHitResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::hit_matrix(input)) in_hit_matrix = Traits::hit_matrix(input);
    typename decltype((*output)->hit_matrix)::BaseType::BufferWriter
        hit_matrix_writer;
    const mojo::internal::ContainerValidateParams hit_matrix_validate_params(
        16, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_hit_matrix, buffer, &hit_matrix_writer, &hit_matrix_validate_params,
        context);
    (*output)->hit_matrix.Set(
        hit_matrix_writer.is_null() ? nullptr : hit_matrix_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->hit_matrix.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null hit_matrix in XRHitResult struct");
  }

  static bool Deserialize(::device::mojom::internal::XRHitResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRHitResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRDisplayCapabilitiesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VRDisplayCapabilitiesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VRDisplayCapabilities_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->hasPosition = Traits::hasPosition(input);
    (*output)->hasExternalDisplay = Traits::hasExternalDisplay(input);
    (*output)->canPresent = Traits::canPresent(input);
    (*output)->canProvideEnvironmentIntegration = Traits::canProvideEnvironmentIntegration(input);
  }

  static bool Deserialize(::device::mojom::internal::VRDisplayCapabilities_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VRDisplayCapabilitiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VREyeParametersDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VREyeParametersDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VREyeParameters_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::fieldOfView(input)) in_fieldOfView = Traits::fieldOfView(input);
    typename decltype((*output)->fieldOfView)::BaseType::BufferWriter
        fieldOfView_writer;
    mojo::internal::Serialize<::device::mojom::VRFieldOfViewDataView>(
        in_fieldOfView, buffer, &fieldOfView_writer, context);
    (*output)->fieldOfView.Set(
        fieldOfView_writer.is_null() ? nullptr : fieldOfView_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->fieldOfView.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null fieldOfView in VREyeParameters struct");
    decltype(Traits::offset(input)) in_offset = Traits::offset(input);
    typename decltype((*output)->offset)::BaseType::BufferWriter
        offset_writer;
    const mojo::internal::ContainerValidateParams offset_validate_params(
        3, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_offset, buffer, &offset_writer, &offset_validate_params,
        context);
    (*output)->offset.Set(
        offset_writer.is_null() ? nullptr : offset_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->offset.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null offset in VREyeParameters struct");
    (*output)->renderWidth = Traits::renderWidth(input);
    (*output)->renderHeight = Traits::renderHeight(input);
  }

  static bool Deserialize(::device::mojom::internal::VREyeParameters_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VREyeParametersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRStageParametersDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VRStageParametersDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VRStageParameters_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::standingTransform(input)) in_standingTransform = Traits::standingTransform(input);
    typename decltype((*output)->standingTransform)::BaseType::BufferWriter
        standingTransform_writer;
    const mojo::internal::ContainerValidateParams standingTransform_validate_params(
        16, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_standingTransform, buffer, &standingTransform_writer, &standingTransform_validate_params,
        context);
    (*output)->standingTransform.Set(
        standingTransform_writer.is_null() ? nullptr : standingTransform_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->standingTransform.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null standingTransform in VRStageParameters struct");
    (*output)->sizeX = Traits::sizeX(input);
    (*output)->sizeZ = Traits::sizeZ(input);
    decltype(Traits::bounds(input)) in_bounds = Traits::bounds(input);
    typename decltype((*output)->bounds)::BaseType::BufferWriter
        bounds_writer;
    const mojo::internal::ContainerValidateParams bounds_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::Point3FDataView>>(
        in_bounds, buffer, &bounds_writer, &bounds_validate_params,
        context);
    (*output)->bounds.Set(
        bounds_writer.is_null() ? nullptr : bounds_writer.data());
  }

  static bool Deserialize(::device::mojom::internal::VRStageParameters_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VRStageParametersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::VRDisplayInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::VRDisplayInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::VRDisplayInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::device::mojom::XRDeviceId>(
        Traits::id(input), &(*output)->id);
    decltype(Traits::displayName(input)) in_displayName = Traits::displayName(input);
    typename decltype((*output)->displayName)::BaseType::BufferWriter
        displayName_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_displayName, buffer, &displayName_writer, context);
    (*output)->displayName.Set(
        displayName_writer.is_null() ? nullptr : displayName_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->displayName.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null displayName in VRDisplayInfo struct");
    decltype(Traits::capabilities(input)) in_capabilities = Traits::capabilities(input);
    typename decltype((*output)->capabilities)::BaseType::BufferWriter
        capabilities_writer;
    mojo::internal::Serialize<::device::mojom::VRDisplayCapabilitiesDataView>(
        in_capabilities, buffer, &capabilities_writer, context);
    (*output)->capabilities.Set(
        capabilities_writer.is_null() ? nullptr : capabilities_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->capabilities.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null capabilities in VRDisplayInfo struct");
    decltype(Traits::stageParameters(input)) in_stageParameters = Traits::stageParameters(input);
    typename decltype((*output)->stageParameters)::BaseType::BufferWriter
        stageParameters_writer;
    mojo::internal::Serialize<::device::mojom::VRStageParametersDataView>(
        in_stageParameters, buffer, &stageParameters_writer, context);
    (*output)->stageParameters.Set(
        stageParameters_writer.is_null() ? nullptr : stageParameters_writer.data());
    decltype(Traits::leftEye(input)) in_leftEye = Traits::leftEye(input);
    typename decltype((*output)->leftEye)::BaseType::BufferWriter
        leftEye_writer;
    mojo::internal::Serialize<::device::mojom::VREyeParametersDataView>(
        in_leftEye, buffer, &leftEye_writer, context);
    (*output)->leftEye.Set(
        leftEye_writer.is_null() ? nullptr : leftEye_writer.data());
    decltype(Traits::rightEye(input)) in_rightEye = Traits::rightEye(input);
    typename decltype((*output)->rightEye)::BaseType::BufferWriter
        rightEye_writer;
    mojo::internal::Serialize<::device::mojom::VREyeParametersDataView>(
        in_rightEye, buffer, &rightEye_writer, context);
    (*output)->rightEye.Set(
        rightEye_writer.is_null() ? nullptr : rightEye_writer.data());
    (*output)->webvr_default_framebuffer_scale = Traits::webvr_default_framebuffer_scale(input);
    (*output)->webxr_default_framebuffer_scale = Traits::webxr_default_framebuffer_scale(input);
  }

  static bool Deserialize(::device::mojom::internal::VRDisplayInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::VRDisplayInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRPresentationTransportOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRPresentationTransportOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRPresentationTransportOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::device::mojom::XRPresentationTransportMethod>(
        Traits::transport_method(input), &(*output)->transport_method);
    (*output)->wait_for_transfer_notification = Traits::wait_for_transfer_notification(input);
    (*output)->wait_for_render_notification = Traits::wait_for_render_notification(input);
    (*output)->wait_for_gpu_fence = Traits::wait_for_gpu_fence(input);
  }

  static bool Deserialize(::device::mojom::internal::XRPresentationTransportOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRPresentationTransportOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRPlanePointDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRPlanePointDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRPlanePointData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->z = Traits::z(input);
  }

  static bool Deserialize(::device::mojom::internal::XRPlanePointData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRPlanePointDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRPlaneDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRPlaneDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRPlaneData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->id = Traits::id(input);
    mojo::internal::Serialize<::device::mojom::XRPlaneOrientation>(
        Traits::orientation(input), &(*output)->orientation);
    decltype(Traits::pose(input)) in_pose = Traits::pose(input);
    typename decltype((*output)->pose)::BaseType::BufferWriter
        pose_writer;
    mojo::internal::Serialize<::device::mojom::VRPoseDataView>(
        in_pose, buffer, &pose_writer, context);
    (*output)->pose.Set(
        pose_writer.is_null() ? nullptr : pose_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pose.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pose in XRPlaneData struct");
    decltype(Traits::polygon(input)) in_polygon = Traits::polygon(input);
    typename decltype((*output)->polygon)::BaseType::BufferWriter
        polygon_writer;
    const mojo::internal::ContainerValidateParams polygon_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::XRPlanePointDataDataView>>(
        in_polygon, buffer, &polygon_writer, &polygon_validate_params,
        context);
    (*output)->polygon.Set(
        polygon_writer.is_null() ? nullptr : polygon_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->polygon.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null polygon in XRPlaneData struct");
  }

  static bool Deserialize(::device::mojom::internal::XRPlaneData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRPlaneDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRFrameDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRFrameDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRFrameData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::pose(input)) in_pose = Traits::pose(input);
    typename decltype((*output)->pose)::BaseType::BufferWriter
        pose_writer;
    mojo::internal::Serialize<::device::mojom::VRPoseDataView>(
        in_pose, buffer, &pose_writer, context);
    (*output)->pose.Set(
        pose_writer.is_null() ? nullptr : pose_writer.data());
    decltype(Traits::time_delta(input)) in_time_delta = Traits::time_delta(input);
    typename decltype((*output)->time_delta)::BaseType::BufferWriter
        time_delta_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_time_delta, buffer, &time_delta_writer, context);
    (*output)->time_delta.Set(
        time_delta_writer.is_null() ? nullptr : time_delta_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->time_delta.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null time_delta in XRFrameData struct");
    decltype(Traits::buffer_holder(input)) in_buffer_holder = Traits::buffer_holder(input);
    typename decltype((*output)->buffer_holder)::BaseType::BufferWriter
        buffer_holder_writer;
    mojo::internal::Serialize<::gpu::mojom::MailboxHolderDataView>(
        in_buffer_holder, buffer, &buffer_holder_writer, context);
    (*output)->buffer_holder.Set(
        buffer_holder_writer.is_null() ? nullptr : buffer_holder_writer.data());
    (*output)->frame_id = Traits::frame_id(input);
    decltype(Traits::left_eye(input)) in_left_eye = Traits::left_eye(input);
    typename decltype((*output)->left_eye)::BaseType::BufferWriter
        left_eye_writer;
    mojo::internal::Serialize<::device::mojom::VREyeParametersDataView>(
        in_left_eye, buffer, &left_eye_writer, context);
    (*output)->left_eye.Set(
        left_eye_writer.is_null() ? nullptr : left_eye_writer.data());
    decltype(Traits::right_eye(input)) in_right_eye = Traits::right_eye(input);
    typename decltype((*output)->right_eye)::BaseType::BufferWriter
        right_eye_writer;
    mojo::internal::Serialize<::device::mojom::VREyeParametersDataView>(
        in_right_eye, buffer, &right_eye_writer, context);
    (*output)->right_eye.Set(
        right_eye_writer.is_null() ? nullptr : right_eye_writer.data());
    (*output)->stage_parameters_updated = Traits::stage_parameters_updated(input);
    decltype(Traits::stage_parameters(input)) in_stage_parameters = Traits::stage_parameters(input);
    typename decltype((*output)->stage_parameters)::BaseType::BufferWriter
        stage_parameters_writer;
    mojo::internal::Serialize<::device::mojom::VRStageParametersDataView>(
        in_stage_parameters, buffer, &stage_parameters_writer, context);
    (*output)->stage_parameters.Set(
        stage_parameters_writer.is_null() ? nullptr : stage_parameters_writer.data());
    decltype(Traits::detected_planes(input)) in_detected_planes = Traits::detected_planes(input);
    typename decltype((*output)->detected_planes)::BaseType::BufferWriter
        detected_planes_writer;
    const mojo::internal::ContainerValidateParams detected_planes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::XRPlaneDataDataView>>(
        in_detected_planes, buffer, &detected_planes_writer, &detected_planes_validate_params,
        context);
    (*output)->detected_planes.Set(
        detected_planes_writer.is_null() ? nullptr : detected_planes_writer.data());
  }

  static bool Deserialize(::device::mojom::internal::XRFrameData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRFrameDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::XRFrameDataRequestOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::XRFrameDataRequestOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::XRFrameDataRequestOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->include_plane_data = Traits::include_plane_data(input);
  }

  static bool Deserialize(::device::mojom::internal::XRFrameDataRequestOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::XRFrameDataRequestOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {



inline void XRSessionDataView::GetDisplayInfoDataView(
    VRDisplayInfoDataView* output) {
  auto pointer = data_->display_info.Get();
  *output = VRDisplayInfoDataView(pointer, context_);
}
inline void XRSessionDataView::GetSubmitFrameSinkDataView(
    XRPresentationConnectionDataView* output) {
  auto pointer = data_->submit_frame_sink.Get();
  *output = XRPresentationConnectionDataView(pointer, context_);
}


inline void XRPresentationConnectionDataView::GetTransportOptionsDataView(
    XRPresentationTransportOptionsDataView* output) {
  auto pointer = data_->transport_options.Get();
  *output = XRPresentationTransportOptionsDataView(pointer, context_);
}


inline void XRInputSourceDescriptionDataView::GetPointerOffsetDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->pointer_offset.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}


inline void XRInputSourceStateDataView::GetDescriptionDataView(
    XRInputSourceDescriptionDataView* output) {
  auto pointer = data_->description.Get();
  *output = XRInputSourceDescriptionDataView(pointer, context_);
}
inline void XRInputSourceStateDataView::GetGripDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->grip.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}
inline void XRInputSourceStateDataView::GetGamepadDataView(
    ::device::mojom::GamepadDataView* output) {
  auto pointer = data_->gamepad.Get();
  *output = ::device::mojom::GamepadDataView(pointer, context_);
}




inline void VRPoseDataView::GetOrientationDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->orientation.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetPositionDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->position.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetAngularVelocityDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->angularVelocity.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetLinearVelocityDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->linearVelocity.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetAngularAccelerationDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->angularAcceleration.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetLinearAccelerationDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->linearAcceleration.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRPoseDataView::GetInputStateDataView(
    mojo::ArrayDataView<XRInputSourceStateDataView>* output) {
  auto pointer = data_->input_state.Get();
  *output = mojo::ArrayDataView<XRInputSourceStateDataView>(pointer, context_);
}


inline void XRRayDataView::GetOriginDataView(
    ::gfx::mojom::Point3FDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::gfx::mojom::Point3FDataView(pointer, context_);
}
inline void XRRayDataView::GetDirectionDataView(
    ::gfx::mojom::Vector3dFDataView* output) {
  auto pointer = data_->direction.Get();
  *output = ::gfx::mojom::Vector3dFDataView(pointer, context_);
}


inline void XRHitResultDataView::GetHitMatrixDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->hit_matrix.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}




inline void VREyeParametersDataView::GetFieldOfViewDataView(
    VRFieldOfViewDataView* output) {
  auto pointer = data_->fieldOfView.Get();
  *output = VRFieldOfViewDataView(pointer, context_);
}
inline void VREyeParametersDataView::GetOffsetDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->offset.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}


inline void VRStageParametersDataView::GetStandingTransformDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->standingTransform.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void VRStageParametersDataView::GetBoundsDataView(
    mojo::ArrayDataView<::gfx::mojom::Point3FDataView>* output) {
  auto pointer = data_->bounds.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::Point3FDataView>(pointer, context_);
}


inline void VRDisplayInfoDataView::GetDisplayNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->displayName.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VRDisplayInfoDataView::GetCapabilitiesDataView(
    VRDisplayCapabilitiesDataView* output) {
  auto pointer = data_->capabilities.Get();
  *output = VRDisplayCapabilitiesDataView(pointer, context_);
}
inline void VRDisplayInfoDataView::GetStageParametersDataView(
    VRStageParametersDataView* output) {
  auto pointer = data_->stageParameters.Get();
  *output = VRStageParametersDataView(pointer, context_);
}
inline void VRDisplayInfoDataView::GetLeftEyeDataView(
    VREyeParametersDataView* output) {
  auto pointer = data_->leftEye.Get();
  *output = VREyeParametersDataView(pointer, context_);
}
inline void VRDisplayInfoDataView::GetRightEyeDataView(
    VREyeParametersDataView* output) {
  auto pointer = data_->rightEye.Get();
  *output = VREyeParametersDataView(pointer, context_);
}






inline void XRPlaneDataDataView::GetPoseDataView(
    VRPoseDataView* output) {
  auto pointer = data_->pose.Get();
  *output = VRPoseDataView(pointer, context_);
}
inline void XRPlaneDataDataView::GetPolygonDataView(
    mojo::ArrayDataView<XRPlanePointDataDataView>* output) {
  auto pointer = data_->polygon.Get();
  *output = mojo::ArrayDataView<XRPlanePointDataDataView>(pointer, context_);
}


inline void XRFrameDataDataView::GetPoseDataView(
    VRPoseDataView* output) {
  auto pointer = data_->pose.Get();
  *output = VRPoseDataView(pointer, context_);
}
inline void XRFrameDataDataView::GetTimeDeltaDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->time_delta.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void XRFrameDataDataView::GetBufferHolderDataView(
    ::gpu::mojom::MailboxHolderDataView* output) {
  auto pointer = data_->buffer_holder.Get();
  *output = ::gpu::mojom::MailboxHolderDataView(pointer, context_);
}
inline void XRFrameDataDataView::GetLeftEyeDataView(
    VREyeParametersDataView* output) {
  auto pointer = data_->left_eye.Get();
  *output = VREyeParametersDataView(pointer, context_);
}
inline void XRFrameDataDataView::GetRightEyeDataView(
    VREyeParametersDataView* output) {
  auto pointer = data_->right_eye.Get();
  *output = VREyeParametersDataView(pointer, context_);
}
inline void XRFrameDataDataView::GetStageParametersDataView(
    VRStageParametersDataView* output) {
  auto pointer = data_->stage_parameters.Get();
  *output = VRStageParametersDataView(pointer, context_);
}
inline void XRFrameDataDataView::GetDetectedPlanesDataView(
    mojo::ArrayDataView<XRPlaneDataDataView>* output) {
  auto pointer = data_->detected_planes.Get();
  *output = mojo::ArrayDataView<XRPlaneDataDataView>(pointer, context_);
}





}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_H_