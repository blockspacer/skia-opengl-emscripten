// Copyright 2016 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "cobalt/media/base/starboard_utils.h"

#include <algorithm>

#include "base/logging.h"
#include "starboard/configuration.h"
#include "starboard/memory.h"

using base::Time;
using base::TimeDelta;

namespace cobalt {
namespace media {

SbMediaAudioCodec MediaAudioCodecToSbMediaAudioCodec(AudioCodec codec) {
  switch (codec) {
    case kCodecAAC:
      return kSbMediaAudioCodecAac;
#if SB_HAS(AC3_AUDIO)
    case kCodecAC3:
      return kSbMediaAudioCodecAc3;
    case kCodecEAC3:
      return kSbMediaAudioCodecEac3;
#endif  // SB_HAS(AC3_AUDIO)
    case kCodecVorbis:
      return kSbMediaAudioCodecVorbis;
    case kCodecOpus:
      return kSbMediaAudioCodecOpus;
    default:
      // Cobalt only supports a subset of audio codecs defined by Chromium.
      DLOG(ERROR) << "Unsupported audio codec "
                  << cobalt::media::GetCodecName(codec);
      return kSbMediaAudioCodecNone;
  }
  NOTREACHED();
  return kSbMediaAudioCodecNone;
}

SbMediaVideoCodec MediaVideoCodecToSbMediaVideoCodec(VideoCodec codec) {
  switch (codec) {
    case kCodecH264:
      return kSbMediaVideoCodecH264;
    case kCodecVC1:
      return kSbMediaVideoCodecVc1;
    case kCodecMPEG2:
      return kSbMediaVideoCodecMpeg2;
    case kCodecTheora:
      return kSbMediaVideoCodecTheora;
    case kCodecVP8:
      return kSbMediaVideoCodecVp8;
    case kCodecVP9:
      return kSbMediaVideoCodecVp9;
    case kCodecAV1:
#if SB_API_VERSION >= SB_HAS_AV1_VERSION
      return kSbMediaVideoCodecAv1;
#else  // SB_API_VERSION >= SB_HAS_AV1_VERSION
      return kSbMediaVideoCodecVp10;
#endif  // SB_API_VERSION >= SB_HAS_AV1_VERSION
    default:
      // Cobalt only supports a subset of video codecs defined by Chromium.
      DLOG(ERROR) << "Unsupported video codec "
                  << cobalt::media::GetCodecName(codec);
      return kSbMediaVideoCodecNone;
  }
  NOTREACHED();
  return kSbMediaVideoCodecNone;
}

SbMediaAudioHeader MediaAudioConfigToSbMediaAudioHeader(
    const AudioDecoderConfig& audio_decoder_config) {
  SbMediaAudioHeader audio_header;

  // TODO: Make this work with non AAC audio.
  audio_header.format_tag = 0x00ff;
  audio_header.number_of_channels =
      ChannelLayoutToChannelCount(audio_decoder_config.channel_layout());
  audio_header.samples_per_second = audio_decoder_config.samples_per_second();
  audio_header.average_bytes_per_second = 1;
  audio_header.block_alignment = 4;
  audio_header.bits_per_sample = audio_decoder_config.bits_per_channel();

#if SB_HAS(AUDIO_SPECIFIC_CONFIG_AS_POINTER)
  audio_header.audio_specific_config_size =
      static_cast<uint16_t>(audio_decoder_config.extra_data().size());
  if (audio_header.audio_specific_config_size == 0) {
    audio_header.audio_specific_config = NULL;
  } else {
    audio_header.audio_specific_config = &audio_decoder_config.extra_data()[0];
  }
#else   // SB_HAS(AUDIO_SPECIFIC_CONFIG_AS_POINTER)
  audio_header.audio_specific_config_size = static_cast<uint16_t>(
      std::min(audio_decoder_config.extra_data().size(),
               sizeof(audio_header.audio_specific_config)));
  if (audio_header.audio_specific_config_size > 0) {
    SbMemoryCopy(audio_header.audio_specific_config,
                 &audio_decoder_config.extra_data()[0],
                 audio_header.audio_specific_config_size);
  }
#endif  // SB_HAS(AUDIO_SPECIFIC_CONFIG_AS_POINTER)

  return audio_header;
}

DemuxerStream::Type SbMediaTypeToDemuxerStreamType(SbMediaType type) {
  if (type == kSbMediaTypeAudio) {
    return DemuxerStream::AUDIO;
  }
  DCHECK_EQ(type, kSbMediaTypeVideo);
  return DemuxerStream::VIDEO;
}

SbMediaType DemuxerStreamTypeToSbMediaType(DemuxerStream::Type type) {
  if (type == DemuxerStream::AUDIO) {
    return kSbMediaTypeAudio;
  }
  DCHECK_EQ(type, DemuxerStream::VIDEO);
  return kSbMediaTypeVideo;
}

void FillDrmSampleInfo(const scoped_refptr<DecoderBuffer>& buffer,
                       SbDrmSampleInfo* drm_info,
                       SbDrmSubSampleMapping* subsample_mapping) {
  DCHECK(drm_info);
  DCHECK(subsample_mapping);

  const DecryptConfig* config = buffer->decrypt_config();
  if (!config || config->iv().empty() || config->key_id().empty()) {
    drm_info->initialization_vector_size = 0;
    drm_info->identifier_size = 0;
    drm_info->subsample_count = 0;
    drm_info->subsample_mapping = NULL;
    return;
  }

  DCHECK_LE(config->iv().size(), sizeof(drm_info->initialization_vector));
  DCHECK_LE(config->key_id().size(), sizeof(drm_info->identifier));

  if (config->iv().size() > sizeof(drm_info->initialization_vector) ||
      config->key_id().size() > sizeof(drm_info->identifier)) {
    drm_info->initialization_vector_size = 0;
    drm_info->identifier_size = 0;
    drm_info->subsample_count = 0;
    drm_info->subsample_mapping = NULL;
    return;
  }

  SbMemoryCopy(drm_info->initialization_vector, &config->iv()[0],
               config->iv().size());
  drm_info->initialization_vector_size = config->iv().size();
  SbMemoryCopy(drm_info->identifier, &config->key_id()[0],
               config->key_id().size());
  drm_info->identifier_size = config->key_id().size();
  drm_info->subsample_count = config->subsamples().size();

  if (drm_info->subsample_count > 0) {
    COMPILE_ASSERT(sizeof(SbDrmSubSampleMapping) == sizeof(SubsampleEntry),
                   SubSampleEntrySizesMatch);
    drm_info->subsample_mapping =
        reinterpret_cast<const SbDrmSubSampleMapping*>(
            &config->subsamples()[0]);
  } else {
    drm_info->subsample_count = 1;
    drm_info->subsample_mapping = subsample_mapping;
    subsample_mapping->clear_byte_count = 0;
    subsample_mapping->encrypted_byte_count = buffer->data_size();
  }
}

// Ensure that the enums in starboard/media.h match enums in gfx::CbColorSpace.
#define ENUM_EQ(a, b) \
  COMPILE_ASSERT(static_cast<int>(a) == static_cast<int>(b), mismatching_enums)

// Ensure PrimaryId enums convert correctly.
ENUM_EQ(kSbMediaPrimaryIdReserved0, gfx::CbColorSpace::kPrimaryIdReserved0);
ENUM_EQ(kSbMediaPrimaryIdBt709, gfx::CbColorSpace::kPrimaryIdBt709);
ENUM_EQ(kSbMediaPrimaryIdUnspecified, gfx::CbColorSpace::kPrimaryIdUnspecified);
ENUM_EQ(kSbMediaPrimaryIdReserved, gfx::CbColorSpace::kPrimaryIdReserved);
ENUM_EQ(kSbMediaPrimaryIdBt470M, gfx::CbColorSpace::kPrimaryIdBt470M);
ENUM_EQ(kSbMediaPrimaryIdBt470Bg, gfx::CbColorSpace::kPrimaryIdBt470Bg);
ENUM_EQ(kSbMediaPrimaryIdSmpte170M, gfx::CbColorSpace::kPrimaryIdSmpte170M);
ENUM_EQ(kSbMediaPrimaryIdSmpte240M, gfx::CbColorSpace::kPrimaryIdSmpte240M);
ENUM_EQ(kSbMediaPrimaryIdFilm, gfx::CbColorSpace::kPrimaryIdFilm);
ENUM_EQ(kSbMediaPrimaryIdBt2020, gfx::CbColorSpace::kPrimaryIdBt2020);
ENUM_EQ(kSbMediaPrimaryIdSmpteSt4281, gfx::CbColorSpace::kPrimaryIdSmpteSt4281);
ENUM_EQ(kSbMediaPrimaryIdSmpteSt4312, gfx::CbColorSpace::kPrimaryIdSmpteSt4312);
ENUM_EQ(kSbMediaPrimaryIdSmpteSt4321, gfx::CbColorSpace::kPrimaryIdSmpteSt4321);
ENUM_EQ(kSbMediaPrimaryIdLastStandardValue,
        gfx::CbColorSpace::kPrimaryIdLastStandardValue);
ENUM_EQ(kSbMediaPrimaryIdUnknown, gfx::CbColorSpace::kPrimaryIdUnknown);
ENUM_EQ(kSbMediaPrimaryIdXyzD50, gfx::CbColorSpace::kPrimaryIdXyzD50);
ENUM_EQ(kSbMediaPrimaryIdCustom, gfx::CbColorSpace::kPrimaryIdCustom);
ENUM_EQ(kSbMediaPrimaryIdLast, gfx::CbColorSpace::kPrimaryIdLast);

// Ensure TransferId enums convert correctly.
ENUM_EQ(kSbMediaTransferIdReserved0, gfx::CbColorSpace::kTransferIdReserved0);
ENUM_EQ(kSbMediaTransferIdBt709, gfx::CbColorSpace::kTransferIdBt709);
ENUM_EQ(kSbMediaTransferIdUnspecified, gfx::CbColorSpace::kTransferIdUnspecified);
ENUM_EQ(kSbMediaTransferIdReserved, gfx::CbColorSpace::kTransferIdReserved);
ENUM_EQ(kSbMediaTransferIdGamma22, gfx::CbColorSpace::kTransferIdGamma22);
ENUM_EQ(kSbMediaTransferIdGamma28, gfx::CbColorSpace::kTransferIdGamma28);
ENUM_EQ(kSbMediaTransferIdSmpte170M, gfx::CbColorSpace::kTransferIdSmpte170M);
ENUM_EQ(kSbMediaTransferIdSmpte240M, gfx::CbColorSpace::kTransferIdSmpte240M);
ENUM_EQ(kSbMediaTransferIdLinear, gfx::CbColorSpace::kTransferIdLinear);
ENUM_EQ(kSbMediaTransferIdLog, gfx::CbColorSpace::kTransferIdLog);
ENUM_EQ(kSbMediaTransferIdLogSqrt, gfx::CbColorSpace::kTransferIdLogSqrt);
ENUM_EQ(kSbMediaTransferIdIec6196624, gfx::CbColorSpace::kTransferIdIec6196624);
ENUM_EQ(kSbMediaTransferIdBt1361Ecg, gfx::CbColorSpace::kTransferIdBt1361Ecg);
ENUM_EQ(kSbMediaTransferIdIec6196621, gfx::CbColorSpace::kTransferIdIec6196621);
ENUM_EQ(kSbMediaTransferId10BitBt2020, gfx::CbColorSpace::kTransferId10BitBt2020);
ENUM_EQ(kSbMediaTransferId12BitBt2020, gfx::CbColorSpace::kTransferId12BitBt2020);
ENUM_EQ(kSbMediaTransferIdSmpteSt2084, gfx::CbColorSpace::kTransferIdSmpteSt2084);
ENUM_EQ(kSbMediaTransferIdSmpteSt4281, gfx::CbColorSpace::kTransferIdSmpteSt4281);
ENUM_EQ(kSbMediaTransferIdAribStdB67, gfx::CbColorSpace::kTransferIdAribStdB67);
ENUM_EQ(kSbMediaTransferIdLastStandardValue,
        gfx::CbColorSpace::kTransferIdLastStandardValue);
ENUM_EQ(kSbMediaTransferIdUnknown, gfx::CbColorSpace::kTransferIdUnknown);
ENUM_EQ(kSbMediaTransferIdGamma24, gfx::CbColorSpace::kTransferIdGamma24);
ENUM_EQ(kSbMediaTransferIdSmpteSt2084NonHdr,
        gfx::CbColorSpace::kTransferIdSmpteSt2084NonHdr);
ENUM_EQ(kSbMediaTransferIdCustom, gfx::CbColorSpace::kTransferIdCustom);
ENUM_EQ(kSbMediaTransferIdLast, gfx::CbColorSpace::kTransferIdLast);

// Ensure MatrixId enums convert correctly.
ENUM_EQ(kSbMediaMatrixIdRgb, gfx::CbColorSpace::kMatrixIdRgb);
ENUM_EQ(kSbMediaMatrixIdBt709, gfx::CbColorSpace::kMatrixIdBt709);
ENUM_EQ(kSbMediaMatrixIdUnspecified, gfx::CbColorSpace::kMatrixIdUnspecified);
ENUM_EQ(kSbMediaMatrixIdReserved, gfx::CbColorSpace::kMatrixIdReserved);
ENUM_EQ(kSbMediaMatrixIdFcc, gfx::CbColorSpace::kMatrixIdFcc);
ENUM_EQ(kSbMediaMatrixIdBt470Bg, gfx::CbColorSpace::kMatrixIdBt470Bg);
ENUM_EQ(kSbMediaMatrixIdSmpte170M, gfx::CbColorSpace::kMatrixIdSmpte170M);
ENUM_EQ(kSbMediaMatrixIdSmpte240M, gfx::CbColorSpace::kMatrixIdSmpte240M);
ENUM_EQ(kSbMediaMatrixIdYCgCo, gfx::CbColorSpace::kMatrixIdYCgCo);
ENUM_EQ(kSbMediaMatrixIdBt2020NonconstantLuminance,
        gfx::CbColorSpace::kMatrixIdBt2020NonconstantLuminance);
ENUM_EQ(kSbMediaMatrixIdBt2020ConstantLuminance,
        gfx::CbColorSpace::kMatrixIdBt2020ConstantLuminance);
ENUM_EQ(kSbMediaMatrixIdYDzDx, gfx::CbColorSpace::kMatrixIdYDzDx);
ENUM_EQ(kSbMediaMatrixIdLastStandardValue,
        gfx::CbColorSpace::kMatrixIdLastStandardValue);
ENUM_EQ(kSbMediaMatrixIdUnknown, gfx::CbColorSpace::kMatrixIdUnknown);
ENUM_EQ(kSbMediaMatrixIdLast, gfx::CbColorSpace::kMatrixIdLast);

// Ensure RangeId enums convert correctly.
ENUM_EQ(kSbMediaRangeIdUnspecified, gfx::CbColorSpace::kRangeIdUnspecified);
ENUM_EQ(kSbMediaRangeIdLimited, gfx::CbColorSpace::kRangeIdLimited);
ENUM_EQ(kSbMediaRangeIdFull, gfx::CbColorSpace::kRangeIdFull);
ENUM_EQ(kSbMediaRangeIdDerived, gfx::CbColorSpace::kRangeIdDerived);
ENUM_EQ(kSbMediaRangeIdLast, gfx::CbColorSpace::kRangeIdLast);

SbMediaColorMetadata MediaToSbMediaColorMetadata(
    const WebMColorMetadata& webm_color_metadata) {
  SbMediaColorMetadata sb_media_color_metadata;

  // Copy the other color metadata below.
  sb_media_color_metadata.bits_per_channel = webm_color_metadata.BitsPerChannel;
  sb_media_color_metadata.chroma_subsampling_horizontal =
      webm_color_metadata.ChromaSubsamplingHorz;
  sb_media_color_metadata.chroma_subsampling_vertical =
      webm_color_metadata.ChromaSubsamplingVert;
  sb_media_color_metadata.cb_subsampling_horizontal =
      webm_color_metadata.CbSubsamplingHorz;
  sb_media_color_metadata.cb_subsampling_vertical =
      webm_color_metadata.CbSubsamplingVert;
  sb_media_color_metadata.chroma_siting_horizontal =
      webm_color_metadata.ChromaSitingHorz;
  sb_media_color_metadata.chroma_siting_vertical =
      webm_color_metadata.ChromaSitingVert;

  // Copy the HDR Metadata below.
  SbMediaMasteringMetadata sb_media_mastering_metadata;
  HDRMetadata hdr_metadata = webm_color_metadata.hdr_metadata;
  MasteringMetadata mastering_metadata = hdr_metadata.mastering_metadata;

  sb_media_mastering_metadata.primary_r_chromaticity_x =
      mastering_metadata.primary_r_chromaticity_x;
  sb_media_mastering_metadata.primary_r_chromaticity_y =
      mastering_metadata.primary_r_chromaticity_y;

  sb_media_mastering_metadata.primary_g_chromaticity_x =
      mastering_metadata.primary_g_chromaticity_x;
  sb_media_mastering_metadata.primary_g_chromaticity_y =
      mastering_metadata.primary_g_chromaticity_y;

  sb_media_mastering_metadata.primary_b_chromaticity_x =
      mastering_metadata.primary_b_chromaticity_x;
  sb_media_mastering_metadata.primary_b_chromaticity_y =
      mastering_metadata.primary_b_chromaticity_y;

  sb_media_mastering_metadata.white_point_chromaticity_x =
      mastering_metadata.white_point_chromaticity_x;
  sb_media_mastering_metadata.white_point_chromaticity_y =
      mastering_metadata.white_point_chromaticity_y;

  sb_media_mastering_metadata.luminance_max = mastering_metadata.luminance_max;
  sb_media_mastering_metadata.luminance_min = mastering_metadata.luminance_min;

  sb_media_color_metadata.mastering_metadata = sb_media_mastering_metadata;
  sb_media_color_metadata.max_cll = hdr_metadata.max_cll;
  sb_media_color_metadata.max_fall = hdr_metadata.max_fall;

  // Copy the color space below.
  gfx::CbColorSpace color_space = webm_color_metadata.color_space;
  sb_media_color_metadata.primaries =
      static_cast<SbMediaPrimaryId>(color_space.primaries());
  sb_media_color_metadata.transfer =
      static_cast<SbMediaTransferId>(color_space.transfer());
  sb_media_color_metadata.matrix =
      static_cast<SbMediaMatrixId>(color_space.matrix());
  sb_media_color_metadata.range =
      static_cast<SbMediaRangeId>(color_space.range());
  if (sb_media_color_metadata.primaries == kSbMediaPrimaryIdCustom) {
    const float* custom_primary_matrix = color_space.custom_primary_matrix();
    SbMemoryCopy(sb_media_color_metadata.custom_primary_matrix,
                 custom_primary_matrix, sizeof(custom_primary_matrix));
  }

  return sb_media_color_metadata;
}

}  // namespace media
}  // namespace cobalt
