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

#include "media/mojo/interfaces/media_types.mojom-blink.h"

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

#include "media/mojo/interfaces/media_types.mojom-params-data.h"
#include "media/mojo/interfaces/media_types.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/media_types.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_BLINK_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace media {
namespace mojom {
namespace blink {
VideoTransformation::VideoTransformation()
    : rotation(),
      mirrored() {}

VideoTransformation::VideoTransformation(
    VideoRotation rotation_in,
    bool mirrored_in)
    : rotation(std::move(rotation_in)),
      mirrored(std::move(mirrored_in)) {}

VideoTransformation::~VideoTransformation() = default;
size_t VideoTransformation::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->rotation);
  seed = mojo::internal::WTFHash(seed, this->mirrored);
  return seed;
}

bool VideoTransformation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
EncryptionPattern::EncryptionPattern()
    : crypt_byte_block(),
      skip_byte_block() {}

EncryptionPattern::EncryptionPattern(
    uint32_t crypt_byte_block_in,
    uint32_t skip_byte_block_in)
    : crypt_byte_block(std::move(crypt_byte_block_in)),
      skip_byte_block(std::move(skip_byte_block_in)) {}

EncryptionPattern::~EncryptionPattern() = default;
size_t EncryptionPattern::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->crypt_byte_block);
  seed = mojo::internal::WTFHash(seed, this->skip_byte_block);
  return seed;
}

bool EncryptionPattern::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
EncryptionScheme::EncryptionScheme()
    : mode(),
      pattern() {}

EncryptionScheme::EncryptionScheme(
    EncryptionScheme::CipherMode mode_in,
    EncryptionPatternPtr pattern_in)
    : mode(std::move(mode_in)),
      pattern(std::move(pattern_in)) {}

EncryptionScheme::~EncryptionScheme() = default;
size_t EncryptionScheme::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->mode);
  seed = mojo::internal::WTFHash(seed, this->pattern);
  return seed;
}

bool EncryptionScheme::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoColorSpace::VideoColorSpace()
    : primaries(),
      transfer(),
      matrix(),
      range() {}

VideoColorSpace::VideoColorSpace(
    VideoColorSpace::PrimaryID primaries_in,
    VideoColorSpace::TransferID transfer_in,
    VideoColorSpace::MatrixID matrix_in,
    VideoColorSpace::RangeID range_in)
    : primaries(std::move(primaries_in)),
      transfer(std::move(transfer_in)),
      matrix(std::move(matrix_in)),
      range(std::move(range_in)) {}

VideoColorSpace::~VideoColorSpace() = default;
size_t VideoColorSpace::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->primaries);
  seed = mojo::internal::WTFHash(seed, this->transfer);
  seed = mojo::internal::WTFHash(seed, this->matrix);
  seed = mojo::internal::WTFHash(seed, this->range);
  return seed;
}

bool VideoColorSpace::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MasteringMetadata::MasteringMetadata()
    : primary_r(),
      primary_g(),
      primary_b(),
      white_point(),
      luminance_max(),
      luminance_min() {}

MasteringMetadata::MasteringMetadata(
    const ::blink::WebFloatPoint& primary_r_in,
    const ::blink::WebFloatPoint& primary_g_in,
    const ::blink::WebFloatPoint& primary_b_in,
    const ::blink::WebFloatPoint& white_point_in,
    float luminance_max_in,
    float luminance_min_in)
    : primary_r(std::move(primary_r_in)),
      primary_g(std::move(primary_g_in)),
      primary_b(std::move(primary_b_in)),
      white_point(std::move(white_point_in)),
      luminance_max(std::move(luminance_max_in)),
      luminance_min(std::move(luminance_min_in)) {}

MasteringMetadata::~MasteringMetadata() = default;

bool MasteringMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HDRMetadata::HDRMetadata()
    : mastering_metadata(),
      max_content_light_level(),
      max_frame_average_light_level() {}

