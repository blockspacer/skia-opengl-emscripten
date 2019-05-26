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

#include "device/vr/public/mojom/isolated_xr_service.mojom-blink.h"

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

#include "device/vr/public/mojom/isolated_xr_service.mojom-params-data.h"
#include "device/vr/public/mojom/isolated_xr_service.mojom-shared-message-ids.h"

#include "device/vr/public/mojom/isolated_xr_service.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_BLINK_JUMBO_H_
#define DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_BLINK_JUMBO_H_
#include "device/gamepad/public/cpp/gamepad_mojom_traits.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace device {
namespace mojom {
namespace blink {
const char kVrIsolatedServiceName[] = "xr_device_service";
XRRuntimeSessionOptions::XRRuntimeSessionOptions()
    : immersive(),
      environment_integration(),
      render_process_id(),
      render_frame_id(),
      use_legacy_webvr_render_path() {}

XRRuntimeSessionOptions::XRRuntimeSessionOptions(
    bool immersive_in,
    bool environment_integration_in,
    int32_t render_process_id_in,
    int32_t render_frame_id_in,
    bool use_legacy_webvr_render_path_in)
    : immersive(std::move(immersive_in)),
      environment_integration(std::move(environment_integration_in)),
      render_process_id(std::move(render_process_id_in)),
      render_frame_id(std::move(render_frame_id_in)),
      use_legacy_webvr_render_path(std::move(use_legacy_webvr_render_path_in)) {}

XRRuntimeSessionOptions::~XRRuntimeSessionOptions() = default;
size_t XRRuntimeSessionOptions::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->immersive);
  seed = mojo::internal::WTFHash(seed, this->environment_integration);
  seed = mojo::internal::WTFHash(seed, this->render_process_id);
  seed = mojo::internal::WTFHash(seed, this->render_frame_id);
  seed = mojo::internal::WTFHash(seed, this->use_legacy_webvr_render_path);
  return seed;
}

bool XRRuntimeSessionOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRGamepadButton::XRGamepadButton()
    : pressed(),
      touched(),
      value() {}

XRGamepadButton::XRGamepadButton(
    bool pressed_in,
    bool touched_in,
    double value_in)
    : pressed(std::move(pressed_in)),
      touched(std::move(touched_in)),
      value(std::move(value_in)) {}

XRGamepadButton::~XRGamepadButton() = default;
size_t XRGamepadButton::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->pressed);
  seed = mojo::internal::WTFHash(seed, this->touched);
  seed = mojo::internal::WTFHash(seed, this->value);
  return seed;
}

bool XRGamepadButton::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRGamepad::XRGamepad()
    : can_provide_orientation(),
      can_provide_position(),
      axes(),
      buttons(),
      pose(),
      hand(),
      controller_id(),
      timestamp() {}

XRGamepad::XRGamepad(
    bool can_provide_orientation_in,
    bool can_provide_position_in,
    const WTF::Vector<double>& axes_in,
    WTF::Vector<XRGamepadButtonPtr> buttons_in,
    ::device::mojom::blink::VRPosePtr pose_in,
    ::device::mojom::blink::XRHandedness hand_in,
    uint32_t controller_id_in,
    base::TimeTicks timestamp_in)
    : can_provide_orientation(std::move(can_provide_orientation_in)),
      can_provide_position(std::move(can_provide_position_in)),
      axes(std::move(axes_in)),
      buttons(std::move(buttons_in)),
      pose(std::move(pose_in)),
      hand(std::move(hand_in)),
      controller_id(std::move(controller_id_in)),
      timestamp(std::move(timestamp_in)) {}

XRGamepad::~XRGamepad() = default;

bool XRGamepad::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
XRGamepadData::XRGamepadData()
    : gamepads() {}

XRGamepadData::XRGamepadData(
    WTF::Vector<XRGamepadPtr> gamepads_in)
    : gamepads(std::move(gamepads_in)) {}

XRGamepadData::~XRGamepadData() = default;

bool XRGamepadData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char XRSessionController::Name_[] = "device.mojom.XRSessionController";

XRSessionControllerProxy::XRSessionControllerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void XRSessionControllerProxy::SetFrameDataRestricted(
    bool in_restricted) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRSessionController::SetFrameDataRestricted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRSessionController_SetFrameDataRestricted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRSessionController_SetFrameDataRestricted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->restricted = in_restricted;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRSessionController::Name_);
  message.set_method_name("SetFrameDataRestricted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool XRSessionControllerStubDispatch::Accept(
    XRSessionController* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kXRSessionController_SetFrameDataRestricted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRSessionController::SetFrameDataRestricted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRSessionController_SetFrameDataRestricted_Params_Data* params =
          reinterpret_cast<internal::XRSessionController_SetFrameDataRestricted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_restricted{};
      XRSessionController_SetFrameDataRestricted_ParamsDataView input_data_view(params, &serialization_context);
      
      p_restricted = input_data_view.restricted();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRSessionController::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetFrameDataRestricted(
std::move(p_restricted));
      return true;
    }
  }
  return false;
}

// static
bool XRSessionControllerStubDispatch::AcceptWithResponder(
    XRSessionController* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kXRSessionController_SetFrameDataRestricted_Name: {
      break;
    }
  }
  return false;
}

