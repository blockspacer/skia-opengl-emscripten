// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "media/capture/mojom/video_capture_types.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "media/capture/mojom/video_capture_types.mojom-params-data.h"
namespace media {
namespace mojom {

std::ostream& operator<<(std::ostream& os, VideoCapturePixelFormat value) {
  switch(value) {
    case VideoCapturePixelFormat::UNKNOWN:
      return os << "VideoCapturePixelFormat::UNKNOWN";
    case VideoCapturePixelFormat::I420:
      return os << "VideoCapturePixelFormat::I420";
    case VideoCapturePixelFormat::YV12:
      return os << "VideoCapturePixelFormat::YV12";
    case VideoCapturePixelFormat::I422:
      return os << "VideoCapturePixelFormat::I422";
    case VideoCapturePixelFormat::I420A:
      return os << "VideoCapturePixelFormat::I420A";
    case VideoCapturePixelFormat::I444:
      return os << "VideoCapturePixelFormat::I444";
    case VideoCapturePixelFormat::NV12:
      return os << "VideoCapturePixelFormat::NV12";
    case VideoCapturePixelFormat::NV21:
      return os << "VideoCapturePixelFormat::NV21";
    case VideoCapturePixelFormat::UYVY:
      return os << "VideoCapturePixelFormat::UYVY";
    case VideoCapturePixelFormat::YUY2:
      return os << "VideoCapturePixelFormat::YUY2";
    case VideoCapturePixelFormat::ARGB:
      return os << "VideoCapturePixelFormat::ARGB";
    case VideoCapturePixelFormat::XRGB:
      return os << "VideoCapturePixelFormat::XRGB";
    case VideoCapturePixelFormat::RGB24:
      return os << "VideoCapturePixelFormat::RGB24";
    case VideoCapturePixelFormat::RGB32:
      return os << "VideoCapturePixelFormat::RGB32";
    case VideoCapturePixelFormat::MJPEG:
      return os << "VideoCapturePixelFormat::MJPEG";
    case VideoCapturePixelFormat::MT21:
      return os << "VideoCapturePixelFormat::MT21";
    case VideoCapturePixelFormat::YUV420P9:
      return os << "VideoCapturePixelFormat::YUV420P9";
    case VideoCapturePixelFormat::YUV420P10:
      return os << "VideoCapturePixelFormat::YUV420P10";
    case VideoCapturePixelFormat::YUV422P9:
      return os << "VideoCapturePixelFormat::YUV422P9";
    case VideoCapturePixelFormat::YUV422P10:
      return os << "VideoCapturePixelFormat::YUV422P10";
    case VideoCapturePixelFormat::YUV444P9:
      return os << "VideoCapturePixelFormat::YUV444P9";
    case VideoCapturePixelFormat::YUV444P10:
      return os << "VideoCapturePixelFormat::YUV444P10";
    case VideoCapturePixelFormat::YUV420P12:
      return os << "VideoCapturePixelFormat::YUV420P12";
    case VideoCapturePixelFormat::YUV422P12:
      return os << "VideoCapturePixelFormat::YUV422P12";
    case VideoCapturePixelFormat::YUV444P12:
      return os << "VideoCapturePixelFormat::YUV444P12";
    case VideoCapturePixelFormat::Y16:
      return os << "VideoCapturePixelFormat::Y16";
    case VideoCapturePixelFormat::ABGR:
      return os << "VideoCapturePixelFormat::ABGR";
    case VideoCapturePixelFormat::XBGR:
      return os << "VideoCapturePixelFormat::XBGR";
    case VideoCapturePixelFormat::P016LE:
      return os << "VideoCapturePixelFormat::P016LE";
    default:
      return os << "Unknown VideoCapturePixelFormat value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ResolutionChangePolicy value) {
  switch(value) {
    case ResolutionChangePolicy::FIXED_RESOLUTION:
      return os << "ResolutionChangePolicy::FIXED_RESOLUTION";
    case ResolutionChangePolicy::FIXED_ASPECT_RATIO:
      return os << "ResolutionChangePolicy::FIXED_ASPECT_RATIO";
    case ResolutionChangePolicy::ANY_WITHIN_LIMIT:
      return os << "ResolutionChangePolicy::ANY_WITHIN_LIMIT";
    default:
      return os << "Unknown ResolutionChangePolicy value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PowerLineFrequency value) {
  switch(value) {
    case PowerLineFrequency::DEFAULT:
      return os << "PowerLineFrequency::DEFAULT";
    case PowerLineFrequency::HZ_50:
      return os << "PowerLineFrequency::HZ_50";
    case PowerLineFrequency::HZ_60:
      return os << "PowerLineFrequency::HZ_60";
    default:
      return os << "Unknown PowerLineFrequency value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, VideoFacingMode value) {
  switch(value) {
    case VideoFacingMode::NONE:
      return os << "VideoFacingMode::NONE";
    case VideoFacingMode::USER:
      return os << "VideoFacingMode::USER";
    case VideoFacingMode::ENVIRONMENT:
      return os << "VideoFacingMode::ENVIRONMENT";
    default:
      return os << "Unknown VideoFacingMode value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, VideoCaptureApi value) {
  switch(value) {
    case VideoCaptureApi::LINUX_V4L2_SINGLE_PLANE:
      return os << "VideoCaptureApi::LINUX_V4L2_SINGLE_PLANE";
    case VideoCaptureApi::WIN_MEDIA_FOUNDATION:
      return os << "VideoCaptureApi::WIN_MEDIA_FOUNDATION";
    case VideoCaptureApi::WIN_MEDIA_FOUNDATION_SENSOR:
      return os << "VideoCaptureApi::WIN_MEDIA_FOUNDATION_SENSOR";
    case VideoCaptureApi::WIN_DIRECT_SHOW:
      return os << "VideoCaptureApi::WIN_DIRECT_SHOW";
    case VideoCaptureApi::MACOSX_AVFOUNDATION:
      return os << "VideoCaptureApi::MACOSX_AVFOUNDATION";
    case VideoCaptureApi::MACOSX_DECKLINK:
      return os << "VideoCaptureApi::MACOSX_DECKLINK";
    case VideoCaptureApi::ANDROID_API1:
      return os << "VideoCaptureApi::ANDROID_API1";
    case VideoCaptureApi::ANDROID_API2_LEGACY:
      return os << "VideoCaptureApi::ANDROID_API2_LEGACY";
    case VideoCaptureApi::ANDROID_API2_FULL:
      return os << "VideoCaptureApi::ANDROID_API2_FULL";
    case VideoCaptureApi::ANDROID_API2_LIMITED:
      return os << "VideoCaptureApi::ANDROID_API2_LIMITED";
    case VideoCaptureApi::VIRTUAL_DEVICE:
      return os << "VideoCaptureApi::VIRTUAL_DEVICE";
    case VideoCaptureApi::UNKNOWN:
      return os << "VideoCaptureApi::UNKNOWN";
    default:
      return os << "Unknown VideoCaptureApi value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, VideoCaptureTransportType value) {
  switch(value) {
    case VideoCaptureTransportType::MACOSX_USB_OR_BUILT_IN:
      return os << "VideoCaptureTransportType::MACOSX_USB_OR_BUILT_IN";
    case VideoCaptureTransportType::OTHER_TRANSPORT:
      return os << "VideoCaptureTransportType::OTHER_TRANSPORT";
    default:
      return os << "Unknown VideoCaptureTransportType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, VideoCaptureBufferType value) {
  switch(value) {
    case VideoCaptureBufferType::kSharedMemory:
      return os << "VideoCaptureBufferType::kSharedMemory";
    case VideoCaptureBufferType::kSharedMemoryViaRawFileDescriptor:
      return os << "VideoCaptureBufferType::kSharedMemoryViaRawFileDescriptor";
    case VideoCaptureBufferType::kMailboxHolder:
      return os << "VideoCaptureBufferType::kMailboxHolder";
    default:
      return os << "Unknown VideoCaptureBufferType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, VideoCaptureError value) {
  switch(value) {
    case VideoCaptureError::kNone:
      return os << "VideoCaptureError::kNone";
    case VideoCaptureError::kVideoCaptureControllerInvalidOrUnsupportedVideoCaptureParametersRequested:
      return os << "VideoCaptureError::kVideoCaptureControllerInvalidOrUnsupportedVideoCaptureParametersRequested";
    case VideoCaptureError::kVideoCaptureControllerIsAlreadyInErrorState:
      return os << "VideoCaptureError::kVideoCaptureControllerIsAlreadyInErrorState";
    case VideoCaptureError::kVideoCaptureManagerDeviceConnectionLost:
      return os << "VideoCaptureError::kVideoCaptureManagerDeviceConnectionLost";
    case VideoCaptureError::kFrameSinkVideoCaptureDeviceAleradyEndedOnFatalError:
      return os << "VideoCaptureError::kFrameSinkVideoCaptureDeviceAleradyEndedOnFatalError";
    case VideoCaptureError::kFrameSinkVideoCaptureDeviceEncounteredFatalError:
      return os << "VideoCaptureError::kFrameSinkVideoCaptureDeviceEncounteredFatalError";
    case VideoCaptureError::kV4L2FailedToOpenV4L2DeviceDriverFile:
      return os << "VideoCaptureError::kV4L2FailedToOpenV4L2DeviceDriverFile";
    case VideoCaptureError::kV4L2ThisIsNotAV4L2VideoCaptureDevice:
      return os << "VideoCaptureError::kV4L2ThisIsNotAV4L2VideoCaptureDevice";
    case VideoCaptureError::kV4L2FailedToFindASupportedCameraFormat:
      return os << "VideoCaptureError::kV4L2FailedToFindASupportedCameraFormat";
    case VideoCaptureError::kV4L2FailedToSetVideoCaptureFormat:
      return os << "VideoCaptureError::kV4L2FailedToSetVideoCaptureFormat";
    case VideoCaptureError::kV4L2UnsupportedPixelFormat:
      return os << "VideoCaptureError::kV4L2UnsupportedPixelFormat";
    case VideoCaptureError::kV4L2FailedToSetCameraFramerate:
      return os << "VideoCaptureError::kV4L2FailedToSetCameraFramerate";
    case VideoCaptureError::kV4L2ErrorRequestingMmapBuffers:
      return os << "VideoCaptureError::kV4L2ErrorRequestingMmapBuffers";
    case VideoCaptureError::kV4L2AllocateBufferFailed:
      return os << "VideoCaptureError::kV4L2AllocateBufferFailed";
    case VideoCaptureError::kV4L2VidiocStreamonFailed:
      return os << "VideoCaptureError::kV4L2VidiocStreamonFailed";
    case VideoCaptureError::kV4L2VidiocStreamoffFailed:
      return os << "VideoCaptureError::kV4L2VidiocStreamoffFailed";
    case VideoCaptureError::kV4L2FailedToVidiocReqbufsWithCount0:
      return os << "VideoCaptureError::kV4L2FailedToVidiocReqbufsWithCount0";
    case VideoCaptureError::kV4L2PollFailed:
      return os << "VideoCaptureError::kV4L2PollFailed";
    case VideoCaptureError::kV4L2MultipleContinuousTimeoutsWhileReadPolling:
      return os << "VideoCaptureError::kV4L2MultipleContinuousTimeoutsWhileReadPolling";
    case VideoCaptureError::kV4L2FailedToDequeueCaptureBuffer:
      return os << "VideoCaptureError::kV4L2FailedToDequeueCaptureBuffer";
    case VideoCaptureError::kV4L2FailedToEnqueueCaptureBuffer:
      return os << "VideoCaptureError::kV4L2FailedToEnqueueCaptureBuffer";
    case VideoCaptureError::kSingleClientVideoCaptureHostLostConnectionToDevice:
      return os << "VideoCaptureError::kSingleClientVideoCaptureHostLostConnectionToDevice";
    case VideoCaptureError::kSingleClientVideoCaptureDeviceLaunchAborted:
      return os << "VideoCaptureError::kSingleClientVideoCaptureDeviceLaunchAborted";
    case VideoCaptureError::kDesktopCaptureDeviceWebrtcDesktopCapturerHasFailed:
      return os << "VideoCaptureError::kDesktopCaptureDeviceWebrtcDesktopCapturerHasFailed";
    case VideoCaptureError::kFileVideoCaptureDeviceCouldNotOpenVideoFile:
      return os << "VideoCaptureError::kFileVideoCaptureDeviceCouldNotOpenVideoFile";
    case VideoCaptureError::kDeviceCaptureLinuxFailedToCreateVideoCaptureDelegate:
      return os << "VideoCaptureError::kDeviceCaptureLinuxFailedToCreateVideoCaptureDelegate";
    case VideoCaptureError::kErrorFakeDeviceIntentionallyEmittingErrorEvent:
      return os << "VideoCaptureError::kErrorFakeDeviceIntentionallyEmittingErrorEvent";
    case VideoCaptureError::kDeviceClientTooManyFramesDroppedY16:
      return os << "VideoCaptureError::kDeviceClientTooManyFramesDroppedY16";
    case VideoCaptureError::kDeviceMediaToMojoAdapterEncounteredUnsupportedBufferType:
      return os << "VideoCaptureError::kDeviceMediaToMojoAdapterEncounteredUnsupportedBufferType";
    case VideoCaptureError::kVideoCaptureManagerProcessDeviceStartQueueDeviceInfoNotFound:
      return os << "VideoCaptureError::kVideoCaptureManagerProcessDeviceStartQueueDeviceInfoNotFound";
    case VideoCaptureError::kInProcessDeviceLauncherFailedToCreateDeviceInstance:
      return os << "VideoCaptureError::kInProcessDeviceLauncherFailedToCreateDeviceInstance";
    case VideoCaptureError::kServiceDeviceLauncherLostConnectionToDeviceFactoryDuringDeviceStart:
      return os << "VideoCaptureError::kServiceDeviceLauncherLostConnectionToDeviceFactoryDuringDeviceStart";
    case VideoCaptureError::kServiceDeviceLauncherServiceRespondedWithDeviceNotFound:
      return os << "VideoCaptureError::kServiceDeviceLauncherServiceRespondedWithDeviceNotFound";
    case VideoCaptureError::kServiceDeviceLauncherConnectionLostWhileWaitingForCallback:
      return os << "VideoCaptureError::kServiceDeviceLauncherConnectionLostWhileWaitingForCallback";
    case VideoCaptureError::kIntentionalErrorRaisedByUnitTest:
      return os << "VideoCaptureError::kIntentionalErrorRaisedByUnitTest";
    case VideoCaptureError::kCrosHalV3FailedToStartDeviceThread:
      return os << "VideoCaptureError::kCrosHalV3FailedToStartDeviceThread";
    case VideoCaptureError::kCrosHalV3DeviceDelegateMojoConnectionError:
      return os << "VideoCaptureError::kCrosHalV3DeviceDelegateMojoConnectionError";
    case VideoCaptureError::kCrosHalV3DeviceDelegateFailedToGetCameraInfo:
      return os << "VideoCaptureError::kCrosHalV3DeviceDelegateFailedToGetCameraInfo";
    case VideoCaptureError::kCrosHalV3DeviceDelegateMissingSensorOrientationInfo:
      return os << "VideoCaptureError::kCrosHalV3DeviceDelegateMissingSensorOrientationInfo";
    case VideoCaptureError::kCrosHalV3DeviceDelegateFailedToOpenCameraDevice:
      return os << "VideoCaptureError::kCrosHalV3DeviceDelegateFailedToOpenCameraDevice";
    case VideoCaptureError::kCrosHalV3DeviceDelegateFailedToInitializeCameraDevice:
      return os << "VideoCaptureError::kCrosHalV3DeviceDelegateFailedToInitializeCameraDevice";
    case VideoCaptureError::kCrosHalV3DeviceDelegateFailedToConfigureStreams:
      return os << "VideoCaptureError::kCrosHalV3DeviceDelegateFailedToConfigureStreams";
    case VideoCaptureError::kCrosHalV3DeviceDelegateWrongNumberOfStreamsConfigured:
      return os << "VideoCaptureError::kCrosHalV3DeviceDelegateWrongNumberOfStreamsConfigured";
    case VideoCaptureError::kCrosHalV3DeviceDelegateFailedToGetDefaultRequestSettings:
      return os << "VideoCaptureError::kCrosHalV3DeviceDelegateFailedToGetDefaultRequestSettings";
    case VideoCaptureError::kCrosHalV3BufferManagerHalRequestedTooManyBuffers:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerHalRequestedTooManyBuffers";
    case VideoCaptureError::kCrosHalV3BufferManagerFailedToCreateGpuMemoryBuffer:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerFailedToCreateGpuMemoryBuffer";
    case VideoCaptureError::kCrosHalV3BufferManagerFailedToMapGpuMemoryBuffer:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerFailedToMapGpuMemoryBuffer";
    case VideoCaptureError::kCrosHalV3BufferManagerUnsupportedVideoPixelFormat:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerUnsupportedVideoPixelFormat";
    case VideoCaptureError::kCrosHalV3BufferManagerFailedToDupFd:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerFailedToDupFd";
    case VideoCaptureError::kCrosHalV3BufferManagerFailedToWrapGpuMemoryHandle:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerFailedToWrapGpuMemoryHandle";
    case VideoCaptureError::kCrosHalV3BufferManagerFailedToRegisterBuffer:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerFailedToRegisterBuffer";
    case VideoCaptureError::kCrosHalV3BufferManagerProcessCaptureRequestFailed:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerProcessCaptureRequestFailed";
    case VideoCaptureError::kCrosHalV3BufferManagerInvalidPendingResultId:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerInvalidPendingResultId";
    case VideoCaptureError::kCrosHalV3BufferManagerReceivedDuplicatedPartialMetadata:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerReceivedDuplicatedPartialMetadata";
    case VideoCaptureError::kCrosHalV3BufferManagerIncorrectNumberOfOutputBuffersReceived:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerIncorrectNumberOfOutputBuffersReceived";
    case VideoCaptureError::kCrosHalV3BufferManagerInvalidTypeOfOutputBuffersReceived:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerInvalidTypeOfOutputBuffersReceived";
    case VideoCaptureError::kCrosHalV3BufferManagerReceivedMultipleResultBuffersForFrame:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerReceivedMultipleResultBuffersForFrame";
    case VideoCaptureError::kCrosHalV3BufferManagerUnknownStreamInCamera3NotifyMsg:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerUnknownStreamInCamera3NotifyMsg";
    case VideoCaptureError::kCrosHalV3BufferManagerReceivedInvalidShutterTime:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerReceivedInvalidShutterTime";
    case VideoCaptureError::kCrosHalV3BufferManagerFatalDeviceError:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerFatalDeviceError";
    case VideoCaptureError::kCrosHalV3BufferManagerReceivedFrameIsOutOfOrder:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerReceivedFrameIsOutOfOrder";
    case VideoCaptureError::kCrosHalV3BufferManagerFailedToUnwrapReleaseFenceFd:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerFailedToUnwrapReleaseFenceFd";
    case VideoCaptureError::kCrosHalV3BufferManagerSyncWaitOnReleaseFenceTimedOut:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerSyncWaitOnReleaseFenceTimedOut";
    case VideoCaptureError::kCrosHalV3BufferManagerInvalidJpegBlob:
      return os << "VideoCaptureError::kCrosHalV3BufferManagerInvalidJpegBlob";
    case VideoCaptureError::kAndroidFailedToAllocate:
      return os << "VideoCaptureError::kAndroidFailedToAllocate";
    case VideoCaptureError::kAndroidFailedToStartCapture:
      return os << "VideoCaptureError::kAndroidFailedToStartCapture";
    case VideoCaptureError::kAndroidFailedToStopCapture:
      return os << "VideoCaptureError::kAndroidFailedToStopCapture";
    case VideoCaptureError::kAndroidApi1CameraErrorCallbackReceived:
      return os << "VideoCaptureError::kAndroidApi1CameraErrorCallbackReceived";
    case VideoCaptureError::kAndroidApi2CameraDeviceErrorReceived:
      return os << "VideoCaptureError::kAndroidApi2CameraDeviceErrorReceived";
    case VideoCaptureError::kAndroidApi2CaptureSessionConfigureFailed:
      return os << "VideoCaptureError::kAndroidApi2CaptureSessionConfigureFailed";
    case VideoCaptureError::kAndroidApi2ImageReaderUnexpectedImageFormat:
      return os << "VideoCaptureError::kAndroidApi2ImageReaderUnexpectedImageFormat";
    case VideoCaptureError::kAndroidApi2ImageReaderSizeDidNotMatchImageSize:
      return os << "VideoCaptureError::kAndroidApi2ImageReaderSizeDidNotMatchImageSize";
    case VideoCaptureError::kAndroidApi2ErrorRestartingPreview:
      return os << "VideoCaptureError::kAndroidApi2ErrorRestartingPreview";
    case VideoCaptureError::kAndroidScreenCaptureUnsupportedFormat:
      return os << "VideoCaptureError::kAndroidScreenCaptureUnsupportedFormat";
    case VideoCaptureError::kAndroidScreenCaptureFailedToStartCaptureMachine:
      return os << "VideoCaptureError::kAndroidScreenCaptureFailedToStartCaptureMachine";
    case VideoCaptureError::kAndroidScreenCaptureTheUserDeniedScreenCapture:
      return os << "VideoCaptureError::kAndroidScreenCaptureTheUserDeniedScreenCapture";
    case VideoCaptureError::kAndroidScreenCaptureFailedToStartScreenCapture:
      return os << "VideoCaptureError::kAndroidScreenCaptureFailedToStartScreenCapture";
    case VideoCaptureError::kWinDirectShowCantGetCaptureFormatSettings:
      return os << "VideoCaptureError::kWinDirectShowCantGetCaptureFormatSettings";
    case VideoCaptureError::kWinDirectShowFailedToGetNumberOfCapabilities:
      return os << "VideoCaptureError::kWinDirectShowFailedToGetNumberOfCapabilities";
    case VideoCaptureError::kWinDirectShowFailedToGetCaptureDeviceCapabilities:
      return os << "VideoCaptureError::kWinDirectShowFailedToGetCaptureDeviceCapabilities";
    case VideoCaptureError::kWinDirectShowFailedToSetCaptureDeviceOutputFormat:
      return os << "VideoCaptureError::kWinDirectShowFailedToSetCaptureDeviceOutputFormat";
    case VideoCaptureError::kWinDirectShowFailedToConnectTheCaptureGraph:
      return os << "VideoCaptureError::kWinDirectShowFailedToConnectTheCaptureGraph";
    case VideoCaptureError::kWinDirectShowFailedToPauseTheCaptureDevice:
      return os << "VideoCaptureError::kWinDirectShowFailedToPauseTheCaptureDevice";
    case VideoCaptureError::kWinDirectShowFailedToStartTheCaptureDevice:
      return os << "VideoCaptureError::kWinDirectShowFailedToStartTheCaptureDevice";
    case VideoCaptureError::kWinDirectShowFailedToStopTheCaptureGraph:
      return os << "VideoCaptureError::kWinDirectShowFailedToStopTheCaptureGraph";
    case VideoCaptureError::kWinMediaFoundationEngineIsNull:
      return os << "VideoCaptureError::kWinMediaFoundationEngineIsNull";
    case VideoCaptureError::kWinMediaFoundationEngineGetSourceFailed:
      return os << "VideoCaptureError::kWinMediaFoundationEngineGetSourceFailed";
    case VideoCaptureError::kWinMediaFoundationFillPhotoCapabilitiesFailed:
      return os << "VideoCaptureError::kWinMediaFoundationFillPhotoCapabilitiesFailed";
    case VideoCaptureError::kWinMediaFoundationFillVideoCapabilitiesFailed:
      return os << "VideoCaptureError::kWinMediaFoundationFillVideoCapabilitiesFailed";
    case VideoCaptureError::kWinMediaFoundationNoVideoCapabilityFound:
      return os << "VideoCaptureError::kWinMediaFoundationNoVideoCapabilityFound";
    case VideoCaptureError::kWinMediaFoundationGetAvailableDeviceMediaTypeFailed:
      return os << "VideoCaptureError::kWinMediaFoundationGetAvailableDeviceMediaTypeFailed";
    case VideoCaptureError::kWinMediaFoundationSetCurrentDeviceMediaTypeFailed:
      return os << "VideoCaptureError::kWinMediaFoundationSetCurrentDeviceMediaTypeFailed";
    case VideoCaptureError::kWinMediaFoundationEngineGetSinkFailed:
      return os << "VideoCaptureError::kWinMediaFoundationEngineGetSinkFailed";
    case VideoCaptureError::kWinMediaFoundationSinkQueryCapturePreviewInterfaceFailed:
      return os << "VideoCaptureError::kWinMediaFoundationSinkQueryCapturePreviewInterfaceFailed";
    case VideoCaptureError::kWinMediaFoundationSinkRemoveAllStreamsFailed:
      return os << "VideoCaptureError::kWinMediaFoundationSinkRemoveAllStreamsFailed";
    case VideoCaptureError::kWinMediaFoundationCreateSinkVideoMediaTypeFailed:
      return os << "VideoCaptureError::kWinMediaFoundationCreateSinkVideoMediaTypeFailed";
    case VideoCaptureError::kWinMediaFoundationConvertToVideoSinkMediaTypeFailed:
      return os << "VideoCaptureError::kWinMediaFoundationConvertToVideoSinkMediaTypeFailed";
    case VideoCaptureError::kWinMediaFoundationSinkAddStreamFailed:
      return os << "VideoCaptureError::kWinMediaFoundationSinkAddStreamFailed";
    case VideoCaptureError::kWinMediaFoundationSinkSetSampleCallbackFailed:
      return os << "VideoCaptureError::kWinMediaFoundationSinkSetSampleCallbackFailed";
    case VideoCaptureError::kWinMediaFoundationEngineStartPreviewFailed:
      return os << "VideoCaptureError::kWinMediaFoundationEngineStartPreviewFailed";
    case VideoCaptureError::kWinMediaFoundationGetMediaEventStatusFailed:
      return os << "VideoCaptureError::kWinMediaFoundationGetMediaEventStatusFailed";
    case VideoCaptureError::kMacSetCaptureDeviceFailed:
      return os << "VideoCaptureError::kMacSetCaptureDeviceFailed";
    case VideoCaptureError::kMacCouldNotStartCaptureDevice:
      return os << "VideoCaptureError::kMacCouldNotStartCaptureDevice";
    case VideoCaptureError::kMacReceivedFrameWithUnexpectedResolution:
      return os << "VideoCaptureError::kMacReceivedFrameWithUnexpectedResolution";
    case VideoCaptureError::kMacUpdateCaptureResolutionFailed:
      return os << "VideoCaptureError::kMacUpdateCaptureResolutionFailed";
    case VideoCaptureError::kMacDeckLinkDeviceIdNotFoundInTheSystem:
      return os << "VideoCaptureError::kMacDeckLinkDeviceIdNotFoundInTheSystem";
    case VideoCaptureError::kMacDeckLinkErrorQueryingInputInterface:
      return os << "VideoCaptureError::kMacDeckLinkErrorQueryingInputInterface";
    case VideoCaptureError::kMacDeckLinkErrorCreatingDisplayModeIterator:
      return os << "VideoCaptureError::kMacDeckLinkErrorCreatingDisplayModeIterator";
    case VideoCaptureError::kMacDeckLinkCouldNotFindADisplayMode:
      return os << "VideoCaptureError::kMacDeckLinkCouldNotFindADisplayMode";
    case VideoCaptureError::kMacDeckLinkCouldNotSelectTheVideoFormatWeLike:
      return os << "VideoCaptureError::kMacDeckLinkCouldNotSelectTheVideoFormatWeLike";
    case VideoCaptureError::kMacDeckLinkCouldNotStartCapturing:
      return os << "VideoCaptureError::kMacDeckLinkCouldNotStartCapturing";
    case VideoCaptureError::kMacDeckLinkUnsupportedPixelFormat:
      return os << "VideoCaptureError::kMacDeckLinkUnsupportedPixelFormat";
    case VideoCaptureError::kMacAvFoundationReceivedAVCaptureSessionRuntimeErrorNotification:
      return os << "VideoCaptureError::kMacAvFoundationReceivedAVCaptureSessionRuntimeErrorNotification";
    case VideoCaptureError::kAndroidApi2ErrorConfiguringCamera:
      return os << "VideoCaptureError::kAndroidApi2ErrorConfiguringCamera";
    case VideoCaptureError::kCrosHalV3DeviceDelegateFailedToFlush:
      return os << "VideoCaptureError::kCrosHalV3DeviceDelegateFailedToFlush";
    default:
      return os << "Unknown VideoCaptureError value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, VideoCaptureFrameDropReason value) {
  switch(value) {
    case VideoCaptureFrameDropReason::kNone:
      return os << "VideoCaptureFrameDropReason::kNone";
    case VideoCaptureFrameDropReason::kDeviceClientFrameHasInvalidFormat:
      return os << "VideoCaptureFrameDropReason::kDeviceClientFrameHasInvalidFormat";
    case VideoCaptureFrameDropReason::kDeviceClientLibyuvConvertToI420Failed:
      return os << "VideoCaptureFrameDropReason::kDeviceClientLibyuvConvertToI420Failed";
    case VideoCaptureFrameDropReason::kV4L2BufferErrorFlagWasSet:
      return os << "VideoCaptureFrameDropReason::kV4L2BufferErrorFlagWasSet";
    case VideoCaptureFrameDropReason::kV4L2InvalidNumberOfBytesInBuffer:
      return os << "VideoCaptureFrameDropReason::kV4L2InvalidNumberOfBytesInBuffer";
    case VideoCaptureFrameDropReason::kAndroidThrottling:
      return os << "VideoCaptureFrameDropReason::kAndroidThrottling";
    case VideoCaptureFrameDropReason::kAndroidGetByteArrayElementsFailed:
      return os << "VideoCaptureFrameDropReason::kAndroidGetByteArrayElementsFailed";
    case VideoCaptureFrameDropReason::kAndroidApi1UnexpectedDataLength:
      return os << "VideoCaptureFrameDropReason::kAndroidApi1UnexpectedDataLength";
    case VideoCaptureFrameDropReason::kAndroidApi2AcquiredImageIsNull:
      return os << "VideoCaptureFrameDropReason::kAndroidApi2AcquiredImageIsNull";
    case VideoCaptureFrameDropReason::kWinDirectShowUnexpectedSampleLength:
      return os << "VideoCaptureFrameDropReason::kWinDirectShowUnexpectedSampleLength";
    case VideoCaptureFrameDropReason::kWinDirectShowFailedToGetMemoryPointerFromMediaSample:
      return os << "VideoCaptureFrameDropReason::kWinDirectShowFailedToGetMemoryPointerFromMediaSample";
    case VideoCaptureFrameDropReason::kWinMediaFoundationReceivedSampleIsNull:
      return os << "VideoCaptureFrameDropReason::kWinMediaFoundationReceivedSampleIsNull";
    case VideoCaptureFrameDropReason::kWinMediaFoundationLockingBufferDelieveredNullptr:
      return os << "VideoCaptureFrameDropReason::kWinMediaFoundationLockingBufferDelieveredNullptr";
    case VideoCaptureFrameDropReason::kWinMediaFoundationGetBufferByIndexReturnedNull:
      return os << "VideoCaptureFrameDropReason::kWinMediaFoundationGetBufferByIndexReturnedNull";
    case VideoCaptureFrameDropReason::kBufferPoolMaxBufferCountExceeded:
      return os << "VideoCaptureFrameDropReason::kBufferPoolMaxBufferCountExceeded";
    case VideoCaptureFrameDropReason::kBufferPoolBufferAllocationFailed:
      return os << "VideoCaptureFrameDropReason::kBufferPoolBufferAllocationFailed";
    case VideoCaptureFrameDropReason::kVideoCaptureImplNotInStartedState:
      return os << "VideoCaptureFrameDropReason::kVideoCaptureImplNotInStartedState";
    case VideoCaptureFrameDropReason::kVideoCaptureImplFailedToWrapDataAsMediaVideoFrame:
      return os << "VideoCaptureFrameDropReason::kVideoCaptureImplFailedToWrapDataAsMediaVideoFrame";
    case VideoCaptureFrameDropReason::kVideoTrackAdapterHasNoResolutionAdapters:
      return os << "VideoCaptureFrameDropReason::kVideoTrackAdapterHasNoResolutionAdapters";
    case VideoCaptureFrameDropReason::kResolutionAdapterFrameIsNotValid:
      return os << "VideoCaptureFrameDropReason::kResolutionAdapterFrameIsNotValid";
    case VideoCaptureFrameDropReason::kResolutionAdapterWrappingFrameForCroppingFailed:
      return os << "VideoCaptureFrameDropReason::kResolutionAdapterWrappingFrameForCroppingFailed";
    case VideoCaptureFrameDropReason::kResolutionAdapterTimestampTooCloseToPrevious:
      return os << "VideoCaptureFrameDropReason::kResolutionAdapterTimestampTooCloseToPrevious";
    case VideoCaptureFrameDropReason::kResolutionAdapterFrameRateIsHigherThanRequested:
      return os << "VideoCaptureFrameDropReason::kResolutionAdapterFrameRateIsHigherThanRequested";
    case VideoCaptureFrameDropReason::kResolutionAdapterHasNoCallbacks:
      return os << "VideoCaptureFrameDropReason::kResolutionAdapterHasNoCallbacks";
    case VideoCaptureFrameDropReason::kVideoTrackFrameDelivererNotEnabledReplacingWithBlackFrame:
      return os << "VideoCaptureFrameDropReason::kVideoTrackFrameDelivererNotEnabledReplacingWithBlackFrame";
    case VideoCaptureFrameDropReason::kRendererSinkFrameDelivererIsNotStarted:
      return os << "VideoCaptureFrameDropReason::kRendererSinkFrameDelivererIsNotStarted";
    default:
      return os << "Unknown VideoCaptureFrameDropReason value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool VideoBufferHandle_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const VideoBufferHandle_Data* object = static_cast<const VideoBufferHandle_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case VideoBufferHandle_Tag::SHARED_BUFFER_HANDLE: {

      if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
              object->data.f_shared_buffer_handle, 1, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateHandleOrInterface(object->data.f_shared_buffer_handle,
                                                     validation_context)) {
        return false;
      }
      return true;
    }
    case VideoBufferHandle_Tag::READ_ONLY_SHMEM_REGION: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_read_only_shmem_region, 2, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_read_only_shmem_region, validation_context))
        return false;
      return true;
    }
    case VideoBufferHandle_Tag::SHARED_MEMORY_VIA_RAW_FILE_DESCRIPTOR: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_shared_memory_via_raw_file_descriptor, 3, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_shared_memory_via_raw_file_descriptor, validation_context))
        return false;
      return true;
    }
    case VideoBufferHandle_Tag::MAILBOX_HANDLES: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_mailbox_handles, 4, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_mailbox_handles, validation_context))
        return false;
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in VideoBufferHandle");
      return false;
    }
  }
}


