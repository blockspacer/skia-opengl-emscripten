// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/color_space.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {
using MediaLogEventDataView = mojo::native::NativeStructDataView;

class VideoTransformationDataView;

class EncryptionPatternDataView;

class EncryptionSchemeDataView;

class VideoColorSpaceDataView;

class MasteringMetadataDataView;

class HDRMetadataDataView;

class AudioDecoderConfigDataView;

class VideoDecoderConfigDataView;

using SubsampleEntryDataView = mojo::native::NativeStructDataView;

class DecryptConfigDataView;

class DecoderBufferDataView;

class AudioBufferDataView;

class VideoFrameDataView;

class EosVideoFrameDataDataView;

class SharedBufferVideoFrameDataDataView;

class MailboxVideoFrameDataDataView;

class PipelineStatisticsDataView;

class PredictionFeaturesDataView;

class PredictionTargetsDataView;

class VideoFrameDataDataView;


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::VideoTransformationDataView> {
  using Data = ::media::mojom::internal::VideoTransformation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::EncryptionPatternDataView> {
  using Data = ::media::mojom::internal::EncryptionPattern_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::EncryptionSchemeDataView> {
  using Data = ::media::mojom::internal::EncryptionScheme_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoColorSpaceDataView> {
  using Data = ::media::mojom::internal::VideoColorSpace_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::MasteringMetadataDataView> {
  using Data = ::media::mojom::internal::MasteringMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::HDRMetadataDataView> {
  using Data = ::media::mojom::internal::HDRMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::AudioDecoderConfigDataView> {
  using Data = ::media::mojom::internal::AudioDecoderConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoDecoderConfigDataView> {
  using Data = ::media::mojom::internal::VideoDecoderConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::DecryptConfigDataView> {
  using Data = ::media::mojom::internal::DecryptConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::DecoderBufferDataView> {
  using Data = ::media::mojom::internal::DecoderBuffer_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::AudioBufferDataView> {
  using Data = ::media::mojom::internal::AudioBuffer_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoFrameDataView> {
  using Data = ::media::mojom::internal::VideoFrame_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::EosVideoFrameDataDataView> {
  using Data = ::media::mojom::internal::EosVideoFrameData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::SharedBufferVideoFrameDataDataView> {
  using Data = ::media::mojom::internal::SharedBufferVideoFrameData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::MailboxVideoFrameDataDataView> {
  using Data = ::media::mojom::internal::MailboxVideoFrameData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::PipelineStatisticsDataView> {
  using Data = ::media::mojom::internal::PipelineStatistics_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::PredictionFeaturesDataView> {
  using Data = ::media::mojom::internal::PredictionFeatures_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::PredictionTargetsDataView> {
  using Data = ::media::mojom::internal::PredictionTargets_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoFrameDataDataView> {
  using Data = ::media::mojom::internal::VideoFrameData_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
using AudioCodec = mojo::NativeEnum;
using BufferingState = mojo::NativeEnum;
using ChannelLayout = mojo::NativeEnum;
using ColorSpace = mojo::NativeEnum;
using DecodeStatus = mojo::NativeEnum;
using OutputDeviceStatus = mojo::NativeEnum;
using PipelineStatus = mojo::NativeEnum;
using SampleFormat = mojo::NativeEnum;
using VideoCodec = mojo::NativeEnum;
using VideoCodecProfile = mojo::NativeEnum;
using VideoPixelFormat = mojo::NativeEnum;
using VideoRotation = mojo::NativeEnum;
using WaitingReason = mojo::NativeEnum;
using WatchTimeKey = mojo::NativeEnum;
using EncryptionMode = mojo::NativeEnum;
using MediaContainerName = mojo::NativeEnum;
using MediaStatusState = mojo::NativeEnum;
using EncryptionScheme_CipherMode = mojo::NativeEnum;
using VideoColorSpace_PrimaryID = mojo::NativeEnum;
using VideoColorSpace_TransferID = mojo::NativeEnum;
using VideoColorSpace_MatrixID = mojo::NativeEnum;
using VideoColorSpace_RangeID = mojo::NativeEnum;
class VideoTransformationDataView {
 public:
  VideoTransformationDataView() {}

  VideoTransformationDataView(
      internal::VideoTransformation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRotation(UserType* output) const {
    auto data_value = data_->rotation;
    return mojo::internal::Deserialize<::media::mojom::VideoRotation>(
        data_value, output);
  }

  VideoRotation rotation() const {
    return static_cast<VideoRotation>(data_->rotation);
  }
  bool mirrored() const {
    return data_->mirrored;
  }
 private:
  internal::VideoTransformation_Data* data_ = nullptr;
};

class EncryptionPatternDataView {
 public:
  EncryptionPatternDataView() {}

  EncryptionPatternDataView(
      internal::EncryptionPattern_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t crypt_byte_block() const {
    return data_->crypt_byte_block;
  }
  uint32_t skip_byte_block() const {
    return data_->skip_byte_block;
  }
 private:
  internal::EncryptionPattern_Data* data_ = nullptr;
};

class EncryptionSchemeDataView {
 public:
  EncryptionSchemeDataView() {}

  EncryptionSchemeDataView(
      internal::EncryptionScheme_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::media::mojom::EncryptionScheme_CipherMode>(
        data_value, output);
  }

  EncryptionScheme_CipherMode mode() const {
    return static_cast<EncryptionScheme_CipherMode>(data_->mode);
  }
  inline void GetPatternDataView(
      EncryptionPatternDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPattern(UserType* output) {
    auto* pointer = data_->pattern.Get();
    return mojo::internal::Deserialize<::media::mojom::EncryptionPatternDataView>(
        pointer, output, context_);
  }
 private:
  internal::EncryptionScheme_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoColorSpaceDataView {
 public:
  VideoColorSpaceDataView() {}

  VideoColorSpaceDataView(
      internal::VideoColorSpace_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaries(UserType* output) const {
    auto data_value = data_->primaries;
    return mojo::internal::Deserialize<::media::mojom::VideoColorSpace_PrimaryID>(
        data_value, output);
  }

  VideoColorSpace_PrimaryID primaries() const {
    return static_cast<VideoColorSpace_PrimaryID>(data_->primaries);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransfer(UserType* output) const {
    auto data_value = data_->transfer;
    return mojo::internal::Deserialize<::media::mojom::VideoColorSpace_TransferID>(
        data_value, output);
  }

  VideoColorSpace_TransferID transfer() const {
    return static_cast<VideoColorSpace_TransferID>(data_->transfer);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatrix(UserType* output) const {
    auto data_value = data_->matrix;
    return mojo::internal::Deserialize<::media::mojom::VideoColorSpace_MatrixID>(
        data_value, output);
  }

  VideoColorSpace_MatrixID matrix() const {
    return static_cast<VideoColorSpace_MatrixID>(data_->matrix);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRange(UserType* output) const {
    auto data_value = data_->range;
    return mojo::internal::Deserialize<::media::mojom::VideoColorSpace_RangeID>(
        data_value, output);
  }

  VideoColorSpace_RangeID range() const {
    return static_cast<VideoColorSpace_RangeID>(data_->range);
  }
 private:
  internal::VideoColorSpace_Data* data_ = nullptr;
};

class MasteringMetadataDataView {
 public:
  MasteringMetadataDataView() {}

  MasteringMetadataDataView(
      internal::MasteringMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPrimaryRDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryR(UserType* output) {
    auto* pointer = data_->primary_r.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetPrimaryGDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryG(UserType* output) {
    auto* pointer = data_->primary_g.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetPrimaryBDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryB(UserType* output) {
    auto* pointer = data_->primary_b.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetWhitePointDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWhitePoint(UserType* output) {
    auto* pointer = data_->white_point.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  float luminance_max() const {
    return data_->luminance_max;
  }
  float luminance_min() const {
    return data_->luminance_min;
  }
 private:
  internal::MasteringMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HDRMetadataDataView {
 public:
  HDRMetadataDataView() {}

  HDRMetadataDataView(
      internal::HDRMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMasteringMetadataDataView(
      MasteringMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMasteringMetadata(UserType* output) {
    auto* pointer = data_->mastering_metadata.Get();
    return mojo::internal::Deserialize<::media::mojom::MasteringMetadataDataView>(
        pointer, output, context_);
  }
  uint32_t max_content_light_level() const {
    return data_->max_content_light_level;
  }
  uint32_t max_frame_average_light_level() const {
    return data_->max_frame_average_light_level;
  }
 private:
  internal::HDRMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioDecoderConfigDataView {
 public:
  AudioDecoderConfigDataView() {}

  AudioDecoderConfigDataView(
      internal::AudioDecoderConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCodec(UserType* output) const {
    auto data_value = data_->codec;
    return mojo::internal::Deserialize<::media::mojom::AudioCodec>(
        data_value, output);
  }

  AudioCodec codec() const {
    return static_cast<AudioCodec>(data_->codec);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSampleFormat(UserType* output) const {
    auto data_value = data_->sample_format;
    return mojo::internal::Deserialize<::media::mojom::SampleFormat>(
        data_value, output);
  }

  SampleFormat sample_format() const {
    return static_cast<SampleFormat>(data_->sample_format);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChannelLayout(UserType* output) const {
    auto data_value = data_->channel_layout;
    return mojo::internal::Deserialize<::media::mojom::ChannelLayout>(
        data_value, output);
  }

  ChannelLayout channel_layout() const {
    return static_cast<ChannelLayout>(data_->channel_layout);
  }
  int32_t samples_per_second() const {
    return data_->samples_per_second;
  }
  inline void GetExtraDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtraData(UserType* output) {
    auto* pointer = data_->extra_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSeekPrerollDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSeekPreroll(UserType* output) {
    auto* pointer = data_->seek_preroll.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  int32_t codec_delay() const {
    return data_->codec_delay;
  }
  inline void GetEncryptionSchemeDataView(
      EncryptionSchemeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncryptionScheme(UserType* output) {
    auto* pointer = data_->encryption_scheme.Get();
    return mojo::internal::Deserialize<::media::mojom::EncryptionSchemeDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioDecoderConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecoderConfigDataView {
 public:
  VideoDecoderConfigDataView() {}

  VideoDecoderConfigDataView(
      internal::VideoDecoderConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCodec(UserType* output) const {
    auto data_value = data_->codec;
    return mojo::internal::Deserialize<::media::mojom::VideoCodec>(
        data_value, output);
  }

  VideoCodec codec() const {
    return static_cast<VideoCodec>(data_->codec);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProfile(UserType* output) const {
    auto data_value = data_->profile;
    return mojo::internal::Deserialize<::media::mojom::VideoCodecProfile>(
        data_value, output);
  }

  VideoCodecProfile profile() const {
    return static_cast<VideoCodecProfile>(data_->profile);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::media::mojom::VideoPixelFormat>(
        data_value, output);
  }

  VideoPixelFormat format() const {
    return static_cast<VideoPixelFormat>(data_->format);
  }
  inline void GetTransformationDataView(
      VideoTransformationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransformation(UserType* output) {
    auto* pointer = data_->transformation.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoTransformationDataView>(
        pointer, output, context_);
  }
  inline void GetCodedSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCodedSize(UserType* output) {
    auto* pointer = data_->coded_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetVisibleRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVisibleRect(UserType* output) {
    auto* pointer = data_->visible_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetNaturalSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNaturalSize(UserType* output) {
    auto* pointer = data_->natural_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetExtraDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtraData(UserType* output) {
    auto* pointer = data_->extra_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetEncryptionSchemeDataView(
      EncryptionSchemeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncryptionScheme(UserType* output) {
    auto* pointer = data_->encryption_scheme.Get();
    return mojo::internal::Deserialize<::media::mojom::EncryptionSchemeDataView>(
        pointer, output, context_);
  }
  inline void GetColorSpaceInfoDataView(
      VideoColorSpaceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadColorSpaceInfo(UserType* output) {
    auto* pointer = data_->color_space_info.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoColorSpaceDataView>(
        pointer, output, context_);
  }
  inline void GetHdrMetadataDataView(
      HDRMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHdrMetadata(UserType* output) {
    auto* pointer = data_->hdr_metadata.Get();
    return mojo::internal::Deserialize<::media::mojom::HDRMetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecoderConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DecryptConfigDataView {
 public:
  DecryptConfigDataView() {}

  DecryptConfigDataView(
      internal::DecryptConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncryptionMode(UserType* output) const {
    auto data_value = data_->encryption_mode;
    return mojo::internal::Deserialize<::media::mojom::EncryptionMode>(
        data_value, output);
  }

  EncryptionMode encryption_mode() const {
    return static_cast<EncryptionMode>(data_->encryption_mode);
  }
  inline void GetKeyIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyId(UserType* output) {
    auto* pointer = data_->key_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetIvDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIv(UserType* output) {
    auto* pointer = data_->iv.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSubsamplesDataView(
      mojo::ArrayDataView<SubsampleEntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubsamples(UserType* output) {
    auto* pointer = data_->subsamples.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::SubsampleEntryDataView>>(
        pointer, output, context_);
  }
  inline void GetEncryptionPatternDataView(
      EncryptionPatternDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncryptionPattern(UserType* output) {
    auto* pointer = data_->encryption_pattern.Get();
    return mojo::internal::Deserialize<::media::mojom::EncryptionPatternDataView>(
        pointer, output, context_);
  }
 private:
  internal::DecryptConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DecoderBufferDataView {
 public:
  DecoderBufferDataView() {}

  DecoderBufferDataView(
      internal::DecoderBuffer_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDuration(UserType* output) {
    auto* pointer = data_->duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  bool is_end_of_stream() const {
    return data_->is_end_of_stream;
  }
  uint32_t data_size() const {
    return data_->data_size;
  }
  bool is_key_frame() const {
    return data_->is_key_frame;
  }
  inline void GetSideDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSideData(UserType* output) {
    auto* pointer = data_->side_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetDecryptConfigDataView(
      DecryptConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDecryptConfig(UserType* output) {
    auto* pointer = data_->decrypt_config.Get();
    return mojo::internal::Deserialize<::media::mojom::DecryptConfigDataView>(
        pointer, output, context_);
  }
  inline void GetFrontDiscardDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrontDiscard(UserType* output) {
    auto* pointer = data_->front_discard.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetBackDiscardDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBackDiscard(UserType* output) {
    auto* pointer = data_->back_discard.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::DecoderBuffer_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioBufferDataView {
 public:
  AudioBufferDataView() {}

  AudioBufferDataView(
      internal::AudioBuffer_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSampleFormat(UserType* output) const {
    auto data_value = data_->sample_format;
    return mojo::internal::Deserialize<::media::mojom::SampleFormat>(
        data_value, output);
  }

  SampleFormat sample_format() const {
    return static_cast<SampleFormat>(data_->sample_format);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChannelLayout(UserType* output) const {
    auto data_value = data_->channel_layout;
    return mojo::internal::Deserialize<::media::mojom::ChannelLayout>(
        data_value, output);
  }

  ChannelLayout channel_layout() const {
    return static_cast<ChannelLayout>(data_->channel_layout);
  }
  int32_t channel_count() const {
    return data_->channel_count;
  }
  int32_t sample_rate() const {
    return data_->sample_rate;
  }
  int32_t frame_count() const {
    return data_->frame_count;
  }
  bool end_of_stream() const {
    return data_->end_of_stream;
  }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::AudioBuffer_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoFrameDataView {
 public:
  VideoFrameDataView() {}

  VideoFrameDataView(
      internal::VideoFrame_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::media::mojom::VideoPixelFormat>(
        data_value, output);
  }

  VideoPixelFormat format() const {
    return static_cast<VideoPixelFormat>(data_->format);
  }
  inline void GetCodedSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCodedSize(UserType* output) {
    auto* pointer = data_->coded_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetVisibleRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVisibleRect(UserType* output) {
    auto* pointer = data_->visible_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetNaturalSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNaturalSize(UserType* output) {
    auto* pointer = data_->natural_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      VideoFrameDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::media::mojom::VideoFrameDataDataView>(
        pointer, output, context_);
  }
  inline void GetMetadataDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
  inline void GetColorSpaceDataView(
      ::gfx::mojom::ColorSpaceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadColorSpace(UserType* output) {
    auto* pointer = data_->color_space.Get();
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoFrame_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EosVideoFrameDataDataView {
 public:
  EosVideoFrameDataDataView() {}

  EosVideoFrameDataDataView(
      internal::EosVideoFrameData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EosVideoFrameData_Data* data_ = nullptr;
};

class SharedBufferVideoFrameDataDataView {
 public:
  SharedBufferVideoFrameDataDataView() {}

  SharedBufferVideoFrameDataDataView(
      internal::SharedBufferVideoFrameData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeFrameData() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->frame_data, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint64_t frame_data_size() const {
    return data_->frame_data_size;
  }
  int32_t y_stride() const {
    return data_->y_stride;
  }
  int32_t u_stride() const {
    return data_->u_stride;
  }
  int32_t v_stride() const {
    return data_->v_stride;
  }
  uint64_t y_offset() const {
    return data_->y_offset;
  }
  uint64_t u_offset() const {
    return data_->u_offset;
  }
  uint64_t v_offset() const {
    return data_->v_offset;
  }
 private:
  internal::SharedBufferVideoFrameData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MailboxVideoFrameDataDataView {
 public:
  MailboxVideoFrameDataDataView() {}

  MailboxVideoFrameDataDataView(
      internal::MailboxVideoFrameData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMailboxHolderDataView(
      mojo::ArrayDataView<::gpu::mojom::MailboxHolderDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMailboxHolder(UserType* output) {
    auto* pointer = data_->mailbox_holder.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gpu::mojom::MailboxHolderDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MailboxVideoFrameData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PipelineStatisticsDataView {
 public:
  PipelineStatisticsDataView() {}

  PipelineStatisticsDataView(
      internal::PipelineStatistics_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t audio_bytes_decoded() const {
    return data_->audio_bytes_decoded;
  }
  uint64_t video_bytes_decoded() const {
    return data_->video_bytes_decoded;
  }
  uint32_t video_frames_decoded() const {
    return data_->video_frames_decoded;
  }
  uint32_t video_frames_dropped() const {
    return data_->video_frames_dropped;
  }
  int64_t audio_memory_usage() const {
    return data_->audio_memory_usage;
  }
  int64_t video_memory_usage() const {
    return data_->video_memory_usage;
  }
 private:
  internal::PipelineStatistics_Data* data_ = nullptr;
};

class PredictionFeaturesDataView {
 public:
  PredictionFeaturesDataView() {}

  PredictionFeaturesDataView(
      internal::PredictionFeatures_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProfile(UserType* output) const {
    auto data_value = data_->profile;
    return mojo::internal::Deserialize<::media::mojom::VideoCodecProfile>(
        data_value, output);
  }

  VideoCodecProfile profile() const {
    return static_cast<VideoCodecProfile>(data_->profile);
  }
  inline void GetVideoSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoSize(UserType* output) {
    auto* pointer = data_->video_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  int32_t frames_per_sec() const {
    return data_->frames_per_sec;
  }
  inline void GetKeySystemDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeySystem(UserType* output) {
    auto* pointer = data_->key_system.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool use_hw_secure_codecs() const {
    return data_->use_hw_secure_codecs;
  }
 private:
  internal::PredictionFeatures_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PredictionTargetsDataView {
 public:
  PredictionTargetsDataView() {}

  PredictionTargetsDataView(
      internal::PredictionTargets_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t frames_decoded() const {
    return data_->frames_decoded;
  }
  uint32_t frames_dropped() const {
    return data_->frames_dropped;
  }
  uint32_t frames_power_efficient() const {
    return data_->frames_power_efficient;
  }
 private:
  internal::PredictionTargets_Data* data_ = nullptr;
};

class VideoFrameDataDataView {
 public:
  using Tag = internal::VideoFrameData_Data::VideoFrameData_Tag;

  VideoFrameDataDataView() {}

  VideoFrameDataDataView(
      internal::VideoFrameData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_eos_data() const { return data_->tag == Tag::EOS_DATA; }
  inline void GetEosDataDataView(
      EosVideoFrameDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEosData(UserType* output) {
    DCHECK(is_eos_data());
    return mojo::internal::Deserialize<::media::mojom::EosVideoFrameDataDataView>(
        data_->data.f_eos_data.Get(), output, context_);
  }
  bool is_shared_buffer_data() const { return data_->tag == Tag::SHARED_BUFFER_DATA; }
  inline void GetSharedBufferDataDataView(
      SharedBufferVideoFrameDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSharedBufferData(UserType* output) {
    DCHECK(is_shared_buffer_data());
    return mojo::internal::Deserialize<::media::mojom::SharedBufferVideoFrameDataDataView>(
        data_->data.f_shared_buffer_data.Get(), output, context_);
  }
  bool is_mailbox_data() const { return data_->tag == Tag::MAILBOX_DATA; }
  inline void GetMailboxDataDataView(
      MailboxVideoFrameDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMailboxData(UserType* output) {
    DCHECK(is_mailbox_data());
    return mojo::internal::Deserialize<::media::mojom::MailboxVideoFrameDataDataView>(
        data_->data.f_mailbox_data.Get(), output, context_);
  }

 private:
  internal::VideoFrameData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoTransformationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoTransformationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoTransformation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::VideoRotation>(
        Traits::rotation(input), &(*output)->rotation);
    (*output)->mirrored = Traits::mirrored(input);
  }

  static bool Deserialize(::media::mojom::internal::VideoTransformation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoTransformationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::EncryptionPatternDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::EncryptionPatternDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::EncryptionPattern_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->crypt_byte_block = Traits::crypt_byte_block(input);
    (*output)->skip_byte_block = Traits::skip_byte_block(input);
  }

  static bool Deserialize(::media::mojom::internal::EncryptionPattern_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::EncryptionPatternDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::EncryptionSchemeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::EncryptionSchemeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::EncryptionScheme_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::EncryptionScheme_CipherMode>(
        Traits::mode(input), &(*output)->mode);
    decltype(Traits::pattern(input)) in_pattern = Traits::pattern(input);
    typename decltype((*output)->pattern)::BaseType::BufferWriter
        pattern_writer;
    mojo::internal::Serialize<::media::mojom::EncryptionPatternDataView>(
        in_pattern, buffer, &pattern_writer, context);
    (*output)->pattern.Set(
        pattern_writer.is_null() ? nullptr : pattern_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pattern.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pattern in EncryptionScheme struct");
  }

  static bool Deserialize(::media::mojom::internal::EncryptionScheme_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::EncryptionSchemeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoColorSpaceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoColorSpaceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoColorSpace_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::VideoColorSpace_PrimaryID>(
        Traits::primaries(input), &(*output)->primaries);
    mojo::internal::Serialize<::media::mojom::VideoColorSpace_TransferID>(
        Traits::transfer(input), &(*output)->transfer);
    mojo::internal::Serialize<::media::mojom::VideoColorSpace_MatrixID>(
        Traits::matrix(input), &(*output)->matrix);
    mojo::internal::Serialize<::media::mojom::VideoColorSpace_RangeID>(
        Traits::range(input), &(*output)->range);
  }

  static bool Deserialize(::media::mojom::internal::VideoColorSpace_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoColorSpaceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::MasteringMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::MasteringMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::MasteringMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::primary_r(input)) in_primary_r = Traits::primary_r(input);
    typename decltype((*output)->primary_r)::BaseType::BufferWriter
        primary_r_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_primary_r, buffer, &primary_r_writer, context);
    (*output)->primary_r.Set(
        primary_r_writer.is_null() ? nullptr : primary_r_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->primary_r.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null primary_r in MasteringMetadata struct");
    decltype(Traits::primary_g(input)) in_primary_g = Traits::primary_g(input);
    typename decltype((*output)->primary_g)::BaseType::BufferWriter
        primary_g_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_primary_g, buffer, &primary_g_writer, context);
    (*output)->primary_g.Set(
        primary_g_writer.is_null() ? nullptr : primary_g_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->primary_g.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null primary_g in MasteringMetadata struct");
    decltype(Traits::primary_b(input)) in_primary_b = Traits::primary_b(input);
    typename decltype((*output)->primary_b)::BaseType::BufferWriter
        primary_b_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_primary_b, buffer, &primary_b_writer, context);
    (*output)->primary_b.Set(
        primary_b_writer.is_null() ? nullptr : primary_b_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->primary_b.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null primary_b in MasteringMetadata struct");
    decltype(Traits::white_point(input)) in_white_point = Traits::white_point(input);
    typename decltype((*output)->white_point)::BaseType::BufferWriter
        white_point_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_white_point, buffer, &white_point_writer, context);
    (*output)->white_point.Set(
        white_point_writer.is_null() ? nullptr : white_point_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->white_point.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null white_point in MasteringMetadata struct");
    (*output)->luminance_max = Traits::luminance_max(input);
    (*output)->luminance_min = Traits::luminance_min(input);
  }

  static bool Deserialize(::media::mojom::internal::MasteringMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::MasteringMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::HDRMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::HDRMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::HDRMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::mastering_metadata(input)) in_mastering_metadata = Traits::mastering_metadata(input);
    typename decltype((*output)->mastering_metadata)::BaseType::BufferWriter
        mastering_metadata_writer;
    mojo::internal::Serialize<::media::mojom::MasteringMetadataDataView>(
        in_mastering_metadata, buffer, &mastering_metadata_writer, context);
    (*output)->mastering_metadata.Set(
        mastering_metadata_writer.is_null() ? nullptr : mastering_metadata_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mastering_metadata.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mastering_metadata in HDRMetadata struct");
    (*output)->max_content_light_level = Traits::max_content_light_level(input);
    (*output)->max_frame_average_light_level = Traits::max_frame_average_light_level(input);
  }

  static bool Deserialize(::media::mojom::internal::HDRMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::HDRMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::AudioDecoderConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::AudioDecoderConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::AudioDecoderConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::AudioCodec>(
        Traits::codec(input), &(*output)->codec);
    mojo::internal::Serialize<::media::mojom::SampleFormat>(
        Traits::sample_format(input), &(*output)->sample_format);
    mojo::internal::Serialize<::media::mojom::ChannelLayout>(
        Traits::channel_layout(input), &(*output)->channel_layout);
    (*output)->samples_per_second = Traits::samples_per_second(input);
    decltype(Traits::extra_data(input)) in_extra_data = Traits::extra_data(input);
    typename decltype((*output)->extra_data)::BaseType::BufferWriter
        extra_data_writer;
    const mojo::internal::ContainerValidateParams extra_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_extra_data, buffer, &extra_data_writer, &extra_data_validate_params,
        context);
    (*output)->extra_data.Set(
        extra_data_writer.is_null() ? nullptr : extra_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->extra_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null extra_data in AudioDecoderConfig struct");
    decltype(Traits::seek_preroll(input)) in_seek_preroll = Traits::seek_preroll(input);
    typename decltype((*output)->seek_preroll)::BaseType::BufferWriter
        seek_preroll_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_seek_preroll, buffer, &seek_preroll_writer, context);
    (*output)->seek_preroll.Set(
        seek_preroll_writer.is_null() ? nullptr : seek_preroll_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->seek_preroll.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null seek_preroll in AudioDecoderConfig struct");
    (*output)->codec_delay = Traits::codec_delay(input);
    decltype(Traits::encryption_scheme(input)) in_encryption_scheme = Traits::encryption_scheme(input);
    typename decltype((*output)->encryption_scheme)::BaseType::BufferWriter
        encryption_scheme_writer;
    mojo::internal::Serialize<::media::mojom::EncryptionSchemeDataView>(
        in_encryption_scheme, buffer, &encryption_scheme_writer, context);
    (*output)->encryption_scheme.Set(
        encryption_scheme_writer.is_null() ? nullptr : encryption_scheme_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->encryption_scheme.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null encryption_scheme in AudioDecoderConfig struct");
  }

  static bool Deserialize(::media::mojom::internal::AudioDecoderConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::AudioDecoderConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoDecoderConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoDecoderConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoDecoderConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::VideoCodec>(
        Traits::codec(input), &(*output)->codec);
    mojo::internal::Serialize<::media::mojom::VideoCodecProfile>(
        Traits::profile(input), &(*output)->profile);
    mojo::internal::Serialize<::media::mojom::VideoPixelFormat>(
        Traits::format(input), &(*output)->format);
    decltype(Traits::transformation(input)) in_transformation = Traits::transformation(input);
    typename decltype((*output)->transformation)::BaseType::BufferWriter
        transformation_writer;
    mojo::internal::Serialize<::media::mojom::VideoTransformationDataView>(
        in_transformation, buffer, &transformation_writer, context);
    (*output)->transformation.Set(
        transformation_writer.is_null() ? nullptr : transformation_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->transformation.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null transformation in VideoDecoderConfig struct");
    decltype(Traits::coded_size(input)) in_coded_size = Traits::coded_size(input);
    typename decltype((*output)->coded_size)::BaseType::BufferWriter
        coded_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_coded_size, buffer, &coded_size_writer, context);
    (*output)->coded_size.Set(
        coded_size_writer.is_null() ? nullptr : coded_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->coded_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null coded_size in VideoDecoderConfig struct");
    decltype(Traits::visible_rect(input)) in_visible_rect = Traits::visible_rect(input);
    typename decltype((*output)->visible_rect)::BaseType::BufferWriter
        visible_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_visible_rect, buffer, &visible_rect_writer, context);
    (*output)->visible_rect.Set(
        visible_rect_writer.is_null() ? nullptr : visible_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->visible_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null visible_rect in VideoDecoderConfig struct");
    decltype(Traits::natural_size(input)) in_natural_size = Traits::natural_size(input);
    typename decltype((*output)->natural_size)::BaseType::BufferWriter
        natural_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_natural_size, buffer, &natural_size_writer, context);
    (*output)->natural_size.Set(
        natural_size_writer.is_null() ? nullptr : natural_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->natural_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null natural_size in VideoDecoderConfig struct");
    decltype(Traits::extra_data(input)) in_extra_data = Traits::extra_data(input);
    typename decltype((*output)->extra_data)::BaseType::BufferWriter
        extra_data_writer;
    const mojo::internal::ContainerValidateParams extra_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_extra_data, buffer, &extra_data_writer, &extra_data_validate_params,
        context);
    (*output)->extra_data.Set(
        extra_data_writer.is_null() ? nullptr : extra_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->extra_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null extra_data in VideoDecoderConfig struct");
    decltype(Traits::encryption_scheme(input)) in_encryption_scheme = Traits::encryption_scheme(input);
    typename decltype((*output)->encryption_scheme)::BaseType::BufferWriter
        encryption_scheme_writer;
    mojo::internal::Serialize<::media::mojom::EncryptionSchemeDataView>(
        in_encryption_scheme, buffer, &encryption_scheme_writer, context);
    (*output)->encryption_scheme.Set(
        encryption_scheme_writer.is_null() ? nullptr : encryption_scheme_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->encryption_scheme.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null encryption_scheme in VideoDecoderConfig struct");
    decltype(Traits::color_space_info(input)) in_color_space_info = Traits::color_space_info(input);
    typename decltype((*output)->color_space_info)::BaseType::BufferWriter
        color_space_info_writer;
    mojo::internal::Serialize<::media::mojom::VideoColorSpaceDataView>(
        in_color_space_info, buffer, &color_space_info_writer, context);
    (*output)->color_space_info.Set(
        color_space_info_writer.is_null() ? nullptr : color_space_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->color_space_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null color_space_info in VideoDecoderConfig struct");
    decltype(Traits::hdr_metadata(input)) in_hdr_metadata = Traits::hdr_metadata(input);
    typename decltype((*output)->hdr_metadata)::BaseType::BufferWriter
        hdr_metadata_writer;
    mojo::internal::Serialize<::media::mojom::HDRMetadataDataView>(
        in_hdr_metadata, buffer, &hdr_metadata_writer, context);
    (*output)->hdr_metadata.Set(
        hdr_metadata_writer.is_null() ? nullptr : hdr_metadata_writer.data());
  }

  static bool Deserialize(::media::mojom::internal::VideoDecoderConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoDecoderConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::DecryptConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::DecryptConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::DecryptConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::EncryptionMode>(
        Traits::encryption_mode(input), &(*output)->encryption_mode);
    decltype(Traits::key_id(input)) in_key_id = Traits::key_id(input);
    typename decltype((*output)->key_id)::BaseType::BufferWriter
        key_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_key_id, buffer, &key_id_writer, context);
    (*output)->key_id.Set(
        key_id_writer.is_null() ? nullptr : key_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_id in DecryptConfig struct");
    decltype(Traits::iv(input)) in_iv = Traits::iv(input);
    typename decltype((*output)->iv)::BaseType::BufferWriter
        iv_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_iv, buffer, &iv_writer, context);
    (*output)->iv.Set(
        iv_writer.is_null() ? nullptr : iv_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->iv.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null iv in DecryptConfig struct");
    decltype(Traits::subsamples(input)) in_subsamples = Traits::subsamples(input);
    typename decltype((*output)->subsamples)::BaseType::BufferWriter
        subsamples_writer;
    const mojo::internal::ContainerValidateParams subsamples_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::SubsampleEntryDataView>>(
        in_subsamples, buffer, &subsamples_writer, &subsamples_validate_params,
        context);
    (*output)->subsamples.Set(
        subsamples_writer.is_null() ? nullptr : subsamples_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->subsamples.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null subsamples in DecryptConfig struct");
    decltype(Traits::encryption_pattern(input)) in_encryption_pattern = Traits::encryption_pattern(input);
    typename decltype((*output)->encryption_pattern)::BaseType::BufferWriter
        encryption_pattern_writer;
    mojo::internal::Serialize<::media::mojom::EncryptionPatternDataView>(
        in_encryption_pattern, buffer, &encryption_pattern_writer, context);
    (*output)->encryption_pattern.Set(
        encryption_pattern_writer.is_null() ? nullptr : encryption_pattern_writer.data());
  }

  static bool Deserialize(::media::mojom::internal::DecryptConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::DecryptConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::DecoderBufferDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::DecoderBufferDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::DecoderBuffer_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::timestamp(input)) in_timestamp = Traits::timestamp(input);
    typename decltype((*output)->timestamp)::BaseType::BufferWriter
        timestamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_timestamp, buffer, &timestamp_writer, context);
    (*output)->timestamp.Set(
        timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->timestamp.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null timestamp in DecoderBuffer struct");
    decltype(Traits::duration(input)) in_duration = Traits::duration(input);
    typename decltype((*output)->duration)::BaseType::BufferWriter
        duration_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_duration, buffer, &duration_writer, context);
    (*output)->duration.Set(
        duration_writer.is_null() ? nullptr : duration_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->duration.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null duration in DecoderBuffer struct");
    (*output)->is_end_of_stream = Traits::is_end_of_stream(input);
    (*output)->data_size = Traits::data_size(input);
    (*output)->is_key_frame = Traits::is_key_frame(input);
    decltype(Traits::side_data(input)) in_side_data = Traits::side_data(input);
    typename decltype((*output)->side_data)::BaseType::BufferWriter
        side_data_writer;
    const mojo::internal::ContainerValidateParams side_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_side_data, buffer, &side_data_writer, &side_data_validate_params,
        context);
    (*output)->side_data.Set(
        side_data_writer.is_null() ? nullptr : side_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->side_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null side_data in DecoderBuffer struct");
    decltype(Traits::decrypt_config(input)) in_decrypt_config = Traits::decrypt_config(input);
    typename decltype((*output)->decrypt_config)::BaseType::BufferWriter
        decrypt_config_writer;
    mojo::internal::Serialize<::media::mojom::DecryptConfigDataView>(
        in_decrypt_config, buffer, &decrypt_config_writer, context);
    (*output)->decrypt_config.Set(
        decrypt_config_writer.is_null() ? nullptr : decrypt_config_writer.data());
    decltype(Traits::front_discard(input)) in_front_discard = Traits::front_discard(input);
    typename decltype((*output)->front_discard)::BaseType::BufferWriter
        front_discard_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_front_discard, buffer, &front_discard_writer, context);
    (*output)->front_discard.Set(
        front_discard_writer.is_null() ? nullptr : front_discard_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->front_discard.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null front_discard in DecoderBuffer struct");
    decltype(Traits::back_discard(input)) in_back_discard = Traits::back_discard(input);
    typename decltype((*output)->back_discard)::BaseType::BufferWriter
        back_discard_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_back_discard, buffer, &back_discard_writer, context);
    (*output)->back_discard.Set(
        back_discard_writer.is_null() ? nullptr : back_discard_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->back_discard.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null back_discard in DecoderBuffer struct");
  }

  static bool Deserialize(::media::mojom::internal::DecoderBuffer_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::DecoderBufferDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::AudioBufferDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::AudioBufferDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::AudioBuffer_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::SampleFormat>(
        Traits::sample_format(input), &(*output)->sample_format);
    mojo::internal::Serialize<::media::mojom::ChannelLayout>(
        Traits::channel_layout(input), &(*output)->channel_layout);
    (*output)->channel_count = Traits::channel_count(input);
    (*output)->sample_rate = Traits::sample_rate(input);
    (*output)->frame_count = Traits::frame_count(input);
    (*output)->end_of_stream = Traits::end_of_stream(input);
    decltype(Traits::timestamp(input)) in_timestamp = Traits::timestamp(input);
    typename decltype((*output)->timestamp)::BaseType::BufferWriter
        timestamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_timestamp, buffer, &timestamp_writer, context);
    (*output)->timestamp.Set(
        timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->timestamp.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null timestamp in AudioBuffer struct");
    decltype(Traits::data(input)) in_data = Traits::data(input);
    typename decltype((*output)->data)::BaseType::BufferWriter
        data_writer;
    const mojo::internal::ContainerValidateParams data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_data, buffer, &data_writer, &data_validate_params,
        context);
    (*output)->data.Set(
        data_writer.is_null() ? nullptr : data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in AudioBuffer struct");
  }

  static bool Deserialize(::media::mojom::internal::AudioBuffer_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::AudioBufferDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoFrameDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoFrameDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoFrame_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::VideoPixelFormat>(
        Traits::format(input), &(*output)->format);
    decltype(Traits::coded_size(input)) in_coded_size = Traits::coded_size(input);
    typename decltype((*output)->coded_size)::BaseType::BufferWriter
        coded_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_coded_size, buffer, &coded_size_writer, context);
    (*output)->coded_size.Set(
        coded_size_writer.is_null() ? nullptr : coded_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->coded_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null coded_size in VideoFrame struct");
    decltype(Traits::visible_rect(input)) in_visible_rect = Traits::visible_rect(input);
    typename decltype((*output)->visible_rect)::BaseType::BufferWriter
        visible_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_visible_rect, buffer, &visible_rect_writer, context);
    (*output)->visible_rect.Set(
        visible_rect_writer.is_null() ? nullptr : visible_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->visible_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null visible_rect in VideoFrame struct");
    decltype(Traits::natural_size(input)) in_natural_size = Traits::natural_size(input);
    typename decltype((*output)->natural_size)::BaseType::BufferWriter
        natural_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_natural_size, buffer, &natural_size_writer, context);
    (*output)->natural_size.Set(
        natural_size_writer.is_null() ? nullptr : natural_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->natural_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null natural_size in VideoFrame struct");
    decltype(Traits::timestamp(input)) in_timestamp = Traits::timestamp(input);
    typename decltype((*output)->timestamp)::BaseType::BufferWriter
        timestamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_timestamp, buffer, &timestamp_writer, context);
    (*output)->timestamp.Set(
        timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->timestamp.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null timestamp in VideoFrame struct");
    decltype(Traits::data(input)) in_data = Traits::data(input);
    typename decltype((*output)->data)::BufferWriter data_writer;
    data_writer.AllocateInline(buffer, &(*output)->data);
    mojo::internal::Serialize<::media::mojom::VideoFrameDataDataView>(
        in_data, buffer, &data_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in VideoFrame struct");
    decltype(Traits::metadata(input)) in_metadata = Traits::metadata(input);
    typename decltype((*output)->metadata)::BaseType::BufferWriter
        metadata_writer;
    mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
        in_metadata, buffer, &metadata_writer, context);
    (*output)->metadata.Set(
        metadata_writer.is_null() ? nullptr : metadata_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->metadata.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null metadata in VideoFrame struct");
    decltype(Traits::color_space(input)) in_color_space = Traits::color_space(input);
    typename decltype((*output)->color_space)::BaseType::BufferWriter
        color_space_writer;
    mojo::internal::Serialize<::gfx::mojom::ColorSpaceDataView>(
        in_color_space, buffer, &color_space_writer, context);
    (*output)->color_space.Set(
        color_space_writer.is_null() ? nullptr : color_space_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->color_space.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null color_space in VideoFrame struct");
  }

  static bool Deserialize(::media::mojom::internal::VideoFrame_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoFrameDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::EosVideoFrameDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::EosVideoFrameDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::EosVideoFrameData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
  }

  static bool Deserialize(::media::mojom::internal::EosVideoFrameData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::EosVideoFrameDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::SharedBufferVideoFrameDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::SharedBufferVideoFrameDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::SharedBufferVideoFrameData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::frame_data(input)) in_frame_data = Traits::frame_data(input);
    mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
        in_frame_data, &(*output)->frame_data, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->frame_data),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid frame_data in SharedBufferVideoFrameData struct");
    (*output)->frame_data_size = Traits::frame_data_size(input);
    (*output)->y_stride = Traits::y_stride(input);
    (*output)->u_stride = Traits::u_stride(input);
    (*output)->v_stride = Traits::v_stride(input);
    (*output)->y_offset = Traits::y_offset(input);
    (*output)->u_offset = Traits::u_offset(input);
    (*output)->v_offset = Traits::v_offset(input);
  }

  static bool Deserialize(::media::mojom::internal::SharedBufferVideoFrameData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::SharedBufferVideoFrameDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::MailboxVideoFrameDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::MailboxVideoFrameDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::MailboxVideoFrameData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::mailbox_holder(input)) in_mailbox_holder = Traits::mailbox_holder(input);
    typename decltype((*output)->mailbox_holder)::BaseType::BufferWriter
        mailbox_holder_writer;
    const mojo::internal::ContainerValidateParams mailbox_holder_validate_params(
        4, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gpu::mojom::MailboxHolderDataView>>(
        in_mailbox_holder, buffer, &mailbox_holder_writer, &mailbox_holder_validate_params,
        context);
    (*output)->mailbox_holder.Set(
        mailbox_holder_writer.is_null() ? nullptr : mailbox_holder_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mailbox_holder.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mailbox_holder in MailboxVideoFrameData struct");
  }

  static bool Deserialize(::media::mojom::internal::MailboxVideoFrameData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::MailboxVideoFrameDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PipelineStatisticsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::PipelineStatisticsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::PipelineStatistics_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->audio_bytes_decoded = Traits::audio_bytes_decoded(input);
    (*output)->video_bytes_decoded = Traits::video_bytes_decoded(input);
    (*output)->video_frames_decoded = Traits::video_frames_decoded(input);
    (*output)->video_frames_dropped = Traits::video_frames_dropped(input);
    (*output)->audio_memory_usage = Traits::audio_memory_usage(input);
    (*output)->video_memory_usage = Traits::video_memory_usage(input);
  }

  static bool Deserialize(::media::mojom::internal::PipelineStatistics_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::PipelineStatisticsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PredictionFeaturesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::PredictionFeaturesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::PredictionFeatures_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::media::mojom::VideoCodecProfile>(
        Traits::profile(input), &(*output)->profile);
    decltype(Traits::video_size(input)) in_video_size = Traits::video_size(input);
    typename decltype((*output)->video_size)::BaseType::BufferWriter
        video_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_video_size, buffer, &video_size_writer, context);
    (*output)->video_size.Set(
        video_size_writer.is_null() ? nullptr : video_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->video_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null video_size in PredictionFeatures struct");
    (*output)->frames_per_sec = Traits::frames_per_sec(input);
    decltype(Traits::key_system(input)) in_key_system = Traits::key_system(input);
    typename decltype((*output)->key_system)::BaseType::BufferWriter
        key_system_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_key_system, buffer, &key_system_writer, context);
    (*output)->key_system.Set(
        key_system_writer.is_null() ? nullptr : key_system_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_system.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_system in PredictionFeatures struct");
    (*output)->use_hw_secure_codecs = Traits::use_hw_secure_codecs(input);
  }

  static bool Deserialize(::media::mojom::internal::PredictionFeatures_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::PredictionFeaturesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PredictionTargetsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::PredictionTargetsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::PredictionTargets_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->frames_decoded = Traits::frames_decoded(input);
    (*output)->frames_dropped = Traits::frames_dropped(input);
    (*output)->frames_power_efficient = Traits::frames_power_efficient(input);
  }

  static bool Deserialize(::media::mojom::internal::PredictionTargets_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::PredictionTargetsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoFrameDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::media::mojom::VideoFrameDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoFrameData_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::media::mojom::internal::VideoFrameData_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::media::mojom::VideoFrameDataDataView::Tag::EOS_DATA: {
        decltype(Traits::eos_data(input))
            in_eos_data = Traits::eos_data(input);
        typename decltype(result->data.f_eos_data)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::media::mojom::EosVideoFrameDataDataView>(
            in_eos_data, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null eos_data in VideoFrameData union");
        result->data.f_eos_data.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::media::mojom::VideoFrameDataDataView::Tag::SHARED_BUFFER_DATA: {
        decltype(Traits::shared_buffer_data(input))
            in_shared_buffer_data = Traits::shared_buffer_data(input);
        typename decltype(result->data.f_shared_buffer_data)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::media::mojom::SharedBufferVideoFrameDataDataView>(
            in_shared_buffer_data, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null shared_buffer_data in VideoFrameData union");
        result->data.f_shared_buffer_data.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::media::mojom::VideoFrameDataDataView::Tag::MAILBOX_DATA: {
        decltype(Traits::mailbox_data(input))
            in_mailbox_data = Traits::mailbox_data(input);
        typename decltype(result->data.f_mailbox_data)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::media::mojom::MailboxVideoFrameDataDataView>(
            in_mailbox_data, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null mailbox_data in VideoFrameData union");
        result->data.f_mailbox_data.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::media::mojom::internal::VideoFrameData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoFrameDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {





inline void EncryptionSchemeDataView::GetPatternDataView(
    EncryptionPatternDataView* output) {
  auto pointer = data_->pattern.Get();
  *output = EncryptionPatternDataView(pointer, context_);
}




inline void MasteringMetadataDataView::GetPrimaryRDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->primary_r.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void MasteringMetadataDataView::GetPrimaryGDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->primary_g.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void MasteringMetadataDataView::GetPrimaryBDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->primary_b.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void MasteringMetadataDataView::GetWhitePointDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->white_point.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}


inline void HDRMetadataDataView::GetMasteringMetadataDataView(
    MasteringMetadataDataView* output) {
  auto pointer = data_->mastering_metadata.Get();
  *output = MasteringMetadataDataView(pointer, context_);
}


inline void AudioDecoderConfigDataView::GetExtraDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->extra_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void AudioDecoderConfigDataView::GetSeekPrerollDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->seek_preroll.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void AudioDecoderConfigDataView::GetEncryptionSchemeDataView(
    EncryptionSchemeDataView* output) {
  auto pointer = data_->encryption_scheme.Get();
  *output = EncryptionSchemeDataView(pointer, context_);
}


inline void VideoDecoderConfigDataView::GetTransformationDataView(
    VideoTransformationDataView* output) {
  auto pointer = data_->transformation.Get();
  *output = VideoTransformationDataView(pointer, context_);
}
inline void VideoDecoderConfigDataView::GetCodedSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->coded_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void VideoDecoderConfigDataView::GetVisibleRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->visible_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void VideoDecoderConfigDataView::GetNaturalSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->natural_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void VideoDecoderConfigDataView::GetExtraDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->extra_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void VideoDecoderConfigDataView::GetEncryptionSchemeDataView(
    EncryptionSchemeDataView* output) {
  auto pointer = data_->encryption_scheme.Get();
  *output = EncryptionSchemeDataView(pointer, context_);
}
inline void VideoDecoderConfigDataView::GetColorSpaceInfoDataView(
    VideoColorSpaceDataView* output) {
  auto pointer = data_->color_space_info.Get();
  *output = VideoColorSpaceDataView(pointer, context_);
}
inline void VideoDecoderConfigDataView::GetHdrMetadataDataView(
    HDRMetadataDataView* output) {
  auto pointer = data_->hdr_metadata.Get();
  *output = HDRMetadataDataView(pointer, context_);
}


inline void DecryptConfigDataView::GetKeyIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DecryptConfigDataView::GetIvDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->iv.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DecryptConfigDataView::GetSubsamplesDataView(
    mojo::ArrayDataView<SubsampleEntryDataView>* output) {
  auto pointer = data_->subsamples.Get();
  *output = mojo::ArrayDataView<SubsampleEntryDataView>(pointer, context_);
}
inline void DecryptConfigDataView::GetEncryptionPatternDataView(
    EncryptionPatternDataView* output) {
  auto pointer = data_->encryption_pattern.Get();
  *output = EncryptionPatternDataView(pointer, context_);
}


inline void DecoderBufferDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void DecoderBufferDataView::GetDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void DecoderBufferDataView::GetSideDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->side_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void DecoderBufferDataView::GetDecryptConfigDataView(
    DecryptConfigDataView* output) {
  auto pointer = data_->decrypt_config.Get();
  *output = DecryptConfigDataView(pointer, context_);
}
inline void DecoderBufferDataView::GetFrontDiscardDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->front_discard.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void DecoderBufferDataView::GetBackDiscardDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->back_discard.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void AudioBufferDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void AudioBufferDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void VideoFrameDataView::GetCodedSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->coded_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void VideoFrameDataView::GetVisibleRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->visible_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void VideoFrameDataView::GetNaturalSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->natural_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void VideoFrameDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void VideoFrameDataView::GetDataDataView(
    VideoFrameDataDataView* output) {
  auto pointer = &data_->data;
  *output = VideoFrameDataDataView(pointer, context_);
}
inline void VideoFrameDataView::GetMetadataDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}
inline void VideoFrameDataView::GetColorSpaceDataView(
    ::gfx::mojom::ColorSpaceDataView* output) {
  auto pointer = data_->color_space.Get();
  *output = ::gfx::mojom::ColorSpaceDataView(pointer, context_);
}






inline void MailboxVideoFrameDataDataView::GetMailboxHolderDataView(
    mojo::ArrayDataView<::gpu::mojom::MailboxHolderDataView>* output) {
  auto pointer = data_->mailbox_holder.Get();
  *output = mojo::ArrayDataView<::gpu::mojom::MailboxHolderDataView>(pointer, context_);
}




inline void PredictionFeaturesDataView::GetVideoSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->video_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void PredictionFeaturesDataView::GetKeySystemDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key_system.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void VideoFrameDataDataView::GetEosDataDataView(
    EosVideoFrameDataDataView* output) {
  DCHECK(is_eos_data());
  *output = EosVideoFrameDataDataView(data_->data.f_eos_data.Get(), context_);
}
inline void VideoFrameDataDataView::GetSharedBufferDataDataView(
    SharedBufferVideoFrameDataDataView* output) {
  DCHECK(is_shared_buffer_data());
  *output = SharedBufferVideoFrameDataDataView(data_->data.f_shared_buffer_data.Get(), context_);
}
inline void VideoFrameDataDataView::GetMailboxDataDataView(
    MailboxVideoFrameDataDataView* output) {
  DCHECK(is_mailbox_data());
  *output = MailboxVideoFrameDataDataView(data_->data.f_mailbox_data.Get(), context_);
}


}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_SHARED_H_