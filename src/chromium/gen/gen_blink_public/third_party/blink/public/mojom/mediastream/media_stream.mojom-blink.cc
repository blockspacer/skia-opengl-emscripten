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

#include "third_party/blink/public/mojom/mediastream/media_stream.mojom-blink.h"

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

#include "third_party/blink/public/mojom/mediastream/media_stream.mojom-params-data.h"
#include "third_party/blink/public/mojom/mediastream/media_stream.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/mediastream/media_stream.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
MediaStreamDevice::MediaStreamDevice()
    : type(),
      id(),
      video_facing(),
      group_id(),
      matched_output_device_id(),
      name(),
      input(),
      session_id(),
      display_media_info() {}

MediaStreamDevice::MediaStreamDevice(
    MediaStreamType type_in,
    const WTF::String& id_in,
    ::media::mojom::blink::VideoFacingMode video_facing_in,
    const WTF::String& group_id_in,
    const WTF::String& matched_output_device_id_in,
    const WTF::String& name_in,
    ::media::mojom::blink::AudioParametersPtr input_in,
    int32_t session_id_in,
    ::media::mojom::blink::DisplayMediaInformationPtr display_media_info_in)
    : type(std::move(type_in)),
      id(std::move(id_in)),
      video_facing(std::move(video_facing_in)),
      group_id(std::move(group_id_in)),
      matched_output_device_id(std::move(matched_output_device_id_in)),
      name(std::move(name_in)),
      input(std::move(input_in)),
      session_id(std::move(session_id_in)),
      display_media_info(std::move(display_media_info_in)) {}

MediaStreamDevice::~MediaStreamDevice() = default;

bool MediaStreamDevice::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TrackControls::TrackControls()
    : requested(),
      stream_type(),
      device_id() {}

TrackControls::TrackControls(
    bool requested_in,
    MediaStreamType stream_type_in,
    const WTF::String& device_id_in)
    : requested(std::move(requested_in)),
      stream_type(std::move(stream_type_in)),
      device_id(std::move(device_id_in)) {}

TrackControls::~TrackControls() = default;
size_t TrackControls::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->requested);
  seed = mojo::internal::WTFHash(seed, this->stream_type);
  seed = mojo::internal::WTFHash(seed, this->device_id);
  return seed;
}

bool TrackControls::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
StreamControls::StreamControls()
    : audio(),
      video(),
      hotword_enabled(),
      disable_local_echo() {}

StreamControls::StreamControls(
    TrackControlsPtr audio_in,
    TrackControlsPtr video_in,
    bool hotword_enabled_in,
    bool disable_local_echo_in)
    : audio(std::move(audio_in)),
      video(std::move(video_in)),
      hotword_enabled(std::move(hotword_enabled_in)),
      disable_local_echo(std::move(disable_local_echo_in)) {}

StreamControls::~StreamControls() = default;
size_t StreamControls::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->audio);
  seed = mojo::internal::WTFHash(seed, this->video);
  seed = mojo::internal::WTFHash(seed, this->hotword_enabled);
  seed = mojo::internal::WTFHash(seed, this->disable_local_echo);
  return seed;
}

bool StreamControls::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char MediaStreamDeviceObserver::Name_[] = "blink.mojom.MediaStreamDeviceObserver";

