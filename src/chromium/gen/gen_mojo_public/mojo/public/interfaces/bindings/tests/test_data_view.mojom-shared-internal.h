// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_DATA_VIEW_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_DATA_VIEW_MOJOM_SHARED_INTERNAL_H_

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
namespace mojo {
namespace test {
namespace data_view {
namespace internal {
class NestedStruct_Data;
using TestNativeStruct_Data = mojo::native::internal::NativeStruct_Data;
class TestStruct_Data;
class TestUnion_Data;

struct TestEnum_Data {
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

#pragma pack(push, 1)


class  TestUnion_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  TestUnion_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~TestUnion_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestUnion_Data));
      new (data()) TestUnion_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) TestUnion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestUnion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestUnion_Data>(index_);
    }
    TestUnion_Data* operator->() { return data(); }

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
    tag = static_cast<TestUnion_Tag>(0);
    data.unknown = 0U;
  }

  enum class TestUnion_Tag : uint32_t {

    
    F_BOOL,
    
    F_INT32,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    uint8_t f_f_bool : 1;
    int32_t f_f_int32;
    uint64_t unknown;
  };

  uint32_t size;
  TestUnion_Tag tag;
  Union_ data;
};
static_assert(sizeof(TestUnion_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(TestUnion_Data)");
class  NestedStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NestedStruct_Data));
      new (data()) NestedStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NestedStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NestedStruct_Data>(index_);
    }
    NestedStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t f_int32;
  uint8_t padfinal_[4];

 private:
  NestedStruct_Data();
  ~NestedStruct_Data() = delete;
};
static_assert(sizeof(NestedStruct_Data) == 16,
              "Bad sizeof(NestedStruct_Data)");
// Used by NestedStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NestedStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NestedStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NestedStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NestedStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NestedStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TestStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestStruct_Data));
      new (data()) TestStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestStruct_Data>(index_);
    }
    TestStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> f_string;
  mojo::internal::Pointer<internal::NestedStruct_Data> f_struct;
  mojo::internal::Pointer<internal::TestNativeStruct_Data> f_native_struct;
  mojo::internal::Pointer<mojo::internal::Array_Data<bool>> f_bool_array;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> f_int32_array;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> f_enum_array;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Interface_Data>> f_interface_array;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>>>> f_nested_array;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::NestedStruct_Data>>> f_struct_array;
  mojo::internal::Pointer<mojo::internal::Array_Data<internal::TestUnion_Data>> f_union_array;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, int32_t>> f_map;

 private:
  TestStruct_Data();
  ~TestStruct_Data() = delete;
};
static_assert(sizeof(TestStruct_Data) == 96,
              "Bad sizeof(TestStruct_Data)");
// Used by TestStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TestStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TestStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TestStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TestStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TestStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace data_view
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_DATA_VIEW_MOJOM_SHARED_INTERNAL_H_