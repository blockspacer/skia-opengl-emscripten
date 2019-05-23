// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_FORWARD_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {
class VideoCaptureFormatDataView;

class VideoCaptureParamsDataView;

class PlaneStridesDataView;

class VideoFrameInfoDataView;

class VideoCaptureDeviceDescriptorDataView;

class VideoCaptureDeviceInfoDataView;

class MailboxBufferHandleSetDataView;

class SharedMemoryViaRawFileDescriptorDataView;

class VideoBufferHandleDataView;

enum class VideoCapturePixelFormat : int32_t;

enum class ResolutionChangePolicy : int32_t;

enum class PowerLineFrequency : int32_t;

enum class VideoFacingMode : int32_t;

enum class VideoCaptureApi : int32_t;

enum class VideoCaptureTransportType : int32_t;

enum class VideoCaptureBufferType : int32_t;

enum class VideoCaptureError : int32_t;

enum class VideoCaptureFrameDropReason : int32_t;
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




}  // namespace mojom
}  // namespace media
#include "media/capture/video/video_capture_device_descriptor.h"
#include "media/capture/video/video_capture_device_info.h"
#include "media/capture/video_capture_types.h"

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_FORWARD_H_