bool XRSessionControllerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XRSessionController RequestValidator");

  switch (message->header()->name) {
    case internal::kXRSessionController_SetFrameDataRestricted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRSessionController_SetFrameDataRestricted_Params_Data>(
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

const char XRRuntimeEventListener::Name_[] = "device.mojom.XRRuntimeEventListener";

class XRRuntimeEventListener_OnDeviceActivated_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  XRRuntimeEventListener_OnDeviceActivated_ForwardToCallback(
      XRRuntimeEventListener::OnDeviceActivatedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  XRRuntimeEventListener::OnDeviceActivatedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(XRRuntimeEventListener_OnDeviceActivated_ForwardToCallback);
};

XRRuntimeEventListenerProxy::XRRuntimeEventListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void XRRuntimeEventListenerProxy::OnDisplayInfoChanged(
    ::device::mojom::blink::VRDisplayInfoPtr in_display_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRRuntimeEventListener::OnDisplayInfoChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRRuntimeEventListener_OnDisplayInfoChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->display_info)::BaseType::BufferWriter
      display_info_writer;
  mojo::internal::Serialize<::device::mojom::VRDisplayInfoDataView>(
      in_display_info, buffer, &display_info_writer, &serialization_context);
  params->display_info.Set(
      display_info_writer.is_null() ? nullptr : display_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->display_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null display_info in XRRuntimeEventListener.OnDisplayInfoChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRRuntimeEventListener::Name_);
  message.set_method_name("OnDisplayInfoChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void XRRuntimeEventListenerProxy::OnDeviceActivated(
    ::device::mojom::blink::VRDisplayEventReason in_reason, OnDeviceActivatedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRRuntimeEventListener::OnDeviceActivated");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRRuntimeEventListener_OnDeviceActivated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRRuntimeEventListener_OnDeviceActivated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::VRDisplayEventReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRRuntimeEventListener::Name_);
  message.set_method_name("OnDeviceActivated");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new XRRuntimeEventListener_OnDeviceActivated_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void XRRuntimeEventListenerProxy::OnDeviceIdle(
    ::device::mojom::blink::VRDisplayEventReason in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRRuntimeEventListener::OnDeviceIdle");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRRuntimeEventListener_OnDeviceIdle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRRuntimeEventListener_OnDeviceIdle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::VRDisplayEventReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRRuntimeEventListener::Name_);
  message.set_method_name("OnDeviceIdle");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void XRRuntimeEventListenerProxy::OnExitPresent(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRRuntimeEventListener::OnExitPresent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRRuntimeEventListener_OnExitPresent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRRuntimeEventListener_OnExitPresent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRRuntimeEventListener::Name_);
  message.set_method_name("OnExitPresent");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class XRRuntimeEventListener_OnDeviceActivated_ProxyToResponder {
 public:
  static XRRuntimeEventListener::OnDeviceActivatedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<XRRuntimeEventListener_OnDeviceActivated_ProxyToResponder> proxy(
        new XRRuntimeEventListener_OnDeviceActivated_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&XRRuntimeEventListener_OnDeviceActivated_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~XRRuntimeEventListener_OnDeviceActivated_ProxyToResponder() {
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
  XRRuntimeEventListener_OnDeviceActivated_ProxyToResponder(
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
        << "XRRuntimeEventListener::OnDeviceActivatedCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(XRRuntimeEventListener_OnDeviceActivated_ProxyToResponder);
};

bool XRRuntimeEventListener_OnDeviceActivated_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::XRRuntimeEventListener::OnDeviceActivatedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data* params =
      reinterpret_cast<
          internal::XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_will_not_present{};
  XRRuntimeEventListener_OnDeviceActivated_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_will_not_present = input_data_view.will_not_present();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        XRRuntimeEventListener::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_will_not_present));
  return true;
}

void XRRuntimeEventListener_OnDeviceActivated_ProxyToResponder::Run(
    bool in_will_not_present) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRRuntimeEventListener_OnDeviceActivated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->will_not_present = in_will_not_present;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::XRRuntimeEventListener::OnDeviceActivatedCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRRuntimeEventListener::Name_);
  message.set_method_name("OnDeviceActivated");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool XRRuntimeEventListenerStubDispatch::Accept(
    XRRuntimeEventListener* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kXRRuntimeEventListener_OnDisplayInfoChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRRuntimeEventListener::OnDisplayInfoChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data* params =
          reinterpret_cast<internal::XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::blink::VRDisplayInfoPtr p_display_info{};
      XRRuntimeEventListener_OnDisplayInfoChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDisplayInfo(&p_display_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRRuntimeEventListener::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDisplayInfoChanged(
std::move(p_display_info));
      return true;
    }
    case internal::kXRRuntimeEventListener_OnDeviceActivated_Name: {
      break;
    }
    case internal::kXRRuntimeEventListener_OnDeviceIdle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRRuntimeEventListener::OnDeviceIdle",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRRuntimeEventListener_OnDeviceIdle_Params_Data* params =
          reinterpret_cast<internal::XRRuntimeEventListener_OnDeviceIdle_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::blink::VRDisplayEventReason p_reason{};
      XRRuntimeEventListener_OnDeviceIdle_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRRuntimeEventListener::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDeviceIdle(
std::move(p_reason));
      return true;
    }
    case internal::kXRRuntimeEventListener_OnExitPresent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRRuntimeEventListener::OnExitPresent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRRuntimeEventListener_OnExitPresent_Params_Data* params =
          reinterpret_cast<internal::XRRuntimeEventListener_OnExitPresent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRRuntimeEventListener_OnExitPresent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRRuntimeEventListener::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnExitPresent();
      return true;
    }
  }
  return false;
}

// static
bool XRRuntimeEventListenerStubDispatch::AcceptWithResponder(
    XRRuntimeEventListener* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kXRRuntimeEventListener_OnDisplayInfoChanged_Name: {
      break;
    }
    case internal::kXRRuntimeEventListener_OnDeviceActivated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRRuntimeEventListener::OnDeviceActivated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::XRRuntimeEventListener_OnDeviceActivated_Params_Data* params =
          reinterpret_cast<
              internal::XRRuntimeEventListener_OnDeviceActivated_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::blink::VRDisplayEventReason p_reason{};
      XRRuntimeEventListener_OnDeviceActivated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRRuntimeEventListener::Name_, 1, false);
        return false;
      }
      XRRuntimeEventListener::OnDeviceActivatedCallback callback =
          XRRuntimeEventListener_OnDeviceActivated_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDeviceActivated(
std::move(p_reason), std::move(callback));
      return true;
    }
    case internal::kXRRuntimeEventListener_OnDeviceIdle_Name: {
      break;
    }
    case internal::kXRRuntimeEventListener_OnExitPresent_Name: {
      break;
    }
  }
  return false;
}

