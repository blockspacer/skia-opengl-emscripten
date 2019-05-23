// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_SHARED_INTERNAL_H_

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
namespace network {
namespace mojom {
namespace internal {
class CorsOriginPattern_Data;
class CorsOriginAccessPatterns_Data;

struct CorsOriginAccessMatchMode_Data {
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

struct CorsOriginAccessMatchPriority_Data {
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

#pragma pack(push, 1)
class  CorsOriginPattern_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CorsOriginPattern_Data));
      new (data()) CorsOriginPattern_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CorsOriginPattern_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CorsOriginPattern_Data>(index_);
    }
    CorsOriginPattern_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> protocol;
  mojo::internal::Pointer<mojo::internal::String_Data> domain;
  int32_t mode;
  int32_t priority;

 private:
  CorsOriginPattern_Data();
  ~CorsOriginPattern_Data() = delete;
};
static_assert(sizeof(CorsOriginPattern_Data) == 32,
              "Bad sizeof(CorsOriginPattern_Data)");
// Used by CorsOriginPattern::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CorsOriginPattern_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CorsOriginPattern_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CorsOriginPattern_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CorsOriginPattern_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CorsOriginPattern_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CorsOriginAccessPatterns_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CorsOriginAccessPatterns_Data));
      new (data()) CorsOriginAccessPatterns_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CorsOriginAccessPatterns_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CorsOriginAccessPatterns_Data>(index_);
    }
    CorsOriginAccessPatterns_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> source_origin;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CorsOriginPattern_Data>>> allow_patterns;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CorsOriginPattern_Data>>> block_patterns;

 private:
  CorsOriginAccessPatterns_Data();
  ~CorsOriginAccessPatterns_Data() = delete;
};
static_assert(sizeof(CorsOriginAccessPatterns_Data) == 32,
              "Bad sizeof(CorsOriginAccessPatterns_Data)");
// Used by CorsOriginAccessPatterns::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CorsOriginAccessPatterns_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CorsOriginAccessPatterns_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CorsOriginAccessPatterns_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CorsOriginAccessPatterns_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CorsOriginAccessPatterns_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_SHARED_INTERNAL_H_