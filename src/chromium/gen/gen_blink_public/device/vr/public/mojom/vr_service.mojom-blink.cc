// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "device/vr/public/mojom/vr_service.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "device/vr/public/mojom/vr_service.mojom-params-data.h"
#include "device/vr/public/mojom/vr_service.mojom-shared-message-ids.h"

#include "device/vr/public/mojom/vr_service.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_BLINK_JUMBO_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_BLINK_JUMBO_H_
#include "device/gamepad/public/cpp/gamepad_mojom_traits.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/gpu_fence_handle_struct_traits.h"
#endif
namespace device {
namespace mojom {
namespace blink {
XRSessionOptions::XRSessionOptions()
    : immersive(),
      environment_integration(),
      use_legacy_webvr_render_path() {}

XRSessionOptions::XRSessionOptions(
    bool immersive_in,
    bool environment_integration_in,
    bool use_legacy_webvr_render_path_in)
    : immersive(std::move(immersive_in)),
      environment_integration(std::move(environment_integration_in)),
      use_legacy_webvr_render_path(std::move(use_legacy_webvr_render_path_in)) {}

XRSessionOptions::~XRSessionOptions() = default;
size_t XRSessionOptions::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->immersive);
  seed = mojo::internal::WTFHash(seed, this->environment_integration);
  seed = mojo::internal::WTFHash(seed, this->use_legacy_webvr_render_path);
  return seed;
}

bool XRSessionOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRSession::XRSession()
    : data_provider(),
      client_request(),
      display_info(),
      submit_frame_sink() {}

XRSession::XRSession(
    XRFrameDataProviderPtrInfo data_provider_in,
    XRSessionClientRequest client_request_in,
    VRDisplayInfoPtr display_info_in,
    XRPresentationConnectionPtr submit_frame_sink_in)
    : data_provider(std::move(data_provider_in)),
      client_request(std::move(client_request_in)),
      display_info(std::move(display_info_in)),
      submit_frame_sink(std::move(submit_frame_sink_in)) {}

XRSession::~XRSession() = default;

bool XRSession::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRPresentationConnection::XRPresentationConnection()
    : provider(),
      client_request(),
      transport_options() {}

XRPresentationConnection::XRPresentationConnection(
    XRPresentationProviderPtrInfo provider_in,
    XRPresentationClientRequest client_request_in,
    XRPresentationTransportOptionsPtr transport_options_in)
    : provider(std::move(provider_in)),
      client_request(std::move(client_request_in)),
      transport_options(std::move(transport_options_in)) {}

XRPresentationConnection::~XRPresentationConnection() = default;

bool XRPresentationConnection::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRInputSourceDescription::XRInputSourceDescription()
    : target_ray_mode(),
      handedness(),
      emulated_position(),
      pointer_offset() {}

XRInputSourceDescription::XRInputSourceDescription(
    XRTargetRayMode target_ray_mode_in,
    XRHandedness handedness_in,
    bool emulated_position_in,
    ::gfx::mojom::blink::TransformPtr pointer_offset_in)
    : target_ray_mode(std::move(target_ray_mode_in)),
      handedness(std::move(handedness_in)),
      emulated_position(std::move(emulated_position_in)),
      pointer_offset(std::move(pointer_offset_in)) {}

XRInputSourceDescription::~XRInputSourceDescription() = default;

bool XRInputSourceDescription::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRInputSourceState::XRInputSourceState()
    : source_id(),
      description(),
      grip(),
      primary_input_pressed(),
      primary_input_clicked(),
      gamepad() {}

XRInputSourceState::XRInputSourceState(
    uint32_t source_id_in,
    XRInputSourceDescriptionPtr description_in,
    ::gfx::mojom::blink::TransformPtr grip_in,
    bool primary_input_pressed_in,
    bool primary_input_clicked_in,
    const base::Optional<device::Gamepad>& gamepad_in)
    : source_id(std::move(source_id_in)),
      description(std::move(description_in)),
      grip(std::move(grip_in)),
      primary_input_pressed(std::move(primary_input_pressed_in)),
      primary_input_clicked(std::move(primary_input_clicked_in)),
      gamepad(std::move(gamepad_in)) {}

XRInputSourceState::~XRInputSourceState() = default;

bool XRInputSourceState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VRFieldOfView::VRFieldOfView()
    : upDegrees(),
      downDegrees(),
      leftDegrees(),
      rightDegrees() {}

VRFieldOfView::VRFieldOfView(
    float upDegrees_in,
    float downDegrees_in,
    float leftDegrees_in,
    float rightDegrees_in)
    : upDegrees(std::move(upDegrees_in)),
      downDegrees(std::move(downDegrees_in)),
      leftDegrees(std::move(leftDegrees_in)),
      rightDegrees(std::move(rightDegrees_in)) {}

VRFieldOfView::~VRFieldOfView() = default;
size_t VRFieldOfView::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->upDegrees);
  seed = mojo::internal::WTFHash(seed, this->downDegrees);
  seed = mojo::internal::WTFHash(seed, this->leftDegrees);
  seed = mojo::internal::WTFHash(seed, this->rightDegrees);
  return seed;
}

bool VRFieldOfView::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VRPose::VRPose()
    : orientation(),
      position(),
      angularVelocity(),
      linearVelocity(),
      angularAcceleration(),
      linearAcceleration(),
      input_state(),
      pose_reset() {}

VRPose::VRPose(
    const base::Optional<WTF::Vector<float>>& orientation_in,
    const base::Optional<WTF::Vector<float>>& position_in,
    const base::Optional<WTF::Vector<float>>& angularVelocity_in,
    const base::Optional<WTF::Vector<float>>& linearVelocity_in,
    const base::Optional<WTF::Vector<float>>& angularAcceleration_in,
    const base::Optional<WTF::Vector<float>>& linearAcceleration_in,
    base::Optional<WTF::Vector<XRInputSourceStatePtr>> input_state_in,
    bool pose_reset_in)
    : orientation(std::move(orientation_in)),
      position(std::move(position_in)),
      angularVelocity(std::move(angularVelocity_in)),
      linearVelocity(std::move(linearVelocity_in)),
      angularAcceleration(std::move(angularAcceleration_in)),
      linearAcceleration(std::move(linearAcceleration_in)),
      input_state(std::move(input_state_in)),
      pose_reset(std::move(pose_reset_in)) {}

VRPose::~VRPose() = default;

bool VRPose::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRRay::XRRay()
    : origin(),
      direction() {}

XRRay::XRRay(
    ::gfx::mojom::blink::Point3FPtr origin_in,
    ::gfx::mojom::blink::Vector3dFPtr direction_in)
    : origin(std::move(origin_in)),
      direction(std::move(direction_in)) {}

XRRay::~XRRay() = default;
size_t XRRay::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->origin);
  seed = mojo::internal::WTFHash(seed, this->direction);
  return seed;
}

bool XRRay::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRHitResult::XRHitResult()
    : hit_matrix() {}

XRHitResult::XRHitResult(
    const WTF::Vector<float>& hit_matrix_in)
    : hit_matrix(std::move(hit_matrix_in)) {}

XRHitResult::~XRHitResult() = default;

bool XRHitResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VRDisplayCapabilities::VRDisplayCapabilities()
    : hasPosition(),
      hasExternalDisplay(),
      canPresent(),
      canProvideEnvironmentIntegration() {}

VRDisplayCapabilities::VRDisplayCapabilities(
    bool hasPosition_in,
    bool hasExternalDisplay_in,
    bool canPresent_in,
    bool canProvideEnvironmentIntegration_in)
    : hasPosition(std::move(hasPosition_in)),
      hasExternalDisplay(std::move(hasExternalDisplay_in)),
      canPresent(std::move(canPresent_in)),
      canProvideEnvironmentIntegration(std::move(canProvideEnvironmentIntegration_in)) {}

VRDisplayCapabilities::~VRDisplayCapabilities() = default;
size_t VRDisplayCapabilities::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->hasPosition);
  seed = mojo::internal::WTFHash(seed, this->hasExternalDisplay);
  seed = mojo::internal::WTFHash(seed, this->canPresent);
  seed = mojo::internal::WTFHash(seed, this->canProvideEnvironmentIntegration);
  return seed;
}

bool VRDisplayCapabilities::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VREyeParameters::VREyeParameters()
    : fieldOfView(),
      offset(),
      renderWidth(),
      renderHeight() {}

VREyeParameters::VREyeParameters(
    VRFieldOfViewPtr fieldOfView_in,
    const WTF::Vector<float>& offset_in,
    uint32_t renderWidth_in,
    uint32_t renderHeight_in)
    : fieldOfView(std::move(fieldOfView_in)),
      offset(std::move(offset_in)),
      renderWidth(std::move(renderWidth_in)),
      renderHeight(std::move(renderHeight_in)) {}

VREyeParameters::~VREyeParameters() = default;