bool XRRuntimeEventListenerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XRRuntimeEventListener RequestValidator");

  switch (message->header()->name) {
    case internal::kXRRuntimeEventListener_OnDisplayInfoChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRRuntimeEventListener_OnDeviceActivated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRRuntimeEventListener_OnDeviceActivated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRRuntimeEventListener_OnDeviceIdle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRRuntimeEventListener_OnDeviceIdle_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRRuntimeEventListener_OnExitPresent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRRuntimeEventListener_OnExitPresent_Params_Data>(
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

bool XRRuntimeEventListenerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XRRuntimeEventListener ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kXRRuntimeEventListener_OnDeviceActivated_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data>(
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
const char XRRuntime::Name_[] = "device.mojom.XRRuntime";

class XRRuntime_RequestSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  XRRuntime_RequestSession_ForwardToCallback(
      XRRuntime::RequestSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  XRRuntime::RequestSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(XRRuntime_RequestSession_ForwardToCallback);
};

class XRRuntime_ListenToDeviceChanges_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  XRRuntime_ListenToDeviceChanges_ForwardToCallback(
      XRRuntime::ListenToDeviceChangesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  XRRuntime::ListenToDeviceChangesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(XRRuntime_ListenToDeviceChanges_ForwardToCallback);
};

class XRRuntime_EnsureInitialized_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  XRRuntime_EnsureInitialized_ForwardToCallback(
      XRRuntime::EnsureInitializedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  XRRuntime::EnsureInitializedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(XRRuntime_EnsureInitialized_ForwardToCallback);
};

XRRuntimeProxy::XRRuntimeProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void XRRuntimeProxy::RequestSession(
    XRRuntimeSessionOptionsPtr in_options, RequestSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRRuntime::RequestSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRRuntime_RequestSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRRuntime_RequestSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::device::mojom::XRRuntimeSessionOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in XRRuntime.RequestSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRRuntime::Name_);
  message.set_method_name("RequestSession");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new XRRuntime_RequestSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void XRRuntimeProxy::ListenToDeviceChanges(
    XRRuntimeEventListenerAssociatedPtrInfo in_listener, ListenToDeviceChangesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRRuntime::ListenToDeviceChanges");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRRuntime_ListenToDeviceChanges_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRRuntime_ListenToDeviceChanges_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::XRRuntimeEventListenerAssociatedPtrInfoDataView>(
      in_listener, &params->listener, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid listener in XRRuntime.ListenToDeviceChanges request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRRuntime::Name_);
  message.set_method_name("ListenToDeviceChanges");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new XRRuntime_ListenToDeviceChanges_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void XRRuntimeProxy::EnsureInitialized(
    int32_t in_render_process_id, int32_t in_render_frame_id, EnsureInitializedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRRuntime::EnsureInitialized");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRRuntime_EnsureInitialized_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRRuntime_EnsureInitialized_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->render_process_id = in_render_process_id;
  params->render_frame_id = in_render_frame_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRRuntime::Name_);
  message.set_method_name("EnsureInitialized");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new XRRuntime_EnsureInitialized_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void XRRuntimeProxy::SetListeningForActivate(
    bool in_listen_for_activation) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRRuntime::SetListeningForActivate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRRuntime_SetListeningForActivate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRRuntime_SetListeningForActivate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->listen_for_activation = in_listen_for_activation;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRRuntime::Name_);
  message.set_method_name("SetListeningForActivate");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void XRRuntimeProxy::SetInlinePosesEnabled(
    bool in_enable) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRRuntime::SetInlinePosesEnabled");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRRuntime_SetInlinePosesEnabled_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRRuntime_SetInlinePosesEnabled_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enable = in_enable;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRRuntime::Name_);
  message.set_method_name("SetInlinePosesEnabled");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class XRRuntime_RequestSession_ProxyToResponder {
 public:
  static XRRuntime::RequestSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<XRRuntime_RequestSession_ProxyToResponder> proxy(
        new XRRuntime_RequestSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&XRRuntime_RequestSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~XRRuntime_RequestSession_ProxyToResponder() {
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
  XRRuntime_RequestSession_ProxyToResponder(
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
        << "XRRuntime::RequestSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::device::mojom::blink::XRSessionPtr in_session, XRSessionControllerPtr in_controller);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(XRRuntime_RequestSession_ProxyToResponder);
};

bool XRRuntime_RequestSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::XRRuntime::RequestSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::XRRuntime_RequestSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::XRRuntime_RequestSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::device::mojom::blink::XRSessionPtr p_session{};
  XRSessionControllerPtr p_controller{};
  XRRuntime_RequestSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSession(&p_session))
    success = false;
  p_controller =
      input_data_view.TakeController<decltype(p_controller)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        XRRuntime::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_session), 
std::move(p_controller));
  return true;
}

void XRRuntime_RequestSession_ProxyToResponder::Run(
    ::device::mojom::blink::XRSessionPtr in_session, XRSessionControllerPtr in_controller) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRRuntime_RequestSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRRuntime_RequestSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session)::BaseType::BufferWriter
      session_writer;
  mojo::internal::Serialize<::device::mojom::XRSessionDataView>(
      in_session, buffer, &session_writer, &serialization_context);
  params->session.Set(
      session_writer.is_null() ? nullptr : session_writer.data());
  mojo::internal::Serialize<::device::mojom::XRSessionControllerPtrDataView>(
      in_controller, &params->controller, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::XRRuntime::RequestSessionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRRuntime::Name_);
  message.set_method_name("RequestSession");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class XRRuntime_ListenToDeviceChanges_ProxyToResponder {
 public:
  static XRRuntime::ListenToDeviceChangesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<XRRuntime_ListenToDeviceChanges_ProxyToResponder> proxy(
        new XRRuntime_ListenToDeviceChanges_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&XRRuntime_ListenToDeviceChanges_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~XRRuntime_ListenToDeviceChanges_ProxyToResponder() {
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
  XRRuntime_ListenToDeviceChanges_ProxyToResponder(
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
        << "XRRuntime::ListenToDeviceChangesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::device::mojom::blink::VRDisplayInfoPtr in_display_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(XRRuntime_ListenToDeviceChanges_ProxyToResponder);
};

bool XRRuntime_ListenToDeviceChanges_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::XRRuntime::ListenToDeviceChangesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::XRRuntime_ListenToDeviceChanges_ResponseParams_Data* params =
      reinterpret_cast<
          internal::XRRuntime_ListenToDeviceChanges_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::device::mojom::blink::VRDisplayInfoPtr p_display_info{};
  XRRuntime_ListenToDeviceChanges_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDisplayInfo(&p_display_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        XRRuntime::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_display_info));
  return true;
}

void XRRuntime_ListenToDeviceChanges_ProxyToResponder::Run(
    ::device::mojom::blink::VRDisplayInfoPtr in_display_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRRuntime_ListenToDeviceChanges_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRRuntime_ListenToDeviceChanges_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->display_info)::BaseType::BufferWriter
      display_info_writer;
  mojo::internal::Serialize<::device::mojom::VRDisplayInfoDataView>(
      in_display_info, buffer, &display_info_writer, &serialization_context);
  params->display_info.Set(
      display_info_writer.is_null() ? nullptr : display_info_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::XRRuntime::ListenToDeviceChangesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRRuntime::Name_);
  message.set_method_name("ListenToDeviceChanges");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class XRRuntime_EnsureInitialized_ProxyToResponder {
 public:
  static XRRuntime::EnsureInitializedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<XRRuntime_EnsureInitialized_ProxyToResponder> proxy(
        new XRRuntime_EnsureInitialized_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&XRRuntime_EnsureInitialized_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~XRRuntime_EnsureInitialized_ProxyToResponder() {
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
  XRRuntime_EnsureInitialized_ProxyToResponder(
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
        << "XRRuntime::EnsureInitializedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(XRRuntime_EnsureInitialized_ProxyToResponder);
};

bool XRRuntime_EnsureInitialized_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::XRRuntime::EnsureInitializedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::XRRuntime_EnsureInitialized_ResponseParams_Data* params =
      reinterpret_cast<
          internal::XRRuntime_EnsureInitialized_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  XRRuntime_EnsureInitialized_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        XRRuntime::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void XRRuntime_EnsureInitialized_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRRuntime_EnsureInitialized_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRRuntime_EnsureInitialized_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::XRRuntime::EnsureInitializedCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRRuntime::Name_);
  message.set_method_name("EnsureInitialized");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool XRRuntimeStubDispatch::Accept(
    XRRuntime* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kXRRuntime_RequestSession_Name: {
      break;
    }
    case internal::kXRRuntime_ListenToDeviceChanges_Name: {
      break;
    }
    case internal::kXRRuntime_EnsureInitialized_Name: {
      break;
    }
    case internal::kXRRuntime_SetListeningForActivate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRRuntime::SetListeningForActivate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRRuntime_SetListeningForActivate_Params_Data* params =
          reinterpret_cast<internal::XRRuntime_SetListeningForActivate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_listen_for_activation{};
      XRRuntime_SetListeningForActivate_ParamsDataView input_data_view(params, &serialization_context);
      
      p_listen_for_activation = input_data_view.listen_for_activation();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRRuntime::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetListeningForActivate(
std::move(p_listen_for_activation));
      return true;
    }
    case internal::kXRRuntime_SetInlinePosesEnabled_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRRuntime::SetInlinePosesEnabled",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRRuntime_SetInlinePosesEnabled_Params_Data* params =
          reinterpret_cast<internal::XRRuntime_SetInlinePosesEnabled_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_enable{};
      XRRuntime_SetInlinePosesEnabled_ParamsDataView input_data_view(params, &serialization_context);
      
      p_enable = input_data_view.enable();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRRuntime::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetInlinePosesEnabled(
std::move(p_enable));
      return true;
    }
  }
  return false;
}

