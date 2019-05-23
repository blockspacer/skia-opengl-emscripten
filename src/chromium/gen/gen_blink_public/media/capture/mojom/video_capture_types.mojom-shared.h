// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_SHARED_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_SHARED_H_

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
#include "media/capture/mojom/video_capture_types.mojom-shared-internal.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/color_space.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
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


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::VideoCaptureFormatDataView> {
  using Data = ::media::mojom::internal::VideoCaptureFormat_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoCaptureParamsDataView> {
  using Data = ::media::mojom::internal::VideoCaptureParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::PlaneStridesDataView> {
  using Data = ::media::mojom::internal::PlaneStrides_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoFrameInfoDataView> {
  using Data = ::media::mojom::internal::VideoFrameInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoCaptureDeviceDescriptorDataView> {
  using Data = ::media::mojom::internal::VideoCaptureDeviceDescriptor_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoCaptureDeviceInfoDataView> {
  using Data = ::media::mojom::internal::VideoCaptureDeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::MailboxBufferHandleSetDataView> {
  using Data = ::media::mojom::internal::MailboxBufferHandleSet_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::SharedMemoryViaRawFileDescriptorDataView> {
  using Data = ::media::mojom::internal::SharedMemoryViaRawFileDescriptor_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoBufferHandleDataView> {
  using Data = ::media::mojom::internal::VideoBufferHandle_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {


enum class VideoCapturePixelFormat : int32_t {
  
  UNKNOWN,
  
  I420,
  
  YV12,
  
  I422,
  
  I420A,
  
  I444,
  
  NV12,
  
  NV21,
  
  UYVY,
  
  YUY2,
  
  ARGB,
  
  XRGB,
  
  RGB24,
  
  RGB32,
  
  MJPEG,
  
  MT21,
  
  YUV420P9,
  
  YUV420P10,
  
  YUV422P9,
  
  YUV422P10,
  
  YUV444P9,
  
  YUV444P10,
  
  YUV420P12,
  
  YUV422P12,
  
  YUV444P12,
  
  Y16,
  
  ABGR,
  
  XBGR,
  
  P016LE,
  kMinValue = 0,
  kMaxValue = 28,
};

 std::ostream& operator<<(std::ostream& os, VideoCapturePixelFormat value);
inline bool IsKnownEnumValue(VideoCapturePixelFormat value) {
  return internal::VideoCapturePixelFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ResolutionChangePolicy : int32_t {
  
  FIXED_RESOLUTION,
  
  FIXED_ASPECT_RATIO,
  
  ANY_WITHIN_LIMIT,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, ResolutionChangePolicy value);
inline bool IsKnownEnumValue(ResolutionChangePolicy value) {
  return internal::ResolutionChangePolicy_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PowerLineFrequency : int32_t {
  
  DEFAULT,
  
  HZ_50,
  
  HZ_60,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, PowerLineFrequency value);
inline bool IsKnownEnumValue(PowerLineFrequency value) {
  return internal::PowerLineFrequency_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class VideoFacingMode : int32_t {
  
  NONE,
  
  USER,
  
  ENVIRONMENT,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, VideoFacingMode value);
inline bool IsKnownEnumValue(VideoFacingMode value) {
  return internal::VideoFacingMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class VideoCaptureApi : int32_t {
  
  LINUX_V4L2_SINGLE_PLANE,
  
  WIN_MEDIA_FOUNDATION,
  
  WIN_MEDIA_FOUNDATION_SENSOR,
  
  WIN_DIRECT_SHOW,
  
  MACOSX_AVFOUNDATION,
  
  MACOSX_DECKLINK,
  
  ANDROID_API1,
  
  ANDROID_API2_LEGACY,
  
  ANDROID_API2_FULL,
  
  ANDROID_API2_LIMITED,
  
  VIRTUAL_DEVICE,
  
  UNKNOWN,
  kMinValue = 0,
  kMaxValue = 11,
};

 std::ostream& operator<<(std::ostream& os, VideoCaptureApi value);
inline bool IsKnownEnumValue(VideoCaptureApi value) {
  return internal::VideoCaptureApi_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class VideoCaptureTransportType : int32_t {
  
  MACOSX_USB_OR_BUILT_IN,
  
  OTHER_TRANSPORT,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, VideoCaptureTransportType value);
inline bool IsKnownEnumValue(VideoCaptureTransportType value) {
  return internal::VideoCaptureTransportType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class VideoCaptureBufferType : int32_t {
  
  kSharedMemory,
  
  kSharedMemoryViaRawFileDescriptor,
  
  kMailboxHolder,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, VideoCaptureBufferType value);
inline bool IsKnownEnumValue(VideoCaptureBufferType value) {
  return internal::VideoCaptureBufferType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class VideoCaptureError : int32_t {
  
  kNone,
  
  kVideoCaptureControllerInvalidOrUnsupportedVideoCaptureParametersRequested,
  
  kVideoCaptureControllerIsAlreadyInErrorState,
  
  kVideoCaptureManagerDeviceConnectionLost,
  
  kFrameSinkVideoCaptureDeviceAleradyEndedOnFatalError,
  
  kFrameSinkVideoCaptureDeviceEncounteredFatalError,
  
  kV4L2FailedToOpenV4L2DeviceDriverFile,
  
  kV4L2ThisIsNotAV4L2VideoCaptureDevice,
  
  kV4L2FailedToFindASupportedCameraFormat,
  
  kV4L2FailedToSetVideoCaptureFormat,
  
  kV4L2UnsupportedPixelFormat,
  
  kV4L2FailedToSetCameraFramerate,
  
  kV4L2ErrorRequestingMmapBuffers,
  
  kV4L2AllocateBufferFailed,
  
  kV4L2VidiocStreamonFailed,
  
  kV4L2VidiocStreamoffFailed,
  
  kV4L2FailedToVidiocReqbufsWithCount0,
  
  kV4L2PollFailed,
  
  kV4L2MultipleContinuousTimeoutsWhileReadPolling,
  
  kV4L2FailedToDequeueCaptureBuffer,
  
  kV4L2FailedToEnqueueCaptureBuffer,
  
  kSingleClientVideoCaptureHostLostConnectionToDevice,
  
  kSingleClientVideoCaptureDeviceLaunchAborted,
  
  kDesktopCaptureDeviceWebrtcDesktopCapturerHasFailed,
  
  kFileVideoCaptureDeviceCouldNotOpenVideoFile,
  
  kDeviceCaptureLinuxFailedToCreateVideoCaptureDelegate,
  
  kErrorFakeDeviceIntentionallyEmittingErrorEvent,
  
  kDeviceClientTooManyFramesDroppedY16,
  
  kDeviceMediaToMojoAdapterEncounteredUnsupportedBufferType,
  
  kVideoCaptureManagerProcessDeviceStartQueueDeviceInfoNotFound,
  
  kInProcessDeviceLauncherFailedToCreateDeviceInstance,
  
  kServiceDeviceLauncherLostConnectionToDeviceFactoryDuringDeviceStart,
  
  kServiceDeviceLauncherServiceRespondedWithDeviceNotFound,
  
  kServiceDeviceLauncherConnectionLostWhileWaitingForCallback,
  
  kIntentionalErrorRaisedByUnitTest,
  
  kCrosHalV3FailedToStartDeviceThread,
  
  kCrosHalV3DeviceDelegateMojoConnectionError,
  
  kCrosHalV3DeviceDelegateFailedToGetCameraInfo,
  
  kCrosHalV3DeviceDelegateMissingSensorOrientationInfo,
  
  kCrosHalV3DeviceDelegateFailedToOpenCameraDevice,
  
  kCrosHalV3DeviceDelegateFailedToInitializeCameraDevice,
  
  kCrosHalV3DeviceDelegateFailedToConfigureStreams,
  
  kCrosHalV3DeviceDelegateWrongNumberOfStreamsConfigured,
  
  kCrosHalV3DeviceDelegateFailedToGetDefaultRequestSettings,
  
  kCrosHalV3BufferManagerHalRequestedTooManyBuffers,
  
  kCrosHalV3BufferManagerFailedToCreateGpuMemoryBuffer,
  
  kCrosHalV3BufferManagerFailedToMapGpuMemoryBuffer,
  
  kCrosHalV3BufferManagerUnsupportedVideoPixelFormat,
  
  kCrosHalV3BufferManagerFailedToDupFd,
  
  kCrosHalV3BufferManagerFailedToWrapGpuMemoryHandle,
  
  kCrosHalV3BufferManagerFailedToRegisterBuffer,
  
  kCrosHalV3BufferManagerProcessCaptureRequestFailed,
  
  kCrosHalV3BufferManagerInvalidPendingResultId,
  
  kCrosHalV3BufferManagerReceivedDuplicatedPartialMetadata,
  
  kCrosHalV3BufferManagerIncorrectNumberOfOutputBuffersReceived,
  
  kCrosHalV3BufferManagerInvalidTypeOfOutputBuffersReceived,
  
  kCrosHalV3BufferManagerReceivedMultipleResultBuffersForFrame,
  
  kCrosHalV3BufferManagerUnknownStreamInCamera3NotifyMsg,
  
  kCrosHalV3BufferManagerReceivedInvalidShutterTime,
  
  kCrosHalV3BufferManagerFatalDeviceError,
  
  kCrosHalV3BufferManagerReceivedFrameIsOutOfOrder,
  
  kCrosHalV3BufferManagerFailedToUnwrapReleaseFenceFd,
  
  kCrosHalV3BufferManagerSyncWaitOnReleaseFenceTimedOut,
  
  kCrosHalV3BufferManagerInvalidJpegBlob,
  
  kAndroidFailedToAllocate,
  
  kAndroidFailedToStartCapture,
  
  kAndroidFailedToStopCapture,
  
  kAndroidApi1CameraErrorCallbackReceived,
  
  kAndroidApi2CameraDeviceErrorReceived,
  
  kAndroidApi2CaptureSessionConfigureFailed,
  
  kAndroidApi2ImageReaderUnexpectedImageFormat,
  
  kAndroidApi2ImageReaderSizeDidNotMatchImageSize,
  
  kAndroidApi2ErrorRestartingPreview,
  
  kAndroidScreenCaptureUnsupportedFormat,
  
  kAndroidScreenCaptureFailedToStartCaptureMachine,
  
  kAndroidScreenCaptureTheUserDeniedScreenCapture,
  
  kAndroidScreenCaptureFailedToStartScreenCapture,
  
  kWinDirectShowCantGetCaptureFormatSettings,
  
  kWinDirectShowFailedToGetNumberOfCapabilities,
  
  kWinDirectShowFailedToGetCaptureDeviceCapabilities,
  
  kWinDirectShowFailedToSetCaptureDeviceOutputFormat,
  
  kWinDirectShowFailedToConnectTheCaptureGraph,
  
  kWinDirectShowFailedToPauseTheCaptureDevice,
  
  kWinDirectShowFailedToStartTheCaptureDevice,
  
  kWinDirectShowFailedToStopTheCaptureGraph,
  
  kWinMediaFoundationEngineIsNull,
  
  kWinMediaFoundationEngineGetSourceFailed,
  
  kWinMediaFoundationFillPhotoCapabilitiesFailed,
  
  kWinMediaFoundationFillVideoCapabilitiesFailed,
  
  kWinMediaFoundationNoVideoCapabilityFound,
  
  kWinMediaFoundationGetAvailableDeviceMediaTypeFailed,
  
  kWinMediaFoundationSetCurrentDeviceMediaTypeFailed,
  
  kWinMediaFoundationEngineGetSinkFailed,
  
  kWinMediaFoundationSinkQueryCapturePreviewInterfaceFailed,
  
  kWinMediaFoundationSinkRemoveAllStreamsFailed,
  
  kWinMediaFoundationCreateSinkVideoMediaTypeFailed,
  
  kWinMediaFoundationConvertToVideoSinkMediaTypeFailed,
  
  kWinMediaFoundationSinkAddStreamFailed,
  
  kWinMediaFoundationSinkSetSampleCallbackFailed,
  
  kWinMediaFoundationEngineStartPreviewFailed,
  
  kWinMediaFoundationGetMediaEventStatusFailed,
  
  kMacSetCaptureDeviceFailed,
  
  kMacCouldNotStartCaptureDevice,
  
  kMacReceivedFrameWithUnexpectedResolution,
  
  kMacUpdateCaptureResolutionFailed,
  
  kMacDeckLinkDeviceIdNotFoundInTheSystem,
  
  kMacDeckLinkErrorQueryingInputInterface,
  
  kMacDeckLinkErrorCreatingDisplayModeIterator,
  
  kMacDeckLinkCouldNotFindADisplayMode,
  
  kMacDeckLinkCouldNotSelectTheVideoFormatWeLike,
  
  kMacDeckLinkCouldNotStartCapturing,
  
  kMacDeckLinkUnsupportedPixelFormat,
  
  kMacAvFoundationReceivedAVCaptureSessionRuntimeErrorNotification,
  
  kAndroidApi2ErrorConfiguringCamera,
  
  kCrosHalV3DeviceDelegateFailedToFlush,
  kMinValue = 0,
  kMaxValue = 114,
};

 std::ostream& operator<<(std::ostream& os, VideoCaptureError value);
inline bool IsKnownEnumValue(VideoCaptureError value) {
  return internal::VideoCaptureError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class VideoCaptureFrameDropReason : int32_t {
  
  kNone,
  
  kDeviceClientFrameHasInvalidFormat,
  
  kDeviceClientLibyuvConvertToI420Failed,
  
  kV4L2BufferErrorFlagWasSet,
  
  kV4L2InvalidNumberOfBytesInBuffer,
  
  kAndroidThrottling,
  
  kAndroidGetByteArrayElementsFailed,
  
  kAndroidApi1UnexpectedDataLength,
  
  kAndroidApi2AcquiredImageIsNull,
  
  kWinDirectShowUnexpectedSampleLength,
  
  kWinDirectShowFailedToGetMemoryPointerFromMediaSample,
  
  kWinMediaFoundationReceivedSampleIsNull,
  
  kWinMediaFoundationLockingBufferDelieveredNullptr,
  
  kWinMediaFoundationGetBufferByIndexReturnedNull,
  
  kBufferPoolMaxBufferCountExceeded,
  
  kBufferPoolBufferAllocationFailed,
  
  kVideoCaptureImplNotInStartedState,
  
  kVideoCaptureImplFailedToWrapDataAsMediaVideoFrame,
  
  kVideoTrackAdapterHasNoResolutionAdapters,
  
  kResolutionAdapterFrameIsNotValid,
  
  kResolutionAdapterWrappingFrameForCroppingFailed,
  
  kResolutionAdapterTimestampTooCloseToPrevious,
  
  kResolutionAdapterFrameRateIsHigherThanRequested,
  
  kResolutionAdapterHasNoCallbacks,
  
  kVideoTrackFrameDelivererNotEnabledReplacingWithBlackFrame,
  
  kRendererSinkFrameDelivererIsNotStarted,
  kMinValue = 0,
  kMaxValue = 25,
};

 std::ostream& operator<<(std::ostream& os, VideoCaptureFrameDropReason value);
inline bool IsKnownEnumValue(VideoCaptureFrameDropReason value) {
  return internal::VideoCaptureFrameDropReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class VideoCaptureFormatDataView {
 public:
  VideoCaptureFormatDataView() {}

  VideoCaptureFormatDataView(
      internal::VideoCaptureFormat_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSize(UserType* output) {
    auto* pointer = data_->frame_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  float frame_rate() const {
    return data_->frame_rate;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPixelFormat(UserType* output) const {
    auto data_value = data_->pixel_format;
    return mojo::internal::Deserialize<::media::mojom::VideoCapturePixelFormat>(
        data_value, output);
  }

  VideoCapturePixelFormat pixel_format() const {
    return static_cast<VideoCapturePixelFormat>(data_->pixel_format);
  }
 private:
  internal::VideoCaptureFormat_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoCaptureParamsDataView {
 public:
  VideoCaptureParamsDataView() {}

  VideoCaptureParamsDataView(
      internal::VideoCaptureParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestedFormatDataView(
      VideoCaptureFormatDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestedFormat(UserType* output) {
    auto* pointer = data_->requested_format.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureFormatDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBufferType(UserType* output) const {
    auto data_value = data_->buffer_type;
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureBufferType>(
        data_value, output);
  }

  VideoCaptureBufferType buffer_type() const {
    return static_cast<VideoCaptureBufferType>(data_->buffer_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResolutionChangePolicy(UserType* output) const {
    auto data_value = data_->resolution_change_policy;
    return mojo::internal::Deserialize<::media::mojom::ResolutionChangePolicy>(
        data_value, output);
  }

  ResolutionChangePolicy resolution_change_policy() const {
    return static_cast<ResolutionChangePolicy>(data_->resolution_change_policy);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPowerLineFrequency(UserType* output) const {
    auto data_value = data_->power_line_frequency;
    return mojo::internal::Deserialize<::media::mojom::PowerLineFrequency>(
        data_value, output);
  }

  PowerLineFrequency power_line_frequency() const {
    return static_cast<PowerLineFrequency>(data_->power_line_frequency);
  }
  bool enable_face_detection() const {
    return data_->enable_face_detection;
  }
 private:
  internal::VideoCaptureParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PlaneStridesDataView {
 public:
  PlaneStridesDataView() {}

  PlaneStridesDataView(
      internal::PlaneStrides_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStrideByPlaneDataView(
      mojo::ArrayDataView<uint32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrideByPlane(UserType* output) {
    auto* pointer = data_->stride_by_plane.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint32_t>>(
        pointer, output, context_);
  }
 private:
  internal::PlaneStrides_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoFrameInfoDataView {
 public:
  VideoFrameInfoDataView() {}

  VideoFrameInfoDataView(
      internal::VideoFrameInfo_Data* data,
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
  inline void GetMetadataDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPixelFormat(UserType* output) const {
    auto data_value = data_->pixel_format;
    return mojo::internal::Deserialize<::media::mojom::VideoCapturePixelFormat>(
        data_value, output);
  }

  VideoCapturePixelFormat pixel_format() const {
    return static_cast<VideoCapturePixelFormat>(data_->pixel_format);
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
  inline void GetColorSpaceDataView(
      ::gfx::mojom::ColorSpaceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadColorSpace(UserType* output) {
    auto* pointer = data_->color_space.Get();
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceDataView>(
        pointer, output, context_);
  }
  inline void GetStridesDataView(
      PlaneStridesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrides(UserType* output) {
    auto* pointer = data_->strides.Get();
    return mojo::internal::Deserialize<::media::mojom::PlaneStridesDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoFrameInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoCaptureDeviceDescriptorDataView {
 public:
  VideoCaptureDeviceDescriptorDataView() {}

  VideoCaptureDeviceDescriptorDataView(
      internal::VideoCaptureDeviceDescriptor_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayName(UserType* output) {
    auto* pointer = data_->display_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetModelIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModelId(UserType* output) {
    auto* pointer = data_->model_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFacingMode(UserType* output) const {
    auto data_value = data_->facing_mode;
    return mojo::internal::Deserialize<::media::mojom::VideoFacingMode>(
        data_value, output);
  }

  VideoFacingMode facing_mode() const {
    return static_cast<VideoFacingMode>(data_->facing_mode);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCaptureApi(UserType* output) const {
    auto data_value = data_->capture_api;
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureApi>(
        data_value, output);
  }

  VideoCaptureApi capture_api() const {
    return static_cast<VideoCaptureApi>(data_->capture_api);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransportType(UserType* output) const {
    auto data_value = data_->transport_type;
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureTransportType>(
        data_value, output);
  }

  VideoCaptureTransportType transport_type() const {
    return static_cast<VideoCaptureTransportType>(data_->transport_type);
  }
 private:
  internal::VideoCaptureDeviceDescriptor_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoCaptureDeviceInfoDataView {
 public:
  VideoCaptureDeviceInfoDataView() {}

  VideoCaptureDeviceInfoDataView(
      internal::VideoCaptureDeviceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDescriptorDataView(
      VideoCaptureDeviceDescriptorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptor(UserType* output) {
    auto* pointer = data_->descriptor.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureDeviceDescriptorDataView>(
        pointer, output, context_);
  }
  inline void GetSupportedFormatsDataView(
      mojo::ArrayDataView<VideoCaptureFormatDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedFormats(UserType* output) {
    auto* pointer = data_->supported_formats.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        pointer, output, context_);
  }
 private:
  internal::VideoCaptureDeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MailboxBufferHandleSetDataView {
 public:
  MailboxBufferHandleSetDataView() {}

  MailboxBufferHandleSetDataView(
      internal::MailboxBufferHandleSet_Data* data,
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
  internal::MailboxBufferHandleSet_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SharedMemoryViaRawFileDescriptorDataView {
 public:
  SharedMemoryViaRawFileDescriptorDataView() {}

  SharedMemoryViaRawFileDescriptorDataView(
      internal::SharedMemoryViaRawFileDescriptor_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeFileDescriptorHandle() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->file_descriptor_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t shared_memory_size_in_bytes() const {
    return data_->shared_memory_size_in_bytes;
  }
 private:
  internal::SharedMemoryViaRawFileDescriptor_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoBufferHandleDataView {
 public:
  using Tag = internal::VideoBufferHandle_Data::VideoBufferHandle_Tag;

  VideoBufferHandleDataView() {}

  VideoBufferHandleDataView(
      internal::VideoBufferHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_shared_buffer_handle() const { return data_->tag == Tag::SHARED_BUFFER_HANDLE; }
  mojo::ScopedSharedBufferHandle TakeSharedBufferHandle() {
    DCHECK(is_shared_buffer_handle());
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->data.f_shared_buffer_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool is_read_only_shmem_region() const { return data_->tag == Tag::READ_ONLY_SHMEM_REGION; }
  inline void GetReadOnlyShmemRegionDataView(
      ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReadOnlyShmemRegion(UserType* output) {
    DCHECK(is_read_only_shmem_region());
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
        data_->data.f_read_only_shmem_region.Get(), output, context_);
  }
  bool is_shared_memory_via_raw_file_descriptor() const { return data_->tag == Tag::SHARED_MEMORY_VIA_RAW_FILE_DESCRIPTOR; }
  inline void GetSharedMemoryViaRawFileDescriptorDataView(
      SharedMemoryViaRawFileDescriptorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSharedMemoryViaRawFileDescriptor(UserType* output) {
    DCHECK(is_shared_memory_via_raw_file_descriptor());
    return mojo::internal::Deserialize<::media::mojom::SharedMemoryViaRawFileDescriptorDataView>(
        data_->data.f_shared_memory_via_raw_file_descriptor.Get(), output, context_);
  }
  bool is_mailbox_handles() const { return data_->tag == Tag::MAILBOX_HANDLES; }
  inline void GetMailboxHandlesDataView(
      MailboxBufferHandleSetDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMailboxHandles(UserType* output) {
    DCHECK(is_mailbox_handles());
    return mojo::internal::Deserialize<::media::mojom::MailboxBufferHandleSetDataView>(
        data_->data.f_mailbox_handles.Get(), output, context_);
  }

 private:
  internal::VideoBufferHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::VideoCapturePixelFormat>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoCapturePixelFormat> {};

template <>
struct hash<::media::mojom::ResolutionChangePolicy>
    : public mojo::internal::EnumHashImpl<::media::mojom::ResolutionChangePolicy> {};

template <>
struct hash<::media::mojom::PowerLineFrequency>
    : public mojo::internal::EnumHashImpl<::media::mojom::PowerLineFrequency> {};

template <>
struct hash<::media::mojom::VideoFacingMode>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoFacingMode> {};

template <>
struct hash<::media::mojom::VideoCaptureApi>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoCaptureApi> {};

template <>
struct hash<::media::mojom::VideoCaptureTransportType>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoCaptureTransportType> {};

template <>
struct hash<::media::mojom::VideoCaptureBufferType>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoCaptureBufferType> {};

template <>
struct hash<::media::mojom::VideoCaptureError>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoCaptureError> {};

template <>
struct hash<::media::mojom::VideoCaptureFrameDropReason>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoCaptureFrameDropReason> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::VideoCapturePixelFormat, ::media::mojom::VideoCapturePixelFormat> {
  static ::media::mojom::VideoCapturePixelFormat ToMojom(::media::mojom::VideoCapturePixelFormat input) { return input; }
  static bool FromMojom(::media::mojom::VideoCapturePixelFormat input, ::media::mojom::VideoCapturePixelFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCapturePixelFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoCapturePixelFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoCapturePixelFormat>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::ResolutionChangePolicy, ::media::mojom::ResolutionChangePolicy> {
  static ::media::mojom::ResolutionChangePolicy ToMojom(::media::mojom::ResolutionChangePolicy input) { return input; }
  static bool FromMojom(::media::mojom::ResolutionChangePolicy input, ::media::mojom::ResolutionChangePolicy* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::ResolutionChangePolicy, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::ResolutionChangePolicy, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::ResolutionChangePolicy>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::PowerLineFrequency, ::media::mojom::PowerLineFrequency> {
  static ::media::mojom::PowerLineFrequency ToMojom(::media::mojom::PowerLineFrequency input) { return input; }
  static bool FromMojom(::media::mojom::PowerLineFrequency input, ::media::mojom::PowerLineFrequency* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PowerLineFrequency, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::PowerLineFrequency, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::PowerLineFrequency>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::VideoFacingMode, ::media::mojom::VideoFacingMode> {
  static ::media::mojom::VideoFacingMode ToMojom(::media::mojom::VideoFacingMode input) { return input; }
  static bool FromMojom(::media::mojom::VideoFacingMode input, ::media::mojom::VideoFacingMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoFacingMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoFacingMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoFacingMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::VideoCaptureApi, ::media::mojom::VideoCaptureApi> {
  static ::media::mojom::VideoCaptureApi ToMojom(::media::mojom::VideoCaptureApi input) { return input; }
  static bool FromMojom(::media::mojom::VideoCaptureApi input, ::media::mojom::VideoCaptureApi* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureApi, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoCaptureApi, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoCaptureApi>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::VideoCaptureTransportType, ::media::mojom::VideoCaptureTransportType> {
  static ::media::mojom::VideoCaptureTransportType ToMojom(::media::mojom::VideoCaptureTransportType input) { return input; }
  static bool FromMojom(::media::mojom::VideoCaptureTransportType input, ::media::mojom::VideoCaptureTransportType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureTransportType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoCaptureTransportType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoCaptureTransportType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::VideoCaptureBufferType, ::media::mojom::VideoCaptureBufferType> {
  static ::media::mojom::VideoCaptureBufferType ToMojom(::media::mojom::VideoCaptureBufferType input) { return input; }
  static bool FromMojom(::media::mojom::VideoCaptureBufferType input, ::media::mojom::VideoCaptureBufferType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureBufferType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoCaptureBufferType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoCaptureBufferType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::VideoCaptureError, ::media::mojom::VideoCaptureError> {
  static ::media::mojom::VideoCaptureError ToMojom(::media::mojom::VideoCaptureError input) { return input; }
  static bool FromMojom(::media::mojom::VideoCaptureError input, ::media::mojom::VideoCaptureError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoCaptureError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoCaptureError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::VideoCaptureFrameDropReason, ::media::mojom::VideoCaptureFrameDropReason> {
  static ::media::mojom::VideoCaptureFrameDropReason ToMojom(::media::mojom::VideoCaptureFrameDropReason input) { return input; }
  static bool FromMojom(::media::mojom::VideoCaptureFrameDropReason input, ::media::mojom::VideoCaptureFrameDropReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureFrameDropReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoCaptureFrameDropReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoCaptureFrameDropReason>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureFormatDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoCaptureFormatDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoCaptureFormat_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::frame_size(input)) in_frame_size = Traits::frame_size(input);
    typename decltype((*output)->frame_size)::BaseType::BufferWriter
        frame_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_frame_size, buffer, &frame_size_writer, context);
    (*output)->frame_size.Set(
        frame_size_writer.is_null() ? nullptr : frame_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frame_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_size in VideoCaptureFormat struct");
    (*output)->frame_rate = Traits::frame_rate(input);
    mojo::internal::Serialize<::media::mojom::VideoCapturePixelFormat>(
        Traits::pixel_format(input), &(*output)->pixel_format);
  }

  static bool Deserialize(::media::mojom::internal::VideoCaptureFormat_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoCaptureFormatDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoCaptureParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoCaptureParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::requested_format(input)) in_requested_format = Traits::requested_format(input);
    typename decltype((*output)->requested_format)::BaseType::BufferWriter
        requested_format_writer;
    mojo::internal::Serialize<::media::mojom::VideoCaptureFormatDataView>(
        in_requested_format, buffer, &requested_format_writer, context);
    (*output)->requested_format.Set(
        requested_format_writer.is_null() ? nullptr : requested_format_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->requested_format.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null requested_format in VideoCaptureParams struct");
    mojo::internal::Serialize<::media::mojom::VideoCaptureBufferType>(
        Traits::buffer_type(input), &(*output)->buffer_type);
    mojo::internal::Serialize<::media::mojom::ResolutionChangePolicy>(
        Traits::resolution_change_policy(input), &(*output)->resolution_change_policy);
    mojo::internal::Serialize<::media::mojom::PowerLineFrequency>(
        Traits::power_line_frequency(input), &(*output)->power_line_frequency);
    (*output)->enable_face_detection = Traits::enable_face_detection(input);
  }

  static bool Deserialize(::media::mojom::internal::VideoCaptureParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoCaptureParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PlaneStridesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::PlaneStridesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::PlaneStrides_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::stride_by_plane(input)) in_stride_by_plane = Traits::stride_by_plane(input);
    typename decltype((*output)->stride_by_plane)::BaseType::BufferWriter
        stride_by_plane_writer;
    const mojo::internal::ContainerValidateParams stride_by_plane_validate_params(
        4, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint32_t>>(
        in_stride_by_plane, buffer, &stride_by_plane_writer, &stride_by_plane_validate_params,
        context);
    (*output)->stride_by_plane.Set(
        stride_by_plane_writer.is_null() ? nullptr : stride_by_plane_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->stride_by_plane.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null stride_by_plane in PlaneStrides struct");
  }

  static bool Deserialize(::media::mojom::internal::PlaneStrides_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::PlaneStridesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoFrameInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoFrameInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoFrameInfo_Data::BufferWriter* output,
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
        "null timestamp in VideoFrameInfo struct");
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
        "null metadata in VideoFrameInfo struct");
    mojo::internal::Serialize<::media::mojom::VideoCapturePixelFormat>(
        Traits::pixel_format(input), &(*output)->pixel_format);
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
        "null coded_size in VideoFrameInfo struct");
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
        "null visible_rect in VideoFrameInfo struct");
    decltype(Traits::color_space(input)) in_color_space = Traits::color_space(input);
    typename decltype((*output)->color_space)::BaseType::BufferWriter
        color_space_writer;
    mojo::internal::Serialize<::gfx::mojom::ColorSpaceDataView>(
        in_color_space, buffer, &color_space_writer, context);
    (*output)->color_space.Set(
        color_space_writer.is_null() ? nullptr : color_space_writer.data());
    decltype(Traits::strides(input)) in_strides = Traits::strides(input);
    typename decltype((*output)->strides)::BaseType::BufferWriter
        strides_writer;
    mojo::internal::Serialize<::media::mojom::PlaneStridesDataView>(
        in_strides, buffer, &strides_writer, context);
    (*output)->strides.Set(
        strides_writer.is_null() ? nullptr : strides_writer.data());
  }

  static bool Deserialize(::media::mojom::internal::VideoFrameInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoFrameInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureDeviceDescriptorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoCaptureDeviceDescriptorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoCaptureDeviceDescriptor_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::display_name(input)) in_display_name = Traits::display_name(input);
    typename decltype((*output)->display_name)::BaseType::BufferWriter
        display_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_display_name, buffer, &display_name_writer, context);
    (*output)->display_name.Set(
        display_name_writer.is_null() ? nullptr : display_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->display_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null display_name in VideoCaptureDeviceDescriptor struct");
    decltype(Traits::device_id(input)) in_device_id = Traits::device_id(input);
    typename decltype((*output)->device_id)::BaseType::BufferWriter
        device_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_device_id, buffer, &device_id_writer, context);
    (*output)->device_id.Set(
        device_id_writer.is_null() ? nullptr : device_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->device_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null device_id in VideoCaptureDeviceDescriptor struct");
    decltype(Traits::model_id(input)) in_model_id = Traits::model_id(input);
    typename decltype((*output)->model_id)::BaseType::BufferWriter
        model_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_model_id, buffer, &model_id_writer, context);
    (*output)->model_id.Set(
        model_id_writer.is_null() ? nullptr : model_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->model_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null model_id in VideoCaptureDeviceDescriptor struct");
    mojo::internal::Serialize<::media::mojom::VideoFacingMode>(
        Traits::facing_mode(input), &(*output)->facing_mode);
    mojo::internal::Serialize<::media::mojom::VideoCaptureApi>(
        Traits::capture_api(input), &(*output)->capture_api);
    mojo::internal::Serialize<::media::mojom::VideoCaptureTransportType>(
        Traits::transport_type(input), &(*output)->transport_type);
  }

  static bool Deserialize(::media::mojom::internal::VideoCaptureDeviceDescriptor_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoCaptureDeviceDescriptorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureDeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoCaptureDeviceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoCaptureDeviceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::descriptor(input)) in_descriptor = Traits::descriptor(input);
    typename decltype((*output)->descriptor)::BaseType::BufferWriter
        descriptor_writer;
    mojo::internal::Serialize<::media::mojom::VideoCaptureDeviceDescriptorDataView>(
        in_descriptor, buffer, &descriptor_writer, context);
    (*output)->descriptor.Set(
        descriptor_writer.is_null() ? nullptr : descriptor_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->descriptor.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null descriptor in VideoCaptureDeviceInfo struct");
    decltype(Traits::supported_formats(input)) in_supported_formats = Traits::supported_formats(input);
    typename decltype((*output)->supported_formats)::BaseType::BufferWriter
        supported_formats_writer;
    const mojo::internal::ContainerValidateParams supported_formats_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        in_supported_formats, buffer, &supported_formats_writer, &supported_formats_validate_params,
        context);
    (*output)->supported_formats.Set(
        supported_formats_writer.is_null() ? nullptr : supported_formats_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->supported_formats.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null supported_formats in VideoCaptureDeviceInfo struct");
  }

  static bool Deserialize(::media::mojom::internal::VideoCaptureDeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoCaptureDeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::MailboxBufferHandleSetDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::MailboxBufferHandleSetDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::MailboxBufferHandleSet_Data::BufferWriter* output,
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
        "null mailbox_holder in MailboxBufferHandleSet struct");
  }

  static bool Deserialize(::media::mojom::internal::MailboxBufferHandleSet_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::MailboxBufferHandleSetDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::SharedMemoryViaRawFileDescriptorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::SharedMemoryViaRawFileDescriptorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::SharedMemoryViaRawFileDescriptor_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::file_descriptor_handle(input)) in_file_descriptor_handle = Traits::file_descriptor_handle(input);
    mojo::internal::Serialize<mojo::ScopedHandle>(
        in_file_descriptor_handle, &(*output)->file_descriptor_handle, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->file_descriptor_handle),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid file_descriptor_handle in SharedMemoryViaRawFileDescriptor struct");
    (*output)->shared_memory_size_in_bytes = Traits::shared_memory_size_in_bytes(input);
  }

  static bool Deserialize(::media::mojom::internal::SharedMemoryViaRawFileDescriptor_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::SharedMemoryViaRawFileDescriptorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoBufferHandleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::media::mojom::VideoBufferHandleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoBufferHandle_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::media::mojom::internal::VideoBufferHandle_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::media::mojom::VideoBufferHandleDataView::Tag::SHARED_BUFFER_HANDLE: {
        decltype(Traits::shared_buffer_handle(input))
            in_shared_buffer_handle = Traits::shared_buffer_handle(input);
        mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
            in_shared_buffer_handle, &result->data.f_shared_buffer_handle, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_shared_buffer_handle),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
            "invalid shared_buffer_handle in VideoBufferHandle union");
        break;
      }
      case ::media::mojom::VideoBufferHandleDataView::Tag::READ_ONLY_SHMEM_REGION: {
        decltype(Traits::read_only_shmem_region(input))
            in_read_only_shmem_region = Traits::read_only_shmem_region(input);
        typename decltype(result->data.f_read_only_shmem_region)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
            in_read_only_shmem_region, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null read_only_shmem_region in VideoBufferHandle union");
        result->data.f_read_only_shmem_region.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::media::mojom::VideoBufferHandleDataView::Tag::SHARED_MEMORY_VIA_RAW_FILE_DESCRIPTOR: {
        decltype(Traits::shared_memory_via_raw_file_descriptor(input))
            in_shared_memory_via_raw_file_descriptor = Traits::shared_memory_via_raw_file_descriptor(input);
        typename decltype(result->data.f_shared_memory_via_raw_file_descriptor)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::media::mojom::SharedMemoryViaRawFileDescriptorDataView>(
            in_shared_memory_via_raw_file_descriptor, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null shared_memory_via_raw_file_descriptor in VideoBufferHandle union");
        result->data.f_shared_memory_via_raw_file_descriptor.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::media::mojom::VideoBufferHandleDataView::Tag::MAILBOX_HANDLES: {
        decltype(Traits::mailbox_handles(input))
            in_mailbox_handles = Traits::mailbox_handles(input);
        typename decltype(result->data.f_mailbox_handles)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::media::mojom::MailboxBufferHandleSetDataView>(
            in_mailbox_handles, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null mailbox_handles in VideoBufferHandle union");
        result->data.f_mailbox_handles.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::media::mojom::internal::VideoBufferHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoBufferHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void VideoCaptureFormatDataView::GetFrameSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->frame_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void VideoCaptureParamsDataView::GetRequestedFormatDataView(
    VideoCaptureFormatDataView* output) {
  auto pointer = data_->requested_format.Get();
  *output = VideoCaptureFormatDataView(pointer, context_);
}


inline void PlaneStridesDataView::GetStrideByPlaneDataView(
    mojo::ArrayDataView<uint32_t>* output) {
  auto pointer = data_->stride_by_plane.Get();
  *output = mojo::ArrayDataView<uint32_t>(pointer, context_);
}


inline void VideoFrameInfoDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void VideoFrameInfoDataView::GetMetadataDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}
inline void VideoFrameInfoDataView::GetCodedSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->coded_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void VideoFrameInfoDataView::GetVisibleRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->visible_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void VideoFrameInfoDataView::GetColorSpaceDataView(
    ::gfx::mojom::ColorSpaceDataView* output) {
  auto pointer = data_->color_space.Get();
  *output = ::gfx::mojom::ColorSpaceDataView(pointer, context_);
}
inline void VideoFrameInfoDataView::GetStridesDataView(
    PlaneStridesDataView* output) {
  auto pointer = data_->strides.Get();
  *output = PlaneStridesDataView(pointer, context_);
}


inline void VideoCaptureDeviceDescriptorDataView::GetDisplayNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->display_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VideoCaptureDeviceDescriptorDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VideoCaptureDeviceDescriptorDataView::GetModelIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->model_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void VideoCaptureDeviceInfoDataView::GetDescriptorDataView(
    VideoCaptureDeviceDescriptorDataView* output) {
  auto pointer = data_->descriptor.Get();
  *output = VideoCaptureDeviceDescriptorDataView(pointer, context_);
}
inline void VideoCaptureDeviceInfoDataView::GetSupportedFormatsDataView(
    mojo::ArrayDataView<VideoCaptureFormatDataView>* output) {
  auto pointer = data_->supported_formats.Get();
  *output = mojo::ArrayDataView<VideoCaptureFormatDataView>(pointer, context_);
}


inline void MailboxBufferHandleSetDataView::GetMailboxHolderDataView(
    mojo::ArrayDataView<::gpu::mojom::MailboxHolderDataView>* output) {
  auto pointer = data_->mailbox_holder.Get();
  *output = mojo::ArrayDataView<::gpu::mojom::MailboxHolderDataView>(pointer, context_);
}




inline void VideoBufferHandleDataView::GetReadOnlyShmemRegionDataView(
    ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output) {
  DCHECK(is_read_only_shmem_region());
  *output = ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView(data_->data.f_read_only_shmem_region.Get(), context_);
}
inline void VideoBufferHandleDataView::GetSharedMemoryViaRawFileDescriptorDataView(
    SharedMemoryViaRawFileDescriptorDataView* output) {
  DCHECK(is_shared_memory_via_raw_file_descriptor());
  *output = SharedMemoryViaRawFileDescriptorDataView(data_->data.f_shared_memory_via_raw_file_descriptor.Get(), context_);
}
inline void VideoBufferHandleDataView::GetMailboxHandlesDataView(
    MailboxBufferHandleSetDataView* output) {
  DCHECK(is_mailbox_handles());
  *output = MailboxBufferHandleSetDataView(data_->data.f_mailbox_handles.Get(), context_);
}


}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_SHARED_H_