bool VREyeParameters::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VRStageParameters::VRStageParameters()
    : standingTransform(),
      sizeX(),
      sizeZ(),
      bounds() {}

VRStageParameters::VRStageParameters(
    const WTF::Vector<float>& standingTransform_in,
    float sizeX_in,
    float sizeZ_in,
    base::Optional<WTF::Vector<::gfx::mojom::blink::Point3FPtr>> bounds_in)
    : standingTransform(std::move(standingTransform_in)),
      sizeX(std::move(sizeX_in)),
      sizeZ(std::move(sizeZ_in)),
      bounds(std::move(bounds_in)) {}

VRStageParameters::~VRStageParameters() = default;

bool VRStageParameters::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VRDisplayInfo::VRDisplayInfo()
    : id(),
      displayName(),
      capabilities(),
      stageParameters(),
      leftEye(),
      rightEye(),
      webvr_default_framebuffer_scale(1.0f),
      webxr_default_framebuffer_scale(1.0f) {}

VRDisplayInfo::VRDisplayInfo(
    XRDeviceId id_in,
    const WTF::String& displayName_in,
    VRDisplayCapabilitiesPtr capabilities_in,
    VRStageParametersPtr stageParameters_in,
    VREyeParametersPtr leftEye_in,
    VREyeParametersPtr rightEye_in,
    float webvr_default_framebuffer_scale_in,
    float webxr_default_framebuffer_scale_in)
    : id(std::move(id_in)),
      displayName(std::move(displayName_in)),
      capabilities(std::move(capabilities_in)),
      stageParameters(std::move(stageParameters_in)),
      leftEye(std::move(leftEye_in)),
      rightEye(std::move(rightEye_in)),
      webvr_default_framebuffer_scale(std::move(webvr_default_framebuffer_scale_in)),
      webxr_default_framebuffer_scale(std::move(webxr_default_framebuffer_scale_in)) {}

VRDisplayInfo::~VRDisplayInfo() = default;

bool VRDisplayInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRPresentationTransportOptions::XRPresentationTransportOptions()
    : transport_method(),
      wait_for_transfer_notification(),
      wait_for_render_notification(),
      wait_for_gpu_fence() {}

XRPresentationTransportOptions::XRPresentationTransportOptions(
    XRPresentationTransportMethod transport_method_in,
    bool wait_for_transfer_notification_in,
    bool wait_for_render_notification_in,
    bool wait_for_gpu_fence_in)
    : transport_method(std::move(transport_method_in)),
      wait_for_transfer_notification(std::move(wait_for_transfer_notification_in)),
      wait_for_render_notification(std::move(wait_for_render_notification_in)),
      wait_for_gpu_fence(std::move(wait_for_gpu_fence_in)) {}

XRPresentationTransportOptions::~XRPresentationTransportOptions() = default;
size_t XRPresentationTransportOptions::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->transport_method);
  seed = mojo::internal::WTFHash(seed, this->wait_for_transfer_notification);
  seed = mojo::internal::WTFHash(seed, this->wait_for_render_notification);
  seed = mojo::internal::WTFHash(seed, this->wait_for_gpu_fence);
  return seed;
}

bool XRPresentationTransportOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRPlanePointData::XRPlanePointData()
    : x(),
      z() {}

XRPlanePointData::XRPlanePointData(
    float x_in,
    float z_in)
    : x(std::move(x_in)),
      z(std::move(z_in)) {}

XRPlanePointData::~XRPlanePointData() = default;
size_t XRPlanePointData::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->x);
  seed = mojo::internal::WTFHash(seed, this->z);
  return seed;
}

bool XRPlanePointData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRPlaneData::XRPlaneData()
    : id(),
      orientation(),
      pose(),
      polygon() {}

XRPlaneData::XRPlaneData(
    int32_t id_in,
    XRPlaneOrientation orientation_in,
    VRPosePtr pose_in,
    WTF::Vector<XRPlanePointDataPtr> polygon_in)
    : id(std::move(id_in)),
      orientation(std::move(orientation_in)),
      pose(std::move(pose_in)),
      polygon(std::move(polygon_in)) {}

XRPlaneData::~XRPlaneData() = default;

bool XRPlaneData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRFrameData::XRFrameData()
    : pose(),
      time_delta(),
      buffer_holder(),
      frame_id(),
      left_eye(),
      right_eye(),
      stage_parameters_updated(),
      stage_parameters(),
      detected_planes() {}

XRFrameData::XRFrameData(
    VRPosePtr pose_in,
    base::TimeDelta time_delta_in,
    const base::Optional<::gpu::MailboxHolder>& buffer_holder_in,
    int16_t frame_id_in,
    VREyeParametersPtr left_eye_in,
    VREyeParametersPtr right_eye_in,
    bool stage_parameters_updated_in,
    VRStageParametersPtr stage_parameters_in,
    base::Optional<WTF::Vector<XRPlaneDataPtr>> detected_planes_in)
    : pose(std::move(pose_in)),
      time_delta(std::move(time_delta_in)),
      buffer_holder(std::move(buffer_holder_in)),
      frame_id(std::move(frame_id_in)),
      left_eye(std::move(left_eye_in)),
      right_eye(std::move(right_eye_in)),
      stage_parameters_updated(std::move(stage_parameters_updated_in)),
      stage_parameters(std::move(stage_parameters_in)),
      detected_planes(std::move(detected_planes_in)) {}

XRFrameData::~XRFrameData() = default;

bool XRFrameData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRFrameDataRequestOptions::XRFrameDataRequestOptions()
    : include_plane_data() {}

XRFrameDataRequestOptions::XRFrameDataRequestOptions(
    bool include_plane_data_in)
    : include_plane_data(std::move(include_plane_data_in)) {}

XRFrameDataRequestOptions::~XRFrameDataRequestOptions() = default;
size_t XRFrameDataRequestOptions::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->include_plane_data);
  return seed;
}

bool XRFrameDataRequestOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char VRService::Name_[] = "device.mojom.VRService";

class VRService_RequestDevice_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VRService_RequestDevice_ForwardToCallback(
      VRService::RequestDeviceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VRService::RequestDeviceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VRService_RequestDevice_ForwardToCallback);
};

VRServiceProxy::VRServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VRServiceProxy::RequestDevice(
    RequestDeviceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VRService::RequestDevice");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRService_RequestDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRService_RequestDevice_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VRService::Name_);
  message.set_method_name("RequestDevice");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VRService_RequestDevice_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VRServiceProxy::SetClient(
    VRServiceClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VRService::SetClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRService_SetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRService_SetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::VRServiceClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in VRService.SetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VRService::Name_);
  message.set_method_name("SetClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VRServiceProxy::SetListeningForActivate(
    VRDisplayClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VRService::SetListeningForActivate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRService_SetListeningForActivate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRService_SetListeningForActivate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::VRDisplayClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VRService::Name_);
  message.set_method_name("SetListeningForActivate");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class VRService_RequestDevice_ProxyToResponder {
 public:
  static VRService::RequestDeviceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VRService_RequestDevice_ProxyToResponder> proxy(
        new VRService_RequestDevice_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VRService_RequestDevice_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VRService_RequestDevice_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  VRService_RequestDevice_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "VRService::RequestDeviceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      XRDevicePtr in_device);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VRService_RequestDevice_ProxyToResponder);
};

bool VRService_RequestDevice_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::VRService::RequestDeviceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VRService_RequestDevice_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VRService_RequestDevice_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  XRDevicePtr p_device{};
  VRService_RequestDevice_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_device =
      input_data_view.TakeDevice<decltype(p_device)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VRService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_device));
  return true;
}

void VRService_RequestDevice_ProxyToResponder::Run(
    XRDevicePtr in_device) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRService_RequestDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRService_RequestDevice_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::XRDevicePtrDataView>(
      in_device, &params->device, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::VRService::RequestDeviceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VRService::Name_);
  message.set_method_name("RequestDevice");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool VRServiceStubDispatch::Accept(
    VRService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVRService_RequestDevice_Name: {
      break;
    }
    case internal::kVRService_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VRService::SetClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRService_SetClient_Params_Data* params =
          reinterpret_cast<internal::VRService_SetClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRServiceClientPtr p_client{};
      VRService_SetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VRService::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetClient(
std::move(p_client));
      return true;
    }
    case internal::kVRService_SetListeningForActivate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VRService::SetListeningForActivate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRService_SetListeningForActivate_Params_Data* params =
          reinterpret_cast<internal::VRService_SetListeningForActivate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRDisplayClientPtr p_client{};
      VRService_SetListeningForActivate_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VRService::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetListeningForActivate(
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool VRServiceStubDispatch::AcceptWithResponder(
    VRService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVRService_RequestDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VRService::RequestDevice",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::VRService_RequestDevice_Params_Data* params =
          reinterpret_cast<
              internal::VRService_RequestDevice_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRService_RequestDevice_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VRService::Name_, 0, false);
        return false;
      }
      VRService::RequestDeviceCallback callback =
          VRService_RequestDevice_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestDevice(std::move(callback));
      return true;
    }
    case internal::kVRService_SetClient_Name: {
      break;
    }
    case internal::kVRService_SetListeningForActivate_Name: {
      break;
    }
  }
  return false;
}

