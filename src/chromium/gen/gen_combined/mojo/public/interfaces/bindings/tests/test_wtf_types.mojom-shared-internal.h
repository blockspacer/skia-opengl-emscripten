// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_SHARED_INTERNAL_H_

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
namespace internal {
class TestWTFCodeGeneration_Data;
class TestWTFStruct_Data;
class TestWTFStructWrapper_Data;
class TestWTFCodeGeneration2_Data;

struct TopLevelEnum_Data {
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

struct TestWTFStruct_NestedEnum_Data {
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

struct TestWTF_NestedEnum_Data {
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


class  TestWTFCodeGeneration2_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  TestWTFCodeGeneration2_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~TestWTFCodeGeneration2_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestWTFCodeGeneration2_Data));
      new (data()) TestWTFCodeGeneration2_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) TestWTFCodeGeneration2_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestWTFCodeGeneration2_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestWTFCodeGeneration2_Data>(index_);
    }
    TestWTFCodeGeneration2_Data* operator->() { return data(); }

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
    tag = static_cast<TestWTFCodeGeneration2_Tag>(0);
    data.unknown = 0U;
  }

  enum class TestWTFCodeGeneration2_Tag : uint32_t {

    
    STR,
    
    STRS,
    
    STR_MAP,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<mojo::internal::String_Data> f_str;
    mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> f_strs;
    mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> f_str_map;
    uint64_t unknown;
  };

  uint32_t size;
  TestWTFCodeGeneration2_Tag tag;
  Union_ data;
};
static_assert(sizeof(TestWTFCodeGeneration2_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(TestWTFCodeGeneration2_Data)");
class  TestWTFCodeGeneration_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestWTFCodeGeneration_Data));
      new (data()) TestWTFCodeGeneration_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestWTFCodeGeneration_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestWTFCodeGeneration_Data>(index_);
    }
    TestWTFCodeGeneration_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> str;
  mojo::internal::Pointer<mojo::internal::String_Data> nullable_str;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> strs;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> nullable_strs;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>>>> arrays;
  mojo::internal::Pointer<mojo::internal::Array_Data<bool>> bools;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Handle_Data>> handles;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> str_map;
  mojo::internal::Pointer<mojo::internal::Map_Data<int32_t, mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>>>> array_map;
  mojo::internal::Pointer<mojo::internal::Map_Data<int32_t, mojo::internal::Handle_Data>> handle_map;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>>>> str_maps;

 private:
  TestWTFCodeGeneration_Data();
  ~TestWTFCodeGeneration_Data() = delete;
};
static_assert(sizeof(TestWTFCodeGeneration_Data) == 96,
              "Bad sizeof(TestWTFCodeGeneration_Data)");
// Used by TestWTFCodeGeneration::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TestWTFCodeGeneration_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TestWTFCodeGeneration_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TestWTFCodeGeneration_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TestWTFCodeGeneration_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TestWTFCodeGeneration_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TestWTFStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestWTFStruct_Data));
      new (data()) TestWTFStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestWTFStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestWTFStruct_Data>(index_);
    }
    TestWTFStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> str;
  int32_t integer;
  uint8_t padfinal_[4];

 private:
  TestWTFStruct_Data();
  ~TestWTFStruct_Data() = delete;
};
static_assert(sizeof(TestWTFStruct_Data) == 24,
              "Bad sizeof(TestWTFStruct_Data)");
// Used by TestWTFStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TestWTFStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TestWTFStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TestWTFStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TestWTFStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TestWTFStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TestWTFStructWrapper_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestWTFStructWrapper_Data));
      new (data()) TestWTFStructWrapper_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestWTFStructWrapper_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestWTFStructWrapper_Data>(index_);
    }
    TestWTFStructWrapper_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::TestWTFStruct_Data> nested_struct;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::TestWTFStruct_Data>>> array_struct;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<internal::TestWTFStruct_Data>, mojo::internal::Pointer<internal::TestWTFStruct_Data>>> map_struct;

 private:
  TestWTFStructWrapper_Data();
  ~TestWTFStructWrapper_Data() = delete;
};
static_assert(sizeof(TestWTFStructWrapper_Data) == 32,
              "Bad sizeof(TestWTFStructWrapper_Data)");
// Used by TestWTFStructWrapper::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TestWTFStructWrapper_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TestWTFStructWrapper_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TestWTFStructWrapper_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TestWTFStructWrapper_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TestWTFStructWrapper_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_SHARED_INTERNAL_H_