// static
bool XRRuntimeStubDispatch::AcceptWithResponder(
    XRRuntime* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kXRRuntime_RequestSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRRuntime::RequestSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::XRRuntime_RequestSession_Params_Data* params =
          reinterpret_cast<
              internal::XRRuntime_RequestSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRRuntimeSessionOptionsPtr p_options{};
      XRRuntime_RequestSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRRuntime::Name_, 0, false);
        return false;
      }
      XRRuntime::RequestSessionCallback callback =
          XRRuntime_RequestSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestSession(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kXRRuntime_ListenToDeviceChanges_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRRuntime::ListenToDeviceChanges",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::XRRuntime_ListenToDeviceChanges_Params_Data* params =
          reinterpret_cast<
              internal::XRRuntime_ListenToDeviceChanges_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRRuntimeEventListenerAssociatedPtrInfo p_listener{};
      XRRuntime_ListenToDeviceChanges_ParamsDataView input_data_view(params, &serialization_context);
      
      p_listener =
          input_data_view.TakeListener<decltype(p_listener)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRRuntime::Name_, 1, false);
        return false;
      }
      XRRuntime::ListenToDeviceChangesCallback callback =
          XRRuntime_ListenToDeviceChanges_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ListenToDeviceChanges(
std::move(p_listener), std::move(callback));
      return true;
    }
    case internal::kXRRuntime_EnsureInitialized_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRRuntime::EnsureInitialized",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::XRRuntime_EnsureInitialized_Params_Data* params =
          reinterpret_cast<
              internal::XRRuntime_EnsureInitialized_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_render_process_id{};
      int32_t p_render_frame_id{};
      XRRuntime_EnsureInitialized_ParamsDataView input_data_view(params, &serialization_context);
      
      p_render_process_id = input_data_view.render_process_id();
      p_render_frame_id = input_data_view.render_frame_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRRuntime::Name_, 2, false);
        return false;
      }
      XRRuntime::EnsureInitializedCallback callback =
          XRRuntime_EnsureInitialized_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnsureInitialized(
std::move(p_render_process_id), 
std::move(p_render_frame_id), std::move(callback));
      return true;
    }
    case internal::kXRRuntime_SetListeningForActivate_Name: {
      break;
    }
    case internal::kXRRuntime_SetInlinePosesEnabled_Name: {
      break;
    }
  }
  return false;
}

bool XRRuntimeRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XRRuntime RequestValidator");

  switch (message->header()->name) {
    case internal::kXRRuntime_RequestSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRRuntime_RequestSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRRuntime_ListenToDeviceChanges_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRRuntime_ListenToDeviceChanges_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRRuntime_EnsureInitialized_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRRuntime_EnsureInitialized_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRRuntime_SetListeningForActivate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRRuntime_SetListeningForActivate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRRuntime_SetInlinePosesEnabled_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRRuntime_SetInlinePosesEnabled_Params_Data>(
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

bool XRRuntimeResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XRRuntime ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kXRRuntime_RequestSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRRuntime_RequestSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRRuntime_ListenToDeviceChanges_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRRuntime_ListenToDeviceChanges_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kXRRuntime_EnsureInitialized_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRRuntime_EnsureInitialized_ResponseParams_Data>(
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
const char IsolatedXRGamepadProvider::Name_[] = "device.mojom.IsolatedXRGamepadProvider";

class IsolatedXRGamepadProvider_RequestUpdate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  IsolatedXRGamepadProvider_RequestUpdate_ForwardToCallback(
      IsolatedXRGamepadProvider::RequestUpdateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  IsolatedXRGamepadProvider::RequestUpdateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(IsolatedXRGamepadProvider_RequestUpdate_ForwardToCallback);
};

IsolatedXRGamepadProviderProxy::IsolatedXRGamepadProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IsolatedXRGamepadProviderProxy::RequestUpdate(
    RequestUpdateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IsolatedXRGamepadProvider::RequestUpdate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIsolatedXRGamepadProvider_RequestUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::IsolatedXRGamepadProvider_RequestUpdate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IsolatedXRGamepadProvider::Name_);
  message.set_method_name("RequestUpdate");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new IsolatedXRGamepadProvider_RequestUpdate_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class IsolatedXRGamepadProvider_RequestUpdate_ProxyToResponder {
 public:
  static IsolatedXRGamepadProvider::RequestUpdateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<IsolatedXRGamepadProvider_RequestUpdate_ProxyToResponder> proxy(
        new IsolatedXRGamepadProvider_RequestUpdate_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&IsolatedXRGamepadProvider_RequestUpdate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~IsolatedXRGamepadProvider_RequestUpdate_ProxyToResponder() {
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
  IsolatedXRGamepadProvider_RequestUpdate_ProxyToResponder(
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
        << "IsolatedXRGamepadProvider::RequestUpdateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      XRGamepadDataPtr in_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(IsolatedXRGamepadProvider_RequestUpdate_ProxyToResponder);
};

bool IsolatedXRGamepadProvider_RequestUpdate_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::IsolatedXRGamepadProvider::RequestUpdateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  XRGamepadDataPtr p_data{};
  IsolatedXRGamepadProvider_RequestUpdate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        IsolatedXRGamepadProvider::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_data));
  return true;
}

void IsolatedXRGamepadProvider_RequestUpdate_ProxyToResponder::Run(
    XRGamepadDataPtr in_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIsolatedXRGamepadProvider_RequestUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  mojo::internal::Serialize<::device::mojom::XRGamepadDataDataView>(
      in_data, buffer, &data_writer, &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::IsolatedXRGamepadProvider::RequestUpdateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IsolatedXRGamepadProvider::Name_);
  message.set_method_name("RequestUpdate");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool IsolatedXRGamepadProviderStubDispatch::Accept(
    IsolatedXRGamepadProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIsolatedXRGamepadProvider_RequestUpdate_Name: {
      break;
    }
  }
  return false;
}

// static
bool IsolatedXRGamepadProviderStubDispatch::AcceptWithResponder(
    IsolatedXRGamepadProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIsolatedXRGamepadProvider_RequestUpdate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IsolatedXRGamepadProvider::RequestUpdate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::IsolatedXRGamepadProvider_RequestUpdate_Params_Data* params =
          reinterpret_cast<
              internal::IsolatedXRGamepadProvider_RequestUpdate_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IsolatedXRGamepadProvider_RequestUpdate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IsolatedXRGamepadProvider::Name_, 0, false);
        return false;
      }
      IsolatedXRGamepadProvider::RequestUpdateCallback callback =
          IsolatedXRGamepadProvider_RequestUpdate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestUpdate(std::move(callback));
      return true;
    }
  }
  return false;
}

