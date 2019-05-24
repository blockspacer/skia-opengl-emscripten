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

#include "media/mojo/interfaces/watch_time_recorder.mojom-blink.h"

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

#include "media/mojo/interfaces/watch_time_recorder.mojom-params-data.h"
#include "media/mojo/interfaces/watch_time_recorder.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/watch_time_recorder.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace media {
namespace mojom {
namespace blink {
PlaybackProperties::PlaybackProperties()
    : has_audio(),
      has_video(),
      is_background(),
      is_muted(),
      is_mse(),
      is_eme(),
      is_embedded_media_experience() {}

PlaybackProperties::PlaybackProperties(
    bool has_audio_in,
    bool has_video_in,
    bool is_background_in,
    bool is_muted_in,
    bool is_mse_in,
    bool is_eme_in,
    bool is_embedded_media_experience_in)
    : has_audio(std::move(has_audio_in)),
      has_video(std::move(has_video_in)),
      is_background(std::move(is_background_in)),
      is_muted(std::move(is_muted_in)),
      is_mse(std::move(is_mse_in)),
      is_eme(std::move(is_eme_in)),
      is_embedded_media_experience(std::move(is_embedded_media_experience_in)) {}

PlaybackProperties::~PlaybackProperties() = default;
size_t PlaybackProperties::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->has_audio);
  seed = mojo::internal::WTFHash(seed, this->has_video);
  seed = mojo::internal::WTFHash(seed, this->is_background);
  seed = mojo::internal::WTFHash(seed, this->is_muted);
  seed = mojo::internal::WTFHash(seed, this->is_mse);
  seed = mojo::internal::WTFHash(seed, this->is_eme);
  seed = mojo::internal::WTFHash(seed, this->is_embedded_media_experience);
  return seed;
}

bool PlaybackProperties::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SecondaryPlaybackProperties::SecondaryPlaybackProperties()
    : audio_codec(),
      video_codec(),
      audio_decoder_name(),
      video_decoder_name(),
      audio_encryption_scheme(),
      video_encryption_scheme(),
      natural_size() {}

SecondaryPlaybackProperties::SecondaryPlaybackProperties(
    ::media::mojom::blink::AudioCodec audio_codec_in,
    ::media::mojom::blink::VideoCodec video_codec_in,
    const WTF::String& audio_decoder_name_in,
    const WTF::String& video_decoder_name_in,
    ::media::mojom::blink::EncryptionMode audio_encryption_scheme_in,
    ::media::mojom::blink::EncryptionMode video_encryption_scheme_in,
    const ::blink::WebSize& natural_size_in)
    : audio_codec(std::move(audio_codec_in)),
      video_codec(std::move(video_codec_in)),
      audio_decoder_name(std::move(audio_decoder_name_in)),
      video_decoder_name(std::move(video_decoder_name_in)),
      audio_encryption_scheme(std::move(audio_encryption_scheme_in)),
      video_encryption_scheme(std::move(video_encryption_scheme_in)),
      natural_size(std::move(natural_size_in)) {}

SecondaryPlaybackProperties::~SecondaryPlaybackProperties() = default;

bool SecondaryPlaybackProperties::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char WatchTimeRecorder::Name_[] = "media.mojom.WatchTimeRecorder";

WatchTimeRecorderProxy::WatchTimeRecorderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WatchTimeRecorderProxy::RecordWatchTime(
    ::media::mojom::blink::WatchTimeKey in_key, base::TimeDelta in_watch_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::RecordWatchTime");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_RecordWatchTime_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_RecordWatchTime_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::WatchTimeKey>(
      in_key, &params->key);
  typename decltype(params->watch_time)::BaseType::BufferWriter
      watch_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_watch_time, buffer, &watch_time_writer, &serialization_context);
  params->watch_time.Set(
      watch_time_writer.is_null() ? nullptr : watch_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->watch_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null watch_time in WatchTimeRecorder.RecordWatchTime request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WatchTimeRecorder::Name_);
  message.set_method_name("RecordWatchTime");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WatchTimeRecorderProxy::FinalizeWatchTime(
    const WTF::Vector<::media::mojom::blink::WatchTimeKey>& in_watch_time_keys) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::FinalizeWatchTime");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_FinalizeWatchTime_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_FinalizeWatchTime_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->watch_time_keys)::BaseType::BufferWriter
      watch_time_keys_writer;
  const mojo::internal::ContainerValidateParams watch_time_keys_validate_params(
      0, ::media::mojom::internal::WatchTimeKey_Data::Validate);
  mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::WatchTimeKey>>(
      in_watch_time_keys, buffer, &watch_time_keys_writer, &watch_time_keys_validate_params,
      &serialization_context);
  params->watch_time_keys.Set(
      watch_time_keys_writer.is_null() ? nullptr : watch_time_keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->watch_time_keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null watch_time_keys in WatchTimeRecorder.FinalizeWatchTime request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WatchTimeRecorder::Name_);
  message.set_method_name("FinalizeWatchTime");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WatchTimeRecorderProxy::OnError(
    ::media::mojom::blink::PipelineStatus in_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::OnError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_OnError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_OnError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::PipelineStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WatchTimeRecorder::Name_);
  message.set_method_name("OnError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WatchTimeRecorderProxy::UpdateSecondaryProperties(
    SecondaryPlaybackPropertiesPtr in_secondary_properties) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::UpdateSecondaryProperties");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_UpdateSecondaryProperties_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_UpdateSecondaryProperties_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->secondary_properties)::BaseType::BufferWriter
      secondary_properties_writer;
  mojo::internal::Serialize<::media::mojom::SecondaryPlaybackPropertiesDataView>(
      in_secondary_properties, buffer, &secondary_properties_writer, &serialization_context);
  params->secondary_properties.Set(
      secondary_properties_writer.is_null() ? nullptr : secondary_properties_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->secondary_properties.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null secondary_properties in WatchTimeRecorder.UpdateSecondaryProperties request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WatchTimeRecorder::Name_);
  message.set_method_name("UpdateSecondaryProperties");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WatchTimeRecorderProxy::SetAutoplayInitiated(
    bool in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::SetAutoplayInitiated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_SetAutoplayInitiated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_SetAutoplayInitiated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = in_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WatchTimeRecorder::Name_);
  message.set_method_name("SetAutoplayInitiated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WatchTimeRecorderProxy::OnDurationChanged(
    base::TimeDelta in_duration) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::OnDurationChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_OnDurationChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_OnDurationChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->duration)::BaseType::BufferWriter
      duration_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_duration, buffer, &duration_writer, &serialization_context);
  params->duration.Set(
      duration_writer.is_null() ? nullptr : duration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->duration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null duration in WatchTimeRecorder.OnDurationChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WatchTimeRecorder::Name_);
  message.set_method_name("OnDurationChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WatchTimeRecorderProxy::UpdateUnderflowCount(
    int32_t in_count) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::UpdateUnderflowCount");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_UpdateUnderflowCount_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_UpdateUnderflowCount_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->count = in_count;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WatchTimeRecorder::Name_);
  message.set_method_name("UpdateUnderflowCount");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WatchTimeRecorderStubDispatch::Accept(
    WatchTimeRecorder* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWatchTimeRecorder_RecordWatchTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::RecordWatchTime",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_RecordWatchTime_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_RecordWatchTime_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::WatchTimeKey p_key{};
      base::TimeDelta p_watch_time{};
      WatchTimeRecorder_RecordWatchTime_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadWatchTime(&p_watch_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WatchTimeRecorder::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RecordWatchTime(
std::move(p_key), 
std::move(p_watch_time));
      return true;
    }
    case internal::kWatchTimeRecorder_FinalizeWatchTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::FinalizeWatchTime",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_FinalizeWatchTime_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_FinalizeWatchTime_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<::media::mojom::blink::WatchTimeKey> p_watch_time_keys{};
      WatchTimeRecorder_FinalizeWatchTime_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadWatchTimeKeys(&p_watch_time_keys))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WatchTimeRecorder::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->FinalizeWatchTime(
std::move(p_watch_time_keys));
      return true;
    }
    case internal::kWatchTimeRecorder_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::OnError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_OnError_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_OnError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::PipelineStatus p_status{};
      WatchTimeRecorder_OnError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStatus(&p_status))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WatchTimeRecorder::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnError(
std::move(p_status));
      return true;
    }
    case internal::kWatchTimeRecorder_UpdateSecondaryProperties_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::UpdateSecondaryProperties",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_UpdateSecondaryProperties_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_UpdateSecondaryProperties_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SecondaryPlaybackPropertiesPtr p_secondary_properties{};
      WatchTimeRecorder_UpdateSecondaryProperties_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSecondaryProperties(&p_secondary_properties))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WatchTimeRecorder::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateSecondaryProperties(
std::move(p_secondary_properties));
      return true;
    }
    case internal::kWatchTimeRecorder_SetAutoplayInitiated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::SetAutoplayInitiated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_SetAutoplayInitiated_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_SetAutoplayInitiated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_value{};
      WatchTimeRecorder_SetAutoplayInitiated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WatchTimeRecorder::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetAutoplayInitiated(
std::move(p_value));
      return true;
    }
    case internal::kWatchTimeRecorder_OnDurationChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::OnDurationChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_OnDurationChanged_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_OnDurationChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeDelta p_duration{};
      WatchTimeRecorder_OnDurationChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDuration(&p_duration))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WatchTimeRecorder::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDurationChanged(
std::move(p_duration));
      return true;
    }
    case internal::kWatchTimeRecorder_UpdateUnderflowCount_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WatchTimeRecorder::UpdateUnderflowCount",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_UpdateUnderflowCount_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_UpdateUnderflowCount_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_count{};
      WatchTimeRecorder_UpdateUnderflowCount_ParamsDataView input_data_view(params, &serialization_context);
      
      p_count = input_data_view.count();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WatchTimeRecorder::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateUnderflowCount(
std::move(p_count));
      return true;
    }
  }
  return false;
}

// static
bool WatchTimeRecorderStubDispatch::AcceptWithResponder(
    WatchTimeRecorder* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWatchTimeRecorder_RecordWatchTime_Name: {
      break;
    }
    case internal::kWatchTimeRecorder_FinalizeWatchTime_Name: {
      break;
    }
    case internal::kWatchTimeRecorder_OnError_Name: {
      break;
    }
    case internal::kWatchTimeRecorder_UpdateSecondaryProperties_Name: {
      break;
    }
    case internal::kWatchTimeRecorder_SetAutoplayInitiated_Name: {
      break;
    }
    case internal::kWatchTimeRecorder_OnDurationChanged_Name: {
      break;
    }
    case internal::kWatchTimeRecorder_UpdateUnderflowCount_Name: {
      break;
    }
  }
  return false;
}

bool WatchTimeRecorderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WatchTimeRecorder RequestValidator");

  switch (message->header()->name) {
    case internal::kWatchTimeRecorder_RecordWatchTime_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_RecordWatchTime_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWatchTimeRecorder_FinalizeWatchTime_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_FinalizeWatchTime_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWatchTimeRecorder_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_OnError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWatchTimeRecorder_UpdateSecondaryProperties_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_UpdateSecondaryProperties_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWatchTimeRecorder_SetAutoplayInitiated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_SetAutoplayInitiated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWatchTimeRecorder_OnDurationChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_OnDurationChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWatchTimeRecorder_UpdateUnderflowCount_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_UpdateUnderflowCount_Params_Data>(
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
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::blink::PlaybackProperties::DataView, ::media::mojom::blink::PlaybackPropertiesPtr>::Read(
    ::media::mojom::blink::PlaybackProperties::DataView input,
    ::media::mojom::blink::PlaybackPropertiesPtr* output) {
  bool success = true;
  ::media::mojom::blink::PlaybackPropertiesPtr result(::media::mojom::blink::PlaybackProperties::New());
  
      result->has_audio = input.has_audio();
      result->has_video = input.has_video();
      result->is_background = input.is_background();
      result->is_muted = input.is_muted();
      result->is_mse = input.is_mse();
      result->is_eme = input.is_eme();
      result->is_embedded_media_experience = input.is_embedded_media_experience();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::SecondaryPlaybackProperties::DataView, ::media::mojom::blink::SecondaryPlaybackPropertiesPtr>::Read(
    ::media::mojom::blink::SecondaryPlaybackProperties::DataView input,
    ::media::mojom::blink::SecondaryPlaybackPropertiesPtr* output) {
  bool success = true;
  ::media::mojom::blink::SecondaryPlaybackPropertiesPtr result(::media::mojom::blink::SecondaryPlaybackProperties::New());
  
      if (!input.ReadAudioCodec(&result->audio_codec))
        success = false;
      if (!input.ReadVideoCodec(&result->video_codec))
        success = false;
      if (!input.ReadAudioDecoderName(&result->audio_decoder_name))
        success = false;
      if (!input.ReadVideoDecoderName(&result->video_decoder_name))
        success = false;
      if (!input.ReadAudioEncryptionScheme(&result->audio_encryption_scheme))
        success = false;
      if (!input.ReadVideoEncryptionScheme(&result->video_encryption_scheme))
        success = false;
      if (!input.ReadNaturalSize(&result->natural_size))
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