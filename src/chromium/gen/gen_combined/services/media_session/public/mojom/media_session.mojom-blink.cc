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

#include "services/media_session/public/mojom/media_session.mojom-blink.h"

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

#include "services/media_session/public/mojom/media_session.mojom-params-data.h"
#include "services/media_session/public/mojom/media_session.mojom-shared-message-ids.h"

#include "services/media_session/public/mojom/media_session.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_JUMBO_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace media_session {
namespace mojom {
namespace blink {
MediaImage::MediaImage()
    : src(),
      type(),
      sizes() {}

MediaImage::MediaImage(
    const ::blink::KURL& src_in,
    const WTF::String& type_in,
    const WTF::Vector<::blink::WebSize>& sizes_in)
    : src(std::move(src_in)),
      type(std::move(type_in)),
      sizes(std::move(sizes_in)) {}

MediaImage::~MediaImage() = default;

bool MediaImage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MediaMetadata::MediaMetadata()
    : title(),
      artist(),
      album(),
      source_title() {}

MediaMetadata::MediaMetadata(
    const WTF::String& title_in,
    const WTF::String& artist_in,
    const WTF::String& album_in,
    const WTF::String& source_title_in)
    : title(std::move(title_in)),
      artist(std::move(artist_in)),
      album(std::move(album_in)),
      source_title(std::move(source_title_in)) {}

MediaMetadata::~MediaMetadata() = default;

bool MediaMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MediaImageBitmap::MediaImageBitmap()
    : width(),
      height(),
      pixel_data() {}

MediaImageBitmap::MediaImageBitmap(
    int32_t width_in,
    int32_t height_in,
    const WTF::Vector<uint8_t>& pixel_data_in)
    : width(std::move(width_in)),
      height(std::move(height_in)),
      pixel_data(std::move(pixel_data_in)) {}

MediaImageBitmap::~MediaImageBitmap() = default;

bool MediaImageBitmap::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MediaSessionInfo::MediaSessionInfo()
    : state(),
      force_duck(),
      playback_state(),
      is_controllable(),
      prefer_stop_for_gain_focus_loss() {}

MediaSessionInfo::MediaSessionInfo(
    MediaSessionInfo::SessionState state_in,
    bool force_duck_in)
    : state(std::move(state_in)),
      force_duck(std::move(force_duck_in)),
      playback_state(),
      is_controllable(),
      prefer_stop_for_gain_focus_loss() {}

MediaSessionInfo::MediaSessionInfo(
    MediaSessionInfo::SessionState state_in,
    bool force_duck_in,
    MediaPlaybackState playback_state_in)
    : state(std::move(state_in)),
      force_duck(std::move(force_duck_in)),
      playback_state(std::move(playback_state_in)),
      is_controllable(),
      prefer_stop_for_gain_focus_loss() {}

MediaSessionInfo::MediaSessionInfo(
    MediaSessionInfo::SessionState state_in,
    bool force_duck_in,
    MediaPlaybackState playback_state_in,
    bool is_controllable_in)
    : state(std::move(state_in)),
      force_duck(std::move(force_duck_in)),
      playback_state(std::move(playback_state_in)),
      is_controllable(std::move(is_controllable_in)),
      prefer_stop_for_gain_focus_loss() {}

MediaSessionInfo::MediaSessionInfo(
    MediaSessionInfo::SessionState state_in,
    bool force_duck_in,
    MediaPlaybackState playback_state_in,
    bool is_controllable_in,
    bool prefer_stop_for_gain_focus_loss_in)
    : state(std::move(state_in)),
      force_duck(std::move(force_duck_in)),
      playback_state(std::move(playback_state_in)),
      is_controllable(std::move(is_controllable_in)),
      prefer_stop_for_gain_focus_loss(std::move(prefer_stop_for_gain_focus_loss_in)) {}

MediaSessionInfo::~MediaSessionInfo() = default;
size_t MediaSessionInfo::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->state);
  seed = mojo::internal::WTFHash(seed, this->force_duck);
  seed = mojo::internal::WTFHash(seed, this->playback_state);
  seed = mojo::internal::WTFHash(seed, this->is_controllable);
  seed = mojo::internal::WTFHash(seed, this->prefer_stop_for_gain_focus_loss);
  return seed;
}