bool IsolatedXRGamepadProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IsolatedXRGamepadProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kIsolatedXRGamepadProvider_RequestUpdate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IsolatedXRGamepadProvider_RequestUpdate_Params_Data>(
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

bool IsolatedXRGamepadProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IsolatedXRGamepadProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kIsolatedXRGamepadProvider_RequestUpdate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data>(
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
const char IsolatedXRGamepadProviderFactory::Name_[] = "device.mojom.IsolatedXRGamepadProviderFactory";

IsolatedXRGamepadProviderFactoryProxy::IsolatedXRGamepadProviderFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IsolatedXRGamepadProviderFactoryProxy::GetIsolatedXRGamepadProvider(
    IsolatedXRGamepadProviderRequest in_provider) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IsolatedXRGamepadProviderFactory::GetIsolatedXRGamepadProvider");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::IsolatedXRGamepadProviderRequestDataView>(
      in_provider, &params->provider, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->provider),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid provider in IsolatedXRGamepadProviderFactory.GetIsolatedXRGamepadProvider request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IsolatedXRGamepadProviderFactory::Name_);
  message.set_method_name("GetIsolatedXRGamepadProvider");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool IsolatedXRGamepadProviderFactoryStubDispatch::Accept(
    IsolatedXRGamepadProviderFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IsolatedXRGamepadProviderFactory::GetIsolatedXRGamepadProvider",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data* params =
          reinterpret_cast<internal::IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IsolatedXRGamepadProviderRequest p_provider{};
      IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_ParamsDataView input_data_view(params, &serialization_context);
      
      p_provider =
          input_data_view.TakeProvider<decltype(p_provider)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IsolatedXRGamepadProviderFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetIsolatedXRGamepadProvider(
std::move(p_provider));
      return true;
    }
  }
  return false;
}

// static
bool IsolatedXRGamepadProviderFactoryStubDispatch::AcceptWithResponder(
    IsolatedXRGamepadProviderFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Name: {
      break;
    }
  }
  return false;
}

bool IsolatedXRGamepadProviderFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IsolatedXRGamepadProviderFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kIsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data>(
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

const char ImmersiveOverlay::Name_[] = "device.mojom.ImmersiveOverlay";

class ImmersiveOverlay_RequestNextOverlayPose_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImmersiveOverlay_RequestNextOverlayPose_ForwardToCallback(
      ImmersiveOverlay::RequestNextOverlayPoseCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImmersiveOverlay::RequestNextOverlayPoseCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ImmersiveOverlay_RequestNextOverlayPose_ForwardToCallback);
};

class ImmersiveOverlay_SubmitOverlayTexture_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImmersiveOverlay_SubmitOverlayTexture_ForwardToCallback(
      ImmersiveOverlay::SubmitOverlayTextureCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImmersiveOverlay::SubmitOverlayTextureCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ImmersiveOverlay_SubmitOverlayTexture_ForwardToCallback);
};

class ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ForwardToCallback(
      ImmersiveOverlay::RequestNotificationOnWebXrSubmittedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImmersiveOverlay::RequestNotificationOnWebXrSubmittedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ForwardToCallback);
};