bool VRServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRService RequestValidator");

  switch (message->header()->name) {
    case internal::kVRService_RequestDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_RequestDevice_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRService_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRService_SetListeningForActivate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_SetListeningForActivate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool VRServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVRService_RequestDevice_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_RequestDevice_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char VRServiceClient::Name_[] = "device.mojom.VRServiceClient";

VRServiceClientProxy::VRServiceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VRServiceClientProxy::OnDeviceChanged(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VRServiceClient::OnDeviceChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRServiceClient_OnDeviceChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRServiceClient_OnDeviceChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VRServiceClient::Name_);
  message.set_method_name("OnDeviceChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VRServiceClientStubDispatch::Accept(
    VRServiceClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVRServiceClient_OnDeviceChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VRServiceClient::OnDeviceChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRServiceClient_OnDeviceChanged_Params_Data* params =
          reinterpret_cast<internal::VRServiceClient_OnDeviceChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRServiceClient_OnDeviceChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VRServiceClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDeviceChanged();
      return true;
    }
  }
  return false;
}

// static
bool VRServiceClientStubDispatch::AcceptWithResponder(
    VRServiceClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVRServiceClient_OnDeviceChanged_Name: {
      break;
    }
  }
  return false;
}

bool VRServiceClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRServiceClient RequestValidator");

  switch (message->header()->name) {
    case internal::kVRServiceClient_OnDeviceChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRServiceClient_OnDeviceChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char XRDevice::Name_[] = "device.mojom.XRDevice";

class XRDevice_RequestSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  XRDevice_RequestSession_ForwardToCallback(
      XRDevice::RequestSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  XRDevice::RequestSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(XRDevice_RequestSession_ForwardToCallback);
};

class XRDevice_SupportsSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  XRDevice_SupportsSession_ForwardToCallback(
      XRDevice::SupportsSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  XRDevice::SupportsSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(XRDevice_SupportsSession_ForwardToCallback);
};

class XRDevice_GetImmersiveVRDisplayInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  XRDevice_GetImmersiveVRDisplayInfo_ForwardToCallback(
      XRDevice::GetImmersiveVRDisplayInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  XRDevice::GetImmersiveVRDisplayInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(XRDevice_GetImmersiveVRDisplayInfo_ForwardToCallback);
};

XRDeviceProxy::XRDeviceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void XRDeviceProxy::RequestSession(
    XRSessionOptionsPtr in_options, bool in_triggered_by_displayactive, RequestSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRDevice::RequestSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRDevice_RequestSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRDevice_RequestSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::device::mojom::XRSessionOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in XRDevice.RequestSession request");
  params->triggered_by_displayactive = in_triggered_by_displayactive;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRDevice::Name_);
  message.set_method_name("RequestSession");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new XRDevice_RequestSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void XRDeviceProxy::SupportsSession(
    XRSessionOptionsPtr in_options, SupportsSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRDevice::SupportsSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRDevice_SupportsSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRDevice_SupportsSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::device::mojom::XRSessionOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in XRDevice.SupportsSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRDevice::Name_);
  message.set_method_name("SupportsSession");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new XRDevice_SupportsSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void XRDeviceProxy::GetImmersiveVRDisplayInfo(
    GetImmersiveVRDisplayInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRDevice::GetImmersiveVRDisplayInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRDevice_GetImmersiveVRDisplayInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRDevice_GetImmersiveVRDisplayInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRDevice::Name_);
  message.set_method_name("GetImmersiveVRDisplayInfo");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new XRDevice_GetImmersiveVRDisplayInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void XRDeviceProxy::ExitPresent(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRDevice::ExitPresent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRDevice_ExitPresent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRDevice_ExitPresent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRDevice::Name_);
  message.set_method_name("ExitPresent");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class XRDevice_RequestSession_ProxyToResponder {
 public:
  static XRDevice::RequestSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<XRDevice_RequestSession_ProxyToResponder> proxy(
        new XRDevice_RequestSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&XRDevice_RequestSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~XRDevice_RequestSession_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  XRDevice_RequestSession_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "XRDevice::RequestSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      XRSessionPtr in_session);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(XRDevice_RequestSession_ProxyToResponder);
};

bool XRDevice_RequestSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::XRDevice::RequestSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::XRDevice_RequestSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::XRDevice_RequestSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  XRSessionPtr p_session{};
  XRDevice_RequestSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSession(&p_session))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        XRDevice::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_session));
  return true;
}

void XRDevice_RequestSession_ProxyToResponder::Run(
    XRSessionPtr in_session) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRDevice_RequestSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRDevice_RequestSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session)::BaseType::BufferWriter
      session_writer;
  mojo::internal::Serialize<::device::mojom::XRSessionDataView>(
      in_session, buffer, &session_writer, &serialization_context);
  params->session.Set(
      session_writer.is_null() ? nullptr : session_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::XRDevice::RequestSessionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRDevice::Name_);
  message.set_method_name("RequestSession");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class XRDevice_SupportsSession_ProxyToResponder {
 public:
  static XRDevice::SupportsSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<XRDevice_SupportsSession_ProxyToResponder> proxy(
        new XRDevice_SupportsSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&XRDevice_SupportsSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~XRDevice_SupportsSession_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  XRDevice_SupportsSession_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "XRDevice::SupportsSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_supports_session);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(XRDevice_SupportsSession_ProxyToResponder);
};

bool XRDevice_SupportsSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::XRDevice::SupportsSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::XRDevice_SupportsSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::XRDevice_SupportsSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_supports_session{};
  XRDevice_SupportsSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_supports_session = input_data_view.supports_session();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        XRDevice::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_supports_session));
  return true;
}

void XRDevice_SupportsSession_ProxyToResponder::Run(
    bool in_supports_session) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRDevice_SupportsSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRDevice_SupportsSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->supports_session = in_supports_session;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::XRDevice::SupportsSessionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRDevice::Name_);
  message.set_method_name("SupportsSession");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class XRDevice_GetImmersiveVRDisplayInfo_ProxyToResponder {
 public:
  static XRDevice::GetImmersiveVRDisplayInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<XRDevice_GetImmersiveVRDisplayInfo_ProxyToResponder> proxy(
        new XRDevice_GetImmersiveVRDisplayInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&XRDevice_GetImmersiveVRDisplayInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~XRDevice_GetImmersiveVRDisplayInfo_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  XRDevice_GetImmersiveVRDisplayInfo_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "XRDevice::GetImmersiveVRDisplayInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      VRDisplayInfoPtr in_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(XRDevice_GetImmersiveVRDisplayInfo_ProxyToResponder);
};

bool XRDevice_GetImmersiveVRDisplayInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::XRDevice::GetImmersiveVRDisplayInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VRDisplayInfoPtr p_info{};
  XRDevice_GetImmersiveVRDisplayInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInfo(&p_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        XRDevice::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_info));
  return true;
}

void XRDevice_GetImmersiveVRDisplayInfo_ProxyToResponder::Run(
    VRDisplayInfoPtr in_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRDevice_GetImmersiveVRDisplayInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::device::mojom::VRDisplayInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::XRDevice::GetImmersiveVRDisplayInfoCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRDevice::Name_);
  message.set_method_name("GetImmersiveVRDisplayInfo");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool XRDeviceStubDispatch::Accept(
    XRDevice* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kXRDevice_RequestSession_Name: {
      break;
    }
    case internal::kXRDevice_SupportsSession_Name: {
      break;
    }
    case internal::kXRDevice_GetImmersiveVRDisplayInfo_Name: {
      break;
    }
    case internal::kXRDevice_ExitPresent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRDevice::ExitPresent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRDevice_ExitPresent_Params_Data* params =
          reinterpret_cast<internal::XRDevice_ExitPresent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRDevice_ExitPresent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRDevice::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ExitPresent();
      return true;
    }
  }
  return false;
}

// static
bool XRDeviceStubDispatch::AcceptWithResponder(
    XRDevice* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kXRDevice_RequestSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRDevice::RequestSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::XRDevice_RequestSession_Params_Data* params =
          reinterpret_cast<
              internal::XRDevice_RequestSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRSessionOptionsPtr p_options{};
      bool p_triggered_by_displayactive{};
      XRDevice_RequestSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      p_triggered_by_displayactive = input_data_view.triggered_by_displayactive();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRDevice::Name_, 0, false);
        return false;
      }
      XRDevice::RequestSessionCallback callback =
          XRDevice_RequestSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestSession(
std::move(p_options), 
std::move(p_triggered_by_displayactive), std::move(callback));
      return true;
    }
    case internal::kXRDevice_SupportsSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRDevice::SupportsSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::XRDevice_SupportsSession_Params_Data* params =
          reinterpret_cast<
              internal::XRDevice_SupportsSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRSessionOptionsPtr p_options{};
      XRDevice_SupportsSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRDevice::Name_, 1, false);
        return false;
      }
      XRDevice::SupportsSessionCallback callback =
          XRDevice_SupportsSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SupportsSession(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kXRDevice_GetImmersiveVRDisplayInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRDevice::GetImmersiveVRDisplayInfo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::XRDevice_GetImmersiveVRDisplayInfo_Params_Data* params =
          reinterpret_cast<
              internal::XRDevice_GetImmersiveVRDisplayInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRDevice_GetImmersiveVRDisplayInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRDevice::Name_, 2, false);
        return false;
      }
      XRDevice::GetImmersiveVRDisplayInfoCallback callback =
          XRDevice_GetImmersiveVRDisplayInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetImmersiveVRDisplayInfo(std::move(callback));
      return true;
    }
    case internal::kXRDevice_ExitPresent_Name: {
      break;
    }
  }
  return false;
}

bool XRDeviceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XRDevice RequestValidator");

  switch (message->header()->name) {
    case internal::kXRDevice_RequestSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRDevice_RequestSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRDevice_SupportsSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRDevice_SupportsSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRDevice_GetImmersiveVRDisplayInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRDevice_GetImmersiveVRDisplayInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRDevice_ExitPresent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRDevice_ExitPresent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool XRDeviceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XRDevice ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kXRDevice_RequestSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRDevice_RequestSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRDevice_SupportsSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRDevice_SupportsSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRDevice_GetImmersiveVRDisplayInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char XREnvironmentIntegrationProvider::Name_[] = "device.mojom.XREnvironmentIntegrationProvider";

class XREnvironmentIntegrationProvider_RequestHitTest_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  XREnvironmentIntegrationProvider_RequestHitTest_ForwardToCallback(
      XREnvironmentIntegrationProvider::RequestHitTestCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  XREnvironmentIntegrationProvider::RequestHitTestCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(XREnvironmentIntegrationProvider_RequestHitTest_ForwardToCallback);
};

XREnvironmentIntegrationProviderProxy::XREnvironmentIntegrationProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void XREnvironmentIntegrationProviderProxy::RequestHitTest(
    XRRayPtr in_ray, RequestHitTestCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XREnvironmentIntegrationProvider::RequestHitTest");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXREnvironmentIntegrationProvider_RequestHitTest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XREnvironmentIntegrationProvider_RequestHitTest_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->ray)::BaseType::BufferWriter
      ray_writer;
  mojo::internal::Serialize<::device::mojom::XRRayDataView>(
      in_ray, buffer, &ray_writer, &serialization_context);
  params->ray.Set(
      ray_writer.is_null() ? nullptr : ray_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ray.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ray in XREnvironmentIntegrationProvider.RequestHitTest request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XREnvironmentIntegrationProvider::Name_);
  message.set_method_name("RequestHitTest");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new XREnvironmentIntegrationProvider_RequestHitTest_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class XREnvironmentIntegrationProvider_RequestHitTest_ProxyToResponder {
 public:
  static XREnvironmentIntegrationProvider::RequestHitTestCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<XREnvironmentIntegrationProvider_RequestHitTest_ProxyToResponder> proxy(
        new XREnvironmentIntegrationProvider_RequestHitTest_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&XREnvironmentIntegrationProvider_RequestHitTest_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~XREnvironmentIntegrationProvider_RequestHitTest_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  XREnvironmentIntegrationProvider_RequestHitTest_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "XREnvironmentIntegrationProvider::RequestHitTestCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Optional<WTF::Vector<XRHitResultPtr>> in_results);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(XREnvironmentIntegrationProvider_RequestHitTest_ProxyToResponder);
};

bool XREnvironmentIntegrationProvider_RequestHitTest_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::XREnvironmentIntegrationProvider::RequestHitTestCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data* params =
      reinterpret_cast<
          internal::XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<WTF::Vector<XRHitResultPtr>> p_results{};
  XREnvironmentIntegrationProvider_RequestHitTest_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        XREnvironmentIntegrationProvider::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_results));
  return true;
}

void XREnvironmentIntegrationProvider_RequestHitTest_ProxyToResponder::Run(
    base::Optional<WTF::Vector<XRHitResultPtr>> in_results) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXREnvironmentIntegrationProvider_RequestHitTest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->results)::BaseType::BufferWriter
      results_writer;
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::XRHitResultDataView>>(
      in_results, buffer, &results_writer, &results_validate_params,
      &serialization_context);
  params->results.Set(
      results_writer.is_null() ? nullptr : results_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::XREnvironmentIntegrationProvider::RequestHitTestCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XREnvironmentIntegrationProvider::Name_);
  message.set_method_name("RequestHitTest");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool XREnvironmentIntegrationProviderStubDispatch::Accept(
    XREnvironmentIntegrationProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kXREnvironmentIntegrationProvider_RequestHitTest_Name: {
      break;
    }
  }
  return false;
}

// static
bool XREnvironmentIntegrationProviderStubDispatch::AcceptWithResponder(
    XREnvironmentIntegrationProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kXREnvironmentIntegrationProvider_RequestHitTest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XREnvironmentIntegrationProvider::RequestHitTest",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::XREnvironmentIntegrationProvider_RequestHitTest_Params_Data* params =
          reinterpret_cast<
              internal::XREnvironmentIntegrationProvider_RequestHitTest_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRRayPtr p_ray{};
      XREnvironmentIntegrationProvider_RequestHitTest_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRay(&p_ray))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XREnvironmentIntegrationProvider::Name_, 0, false);
        return false;
      }
      XREnvironmentIntegrationProvider::RequestHitTestCallback callback =
          XREnvironmentIntegrationProvider_RequestHitTest_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestHitTest(
std::move(p_ray), std::move(callback));
      return true;
    }
  }
  return false;
}

bool XREnvironmentIntegrationProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XREnvironmentIntegrationProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kXREnvironmentIntegrationProvider_RequestHitTest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XREnvironmentIntegrationProvider_RequestHitTest_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool XREnvironmentIntegrationProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XREnvironmentIntegrationProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kXREnvironmentIntegrationProvider_RequestHitTest_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char XRFrameDataProvider::Name_[] = "device.mojom.XRFrameDataProvider";

class XRFrameDataProvider_GetFrameData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  XRFrameDataProvider_GetFrameData_ForwardToCallback(
      XRFrameDataProvider::GetFrameDataCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  XRFrameDataProvider::GetFrameDataCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(XRFrameDataProvider_GetFrameData_ForwardToCallback);
};

XRFrameDataProviderProxy::XRFrameDataProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void XRFrameDataProviderProxy::GetFrameData(
    XRFrameDataRequestOptionsPtr in_options, GetFrameDataCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRFrameDataProvider::GetFrameData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRFrameDataProvider_GetFrameData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRFrameDataProvider_GetFrameData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::device::mojom::XRFrameDataRequestOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRFrameDataProvider::Name_);
  message.set_method_name("GetFrameData");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new XRFrameDataProvider_GetFrameData_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void XRFrameDataProviderProxy::GetEnvironmentIntegrationProvider(
    XREnvironmentIntegrationProviderAssociatedRequest in_environment_provider) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRFrameDataProvider::GetEnvironmentIntegrationProvider");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRFrameDataProvider_GetEnvironmentIntegrationProvider_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::XREnvironmentIntegrationProviderAssociatedRequestDataView>(
      in_environment_provider, &params->environment_provider, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->environment_provider),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid environment_provider in XRFrameDataProvider.GetEnvironmentIntegrationProvider request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRFrameDataProvider::Name_);
  message.set_method_name("GetEnvironmentIntegrationProvider");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class XRFrameDataProvider_GetFrameData_ProxyToResponder {
 public:
  static XRFrameDataProvider::GetFrameDataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<XRFrameDataProvider_GetFrameData_ProxyToResponder> proxy(
        new XRFrameDataProvider_GetFrameData_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&XRFrameDataProvider_GetFrameData_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~XRFrameDataProvider_GetFrameData_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  XRFrameDataProvider_GetFrameData_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "XRFrameDataProvider::GetFrameDataCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      XRFrameDataPtr in_frame_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(XRFrameDataProvider_GetFrameData_ProxyToResponder);
};

bool XRFrameDataProvider_GetFrameData_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::XRFrameDataProvider::GetFrameDataCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::XRFrameDataProvider_GetFrameData_ResponseParams_Data* params =
      reinterpret_cast<
          internal::XRFrameDataProvider_GetFrameData_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  XRFrameDataPtr p_frame_data{};
  XRFrameDataProvider_GetFrameData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFrameData(&p_frame_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        XRFrameDataProvider::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_frame_data));
  return true;
}

void XRFrameDataProvider_GetFrameData_ProxyToResponder::Run(
    XRFrameDataPtr in_frame_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRFrameDataProvider_GetFrameData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRFrameDataProvider_GetFrameData_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_data)::BaseType::BufferWriter
      frame_data_writer;
  mojo::internal::Serialize<::device::mojom::XRFrameDataDataView>(
      in_frame_data, buffer, &frame_data_writer, &serialization_context);
  params->frame_data.Set(
      frame_data_writer.is_null() ? nullptr : frame_data_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::XRFrameDataProvider::GetFrameDataCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRFrameDataProvider::Name_);
  message.set_method_name("GetFrameData");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool XRFrameDataProviderStubDispatch::Accept(
    XRFrameDataProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kXRFrameDataProvider_GetFrameData_Name: {
      break;
    }
    case internal::kXRFrameDataProvider_GetEnvironmentIntegrationProvider_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRFrameDataProvider::GetEnvironmentIntegrationProvider",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data* params =
          reinterpret_cast<internal::XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XREnvironmentIntegrationProviderAssociatedRequest p_environment_provider{};
      XRFrameDataProvider_GetEnvironmentIntegrationProvider_ParamsDataView input_data_view(params, &serialization_context);
      
      p_environment_provider =
          input_data_view.TakeEnvironmentProvider<decltype(p_environment_provider)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRFrameDataProvider::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetEnvironmentIntegrationProvider(
std::move(p_environment_provider));
      return true;
    }
  }
  return false;
}

// static
bool XRFrameDataProviderStubDispatch::AcceptWithResponder(
    XRFrameDataProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kXRFrameDataProvider_GetFrameData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRFrameDataProvider::GetFrameData",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::XRFrameDataProvider_GetFrameData_Params_Data* params =
          reinterpret_cast<
              internal::XRFrameDataProvider_GetFrameData_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRFrameDataRequestOptionsPtr p_options{};
      XRFrameDataProvider_GetFrameData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRFrameDataProvider::Name_, 0, false);
        return false;
      }
      XRFrameDataProvider::GetFrameDataCallback callback =
          XRFrameDataProvider_GetFrameData_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetFrameData(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kXRFrameDataProvider_GetEnvironmentIntegrationProvider_Name: {
      break;
    }
  }
  return false;
}

bool XRFrameDataProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XRFrameDataProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kXRFrameDataProvider_GetFrameData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRFrameDataProvider_GetFrameData_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRFrameDataProvider_GetEnvironmentIntegrationProvider_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool XRFrameDataProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XRFrameDataProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kXRFrameDataProvider_GetFrameData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRFrameDataProvider_GetFrameData_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char XRPresentationProvider::Name_[] = "device.mojom.XRPresentationProvider";

XRPresentationProviderProxy::XRPresentationProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void XRPresentationProviderProxy::UpdateLayerBounds(
    int16_t in_frame_id, const ::blink::WebFloatRect& in_left_bounds, const ::blink::WebFloatRect& in_right_bounds, const ::blink::WebSize& in_source_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRPresentationProvider::UpdateLayerBounds");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRPresentationProvider_UpdateLayerBounds_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRPresentationProvider_UpdateLayerBounds_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_id = in_frame_id;
  typename decltype(params->left_bounds)::BaseType::BufferWriter
      left_bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_left_bounds, buffer, &left_bounds_writer, &serialization_context);
  params->left_bounds.Set(
      left_bounds_writer.is_null() ? nullptr : left_bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->left_bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null left_bounds in XRPresentationProvider.UpdateLayerBounds request");
  typename decltype(params->right_bounds)::BaseType::BufferWriter
      right_bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_right_bounds, buffer, &right_bounds_writer, &serialization_context);
  params->right_bounds.Set(
      right_bounds_writer.is_null() ? nullptr : right_bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->right_bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null right_bounds in XRPresentationProvider.UpdateLayerBounds request");
  typename decltype(params->source_size)::BaseType::BufferWriter
      source_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_source_size, buffer, &source_size_writer, &serialization_context);
  params->source_size.Set(
      source_size_writer.is_null() ? nullptr : source_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_size in XRPresentationProvider.UpdateLayerBounds request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRPresentationProvider::Name_);
  message.set_method_name("UpdateLayerBounds");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void XRPresentationProviderProxy::SubmitFrameMissing(
    int16_t in_frame_id, const ::gpu::SyncToken& in_sync_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRPresentationProvider::SubmitFrameMissing");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRPresentationProvider_SubmitFrameMissing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRPresentationProvider_SubmitFrameMissing_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_id = in_frame_id;
  typename decltype(params->sync_token)::BaseType::BufferWriter
      sync_token_writer;
  mojo::internal::Serialize<::gpu::mojom::SyncTokenDataView>(
      in_sync_token, buffer, &sync_token_writer, &serialization_context);
  params->sync_token.Set(
      sync_token_writer.is_null() ? nullptr : sync_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sync_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sync_token in XRPresentationProvider.SubmitFrameMissing request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRPresentationProvider::Name_);
  message.set_method_name("SubmitFrameMissing");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void XRPresentationProviderProxy::SubmitFrame(
    int16_t in_frame_id, const ::gpu::MailboxHolder& in_mailbox_holder, base::TimeDelta in_time_waited) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRPresentationProvider::SubmitFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRPresentationProvider_SubmitFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRPresentationProvider_SubmitFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_id = in_frame_id;
  typename decltype(params->mailbox_holder)::BaseType::BufferWriter
      mailbox_holder_writer;
  mojo::internal::Serialize<::gpu::mojom::MailboxHolderDataView>(
      in_mailbox_holder, buffer, &mailbox_holder_writer, &serialization_context);
  params->mailbox_holder.Set(
      mailbox_holder_writer.is_null() ? nullptr : mailbox_holder_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mailbox_holder.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mailbox_holder in XRPresentationProvider.SubmitFrame request");
  typename decltype(params->time_waited)::BaseType::BufferWriter
      time_waited_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_time_waited, buffer, &time_waited_writer, &serialization_context);
  params->time_waited.Set(
      time_waited_writer.is_null() ? nullptr : time_waited_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->time_waited.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null time_waited in XRPresentationProvider.SubmitFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRPresentationProvider::Name_);
  message.set_method_name("SubmitFrame");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void XRPresentationProviderProxy::SubmitFrameWithTextureHandle(
    int16_t in_frameId, mojo::ScopedHandle in_texture) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRPresentationProvider::SubmitFrameWithTextureHandle");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRPresentationProvider_SubmitFrameWithTextureHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frameId = in_frameId;
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_texture, &params->texture, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->texture),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid texture in XRPresentationProvider.SubmitFrameWithTextureHandle request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRPresentationProvider::Name_);
  message.set_method_name("SubmitFrameWithTextureHandle");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void XRPresentationProviderProxy::SubmitFrameDrawnIntoTexture(
    int16_t in_frameId, const ::gpu::SyncToken& in_sync_token, base::TimeDelta in_time_waited) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRPresentationProvider::SubmitFrameDrawnIntoTexture");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRPresentationProvider_SubmitFrameDrawnIntoTexture_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frameId = in_frameId;
  typename decltype(params->sync_token)::BaseType::BufferWriter
      sync_token_writer;
  mojo::internal::Serialize<::gpu::mojom::SyncTokenDataView>(
      in_sync_token, buffer, &sync_token_writer, &serialization_context);
  params->sync_token.Set(
      sync_token_writer.is_null() ? nullptr : sync_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sync_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sync_token in XRPresentationProvider.SubmitFrameDrawnIntoTexture request");
  typename decltype(params->time_waited)::BaseType::BufferWriter
      time_waited_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_time_waited, buffer, &time_waited_writer, &serialization_context);
  params->time_waited.Set(
      time_waited_writer.is_null() ? nullptr : time_waited_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->time_waited.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null time_waited in XRPresentationProvider.SubmitFrameDrawnIntoTexture request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRPresentationProvider::Name_);
  message.set_method_name("SubmitFrameDrawnIntoTexture");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool XRPresentationProviderStubDispatch::Accept(
    XRPresentationProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kXRPresentationProvider_UpdateLayerBounds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRPresentationProvider::UpdateLayerBounds",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRPresentationProvider_UpdateLayerBounds_Params_Data* params =
          reinterpret_cast<internal::XRPresentationProvider_UpdateLayerBounds_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int16_t p_frame_id{};
      ::blink::WebFloatRect p_left_bounds{};
      ::blink::WebFloatRect p_right_bounds{};
      ::blink::WebSize p_source_size{};
      XRPresentationProvider_UpdateLayerBounds_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_id = input_data_view.frame_id();
      if (!input_data_view.ReadLeftBounds(&p_left_bounds))
        success = false;
      if (!input_data_view.ReadRightBounds(&p_right_bounds))
        success = false;
      if (!input_data_view.ReadSourceSize(&p_source_size))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRPresentationProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateLayerBounds(
std::move(p_frame_id), 
std::move(p_left_bounds), 
std::move(p_right_bounds), 
std::move(p_source_size));
      return true;
    }
    case internal::kXRPresentationProvider_SubmitFrameMissing_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRPresentationProvider::SubmitFrameMissing",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRPresentationProvider_SubmitFrameMissing_Params_Data* params =
          reinterpret_cast<internal::XRPresentationProvider_SubmitFrameMissing_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int16_t p_frame_id{};
      ::gpu::SyncToken p_sync_token{};
      XRPresentationProvider_SubmitFrameMissing_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_id = input_data_view.frame_id();
      if (!input_data_view.ReadSyncToken(&p_sync_token))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRPresentationProvider::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SubmitFrameMissing(
std::move(p_frame_id), 
std::move(p_sync_token));
      return true;
    }
    case internal::kXRPresentationProvider_SubmitFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRPresentationProvider::SubmitFrame",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRPresentationProvider_SubmitFrame_Params_Data* params =
          reinterpret_cast<internal::XRPresentationProvider_SubmitFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int16_t p_frame_id{};
      ::gpu::MailboxHolder p_mailbox_holder{};
      base::TimeDelta p_time_waited{};
      XRPresentationProvider_SubmitFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_id = input_data_view.frame_id();
      if (!input_data_view.ReadMailboxHolder(&p_mailbox_holder))
        success = false;
      if (!input_data_view.ReadTimeWaited(&p_time_waited))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRPresentationProvider::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SubmitFrame(
std::move(p_frame_id), 
std::move(p_mailbox_holder), 
std::move(p_time_waited));
      return true;
    }
    case internal::kXRPresentationProvider_SubmitFrameWithTextureHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRPresentationProvider::SubmitFrameWithTextureHandle",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data* params =
          reinterpret_cast<internal::XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int16_t p_frameId{};
      mojo::ScopedHandle p_texture{};
      XRPresentationProvider_SubmitFrameWithTextureHandle_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frameId = input_data_view.frameId();
      p_texture = input_data_view.TakeTexture();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRPresentationProvider::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SubmitFrameWithTextureHandle(
std::move(p_frameId), 
std::move(p_texture));
      return true;
    }
    case internal::kXRPresentationProvider_SubmitFrameDrawnIntoTexture_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRPresentationProvider::SubmitFrameDrawnIntoTexture",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data* params =
          reinterpret_cast<internal::XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int16_t p_frameId{};
      ::gpu::SyncToken p_sync_token{};
      base::TimeDelta p_time_waited{};
      XRPresentationProvider_SubmitFrameDrawnIntoTexture_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frameId = input_data_view.frameId();
      if (!input_data_view.ReadSyncToken(&p_sync_token))
        success = false;
      if (!input_data_view.ReadTimeWaited(&p_time_waited))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRPresentationProvider::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SubmitFrameDrawnIntoTexture(
std::move(p_frameId), 
std::move(p_sync_token), 
std::move(p_time_waited));
      return true;
    }
  }
  return false;
}

// static
bool XRPresentationProviderStubDispatch::AcceptWithResponder(
    XRPresentationProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kXRPresentationProvider_UpdateLayerBounds_Name: {
      break;
    }
    case internal::kXRPresentationProvider_SubmitFrameMissing_Name: {
      break;
    }
    case internal::kXRPresentationProvider_SubmitFrame_Name: {
      break;
    }
    case internal::kXRPresentationProvider_SubmitFrameWithTextureHandle_Name: {
      break;
    }
    case internal::kXRPresentationProvider_SubmitFrameDrawnIntoTexture_Name: {
      break;
    }
  }
  return false;
}

bool XRPresentationProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XRPresentationProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kXRPresentationProvider_UpdateLayerBounds_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRPresentationProvider_UpdateLayerBounds_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRPresentationProvider_SubmitFrameMissing_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRPresentationProvider_SubmitFrameMissing_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRPresentationProvider_SubmitFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRPresentationProvider_SubmitFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRPresentationProvider_SubmitFrameWithTextureHandle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRPresentationProvider_SubmitFrameDrawnIntoTexture_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char XRPresentationClient::Name_[] = "device.mojom.XRPresentationClient";

XRPresentationClientProxy::XRPresentationClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void XRPresentationClientProxy::OnSubmitFrameTransferred(
    bool in_success) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRPresentationClient::OnSubmitFrameTransferred");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRPresentationClient_OnSubmitFrameTransferred_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRPresentationClient_OnSubmitFrameTransferred_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRPresentationClient::Name_);
  message.set_method_name("OnSubmitFrameTransferred");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void XRPresentationClientProxy::OnSubmitFrameRendered(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRPresentationClient::OnSubmitFrameRendered");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRPresentationClient_OnSubmitFrameRendered_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRPresentationClient_OnSubmitFrameRendered_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRPresentationClient::Name_);
  message.set_method_name("OnSubmitFrameRendered");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void XRPresentationClientProxy::OnSubmitFrameGpuFence(
    const ::gfx::GpuFenceHandle& in_gpu_fence_handle) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRPresentationClient::OnSubmitFrameGpuFence");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRPresentationClient_OnSubmitFrameGpuFence_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRPresentationClient_OnSubmitFrameGpuFence_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->gpu_fence_handle)::BaseType::BufferWriter
      gpu_fence_handle_writer;
  mojo::internal::Serialize<::gfx::mojom::GpuFenceHandleDataView>(
      in_gpu_fence_handle, buffer, &gpu_fence_handle_writer, &serialization_context);
  params->gpu_fence_handle.Set(
      gpu_fence_handle_writer.is_null() ? nullptr : gpu_fence_handle_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->gpu_fence_handle.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null gpu_fence_handle in XRPresentationClient.OnSubmitFrameGpuFence request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRPresentationClient::Name_);
  message.set_method_name("OnSubmitFrameGpuFence");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool XRPresentationClientStubDispatch::Accept(
    XRPresentationClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kXRPresentationClient_OnSubmitFrameTransferred_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRPresentationClient::OnSubmitFrameTransferred",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRPresentationClient_OnSubmitFrameTransferred_Params_Data* params =
          reinterpret_cast<internal::XRPresentationClient_OnSubmitFrameTransferred_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_success{};
      XRPresentationClient_OnSubmitFrameTransferred_ParamsDataView input_data_view(params, &serialization_context);
      
      p_success = input_data_view.success();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRPresentationClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSubmitFrameTransferred(
std::move(p_success));
      return true;
    }
    case internal::kXRPresentationClient_OnSubmitFrameRendered_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRPresentationClient::OnSubmitFrameRendered",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRPresentationClient_OnSubmitFrameRendered_Params_Data* params =
          reinterpret_cast<internal::XRPresentationClient_OnSubmitFrameRendered_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRPresentationClient_OnSubmitFrameRendered_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRPresentationClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSubmitFrameRendered();
      return true;
    }
    case internal::kXRPresentationClient_OnSubmitFrameGpuFence_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRPresentationClient::OnSubmitFrameGpuFence",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRPresentationClient_OnSubmitFrameGpuFence_Params_Data* params =
          reinterpret_cast<internal::XRPresentationClient_OnSubmitFrameGpuFence_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::gfx::GpuFenceHandle p_gpu_fence_handle{};
      XRPresentationClient_OnSubmitFrameGpuFence_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadGpuFenceHandle(&p_gpu_fence_handle))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRPresentationClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSubmitFrameGpuFence(
std::move(p_gpu_fence_handle));
      return true;
    }
  }
  return false;
}

// static
bool XRPresentationClientStubDispatch::AcceptWithResponder(
    XRPresentationClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kXRPresentationClient_OnSubmitFrameTransferred_Name: {
      break;
    }
    case internal::kXRPresentationClient_OnSubmitFrameRendered_Name: {
      break;
    }
    case internal::kXRPresentationClient_OnSubmitFrameGpuFence_Name: {
      break;
    }
  }
  return false;
}

bool XRPresentationClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XRPresentationClient RequestValidator");

  switch (message->header()->name) {
    case internal::kXRPresentationClient_OnSubmitFrameTransferred_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRPresentationClient_OnSubmitFrameTransferred_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRPresentationClient_OnSubmitFrameRendered_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRPresentationClient_OnSubmitFrameRendered_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRPresentationClient_OnSubmitFrameGpuFence_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRPresentationClient_OnSubmitFrameGpuFence_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char XRSessionClient::Name_[] = "device.mojom.XRSessionClient";

XRSessionClientProxy::XRSessionClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void XRSessionClientProxy::OnChanged(
    VRDisplayInfoPtr in_display) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRSessionClient::OnChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRSessionClient_OnChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRSessionClient_OnChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->display)::BaseType::BufferWriter
      display_writer;
  mojo::internal::Serialize<::device::mojom::VRDisplayInfoDataView>(
      in_display, buffer, &display_writer, &serialization_context);
  params->display.Set(
      display_writer.is_null() ? nullptr : display_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->display.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null display in XRSessionClient.OnChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRSessionClient::Name_);
  message.set_method_name("OnChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void XRSessionClientProxy::OnExitPresent(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRSessionClient::OnExitPresent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRSessionClient_OnExitPresent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRSessionClient_OnExitPresent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRSessionClient::Name_);
  message.set_method_name("OnExitPresent");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void XRSessionClientProxy::OnBlur(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRSessionClient::OnBlur");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRSessionClient_OnBlur_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRSessionClient_OnBlur_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRSessionClient::Name_);
  message.set_method_name("OnBlur");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void XRSessionClientProxy::OnFocus(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRSessionClient::OnFocus");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRSessionClient_OnFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRSessionClient_OnFocus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRSessionClient::Name_);
  message.set_method_name("OnFocus");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool XRSessionClientStubDispatch::Accept(
    XRSessionClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kXRSessionClient_OnChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRSessionClient::OnChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRSessionClient_OnChanged_Params_Data* params =
          reinterpret_cast<internal::XRSessionClient_OnChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRDisplayInfoPtr p_display{};
      XRSessionClient_OnChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDisplay(&p_display))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRSessionClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnChanged(
std::move(p_display));
      return true;
    }
    case internal::kXRSessionClient_OnExitPresent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRSessionClient::OnExitPresent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRSessionClient_OnExitPresent_Params_Data* params =
          reinterpret_cast<internal::XRSessionClient_OnExitPresent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRSessionClient_OnExitPresent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRSessionClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnExitPresent();
      return true;
    }
    case internal::kXRSessionClient_OnBlur_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRSessionClient::OnBlur",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRSessionClient_OnBlur_Params_Data* params =
          reinterpret_cast<internal::XRSessionClient_OnBlur_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRSessionClient_OnBlur_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRSessionClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnBlur();
      return true;
    }
    case internal::kXRSessionClient_OnFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRSessionClient::OnFocus",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRSessionClient_OnFocus_Params_Data* params =
          reinterpret_cast<internal::XRSessionClient_OnFocus_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRSessionClient_OnFocus_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRSessionClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnFocus();
      return true;
    }
  }
  return false;
}

// static
bool XRSessionClientStubDispatch::AcceptWithResponder(
    XRSessionClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kXRSessionClient_OnChanged_Name: {
      break;
    }
    case internal::kXRSessionClient_OnExitPresent_Name: {
      break;
    }
    case internal::kXRSessionClient_OnBlur_Name: {
      break;
    }
    case internal::kXRSessionClient_OnFocus_Name: {
      break;
    }
  }
  return false;
}

bool XRSessionClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XRSessionClient RequestValidator");

  switch (message->header()->name) {
    case internal::kXRSessionClient_OnChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRSessionClient_OnChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRSessionClient_OnExitPresent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRSessionClient_OnExitPresent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRSessionClient_OnBlur_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRSessionClient_OnBlur_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRSessionClient_OnFocus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRSessionClient_OnFocus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char VRDisplayClient::Name_[] = "device.mojom.VRDisplayClient";

class VRDisplayClient_OnActivate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VRDisplayClient_OnActivate_ForwardToCallback(
      VRDisplayClient::OnActivateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VRDisplayClient::OnActivateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VRDisplayClient_OnActivate_ForwardToCallback);
};

VRDisplayClientProxy::VRDisplayClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VRDisplayClientProxy::OnActivate(
    VRDisplayEventReason in_reason, OnActivateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VRDisplayClient::OnActivate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRDisplayClient_OnActivate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRDisplayClient_OnActivate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::VRDisplayEventReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VRDisplayClient::Name_);
  message.set_method_name("OnActivate");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VRDisplayClient_OnActivate_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VRDisplayClientProxy::OnDeactivate(
    VRDisplayEventReason in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::VRDisplayClient::OnDeactivate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRDisplayClient_OnDeactivate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRDisplayClient_OnDeactivate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::VRDisplayEventReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VRDisplayClient::Name_);
  message.set_method_name("OnDeactivate");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class VRDisplayClient_OnActivate_ProxyToResponder {
 public:
  static VRDisplayClient::OnActivateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VRDisplayClient_OnActivate_ProxyToResponder> proxy(
        new VRDisplayClient_OnActivate_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VRDisplayClient_OnActivate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VRDisplayClient_OnActivate_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  VRDisplayClient_OnActivate_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "VRDisplayClient::OnActivateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_will_not_present);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VRDisplayClient_OnActivate_ProxyToResponder);
};

bool VRDisplayClient_OnActivate_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::VRDisplayClient::OnActivateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VRDisplayClient_OnActivate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VRDisplayClient_OnActivate_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_will_not_present{};
  VRDisplayClient_OnActivate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_will_not_present = input_data_view.will_not_present();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VRDisplayClient::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_will_not_present));
  return true;
}

void VRDisplayClient_OnActivate_ProxyToResponder::Run(
    bool in_will_not_present) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVRDisplayClient_OnActivate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::VRDisplayClient_OnActivate_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->will_not_present = in_will_not_present;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::VRDisplayClient::OnActivateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VRDisplayClient::Name_);
  message.set_method_name("OnActivate");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool VRDisplayClientStubDispatch::Accept(
    VRDisplayClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVRDisplayClient_OnActivate_Name: {
      break;
    }
    case internal::kVRDisplayClient_OnDeactivate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VRDisplayClient::OnDeactivate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VRDisplayClient_OnDeactivate_Params_Data* params =
          reinterpret_cast<internal::VRDisplayClient_OnDeactivate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRDisplayEventReason p_reason{};
      VRDisplayClient_OnDeactivate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VRDisplayClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDeactivate(
std::move(p_reason));
      return true;
    }
  }
  return false;
}

// static
bool VRDisplayClientStubDispatch::AcceptWithResponder(
    VRDisplayClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVRDisplayClient_OnActivate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::VRDisplayClient::OnActivate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::VRDisplayClient_OnActivate_Params_Data* params =
          reinterpret_cast<
              internal::VRDisplayClient_OnActivate_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VRDisplayEventReason p_reason{};
      VRDisplayClient_OnActivate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VRDisplayClient::Name_, 0, false);
        return false;
      }
      VRDisplayClient::OnActivateCallback callback =
          VRDisplayClient_OnActivate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnActivate(
std::move(p_reason), std::move(callback));
      return true;
    }
    case internal::kVRDisplayClient_OnDeactivate_Name: {
      break;
    }
  }
  return false;
}

