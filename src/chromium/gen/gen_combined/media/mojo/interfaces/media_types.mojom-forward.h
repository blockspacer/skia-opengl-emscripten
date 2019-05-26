// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
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
using MediaLogEvent = mojo::native::NativeStruct;
using MediaLogEventPtr = mojo::native::NativeStructPtr;

class VideoTransformation;
using VideoTransformationPtr = mojo::InlinedStructPtr<VideoTransformation>;

class EncryptionPattern;
using EncryptionPatternPtr = mojo::InlinedStructPtr<EncryptionPattern>;

class EncryptionScheme;
using EncryptionSchemePtr = mojo::StructPtr<EncryptionScheme>;

class VideoColorSpace;
using VideoColorSpacePtr = mojo::InlinedStructPtr<VideoColorSpace>;

class MasteringMetadata;
using MasteringMetadataPtr = mojo::StructPtr<MasteringMetadata>;

class HDRMetadata;
using HDRMetadataPtr = mojo::StructPtr<HDRMetadata>;

class AudioDecoderConfig;
using AudioDecoderConfigPtr = mojo::StructPtr<AudioDecoderConfig>;

class VideoDecoderConfig;
using VideoDecoderConfigPtr = mojo::StructPtr<VideoDecoderConfig>;

using SubsampleEntry = mojo::native::NativeStruct;
using SubsampleEntryPtr = mojo::native::NativeStructPtr;

class DecryptConfig;
using DecryptConfigPtr = mojo::StructPtr<DecryptConfig>;

class DecoderBuffer;
using DecoderBufferPtr = mojo::StructPtr<DecoderBuffer>;

class AudioBuffer;
using AudioBufferPtr = mojo::StructPtr<AudioBuffer>;

class VideoFrame;
using VideoFramePtr = mojo::StructPtr<VideoFrame>;

class EosVideoFrameData;
using EosVideoFrameDataPtr = mojo::InlinedStructPtr<EosVideoFrameData>;

class SharedBufferVideoFrameData;
using SharedBufferVideoFrameDataPtr = mojo::StructPtr<SharedBufferVideoFrameData>;

class MailboxVideoFrameData;
using MailboxVideoFrameDataPtr = mojo::StructPtr<MailboxVideoFrameData>;

class PipelineStatistics;
using PipelineStatisticsPtr = mojo::StructPtr<PipelineStatistics>;

class PredictionFeatures;
using PredictionFeaturesPtr = mojo::StructPtr<PredictionFeatures>;

class PredictionTargets;
using PredictionTargetsPtr = mojo::InlinedStructPtr<PredictionTargets>;

class VideoFrameData;

typedef mojo::StructPtr<VideoFrameData> VideoFrameDataPtr;




}  // namespace mojom
}  // namespace media
#include "base/memory/ref_counted.h"
#include "media/base/audio_codecs.h"
#include "media/base/audio_decoder_config.h"
#include "media/base/buffering_state.h"
#include "media/base/channel_layout.h"
#include "media/base/container_names.h"
#include "media/base/decode_status.h"
#include "media/base/decrypt_config.h"
#include "media/base/encryption_pattern.h"
#include "media/base/encryption_scheme.h"
#include "media/base/hdr_metadata.h"
#include "media/base/media_log_event.h"
#include "media/base/media_status.h"
#include "media/base/output_device_info.h"
#include "media/base/pipeline_status.h"
#include "media/base/sample_format.h"
#include "media/base/subsample_entry.h"
#include "media/base/video_codecs.h"
#include "media/base/video_color_space.h"
#include "media/base/video_decoder_config.h"
#include "media/base/video_frame.h"
#include "media/base/video_transformation.h"
#include "media/base/video_types.h"
#include "media/base/waiting.h"
#include "media/base/watch_time_keys.h"
#include "ui/gfx/color_space.h"

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_FORWARD_H_