ImmersiveOverlayProxy::ImmersiveOverlayProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ImmersiveOverlayProxy::RequestNextOverlayPose(
    RequestNextOverlayPoseCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::RequestNextOverlayPose");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImmersiveOverlay_RequestNextOverlayPose_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::ImmersiveOverlay_RequestNextOverlayPose_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImmersiveOverlay::Name_);
  message.set_method_name("RequestNextOverlayPose");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ImmersiveOverlay_RequestNextOverlayPose_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ImmersiveOverlayProxy::SubmitOverlayTexture(
    int16_t in_frame_id, mojo::ScopedHandle in_texture, const ::blink::WebFloatRect& in_left_bounds, const ::blink::WebFloatRect& in_right_bounds, SubmitOverlayTextureCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::SubmitOverlayTexture");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImmersiveOverlay_SubmitOverlayTexture_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::ImmersiveOverlay_SubmitOverlayTexture_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_id = in_frame_id;
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_texture, &params->texture, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->texture),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid texture in ImmersiveOverlay.SubmitOverlayTexture request");
  typename decltype(params->left_bounds)::BaseType::BufferWriter
      left_bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_left_bounds, buffer, &left_bounds_writer, &serialization_context);
  params->left_bounds.Set(
      left_bounds_writer.is_null() ? nullptr : left_bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->left_bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null left_bounds in ImmersiveOverlay.SubmitOverlayTexture request");
  typename decltype(params->right_bounds)::BaseType::BufferWriter
      right_bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_right_bounds, buffer, &right_bounds_writer, &serialization_context);
  params->right_bounds.Set(
      right_bounds_writer.is_null() ? nullptr : right_bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->right_bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null right_bounds in ImmersiveOverlay.SubmitOverlayTexture request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImmersiveOverlay::Name_);
  message.set_method_name("SubmitOverlayTexture");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ImmersiveOverlay_SubmitOverlayTexture_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ImmersiveOverlayProxy::SetOverlayAndWebXRVisibility(
    bool in_overlay_visible, bool in_webxr_visible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::SetOverlayAndWebXRVisibility");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImmersiveOverlay_SetOverlayAndWebXRVisibility_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->overlay_visible = in_overlay_visible;
  params->webxr_visible = in_webxr_visible;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImmersiveOverlay::Name_);
  message.set_method_name("SetOverlayAndWebXRVisibility");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ImmersiveOverlayProxy::RequestNotificationOnWebXrSubmitted(
    RequestNotificationOnWebXrSubmittedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::RequestNotificationOnWebXrSubmitted");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImmersiveOverlay::Name_);
  message.set_method_name("RequestNotificationOnWebXrSubmitted");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ImmersiveOverlay_RequestNextOverlayPose_ProxyToResponder {
 public:
  static ImmersiveOverlay::RequestNextOverlayPoseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ImmersiveOverlay_RequestNextOverlayPose_ProxyToResponder> proxy(
        new ImmersiveOverlay_RequestNextOverlayPose_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ImmersiveOverlay_RequestNextOverlayPose_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ImmersiveOverlay_RequestNextOverlayPose_ProxyToResponder() {
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
  ImmersiveOverlay_RequestNextOverlayPose_ProxyToResponder(
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
        << "ImmersiveOverlay::RequestNextOverlayPoseCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::device::mojom::blink::XRFrameDataPtr in_pose);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ImmersiveOverlay_RequestNextOverlayPose_ProxyToResponder);
};

bool ImmersiveOverlay_RequestNextOverlayPose_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::RequestNextOverlayPoseCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::device::mojom::blink::XRFrameDataPtr p_pose{};
  ImmersiveOverlay_RequestNextOverlayPose_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPose(&p_pose))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ImmersiveOverlay::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_pose));
  return true;
}

void ImmersiveOverlay_RequestNextOverlayPose_ProxyToResponder::Run(
    ::device::mojom::blink::XRFrameDataPtr in_pose) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImmersiveOverlay_RequestNextOverlayPose_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pose)::BaseType::BufferWriter
      pose_writer;
  mojo::internal::Serialize<::device::mojom::XRFrameDataDataView>(
      in_pose, buffer, &pose_writer, &serialization_context);
  params->pose.Set(
      pose_writer.is_null() ? nullptr : pose_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pose.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pose in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::RequestNextOverlayPoseCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImmersiveOverlay::Name_);
  message.set_method_name("RequestNextOverlayPose");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ImmersiveOverlay_SubmitOverlayTexture_ProxyToResponder {
 public:
  static ImmersiveOverlay::SubmitOverlayTextureCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ImmersiveOverlay_SubmitOverlayTexture_ProxyToResponder> proxy(
        new ImmersiveOverlay_SubmitOverlayTexture_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ImmersiveOverlay_SubmitOverlayTexture_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ImmersiveOverlay_SubmitOverlayTexture_ProxyToResponder() {
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
  ImmersiveOverlay_SubmitOverlayTexture_ProxyToResponder(
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
        << "ImmersiveOverlay::SubmitOverlayTextureCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ImmersiveOverlay_SubmitOverlayTexture_ProxyToResponder);
};

bool ImmersiveOverlay_SubmitOverlayTexture_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::SubmitOverlayTextureCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  ImmersiveOverlay_SubmitOverlayTexture_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ImmersiveOverlay::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void ImmersiveOverlay_SubmitOverlayTexture_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImmersiveOverlay_SubmitOverlayTexture_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::SubmitOverlayTextureCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImmersiveOverlay::Name_);
  message.set_method_name("SubmitOverlayTexture");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ProxyToResponder {
 public:
  static ImmersiveOverlay::RequestNotificationOnWebXrSubmittedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ProxyToResponder> proxy(
        new ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ProxyToResponder() {
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
  ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ProxyToResponder(
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
        << "ImmersiveOverlay::RequestNotificationOnWebXrSubmittedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ProxyToResponder);
};

bool ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::RequestNotificationOnWebXrSubmittedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ImmersiveOverlay::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::RequestNotificationOnWebXrSubmittedCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImmersiveOverlay::Name_);
  message.set_method_name("RequestNotificationOnWebXrSubmitted");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ImmersiveOverlayStubDispatch::Accept(
    ImmersiveOverlay* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kImmersiveOverlay_RequestNextOverlayPose_Name: {
      break;
    }
    case internal::kImmersiveOverlay_SubmitOverlayTexture_Name: {
      break;
    }
    case internal::kImmersiveOverlay_SetOverlayAndWebXRVisibility_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::SetOverlayAndWebXRVisibility",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data* params =
          reinterpret_cast<internal::ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_overlay_visible{};
      bool p_webxr_visible{};
      ImmersiveOverlay_SetOverlayAndWebXRVisibility_ParamsDataView input_data_view(params, &serialization_context);
      
      p_overlay_visible = input_data_view.overlay_visible();
      p_webxr_visible = input_data_view.webxr_visible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImmersiveOverlay::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetOverlayAndWebXRVisibility(
std::move(p_overlay_visible), 
std::move(p_webxr_visible));
      return true;
    }
    case internal::kImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Name: {
      break;
    }
  }
  return false;
}

// static
bool ImmersiveOverlayStubDispatch::AcceptWithResponder(
    ImmersiveOverlay* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kImmersiveOverlay_RequestNextOverlayPose_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::RequestNextOverlayPose",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ImmersiveOverlay_RequestNextOverlayPose_Params_Data* params =
          reinterpret_cast<
              internal::ImmersiveOverlay_RequestNextOverlayPose_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ImmersiveOverlay_RequestNextOverlayPose_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImmersiveOverlay::Name_, 0, false);
        return false;
      }
      ImmersiveOverlay::RequestNextOverlayPoseCallback callback =
          ImmersiveOverlay_RequestNextOverlayPose_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestNextOverlayPose(std::move(callback));
      return true;
    }
    case internal::kImmersiveOverlay_SubmitOverlayTexture_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::SubmitOverlayTexture",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ImmersiveOverlay_SubmitOverlayTexture_Params_Data* params =
          reinterpret_cast<
              internal::ImmersiveOverlay_SubmitOverlayTexture_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int16_t p_frame_id{};
      mojo::ScopedHandle p_texture{};
      ::blink::WebFloatRect p_left_bounds{};
      ::blink::WebFloatRect p_right_bounds{};
      ImmersiveOverlay_SubmitOverlayTexture_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_id = input_data_view.frame_id();
      p_texture = input_data_view.TakeTexture();
      if (!input_data_view.ReadLeftBounds(&p_left_bounds))
        success = false;
      if (!input_data_view.ReadRightBounds(&p_right_bounds))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImmersiveOverlay::Name_, 1, false);
        return false;
      }
      ImmersiveOverlay::SubmitOverlayTextureCallback callback =
          ImmersiveOverlay_SubmitOverlayTexture_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SubmitOverlayTexture(
std::move(p_frame_id), 
std::move(p_texture), 
std::move(p_left_bounds), 
std::move(p_right_bounds), std::move(callback));
      return true;
    }
    case internal::kImmersiveOverlay_SetOverlayAndWebXRVisibility_Name: {
      break;
    }
    case internal::kImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImmersiveOverlay::RequestNotificationOnWebXrSubmitted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data* params =
          reinterpret_cast<
              internal::ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImmersiveOverlay::Name_, 3, false);
        return false;
      }
      ImmersiveOverlay::RequestNotificationOnWebXrSubmittedCallback callback =
          ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestNotificationOnWebXrSubmitted(std::move(callback));
      return true;
    }
  }
  return false;
}