bool MediaSessionInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MediaSessionDebugInfo::MediaSessionDebugInfo()
    : name(),
      owner(),
      state() {}

MediaSessionDebugInfo::MediaSessionDebugInfo(
    const WTF::String& name_in,
    const WTF::String& owner_in,
    const WTF::String& state_in)
    : name(std::move(name_in)),
      owner(std::move(owner_in)),
      state(std::move(state_in)) {}

MediaSessionDebugInfo::~MediaSessionDebugInfo() = default;
size_t MediaSessionDebugInfo::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->name);
  seed = mojo::internal::WTFHash(seed, this->owner);
  seed = mojo::internal::WTFHash(seed, this->state);
  return seed;
}

bool MediaSessionDebugInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char MediaSessionObserver::Name_[] = "media_session.mojom.MediaSessionObserver";

MediaSessionObserverProxy::MediaSessionObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaSessionObserverProxy::MediaSessionInfoChanged(
    MediaSessionInfoPtr in_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSessionObserver::MediaSessionInfoChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSessionObserver_MediaSessionInfoChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSessionObserver_MediaSessionInfoChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaSessionInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in MediaSessionObserver.MediaSessionInfoChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSessionObserver::Name_);
  message.set_method_name("MediaSessionInfoChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaSessionObserverProxy::MediaSessionMetadataChanged(
    MediaMetadataPtr in_metadata) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSessionObserver::MediaSessionMetadataChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSessionObserver_MediaSessionMetadataChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSessionObserver_MediaSessionMetadataChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->metadata)::BaseType::BufferWriter
      metadata_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaMetadataDataView>(
      in_metadata, buffer, &metadata_writer, &serialization_context);
  params->metadata.Set(
      metadata_writer.is_null() ? nullptr : metadata_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSessionObserver::Name_);
  message.set_method_name("MediaSessionMetadataChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaSessionObserverProxy::MediaSessionActionsChanged(
    const WTF::Vector<MediaSessionAction>& in_action) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSessionObserver::MediaSessionActionsChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSessionObserver_MediaSessionActionsChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSessionObserver_MediaSessionActionsChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->action)::BaseType::BufferWriter
      action_writer;
  const mojo::internal::ContainerValidateParams action_validate_params(
      0, ::media_session::mojom::internal::MediaSessionAction_Data::Validate);
  mojo::internal::Serialize<mojo::ArrayDataView<::media_session::mojom::MediaSessionAction>>(
      in_action, buffer, &action_writer, &action_validate_params,
      &serialization_context);
  params->action.Set(
      action_writer.is_null() ? nullptr : action_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->action.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null action in MediaSessionObserver.MediaSessionActionsChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSessionObserver::Name_);
  message.set_method_name("MediaSessionActionsChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaSessionObserverProxy::MediaSessionImagesChanged(
    WTF::HashMap<MediaSessionImageType, WTF::Vector<MediaImagePtr>> in_images) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSessionObserver::MediaSessionImagesChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSessionObserver_MediaSessionImagesChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSessionObserver_MediaSessionImagesChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->images)::BaseType::BufferWriter
      images_writer;
  const mojo::internal::ContainerValidateParams images_validate_params(
      new mojo::internal::ContainerValidateParams(0, ::media_session::mojom::internal::MediaSessionImageType_Data::Validate), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<::media_session::mojom::MediaSessionImageType, mojo::ArrayDataView<::media_session::mojom::MediaImageDataView>>>(
      in_images, buffer, &images_writer, &images_validate_params,
      &serialization_context);
  params->images.Set(
      images_writer.is_null() ? nullptr : images_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->images.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null images in MediaSessionObserver.MediaSessionImagesChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSessionObserver::Name_);
  message.set_method_name("MediaSessionImagesChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaSessionObserverStubDispatch::Accept(
    MediaSessionObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaSessionObserver_MediaSessionInfoChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSessionObserver::MediaSessionInfoChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSessionObserver_MediaSessionInfoChanged_Params_Data* params =
          reinterpret_cast<internal::MediaSessionObserver_MediaSessionInfoChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaSessionInfoPtr p_info{};
      MediaSessionObserver_MediaSessionInfoChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInfo(&p_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSessionObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MediaSessionInfoChanged(
std::move(p_info));
      return true;
    }
    case internal::kMediaSessionObserver_MediaSessionMetadataChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSessionObserver::MediaSessionMetadataChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSessionObserver_MediaSessionMetadataChanged_Params_Data* params =
          reinterpret_cast<internal::MediaSessionObserver_MediaSessionMetadataChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaMetadataPtr p_metadata{};
      MediaSessionObserver_MediaSessionMetadataChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMetadata(&p_metadata))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSessionObserver::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MediaSessionMetadataChanged(
std::move(p_metadata));
      return true;
    }
    case internal::kMediaSessionObserver_MediaSessionActionsChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSessionObserver::MediaSessionActionsChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSessionObserver_MediaSessionActionsChanged_Params_Data* params =
          reinterpret_cast<internal::MediaSessionObserver_MediaSessionActionsChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<MediaSessionAction> p_action{};
      MediaSessionObserver_MediaSessionActionsChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAction(&p_action))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSessionObserver::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MediaSessionActionsChanged(
std::move(p_action));
      return true;
    }
    case internal::kMediaSessionObserver_MediaSessionImagesChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSessionObserver::MediaSessionImagesChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSessionObserver_MediaSessionImagesChanged_Params_Data* params =
          reinterpret_cast<internal::MediaSessionObserver_MediaSessionImagesChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::HashMap<MediaSessionImageType, WTF::Vector<MediaImagePtr>> p_images{};
      MediaSessionObserver_MediaSessionImagesChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadImages(&p_images))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSessionObserver::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MediaSessionImagesChanged(
std::move(p_images));
      return true;
    }
  }
  return false;
}

// static
bool MediaSessionObserverStubDispatch::AcceptWithResponder(
    MediaSessionObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaSessionObserver_MediaSessionInfoChanged_Name: {
      break;
    }
    case internal::kMediaSessionObserver_MediaSessionMetadataChanged_Name: {
      break;
    }
    case internal::kMediaSessionObserver_MediaSessionActionsChanged_Name: {
      break;
    }
    case internal::kMediaSessionObserver_MediaSessionImagesChanged_Name: {
      break;
    }
  }
  return false;
}

bool MediaSessionObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaSessionObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaSessionObserver_MediaSessionInfoChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSessionObserver_MediaSessionInfoChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSessionObserver_MediaSessionMetadataChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSessionObserver_MediaSessionMetadataChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSessionObserver_MediaSessionActionsChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSessionObserver_MediaSessionActionsChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSessionObserver_MediaSessionImagesChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSessionObserver_MediaSessionImagesChanged_Params_Data>(
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

const char MediaSession::Name_[] = "media_session.mojom.MediaSession";

class MediaSession_GetMediaSessionInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaSession_GetMediaSessionInfo_ForwardToCallback(
      MediaSession::GetMediaSessionInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaSession::GetMediaSessionInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaSession_GetMediaSessionInfo_ForwardToCallback);
};

class MediaSession_GetDebugInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaSession_GetDebugInfo_ForwardToCallback(
      MediaSession::GetDebugInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaSession::GetDebugInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaSession_GetDebugInfo_ForwardToCallback);
};

class MediaSession_GetMediaImageBitmap_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaSession_GetMediaImageBitmap_ForwardToCallback(
      MediaSession::GetMediaImageBitmapCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaSession::GetMediaImageBitmapCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MediaSession_GetMediaImageBitmap_ForwardToCallback);
};

MediaSessionProxy::MediaSessionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaSessionProxy::GetMediaSessionInfo(
    GetMediaSessionInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::GetMediaSessionInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_GetMediaSessionInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_GetMediaSessionInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("GetMediaSessionInfo");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaSession_GetMediaSessionInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaSessionProxy::GetDebugInfo(
    GetDebugInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::GetDebugInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_GetDebugInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_GetDebugInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("GetDebugInfo");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaSession_GetDebugInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MediaSessionProxy::StartDucking(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::StartDucking");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_StartDucking_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_StartDucking_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("StartDucking");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaSessionProxy::StopDucking(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::StopDucking");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_StopDucking_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_StopDucking_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("StopDucking");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaSessionProxy::Suspend(
    MediaSession::SuspendType in_suspend_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::Suspend");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_Suspend_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_Suspend_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_session::mojom::MediaSession_SuspendType>(
      in_suspend_type, &params->suspend_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("Suspend");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaSessionProxy::Resume(
    MediaSession::SuspendType in_suspend_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::Resume");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_Resume_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_Resume_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_session::mojom::MediaSession_SuspendType>(
      in_suspend_type, &params->suspend_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("Resume");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaSessionProxy::AddObserver(
    MediaSessionObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::AddObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_AddObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_AddObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_session::mojom::MediaSessionObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in MediaSession.AddObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("AddObserver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaSessionProxy::PreviousTrack(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::PreviousTrack");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_PreviousTrack_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_PreviousTrack_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("PreviousTrack");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaSessionProxy::NextTrack(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::NextTrack");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_NextTrack_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_NextTrack_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("NextTrack");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaSessionProxy::Seek(
    base::TimeDelta in_seek_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::Seek");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_Seek_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_Seek_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->seek_time)::BaseType::BufferWriter
      seek_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_seek_time, buffer, &seek_time_writer, &serialization_context);
  params->seek_time.Set(
      seek_time_writer.is_null() ? nullptr : seek_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->seek_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null seek_time in MediaSession.Seek request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("Seek");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaSessionProxy::Stop(
    MediaSession::SuspendType in_suspend_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::Stop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_Stop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_session::mojom::MediaSession_SuspendType>(
      in_suspend_type, &params->suspend_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("Stop");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaSessionProxy::SkipAd(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::SkipAd");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_SkipAd_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_SkipAd_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("SkipAd");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaSessionProxy::GetMediaImageBitmap(
    MediaImagePtr in_image, int32_t in_minimum_size_px, int32_t in_desired_size_px, GetMediaImageBitmapCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::GetMediaImageBitmap");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_GetMediaImageBitmap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_GetMediaImageBitmap_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->image)::BaseType::BufferWriter
      image_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaImageDataView>(
      in_image, buffer, &image_writer, &serialization_context);
  params->image.Set(
      image_writer.is_null() ? nullptr : image_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->image.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null image in MediaSession.GetMediaImageBitmap request");
  params->minimum_size_px = in_minimum_size_px;
  params->desired_size_px = in_desired_size_px;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("GetMediaImageBitmap");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MediaSession_GetMediaImageBitmap_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class MediaSession_GetMediaSessionInfo_ProxyToResponder {
 public:
  static MediaSession::GetMediaSessionInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaSession_GetMediaSessionInfo_ProxyToResponder> proxy(
        new MediaSession_GetMediaSessionInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaSession_GetMediaSessionInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaSession_GetMediaSessionInfo_ProxyToResponder() {
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
  MediaSession_GetMediaSessionInfo_ProxyToResponder(
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
        << "MediaSession::GetMediaSessionInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      MediaSessionInfoPtr in_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaSession_GetMediaSessionInfo_ProxyToResponder);
};

bool MediaSession_GetMediaSessionInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::GetMediaSessionInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaSession_GetMediaSessionInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaSession_GetMediaSessionInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  MediaSessionInfoPtr p_info{};
  MediaSession_GetMediaSessionInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInfo(&p_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MediaSession::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_info));
  return true;
}

void MediaSession_GetMediaSessionInfo_ProxyToResponder::Run(
    MediaSessionInfoPtr in_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_GetMediaSessionInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_GetMediaSessionInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaSessionInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::GetMediaSessionInfoCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("GetMediaSessionInfo");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaSession_GetDebugInfo_ProxyToResponder {
 public:
  static MediaSession::GetDebugInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaSession_GetDebugInfo_ProxyToResponder> proxy(
        new MediaSession_GetDebugInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaSession_GetDebugInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaSession_GetDebugInfo_ProxyToResponder() {
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
  MediaSession_GetDebugInfo_ProxyToResponder(
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
        << "MediaSession::GetDebugInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      MediaSessionDebugInfoPtr in_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaSession_GetDebugInfo_ProxyToResponder);
};

bool MediaSession_GetDebugInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::GetDebugInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaSession_GetDebugInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaSession_GetDebugInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  MediaSessionDebugInfoPtr p_info{};
  MediaSession_GetDebugInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInfo(&p_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MediaSession::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_info));
  return true;
}

void MediaSession_GetDebugInfo_ProxyToResponder::Run(
    MediaSessionDebugInfoPtr in_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_GetDebugInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_GetDebugInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaSessionDebugInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::GetDebugInfoCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("GetDebugInfo");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MediaSession_GetMediaImageBitmap_ProxyToResponder {
 public:
  static MediaSession::GetMediaImageBitmapCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MediaSession_GetMediaImageBitmap_ProxyToResponder> proxy(
        new MediaSession_GetMediaImageBitmap_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MediaSession_GetMediaImageBitmap_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MediaSession_GetMediaImageBitmap_ProxyToResponder() {
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
  MediaSession_GetMediaImageBitmap_ProxyToResponder(
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
        << "MediaSession::GetMediaImageBitmapCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      MediaImageBitmapPtr in_image);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MediaSession_GetMediaImageBitmap_ProxyToResponder);
};

bool MediaSession_GetMediaImageBitmap_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MediaSession::GetMediaImageBitmapCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MediaSession_GetMediaImageBitmap_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MediaSession_GetMediaImageBitmap_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  MediaImageBitmapPtr p_image{};
  MediaSession_GetMediaImageBitmap_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadImage(&p_image))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MediaSession::Name_, 12, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_image));
  return true;
}

void MediaSession_GetMediaImageBitmap_ProxyToResponder::Run(
    MediaImageBitmapPtr in_image) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaSession_GetMediaImageBitmap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_session::mojom::internal::MediaSession_GetMediaImageBitmap_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->image)::BaseType::BufferWriter
      image_writer;
  mojo::internal::Serialize<::media_session::mojom::MediaImageBitmapDataView>(
      in_image, buffer, &image_writer, &serialization_context);
  params->image.Set(
      image_writer.is_null() ? nullptr : image_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::GetMediaImageBitmapCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaSession::Name_);
  message.set_method_name("GetMediaImageBitmap");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool MediaSessionStubDispatch::Accept(
    MediaSession* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaSession_GetMediaSessionInfo_Name: {
      break;
    }
    case internal::kMediaSession_GetDebugInfo_Name: {
      break;
    }
    case internal::kMediaSession_StartDucking_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::StartDucking",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSession_StartDucking_Params_Data* params =
          reinterpret_cast<internal::MediaSession_StartDucking_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaSession_StartDucking_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSession::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartDucking();
      return true;
    }
    case internal::kMediaSession_StopDucking_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::StopDucking",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSession_StopDucking_Params_Data* params =
          reinterpret_cast<internal::MediaSession_StopDucking_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaSession_StopDucking_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSession::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopDucking();
      return true;
    }
    case internal::kMediaSession_Suspend_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::Suspend",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSession_Suspend_Params_Data* params =
          reinterpret_cast<internal::MediaSession_Suspend_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaSession::SuspendType p_suspend_type{};
      MediaSession_Suspend_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSuspendType(&p_suspend_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSession::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Suspend(
std::move(p_suspend_type));
      return true;
    }
    case internal::kMediaSession_Resume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::Resume",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSession_Resume_Params_Data* params =
          reinterpret_cast<internal::MediaSession_Resume_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaSession::SuspendType p_suspend_type{};
      MediaSession_Resume_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSuspendType(&p_suspend_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSession::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Resume(
std::move(p_suspend_type));
      return true;
    }
    case internal::kMediaSession_AddObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::AddObserver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSession_AddObserver_Params_Data* params =
          reinterpret_cast<internal::MediaSession_AddObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaSessionObserverPtr p_observer{};
      MediaSession_AddObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSession::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddObserver(
std::move(p_observer));
      return true;
    }
    case internal::kMediaSession_PreviousTrack_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::PreviousTrack",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSession_PreviousTrack_Params_Data* params =
          reinterpret_cast<internal::MediaSession_PreviousTrack_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaSession_PreviousTrack_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSession::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PreviousTrack();
      return true;
    }
    case internal::kMediaSession_NextTrack_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::NextTrack",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSession_NextTrack_Params_Data* params =
          reinterpret_cast<internal::MediaSession_NextTrack_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaSession_NextTrack_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSession::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NextTrack();
      return true;
    }
    case internal::kMediaSession_Seek_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::Seek",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSession_Seek_Params_Data* params =
          reinterpret_cast<internal::MediaSession_Seek_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeDelta p_seek_time{};
      MediaSession_Seek_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSeekTime(&p_seek_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSession::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Seek(
std::move(p_seek_time));
      return true;
    }
    case internal::kMediaSession_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::Stop",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSession_Stop_Params_Data* params =
          reinterpret_cast<internal::MediaSession_Stop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaSession::SuspendType p_suspend_type{};
      MediaSession_Stop_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSuspendType(&p_suspend_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSession::Name_, 10, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Stop(
std::move(p_suspend_type));
      return true;
    }
    case internal::kMediaSession_SkipAd_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::SkipAd",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaSession_SkipAd_Params_Data* params =
          reinterpret_cast<internal::MediaSession_SkipAd_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaSession_SkipAd_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSession::Name_, 11, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SkipAd();
      return true;
    }
    case internal::kMediaSession_GetMediaImageBitmap_Name: {
      break;
    }
  }
  return false;
}

// static
bool MediaSessionStubDispatch::AcceptWithResponder(
    MediaSession* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaSession_GetMediaSessionInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::GetMediaSessionInfo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaSession_GetMediaSessionInfo_Params_Data* params =
          reinterpret_cast<
              internal::MediaSession_GetMediaSessionInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaSession_GetMediaSessionInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSession::Name_, 0, false);
        return false;
      }
      MediaSession::GetMediaSessionInfoCallback callback =
          MediaSession_GetMediaSessionInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetMediaSessionInfo(std::move(callback));
      return true;
    }
    case internal::kMediaSession_GetDebugInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::GetDebugInfo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaSession_GetDebugInfo_Params_Data* params =
          reinterpret_cast<
              internal::MediaSession_GetDebugInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaSession_GetDebugInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSession::Name_, 1, false);
        return false;
      }
      MediaSession::GetDebugInfoCallback callback =
          MediaSession_GetDebugInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDebugInfo(std::move(callback));
      return true;
    }
    case internal::kMediaSession_StartDucking_Name: {
      break;
    }
    case internal::kMediaSession_StopDucking_Name: {
      break;
    }
    case internal::kMediaSession_Suspend_Name: {
      break;
    }
    case internal::kMediaSession_Resume_Name: {
      break;
    }
    case internal::kMediaSession_AddObserver_Name: {
      break;
    }
    case internal::kMediaSession_PreviousTrack_Name: {
      break;
    }
    case internal::kMediaSession_NextTrack_Name: {
      break;
    }
    case internal::kMediaSession_Seek_Name: {
      break;
    }
    case internal::kMediaSession_Stop_Name: {
      break;
    }
    case internal::kMediaSession_SkipAd_Name: {
      break;
    }
    case internal::kMediaSession_GetMediaImageBitmap_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MediaSession::GetMediaImageBitmap",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MediaSession_GetMediaImageBitmap_Params_Data* params =
          reinterpret_cast<
              internal::MediaSession_GetMediaImageBitmap_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaImagePtr p_image{};
      int32_t p_minimum_size_px{};
      int32_t p_desired_size_px{};
      MediaSession_GetMediaImageBitmap_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadImage(&p_image))
        success = false;
      p_minimum_size_px = input_data_view.minimum_size_px();
      p_desired_size_px = input_data_view.desired_size_px();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaSession::Name_, 12, false);
        return false;
      }
      MediaSession::GetMediaImageBitmapCallback callback =
          MediaSession_GetMediaImageBitmap_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetMediaImageBitmap(
std::move(p_image), 
std::move(p_minimum_size_px), 
std::move(p_desired_size_px), std::move(callback));
      return true;
    }
  }
  return false;
}

bool MediaSessionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaSession RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaSession_GetMediaSessionInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_GetMediaSessionInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_GetDebugInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_GetDebugInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_StartDucking_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_StartDucking_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_StopDucking_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_StopDucking_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_Suspend_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_Suspend_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_Resume_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_Resume_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_AddObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_AddObserver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_PreviousTrack_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_PreviousTrack_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_NextTrack_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_NextTrack_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_Seek_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_Seek_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_Stop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_Stop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_SkipAd_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_SkipAd_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_GetMediaImageBitmap_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_GetMediaImageBitmap_Params_Data>(
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

bool MediaSessionResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaSession ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMediaSession_GetMediaSessionInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_GetMediaSessionInfo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_GetDebugInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_GetDebugInfo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaSession_GetMediaImageBitmap_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaSession_GetMediaImageBitmap_ResponseParams_Data>(
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
}  // namespace media_session

namespace mojo {


// static
bool StructTraits<::media_session::mojom::blink::MediaImage::DataView, ::media_session::mojom::blink::MediaImagePtr>::Read(
    ::media_session::mojom::blink::MediaImage::DataView input,
    ::media_session::mojom::blink::MediaImagePtr* output) {
  bool success = true;
  ::media_session::mojom::blink::MediaImagePtr result(::media_session::mojom::blink::MediaImage::New());
  
      if (!input.ReadSrc(&result->src))
        success = false;
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadSizes(&result->sizes))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media_session::mojom::blink::MediaMetadata::DataView, ::media_session::mojom::blink::MediaMetadataPtr>::Read(
    ::media_session::mojom::blink::MediaMetadata::DataView input,
    ::media_session::mojom::blink::MediaMetadataPtr* output) {
  bool success = true;
  ::media_session::mojom::blink::MediaMetadataPtr result(::media_session::mojom::blink::MediaMetadata::New());
  
      if (!input.ReadTitle(&result->title))
        success = false;
      if (!input.ReadArtist(&result->artist))
        success = false;
      if (!input.ReadAlbum(&result->album))
        success = false;
      if (!input.ReadSourceTitle(&result->source_title))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media_session::mojom::blink::MediaImageBitmap::DataView, ::media_session::mojom::blink::MediaImageBitmapPtr>::Read(
    ::media_session::mojom::blink::MediaImageBitmap::DataView input,
    ::media_session::mojom::blink::MediaImageBitmapPtr* output) {
  bool success = true;
  ::media_session::mojom::blink::MediaImageBitmapPtr result(::media_session::mojom::blink::MediaImageBitmap::New());
  
      result->width = input.width();
      result->height = input.height();
      if (!input.ReadPixelData(&result->pixel_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media_session::mojom::blink::MediaSessionInfo::DataView, ::media_session::mojom::blink::MediaSessionInfoPtr>::Read(
    ::media_session::mojom::blink::MediaSessionInfo::DataView input,
    ::media_session::mojom::blink::MediaSessionInfoPtr* output) {
  bool success = true;
  ::media_session::mojom::blink::MediaSessionInfoPtr result(::media_session::mojom::blink::MediaSessionInfo::New());
  
      if (!input.ReadState(&result->state))
        success = false;
      result->force_duck = input.force_duck();
      if (!input.ReadPlaybackState(&result->playback_state))
        success = false;
      result->is_controllable = input.is_controllable();
      result->prefer_stop_for_gain_focus_loss = input.prefer_stop_for_gain_focus_loss();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media_session::mojom::blink::MediaSessionDebugInfo::DataView, ::media_session::mojom::blink::MediaSessionDebugInfoPtr>::Read(
    ::media_session::mojom::blink::MediaSessionDebugInfo::DataView input,
    ::media_session::mojom::blink::MediaSessionDebugInfoPtr* output) {
  bool success = true;
  ::media_session::mojom::blink::MediaSessionDebugInfoPtr result(::media_session::mojom::blink::MediaSessionDebugInfo::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadOwner(&result->owner))
        success = false;
      if (!input.ReadState(&result->state))
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