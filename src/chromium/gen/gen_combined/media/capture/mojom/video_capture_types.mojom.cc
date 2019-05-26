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

#include "media/capture/mojom/video_capture_types.mojom.h"

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

#include "media/capture/mojom/video_capture_types.mojom-import-headers.h"


#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_JUMBO_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "media/capture/mojom/video_capture_types_mojom_traits.h"
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/color_space_mojom_traits.h"
#endif
namespace media {
namespace mojom {
VideoCaptureFormat::VideoCaptureFormat()
    : frame_size(),
      frame_rate(),
      pixel_format() {}

VideoCaptureFormat::VideoCaptureFormat(
    const gfx::Size& frame_size_in,
    float frame_rate_in,
    media::VideoPixelFormat pixel_format_in)
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
    const media::VideoCaptureFormat& requested_format_in,
    media::VideoCaptureBufferType buffer_type_in,
    media::ResolutionChangePolicy resolution_change_policy_in,
    media::PowerLineFrequency power_line_frequency_in,
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
    const std::vector<uint32_t>& stride_by_plane_in)
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
    base::Value metadata_in,
    media::VideoPixelFormat pixel_format_in,
    const gfx::Size& coded_size_in,
    const gfx::Rect& visible_rect_in,
    const base::Optional<gfx::ColorSpace>& color_space_in,
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
    const std::string& display_name_in,
    const std::string& device_id_in,
    const std::string& model_id_in,
    media::VideoFacingMode facing_mode_in,
    VideoCaptureApi capture_api_in,
    VideoCaptureTransportType transport_type_in)
    : display_name(std::move(display_name_in)),
      device_id(std::move(device_id_in)),
      model_id(std::move(model_id_in)),
      facing_mode(std::move(facing_mode_in)),
      capture_api(std::move(capture_api_in)),
      transport_type(std::move(transport_type_in)) {}

VideoCaptureDeviceDescriptor::~VideoCaptureDeviceDescriptor() = default;

bool VideoCaptureDeviceDescriptor::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoCaptureDeviceInfo::VideoCaptureDeviceInfo()
    : descriptor(),
      supported_formats() {}

VideoCaptureDeviceInfo::VideoCaptureDeviceInfo(
    const media::VideoCaptureDeviceDescriptor& descriptor_in,
    const std::vector<media::VideoCaptureFormat>& supported_formats_in)
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
    const std::vector<::gpu::MailboxHolder>& mailbox_holder_in)
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
}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::VideoCaptureFormat::DataView, ::media::mojom::VideoCaptureFormatPtr>::Read(
    ::media::mojom::VideoCaptureFormat::DataView input,
    ::media::mojom::VideoCaptureFormatPtr* output) {
  bool success = true;
  ::media::mojom::VideoCaptureFormatPtr result(::media::mojom::VideoCaptureFormat::New());
  
      if (!input.ReadFrameSize(&result->frame_size))
        success = false;
      result->frame_rate = input.frame_rate();
      if (!input.ReadPixelFormat(&result->pixel_format))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::VideoCaptureParams::DataView, ::media::mojom::VideoCaptureParamsPtr>::Read(
    ::media::mojom::VideoCaptureParams::DataView input,
    ::media::mojom::VideoCaptureParamsPtr* output) {
  bool success = true;
  ::media::mojom::VideoCaptureParamsPtr result(::media::mojom::VideoCaptureParams::New());
  
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
bool StructTraits<::media::mojom::PlaneStrides::DataView, ::media::mojom::PlaneStridesPtr>::Read(
    ::media::mojom::PlaneStrides::DataView input,
    ::media::mojom::PlaneStridesPtr* output) {
  bool success = true;
  ::media::mojom::PlaneStridesPtr result(::media::mojom::PlaneStrides::New());
  
      if (!input.ReadStrideByPlane(&result->stride_by_plane))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::VideoFrameInfo::DataView, ::media::mojom::VideoFrameInfoPtr>::Read(
    ::media::mojom::VideoFrameInfo::DataView input,
    ::media::mojom::VideoFrameInfoPtr* output) {
  bool success = true;
  ::media::mojom::VideoFrameInfoPtr result(::media::mojom::VideoFrameInfo::New());
  
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
bool StructTraits<::media::mojom::VideoCaptureDeviceDescriptor::DataView, ::media::mojom::VideoCaptureDeviceDescriptorPtr>::Read(
    ::media::mojom::VideoCaptureDeviceDescriptor::DataView input,
    ::media::mojom::VideoCaptureDeviceDescriptorPtr* output) {
  bool success = true;
  ::media::mojom::VideoCaptureDeviceDescriptorPtr result(::media::mojom::VideoCaptureDeviceDescriptor::New());
  
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
bool StructTraits<::media::mojom::VideoCaptureDeviceInfo::DataView, ::media::mojom::VideoCaptureDeviceInfoPtr>::Read(
    ::media::mojom::VideoCaptureDeviceInfo::DataView input,
    ::media::mojom::VideoCaptureDeviceInfoPtr* output) {
  bool success = true;
  ::media::mojom::VideoCaptureDeviceInfoPtr result(::media::mojom::VideoCaptureDeviceInfo::New());
  
      if (!input.ReadDescriptor(&result->descriptor))
        success = false;
      if (!input.ReadSupportedFormats(&result->supported_formats))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::MailboxBufferHandleSet::DataView, ::media::mojom::MailboxBufferHandleSetPtr>::Read(
    ::media::mojom::MailboxBufferHandleSet::DataView input,
    ::media::mojom::MailboxBufferHandleSetPtr* output) {
  bool success = true;
  ::media::mojom::MailboxBufferHandleSetPtr result(::media::mojom::MailboxBufferHandleSet::New());
  
      if (!input.ReadMailboxHolder(&result->mailbox_holder))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::SharedMemoryViaRawFileDescriptor::DataView, ::media::mojom::SharedMemoryViaRawFileDescriptorPtr>::Read(
    ::media::mojom::SharedMemoryViaRawFileDescriptor::DataView input,
    ::media::mojom::SharedMemoryViaRawFileDescriptorPtr* output) {
  bool success = true;
  ::media::mojom::SharedMemoryViaRawFileDescriptorPtr result(::media::mojom::SharedMemoryViaRawFileDescriptor::New());
  
      result->file_descriptor_handle = input.TakeFileDescriptorHandle();
      result->shared_memory_size_in_bytes = input.shared_memory_size_in_bytes();
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::media::mojom::VideoBufferHandle::DataView, ::media::mojom::VideoBufferHandlePtr>::Read(
    ::media::mojom::VideoBufferHandle::DataView input,
    ::media::mojom::VideoBufferHandlePtr* output) {
  using UnionType = ::media::mojom::VideoBufferHandle;
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
      ::media::mojom::SharedMemoryViaRawFileDescriptorPtr result_shared_memory_via_raw_file_descriptor;
      if (!input.ReadSharedMemoryViaRawFileDescriptor(&result_shared_memory_via_raw_file_descriptor))
        return false;

      *output = UnionType::NewSharedMemoryViaRawFileDescriptor(
          std::move(result_shared_memory_via_raw_file_descriptor));
      break;
    }
    case Tag::MAILBOX_HANDLES: {
      ::media::mojom::MailboxBufferHandleSetPtr result_mailbox_handles;
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