bool ImmersiveOverlayRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImmersiveOverlay RequestValidator");

  switch (message->header()->name) {
    case internal::kImmersiveOverlay_RequestNextOverlayPose_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImmersiveOverlay_RequestNextOverlayPose_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImmersiveOverlay_SubmitOverlayTexture_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImmersiveOverlay_SubmitOverlayTexture_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImmersiveOverlay_SetOverlayAndWebXRVisibility_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data>(
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

bool ImmersiveOverlayResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImmersiveOverlay ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kImmersiveOverlay_RequestNextOverlayPose_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImmersiveOverlay_SubmitOverlayTexture_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data>(
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
const char XRCompositorHost::Name_[] = "device.mojom.XRCompositorHost";

XRCompositorHostProxy::XRCompositorHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void XRCompositorHostProxy::CreateImmersiveOverlay(
    ImmersiveOverlayRequest in_overlay) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::XRCompositorHost::CreateImmersiveOverlay");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXRCompositorHost_CreateImmersiveOverlay_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::XRCompositorHost_CreateImmersiveOverlay_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::ImmersiveOverlayRequestDataView>(
      in_overlay, &params->overlay, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->overlay),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid overlay in XRCompositorHost.CreateImmersiveOverlay request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XRCompositorHost::Name_);
  message.set_method_name("CreateImmersiveOverlay");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool XRCompositorHostStubDispatch::Accept(
    XRCompositorHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kXRCompositorHost_CreateImmersiveOverlay_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::XRCompositorHost::CreateImmersiveOverlay",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::XRCompositorHost_CreateImmersiveOverlay_Params_Data* params =
          reinterpret_cast<internal::XRCompositorHost_CreateImmersiveOverlay_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ImmersiveOverlayRequest p_overlay{};
      XRCompositorHost_CreateImmersiveOverlay_ParamsDataView input_data_view(params, &serialization_context);
      
      p_overlay =
          input_data_view.TakeOverlay<decltype(p_overlay)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XRCompositorHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateImmersiveOverlay(
std::move(p_overlay));
      return true;
    }
  }
  return false;
}

// static
bool XRCompositorHostStubDispatch::AcceptWithResponder(
    XRCompositorHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kXRCompositorHost_CreateImmersiveOverlay_Name: {
      break;
    }
  }
  return false;
}

bool XRCompositorHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XRCompositorHost RequestValidator");

  switch (message->header()->name) {
    case internal::kXRCompositorHost_CreateImmersiveOverlay_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XRCompositorHost_CreateImmersiveOverlay_Params_Data>(
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

const char IsolatedXRRuntimeProviderClient::Name_[] = "device.mojom.IsolatedXRRuntimeProviderClient";

IsolatedXRRuntimeProviderClientProxy::IsolatedXRRuntimeProviderClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IsolatedXRRuntimeProviderClientProxy::OnDeviceAdded(
    XRRuntimePtr in_runtime, IsolatedXRGamepadProviderFactoryPtr in_gamepad_factory, XRCompositorHostPtr in_compositor_host, ::device::mojom::blink::XRDeviceId in_device_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IsolatedXRRuntimeProviderClient::OnDeviceAdded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIsolatedXRRuntimeProviderClient_OnDeviceAdded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::XRRuntimePtrDataView>(
      in_runtime, &params->runtime, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->runtime),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid runtime in IsolatedXRRuntimeProviderClient.OnDeviceAdded request");
  mojo::internal::Serialize<::device::mojom::IsolatedXRGamepadProviderFactoryPtrDataView>(
      in_gamepad_factory, &params->gamepad_factory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->gamepad_factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid gamepad_factory in IsolatedXRRuntimeProviderClient.OnDeviceAdded request");
  mojo::internal::Serialize<::device::mojom::XRCompositorHostPtrDataView>(
      in_compositor_host, &params->compositor_host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->compositor_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid compositor_host in IsolatedXRRuntimeProviderClient.OnDeviceAdded request");
  mojo::internal::Serialize<::device::mojom::XRDeviceId>(
      in_device_id, &params->device_id);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IsolatedXRRuntimeProviderClient::Name_);
  message.set_method_name("OnDeviceAdded");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IsolatedXRRuntimeProviderClientProxy::OnDeviceRemoved(
    ::device::mojom::blink::XRDeviceId in_device_index) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IsolatedXRRuntimeProviderClient::OnDeviceRemoved");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIsolatedXRRuntimeProviderClient_OnDeviceRemoved_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::XRDeviceId>(
      in_device_index, &params->device_index);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IsolatedXRRuntimeProviderClient::Name_);
  message.set_method_name("OnDeviceRemoved");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IsolatedXRRuntimeProviderClientProxy::OnDevicesEnumerated(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IsolatedXRRuntimeProviderClient::OnDevicesEnumerated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IsolatedXRRuntimeProviderClient::Name_);
  message.set_method_name("OnDevicesEnumerated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool IsolatedXRRuntimeProviderClientStubDispatch::Accept(
    IsolatedXRRuntimeProviderClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIsolatedXRRuntimeProviderClient_OnDeviceAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IsolatedXRRuntimeProviderClient::OnDeviceAdded",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data* params =
          reinterpret_cast<internal::IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      XRRuntimePtr p_runtime{};
      IsolatedXRGamepadProviderFactoryPtr p_gamepad_factory{};
      XRCompositorHostPtr p_compositor_host{};
      ::device::mojom::blink::XRDeviceId p_device_id{};
      IsolatedXRRuntimeProviderClient_OnDeviceAdded_ParamsDataView input_data_view(params, &serialization_context);
      
      p_runtime =
          input_data_view.TakeRuntime<decltype(p_runtime)>();
      p_gamepad_factory =
          input_data_view.TakeGamepadFactory<decltype(p_gamepad_factory)>();
      p_compositor_host =
          input_data_view.TakeCompositorHost<decltype(p_compositor_host)>();
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IsolatedXRRuntimeProviderClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDeviceAdded(
std::move(p_runtime), 
std::move(p_gamepad_factory), 
std::move(p_compositor_host), 
std::move(p_device_id));
      return true;
    }
    case internal::kIsolatedXRRuntimeProviderClient_OnDeviceRemoved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IsolatedXRRuntimeProviderClient::OnDeviceRemoved",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data* params =
          reinterpret_cast<internal::IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::blink::XRDeviceId p_device_index{};
      IsolatedXRRuntimeProviderClient_OnDeviceRemoved_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceIndex(&p_device_index))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IsolatedXRRuntimeProviderClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDeviceRemoved(
std::move(p_device_index));
      return true;
    }
    case internal::kIsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IsolatedXRRuntimeProviderClient::OnDevicesEnumerated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data* params =
          reinterpret_cast<internal::IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IsolatedXRRuntimeProviderClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDevicesEnumerated();
      return true;
    }
  }
  return false;
}