MediaStreamDeviceObserverProxy::MediaStreamDeviceObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaStreamDeviceObserverProxy::OnDeviceStopped(
    const WTF::String& in_label, MediaStreamDevicePtr in_device) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaStreamDeviceObserver::OnDeviceStopped");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStreamDeviceObserver_OnDeviceStopped_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaStreamDeviceObserver_OnDeviceStopped_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->label)::BaseType::BufferWriter
      label_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_label, buffer, &label_writer, &serialization_context);
  params->label.Set(
      label_writer.is_null() ? nullptr : label_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->label.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null label in MediaStreamDeviceObserver.OnDeviceStopped request");
  typename decltype(params->device)::BaseType::BufferWriter
      device_writer;
  mojo::internal::Serialize<::blink::mojom::MediaStreamDeviceDataView>(
      in_device, buffer, &device_writer, &serialization_context);
  params->device.Set(
      device_writer.is_null() ? nullptr : device_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device in MediaStreamDeviceObserver.OnDeviceStopped request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaStreamDeviceObserver::Name_);
  message.set_method_name("OnDeviceStopped");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaStreamDeviceObserverProxy::OnDeviceChanged(
    const WTF::String& in_label, MediaStreamDevicePtr in_old_device, MediaStreamDevicePtr in_new_device) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaStreamDeviceObserver::OnDeviceChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStreamDeviceObserver_OnDeviceChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaStreamDeviceObserver_OnDeviceChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->label)::BaseType::BufferWriter
      label_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_label, buffer, &label_writer, &serialization_context);
  params->label.Set(
      label_writer.is_null() ? nullptr : label_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->label.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null label in MediaStreamDeviceObserver.OnDeviceChanged request");
  typename decltype(params->old_device)::BaseType::BufferWriter
      old_device_writer;
  mojo::internal::Serialize<::blink::mojom::MediaStreamDeviceDataView>(
      in_old_device, buffer, &old_device_writer, &serialization_context);
  params->old_device.Set(
      old_device_writer.is_null() ? nullptr : old_device_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->old_device.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null old_device in MediaStreamDeviceObserver.OnDeviceChanged request");
  typename decltype(params->new_device)::BaseType::BufferWriter
      new_device_writer;
  mojo::internal::Serialize<::blink::mojom::MediaStreamDeviceDataView>(
      in_new_device, buffer, &new_device_writer, &serialization_context);
  params->new_device.Set(
      new_device_writer.is_null() ? nullptr : new_device_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_device.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_device in MediaStreamDeviceObserver.OnDeviceChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaStreamDeviceObserver::Name_);
  message.set_method_name("OnDeviceChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaStreamDeviceObserverStubDispatch::Accept(
    MediaStreamDeviceObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaStreamDeviceObserver_OnDeviceStopped_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaStreamDeviceObserver::OnDeviceStopped",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaStreamDeviceObserver_OnDeviceStopped_Params_Data* params =
          reinterpret_cast<internal::MediaStreamDeviceObserver_OnDeviceStopped_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_label{};
      MediaStreamDevicePtr p_device{};
      MediaStreamDeviceObserver_OnDeviceStopped_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLabel(&p_label))
        success = false;
      if (!input_data_view.ReadDevice(&p_device))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaStreamDeviceObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDeviceStopped(
std::move(p_label), 
std::move(p_device));
      return true;
    }
    case internal::kMediaStreamDeviceObserver_OnDeviceChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaStreamDeviceObserver::OnDeviceChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaStreamDeviceObserver_OnDeviceChanged_Params_Data* params =
          reinterpret_cast<internal::MediaStreamDeviceObserver_OnDeviceChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_label{};
      MediaStreamDevicePtr p_old_device{};
      MediaStreamDevicePtr p_new_device{};
      MediaStreamDeviceObserver_OnDeviceChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLabel(&p_label))
        success = false;
      if (!input_data_view.ReadOldDevice(&p_old_device))
        success = false;
      if (!input_data_view.ReadNewDevice(&p_new_device))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaStreamDeviceObserver::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDeviceChanged(
std::move(p_label), 
std::move(p_old_device), 
std::move(p_new_device));
      return true;
    }
  }
  return false;
}

// static
bool MediaStreamDeviceObserverStubDispatch::AcceptWithResponder(
    MediaStreamDeviceObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaStreamDeviceObserver_OnDeviceStopped_Name: {
      break;
    }
    case internal::kMediaStreamDeviceObserver_OnDeviceChanged_Name: {
      break;
    }
  }
  return false;
}

bool MediaStreamDeviceObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaStreamDeviceObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaStreamDeviceObserver_OnDeviceStopped_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStreamDeviceObserver_OnDeviceStopped_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaStreamDeviceObserver_OnDeviceChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStreamDeviceObserver_OnDeviceChanged_Params_Data>(
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

const char MediaStreamDispatcherHost::Name_[] = "blink.mojom.MediaStreamDispatcherHost";

class MediaStreamDispatcherHost_GenerateStream_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaStreamDispatcherHost_GenerateStream_ForwardToCallback(
      MediaStreamDispatcherHost::GenerateStreamCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaStreamDispatcherHost::GenerateStreamCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaStreamDispatcherHost_GenerateStream_ForwardToCallback);
};

class MediaStreamDispatcherHost_OpenDevice_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaStreamDispatcherHost_OpenDevice_ForwardToCallback(
      MediaStreamDispatcherHost::OpenDeviceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaStreamDispatcherHost::OpenDeviceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaStreamDispatcherHost_OpenDevice_ForwardToCallback);
};

MediaStreamDispatcherHostProxy::MediaStreamDispatcherHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaStreamDispatcherHostProxy::GenerateStream(
    int32_t in_request_id, StreamControlsPtr in_controls, bool in_user_gesture, GenerateStreamCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::GenerateStream");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStreamDispatcherHost_GenerateStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaStreamDispatcherHost_GenerateStream_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->request_id = in_request_id;
  typename decltype(params->controls)::BaseType::BufferWriter
      controls_writer;
  mojo::internal::Serialize<::blink::mojom::StreamControlsDataView>(
      in_controls, buffer, &controls_writer, &serialization_context);
  params->controls.Set(
      controls_writer.is_null() ? nullptr : controls_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->controls.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null controls in MediaStreamDispatcherHost.GenerateStream request");
  params->user_gesture = in_user_gesture;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaStreamDispatcherHost::Name_);
  message.set_method_name("GenerateStream");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaStreamDispatcherHost_GenerateStream_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaStreamDispatcherHostProxy::CancelRequest(
    int32_t in_request_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::CancelRequest");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStreamDispatcherHost_CancelRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaStreamDispatcherHost_CancelRequest_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->request_id = in_request_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaStreamDispatcherHost::Name_);
  message.set_method_name("CancelRequest");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaStreamDispatcherHostProxy::StopStreamDevice(
    const WTF::String& in_device_id, int32_t in_session_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::StopStreamDevice");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStreamDispatcherHost_StopStreamDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaStreamDispatcherHost_StopStreamDevice_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->device_id)::BaseType::BufferWriter
      device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_device_id, buffer, &device_id_writer, &serialization_context);
  params->device_id.Set(
      device_id_writer.is_null() ? nullptr : device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_id in MediaStreamDispatcherHost.StopStreamDevice request");
  params->session_id = in_session_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaStreamDispatcherHost::Name_);
  message.set_method_name("StopStreamDevice");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaStreamDispatcherHostProxy::OpenDevice(
    int32_t in_request_id, const WTF::String& in_device_id, MediaStreamType in_type, OpenDeviceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::OpenDevice");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStreamDispatcherHost_OpenDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaStreamDispatcherHost_OpenDevice_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->request_id = in_request_id;
  typename decltype(params->device_id)::BaseType::BufferWriter
      device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_device_id, buffer, &device_id_writer, &serialization_context);
  params->device_id.Set(
      device_id_writer.is_null() ? nullptr : device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_id in MediaStreamDispatcherHost.OpenDevice request");
  mojo::internal::Serialize<::blink::mojom::MediaStreamType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaStreamDispatcherHost::Name_);
  message.set_method_name("OpenDevice");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaStreamDispatcherHost_OpenDevice_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaStreamDispatcherHostProxy::CloseDevice(
    const WTF::String& in_label) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::CloseDevice");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStreamDispatcherHost_CloseDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaStreamDispatcherHost_CloseDevice_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->label)::BaseType::BufferWriter
      label_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_label, buffer, &label_writer, &serialization_context);
  params->label.Set(
      label_writer.is_null() ? nullptr : label_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->label.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null label in MediaStreamDispatcherHost.CloseDevice request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaStreamDispatcherHost::Name_);
  message.set_method_name("CloseDevice");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaStreamDispatcherHostProxy::SetCapturingLinkSecured(
    int32_t in_session_id, MediaStreamType in_type, bool in_is_secure) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::SetCapturingLinkSecured");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStreamDispatcherHost_SetCapturingLinkSecured_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->session_id = in_session_id;
  mojo::internal::Serialize<::blink::mojom::MediaStreamType>(
      in_type, &params->type);
  params->is_secure = in_is_secure;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaStreamDispatcherHost::Name_);
  message.set_method_name("SetCapturingLinkSecured");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaStreamDispatcherHostProxy::OnStreamStarted(
    const WTF::String& in_label) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::OnStreamStarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStreamDispatcherHost_OnStreamStarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaStreamDispatcherHost_OnStreamStarted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->label)::BaseType::BufferWriter
      label_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_label, buffer, &label_writer, &serialization_context);
  params->label.Set(
      label_writer.is_null() ? nullptr : label_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->label.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null label in MediaStreamDispatcherHost.OnStreamStarted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaStreamDispatcherHost::Name_);
  message.set_method_name("OnStreamStarted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class MediaStreamDispatcherHost_GenerateStream_ProxyToResponder {
 public:
  static MediaStreamDispatcherHost::GenerateStreamCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaStreamDispatcherHost_GenerateStream_ProxyToResponder> proxy(
        new MediaStreamDispatcherHost_GenerateStream_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaStreamDispatcherHost_GenerateStream_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaStreamDispatcherHost_GenerateStream_ProxyToResponder() {
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
  MediaStreamDispatcherHost_GenerateStream_ProxyToResponder(
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
        << "MediaStreamDispatcherHost::GenerateStreamCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      MediaStreamRequestResult in_result, const WTF::String& in_label, WTF::Vector<MediaStreamDevicePtr> in_audio_devices, WTF::Vector<MediaStreamDevicePtr> in_video_devices);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaStreamDispatcherHost_GenerateStream_ProxyToResponder);
};

bool MediaStreamDispatcherHost_GenerateStream_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::GenerateStreamCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  MediaStreamRequestResult p_result{};
  WTF::String p_label{};
  WTF::Vector<MediaStreamDevicePtr> p_audio_devices{};
  WTF::Vector<MediaStreamDevicePtr> p_video_devices{};
  MediaStreamDispatcherHost_GenerateStream_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadLabel(&p_label))
    success = false;
  if (!input_data_view.ReadAudioDevices(&p_audio_devices))
    success = false;
  if (!input_data_view.ReadVideoDevices(&p_video_devices))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MediaStreamDispatcherHost::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_label), 
std::move(p_audio_devices), 
std::move(p_video_devices));
  return true;
}

