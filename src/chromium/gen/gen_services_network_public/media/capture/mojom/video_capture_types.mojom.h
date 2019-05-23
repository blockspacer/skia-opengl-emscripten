// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "media/capture/mojom/video_capture_types.mojom-shared.h"
#include "media/capture/mojom/video_capture_types.mojom-forward.h"
#include "gpu/ipc/common/mailbox_holder.mojom.h"
#include "mojo/public/mojom/base/shared_memory.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/values.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/color_space.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "media/capture/video/video_capture_device_descriptor.h"
#include "media/capture/video/video_capture_device_info.h"
#include "media/capture/video_capture_types.h"




namespace media {
namespace mojom {













class  VideoBufferHandle {
 public:
  using DataView = VideoBufferHandleDataView;
  using Data_ = internal::VideoBufferHandle_Data;
  using Tag = Data_::VideoBufferHandle_Tag;

  static VideoBufferHandlePtr New() {
    return VideoBufferHandlePtr(base::in_place);
  }
  // Construct an instance holding |shared_buffer_handle|.
  static VideoBufferHandlePtr
  NewSharedBufferHandle(
      mojo::ScopedSharedBufferHandle shared_buffer_handle) {
    auto result = VideoBufferHandlePtr(base::in_place);
    result->set_shared_buffer_handle(std::move(shared_buffer_handle));
    return result;
  }
  // Construct an instance holding |read_only_shmem_region|.
  static VideoBufferHandlePtr
  NewReadOnlyShmemRegion(
      base::ReadOnlySharedMemoryRegion read_only_shmem_region) {
    auto result = VideoBufferHandlePtr(base::in_place);
    result->set_read_only_shmem_region(std::move(read_only_shmem_region));
    return result;
  }
  // Construct an instance holding |shared_memory_via_raw_file_descriptor|.
  static VideoBufferHandlePtr
  NewSharedMemoryViaRawFileDescriptor(
      SharedMemoryViaRawFileDescriptorPtr shared_memory_via_raw_file_descriptor) {
    auto result = VideoBufferHandlePtr(base::in_place);
    result->set_shared_memory_via_raw_file_descriptor(std::move(shared_memory_via_raw_file_descriptor));
    return result;
  }
  // Construct an instance holding |mailbox_handles|.
  static VideoBufferHandlePtr
  NewMailboxHandles(
      MailboxBufferHandleSetPtr mailbox_handles) {
    auto result = VideoBufferHandlePtr(base::in_place);
    result->set_mailbox_handles(std::move(mailbox_handles));
    return result;
  }

  template <typename U>
  static VideoBufferHandlePtr From(const U& u) {
    return mojo::TypeConverter<VideoBufferHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoBufferHandle>::Convert(*this);
  }

  VideoBufferHandle();
  ~VideoBufferHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = VideoBufferHandlePtr>
  VideoBufferHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoBufferHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_shared_buffer_handle() const { return tag_ == Tag::SHARED_BUFFER_HANDLE; }

  
  mojo::ScopedSharedBufferHandle& get_shared_buffer_handle() const {
    DCHECK(tag_ == Tag::SHARED_BUFFER_HANDLE);
    return *(data_.shared_buffer_handle);
  }

  
  void set_shared_buffer_handle(
      mojo::ScopedSharedBufferHandle shared_buffer_handle);
  
  bool is_read_only_shmem_region() const { return tag_ == Tag::READ_ONLY_SHMEM_REGION; }

  
  base::ReadOnlySharedMemoryRegion& get_read_only_shmem_region() const {
    DCHECK(tag_ == Tag::READ_ONLY_SHMEM_REGION);
    return *(data_.read_only_shmem_region);
  }

  
  void set_read_only_shmem_region(
      base::ReadOnlySharedMemoryRegion read_only_shmem_region);
  
  bool is_shared_memory_via_raw_file_descriptor() const { return tag_ == Tag::SHARED_MEMORY_VIA_RAW_FILE_DESCRIPTOR; }

  
  SharedMemoryViaRawFileDescriptorPtr& get_shared_memory_via_raw_file_descriptor() const {
    DCHECK(tag_ == Tag::SHARED_MEMORY_VIA_RAW_FILE_DESCRIPTOR);
    return *(data_.shared_memory_via_raw_file_descriptor);
  }

  
  void set_shared_memory_via_raw_file_descriptor(
      SharedMemoryViaRawFileDescriptorPtr shared_memory_via_raw_file_descriptor);
  
  bool is_mailbox_handles() const { return tag_ == Tag::MAILBOX_HANDLES; }

  
  MailboxBufferHandleSetPtr& get_mailbox_handles() const {
    DCHECK(tag_ == Tag::MAILBOX_HANDLES);
    return *(data_.mailbox_handles);
  }

  
  void set_mailbox_handles(
      MailboxBufferHandleSetPtr mailbox_handles);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoBufferHandle::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<VideoBufferHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    mojo::ScopedSharedBufferHandle* shared_buffer_handle;
    base::ReadOnlySharedMemoryRegion* read_only_shmem_region;
    SharedMemoryViaRawFileDescriptorPtr* shared_memory_via_raw_file_descriptor;
    MailboxBufferHandleSetPtr* mailbox_handles;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class  VideoCaptureFormat {
 public:
  using DataView = VideoCaptureFormatDataView;
  using Data_ = internal::VideoCaptureFormat_Data;

  template <typename... Args>
  static VideoCaptureFormatPtr New(Args&&... args) {
    return VideoCaptureFormatPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoCaptureFormatPtr From(const U& u) {
    return mojo::TypeConverter<VideoCaptureFormatPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoCaptureFormat>::Convert(*this);
  }


  VideoCaptureFormat();

  VideoCaptureFormat(
      const gfx::Size& frame_size,
      float frame_rate,
      media::VideoPixelFormat pixel_format);

  ~VideoCaptureFormat();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoCaptureFormatPtr>
  VideoCaptureFormatPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoCaptureFormat>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoCaptureFormat::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoCaptureFormat::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoCaptureFormat_UnserializedMessageContext<
            UserType, VideoCaptureFormat::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoCaptureFormat::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoCaptureFormat::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoCaptureFormat_UnserializedMessageContext<
            UserType, VideoCaptureFormat::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoCaptureFormat::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  gfx::Size frame_size;
  
  float frame_rate;
  
  media::VideoPixelFormat pixel_format;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  VideoCaptureParams {
 public:
  using DataView = VideoCaptureParamsDataView;
  using Data_ = internal::VideoCaptureParams_Data;

  template <typename... Args>
  static VideoCaptureParamsPtr New(Args&&... args) {
    return VideoCaptureParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoCaptureParamsPtr From(const U& u) {
    return mojo::TypeConverter<VideoCaptureParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoCaptureParams>::Convert(*this);
  }


  VideoCaptureParams();

  VideoCaptureParams(
      const media::VideoCaptureFormat& requested_format,
      media::VideoCaptureBufferType buffer_type,
      media::ResolutionChangePolicy resolution_change_policy,
      media::PowerLineFrequency power_line_frequency,
      bool enable_face_detection);

  ~VideoCaptureParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoCaptureParamsPtr>
  VideoCaptureParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoCaptureParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoCaptureParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoCaptureParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoCaptureParams_UnserializedMessageContext<
            UserType, VideoCaptureParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoCaptureParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoCaptureParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoCaptureParams_UnserializedMessageContext<
            UserType, VideoCaptureParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoCaptureParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  media::VideoCaptureFormat requested_format;
  
  media::VideoCaptureBufferType buffer_type;
  
  media::ResolutionChangePolicy resolution_change_policy;
  
  media::PowerLineFrequency power_line_frequency;
  
  bool enable_face_detection;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  PlaneStrides {
 public:
  using DataView = PlaneStridesDataView;
  using Data_ = internal::PlaneStrides_Data;

  template <typename... Args>
  static PlaneStridesPtr New(Args&&... args) {
    return PlaneStridesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PlaneStridesPtr From(const U& u) {
    return mojo::TypeConverter<PlaneStridesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PlaneStrides>::Convert(*this);
  }


  PlaneStrides();

  explicit PlaneStrides(
      const std::vector<uint32_t>& stride_by_plane);

  ~PlaneStrides();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PlaneStridesPtr>
  PlaneStridesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PlaneStrides>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PlaneStrides::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PlaneStrides::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PlaneStrides_UnserializedMessageContext<
            UserType, PlaneStrides::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PlaneStrides::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PlaneStrides::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PlaneStrides_UnserializedMessageContext<
            UserType, PlaneStrides::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PlaneStrides::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<uint32_t> stride_by_plane;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  VideoFrameInfo {
 public:
  using DataView = VideoFrameInfoDataView;
  using Data_ = internal::VideoFrameInfo_Data;

  template <typename... Args>
  static VideoFrameInfoPtr New(Args&&... args) {
    return VideoFrameInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoFrameInfoPtr From(const U& u) {
    return mojo::TypeConverter<VideoFrameInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoFrameInfo>::Convert(*this);
  }


  VideoFrameInfo();

  VideoFrameInfo(
      base::TimeDelta timestamp,
      base::Value metadata,
      media::VideoPixelFormat pixel_format,
      const gfx::Size& coded_size,
      const gfx::Rect& visible_rect,
      const base::Optional<gfx::ColorSpace>& color_space,
      PlaneStridesPtr strides);

  ~VideoFrameInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoFrameInfoPtr>
  VideoFrameInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoFrameInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoFrameInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoFrameInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoFrameInfo_UnserializedMessageContext<
            UserType, VideoFrameInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoFrameInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoFrameInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoFrameInfo_UnserializedMessageContext<
            UserType, VideoFrameInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoFrameInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::TimeDelta timestamp;
  
  base::Value metadata;
  
  media::VideoPixelFormat pixel_format;
  
  gfx::Size coded_size;
  
  gfx::Rect visible_rect;
  
  base::Optional<gfx::ColorSpace> color_space;
  
  PlaneStridesPtr strides;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VideoFrameInfo);
};





class  VideoCaptureDeviceDescriptor {
 public:
  using DataView = VideoCaptureDeviceDescriptorDataView;
  using Data_ = internal::VideoCaptureDeviceDescriptor_Data;

  template <typename... Args>
  static VideoCaptureDeviceDescriptorPtr New(Args&&... args) {
    return VideoCaptureDeviceDescriptorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoCaptureDeviceDescriptorPtr From(const U& u) {
    return mojo::TypeConverter<VideoCaptureDeviceDescriptorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoCaptureDeviceDescriptor>::Convert(*this);
  }


  VideoCaptureDeviceDescriptor();

  VideoCaptureDeviceDescriptor(
      const std::string& display_name,
      const std::string& device_id,
      const std::string& model_id,
      media::VideoFacingMode facing_mode,
      VideoCaptureApi capture_api,
      VideoCaptureTransportType transport_type);

  ~VideoCaptureDeviceDescriptor();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoCaptureDeviceDescriptorPtr>
  VideoCaptureDeviceDescriptorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoCaptureDeviceDescriptor>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoCaptureDeviceDescriptor::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoCaptureDeviceDescriptor::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoCaptureDeviceDescriptor_UnserializedMessageContext<
            UserType, VideoCaptureDeviceDescriptor::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoCaptureDeviceDescriptor::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoCaptureDeviceDescriptor::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoCaptureDeviceDescriptor_UnserializedMessageContext<
            UserType, VideoCaptureDeviceDescriptor::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoCaptureDeviceDescriptor::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string display_name;
  
  std::string device_id;
  
  std::string model_id;
  
  media::VideoFacingMode facing_mode;
  
  VideoCaptureApi capture_api;
  
  VideoCaptureTransportType transport_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  VideoCaptureDeviceInfo {
 public:
  using DataView = VideoCaptureDeviceInfoDataView;
  using Data_ = internal::VideoCaptureDeviceInfo_Data;

  template <typename... Args>
  static VideoCaptureDeviceInfoPtr New(Args&&... args) {
    return VideoCaptureDeviceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoCaptureDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<VideoCaptureDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoCaptureDeviceInfo>::Convert(*this);
  }


  VideoCaptureDeviceInfo();

  VideoCaptureDeviceInfo(
      const media::VideoCaptureDeviceDescriptor& descriptor,
      const std::vector<media::VideoCaptureFormat>& supported_formats);

  ~VideoCaptureDeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoCaptureDeviceInfoPtr>
  VideoCaptureDeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoCaptureDeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoCaptureDeviceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoCaptureDeviceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoCaptureDeviceInfo_UnserializedMessageContext<
            UserType, VideoCaptureDeviceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoCaptureDeviceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoCaptureDeviceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoCaptureDeviceInfo_UnserializedMessageContext<
            UserType, VideoCaptureDeviceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoCaptureDeviceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  media::VideoCaptureDeviceDescriptor descriptor;
  
  std::vector<media::VideoCaptureFormat> supported_formats;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  MailboxBufferHandleSet {
 public:
  using DataView = MailboxBufferHandleSetDataView;
  using Data_ = internal::MailboxBufferHandleSet_Data;

  template <typename... Args>
  static MailboxBufferHandleSetPtr New(Args&&... args) {
    return MailboxBufferHandleSetPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MailboxBufferHandleSetPtr From(const U& u) {
    return mojo::TypeConverter<MailboxBufferHandleSetPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MailboxBufferHandleSet>::Convert(*this);
  }


  MailboxBufferHandleSet();

  explicit MailboxBufferHandleSet(
      const std::vector<::gpu::MailboxHolder>& mailbox_holder);

  ~MailboxBufferHandleSet();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MailboxBufferHandleSetPtr>
  MailboxBufferHandleSetPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MailboxBufferHandleSet>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MailboxBufferHandleSet::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MailboxBufferHandleSet::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MailboxBufferHandleSet_UnserializedMessageContext<
            UserType, MailboxBufferHandleSet::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MailboxBufferHandleSet::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MailboxBufferHandleSet::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MailboxBufferHandleSet_UnserializedMessageContext<
            UserType, MailboxBufferHandleSet::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MailboxBufferHandleSet::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<::gpu::MailboxHolder> mailbox_holder;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  SharedMemoryViaRawFileDescriptor {
 public:
  using DataView = SharedMemoryViaRawFileDescriptorDataView;
  using Data_ = internal::SharedMemoryViaRawFileDescriptor_Data;

  template <typename... Args>
  static SharedMemoryViaRawFileDescriptorPtr New(Args&&... args) {
    return SharedMemoryViaRawFileDescriptorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SharedMemoryViaRawFileDescriptorPtr From(const U& u) {
    return mojo::TypeConverter<SharedMemoryViaRawFileDescriptorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SharedMemoryViaRawFileDescriptor>::Convert(*this);
  }


  SharedMemoryViaRawFileDescriptor();

  SharedMemoryViaRawFileDescriptor(
      mojo::ScopedHandle file_descriptor_handle,
      uint32_t shared_memory_size_in_bytes);

  ~SharedMemoryViaRawFileDescriptor();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SharedMemoryViaRawFileDescriptorPtr>
  SharedMemoryViaRawFileDescriptorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SharedMemoryViaRawFileDescriptor>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SharedMemoryViaRawFileDescriptor::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SharedMemoryViaRawFileDescriptor::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SharedMemoryViaRawFileDescriptor_UnserializedMessageContext<
            UserType, SharedMemoryViaRawFileDescriptor::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SharedMemoryViaRawFileDescriptor::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SharedMemoryViaRawFileDescriptor::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SharedMemoryViaRawFileDescriptor_UnserializedMessageContext<
            UserType, SharedMemoryViaRawFileDescriptor::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SharedMemoryViaRawFileDescriptor::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::ScopedHandle file_descriptor_handle;
  
  uint32_t shared_memory_size_in_bytes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SharedMemoryViaRawFileDescriptor);
};

template <typename UnionPtrType>
VideoBufferHandlePtr VideoBufferHandle::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::SHARED_BUFFER_HANDLE:
      rv->set_shared_buffer_handle(mojo::Clone(*data_.shared_buffer_handle));
      break;
    case Tag::READ_ONLY_SHMEM_REGION:
      rv->set_read_only_shmem_region(mojo::Clone(*data_.read_only_shmem_region));
      break;
    case Tag::SHARED_MEMORY_VIA_RAW_FILE_DESCRIPTOR:
      rv->set_shared_memory_via_raw_file_descriptor(mojo::Clone(*data_.shared_memory_via_raw_file_descriptor));
      break;
    case Tag::MAILBOX_HANDLES:
      rv->set_mailbox_handles(mojo::Clone(*data_.mailbox_handles));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoBufferHandle>::value>::type*>
bool VideoBufferHandle::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::SHARED_BUFFER_HANDLE:
      return mojo::Equals(*(data_.shared_buffer_handle), *(other.data_.shared_buffer_handle));
    case Tag::READ_ONLY_SHMEM_REGION:
      return mojo::Equals(*(data_.read_only_shmem_region), *(other.data_.read_only_shmem_region));
    case Tag::SHARED_MEMORY_VIA_RAW_FILE_DESCRIPTOR:
      return mojo::Equals(*(data_.shared_memory_via_raw_file_descriptor), *(other.data_.shared_memory_via_raw_file_descriptor));
    case Tag::MAILBOX_HANDLES:
      return mojo::Equals(*(data_.mailbox_handles), *(other.data_.mailbox_handles));
  }

  return false;
}
template <typename StructPtrType>
VideoCaptureFormatPtr VideoCaptureFormat::Clone() const {
  return New(
      mojo::Clone(frame_size),
      mojo::Clone(frame_rate),
      mojo::Clone(pixel_format)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoCaptureFormat>::value>::type*>
bool VideoCaptureFormat::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->frame_size, other_struct.frame_size))
    return false;
  if (!mojo::Equals(this->frame_rate, other_struct.frame_rate))
    return false;
  if (!mojo::Equals(this->pixel_format, other_struct.pixel_format))
    return false;
  return true;
}
template <typename StructPtrType>
VideoCaptureParamsPtr VideoCaptureParams::Clone() const {
  return New(
      mojo::Clone(requested_format),
      mojo::Clone(buffer_type),
      mojo::Clone(resolution_change_policy),
      mojo::Clone(power_line_frequency),
      mojo::Clone(enable_face_detection)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoCaptureParams>::value>::type*>
bool VideoCaptureParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->requested_format, other_struct.requested_format))
    return false;
  if (!mojo::Equals(this->buffer_type, other_struct.buffer_type))
    return false;
  if (!mojo::Equals(this->resolution_change_policy, other_struct.resolution_change_policy))
    return false;
  if (!mojo::Equals(this->power_line_frequency, other_struct.power_line_frequency))
    return false;
  if (!mojo::Equals(this->enable_face_detection, other_struct.enable_face_detection))
    return false;
  return true;
}
template <typename StructPtrType>
PlaneStridesPtr PlaneStrides::Clone() const {
  return New(
      mojo::Clone(stride_by_plane)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PlaneStrides>::value>::type*>
bool PlaneStrides::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->stride_by_plane, other_struct.stride_by_plane))
    return false;
  return true;
}
template <typename StructPtrType>
VideoFrameInfoPtr VideoFrameInfo::Clone() const {
  return New(
      mojo::Clone(timestamp),
      mojo::Clone(metadata),
      mojo::Clone(pixel_format),
      mojo::Clone(coded_size),
      mojo::Clone(visible_rect),
      mojo::Clone(color_space),
      mojo::Clone(strides)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoFrameInfo>::value>::type*>
bool VideoFrameInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  if (!mojo::Equals(this->metadata, other_struct.metadata))
    return false;
  if (!mojo::Equals(this->pixel_format, other_struct.pixel_format))
    return false;
  if (!mojo::Equals(this->coded_size, other_struct.coded_size))
    return false;
  if (!mojo::Equals(this->visible_rect, other_struct.visible_rect))
    return false;
  if (!mojo::Equals(this->color_space, other_struct.color_space))
    return false;
  if (!mojo::Equals(this->strides, other_struct.strides))
    return false;
  return true;
}
template <typename StructPtrType>
VideoCaptureDeviceDescriptorPtr VideoCaptureDeviceDescriptor::Clone() const {
  return New(
      mojo::Clone(display_name),
      mojo::Clone(device_id),
      mojo::Clone(model_id),
      mojo::Clone(facing_mode),
      mojo::Clone(capture_api),
      mojo::Clone(transport_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoCaptureDeviceDescriptor>::value>::type*>
bool VideoCaptureDeviceDescriptor::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->display_name, other_struct.display_name))
    return false;
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  if (!mojo::Equals(this->model_id, other_struct.model_id))
    return false;
  if (!mojo::Equals(this->facing_mode, other_struct.facing_mode))
    return false;
  if (!mojo::Equals(this->capture_api, other_struct.capture_api))
    return false;
  if (!mojo::Equals(this->transport_type, other_struct.transport_type))
    return false;
  return true;
}
template <typename StructPtrType>
VideoCaptureDeviceInfoPtr VideoCaptureDeviceInfo::Clone() const {
  return New(
      mojo::Clone(descriptor),
      mojo::Clone(supported_formats)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoCaptureDeviceInfo>::value>::type*>
bool VideoCaptureDeviceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->descriptor, other_struct.descriptor))
    return false;
  if (!mojo::Equals(this->supported_formats, other_struct.supported_formats))
    return false;
  return true;
}
template <typename StructPtrType>
MailboxBufferHandleSetPtr MailboxBufferHandleSet::Clone() const {
  return New(
      mojo::Clone(mailbox_holder)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MailboxBufferHandleSet>::value>::type*>
bool MailboxBufferHandleSet::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mailbox_holder, other_struct.mailbox_holder))
    return false;
  return true;
}
template <typename StructPtrType>
SharedMemoryViaRawFileDescriptorPtr SharedMemoryViaRawFileDescriptor::Clone() const {
  return New(
      mojo::Clone(file_descriptor_handle),
      mojo::Clone(shared_memory_size_in_bytes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SharedMemoryViaRawFileDescriptor>::value>::type*>
bool SharedMemoryViaRawFileDescriptor::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->file_descriptor_handle, other_struct.file_descriptor_handle))
    return false;
  if (!mojo::Equals(this->shared_memory_size_in_bytes, other_struct.shared_memory_size_in_bytes))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::VideoCaptureFormat::DataView,
                                         ::media::mojom::VideoCaptureFormatPtr> {
  static bool IsNull(const ::media::mojom::VideoCaptureFormatPtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoCaptureFormatPtr* output) { output->reset(); }

  static const decltype(::media::mojom::VideoCaptureFormat::frame_size)& frame_size(
      const ::media::mojom::VideoCaptureFormatPtr& input) {
    return input->frame_size;
  }

  static decltype(::media::mojom::VideoCaptureFormat::frame_rate) frame_rate(
      const ::media::mojom::VideoCaptureFormatPtr& input) {
    return input->frame_rate;
  }

  static decltype(::media::mojom::VideoCaptureFormat::pixel_format) pixel_format(
      const ::media::mojom::VideoCaptureFormatPtr& input) {
    return input->pixel_format;
  }

  static bool Read(::media::mojom::VideoCaptureFormat::DataView input, ::media::mojom::VideoCaptureFormatPtr* output);
};


template <>
struct  StructTraits<::media::mojom::VideoCaptureParams::DataView,
                                         ::media::mojom::VideoCaptureParamsPtr> {
  static bool IsNull(const ::media::mojom::VideoCaptureParamsPtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoCaptureParamsPtr* output) { output->reset(); }

  static const decltype(::media::mojom::VideoCaptureParams::requested_format)& requested_format(
      const ::media::mojom::VideoCaptureParamsPtr& input) {
    return input->requested_format;
  }

  static decltype(::media::mojom::VideoCaptureParams::buffer_type) buffer_type(
      const ::media::mojom::VideoCaptureParamsPtr& input) {
    return input->buffer_type;
  }

  static decltype(::media::mojom::VideoCaptureParams::resolution_change_policy) resolution_change_policy(
      const ::media::mojom::VideoCaptureParamsPtr& input) {
    return input->resolution_change_policy;
  }

  static decltype(::media::mojom::VideoCaptureParams::power_line_frequency) power_line_frequency(
      const ::media::mojom::VideoCaptureParamsPtr& input) {
    return input->power_line_frequency;
  }

  static decltype(::media::mojom::VideoCaptureParams::enable_face_detection) enable_face_detection(
      const ::media::mojom::VideoCaptureParamsPtr& input) {
    return input->enable_face_detection;
  }

  static bool Read(::media::mojom::VideoCaptureParams::DataView input, ::media::mojom::VideoCaptureParamsPtr* output);
};


template <>
struct  StructTraits<::media::mojom::PlaneStrides::DataView,
                                         ::media::mojom::PlaneStridesPtr> {
  static bool IsNull(const ::media::mojom::PlaneStridesPtr& input) { return !input; }
  static void SetToNull(::media::mojom::PlaneStridesPtr* output) { output->reset(); }

  static const decltype(::media::mojom::PlaneStrides::stride_by_plane)& stride_by_plane(
      const ::media::mojom::PlaneStridesPtr& input) {
    return input->stride_by_plane;
  }

  static bool Read(::media::mojom::PlaneStrides::DataView input, ::media::mojom::PlaneStridesPtr* output);
};


template <>
struct  StructTraits<::media::mojom::VideoFrameInfo::DataView,
                                         ::media::mojom::VideoFrameInfoPtr> {
  static bool IsNull(const ::media::mojom::VideoFrameInfoPtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoFrameInfoPtr* output) { output->reset(); }

  static const decltype(::media::mojom::VideoFrameInfo::timestamp)& timestamp(
      const ::media::mojom::VideoFrameInfoPtr& input) {
    return input->timestamp;
  }

  static const decltype(::media::mojom::VideoFrameInfo::metadata)& metadata(
      const ::media::mojom::VideoFrameInfoPtr& input) {
    return input->metadata;
  }

  static decltype(::media::mojom::VideoFrameInfo::pixel_format) pixel_format(
      const ::media::mojom::VideoFrameInfoPtr& input) {
    return input->pixel_format;
  }

  static const decltype(::media::mojom::VideoFrameInfo::coded_size)& coded_size(
      const ::media::mojom::VideoFrameInfoPtr& input) {
    return input->coded_size;
  }

  static const decltype(::media::mojom::VideoFrameInfo::visible_rect)& visible_rect(
      const ::media::mojom::VideoFrameInfoPtr& input) {
    return input->visible_rect;
  }

  static const decltype(::media::mojom::VideoFrameInfo::color_space)& color_space(
      const ::media::mojom::VideoFrameInfoPtr& input) {
    return input->color_space;
  }

  static const decltype(::media::mojom::VideoFrameInfo::strides)& strides(
      const ::media::mojom::VideoFrameInfoPtr& input) {
    return input->strides;
  }

  static bool Read(::media::mojom::VideoFrameInfo::DataView input, ::media::mojom::VideoFrameInfoPtr* output);
};


template <>
struct  StructTraits<::media::mojom::VideoCaptureDeviceDescriptor::DataView,
                                         ::media::mojom::VideoCaptureDeviceDescriptorPtr> {
  static bool IsNull(const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoCaptureDeviceDescriptorPtr* output) { output->reset(); }

  static const decltype(::media::mojom::VideoCaptureDeviceDescriptor::display_name)& display_name(
      const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) {
    return input->display_name;
  }

  static const decltype(::media::mojom::VideoCaptureDeviceDescriptor::device_id)& device_id(
      const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) {
    return input->device_id;
  }

  static const decltype(::media::mojom::VideoCaptureDeviceDescriptor::model_id)& model_id(
      const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) {
    return input->model_id;
  }

  static decltype(::media::mojom::VideoCaptureDeviceDescriptor::facing_mode) facing_mode(
      const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) {
    return input->facing_mode;
  }

  static decltype(::media::mojom::VideoCaptureDeviceDescriptor::capture_api) capture_api(
      const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) {
    return input->capture_api;
  }

  static decltype(::media::mojom::VideoCaptureDeviceDescriptor::transport_type) transport_type(
      const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) {
    return input->transport_type;
  }

  static bool Read(::media::mojom::VideoCaptureDeviceDescriptor::DataView input, ::media::mojom::VideoCaptureDeviceDescriptorPtr* output);
};


template <>
struct  StructTraits<::media::mojom::VideoCaptureDeviceInfo::DataView,
                                         ::media::mojom::VideoCaptureDeviceInfoPtr> {
  static bool IsNull(const ::media::mojom::VideoCaptureDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoCaptureDeviceInfoPtr* output) { output->reset(); }

  static const decltype(::media::mojom::VideoCaptureDeviceInfo::descriptor)& descriptor(
      const ::media::mojom::VideoCaptureDeviceInfoPtr& input) {
    return input->descriptor;
  }

  static const decltype(::media::mojom::VideoCaptureDeviceInfo::supported_formats)& supported_formats(
      const ::media::mojom::VideoCaptureDeviceInfoPtr& input) {
    return input->supported_formats;
  }

  static bool Read(::media::mojom::VideoCaptureDeviceInfo::DataView input, ::media::mojom::VideoCaptureDeviceInfoPtr* output);
};


template <>
struct  StructTraits<::media::mojom::MailboxBufferHandleSet::DataView,
                                         ::media::mojom::MailboxBufferHandleSetPtr> {
  static bool IsNull(const ::media::mojom::MailboxBufferHandleSetPtr& input) { return !input; }
  static void SetToNull(::media::mojom::MailboxBufferHandleSetPtr* output) { output->reset(); }

  static const decltype(::media::mojom::MailboxBufferHandleSet::mailbox_holder)& mailbox_holder(
      const ::media::mojom::MailboxBufferHandleSetPtr& input) {
    return input->mailbox_holder;
  }

  static bool Read(::media::mojom::MailboxBufferHandleSet::DataView input, ::media::mojom::MailboxBufferHandleSetPtr* output);
};


template <>
struct  StructTraits<::media::mojom::SharedMemoryViaRawFileDescriptor::DataView,
                                         ::media::mojom::SharedMemoryViaRawFileDescriptorPtr> {
  static bool IsNull(const ::media::mojom::SharedMemoryViaRawFileDescriptorPtr& input) { return !input; }
  static void SetToNull(::media::mojom::SharedMemoryViaRawFileDescriptorPtr* output) { output->reset(); }

  static  decltype(::media::mojom::SharedMemoryViaRawFileDescriptor::file_descriptor_handle)& file_descriptor_handle(
       ::media::mojom::SharedMemoryViaRawFileDescriptorPtr& input) {
    return input->file_descriptor_handle;
  }

  static decltype(::media::mojom::SharedMemoryViaRawFileDescriptor::shared_memory_size_in_bytes) shared_memory_size_in_bytes(
      const ::media::mojom::SharedMemoryViaRawFileDescriptorPtr& input) {
    return input->shared_memory_size_in_bytes;
  }

  static bool Read(::media::mojom::SharedMemoryViaRawFileDescriptor::DataView input, ::media::mojom::SharedMemoryViaRawFileDescriptorPtr* output);
};


template <>
struct  UnionTraits<::media::mojom::VideoBufferHandle::DataView,
                                        ::media::mojom::VideoBufferHandlePtr> {
  static bool IsNull(const ::media::mojom::VideoBufferHandlePtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoBufferHandlePtr* output) { output->reset(); }

  static ::media::mojom::VideoBufferHandle::Tag GetTag(const ::media::mojom::VideoBufferHandlePtr& input) {
    return input->which();
  }

  static  mojo::ScopedSharedBufferHandle& shared_buffer_handle( ::media::mojom::VideoBufferHandlePtr& input) {
    return input->get_shared_buffer_handle();
  }

  static  base::ReadOnlySharedMemoryRegion& read_only_shmem_region( ::media::mojom::VideoBufferHandlePtr& input) {
    return input->get_read_only_shmem_region();
  }

  static  ::media::mojom::SharedMemoryViaRawFileDescriptorPtr& shared_memory_via_raw_file_descriptor( ::media::mojom::VideoBufferHandlePtr& input) {
    return input->get_shared_memory_via_raw_file_descriptor();
  }

  static const ::media::mojom::MailboxBufferHandleSetPtr& mailbox_handles(const ::media::mojom::VideoBufferHandlePtr& input) {
    return input->get_mailbox_handles();
  }

  static bool Read(::media::mojom::VideoBufferHandle::DataView input, ::media::mojom::VideoBufferHandlePtr* output);
};

}  // namespace mojo

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_H_