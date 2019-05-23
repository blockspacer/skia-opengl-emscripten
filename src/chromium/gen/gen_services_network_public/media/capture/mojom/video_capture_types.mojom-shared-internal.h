// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared-internal.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojo/color_space.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace media {
namespace mojom {
namespace internal {
class VideoCaptureFormat_Data;
class VideoCaptureParams_Data;
class PlaneStrides_Data;
class VideoFrameInfo_Data;
class VideoCaptureDeviceDescriptor_Data;
class VideoCaptureDeviceInfo_Data;
class MailboxBufferHandleSet_Data;
class SharedMemoryViaRawFileDescriptor_Data;
class VideoBufferHandle_Data;

struct VideoCapturePixelFormat_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct ResolutionChangePolicy_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct PowerLineFrequency_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct VideoFacingMode_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct VideoCaptureApi_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct VideoCaptureTransportType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct VideoCaptureBufferType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct VideoCaptureError_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
      case 34:
      case 35:
      case 36:
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
      case 42:
      case 43:
      case 44:
      case 45:
      case 46:
      case 47:
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
      case 80:
      case 81:
      case 82:
      case 83:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 91:
      case 92:
      case 93:
      case 94:
      case 95:
      case 96:
      case 97:
      case 98:
      case 99:
      case 100:
      case 101:
      case 102:
      case 103:
      case 104:
      case 105:
      case 106:
      case 107:
      case 108:
      case 109:
      case 110:
      case 111:
      case 112:
      case 113:
      case 114:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct VideoCaptureFrameDropReason_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)


class  VideoBufferHandle_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  VideoBufferHandle_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~VideoBufferHandle_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoBufferHandle_Data));
      new (data()) VideoBufferHandle_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) VideoBufferHandle_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoBufferHandle_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoBufferHandle_Data>(index_);
    }
    VideoBufferHandle_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<VideoBufferHandle_Tag>(0);
    data.unknown = 0U;
  }

  enum class VideoBufferHandle_Tag : uint32_t {

    
    SHARED_BUFFER_HANDLE,
    
    READ_ONLY_SHMEM_REGION,
    
    SHARED_MEMORY_VIA_RAW_FILE_DESCRIPTOR,
    
    MAILBOX_HANDLES,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Handle_Data f_shared_buffer_handle;
    mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlySharedMemoryRegion_Data> f_read_only_shmem_region;
    mojo::internal::Pointer<internal::SharedMemoryViaRawFileDescriptor_Data> f_shared_memory_via_raw_file_descriptor;
    mojo::internal::Pointer<internal::MailboxBufferHandleSet_Data> f_mailbox_handles;
    uint64_t unknown;
  };

  uint32_t size;
  VideoBufferHandle_Tag tag;
  Union_ data;
};
static_assert(sizeof(VideoBufferHandle_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(VideoBufferHandle_Data)");
class  VideoCaptureFormat_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureFormat_Data));
      new (data()) VideoCaptureFormat_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureFormat_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureFormat_Data>(index_);
    }
    VideoCaptureFormat_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> frame_size;
  float frame_rate;
  int32_t pixel_format;

 private:
  VideoCaptureFormat_Data();
  ~VideoCaptureFormat_Data() = delete;
};
static_assert(sizeof(VideoCaptureFormat_Data) == 24,
              "Bad sizeof(VideoCaptureFormat_Data)");
// Used by VideoCaptureFormat::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoCaptureFormat_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoCaptureFormat_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoCaptureFormat_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoCaptureFormat_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoCaptureFormat_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoCaptureParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureParams_Data));
      new (data()) VideoCaptureParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureParams_Data>(index_);
    }
    VideoCaptureParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VideoCaptureFormat_Data> requested_format;
  int32_t buffer_type;
  int32_t resolution_change_policy;
  int32_t power_line_frequency;
  uint8_t enable_face_detection : 1;
  uint8_t padfinal_[3];

 private:
  VideoCaptureParams_Data();
  ~VideoCaptureParams_Data() = delete;
};
static_assert(sizeof(VideoCaptureParams_Data) == 32,
              "Bad sizeof(VideoCaptureParams_Data)");
// Used by VideoCaptureParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoCaptureParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoCaptureParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoCaptureParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoCaptureParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoCaptureParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PlaneStrides_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PlaneStrides_Data));
      new (data()) PlaneStrides_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PlaneStrides_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PlaneStrides_Data>(index_);
    }
    PlaneStrides_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint32_t>> stride_by_plane;

 private:
  PlaneStrides_Data();
  ~PlaneStrides_Data() = delete;
};
static_assert(sizeof(PlaneStrides_Data) == 16,
              "Bad sizeof(PlaneStrides_Data)");
// Used by PlaneStrides::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PlaneStrides_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PlaneStrides_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PlaneStrides_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PlaneStrides_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PlaneStrides_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoFrameInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoFrameInfo_Data));
      new (data()) VideoFrameInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoFrameInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoFrameInfo_Data>(index_);
    }
    VideoFrameInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timestamp;
  mojo::internal::Pointer<::mojo_base::mojom::internal::DictionaryValue_Data> metadata;
  int32_t pixel_format;
  uint8_t pad2_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> coded_size;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> visible_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::ColorSpace_Data> color_space;
  mojo::internal::Pointer<internal::PlaneStrides_Data> strides;

 private:
  VideoFrameInfo_Data();
  ~VideoFrameInfo_Data() = delete;
};
static_assert(sizeof(VideoFrameInfo_Data) == 64,
              "Bad sizeof(VideoFrameInfo_Data)");
// Used by VideoFrameInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoFrameInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoFrameInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoFrameInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoFrameInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoFrameInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoCaptureDeviceDescriptor_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureDeviceDescriptor_Data));
      new (data()) VideoCaptureDeviceDescriptor_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureDeviceDescriptor_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureDeviceDescriptor_Data>(index_);
    }
    VideoCaptureDeviceDescriptor_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> display_name;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;
  mojo::internal::Pointer<mojo::internal::String_Data> model_id;
  int32_t facing_mode;
  int32_t capture_api;
  int32_t transport_type;
  uint8_t padfinal_[4];

 private:
  VideoCaptureDeviceDescriptor_Data();
  ~VideoCaptureDeviceDescriptor_Data() = delete;
};
static_assert(sizeof(VideoCaptureDeviceDescriptor_Data) == 48,
              "Bad sizeof(VideoCaptureDeviceDescriptor_Data)");
// Used by VideoCaptureDeviceDescriptor::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoCaptureDeviceDescriptor_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoCaptureDeviceDescriptor_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoCaptureDeviceDescriptor_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoCaptureDeviceDescriptor_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoCaptureDeviceDescriptor_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoCaptureDeviceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoCaptureDeviceInfo_Data));
      new (data()) VideoCaptureDeviceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoCaptureDeviceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoCaptureDeviceInfo_Data>(index_);
    }
    VideoCaptureDeviceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VideoCaptureDeviceDescriptor_Data> descriptor;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::VideoCaptureFormat_Data>>> supported_formats;

 private:
  VideoCaptureDeviceInfo_Data();
  ~VideoCaptureDeviceInfo_Data() = delete;
};
static_assert(sizeof(VideoCaptureDeviceInfo_Data) == 24,
              "Bad sizeof(VideoCaptureDeviceInfo_Data)");
// Used by VideoCaptureDeviceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoCaptureDeviceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoCaptureDeviceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoCaptureDeviceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoCaptureDeviceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoCaptureDeviceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MailboxBufferHandleSet_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MailboxBufferHandleSet_Data));
      new (data()) MailboxBufferHandleSet_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MailboxBufferHandleSet_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MailboxBufferHandleSet_Data>(index_);
    }
    MailboxBufferHandleSet_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gpu::mojom::internal::MailboxHolder_Data>>> mailbox_holder;

 private:
  MailboxBufferHandleSet_Data();
  ~MailboxBufferHandleSet_Data() = delete;
};
static_assert(sizeof(MailboxBufferHandleSet_Data) == 16,
              "Bad sizeof(MailboxBufferHandleSet_Data)");
// Used by MailboxBufferHandleSet::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MailboxBufferHandleSet_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MailboxBufferHandleSet_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MailboxBufferHandleSet_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MailboxBufferHandleSet_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MailboxBufferHandleSet_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SharedMemoryViaRawFileDescriptor_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedMemoryViaRawFileDescriptor_Data));
      new (data()) SharedMemoryViaRawFileDescriptor_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedMemoryViaRawFileDescriptor_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedMemoryViaRawFileDescriptor_Data>(index_);
    }
    SharedMemoryViaRawFileDescriptor_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data file_descriptor_handle;
  uint32_t shared_memory_size_in_bytes;

 private:
  SharedMemoryViaRawFileDescriptor_Data();
  ~SharedMemoryViaRawFileDescriptor_Data() = delete;
};
static_assert(sizeof(SharedMemoryViaRawFileDescriptor_Data) == 16,
              "Bad sizeof(SharedMemoryViaRawFileDescriptor_Data)");
// Used by SharedMemoryViaRawFileDescriptor::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SharedMemoryViaRawFileDescriptor_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SharedMemoryViaRawFileDescriptor_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SharedMemoryViaRawFileDescriptor_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SharedMemoryViaRawFileDescriptor_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SharedMemoryViaRawFileDescriptor_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_SHARED_INTERNAL_H_