void MediaStreamDispatcherHost_GenerateStream_ProxyToResponder::Run(
    MediaStreamRequestResult in_result, const WTF::String& in_label, WTF::Vector<MediaStreamDevicePtr> in_audio_devices, WTF::Vector<MediaStreamDevicePtr> in_video_devices) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStreamDispatcherHost_GenerateStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::MediaStreamRequestResult>(
      in_result, &params->result);
  typename decltype(params->label)::BaseType::BufferWriter
      label_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_label, buffer, &label_writer, &serialization_context);
  params->label.Set(
      label_writer.is_null() ? nullptr : label_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->label.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null label in ");
  typename decltype(params->audio_devices)::BaseType::BufferWriter
      audio_devices_writer;
  const mojo::internal::ContainerValidateParams audio_devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::MediaStreamDeviceDataView>>(
      in_audio_devices, buffer, &audio_devices_writer, &audio_devices_validate_params,
      &serialization_context);
  params->audio_devices.Set(
      audio_devices_writer.is_null() ? nullptr : audio_devices_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->audio_devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null audio_devices in ");
  typename decltype(params->video_devices)::BaseType::BufferWriter
      video_devices_writer;
  const mojo::internal::ContainerValidateParams video_devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::MediaStreamDeviceDataView>>(
      in_video_devices, buffer, &video_devices_writer, &video_devices_validate_params,
      &serialization_context);
  params->video_devices.Set(
      video_devices_writer.is_null() ? nullptr : video_devices_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->video_devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null video_devices in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::GenerateStreamCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaStreamDispatcherHost::Name_);
  message.set_method_name("GenerateStream");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaStreamDispatcherHost_OpenDevice_ProxyToResponder {
 public:
  static MediaStreamDispatcherHost::OpenDeviceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaStreamDispatcherHost_OpenDevice_ProxyToResponder> proxy(
        new MediaStreamDispatcherHost_OpenDevice_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaStreamDispatcherHost_OpenDevice_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaStreamDispatcherHost_OpenDevice_ProxyToResponder() {
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
  MediaStreamDispatcherHost_OpenDevice_ProxyToResponder(
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
        << "MediaStreamDispatcherHost::OpenDeviceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, const WTF::String& in_label, MediaStreamDevicePtr in_device);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaStreamDispatcherHost_OpenDevice_ProxyToResponder);
};

bool MediaStreamDispatcherHost_OpenDevice_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::OpenDeviceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WTF::String p_label{};
  MediaStreamDevicePtr p_device{};
  MediaStreamDispatcherHost_OpenDevice_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadLabel(&p_label))
    success = false;
  if (!input_data_view.ReadDevice(&p_device))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MediaStreamDispatcherHost::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_label), 
std::move(p_device));
  return true;
}

void MediaStreamDispatcherHost_OpenDevice_ProxyToResponder::Run(
    bool in_success, const WTF::String& in_label, MediaStreamDevicePtr in_device) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStreamDispatcherHost_OpenDevice_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->label)::BaseType::BufferWriter
      label_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_label, buffer, &label_writer, &serialization_context);
  params->label.Set(
      label_writer.is_null() ? nullptr : label_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->label.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null label in ");
  typename decltype(params->device)::BaseType::BufferWriter
      device_writer;
  mojo::internal::Serialize<::blink::mojom::MediaStreamDeviceDataView>(
      in_device, buffer, &device_writer, &serialization_context);
  params->device.Set(
      device_writer.is_null() ? nullptr : device_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::OpenDeviceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaStreamDispatcherHost::Name_);
  message.set_method_name("OpenDevice");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool MediaStreamDispatcherHostStubDispatch::Accept(
    MediaStreamDispatcherHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaStreamDispatcherHost_GenerateStream_Name: {
      break;
    }
    case internal::kMediaStreamDispatcherHost_CancelRequest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::CancelRequest",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaStreamDispatcherHost_CancelRequest_Params_Data* params =
          reinterpret_cast<internal::MediaStreamDispatcherHost_CancelRequest_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_request_id{};
      MediaStreamDispatcherHost_CancelRequest_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request_id = input_data_view.request_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaStreamDispatcherHost::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelRequest(
std::move(p_request_id));
      return true;
    }
    case internal::kMediaStreamDispatcherHost_StopStreamDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::StopStreamDevice",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaStreamDispatcherHost_StopStreamDevice_Params_Data* params =
          reinterpret_cast<internal::MediaStreamDispatcherHost_StopStreamDevice_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_device_id{};
      int32_t p_session_id{};
      MediaStreamDispatcherHost_StopStreamDevice_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      p_session_id = input_data_view.session_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaStreamDispatcherHost::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopStreamDevice(
std::move(p_device_id), 
std::move(p_session_id));
      return true;
    }
    case internal::kMediaStreamDispatcherHost_OpenDevice_Name: {
      break;
    }
    case internal::kMediaStreamDispatcherHost_CloseDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::CloseDevice",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaStreamDispatcherHost_CloseDevice_Params_Data* params =
          reinterpret_cast<internal::MediaStreamDispatcherHost_CloseDevice_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_label{};
      MediaStreamDispatcherHost_CloseDevice_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLabel(&p_label))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaStreamDispatcherHost::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CloseDevice(
std::move(p_label));
      return true;
    }
    case internal::kMediaStreamDispatcherHost_SetCapturingLinkSecured_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::SetCapturingLinkSecured",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data* params =
          reinterpret_cast<internal::MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_session_id{};
      MediaStreamType p_type{};
      bool p_is_secure{};
      MediaStreamDispatcherHost_SetCapturingLinkSecured_ParamsDataView input_data_view(params, &serialization_context);
      
      p_session_id = input_data_view.session_id();
      if (!input_data_view.ReadType(&p_type))
        success = false;
      p_is_secure = input_data_view.is_secure();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaStreamDispatcherHost::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetCapturingLinkSecured(
std::move(p_session_id), 
std::move(p_type), 
std::move(p_is_secure));
      return true;
    }
    case internal::kMediaStreamDispatcherHost_OnStreamStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::OnStreamStarted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaStreamDispatcherHost_OnStreamStarted_Params_Data* params =
          reinterpret_cast<internal::MediaStreamDispatcherHost_OnStreamStarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_label{};
      MediaStreamDispatcherHost_OnStreamStarted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLabel(&p_label))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaStreamDispatcherHost::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnStreamStarted(
std::move(p_label));
      return true;
    }
  }
  return false;
}

// static
bool MediaStreamDispatcherHostStubDispatch::AcceptWithResponder(
    MediaStreamDispatcherHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaStreamDispatcherHost_GenerateStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::GenerateStream",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaStreamDispatcherHost_GenerateStream_Params_Data* params =
          reinterpret_cast<
              internal::MediaStreamDispatcherHost_GenerateStream_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_request_id{};
      StreamControlsPtr p_controls{};
      bool p_user_gesture{};
      MediaStreamDispatcherHost_GenerateStream_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request_id = input_data_view.request_id();
      if (!input_data_view.ReadControls(&p_controls))
        success = false;
      p_user_gesture = input_data_view.user_gesture();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaStreamDispatcherHost::Name_, 0, false);
        return false;
      }
      MediaStreamDispatcherHost::GenerateStreamCallback callback =
          MediaStreamDispatcherHost_GenerateStream_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GenerateStream(
std::move(p_request_id), 
std::move(p_controls), 
std::move(p_user_gesture), std::move(callback));
      return true;
    }
    case internal::kMediaStreamDispatcherHost_CancelRequest_Name: {
      break;
    }
    case internal::kMediaStreamDispatcherHost_StopStreamDevice_Name: {
      break;
    }
    case internal::kMediaStreamDispatcherHost_OpenDevice_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaStreamDispatcherHost::OpenDevice",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaStreamDispatcherHost_OpenDevice_Params_Data* params =
          reinterpret_cast<
              internal::MediaStreamDispatcherHost_OpenDevice_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_request_id{};
      WTF::String p_device_id{};
      MediaStreamType p_type{};
      MediaStreamDispatcherHost_OpenDevice_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request_id = input_data_view.request_id();
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaStreamDispatcherHost::Name_, 3, false);
        return false;
      }
      MediaStreamDispatcherHost::OpenDeviceCallback callback =
          MediaStreamDispatcherHost_OpenDevice_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenDevice(
std::move(p_request_id), 
std::move(p_device_id), 
std::move(p_type), std::move(callback));
      return true;
    }
    case internal::kMediaStreamDispatcherHost_CloseDevice_Name: {
      break;
    }
    case internal::kMediaStreamDispatcherHost_SetCapturingLinkSecured_Name: {
      break;
    }
    case internal::kMediaStreamDispatcherHost_OnStreamStarted_Name: {
      break;
    }
  }
  return false;
}

bool MediaStreamDispatcherHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaStreamDispatcherHost RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaStreamDispatcherHost_GenerateStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStreamDispatcherHost_GenerateStream_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaStreamDispatcherHost_CancelRequest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStreamDispatcherHost_CancelRequest_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaStreamDispatcherHost_StopStreamDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStreamDispatcherHost_StopStreamDevice_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaStreamDispatcherHost_OpenDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStreamDispatcherHost_OpenDevice_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaStreamDispatcherHost_CloseDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStreamDispatcherHost_CloseDevice_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaStreamDispatcherHost_SetCapturingLinkSecured_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaStreamDispatcherHost_OnStreamStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStreamDispatcherHost_OnStreamStarted_Params_Data>(
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

bool MediaStreamDispatcherHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaStreamDispatcherHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMediaStreamDispatcherHost_GenerateStream_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaStreamDispatcherHost_OpenDevice_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data>(
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
const char MediaStreamTrackMetricsHost::Name_[] = "blink.mojom.MediaStreamTrackMetricsHost";

MediaStreamTrackMetricsHostProxy::MediaStreamTrackMetricsHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaStreamTrackMetricsHostProxy::AddTrack(
    uint64_t in_id, bool in_is_audio, bool in_is_remote) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaStreamTrackMetricsHost::AddTrack");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStreamTrackMetricsHost_AddTrack_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaStreamTrackMetricsHost_AddTrack_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id = in_id;
  params->is_audio = in_is_audio;
  params->is_remote = in_is_remote;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaStreamTrackMetricsHost::Name_);
  message.set_method_name("AddTrack");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaStreamTrackMetricsHostProxy::RemoveTrack(
    uint64_t in_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaStreamTrackMetricsHost::RemoveTrack");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStreamTrackMetricsHost_RemoveTrack_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaStreamTrackMetricsHost_RemoveTrack_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id = in_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaStreamTrackMetricsHost::Name_);
  message.set_method_name("RemoveTrack");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaStreamTrackMetricsHostStubDispatch::Accept(
    MediaStreamTrackMetricsHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaStreamTrackMetricsHost_AddTrack_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaStreamTrackMetricsHost::AddTrack",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaStreamTrackMetricsHost_AddTrack_Params_Data* params =
          reinterpret_cast<internal::MediaStreamTrackMetricsHost_AddTrack_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_id{};
      bool p_is_audio{};
      bool p_is_remote{};
      MediaStreamTrackMetricsHost_AddTrack_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id = input_data_view.id();
      p_is_audio = input_data_view.is_audio();
      p_is_remote = input_data_view.is_remote();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaStreamTrackMetricsHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddTrack(
std::move(p_id), 
std::move(p_is_audio), 
std::move(p_is_remote));
      return true;
    }
    case internal::kMediaStreamTrackMetricsHost_RemoveTrack_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaStreamTrackMetricsHost::RemoveTrack",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaStreamTrackMetricsHost_RemoveTrack_Params_Data* params =
          reinterpret_cast<internal::MediaStreamTrackMetricsHost_RemoveTrack_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_id{};
      MediaStreamTrackMetricsHost_RemoveTrack_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id = input_data_view.id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaStreamTrackMetricsHost::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RemoveTrack(
std::move(p_id));
      return true;
    }
  }
  return false;
}

// static
bool MediaStreamTrackMetricsHostStubDispatch::AcceptWithResponder(
    MediaStreamTrackMetricsHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaStreamTrackMetricsHost_AddTrack_Name: {
      break;
    }
    case internal::kMediaStreamTrackMetricsHost_RemoveTrack_Name: {
      break;
    }
  }
  return false;
}

bool MediaStreamTrackMetricsHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaStreamTrackMetricsHost RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaStreamTrackMetricsHost_AddTrack_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStreamTrackMetricsHost_AddTrack_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaStreamTrackMetricsHost_RemoveTrack_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStreamTrackMetricsHost_RemoveTrack_Params_Data>(
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
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::MediaStreamDevice::DataView, ::blink::mojom::blink::MediaStreamDevicePtr>::Read(
    ::blink::mojom::blink::MediaStreamDevice::DataView input,
    ::blink::mojom::blink::MediaStreamDevicePtr* output) {
  bool success = true;
  ::blink::mojom::blink::MediaStreamDevicePtr result(::blink::mojom::blink::MediaStreamDevice::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadVideoFacing(&result->video_facing))
        success = false;
      if (!input.ReadGroupId(&result->group_id))
        success = false;
      if (!input.ReadMatchedOutputDeviceId(&result->matched_output_device_id))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadInput(&result->input))
        success = false;
      result->session_id = input.session_id();
      if (!input.ReadDisplayMediaInfo(&result->display_media_info))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::TrackControls::DataView, ::blink::mojom::blink::TrackControlsPtr>::Read(
    ::blink::mojom::blink::TrackControls::DataView input,
    ::blink::mojom::blink::TrackControlsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::TrackControlsPtr result(::blink::mojom::blink::TrackControls::New());
  
      result->requested = input.requested();
      if (!input.ReadStreamType(&result->stream_type))
        success = false;
      if (!input.ReadDeviceId(&result->device_id))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::StreamControls::DataView, ::blink::mojom::blink::StreamControlsPtr>::Read(
    ::blink::mojom::blink::StreamControls::DataView input,
    ::blink::mojom::blink::StreamControlsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::StreamControlsPtr result(::blink::mojom::blink::StreamControls::New());
  
      if (!input.ReadAudio(&result->audio))
        success = false;
      if (!input.ReadVideo(&result->video))
        success = false;
      result->hotword_enabled = input.hotword_enabled();
      result->disable_local_echo = input.disable_local_echo();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif