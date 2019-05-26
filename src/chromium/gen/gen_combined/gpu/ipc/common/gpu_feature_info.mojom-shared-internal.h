// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_SHARED_INTERNAL_H_
#define GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class WebglPreferences_Data;
class GpuFeatureInfo_Data;

struct GpuFeatureStatus_Data {
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

struct AntialiasingMode_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
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
class  WebglPreferences_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebglPreferences_Data));
      new (data()) WebglPreferences_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebglPreferences_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebglPreferences_Data>(index_);
    }
    WebglPreferences_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t anti_aliasing_mode;
  uint32_t msaa_sample_count;
  uint32_t max_active_webgl_contexts;
  uint32_t max_active_webgl_contexts_on_worker;

 private:
  WebglPreferences_Data();
  ~WebglPreferences_Data() = delete;
};
static_assert(sizeof(WebglPreferences_Data) == 24,
              "Bad sizeof(WebglPreferences_Data)");
// Used by WebglPreferences::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebglPreferences_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebglPreferences_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebglPreferences_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WebglPreferences_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebglPreferences_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  GpuFeatureInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuFeatureInfo_Data));
      new (data()) GpuFeatureInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuFeatureInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuFeatureInfo_Data>(index_);
    }
    GpuFeatureInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> status_values;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> enabled_gpu_driver_bug_workarounds;
  mojo::internal::Pointer<mojo::internal::String_Data> disabled_extensions;
  mojo::internal::Pointer<mojo::internal::String_Data> disabled_webgl_extensions;
  mojo::internal::Pointer<internal::WebglPreferences_Data> webgl_preferences;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint32_t>> applied_gpu_blacklist_entries;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint32_t>> applied_gpu_driver_bug_list_entries;

 private:
  GpuFeatureInfo_Data();
  ~GpuFeatureInfo_Data() = delete;
};
static_assert(sizeof(GpuFeatureInfo_Data) == 64,
              "Bad sizeof(GpuFeatureInfo_Data)");
// Used by GpuFeatureInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GpuFeatureInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GpuFeatureInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GpuFeatureInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GpuFeatureInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GpuFeatureInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_SHARED_INTERNAL_H_