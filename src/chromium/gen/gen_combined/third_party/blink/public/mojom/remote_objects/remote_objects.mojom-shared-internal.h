// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class RemoteInvocationResult_Data;
class RemoteInvocationArgument_Data;
class RemoteInvocationResultValue_Data;

struct SingletonJavaScriptValue_Data {
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

struct RemoteInvocationError_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
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


class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) RemoteInvocationArgument_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  RemoteInvocationArgument_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~RemoteInvocationArgument_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemoteInvocationArgument_Data));
      new (data()) RemoteInvocationArgument_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) RemoteInvocationArgument_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemoteInvocationArgument_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemoteInvocationArgument_Data>(index_);
    }
    RemoteInvocationArgument_Data* operator->() { return data(); }

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
    tag = static_cast<RemoteInvocationArgument_Tag>(0);
    data.unknown = 0U;
  }

  enum class RemoteInvocationArgument_Tag : uint32_t {

    
    NUMBER_VALUE,
    
    BOOLEAN_VALUE,
    
    STRING_VALUE,
    
    SINGLETON_VALUE,
    
    ARRAY_VALUE,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    double f_number_value;
    uint8_t f_boolean_value : 1;
    mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> f_string_value;
    int32_t f_singleton_value;
    mojo::internal::Pointer<mojo::internal::Array_Data<internal::RemoteInvocationArgument_Data>> f_array_value;
    uint64_t unknown;
  };

  uint32_t size;
  RemoteInvocationArgument_Tag tag;
  Union_ data;
};
static_assert(sizeof(RemoteInvocationArgument_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(RemoteInvocationArgument_Data)");


class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) RemoteInvocationResultValue_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  RemoteInvocationResultValue_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~RemoteInvocationResultValue_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemoteInvocationResultValue_Data));
      new (data()) RemoteInvocationResultValue_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) RemoteInvocationResultValue_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemoteInvocationResultValue_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemoteInvocationResultValue_Data>(index_);
    }
    RemoteInvocationResultValue_Data* operator->() { return data(); }

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
    tag = static_cast<RemoteInvocationResultValue_Tag>(0);
    data.unknown = 0U;
  }

  enum class RemoteInvocationResultValue_Tag : uint32_t {

    
    NUMBER_VALUE,
    
    BOOLEAN_VALUE,
    
    STRING_VALUE,
    
    SINGLETON_VALUE,
    
    OBJECT_ID,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    double f_number_value;
    uint8_t f_boolean_value : 1;
    mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> f_string_value;
    int32_t f_singleton_value;
    int32_t f_object_id;
    uint64_t unknown;
  };

  uint32_t size;
  RemoteInvocationResultValue_Tag tag;
  Union_ data;
};
static_assert(sizeof(RemoteInvocationResultValue_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(RemoteInvocationResultValue_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) RemoteInvocationResult_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemoteInvocationResult_Data));
      new (data()) RemoteInvocationResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemoteInvocationResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemoteInvocationResult_Data>(index_);
    }
    RemoteInvocationResult_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  internal::RemoteInvocationResultValue_Data value;

 private:
  RemoteInvocationResult_Data();
  ~RemoteInvocationResult_Data() = delete;
};
static_assert(sizeof(RemoteInvocationResult_Data) == 32,
              "Bad sizeof(RemoteInvocationResult_Data)");
// Used by RemoteInvocationResult::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RemoteInvocationResult_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RemoteInvocationResult_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RemoteInvocationResult_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RemoteInvocationResult_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RemoteInvocationResult_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_SHARED_INTERNAL_H_