bool VRDisplayClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRDisplayClient RequestValidator");

  switch (message->header()->name) {
    case internal::kVRDisplayClient_OnActivate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRDisplayClient_OnActivate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVRDisplayClient_OnDeactivate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRDisplayClient_OnDeactivate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool VRDisplayClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VRDisplayClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVRDisplayClient_OnActivate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRDisplayClient_OnActivate_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::blink::XRSessionOptions::DataView, ::device::mojom::blink::XRSessionOptionsPtr>::Read(
    ::device::mojom::blink::XRSessionOptions::DataView input,
    ::device::mojom::blink::XRSessionOptionsPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRSessionOptionsPtr result(::device::mojom::blink::XRSessionOptions::New());
  
      result->immersive = input.immersive();
      result->environment_integration = input.environment_integration();
      result->use_legacy_webvr_render_path = input.use_legacy_webvr_render_path();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRSession::DataView, ::device::mojom::blink::XRSessionPtr>::Read(
    ::device::mojom::blink::XRSession::DataView input,
    ::device::mojom::blink::XRSessionPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRSessionPtr result(::device::mojom::blink::XRSession::New());
  
      result->data_provider =
          input.TakeDataProvider<decltype(result->data_provider)>();
      result->client_request =
          input.TakeClientRequest<decltype(result->client_request)>();
      if (!input.ReadDisplayInfo(&result->display_info))
        success = false;
      if (!input.ReadSubmitFrameSink(&result->submit_frame_sink))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRPresentationConnection::DataView, ::device::mojom::blink::XRPresentationConnectionPtr>::Read(
    ::device::mojom::blink::XRPresentationConnection::DataView input,
    ::device::mojom::blink::XRPresentationConnectionPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRPresentationConnectionPtr result(::device::mojom::blink::XRPresentationConnection::New());
  
      result->provider =
          input.TakeProvider<decltype(result->provider)>();
      result->client_request =
          input.TakeClientRequest<decltype(result->client_request)>();
      if (!input.ReadTransportOptions(&result->transport_options))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRInputSourceDescription::DataView, ::device::mojom::blink::XRInputSourceDescriptionPtr>::Read(
    ::device::mojom::blink::XRInputSourceDescription::DataView input,
    ::device::mojom::blink::XRInputSourceDescriptionPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRInputSourceDescriptionPtr result(::device::mojom::blink::XRInputSourceDescription::New());
  
      if (!input.ReadTargetRayMode(&result->target_ray_mode))
        success = false;
      if (!input.ReadHandedness(&result->handedness))
        success = false;
      result->emulated_position = input.emulated_position();
      if (!input.ReadPointerOffset(&result->pointer_offset))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRInputSourceState::DataView, ::device::mojom::blink::XRInputSourceStatePtr>::Read(
    ::device::mojom::blink::XRInputSourceState::DataView input,
    ::device::mojom::blink::XRInputSourceStatePtr* output) {
  bool success = true;
  ::device::mojom::blink::XRInputSourceStatePtr result(::device::mojom::blink::XRInputSourceState::New());
  
      result->source_id = input.source_id();
      if (!input.ReadDescription(&result->description))
        success = false;
      if (!input.ReadGrip(&result->grip))
        success = false;
      result->primary_input_pressed = input.primary_input_pressed();
      result->primary_input_clicked = input.primary_input_clicked();
      if (!input.ReadGamepad(&result->gamepad))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VRFieldOfView::DataView, ::device::mojom::blink::VRFieldOfViewPtr>::Read(
    ::device::mojom::blink::VRFieldOfView::DataView input,
    ::device::mojom::blink::VRFieldOfViewPtr* output) {
  bool success = true;
  ::device::mojom::blink::VRFieldOfViewPtr result(::device::mojom::blink::VRFieldOfView::New());
  
      result->upDegrees = input.upDegrees();
      result->downDegrees = input.downDegrees();
      result->leftDegrees = input.leftDegrees();
      result->rightDegrees = input.rightDegrees();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VRPose::DataView, ::device::mojom::blink::VRPosePtr>::Read(
    ::device::mojom::blink::VRPose::DataView input,
    ::device::mojom::blink::VRPosePtr* output) {
  bool success = true;
  ::device::mojom::blink::VRPosePtr result(::device::mojom::blink::VRPose::New());
  
      if (!input.ReadOrientation(&result->orientation))
        success = false;
      if (!input.ReadPosition(&result->position))
        success = false;
      if (!input.ReadAngularVelocity(&result->angularVelocity))
        success = false;
      if (!input.ReadLinearVelocity(&result->linearVelocity))
        success = false;
      if (!input.ReadAngularAcceleration(&result->angularAcceleration))
        success = false;
      if (!input.ReadLinearAcceleration(&result->linearAcceleration))
        success = false;
      if (!input.ReadInputState(&result->input_state))
        success = false;
      result->pose_reset = input.pose_reset();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRRay::DataView, ::device::mojom::blink::XRRayPtr>::Read(
    ::device::mojom::blink::XRRay::DataView input,
    ::device::mojom::blink::XRRayPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRRayPtr result(::device::mojom::blink::XRRay::New());
  
      if (!input.ReadOrigin(&result->origin))
        success = false;
      if (!input.ReadDirection(&result->direction))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRHitResult::DataView, ::device::mojom::blink::XRHitResultPtr>::Read(
    ::device::mojom::blink::XRHitResult::DataView input,
    ::device::mojom::blink::XRHitResultPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRHitResultPtr result(::device::mojom::blink::XRHitResult::New());
  
      if (!input.ReadHitMatrix(&result->hit_matrix))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VRDisplayCapabilities::DataView, ::device::mojom::blink::VRDisplayCapabilitiesPtr>::Read(
    ::device::mojom::blink::VRDisplayCapabilities::DataView input,
    ::device::mojom::blink::VRDisplayCapabilitiesPtr* output) {
  bool success = true;
  ::device::mojom::blink::VRDisplayCapabilitiesPtr result(::device::mojom::blink::VRDisplayCapabilities::New());
  
      result->hasPosition = input.hasPosition();
      result->hasExternalDisplay = input.hasExternalDisplay();
      result->canPresent = input.canPresent();
      result->canProvideEnvironmentIntegration = input.canProvideEnvironmentIntegration();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VREyeParameters::DataView, ::device::mojom::blink::VREyeParametersPtr>::Read(
    ::device::mojom::blink::VREyeParameters::DataView input,
    ::device::mojom::blink::VREyeParametersPtr* output) {
  bool success = true;
  ::device::mojom::blink::VREyeParametersPtr result(::device::mojom::blink::VREyeParameters::New());
  
      if (!input.ReadFieldOfView(&result->fieldOfView))
        success = false;
      if (!input.ReadOffset(&result->offset))
        success = false;
      result->renderWidth = input.renderWidth();
      result->renderHeight = input.renderHeight();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VRStageParameters::DataView, ::device::mojom::blink::VRStageParametersPtr>::Read(
    ::device::mojom::blink::VRStageParameters::DataView input,
    ::device::mojom::blink::VRStageParametersPtr* output) {
  bool success = true;
  ::device::mojom::blink::VRStageParametersPtr result(::device::mojom::blink::VRStageParameters::New());
  
      if (!input.ReadStandingTransform(&result->standingTransform))
        success = false;
      result->sizeX = input.sizeX();
      result->sizeZ = input.sizeZ();
      if (!input.ReadBounds(&result->bounds))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::VRDisplayInfo::DataView, ::device::mojom::blink::VRDisplayInfoPtr>::Read(
    ::device::mojom::blink::VRDisplayInfo::DataView input,
    ::device::mojom::blink::VRDisplayInfoPtr* output) {
  bool success = true;
  ::device::mojom::blink::VRDisplayInfoPtr result(::device::mojom::blink::VRDisplayInfo::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadDisplayName(&result->displayName))
        success = false;
      if (!input.ReadCapabilities(&result->capabilities))
        success = false;
      if (!input.ReadStageParameters(&result->stageParameters))
        success = false;
      if (!input.ReadLeftEye(&result->leftEye))
        success = false;
      if (!input.ReadRightEye(&result->rightEye))
        success = false;
      result->webvr_default_framebuffer_scale = input.webvr_default_framebuffer_scale();
      result->webxr_default_framebuffer_scale = input.webxr_default_framebuffer_scale();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRPresentationTransportOptions::DataView, ::device::mojom::blink::XRPresentationTransportOptionsPtr>::Read(
    ::device::mojom::blink::XRPresentationTransportOptions::DataView input,
    ::device::mojom::blink::XRPresentationTransportOptionsPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRPresentationTransportOptionsPtr result(::device::mojom::blink::XRPresentationTransportOptions::New());
  
      if (!input.ReadTransportMethod(&result->transport_method))
        success = false;
      result->wait_for_transfer_notification = input.wait_for_transfer_notification();
      result->wait_for_render_notification = input.wait_for_render_notification();
      result->wait_for_gpu_fence = input.wait_for_gpu_fence();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRPlanePointData::DataView, ::device::mojom::blink::XRPlanePointDataPtr>::Read(
    ::device::mojom::blink::XRPlanePointData::DataView input,
    ::device::mojom::blink::XRPlanePointDataPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRPlanePointDataPtr result(::device::mojom::blink::XRPlanePointData::New());
  
      result->x = input.x();
      result->z = input.z();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRPlaneData::DataView, ::device::mojom::blink::XRPlaneDataPtr>::Read(
    ::device::mojom::blink::XRPlaneData::DataView input,
    ::device::mojom::blink::XRPlaneDataPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRPlaneDataPtr result(::device::mojom::blink::XRPlaneData::New());
  
      result->id = input.id();
      if (!input.ReadOrientation(&result->orientation))
        success = false;
      if (!input.ReadPose(&result->pose))
        success = false;
      if (!input.ReadPolygon(&result->polygon))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRFrameData::DataView, ::device::mojom::blink::XRFrameDataPtr>::Read(
    ::device::mojom::blink::XRFrameData::DataView input,
    ::device::mojom::blink::XRFrameDataPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRFrameDataPtr result(::device::mojom::blink::XRFrameData::New());
  
      if (!input.ReadPose(&result->pose))
        success = false;
      if (!input.ReadTimeDelta(&result->time_delta))
        success = false;
      if (!input.ReadBufferHolder(&result->buffer_holder))
        success = false;
      result->frame_id = input.frame_id();
      if (!input.ReadLeftEye(&result->left_eye))
        success = false;
      if (!input.ReadRightEye(&result->right_eye))
        success = false;
      result->stage_parameters_updated = input.stage_parameters_updated();
      if (!input.ReadStageParameters(&result->stage_parameters))
        success = false;
      if (!input.ReadDetectedPlanes(&result->detected_planes))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRFrameDataRequestOptions::DataView, ::device::mojom::blink::XRFrameDataRequestOptionsPtr>::Read(
    ::device::mojom::blink::XRFrameDataRequestOptions::DataView input,
    ::device::mojom::blink::XRFrameDataRequestOptionsPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRFrameDataRequestOptionsPtr result(::device::mojom::blink::XRFrameDataRequestOptions::New());
  
      result->include_plane_data = input.include_plane_data();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif