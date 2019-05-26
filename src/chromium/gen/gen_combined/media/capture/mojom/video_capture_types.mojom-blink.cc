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

#include "media/capture/mojom/video_capture_types.mojom-blink.h"

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

#include "media/capture/mojom/video_capture_types.mojom-params-data.h"
#include "media/capture/mojom/video_capture_types.mojom-shared-message-ids.h"

#include "media/capture/mojom/video_capture_types.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_BLINK_JUMBO_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_BLINK_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace media {
namespace mojom {
namespace blink {
VideoCaptureFormat::VideoCaptureFormat()
    : frame_size(),
      frame_rate(),
      pixel_format() {}

VideoCaptureFormat::VideoCaptureFormat(
    const ::blink::WebSize& frame_size_in,
    float frame_rate_in,
    VideoCapturePixelFormat pixel_format_in)
    : frame_size(std::move(frame_size_in)),
      frame_rate(std::move(frame_rate_in)),
      pixel_format(std::move(pixel_format_in)) {}

VideoCaptureFormat::~VideoCaptureFormat() = default;

bool VideoCaptureFormat::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoCaptureParams::VideoCaptureParams()
    : requested_format(),
      buffer_type(),
      resolution_change_policy(),
      power_line_frequency(),
      enable_face_detection() {}

VideoCaptureParams::VideoCaptureParams(
    VideoCaptureFormatPtr requested_format_in,
    VideoCaptureBufferType buffer_type_in,
    ResolutionChangePolicy resolution_change_policy_in,
    PowerLineFrequency power_line_frequency_in,
    bool enable_face_detection_in)
    : requested_format(std::move(requested_format_in)),
      buffer_type(std::move(buffer_type_in)),
      resolution_change_policy(std::move(resolution_change_policy_in)),
      power_line_frequency(std::move(power_line_frequency_in)),
      enable_face_detection(std::move(enable_face_detection_in)) {}

VideoCaptureParams::~VideoCaptureParams() = default;

bool VideoCaptureParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PlaneStrides::PlaneStrides()
    : stride_by_plane() {}

PlaneStrides::PlaneStrides(
    const WTF::Vector<uint32_t>& stride_by_plane_in)
    : stride_by_plane(std::move(stride_by_plane_in)) {}

PlaneStrides::~PlaneStrides() = default;

bool PlaneStrides::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoFrameInfo::VideoFrameInfo()
    : timestamp(),
      metadata(),
      pixel_format(),
      coded_size(),
      visible_rect(),
      color_space(),
      strides() {}

VideoFrameInfo::VideoFrameInfo(
    base::TimeDelta timestamp_in,
    ::mojo_base::mojom::blink::DictionaryValuePtr metadata_in,
    VideoCapturePixelFormat pixel_format_in,
    const ::blink::WebSize& coded_size_in,
    const ::blink::WebRect& visible_rect_in,
    ::gfx::mojom::blink::ColorSpacePtr color_space_in,
    PlaneStridesPtr strides_in)
    : timestamp(std::move(timestamp_in)),
      metadata(std::move(metadata_in)),
      pixel_format(std::move(pixel_format_in)),
      coded_size(std::move(coded_size_in)),
      visible_rect(std::move(visible_rect_in)),
      color_space(std::move(color_space_in)),
      strides(std::move(strides_in)) {}

VideoFrameInfo::~VideoFrameInfo() = default;

bool VideoFrameInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoCaptureDeviceDescriptor::VideoCaptureDeviceDescriptor()
    : display_name(),
      device_id(),
      model_id(),
      facing_mode(),
      capture_api(),
      transport_type() {}

VideoCaptureDeviceDescriptor::VideoCaptureDeviceDescriptor(
    const WTF::String& display_name_in,
    const WTF::String& device_id_in,
    const WTF::String& model_id_in,
    VideoFacingMode facing_mode_in,
    VideoCaptureApi capture_api_in,
    VideoCaptureTransportType transport_type_in)
    : display_name(std::move(display_name_in)),
      device_id(std::move(device_id_in)),
      model_id(std::move(model_id_in)),
      facing_mode(std::move(facing_mode_in)),
      capture_api(std::move(capture_api_in)),
      transport_type(std::move(transport_type_in)) {}

VideoCaptureDeviceDescriptor::~VideoCaptureDeviceDescriptor() = default;
size_t VideoCaptureDeviceDescriptor::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->display_name);
  seed = mojo::internal::WTFHash(seed, this->device_id);
  seed = mojo::internal::WTFHash(seed, this->model_id);
  seed = mojo::internal::WTFHash(seed, this->facing_mode);
  seed = mojo::internal::WTFHash(seed, this->capture_api);
  seed = mojo::internal::WTFHash(seed, this->transport_type);
  return seed;
}

bool VideoCaptureDeviceDescriptor::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoCaptureDeviceInfo::VideoCaptureDeviceInfo()
    : descriptor(),
      supported_formats() {}

VideoCaptureDeviceInfo::VideoCaptureDeviceInfo(
    VideoCaptureDeviceDescriptorPtr descriptor_in,
    WTF::Vector<VideoCaptureFormatPtr> supported_formats_in)
    : descriptor(std::move(descriptor_in)),
      supported_formats(std::move(supported_formats_in)) {}

VideoCaptureDeviceInfo::~VideoCaptureDeviceInfo() = default;

bool VideoCaptureDeviceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MailboxBufferHandleSet::MailboxBufferHandleSet()
    : mailbox_holder() {}

MailboxBufferHandleSet::MailboxBufferHandleSet(
    const WTF::Vector<::gpu::MailboxHolder>& mailbox_holder_in)
    : mailbox_holder(std::move(mailbox_holder_in)) {}

MailboxBufferHandleSet::~MailboxBufferHandleSet() = default;

bool MailboxBufferHandleSet::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SharedMemoryViaRawFileDescriptor::SharedMemoryViaRawFileDescriptor()
    : file_descriptor_handle(),
      shared_memory_size_in_bytes() {}

SharedMemoryViaRawFileDescriptor::SharedMemoryViaRawFileDescriptor(
    mojo::ScopedHandle file_descriptor_handle_in,
    uint32_t shared_memory_size_in_bytes_in)
    : file_descriptor_handle(std::move(file_descriptor_handle_in)),
      shared_memory_size_in_bytes(std::move(shared_memory_size_in_bytes_in)) {}

SharedMemoryViaRawFileDescriptor::~SharedMemoryViaRawFileDescriptor() = default;

bool SharedMemoryViaRawFileDescriptor::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoBufferHandle::VideoBufferHandle() : tag_(Tag::SHARED_BUFFER_HANDLE) {
  data_.shared_buffer_handle = new mojo::ScopedSharedBufferHandle;
}

VideoBufferHandle::~VideoBufferHandle() {
  DestroyActive();
}


void VideoBufferHandle::set_shared_buffer_handle(
    mojo::ScopedSharedBufferHandle shared_buffer_handle) {
  if (tag_ == Tag::SHARED_BUFFER_HANDLE) {
    *(data_.shared_buffer_handle) = std::move(shared_buffer_handle);
  } else {
    DestroyActive();
    tag_ = Tag::SHARED_BUFFER_HANDLE;
    data_.shared_buffer_handle = new mojo::ScopedSharedBufferHandle(
        std::move(shared_buffer_handle));
  }
}
void VideoBufferHandle::set_read_only_shmem_region(
    base::ReadOnlySharedMemoryRegion read_only_shmem_region) {
  if (tag_ == Tag::READ_ONLY_SHMEM_REGION) {
    *(data_.read_only_shmem_region) = std::move(read_only_shmem_region);
  } else {
    DestroyActive();
    tag_ = Tag::READ_ONLY_SHMEM_REGION;
    data_.read_only_shmem_region = new base::ReadOnlySharedMemoryRegion(
        std::move(read_only_shmem_region));
  }
}
void VideoBufferHandle::set_shared_memory_via_raw_file_descriptor(
    SharedMemoryViaRawFileDescriptorPtr shared_memory_via_raw_file_descriptor) {
  if (tag_ == Tag::SHARED_MEMORY_VIA_RAW_FILE_DESCRIPTOR) {
    *(data_.shared_memory_via_raw_file_descriptor) = std::move(shared_memory_via_raw_file_descriptor);
  } else {
    DestroyActive();
    tag_ = Tag::SHARED_MEMORY_VIA_RAW_FILE_DESCRIPTOR;
    data_.shared_memory_via_raw_file_descriptor = new SharedMemoryViaRawFileDescriptorPtr(
        std::move(shared_memory_via_raw_file_descriptor));
  }
}
void VideoBufferHandle::set_mailbox_handles(
    MailboxBufferHandleSetPtr mailbox_handles) {
  if (tag_ == Tag::MAILBOX_HANDLES) {
    *(data_.mailbox_handles) = std::move(mailbox_handles);
  } else {
    DestroyActive();
    tag_ = Tag::MAILBOX_HANDLES;
    data_.mailbox_handles = new MailboxBufferHandleSetPtr(
        std::move(mailbox_handles));
  }
}

void VideoBufferHandle::DestroyActive() {
  switch (tag_) {

    case Tag::SHARED_BUFFER_HANDLE:

      delete data_.shared_buffer_handle;
      break;
    case Tag::READ_ONLY_SHMEM_REGION:

      delete data_.read_only_shmem_region;
      break;
    case Tag::SHARED_MEMORY_VIA_RAW_FILE_DESCRIPTOR:

      delete data_.shared_memory_via_raw_file_descriptor;
      break;
    case Tag::MAILBOX_HANDLES:

      delete data_.mailbox_handles;
      break;
  }
}

bool VideoBufferHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::blink::VideoCaptureFormat::DataView, ::media::mojom::blink::VideoCaptureFormatPtr>::Read(
    ::media::mojom::blink::VideoCaptureFormat::DataView input,
    ::media::mojom::blink::VideoCaptureFormatPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoCaptureFormatPtr result(::media::mojom::blink::VideoCaptureFormat::New());
  
      if (!input.ReadFrameSize(&result->frame_size))
        success = false;
      result->frame_rate = input.frame_rate();
      if (!input.ReadPixelFormat(&result->pixel_format))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::VideoCaptureParams::DataView, ::media::mojom::blink::VideoCaptureParamsPtr>::Read(
    ::media::mojom::blink::VideoCaptureParams::DataView input,
    ::media::mojom::blink::VideoCaptureParamsPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoCaptureParamsPtr result(::media::mojom::blink::VideoCaptureParams::New());
  
      if (!input.ReadRequestedFormat(&result->requested_format))
        success = false;
      if (!input.ReadBufferType(&result->buffer_type))
        success = false;
      if (!input.ReadResolutionChangePolicy(&result->resolution_change_policy))
        success = false;
      if (!input.ReadPowerLineFrequency(&result->power_line_frequency))
        success = false;
      result->enable_face_detection = input.enable_face_detection();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::PlaneStrides::DataView, ::media::mojom::blink::PlaneStridesPtr>::Read(
    ::media::mojom::blink::PlaneStrides::DataView input,
    ::media::mojom::blink::PlaneStridesPtr* output) {
  bool success = true;
  ::media::mojom::blink::PlaneStridesPtr result(::media::mojom::blink::PlaneStrides::New());
  
      if (!input.ReadStrideByPlane(&result->stride_by_plane))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::VideoFrameInfo::DataView, ::media::mojom::blink::VideoFrameInfoPtr>::Read(
    ::media::mojom::blink::VideoFrameInfo::DataView input,
    ::media::mojom::blink::VideoFrameInfoPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoFrameInfoPtr result(::media::mojom::blink::VideoFrameInfo::New());
  
      if (!input.ReadTimestamp(&result->timestamp))
        success = false;
      if (!input.ReadMetadata(&result->metadata))
        success = false;
      if (!input.ReadPixelFormat(&result->pixel_format))
        success = false;
      if (!input.ReadCodedSize(&result->coded_size))
        success = false;
      if (!input.ReadVisibleRect(&result->visible_rect))
        success = false;
      if (!input.ReadColorSpace(&result->color_space))
        success = false;
      if (!input.ReadStrides(&result->strides))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::VideoCaptureDeviceDescriptor::DataView, ::media::mojom::blink::VideoCaptureDeviceDescriptorPtr>::Read(
    ::media::mojom::blink::VideoCaptureDeviceDescriptor::DataView input,
    ::media::mojom::blink::VideoCaptureDeviceDescriptorPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoCaptureDeviceDescriptorPtr result(::media::mojom::blink::VideoCaptureDeviceDescriptor::New());
  
      if (!input.ReadDisplayName(&result->display_name))
        success = false;
      if (!input.ReadDeviceId(&result->device_id))
        success = false;
      if (!input.ReadModelId(&result->model_id))
        success = false;
      if (!input.ReadFacingMode(&result->facing_mode))
        success = false;
      if (!input.ReadCaptureApi(&result->capture_api))
        success = false;
      if (!input.ReadTransportType(&result->transport_type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::VideoCaptureDeviceInfo::DataView, ::media::mojom::blink::VideoCaptureDeviceInfoPtr>::Read(
    ::media::mojom::blink::VideoCaptureDeviceInfo::DataView input,
    ::media::mojom::blink::VideoCaptureDeviceInfoPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoCaptureDeviceInfoPtr result(::media::mojom::blink::VideoCaptureDeviceInfo::New());
  
      if (!input.ReadDescriptor(&result->descriptor))
        success = false;
      if (!input.ReadSupportedFormats(&result->supported_formats))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::MailboxBufferHandleSet::DataView, ::media::mojom::blink::MailboxBufferHandleSetPtr>::Read(
    ::media::mojom::blink::MailboxBufferHandleSet::DataView input,
    ::media::mojom::blink::MailboxBufferHandleSetPtr* output) {
  bool success = true;
  ::media::mojom::blink::MailboxBufferHandleSetPtr result(::media::mojom::blink::MailboxBufferHandleSet::New());
  
      if (!input.ReadMailboxHolder(&result->mailbox_holder))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::SharedMemoryViaRawFileDescriptor::DataView, ::media::mojom::blink::SharedMemoryViaRawFileDescriptorPtr>::Read(
    ::media::mojom::blink::SharedMemoryViaRawFileDescriptor::DataView input,
    ::media::mojom::blink::SharedMemoryViaRawFileDescriptorPtr* output) {
  bool success = true;
  ::media::mojom::blink::SharedMemoryViaRawFileDescriptorPtr result(::media::mojom::blink::SharedMemoryViaRawFileDescriptor::New());
  
      result->file_descriptor_handle = input.TakeFileDescriptorHandle();
      result->shared_memory_size_in_bytes = input.shared_memory_size_in_bytes();
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::media::mojom::blink::VideoBufferHandle::DataView, ::media::mojom::blink::VideoBufferHandlePtr>::Read(
    ::media::mojom::blink::VideoBufferHandle::DataView input,
    ::media::mojom::blink::VideoBufferHandlePtr* output) {
  using UnionType = ::media::mojom::blink::VideoBufferHandle;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::SHARED_BUFFER_HANDLE: {
      *output = UnionType::NewSharedBufferHandle(
          input.TakeSharedBufferHandle());
      break;
    }
    case Tag::READ_ONLY_SHMEM_REGION: {
      base::ReadOnlySharedMemoryRegion result_read_only_shmem_region;
      if (!input.ReadReadOnlyShmemRegion(&result_read_only_shmem_region))
        return false;

      *output = UnionType::NewReadOnlyShmemRegion(
          std::move(result_read_only_shmem_region));
      break;
    }
    case Tag::SHARED_MEMORY_VIA_RAW_FILE_DESCRIPTOR: {
      ::media::mojom::blink::SharedMemoryViaRawFileDescriptorPtr result_shared_memory_via_raw_file_descriptor;
      if (!input.ReadSharedMemoryViaRawFileDescriptor(&result_shared_memory_via_raw_file_descriptor))
        return false;

      *output = UnionType::NewSharedMemoryViaRawFileDescriptor(
          std::move(result_shared_memory_via_raw_file_descriptor));
      break;
    }
    case Tag::MAILBOX_HANDLES: {
      ::media::mojom::blink::MailboxBufferHandleSetPtr result_mailbox_handles;
      if (!input.ReadMailboxHandles(&result_mailbox_handles))
        return false;

      *output = UnionType::NewMailboxHandles(
          std::move(result_mailbox_handles));
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