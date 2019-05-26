// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_INFO_MOJOM_SHARED_INTERNAL_H_
#define GPU_IPC_COMMON_GPU_INFO_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "gpu/ipc/common/dx_diag_node.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace gpu {
namespace mojom {
namespace internal {
class GpuDevice_Data;
class VideoDecodeAcceleratorSupportedProfile_Data;
class VideoDecodeAcceleratorCapabilities_Data;
class VideoEncodeAcceleratorSupportedProfile_Data;
class ImageDecodeAcceleratorSupportedProfile_Data;
class GpuInfo_Data;

struct VideoCodecProfile_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case -1:
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

struct ImageDecodeAcceleratorType_Data {
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

struct ImageDecodeAcceleratorSubsampling_Data {
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

#pragma pack(push, 1)
class  GpuDevice_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuDevice_Data));
      new (data()) GpuDevice_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuDevice_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuDevice_Data>(index_);
    }
    GpuDevice_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t vendor_id;
  uint32_t device_id;
  uint8_t active : 1;
  uint8_t pad2_[3];
  int32_t cuda_compute_capability_major;
  mojo::internal::Pointer<mojo::internal::String_Data> vendor_string;
  mojo::internal::Pointer<mojo::internal::String_Data> device_string;
  mojo::internal::Pointer<mojo::internal::String_Data> driver_vendor;
  mojo::internal::Pointer<mojo::internal::String_Data> driver_version;
  mojo::internal::Pointer<mojo::internal::String_Data> driver_date;

 private:
  GpuDevice_Data();
  ~GpuDevice_Data() = delete;
};
static_assert(sizeof(GpuDevice_Data) == 64,
              "Bad sizeof(GpuDevice_Data)");
// Used by GpuDevice::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GpuDevice_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GpuDevice_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GpuDevice_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GpuDevice_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GpuDevice_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoDecodeAcceleratorSupportedProfile_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeAcceleratorSupportedProfile_Data));
      new (data()) VideoDecodeAcceleratorSupportedProfile_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeAcceleratorSupportedProfile_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeAcceleratorSupportedProfile_Data>(index_);
    }
    VideoDecodeAcceleratorSupportedProfile_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t profile;
  uint8_t encrypted_only : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> max_resolution;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> min_resolution;

 private:
  VideoDecodeAcceleratorSupportedProfile_Data();
  ~VideoDecodeAcceleratorSupportedProfile_Data() = delete;
};
static_assert(sizeof(VideoDecodeAcceleratorSupportedProfile_Data) == 32,
              "Bad sizeof(VideoDecodeAcceleratorSupportedProfile_Data)");
// Used by VideoDecodeAcceleratorSupportedProfile::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoDecodeAcceleratorSupportedProfile_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoDecodeAcceleratorSupportedProfile_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoDecodeAcceleratorSupportedProfile_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoDecodeAcceleratorSupportedProfile_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoDecodeAcceleratorSupportedProfile_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoDecodeAcceleratorCapabilities_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeAcceleratorCapabilities_Data));
      new (data()) VideoDecodeAcceleratorCapabilities_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeAcceleratorCapabilities_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeAcceleratorCapabilities_Data>(index_);
    }
    VideoDecodeAcceleratorCapabilities_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::VideoDecodeAcceleratorSupportedProfile_Data>>> supported_profiles;
  uint32_t flags;
  uint8_t padfinal_[4];

 private:
  VideoDecodeAcceleratorCapabilities_Data();
  ~VideoDecodeAcceleratorCapabilities_Data() = delete;
};
static_assert(sizeof(VideoDecodeAcceleratorCapabilities_Data) == 24,
              "Bad sizeof(VideoDecodeAcceleratorCapabilities_Data)");
// Used by VideoDecodeAcceleratorCapabilities::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoDecodeAcceleratorCapabilities_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoDecodeAcceleratorCapabilities_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoDecodeAcceleratorCapabilities_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoDecodeAcceleratorCapabilities_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoDecodeAcceleratorCapabilities_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoEncodeAcceleratorSupportedProfile_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoEncodeAcceleratorSupportedProfile_Data));
      new (data()) VideoEncodeAcceleratorSupportedProfile_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoEncodeAcceleratorSupportedProfile_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoEncodeAcceleratorSupportedProfile_Data>(index_);
    }
    VideoEncodeAcceleratorSupportedProfile_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t profile;
  uint32_t max_framerate_numerator;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> max_resolution;
  uint32_t max_framerate_denominator;
  uint8_t padfinal_[4];

 private:
  VideoEncodeAcceleratorSupportedProfile_Data();
  ~VideoEncodeAcceleratorSupportedProfile_Data() = delete;
};
static_assert(sizeof(VideoEncodeAcceleratorSupportedProfile_Data) == 32,
              "Bad sizeof(VideoEncodeAcceleratorSupportedProfile_Data)");
// Used by VideoEncodeAcceleratorSupportedProfile::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoEncodeAcceleratorSupportedProfile_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoEncodeAcceleratorSupportedProfile_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoEncodeAcceleratorSupportedProfile_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoEncodeAcceleratorSupportedProfile_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoEncodeAcceleratorSupportedProfile_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ImageDecodeAcceleratorSupportedProfile_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageDecodeAcceleratorSupportedProfile_Data));
      new (data()) ImageDecodeAcceleratorSupportedProfile_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageDecodeAcceleratorSupportedProfile_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageDecodeAcceleratorSupportedProfile_Data>(index_);
    }
    ImageDecodeAcceleratorSupportedProfile_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t image_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> min_encoded_dimensions;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> max_encoded_dimensions;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> subsamplings;

 private:
  ImageDecodeAcceleratorSupportedProfile_Data();
  ~ImageDecodeAcceleratorSupportedProfile_Data() = delete;
};
static_assert(sizeof(ImageDecodeAcceleratorSupportedProfile_Data) == 40,
              "Bad sizeof(ImageDecodeAcceleratorSupportedProfile_Data)");
// Used by ImageDecodeAcceleratorSupportedProfile::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ImageDecodeAcceleratorSupportedProfile_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ImageDecodeAcceleratorSupportedProfile_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ImageDecodeAcceleratorSupportedProfile_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ImageDecodeAcceleratorSupportedProfile_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ImageDecodeAcceleratorSupportedProfile_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  GpuInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuInfo_Data));
      new (data()) GpuInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuInfo_Data>(index_);
    }
    GpuInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> initialization_time;
  uint8_t optimus : 1;
  uint8_t amd_switchable : 1;
  uint8_t software_rendering : 1;
  uint8_t sandboxed : 1;
  uint8_t in_process_gpu : 1;
  uint8_t passthrough_cmd_decoder : 1;
  uint8_t can_support_threaded_texture_mailbox : 1;
  uint8_t jpeg_decode_accelerator_supported : 1;
  uint8_t oop_rasterization_supported : 1;
  uint8_t pad9_[2];
  uint32_t gl_reset_notification_strategy;
  mojo::internal::Pointer<internal::GpuDevice_Data> gpu;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::GpuDevice_Data>>> secondary_gpus;
  mojo::internal::Pointer<mojo::internal::String_Data> pixel_shader_version;
  mojo::internal::Pointer<mojo::internal::String_Data> vertex_shader_version;
  mojo::internal::Pointer<mojo::internal::String_Data> max_msaa_samples;
  mojo::internal::Pointer<mojo::internal::String_Data> machine_model_name;
  mojo::internal::Pointer<mojo::internal::String_Data> machine_model_version;
  mojo::internal::Pointer<mojo::internal::String_Data> gl_version;
  mojo::internal::Pointer<mojo::internal::String_Data> gl_vendor;
  mojo::internal::Pointer<mojo::internal::String_Data> gl_renderer;
  mojo::internal::Pointer<mojo::internal::String_Data> gl_extensions;
  mojo::internal::Pointer<mojo::internal::String_Data> gl_ws_vendor;
  mojo::internal::Pointer<mojo::internal::String_Data> gl_ws_version;
  mojo::internal::Pointer<mojo::internal::String_Data> gl_ws_extensions;
  mojo::internal::Pointer<mojo::internal::String_Data> direct_rendering_version;
  mojo::internal::Pointer<internal::VideoDecodeAcceleratorCapabilities_Data> video_decode_accelerator_capabilities;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::VideoEncodeAcceleratorSupportedProfile_Data>>> video_encode_accelerator_supported_profiles;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ImageDecodeAcceleratorSupportedProfile_Data>>> image_decode_accelerator_supported_profiles;
  uint64_t system_visual;
  uint64_t rgba_visual;

 private:
  GpuInfo_Data();
  ~GpuInfo_Data() = delete;
};
static_assert(sizeof(GpuInfo_Data) == 184,
              "Bad sizeof(GpuInfo_Data)");
// Used by GpuInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GpuInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GpuInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GpuInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GpuInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GpuInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_GPU_INFO_MOJOM_SHARED_INTERNAL_H_