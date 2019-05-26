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

#include "third_party/blink/public/mojom/mediastream/media_devices.mojom.h"

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

#include "third_party/blink/public/mojom/mediastream/media_devices.mojom-params-data.h"
#include "third_party/blink/public/mojom/mediastream/media_devices.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/mediastream/media_devices.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_JUMBO_H_
#include "media/base/ipc/media_param_traits.h"
#include "media/capture/mojom/video_capture_types_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/public/common/mediastream/media_devices_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace blink {
namespace mojom {
MediaDeviceInfo::MediaDeviceInfo()
    : device_id(),
      label(),
      group_id() {}

MediaDeviceInfo::MediaDeviceInfo(
    const std::string& device_id_in,
    const std::string& label_in,
    const std::string& group_id_in)
    : device_id(std::move(device_id_in)),
      label(std::move(label_in)),
      group_id(std::move(group_id_in)) {}

MediaDeviceInfo::~MediaDeviceInfo() = default;

bool MediaDeviceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoInputDeviceCapabilities::VideoInputDeviceCapabilities()
    : device_id(),
      group_id(),
      formats(),
      facing_mode() {}

VideoInputDeviceCapabilities::VideoInputDeviceCapabilities(
    const std::string& device_id_in,
    const std::string& group_id_in,
    const std::vector<media::VideoCaptureFormat>& formats_in,
    media::VideoFacingMode facing_mode_in)
    : device_id(std::move(device_id_in)),
      group_id(std::move(group_id_in)),
      formats(std::move(formats_in)),
      facing_mode(std::move(facing_mode_in)) {}

VideoInputDeviceCapabilities::~VideoInputDeviceCapabilities() = default;

bool VideoInputDeviceCapabilities::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AudioInputDeviceCapabilities::AudioInputDeviceCapabilities()
    : device_id(),
      group_id(),
      parameters(),
      is_valid(),
      channels(),
      sample_rate(),
      latency() {}

AudioInputDeviceCapabilities::AudioInputDeviceCapabilities(
    const std::string& device_id_in,
    const std::string& group_id_in,
    const media::AudioParameters& parameters_in,
    bool is_valid_in,
    int32_t channels_in,
    int32_t sample_rate_in,
    base::TimeDelta latency_in)
    : device_id(std::move(device_id_in)),
      group_id(std::move(group_id_in)),
      parameters(std::move(parameters_in)),
      is_valid(std::move(is_valid_in)),
      channels(std::move(channels_in)),
      sample_rate(std::move(sample_rate_in)),
      latency(std::move(latency_in)) {}

AudioInputDeviceCapabilities::~AudioInputDeviceCapabilities() = default;

bool AudioInputDeviceCapabilities::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char MediaDevicesDispatcherHost::Name_[] = "blink.mojom.MediaDevicesDispatcherHost";

class MediaDevicesDispatcherHost_EnumerateDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaDevicesDispatcherHost_EnumerateDevices_ForwardToCallback(
      MediaDevicesDispatcherHost::EnumerateDevicesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaDevicesDispatcherHost::EnumerateDevicesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHost_EnumerateDevices_ForwardToCallback);
};

class MediaDevicesDispatcherHost_GetVideoInputCapabilities_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ForwardToCallback(
      MediaDevicesDispatcherHost::GetVideoInputCapabilitiesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaDevicesDispatcherHost::GetVideoInputCapabilitiesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHost_GetVideoInputCapabilities_ForwardToCallback);
};

class MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ForwardToCallback(
      MediaDevicesDispatcherHost::GetAllVideoInputDeviceFormatsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaDevicesDispatcherHost::GetAllVideoInputDeviceFormatsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ForwardToCallback);
};

class MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ForwardToCallback(
      MediaDevicesDispatcherHost::GetAvailableVideoInputDeviceFormatsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaDevicesDispatcherHost::GetAvailableVideoInputDeviceFormatsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ForwardToCallback);
};