HDRMetadata::HDRMetadata(
    MasteringMetadataPtr mastering_metadata_in,
    uint32_t max_content_light_level_in,
    uint32_t max_frame_average_light_level_in)
    : mastering_metadata(std::move(mastering_metadata_in)),
      max_content_light_level(std::move(max_content_light_level_in)),
      max_frame_average_light_level(std::move(max_frame_average_light_level_in)) {}

HDRMetadata::~HDRMetadata() = default;

bool HDRMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AudioDecoderConfig::AudioDecoderConfig()
    : codec(),
      sample_format(),
      channel_layout(),
      samples_per_second(),
      extra_data(),
      seek_preroll(),
      codec_delay(),
      encryption_scheme() {}

AudioDecoderConfig::AudioDecoderConfig(
    AudioCodec codec_in,
    SampleFormat sample_format_in,
    ChannelLayout channel_layout_in,
    int32_t samples_per_second_in,
    const WTF::Vector<uint8_t>& extra_data_in,
    base::TimeDelta seek_preroll_in,
    int32_t codec_delay_in,
    EncryptionSchemePtr encryption_scheme_in)
    : codec(std::move(codec_in)),
      sample_format(std::move(sample_format_in)),
      channel_layout(std::move(channel_layout_in)),
      samples_per_second(std::move(samples_per_second_in)),
      extra_data(std::move(extra_data_in)),
      seek_preroll(std::move(seek_preroll_in)),
      codec_delay(std::move(codec_delay_in)),
      encryption_scheme(std::move(encryption_scheme_in)) {}

AudioDecoderConfig::~AudioDecoderConfig() = default;

bool AudioDecoderConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoDecoderConfig::VideoDecoderConfig()
    : codec(),
      profile(),
      format(),
      transformation(),
      coded_size(),
      visible_rect(),
      natural_size(),
      extra_data(),
      encryption_scheme(),
      color_space_info(),
      hdr_metadata() {}

VideoDecoderConfig::VideoDecoderConfig(
    VideoCodec codec_in,
    VideoCodecProfile profile_in,
    VideoPixelFormat format_in,
    VideoTransformationPtr transformation_in,
    const ::blink::WebSize& coded_size_in,
    const ::blink::WebRect& visible_rect_in,
    const ::blink::WebSize& natural_size_in,
    const WTF::Vector<uint8_t>& extra_data_in,
    EncryptionSchemePtr encryption_scheme_in,
    VideoColorSpacePtr color_space_info_in,
    HDRMetadataPtr hdr_metadata_in)
    : codec(std::move(codec_in)),
      profile(std::move(profile_in)),
      format(std::move(format_in)),
      transformation(std::move(transformation_in)),
      coded_size(std::move(coded_size_in)),
      visible_rect(std::move(visible_rect_in)),
      natural_size(std::move(natural_size_in)),
      extra_data(std::move(extra_data_in)),
      encryption_scheme(std::move(encryption_scheme_in)),
      color_space_info(std::move(color_space_info_in)),
      hdr_metadata(std::move(hdr_metadata_in)) {}

VideoDecoderConfig::~VideoDecoderConfig() = default;

bool VideoDecoderConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DecryptConfig::DecryptConfig()
    : encryption_mode(),
      key_id(),
      iv(),
      subsamples(),
      encryption_pattern() {}

DecryptConfig::DecryptConfig(
    EncryptionMode encryption_mode_in,
    const WTF::String& key_id_in,
    const WTF::String& iv_in,
    WTF::Vector<SubsampleEntryPtr> subsamples_in,
    EncryptionPatternPtr encryption_pattern_in)
    : encryption_mode(std::move(encryption_mode_in)),
      key_id(std::move(key_id_in)),
      iv(std::move(iv_in)),
      subsamples(std::move(subsamples_in)),
      encryption_pattern(std::move(encryption_pattern_in)) {}

DecryptConfig::~DecryptConfig() = default;

bool DecryptConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DecoderBuffer::DecoderBuffer()
    : timestamp(),
      duration(),
      is_end_of_stream(),
      data_size(),
      is_key_frame(),
      side_data(),
      decrypt_config(),
      front_discard(),
      back_discard() {}

