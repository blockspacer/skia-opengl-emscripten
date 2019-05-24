// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_BLINK_FORWARD_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {

enum class VideoCapturePixelFormat : int32_t;

enum class ResolutionChangePolicy : int32_t;

enum class PowerLineFrequency : int32_t;

enum class VideoFacingMode : int32_t;

enum class VideoCaptureApi : int32_t;

enum class VideoCaptureTransportType : int32_t;

enum class VideoCaptureBufferType : int32_t;

enum class VideoCaptureError : int32_t;

enum class VideoCaptureFrameDropReason : int32_t;
}  // namespace media
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct media_mojom_internal_VideoCapturePixelFormat_DataHashFn;

template <>
struct DefaultHash<::media::mojom::VideoCapturePixelFormat> {
  using Hash = media_mojom_internal_VideoCapturePixelFormat_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_mojom_internal_ResolutionChangePolicy_DataHashFn;

template <>
struct DefaultHash<::media::mojom::ResolutionChangePolicy> {
  using Hash = media_mojom_internal_ResolutionChangePolicy_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_mojom_internal_PowerLineFrequency_DataHashFn;

template <>
struct DefaultHash<::media::mojom::PowerLineFrequency> {
  using Hash = media_mojom_internal_PowerLineFrequency_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_mojom_internal_VideoFacingMode_DataHashFn;

template <>
struct DefaultHash<::media::mojom::VideoFacingMode> {
  using Hash = media_mojom_internal_VideoFacingMode_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_mojom_internal_VideoCaptureApi_DataHashFn;

template <>
struct DefaultHash<::media::mojom::VideoCaptureApi> {
  using Hash = media_mojom_internal_VideoCaptureApi_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_mojom_internal_VideoCaptureTransportType_DataHashFn;

template <>
struct DefaultHash<::media::mojom::VideoCaptureTransportType> {
  using Hash = media_mojom_internal_VideoCaptureTransportType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_mojom_internal_VideoCaptureBufferType_DataHashFn;

template <>
struct DefaultHash<::media::mojom::VideoCaptureBufferType> {
  using Hash = media_mojom_internal_VideoCaptureBufferType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_mojom_internal_VideoCaptureError_DataHashFn;

template <>
struct DefaultHash<::media::mojom::VideoCaptureError> {
  using Hash = media_mojom_internal_VideoCaptureError_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_mojom_internal_VideoCaptureFrameDropReason_DataHashFn;

template <>
struct DefaultHash<::media::mojom::VideoCaptureFrameDropReason> {
  using Hash = media_mojom_internal_VideoCaptureFrameDropReason_DataHashFn;
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {
using VideoCapturePixelFormat = VideoCapturePixelFormat;  // Alias for definition in the parent namespace.
using ResolutionChangePolicy = ResolutionChangePolicy;  // Alias for definition in the parent namespace.
using PowerLineFrequency = PowerLineFrequency;  // Alias for definition in the parent namespace.
using VideoFacingMode = VideoFacingMode;  // Alias for definition in the parent namespace.
using VideoCaptureApi = VideoCaptureApi;  // Alias for definition in the parent namespace.
using VideoCaptureTransportType = VideoCaptureTransportType;  // Alias for definition in the parent namespace.
using VideoCaptureBufferType = VideoCaptureBufferType;  // Alias for definition in the parent namespace.
using VideoCaptureError = VideoCaptureError;  // Alias for definition in the parent namespace.
using VideoCaptureFrameDropReason = VideoCaptureFrameDropReason;  // Alias for definition in the parent namespace.
class VideoCaptureFormat;
using VideoCaptureFormatPtr = mojo::StructPtr<VideoCaptureFormat>;

class VideoCaptureParams;
using VideoCaptureParamsPtr = mojo::StructPtr<VideoCaptureParams>;

class PlaneStrides;
using PlaneStridesPtr = mojo::StructPtr<PlaneStrides>;

class VideoFrameInfo;
using VideoFrameInfoPtr = mojo::StructPtr<VideoFrameInfo>;

class VideoCaptureDeviceDescriptor;
using VideoCaptureDeviceDescriptorPtr = mojo::StructPtr<VideoCaptureDeviceDescriptor>;

class VideoCaptureDeviceInfo;
using VideoCaptureDeviceInfoPtr = mojo::StructPtr<VideoCaptureDeviceInfo>;

class MailboxBufferHandleSet;
using MailboxBufferHandleSetPtr = mojo::StructPtr<MailboxBufferHandleSet>;

class SharedMemoryViaRawFileDescriptor;
using SharedMemoryViaRawFileDescriptorPtr = mojo::StructPtr<SharedMemoryViaRawFileDescriptor>;

class VideoBufferHandle;

typedef mojo::StructPtr<VideoBufferHandle> VideoBufferHandlePtr;




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_BLINK_FORWARD_H_