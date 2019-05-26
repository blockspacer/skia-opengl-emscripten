// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_BLINK_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


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
}  // namespace media
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"


namespace media {
namespace mojom {
namespace blink {
using AudioCodec = AudioCodec;  // Alias for definition in the parent namespace.
using BufferingState = BufferingState;  // Alias for definition in the parent namespace.
using ChannelLayout = ChannelLayout;  // Alias for definition in the parent namespace.
using ColorSpace = ColorSpace;  // Alias for definition in the parent namespace.
using DecodeStatus = DecodeStatus;  // Alias for definition in the parent namespace.
using OutputDeviceStatus = OutputDeviceStatus;  // Alias for definition in the parent namespace.
using PipelineStatus = PipelineStatus;  // Alias for definition in the parent namespace.
using SampleFormat = SampleFormat;  // Alias for definition in the parent namespace.
using VideoCodec = VideoCodec;  // Alias for definition in the parent namespace.
using VideoCodecProfile = VideoCodecProfile;  // Alias for definition in the parent namespace.
using VideoPixelFormat = VideoPixelFormat;  // Alias for definition in the parent namespace.
using VideoRotation = VideoRotation;  // Alias for definition in the parent namespace.
using WaitingReason = WaitingReason;  // Alias for definition in the parent namespace.
using WatchTimeKey = WatchTimeKey;  // Alias for definition in the parent namespace.
using EncryptionMode = EncryptionMode;  // Alias for definition in the parent namespace.
using MediaContainerName = MediaContainerName;  // Alias for definition in the parent namespace.
using MediaStatusState = MediaStatusState;  // Alias for definition in the parent namespace.
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




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_BLINK_FORWARD_H_