DecoderBuffer::DecoderBuffer(
    base::TimeDelta timestamp_in,
    base::TimeDelta duration_in,
    bool is_end_of_stream_in,
    uint32_t data_size_in,
    bool is_key_frame_in,
    const WTF::Vector<uint8_t>& side_data_in,
    DecryptConfigPtr decrypt_config_in,
    base::TimeDelta front_discard_in,
    base::TimeDelta back_discard_in)
    : timestamp(std::move(timestamp_in)),
      duration(std::move(duration_in)),
      is_end_of_stream(std::move(is_end_of_stream_in)),
      data_size(std::move(data_size_in)),
      is_key_frame(std::move(is_key_frame_in)),
      side_data(std::move(side_data_in)),
      decrypt_config(std::move(decrypt_config_in)),
      front_discard(std::move(front_discard_in)),
      back_discard(std::move(back_discard_in)) {}

DecoderBuffer::~DecoderBuffer() = default;

bool DecoderBuffer::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AudioBuffer::AudioBuffer()
    : sample_format(),
      channel_layout(),
      channel_count(),
      sample_rate(),
      frame_count(),
      end_of_stream(),
      timestamp(),
      data() {}

AudioBuffer::AudioBuffer(
    SampleFormat sample_format_in,
    ChannelLayout channel_layout_in,
    int32_t channel_count_in,
    int32_t sample_rate_in,
    int32_t frame_count_in,
    bool end_of_stream_in,
    base::TimeDelta timestamp_in,
    const WTF::Vector<uint8_t>& data_in)
    : sample_format(std::move(sample_format_in)),
      channel_layout(std::move(channel_layout_in)),
      channel_count(std::move(channel_count_in)),
      sample_rate(std::move(sample_rate_in)),
      frame_count(std::move(frame_count_in)),
      end_of_stream(std::move(end_of_stream_in)),
      timestamp(std::move(timestamp_in)),
      data(std::move(data_in)) {}

AudioBuffer::~AudioBuffer() = default;

bool AudioBuffer::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoFrame::VideoFrame()
    : format(),
      coded_size(),
      visible_rect(),
      natural_size(),
      timestamp(),
      data(),
      metadata(),
      color_space() {}

VideoFrame::VideoFrame(
    VideoPixelFormat format_in,
    const ::blink::WebSize& coded_size_in,
    const ::blink::WebRect& visible_rect_in,
    const ::blink::WebSize& natural_size_in,
    base::TimeDelta timestamp_in,
    VideoFrameDataPtr data_in,
    ::mojo_base::mojom::blink::DictionaryValuePtr metadata_in,
    ::gfx::mojom::blink::ColorSpacePtr color_space_in)
    : format(std::move(format_in)),
      coded_size(std::move(coded_size_in)),
      visible_rect(std::move(visible_rect_in)),
      natural_size(std::move(natural_size_in)),
      timestamp(std::move(timestamp_in)),
      data(std::move(data_in)),
      metadata(std::move(metadata_in)),
      color_space(std::move(color_space_in)) {}

VideoFrame::~VideoFrame() = default;

bool VideoFrame::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
EosVideoFrameData::EosVideoFrameData() {}

EosVideoFrameData::~EosVideoFrameData() = default;
size_t EosVideoFrameData::Hash(size_t seed) const {
  return seed;
}

bool EosVideoFrameData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SharedBufferVideoFrameData::SharedBufferVideoFrameData()
    : frame_data(),
      frame_data_size(),
      y_stride(),
      u_stride(),
      v_stride(),
      y_offset(),
      u_offset(),
      v_offset() {}