// static
bool VideoCaptureFormat_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoCaptureFormat_Data* object = static_cast<const VideoCaptureFormat_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame_size, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_size, validation_context))
    return false;


  if (!::media::mojom::internal::VideoCapturePixelFormat_Data
        ::Validate(object->pixel_format, validation_context))
    return false;

  return true;
}

VideoCaptureFormat_Data::VideoCaptureFormat_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoCaptureParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoCaptureParams_Data* object = static_cast<const VideoCaptureParams_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->requested_format, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->requested_format, validation_context))
    return false;


  if (!::media::mojom::internal::VideoCaptureBufferType_Data
        ::Validate(object->buffer_type, validation_context))
    return false;


  if (!::media::mojom::internal::ResolutionChangePolicy_Data
        ::Validate(object->resolution_change_policy, validation_context))
    return false;


  if (!::media::mojom::internal::PowerLineFrequency_Data
        ::Validate(object->power_line_frequency, validation_context))
    return false;

  return true;
}

VideoCaptureParams_Data::VideoCaptureParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PlaneStrides_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PlaneStrides_Data* object = static_cast<const PlaneStrides_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->stride_by_plane, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams stride_by_plane_validate_params(
      4, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->stride_by_plane, validation_context,
                                         &stride_by_plane_validate_params)) {
    return false;
  }

  return true;
}

PlaneStrides_Data::PlaneStrides_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoFrameInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoFrameInfo_Data* object = static_cast<const VideoFrameInfo_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 64 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timestamp, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timestamp, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->metadata, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->metadata, validation_context))
    return false;


  if (!::media::mojom::internal::VideoCapturePixelFormat_Data
        ::Validate(object->pixel_format, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->coded_size, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->coded_size, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->visible_rect, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->visible_rect, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->color_space, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->strides, validation_context))
    return false;

  return true;
}

VideoFrameInfo_Data::VideoFrameInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoCaptureDeviceDescriptor_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoCaptureDeviceDescriptor_Data* object = static_cast<const VideoCaptureDeviceDescriptor_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 48 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->display_name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams display_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->display_name, validation_context,
                                         &display_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->model_id, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams model_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->model_id, validation_context,
                                         &model_id_validate_params)) {
    return false;
  }


  if (!::media::mojom::internal::VideoFacingMode_Data
        ::Validate(object->facing_mode, validation_context))
    return false;


  if (!::media::mojom::internal::VideoCaptureApi_Data
        ::Validate(object->capture_api, validation_context))
    return false;


  if (!::media::mojom::internal::VideoCaptureTransportType_Data
        ::Validate(object->transport_type, validation_context))
    return false;

  return true;
}

VideoCaptureDeviceDescriptor_Data::VideoCaptureDeviceDescriptor_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoCaptureDeviceInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoCaptureDeviceInfo_Data* object = static_cast<const VideoCaptureDeviceInfo_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->descriptor, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->descriptor, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->supported_formats, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams supported_formats_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->supported_formats, validation_context,
                                         &supported_formats_validate_params)) {
    return false;
  }

  return true;
}

VideoCaptureDeviceInfo_Data::VideoCaptureDeviceInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MailboxBufferHandleSet_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MailboxBufferHandleSet_Data* object = static_cast<const MailboxBufferHandleSet_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->mailbox_holder, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams mailbox_holder_validate_params(
      4, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->mailbox_holder, validation_context,
                                         &mailbox_holder_validate_params)) {
    return false;
  }

  return true;
}

MailboxBufferHandleSet_Data::MailboxBufferHandleSet_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedMemoryViaRawFileDescriptor_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SharedMemoryViaRawFileDescriptor_Data* object = static_cast<const SharedMemoryViaRawFileDescriptor_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->file_descriptor_handle, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->file_descriptor_handle,
                                                 validation_context)) {
    return false;
  }

  return true;
}

SharedMemoryViaRawFileDescriptor_Data::SharedMemoryViaRawFileDescriptor_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media

#if defined(_MSC_VER)
#pragma warning(pop)
#endif