class MediaDevicesDispatcherHost_GetAudioInputCapabilities_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ForwardToCallback(
      MediaDevicesDispatcherHost::GetAudioInputCapabilitiesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaDevicesDispatcherHost::GetAudioInputCapabilitiesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHost_GetAudioInputCapabilities_ForwardToCallback);
};

MediaDevicesDispatcherHostProxy::MediaDevicesDispatcherHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaDevicesDispatcherHostProxy::EnumerateDevices(
    bool in_request_audio_input, bool in_request_video_input, bool in_request_audio_output, bool in_request_video_input_capabilities, bool in_request_audio_input_capabilities, EnumerateDevicesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::EnumerateDevices");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDevicesDispatcherHost_EnumerateDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaDevicesDispatcherHost_EnumerateDevices_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->request_audio_input = in_request_audio_input;
  params->request_video_input = in_request_video_input;
  params->request_audio_output = in_request_audio_output;
  params->request_video_input_capabilities = in_request_video_input_capabilities;
  params->request_audio_input_capabilities = in_request_audio_input_capabilities;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaDevicesDispatcherHost::Name_);
  message.set_method_name("EnumerateDevices");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaDevicesDispatcherHost_EnumerateDevices_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaDevicesDispatcherHostProxy::GetVideoInputCapabilities(
    GetVideoInputCapabilitiesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetVideoInputCapabilities");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaDevicesDispatcherHost::Name_);
  message.set_method_name("GetVideoInputCapabilities");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaDevicesDispatcherHost_GetVideoInputCapabilities_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaDevicesDispatcherHostProxy::GetAllVideoInputDeviceFormats(
    const std::string& in_device_id, GetAllVideoInputDeviceFormatsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetAllVideoInputDeviceFormats");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data::BufferWriter
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
      "null device_id in MediaDevicesDispatcherHost.GetAllVideoInputDeviceFormats request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaDevicesDispatcherHost::Name_);
  message.set_method_name("GetAllVideoInputDeviceFormats");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaDevicesDispatcherHostProxy::GetAvailableVideoInputDeviceFormats(
    const std::string& in_device_id, GetAvailableVideoInputDeviceFormatsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetAvailableVideoInputDeviceFormats");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data::BufferWriter
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
      "null device_id in MediaDevicesDispatcherHost.GetAvailableVideoInputDeviceFormats request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaDevicesDispatcherHost::Name_);
  message.set_method_name("GetAvailableVideoInputDeviceFormats");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaDevicesDispatcherHostProxy::GetAudioInputCapabilities(
    GetAudioInputCapabilitiesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetAudioInputCapabilities");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaDevicesDispatcherHost::Name_);
  message.set_method_name("GetAudioInputCapabilities");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaDevicesDispatcherHost_GetAudioInputCapabilities_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaDevicesDispatcherHostProxy::AddMediaDevicesListener(
    bool in_subscribe_audio_input, bool in_subscribe_video_input, bool in_subscribe_audio_output, MediaDevicesListenerPtr in_listener) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::AddMediaDevicesListener");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDevicesDispatcherHost_AddMediaDevicesListener_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->subscribe_audio_input = in_subscribe_audio_input;
  params->subscribe_video_input = in_subscribe_video_input;
  params->subscribe_audio_output = in_subscribe_audio_output;
  mojo::internal::Serialize<::blink::mojom::MediaDevicesListenerPtrDataView>(
      in_listener, &params->listener, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid listener in MediaDevicesDispatcherHost.AddMediaDevicesListener request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaDevicesDispatcherHost::Name_);
  message.set_method_name("AddMediaDevicesListener");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class MediaDevicesDispatcherHost_EnumerateDevices_ProxyToResponder {
 public:
  static MediaDevicesDispatcherHost::EnumerateDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaDevicesDispatcherHost_EnumerateDevices_ProxyToResponder> proxy(
        new MediaDevicesDispatcherHost_EnumerateDevices_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaDevicesDispatcherHost_EnumerateDevices_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaDevicesDispatcherHost_EnumerateDevices_ProxyToResponder() {
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
  MediaDevicesDispatcherHost_EnumerateDevices_ProxyToResponder(
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
        << "MediaDevicesDispatcherHost::EnumerateDevicesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<std::vector<blink::WebMediaDeviceInfo>>& in_enumeration, std::vector<VideoInputDeviceCapabilitiesPtr> in_video_input_device_capabilities, std::vector<AudioInputDeviceCapabilitiesPtr> in_audio_input_device_capabilities);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHost_EnumerateDevices_ProxyToResponder);
};

bool MediaDevicesDispatcherHost_EnumerateDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::EnumerateDevicesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<std::vector<blink::WebMediaDeviceInfo>> p_enumeration{};
  std::vector<VideoInputDeviceCapabilitiesPtr> p_video_input_device_capabilities{};
  std::vector<AudioInputDeviceCapabilitiesPtr> p_audio_input_device_capabilities{};
  MediaDevicesDispatcherHost_EnumerateDevices_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadEnumeration(&p_enumeration))
    success = false;
  if (!input_data_view.ReadVideoInputDeviceCapabilities(&p_video_input_device_capabilities))
    success = false;
  if (!input_data_view.ReadAudioInputDeviceCapabilities(&p_audio_input_device_capabilities))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MediaDevicesDispatcherHost::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_enumeration), 
std::move(p_video_input_device_capabilities), 
std::move(p_audio_input_device_capabilities));
  return true;
}

void MediaDevicesDispatcherHost_EnumerateDevices_ProxyToResponder::Run(
    const std::vector<std::vector<blink::WebMediaDeviceInfo>>& in_enumeration, std::vector<VideoInputDeviceCapabilitiesPtr> in_video_input_device_capabilities, std::vector<AudioInputDeviceCapabilitiesPtr> in_audio_input_device_capabilities) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDevicesDispatcherHost_EnumerateDevices_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->enumeration)::BaseType::BufferWriter
      enumeration_writer;
  const mojo::internal::ContainerValidateParams enumeration_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::ArrayDataView<::blink::mojom::MediaDeviceInfoDataView>>>(
      in_enumeration, buffer, &enumeration_writer, &enumeration_validate_params,
      &serialization_context);
  params->enumeration.Set(
      enumeration_writer.is_null() ? nullptr : enumeration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->enumeration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null enumeration in ");
  typename decltype(params->video_input_device_capabilities)::BaseType::BufferWriter
      video_input_device_capabilities_writer;
  const mojo::internal::ContainerValidateParams video_input_device_capabilities_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::VideoInputDeviceCapabilitiesDataView>>(
      in_video_input_device_capabilities, buffer, &video_input_device_capabilities_writer, &video_input_device_capabilities_validate_params,
      &serialization_context);
  params->video_input_device_capabilities.Set(
      video_input_device_capabilities_writer.is_null() ? nullptr : video_input_device_capabilities_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->video_input_device_capabilities.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null video_input_device_capabilities in ");
  typename decltype(params->audio_input_device_capabilities)::BaseType::BufferWriter
      audio_input_device_capabilities_writer;
  const mojo::internal::ContainerValidateParams audio_input_device_capabilities_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::AudioInputDeviceCapabilitiesDataView>>(
      in_audio_input_device_capabilities, buffer, &audio_input_device_capabilities_writer, &audio_input_device_capabilities_validate_params,
      &serialization_context);
  params->audio_input_device_capabilities.Set(
      audio_input_device_capabilities_writer.is_null() ? nullptr : audio_input_device_capabilities_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->audio_input_device_capabilities.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null audio_input_device_capabilities in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::EnumerateDevicesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaDevicesDispatcherHost::Name_);
  message.set_method_name("EnumerateDevices");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaDevicesDispatcherHost_GetVideoInputCapabilities_ProxyToResponder {
 public:
  static MediaDevicesDispatcherHost::GetVideoInputCapabilitiesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaDevicesDispatcherHost_GetVideoInputCapabilities_ProxyToResponder> proxy(
        new MediaDevicesDispatcherHost_GetVideoInputCapabilities_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaDevicesDispatcherHost_GetVideoInputCapabilities_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaDevicesDispatcherHost_GetVideoInputCapabilities_ProxyToResponder() {
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
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ProxyToResponder(
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
        << "MediaDevicesDispatcherHost::GetVideoInputCapabilitiesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<VideoInputDeviceCapabilitiesPtr> in_video_input_device_capabilities);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHost_GetVideoInputCapabilities_ProxyToResponder);
};

bool MediaDevicesDispatcherHost_GetVideoInputCapabilities_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetVideoInputCapabilitiesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<VideoInputDeviceCapabilitiesPtr> p_video_input_device_capabilities{};
  MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadVideoInputDeviceCapabilities(&p_video_input_device_capabilities))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MediaDevicesDispatcherHost::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_video_input_device_capabilities));
  return true;
}

void MediaDevicesDispatcherHost_GetVideoInputCapabilities_ProxyToResponder::Run(
    std::vector<VideoInputDeviceCapabilitiesPtr> in_video_input_device_capabilities) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->video_input_device_capabilities)::BaseType::BufferWriter
      video_input_device_capabilities_writer;
  const mojo::internal::ContainerValidateParams video_input_device_capabilities_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::VideoInputDeviceCapabilitiesDataView>>(
      in_video_input_device_capabilities, buffer, &video_input_device_capabilities_writer, &video_input_device_capabilities_validate_params,
      &serialization_context);
  params->video_input_device_capabilities.Set(
      video_input_device_capabilities_writer.is_null() ? nullptr : video_input_device_capabilities_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->video_input_device_capabilities.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null video_input_device_capabilities in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetVideoInputCapabilitiesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaDevicesDispatcherHost::Name_);
  message.set_method_name("GetVideoInputCapabilities");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ProxyToResponder {
 public:
  static MediaDevicesDispatcherHost::GetAllVideoInputDeviceFormatsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ProxyToResponder> proxy(
        new MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ProxyToResponder() {
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
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ProxyToResponder(
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
        << "MediaDevicesDispatcherHost::GetAllVideoInputDeviceFormatsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<media::VideoCaptureFormat>& in_formats);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ProxyToResponder);
};

bool MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetAllVideoInputDeviceFormatsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<media::VideoCaptureFormat> p_formats{};
  MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFormats(&p_formats))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MediaDevicesDispatcherHost::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_formats));
  return true;
}

void MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ProxyToResponder::Run(
    const std::vector<media::VideoCaptureFormat>& in_formats) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->formats)::BaseType::BufferWriter
      formats_writer;
  const mojo::internal::ContainerValidateParams formats_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
      in_formats, buffer, &formats_writer, &formats_validate_params,
      &serialization_context);
  params->formats.Set(
      formats_writer.is_null() ? nullptr : formats_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->formats.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null formats in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetAllVideoInputDeviceFormatsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaDevicesDispatcherHost::Name_);
  message.set_method_name("GetAllVideoInputDeviceFormats");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ProxyToResponder {
 public:
  static MediaDevicesDispatcherHost::GetAvailableVideoInputDeviceFormatsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ProxyToResponder> proxy(
        new MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ProxyToResponder() {
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
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ProxyToResponder(
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
        << "MediaDevicesDispatcherHost::GetAvailableVideoInputDeviceFormatsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<media::VideoCaptureFormat>& in_formats);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ProxyToResponder);
};

bool MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetAvailableVideoInputDeviceFormatsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<media::VideoCaptureFormat> p_formats{};
  MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFormats(&p_formats))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MediaDevicesDispatcherHost::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_formats));
  return true;
}

void MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ProxyToResponder::Run(
    const std::vector<media::VideoCaptureFormat>& in_formats) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->formats)::BaseType::BufferWriter
      formats_writer;
  const mojo::internal::ContainerValidateParams formats_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
      in_formats, buffer, &formats_writer, &formats_validate_params,
      &serialization_context);
  params->formats.Set(
      formats_writer.is_null() ? nullptr : formats_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->formats.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null formats in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetAvailableVideoInputDeviceFormatsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaDevicesDispatcherHost::Name_);
  message.set_method_name("GetAvailableVideoInputDeviceFormats");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaDevicesDispatcherHost_GetAudioInputCapabilities_ProxyToResponder {
 public:
  static MediaDevicesDispatcherHost::GetAudioInputCapabilitiesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaDevicesDispatcherHost_GetAudioInputCapabilities_ProxyToResponder> proxy(
        new MediaDevicesDispatcherHost_GetAudioInputCapabilities_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaDevicesDispatcherHost_GetAudioInputCapabilities_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaDevicesDispatcherHost_GetAudioInputCapabilities_ProxyToResponder() {
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
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ProxyToResponder(
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
        << "MediaDevicesDispatcherHost::GetAudioInputCapabilitiesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<AudioInputDeviceCapabilitiesPtr> in_audio_input_device_capabilities);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHost_GetAudioInputCapabilities_ProxyToResponder);
};

bool MediaDevicesDispatcherHost_GetAudioInputCapabilities_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetAudioInputCapabilitiesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<AudioInputDeviceCapabilitiesPtr> p_audio_input_device_capabilities{};
  MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadAudioInputDeviceCapabilities(&p_audio_input_device_capabilities))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MediaDevicesDispatcherHost::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_audio_input_device_capabilities));
  return true;
}

void MediaDevicesDispatcherHost_GetAudioInputCapabilities_ProxyToResponder::Run(
    std::vector<AudioInputDeviceCapabilitiesPtr> in_audio_input_device_capabilities) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->audio_input_device_capabilities)::BaseType::BufferWriter
      audio_input_device_capabilities_writer;
  const mojo::internal::ContainerValidateParams audio_input_device_capabilities_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::AudioInputDeviceCapabilitiesDataView>>(
      in_audio_input_device_capabilities, buffer, &audio_input_device_capabilities_writer, &audio_input_device_capabilities_validate_params,
      &serialization_context);
  params->audio_input_device_capabilities.Set(
      audio_input_device_capabilities_writer.is_null() ? nullptr : audio_input_device_capabilities_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->audio_input_device_capabilities.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null audio_input_device_capabilities in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetAudioInputCapabilitiesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaDevicesDispatcherHost::Name_);
  message.set_method_name("GetAudioInputCapabilities");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool MediaDevicesDispatcherHostStubDispatch::Accept(
    MediaDevicesDispatcherHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaDevicesDispatcherHost_EnumerateDevices_Name: {
      break;
    }
    case internal::kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name: {
      break;
    }
    case internal::kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name: {
      break;
    }
    case internal::kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name: {
      break;
    }
    case internal::kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name: {
      break;
    }
    case internal::kMediaDevicesDispatcherHost_AddMediaDevicesListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::AddMediaDevicesListener",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data* params =
          reinterpret_cast<internal::MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_subscribe_audio_input{};
      bool p_subscribe_video_input{};
      bool p_subscribe_audio_output{};
      MediaDevicesListenerPtr p_listener{};
      MediaDevicesDispatcherHost_AddMediaDevicesListener_ParamsDataView input_data_view(params, &serialization_context);
      
      p_subscribe_audio_input = input_data_view.subscribe_audio_input();
      p_subscribe_video_input = input_data_view.subscribe_video_input();
      p_subscribe_audio_output = input_data_view.subscribe_audio_output();
      p_listener =
          input_data_view.TakeListener<decltype(p_listener)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaDevicesDispatcherHost::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddMediaDevicesListener(
std::move(p_subscribe_audio_input), 
std::move(p_subscribe_video_input), 
std::move(p_subscribe_audio_output), 
std::move(p_listener));
      return true;
    }
  }
  return false;
}

// static
bool MediaDevicesDispatcherHostStubDispatch::AcceptWithResponder(
    MediaDevicesDispatcherHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaDevicesDispatcherHost_EnumerateDevices_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::EnumerateDevices",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaDevicesDispatcherHost_EnumerateDevices_Params_Data* params =
          reinterpret_cast<
              internal::MediaDevicesDispatcherHost_EnumerateDevices_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_request_audio_input{};
      bool p_request_video_input{};
      bool p_request_audio_output{};
      bool p_request_video_input_capabilities{};
      bool p_request_audio_input_capabilities{};
      MediaDevicesDispatcherHost_EnumerateDevices_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request_audio_input = input_data_view.request_audio_input();
      p_request_video_input = input_data_view.request_video_input();
      p_request_audio_output = input_data_view.request_audio_output();
      p_request_video_input_capabilities = input_data_view.request_video_input_capabilities();
      p_request_audio_input_capabilities = input_data_view.request_audio_input_capabilities();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaDevicesDispatcherHost::Name_, 0, false);
        return false;
      }
      MediaDevicesDispatcherHost::EnumerateDevicesCallback callback =
          MediaDevicesDispatcherHost_EnumerateDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnumerateDevices(
std::move(p_request_audio_input), 
std::move(p_request_video_input), 
std::move(p_request_audio_output), 
std::move(p_request_video_input_capabilities), 
std::move(p_request_audio_input_capabilities), std::move(callback));
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetVideoInputCapabilities",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data* params =
          reinterpret_cast<
              internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaDevicesDispatcherHost_GetVideoInputCapabilities_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaDevicesDispatcherHost::Name_, 1, false);
        return false;
      }
      MediaDevicesDispatcherHost::GetVideoInputCapabilitiesCallback callback =
          MediaDevicesDispatcherHost_GetVideoInputCapabilities_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetVideoInputCapabilities(std::move(callback));
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetAllVideoInputDeviceFormats",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data* params =
          reinterpret_cast<
              internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_device_id{};
      MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaDevicesDispatcherHost::Name_, 2, false);
        return false;
      }
      MediaDevicesDispatcherHost::GetAllVideoInputDeviceFormatsCallback callback =
          MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetAllVideoInputDeviceFormats(
std::move(p_device_id), std::move(callback));
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetAvailableVideoInputDeviceFormats",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data* params =
          reinterpret_cast<
              internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_device_id{};
      MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaDevicesDispatcherHost::Name_, 3, false);
        return false;
      }
      MediaDevicesDispatcherHost::GetAvailableVideoInputDeviceFormatsCallback callback =
          MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetAvailableVideoInputDeviceFormats(
std::move(p_device_id), std::move(callback));
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaDevicesDispatcherHost::GetAudioInputCapabilities",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data* params =
          reinterpret_cast<
              internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaDevicesDispatcherHost_GetAudioInputCapabilities_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaDevicesDispatcherHost::Name_, 4, false);
        return false;
      }
      MediaDevicesDispatcherHost::GetAudioInputCapabilitiesCallback callback =
          MediaDevicesDispatcherHost_GetAudioInputCapabilities_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetAudioInputCapabilities(std::move(callback));
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_AddMediaDevicesListener_Name: {
      break;
    }
  }
  return false;
}

bool MediaDevicesDispatcherHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaDevicesDispatcherHost RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaDevicesDispatcherHost_EnumerateDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDevicesDispatcherHost_EnumerateDevices_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_AddMediaDevicesListener_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data>(
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

bool MediaDevicesDispatcherHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaDevicesDispatcherHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMediaDevicesDispatcherHost_EnumerateDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data>(
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
const char MediaDevicesListener::Name_[] = "blink.mojom.MediaDevicesListener";

MediaDevicesListenerProxy::MediaDevicesListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaDevicesListenerProxy::OnDevicesChanged(
    blink::MediaDeviceType in_type, const std::vector<blink::WebMediaDeviceInfo>& in_device_infos) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaDevicesListener::OnDevicesChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDevicesListener_OnDevicesChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaDevicesListener_OnDevicesChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::MediaDeviceType>(
      in_type, &params->type);
  typename decltype(params->device_infos)::BaseType::BufferWriter
      device_infos_writer;
  const mojo::internal::ContainerValidateParams device_infos_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::MediaDeviceInfoDataView>>(
      in_device_infos, buffer, &device_infos_writer, &device_infos_validate_params,
      &serialization_context);
  params->device_infos.Set(
      device_infos_writer.is_null() ? nullptr : device_infos_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_infos.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_infos in MediaDevicesListener.OnDevicesChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaDevicesListener::Name_);
  message.set_method_name("OnDevicesChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaDevicesListenerStubDispatch::Accept(
    MediaDevicesListener* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaDevicesListener_OnDevicesChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaDevicesListener::OnDevicesChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaDevicesListener_OnDevicesChanged_Params_Data* params =
          reinterpret_cast<internal::MediaDevicesListener_OnDevicesChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      blink::MediaDeviceType p_type{};
      std::vector<blink::WebMediaDeviceInfo> p_device_infos{};
      MediaDevicesListener_OnDevicesChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadDeviceInfos(&p_device_infos))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaDevicesListener::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDevicesChanged(
std::move(p_type), 
std::move(p_device_infos));
      return true;
    }
  }
  return false;
}

// static
bool MediaDevicesListenerStubDispatch::AcceptWithResponder(
    MediaDevicesListener* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaDevicesListener_OnDevicesChanged_Name: {
      break;
    }
  }
  return false;
}

bool MediaDevicesListenerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaDevicesListener RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaDevicesListener_OnDevicesChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDevicesListener_OnDevicesChanged_Params_Data>(
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

}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::MediaDeviceInfo::DataView, ::blink::mojom::MediaDeviceInfoPtr>::Read(
    ::blink::mojom::MediaDeviceInfo::DataView input,
    ::blink::mojom::MediaDeviceInfoPtr* output) {
  bool success = true;
  ::blink::mojom::MediaDeviceInfoPtr result(::blink::mojom::MediaDeviceInfo::New());
  
      if (!input.ReadDeviceId(&result->device_id))
        success = false;
      if (!input.ReadLabel(&result->label))
        success = false;
      if (!input.ReadGroupId(&result->group_id))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::VideoInputDeviceCapabilities::DataView, ::blink::mojom::VideoInputDeviceCapabilitiesPtr>::Read(
    ::blink::mojom::VideoInputDeviceCapabilities::DataView input,
    ::blink::mojom::VideoInputDeviceCapabilitiesPtr* output) {
  bool success = true;
  ::blink::mojom::VideoInputDeviceCapabilitiesPtr result(::blink::mojom::VideoInputDeviceCapabilities::New());
  
      if (!input.ReadDeviceId(&result->device_id))
        success = false;
      if (!input.ReadGroupId(&result->group_id))
        success = false;
      if (!input.ReadFormats(&result->formats))
        success = false;
      if (!input.ReadFacingMode(&result->facing_mode))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::AudioInputDeviceCapabilities::DataView, ::blink::mojom::AudioInputDeviceCapabilitiesPtr>::Read(
    ::blink::mojom::AudioInputDeviceCapabilities::DataView input,
    ::blink::mojom::AudioInputDeviceCapabilitiesPtr* output) {
  bool success = true;
  ::blink::mojom::AudioInputDeviceCapabilitiesPtr result(::blink::mojom::AudioInputDeviceCapabilities::New());
  
      if (!input.ReadDeviceId(&result->device_id))
        success = false;
      if (!input.ReadGroupId(&result->group_id))
        success = false;
      if (!input.ReadParameters(&result->parameters))
        success = false;
      result->is_valid = input.is_valid();
      result->channels = input.channels();
      result->sample_rate = input.sample_rate();
      if (!input.ReadLatency(&result->latency))
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