SharedBufferVideoFrameData::SharedBufferVideoFrameData(
    mojo::ScopedSharedBufferHandle frame_data_in,
    uint64_t frame_data_size_in,
    int32_t y_stride_in,
    int32_t u_stride_in,
    int32_t v_stride_in,
    uint64_t y_offset_in,
    uint64_t u_offset_in,
    uint64_t v_offset_in)
    : frame_data(std::move(frame_data_in)),
      frame_data_size(std::move(frame_data_size_in)),
      y_stride(std::move(y_stride_in)),
      u_stride(std::move(u_stride_in)),
      v_stride(std::move(v_stride_in)),
      y_offset(std::move(y_offset_in)),
      u_offset(std::move(u_offset_in)),
      v_offset(std::move(v_offset_in)) {}

SharedBufferVideoFrameData::~SharedBufferVideoFrameData() = default;

bool SharedBufferVideoFrameData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MailboxVideoFrameData::MailboxVideoFrameData()
    : mailbox_holder() {}

MailboxVideoFrameData::MailboxVideoFrameData(
    const WTF::Vector<::gpu::MailboxHolder>& mailbox_holder_in)
    : mailbox_holder(std::move(mailbox_holder_in)) {}

MailboxVideoFrameData::~MailboxVideoFrameData() = default;

bool MailboxVideoFrameData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PipelineStatistics::PipelineStatistics()
    : audio_bytes_decoded(),
      video_bytes_decoded(),
      video_frames_decoded(),
      video_frames_dropped(),
      audio_memory_usage(),
      video_memory_usage() {}

PipelineStatistics::PipelineStatistics(
    uint64_t audio_bytes_decoded_in,
    uint64_t video_bytes_decoded_in,
    uint32_t video_frames_decoded_in,
    uint32_t video_frames_dropped_in,
    int64_t audio_memory_usage_in,
    int64_t video_memory_usage_in)
    : audio_bytes_decoded(std::move(audio_bytes_decoded_in)),
      video_bytes_decoded(std::move(video_bytes_decoded_in)),
      video_frames_decoded(std::move(video_frames_decoded_in)),
      video_frames_dropped(std::move(video_frames_dropped_in)),
      audio_memory_usage(std::move(audio_memory_usage_in)),
      video_memory_usage(std::move(video_memory_usage_in)) {}

PipelineStatistics::~PipelineStatistics() = default;
size_t PipelineStatistics::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->audio_bytes_decoded);
  seed = mojo::internal::WTFHash(seed, this->video_bytes_decoded);
  seed = mojo::internal::WTFHash(seed, this->video_frames_decoded);
  seed = mojo::internal::WTFHash(seed, this->video_frames_dropped);
  seed = mojo::internal::WTFHash(seed, this->audio_memory_usage);
  seed = mojo::internal::WTFHash(seed, this->video_memory_usage);
  return seed;
}

bool PipelineStatistics::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PredictionFeatures::PredictionFeatures()
    : profile(),
      video_size(),
      frames_per_sec(0),
      key_system(),
      use_hw_secure_codecs(false) {}

PredictionFeatures::PredictionFeatures(
    VideoCodecProfile profile_in,
    const ::blink::WebSize& video_size_in,
    int32_t frames_per_sec_in,
    const WTF::String& key_system_in,
    bool use_hw_secure_codecs_in)
    : profile(std::move(profile_in)),
      video_size(std::move(video_size_in)),
      frames_per_sec(std::move(frames_per_sec_in)),
      key_system(std::move(key_system_in)),
      use_hw_secure_codecs(std::move(use_hw_secure_codecs_in)) {}

PredictionFeatures::~PredictionFeatures() = default;

bool PredictionFeatures::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PredictionTargets::PredictionTargets()
    : frames_decoded(0U),
      frames_dropped(0U),
      frames_power_efficient(0U) {}

PredictionTargets::PredictionTargets(
    uint32_t frames_decoded_in,
    uint32_t frames_dropped_in,
    uint32_t frames_power_efficient_in)
    : frames_decoded(std::move(frames_decoded_in)),
      frames_dropped(std::move(frames_dropped_in)),
      frames_power_efficient(std::move(frames_power_efficient_in)) {}

PredictionTargets::~PredictionTargets() = default;
size_t PredictionTargets::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->frames_decoded);
  seed = mojo::internal::WTFHash(seed, this->frames_dropped);
  seed = mojo::internal::WTFHash(seed, this->frames_power_efficient);
  return seed;
}

bool PredictionTargets::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoFrameData::VideoFrameData() : tag_(Tag::EOS_DATA) {
  data_.eos_data = new EosVideoFrameDataPtr;
}

VideoFrameData::~VideoFrameData() {
  DestroyActive();
}


void VideoFrameData::set_eos_data(
    EosVideoFrameDataPtr eos_data) {
  if (tag_ == Tag::EOS_DATA) {
    *(data_.eos_data) = std::move(eos_data);
  } else {
    DestroyActive();
    tag_ = Tag::EOS_DATA;
    data_.eos_data = new EosVideoFrameDataPtr(
        std::move(eos_data));
  }
}
void VideoFrameData::set_shared_buffer_data(
    SharedBufferVideoFrameDataPtr shared_buffer_data) {
  if (tag_ == Tag::SHARED_BUFFER_DATA) {
    *(data_.shared_buffer_data) = std::move(shared_buffer_data);
  } else {
    DestroyActive();
    tag_ = Tag::SHARED_BUFFER_DATA;
    data_.shared_buffer_data = new SharedBufferVideoFrameDataPtr(
        std::move(shared_buffer_data));
  }
}
void VideoFrameData::set_mailbox_data(
    MailboxVideoFrameDataPtr mailbox_data) {
  if (tag_ == Tag::MAILBOX_DATA) {
    *(data_.mailbox_data) = std::move(mailbox_data);
  } else {
    DestroyActive();
    tag_ = Tag::MAILBOX_DATA;
    data_.mailbox_data = new MailboxVideoFrameDataPtr(
        std::move(mailbox_data));
  }
}

void VideoFrameData::DestroyActive() {
  switch (tag_) {

    case Tag::EOS_DATA:

      delete data_.eos_data;
      break;
    case Tag::SHARED_BUFFER_DATA:

      delete data_.shared_buffer_data;
      break;
    case Tag::MAILBOX_DATA:

      delete data_.mailbox_data;
      break;
  }
}

bool VideoFrameData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::blink::VideoTransformation::DataView, ::media::mojom::blink::VideoTransformationPtr>::Read(
    ::media::mojom::blink::VideoTransformation::DataView input,
    ::media::mojom::blink::VideoTransformationPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoTransformationPtr result(::media::mojom::blink::VideoTransformation::New());
  
      if (!input.ReadRotation(&result->rotation))
        success = false;
      result->mirrored = input.mirrored();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::EncryptionPattern::DataView, ::media::mojom::blink::EncryptionPatternPtr>::Read(
    ::media::mojom::blink::EncryptionPattern::DataView input,
    ::media::mojom::blink::EncryptionPatternPtr* output) {
  bool success = true;
  ::media::mojom::blink::EncryptionPatternPtr result(::media::mojom::blink::EncryptionPattern::New());
  
      result->crypt_byte_block = input.crypt_byte_block();
      result->skip_byte_block = input.skip_byte_block();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::EncryptionScheme::DataView, ::media::mojom::blink::EncryptionSchemePtr>::Read(
    ::media::mojom::blink::EncryptionScheme::DataView input,
    ::media::mojom::blink::EncryptionSchemePtr* output) {
  bool success = true;
  ::media::mojom::blink::EncryptionSchemePtr result(::media::mojom::blink::EncryptionScheme::New());
  
      if (!input.ReadMode(&result->mode))
        success = false;
      if (!input.ReadPattern(&result->pattern))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::VideoColorSpace::DataView, ::media::mojom::blink::VideoColorSpacePtr>::Read(
    ::media::mojom::blink::VideoColorSpace::DataView input,
    ::media::mojom::blink::VideoColorSpacePtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoColorSpacePtr result(::media::mojom::blink::VideoColorSpace::New());
  
      if (!input.ReadPrimaries(&result->primaries))
        success = false;
      if (!input.ReadTransfer(&result->transfer))
        success = false;
      if (!input.ReadMatrix(&result->matrix))
        success = false;
      if (!input.ReadRange(&result->range))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::MasteringMetadata::DataView, ::media::mojom::blink::MasteringMetadataPtr>::Read(
    ::media::mojom::blink::MasteringMetadata::DataView input,
    ::media::mojom::blink::MasteringMetadataPtr* output) {
  bool success = true;
  ::media::mojom::blink::MasteringMetadataPtr result(::media::mojom::blink::MasteringMetadata::New());
  
      if (!input.ReadPrimaryR(&result->primary_r))
        success = false;
      if (!input.ReadPrimaryG(&result->primary_g))
        success = false;
      if (!input.ReadPrimaryB(&result->primary_b))
        success = false;
      if (!input.ReadWhitePoint(&result->white_point))
        success = false;
      result->luminance_max = input.luminance_max();
      result->luminance_min = input.luminance_min();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::HDRMetadata::DataView, ::media::mojom::blink::HDRMetadataPtr>::Read(
    ::media::mojom::blink::HDRMetadata::DataView input,
    ::media::mojom::blink::HDRMetadataPtr* output) {
  bool success = true;
  ::media::mojom::blink::HDRMetadataPtr result(::media::mojom::blink::HDRMetadata::New());
  
      if (!input.ReadMasteringMetadata(&result->mastering_metadata))
        success = false;
      result->max_content_light_level = input.max_content_light_level();
      result->max_frame_average_light_level = input.max_frame_average_light_level();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::AudioDecoderConfig::DataView, ::media::mojom::blink::AudioDecoderConfigPtr>::Read(
    ::media::mojom::blink::AudioDecoderConfig::DataView input,
    ::media::mojom::blink::AudioDecoderConfigPtr* output) {
  bool success = true;
  ::media::mojom::blink::AudioDecoderConfigPtr result(::media::mojom::blink::AudioDecoderConfig::New());
  
      if (!input.ReadCodec(&result->codec))
        success = false;
      if (!input.ReadSampleFormat(&result->sample_format))
        success = false;
      if (!input.ReadChannelLayout(&result->channel_layout))
        success = false;
      result->samples_per_second = input.samples_per_second();
      if (!input.ReadExtraData(&result->extra_data))
        success = false;
      if (!input.ReadSeekPreroll(&result->seek_preroll))
        success = false;
      result->codec_delay = input.codec_delay();
      if (!input.ReadEncryptionScheme(&result->encryption_scheme))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::VideoDecoderConfig::DataView, ::media::mojom::blink::VideoDecoderConfigPtr>::Read(
    ::media::mojom::blink::VideoDecoderConfig::DataView input,
    ::media::mojom::blink::VideoDecoderConfigPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoDecoderConfigPtr result(::media::mojom::blink::VideoDecoderConfig::New());
  
      if (!input.ReadCodec(&result->codec))
        success = false;
      if (!input.ReadProfile(&result->profile))
        success = false;
      if (!input.ReadFormat(&result->format))
        success = false;
      if (!input.ReadTransformation(&result->transformation))
        success = false;
      if (!input.ReadCodedSize(&result->coded_size))
        success = false;
      if (!input.ReadVisibleRect(&result->visible_rect))
        success = false;
      if (!input.ReadNaturalSize(&result->natural_size))
        success = false;
      if (!input.ReadExtraData(&result->extra_data))
        success = false;
      if (!input.ReadEncryptionScheme(&result->encryption_scheme))
        success = false;
      if (!input.ReadColorSpaceInfo(&result->color_space_info))
        success = false;
      if (!input.ReadHdrMetadata(&result->hdr_metadata))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::DecryptConfig::DataView, ::media::mojom::blink::DecryptConfigPtr>::Read(
    ::media::mojom::blink::DecryptConfig::DataView input,
    ::media::mojom::blink::DecryptConfigPtr* output) {
  bool success = true;
  ::media::mojom::blink::DecryptConfigPtr result(::media::mojom::blink::DecryptConfig::New());
  
      if (!input.ReadEncryptionMode(&result->encryption_mode))
        success = false;
      if (!input.ReadKeyId(&result->key_id))
        success = false;
      if (!input.ReadIv(&result->iv))
        success = false;
      if (!input.ReadSubsamples(&result->subsamples))
        success = false;
      if (!input.ReadEncryptionPattern(&result->encryption_pattern))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::DecoderBuffer::DataView, ::media::mojom::blink::DecoderBufferPtr>::Read(
    ::media::mojom::blink::DecoderBuffer::DataView input,
    ::media::mojom::blink::DecoderBufferPtr* output) {
  bool success = true;
  ::media::mojom::blink::DecoderBufferPtr result(::media::mojom::blink::DecoderBuffer::New());
  
      if (!input.ReadTimestamp(&result->timestamp))
        success = false;
      if (!input.ReadDuration(&result->duration))
        success = false;
      result->is_end_of_stream = input.is_end_of_stream();
      result->data_size = input.data_size();
      result->is_key_frame = input.is_key_frame();
      if (!input.ReadSideData(&result->side_data))
        success = false;
      if (!input.ReadDecryptConfig(&result->decrypt_config))
        success = false;
      if (!input.ReadFrontDiscard(&result->front_discard))
        success = false;
      if (!input.ReadBackDiscard(&result->back_discard))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::AudioBuffer::DataView, ::media::mojom::blink::AudioBufferPtr>::Read(
    ::media::mojom::blink::AudioBuffer::DataView input,
    ::media::mojom::blink::AudioBufferPtr* output) {
  bool success = true;
  ::media::mojom::blink::AudioBufferPtr result(::media::mojom::blink::AudioBuffer::New());
  
      if (!input.ReadSampleFormat(&result->sample_format))
        success = false;
      if (!input.ReadChannelLayout(&result->channel_layout))
        success = false;
      result->channel_count = input.channel_count();
      result->sample_rate = input.sample_rate();
      result->frame_count = input.frame_count();
      result->end_of_stream = input.end_of_stream();
      if (!input.ReadTimestamp(&result->timestamp))
        success = false;
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::VideoFrame::DataView, ::media::mojom::blink::VideoFramePtr>::Read(
    ::media::mojom::blink::VideoFrame::DataView input,
    ::media::mojom::blink::VideoFramePtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoFramePtr result(::media::mojom::blink::VideoFrame::New());
  
      if (!input.ReadFormat(&result->format))
        success = false;
      if (!input.ReadCodedSize(&result->coded_size))
        success = false;
      if (!input.ReadVisibleRect(&result->visible_rect))
        success = false;
      if (!input.ReadNaturalSize(&result->natural_size))
        success = false;
      if (!input.ReadTimestamp(&result->timestamp))
        success = false;
      if (!input.ReadData(&result->data))
        success = false;
      if (!input.ReadMetadata(&result->metadata))
        success = false;
      if (!input.ReadColorSpace(&result->color_space))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::EosVideoFrameData::DataView, ::media::mojom::blink::EosVideoFrameDataPtr>::Read(
    ::media::mojom::blink::EosVideoFrameData::DataView input,
    ::media::mojom::blink::EosVideoFrameDataPtr* output) {
  bool success = true;
  ::media::mojom::blink::EosVideoFrameDataPtr result(::media::mojom::blink::EosVideoFrameData::New());
  
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::SharedBufferVideoFrameData::DataView, ::media::mojom::blink::SharedBufferVideoFrameDataPtr>::Read(
    ::media::mojom::blink::SharedBufferVideoFrameData::DataView input,
    ::media::mojom::blink::SharedBufferVideoFrameDataPtr* output) {
  bool success = true;
  ::media::mojom::blink::SharedBufferVideoFrameDataPtr result(::media::mojom::blink::SharedBufferVideoFrameData::New());
  
      result->frame_data = input.TakeFrameData();
      result->frame_data_size = input.frame_data_size();
      result->y_stride = input.y_stride();
      result->u_stride = input.u_stride();
      result->v_stride = input.v_stride();
      result->y_offset = input.y_offset();
      result->u_offset = input.u_offset();
      result->v_offset = input.v_offset();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::MailboxVideoFrameData::DataView, ::media::mojom::blink::MailboxVideoFrameDataPtr>::Read(
    ::media::mojom::blink::MailboxVideoFrameData::DataView input,
    ::media::mojom::blink::MailboxVideoFrameDataPtr* output) {
  bool success = true;
  ::media::mojom::blink::MailboxVideoFrameDataPtr result(::media::mojom::blink::MailboxVideoFrameData::New());
  
      if (!input.ReadMailboxHolder(&result->mailbox_holder))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::PipelineStatistics::DataView, ::media::mojom::blink::PipelineStatisticsPtr>::Read(
    ::media::mojom::blink::PipelineStatistics::DataView input,
    ::media::mojom::blink::PipelineStatisticsPtr* output) {
  bool success = true;
  ::media::mojom::blink::PipelineStatisticsPtr result(::media::mojom::blink::PipelineStatistics::New());
  
      result->audio_bytes_decoded = input.audio_bytes_decoded();
      result->video_bytes_decoded = input.video_bytes_decoded();
      result->video_frames_decoded = input.video_frames_decoded();
      result->video_frames_dropped = input.video_frames_dropped();
      result->audio_memory_usage = input.audio_memory_usage();
      result->video_memory_usage = input.video_memory_usage();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::PredictionFeatures::DataView, ::media::mojom::blink::PredictionFeaturesPtr>::Read(
    ::media::mojom::blink::PredictionFeatures::DataView input,
    ::media::mojom::blink::PredictionFeaturesPtr* output) {
  bool success = true;
  ::media::mojom::blink::PredictionFeaturesPtr result(::media::mojom::blink::PredictionFeatures::New());
  
      if (!input.ReadProfile(&result->profile))
        success = false;
      if (!input.ReadVideoSize(&result->video_size))
        success = false;
      result->frames_per_sec = input.frames_per_sec();
      if (!input.ReadKeySystem(&result->key_system))
        success = false;
      result->use_hw_secure_codecs = input.use_hw_secure_codecs();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::PredictionTargets::DataView, ::media::mojom::blink::PredictionTargetsPtr>::Read(
    ::media::mojom::blink::PredictionTargets::DataView input,
    ::media::mojom::blink::PredictionTargetsPtr* output) {
  bool success = true;
  ::media::mojom::blink::PredictionTargetsPtr result(::media::mojom::blink::PredictionTargets::New());
  
      result->frames_decoded = input.frames_decoded();
      result->frames_dropped = input.frames_dropped();
      result->frames_power_efficient = input.frames_power_efficient();
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::media::mojom::blink::VideoFrameData::DataView, ::media::mojom::blink::VideoFrameDataPtr>::Read(
    ::media::mojom::blink::VideoFrameData::DataView input,
    ::media::mojom::blink::VideoFrameDataPtr* output) {
  using UnionType = ::media::mojom::blink::VideoFrameData;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::EOS_DATA: {
      ::media::mojom::blink::EosVideoFrameDataPtr result_eos_data;
      if (!input.ReadEosData(&result_eos_data))
        return false;

      *output = UnionType::NewEosData(
          std::move(result_eos_data));
      break;
    }
    case Tag::SHARED_BUFFER_DATA: {
      ::media::mojom::blink::SharedBufferVideoFrameDataPtr result_shared_buffer_data;
      if (!input.ReadSharedBufferData(&result_shared_buffer_data))
        return false;

      *output = UnionType::NewSharedBufferData(
          std::move(result_shared_buffer_data));
      break;
    }
    case Tag::MAILBOX_DATA: {
      ::media::mojom::blink::MailboxVideoFrameDataPtr result_mailbox_data;
      if (!input.ReadMailboxData(&result_mailbox_data))
        return false;

      *output = UnionType::NewMailboxData(
          std::move(result_mailbox_data));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif