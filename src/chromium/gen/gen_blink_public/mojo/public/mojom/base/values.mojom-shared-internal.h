// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_VALUES_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_MOJOM_BASE_VALUES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mojo_base {
namespace mojom {
namespace internal {
class DictionaryValue_Data;
class ListValue_Data;
class Value_Data;

#pragma pack(push, 1)


class COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) Value_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  Value_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~Value_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Value_Data));
      new (data()) Value_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) Value_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Value_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Value_Data>(index_);
    }
    Value_Data* operator->() { return data(); }

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
    tag = static_cast<Value_Tag>(0);
    data.unknown = 0U;
  }

  enum class Value_Tag : uint32_t {

    
    NULL_VALUE,
    
    BOOL_VALUE,
    
    INT_VALUE,
    
    DOUBLE_VALUE,
    
    STRING_VALUE,
    
    BINARY_VALUE,
    
    DICTIONARY_VALUE,
    
    LIST_VALUE,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    uint8_t f_null_value;
    uint8_t f_bool_value : 1;
    int32_t f_int_value;
    double f_double_value;
    mojo::internal::Pointer<mojo::internal::String_Data> f_string_value;
    mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> f_binary_value;
    mojo::internal::Pointer<internal::DictionaryValue_Data> f_dictionary_value;
    mojo::internal::Pointer<internal::ListValue_Data> f_list_value;
    uint64_t unknown;
  };

  uint32_t size;
  Value_Tag tag;
  Union_ data;
};
static_assert(sizeof(Value_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(Value_Data)");
class COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) DictionaryValue_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DictionaryValue_Data));
      new (data()) DictionaryValue_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DictionaryValue_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DictionaryValue_Data>(index_);
    }
    DictionaryValue_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, internal::Value_Data>> storage;

 private:
  DictionaryValue_Data();
  ~DictionaryValue_Data() = delete;
};
static_assert(sizeof(DictionaryValue_Data) == 16,
              "Bad sizeof(DictionaryValue_Data)");
// Used by DictionaryValue::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DictionaryValue_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DictionaryValue_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DictionaryValue_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DictionaryValue_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DictionaryValue_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) ListValue_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ListValue_Data));
      new (data()) ListValue_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ListValue_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ListValue_Data>(index_);
    }
    ListValue_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<internal::Value_Data>> storage;

 private:
  ListValue_Data();
  ~ListValue_Data() = delete;
};
static_assert(sizeof(ListValue_Data) == 16,
              "Bad sizeof(ListValue_Data)");
// Used by ListValue::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ListValue_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ListValue_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ListValue_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ListValue_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ListValue_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_VALUES_MOJOM_SHARED_INTERNAL_H_