// static
bool IsolatedXRRuntimeProviderClientStubDispatch::AcceptWithResponder(
    IsolatedXRRuntimeProviderClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIsolatedXRRuntimeProviderClient_OnDeviceAdded_Name: {
      break;
    }
    case internal::kIsolatedXRRuntimeProviderClient_OnDeviceRemoved_Name: {
      break;
    }
    case internal::kIsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Name: {
      break;
    }
  }
  return false;
}

bool IsolatedXRRuntimeProviderClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IsolatedXRRuntimeProviderClient RequestValidator");

  switch (message->header()->name) {
    case internal::kIsolatedXRRuntimeProviderClient_OnDeviceAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIsolatedXRRuntimeProviderClient_OnDeviceRemoved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data>(
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

const char IsolatedXRRuntimeProvider::Name_[] = "device.mojom.IsolatedXRRuntimeProvider";

IsolatedXRRuntimeProviderProxy::IsolatedXRRuntimeProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IsolatedXRRuntimeProviderProxy::RequestDevices(
    IsolatedXRRuntimeProviderClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IsolatedXRRuntimeProvider::RequestDevices");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIsolatedXRRuntimeProvider_RequestDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::IsolatedXRRuntimeProvider_RequestDevices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::IsolatedXRRuntimeProviderClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in IsolatedXRRuntimeProvider.RequestDevices request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IsolatedXRRuntimeProvider::Name_);
  message.set_method_name("RequestDevices");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool IsolatedXRRuntimeProviderStubDispatch::Accept(
    IsolatedXRRuntimeProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIsolatedXRRuntimeProvider_RequestDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IsolatedXRRuntimeProvider::RequestDevices",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IsolatedXRRuntimeProvider_RequestDevices_Params_Data* params =
          reinterpret_cast<internal::IsolatedXRRuntimeProvider_RequestDevices_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IsolatedXRRuntimeProviderClientPtr p_client{};
      IsolatedXRRuntimeProvider_RequestDevices_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IsolatedXRRuntimeProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestDevices(
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool IsolatedXRRuntimeProviderStubDispatch::AcceptWithResponder(
    IsolatedXRRuntimeProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIsolatedXRRuntimeProvider_RequestDevices_Name: {
      break;
    }
  }
  return false;
}

bool IsolatedXRRuntimeProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IsolatedXRRuntimeProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kIsolatedXRRuntimeProvider_RequestDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IsolatedXRRuntimeProvider_RequestDevices_Params_Data>(
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
bool StructTraits<::device::mojom::blink::XRRuntimeSessionOptions::DataView, ::device::mojom::blink::XRRuntimeSessionOptionsPtr>::Read(
    ::device::mojom::blink::XRRuntimeSessionOptions::DataView input,
    ::device::mojom::blink::XRRuntimeSessionOptionsPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRRuntimeSessionOptionsPtr result(::device::mojom::blink::XRRuntimeSessionOptions::New());
  
      result->immersive = input.immersive();
      result->environment_integration = input.environment_integration();
      result->render_process_id = input.render_process_id();
      result->render_frame_id = input.render_frame_id();
      result->use_legacy_webvr_render_path = input.use_legacy_webvr_render_path();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRGamepadButton::DataView, ::device::mojom::blink::XRGamepadButtonPtr>::Read(
    ::device::mojom::blink::XRGamepadButton::DataView input,
    ::device::mojom::blink::XRGamepadButtonPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRGamepadButtonPtr result(::device::mojom::blink::XRGamepadButton::New());
  
      result->pressed = input.pressed();
      result->touched = input.touched();
      result->value = input.value();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRGamepad::DataView, ::device::mojom::blink::XRGamepadPtr>::Read(
    ::device::mojom::blink::XRGamepad::DataView input,
    ::device::mojom::blink::XRGamepadPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRGamepadPtr result(::device::mojom::blink::XRGamepad::New());
  
      result->can_provide_orientation = input.can_provide_orientation();
      result->can_provide_position = input.can_provide_position();
      if (!input.ReadAxes(&result->axes))
        success = false;
      if (!input.ReadButtons(&result->buttons))
        success = false;
      if (!input.ReadPose(&result->pose))
        success = false;
      if (!input.ReadHand(&result->hand))
        success = false;
      result->controller_id = input.controller_id();
      if (!input.ReadTimestamp(&result->timestamp))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::XRGamepadData::DataView, ::device::mojom::blink::XRGamepadDataPtr>::Read(
    ::device::mojom::blink::XRGamepadData::DataView input,
    ::device::mojom::blink::XRGamepadDataPtr* output) {
  bool success = true;
  ::device::mojom::blink::XRGamepadDataPtr result(::device::mojom::blink::XRGamepadData::New());
  
      if (!input.ReadGamepads(&result->gamepads))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif