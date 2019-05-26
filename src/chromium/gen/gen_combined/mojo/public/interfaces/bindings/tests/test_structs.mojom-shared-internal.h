// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/interfaces/bindings/tests/rect.mojom-shared-internal.h"
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
class NamedRegion_Data;
class RectPair_Data;
class EmptyStruct_Data;
using UnmappedNativeStruct_Data = mojo::native::internal::NativeStruct_Data;
class NoDefaultFieldValues_Data;
class DefaultFieldValues_Data;
class ScopedConstants_Data;
class MapKeyTypes_Data;
class MapValueTypes_Data;
class ArrayValueTypes_Data;
class FloatNumberValues_Data;
class IntegerNumberValues_Data;
class UnsignedNumberValues_Data;
class BitArrayValues_Data;
class MultiVersionStruct_Data;
class MultiVersionStructV0_Data;
class MultiVersionStructV1_Data;
class MultiVersionStructV3_Data;
class MultiVersionStructV5_Data;
class MultiVersionStructV7_Data;
class ReorderedStruct_Data;
class ContainsInterface_Data;
class ContainsOther_Data;
class ContainsInterfaceRequest_Data;
class SingleBoolStruct_Data;
class ContainsHashable_Data;
class SimpleNestedStruct_Data;

struct ScopedConstants_EType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
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

#pragma pack(push, 1)
class  NamedRegion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NamedRegion_Data));
      new (data()) NamedRegion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NamedRegion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NamedRegion_Data>(index_);
    }
    NamedRegion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo::test::internal::Rect_Data>>> rects;

 private:
  NamedRegion_Data();
  ~NamedRegion_Data() = delete;
};
static_assert(sizeof(NamedRegion_Data) == 24,
              "Bad sizeof(NamedRegion_Data)");
// Used by NamedRegion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NamedRegion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NamedRegion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NamedRegion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NamedRegion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NamedRegion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  RectPair_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RectPair_Data));
      new (data()) RectPair_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RectPair_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RectPair_Data>(index_);
    }
    RectPair_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo::test::internal::Rect_Data> first;
  mojo::internal::Pointer<::mojo::test::internal::Rect_Data> second;

 private:
  RectPair_Data();
  ~RectPair_Data() = delete;
};
static_assert(sizeof(RectPair_Data) == 24,
              "Bad sizeof(RectPair_Data)");
// Used by RectPair::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RectPair_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RectPair_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RectPair_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RectPair_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RectPair_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  EmptyStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmptyStruct_Data));
      new (data()) EmptyStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmptyStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmptyStruct_Data>(index_);
    }
    EmptyStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  EmptyStruct_Data();
  ~EmptyStruct_Data() = delete;
};
static_assert(sizeof(EmptyStruct_Data) == 8,
              "Bad sizeof(EmptyStruct_Data)");
// Used by EmptyStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EmptyStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EmptyStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EmptyStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    EmptyStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EmptyStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NoDefaultFieldValues_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NoDefaultFieldValues_Data));
      new (data()) NoDefaultFieldValues_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NoDefaultFieldValues_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NoDefaultFieldValues_Data>(index_);
    }
    NoDefaultFieldValues_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t f0 : 1;
  int8_t f1;
  uint8_t f2;
  uint8_t pad2_[1];
  int16_t f3;
  uint16_t f4;
  int32_t f5;
  uint32_t f6;
  int64_t f7;
  uint64_t f8;
  float f9;
  mojo::internal::Handle_Data f13;
  double f10;
  mojo::internal::Pointer<mojo::internal::String_Data> f11;
  mojo::internal::Pointer<mojo::internal::String_Data> f12;
  mojo::internal::Handle_Data f14;
  mojo::internal::Handle_Data f15;
  mojo::internal::Handle_Data f16;
  mojo::internal::Handle_Data f17;
  mojo::internal::Handle_Data f18;
  mojo::internal::Handle_Data f19;
  mojo::internal::Handle_Data f20;
  mojo::internal::Handle_Data f21;
  mojo::internal::Handle_Data f22;
  uint8_t pad22_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> f23;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> f24;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> f25;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> f26;
  mojo::internal::Pointer<internal::EmptyStruct_Data> f27;
  mojo::internal::Pointer<internal::EmptyStruct_Data> f28;

 private:
  NoDefaultFieldValues_Data();
  ~NoDefaultFieldValues_Data() = delete;
};
static_assert(sizeof(NoDefaultFieldValues_Data) == 160,
              "Bad sizeof(NoDefaultFieldValues_Data)");
// Used by NoDefaultFieldValues::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NoDefaultFieldValues_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NoDefaultFieldValues_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NoDefaultFieldValues_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NoDefaultFieldValues_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NoDefaultFieldValues_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DefaultFieldValues_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DefaultFieldValues_Data));
      new (data()) DefaultFieldValues_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DefaultFieldValues_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DefaultFieldValues_Data>(index_);
    }
    DefaultFieldValues_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t f0 : 1;
  int8_t f1;
  uint8_t f2;
  uint8_t pad2_[1];
  int16_t f3;
  uint16_t f4;
  int32_t f5;
  uint32_t f6;
  int64_t f7;
  uint64_t f8;
  float f9;
  float f10;
  double f11;
  double f12;
  mojo::internal::Pointer<mojo::internal::String_Data> f13;
  mojo::internal::Pointer<mojo::internal::String_Data> f14;
  mojo::internal::Pointer<::mojo::test::internal::Rect_Data> f15;
  mojo::internal::Pointer<::mojo::test::internal::Rect_Data> f16;

 private:
  DefaultFieldValues_Data();
  ~DefaultFieldValues_Data() = delete;
};
static_assert(sizeof(DefaultFieldValues_Data) == 96,
              "Bad sizeof(DefaultFieldValues_Data)");
// Used by DefaultFieldValues::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DefaultFieldValues_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DefaultFieldValues_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DefaultFieldValues_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DefaultFieldValues_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DefaultFieldValues_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ScopedConstants_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScopedConstants_Data));
      new (data()) ScopedConstants_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScopedConstants_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScopedConstants_Data>(index_);
    }
    ScopedConstants_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t f0;
  int32_t f1;
  int32_t f2;
  int32_t f3;
  int32_t f4;
  int32_t f5;
  int32_t f6;
  uint8_t padfinal_[4];

 private:
  ScopedConstants_Data();
  ~ScopedConstants_Data() = delete;
};
static_assert(sizeof(ScopedConstants_Data) == 40,
              "Bad sizeof(ScopedConstants_Data)");
// Used by ScopedConstants::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ScopedConstants_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ScopedConstants_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ScopedConstants_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ScopedConstants_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ScopedConstants_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MapKeyTypes_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MapKeyTypes_Data));
      new (data()) MapKeyTypes_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MapKeyTypes_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MapKeyTypes_Data>(index_);
    }
    MapKeyTypes_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<int8_t, int8_t>> f1;
  mojo::internal::Pointer<mojo::internal::Map_Data<uint8_t, uint8_t>> f2;
  mojo::internal::Pointer<mojo::internal::Map_Data<int16_t, int16_t>> f3;
  mojo::internal::Pointer<mojo::internal::Map_Data<uint16_t, uint16_t>> f4;
  mojo::internal::Pointer<mojo::internal::Map_Data<int32_t, int32_t>> f5;
  mojo::internal::Pointer<mojo::internal::Map_Data<uint32_t, uint32_t>> f6;
  mojo::internal::Pointer<mojo::internal::Map_Data<int64_t, int64_t>> f7;
  mojo::internal::Pointer<mojo::internal::Map_Data<uint64_t, uint64_t>> f8;
  mojo::internal::Pointer<mojo::internal::Map_Data<float, float>> f9;
  mojo::internal::Pointer<mojo::internal::Map_Data<double, double>> f10;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> f11;

 private:
  MapKeyTypes_Data();
  ~MapKeyTypes_Data() = delete;
};
static_assert(sizeof(MapKeyTypes_Data) == 96,
              "Bad sizeof(MapKeyTypes_Data)");
// Used by MapKeyTypes::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MapKeyTypes_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MapKeyTypes_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MapKeyTypes_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MapKeyTypes_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MapKeyTypes_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MapValueTypes_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MapValueTypes_Data));
      new (data()) MapValueTypes_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MapValueTypes_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MapValueTypes_Data>(index_);
    }
    MapValueTypes_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> f0;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> f1;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> f2;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> f3;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>>>> f4;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>>>> f5;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<::mojo::test::internal::Rect_Data>>> f6;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>>>> f7;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>>>>>> f8;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Handle_Data>> f9;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Handle_Data>>>> f10;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Handle_Data>>>> f11;

 private:
  MapValueTypes_Data();
  ~MapValueTypes_Data() = delete;
};
static_assert(sizeof(MapValueTypes_Data) == 104,
              "Bad sizeof(MapValueTypes_Data)");
// Used by MapValueTypes::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MapValueTypes_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MapValueTypes_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MapValueTypes_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MapValueTypes_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MapValueTypes_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ArrayValueTypes_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ArrayValueTypes_Data));
      new (data()) ArrayValueTypes_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ArrayValueTypes_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ArrayValueTypes_Data>(index_);
    }
    ArrayValueTypes_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int8_t>> f0;
  mojo::internal::Pointer<mojo::internal::Array_Data<int16_t>> f1;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> f2;
  mojo::internal::Pointer<mojo::internal::Array_Data<int64_t>> f3;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> f4;
  mojo::internal::Pointer<mojo::internal::Array_Data<double>> f5;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Interface_Data>> f6;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Handle_Data>> f7;

 private:
  ArrayValueTypes_Data();
  ~ArrayValueTypes_Data() = delete;
};
static_assert(sizeof(ArrayValueTypes_Data) == 72,
              "Bad sizeof(ArrayValueTypes_Data)");
// Used by ArrayValueTypes::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ArrayValueTypes_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ArrayValueTypes_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ArrayValueTypes_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ArrayValueTypes_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ArrayValueTypes_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  FloatNumberValues_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FloatNumberValues_Data));
      new (data()) FloatNumberValues_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FloatNumberValues_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FloatNumberValues_Data>(index_);
    }
    FloatNumberValues_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double f0;
  double f1;
  double f2;
  float f3;
  float f4;
  float f5;
  float f6;
  double f7;
  double f8;
  double f9;

 private:
  FloatNumberValues_Data();
  ~FloatNumberValues_Data() = delete;
};
static_assert(sizeof(FloatNumberValues_Data) == 72,
              "Bad sizeof(FloatNumberValues_Data)");
// Used by FloatNumberValues::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FloatNumberValues_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FloatNumberValues_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FloatNumberValues_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FloatNumberValues_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FloatNumberValues_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  IntegerNumberValues_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IntegerNumberValues_Data));
      new (data()) IntegerNumberValues_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IntegerNumberValues_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IntegerNumberValues_Data>(index_);
    }
    IntegerNumberValues_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int8_t f0;
  int8_t f1;
  int8_t f2;
  int8_t f3;
  int8_t f4;
  uint8_t pad4_[1];
  int16_t f5;
  int16_t f6;
  int16_t f7;
  int16_t f8;
  int16_t f9;
  int32_t f10;
  int32_t f11;
  int32_t f12;
  int32_t f13;
  int32_t f14;
  uint8_t pad14_[4];
  int64_t f15;
  int64_t f16;
  int64_t f17;
  int64_t f18;
  int64_t f19;

 private:
  IntegerNumberValues_Data();
  ~IntegerNumberValues_Data() = delete;
};
static_assert(sizeof(IntegerNumberValues_Data) == 88,
              "Bad sizeof(IntegerNumberValues_Data)");
// Used by IntegerNumberValues::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IntegerNumberValues_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IntegerNumberValues_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IntegerNumberValues_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IntegerNumberValues_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IntegerNumberValues_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  UnsignedNumberValues_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UnsignedNumberValues_Data));
      new (data()) UnsignedNumberValues_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UnsignedNumberValues_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UnsignedNumberValues_Data>(index_);
    }
    UnsignedNumberValues_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t f0;
  uint8_t f1;
  uint8_t f2;
  uint8_t pad2_[1];
  uint16_t f3;
  uint16_t f4;
  uint16_t f5;
  uint8_t pad5_[2];
  uint32_t f6;
  uint32_t f7;
  uint32_t f8;
  uint64_t f9;
  uint64_t f10;
  uint64_t f11;

 private:
  UnsignedNumberValues_Data();
  ~UnsignedNumberValues_Data() = delete;
};
static_assert(sizeof(UnsignedNumberValues_Data) == 56,
              "Bad sizeof(UnsignedNumberValues_Data)");
// Used by UnsignedNumberValues::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UnsignedNumberValues_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UnsignedNumberValues_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UnsignedNumberValues_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UnsignedNumberValues_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UnsignedNumberValues_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  BitArrayValues_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BitArrayValues_Data));
      new (data()) BitArrayValues_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BitArrayValues_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BitArrayValues_Data>(index_);
    }
    BitArrayValues_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<bool>> f0;
  mojo::internal::Pointer<mojo::internal::Array_Data<bool>> f1;
  mojo::internal::Pointer<mojo::internal::Array_Data<bool>> f2;
  mojo::internal::Pointer<mojo::internal::Array_Data<bool>> f3;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<bool>>>> f4;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<bool>>>> f5;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<bool>>>> f6;

 private:
  BitArrayValues_Data();
  ~BitArrayValues_Data() = delete;
};
static_assert(sizeof(BitArrayValues_Data) == 64,
              "Bad sizeof(BitArrayValues_Data)");
// Used by BitArrayValues::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BitArrayValues_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BitArrayValues_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BitArrayValues_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BitArrayValues_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BitArrayValues_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MultiVersionStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MultiVersionStruct_Data));
      new (data()) MultiVersionStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MultiVersionStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MultiVersionStruct_Data>(index_);
    }
    MultiVersionStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t f_int32;
  mojo::internal::Handle_Data f_message_pipe;
  mojo::internal::Pointer<::mojo::test::internal::Rect_Data> f_rect;
  mojo::internal::Pointer<mojo::internal::String_Data> f_string;
  mojo::internal::Pointer<mojo::internal::Array_Data<int8_t>> f_array;
  uint8_t f_bool : 1;
  uint8_t pad5_[1];
  int16_t f_int16;
  uint8_t padfinal_[4];

 private:
  MultiVersionStruct_Data();
  ~MultiVersionStruct_Data() = delete;
};
static_assert(sizeof(MultiVersionStruct_Data) == 48,
              "Bad sizeof(MultiVersionStruct_Data)");
// Used by MultiVersionStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MultiVersionStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MultiVersionStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MultiVersionStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MultiVersionStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MultiVersionStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MultiVersionStructV0_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MultiVersionStructV0_Data));
      new (data()) MultiVersionStructV0_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MultiVersionStructV0_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MultiVersionStructV0_Data>(index_);
    }
    MultiVersionStructV0_Data* operator->() { return data(); }

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
  MultiVersionStructV0_Data();
  ~MultiVersionStructV0_Data() = delete;
};
static_assert(sizeof(MultiVersionStructV0_Data) == 16,
              "Bad sizeof(MultiVersionStructV0_Data)");
// Used by MultiVersionStructV0::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MultiVersionStructV0_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MultiVersionStructV0_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MultiVersionStructV0_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MultiVersionStructV0_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MultiVersionStructV0_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MultiVersionStructV1_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MultiVersionStructV1_Data));
      new (data()) MultiVersionStructV1_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MultiVersionStructV1_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MultiVersionStructV1_Data>(index_);
    }
    MultiVersionStructV1_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t f_int32;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo::test::internal::Rect_Data> f_rect;

 private:
  MultiVersionStructV1_Data();
  ~MultiVersionStructV1_Data() = delete;
};
static_assert(sizeof(MultiVersionStructV1_Data) == 24,
              "Bad sizeof(MultiVersionStructV1_Data)");
// Used by MultiVersionStructV1::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MultiVersionStructV1_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MultiVersionStructV1_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MultiVersionStructV1_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MultiVersionStructV1_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MultiVersionStructV1_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MultiVersionStructV3_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MultiVersionStructV3_Data));
      new (data()) MultiVersionStructV3_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MultiVersionStructV3_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MultiVersionStructV3_Data>(index_);
    }
    MultiVersionStructV3_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t f_int32;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo::test::internal::Rect_Data> f_rect;
  mojo::internal::Pointer<mojo::internal::String_Data> f_string;

 private:
  MultiVersionStructV3_Data();
  ~MultiVersionStructV3_Data() = delete;
};
static_assert(sizeof(MultiVersionStructV3_Data) == 32,
              "Bad sizeof(MultiVersionStructV3_Data)");
// Used by MultiVersionStructV3::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MultiVersionStructV3_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MultiVersionStructV3_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MultiVersionStructV3_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MultiVersionStructV3_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MultiVersionStructV3_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MultiVersionStructV5_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MultiVersionStructV5_Data));
      new (data()) MultiVersionStructV5_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MultiVersionStructV5_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MultiVersionStructV5_Data>(index_);
    }
    MultiVersionStructV5_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t f_int32;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo::test::internal::Rect_Data> f_rect;
  mojo::internal::Pointer<mojo::internal::String_Data> f_string;
  mojo::internal::Pointer<mojo::internal::Array_Data<int8_t>> f_array;

 private:
  MultiVersionStructV5_Data();
  ~MultiVersionStructV5_Data() = delete;
};
static_assert(sizeof(MultiVersionStructV5_Data) == 40,
              "Bad sizeof(MultiVersionStructV5_Data)");
// Used by MultiVersionStructV5::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MultiVersionStructV5_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MultiVersionStructV5_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MultiVersionStructV5_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MultiVersionStructV5_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MultiVersionStructV5_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MultiVersionStructV7_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MultiVersionStructV7_Data));
      new (data()) MultiVersionStructV7_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MultiVersionStructV7_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MultiVersionStructV7_Data>(index_);
    }
    MultiVersionStructV7_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t f_int32;
  mojo::internal::Handle_Data f_message_pipe;
  mojo::internal::Pointer<::mojo::test::internal::Rect_Data> f_rect;
  mojo::internal::Pointer<mojo::internal::String_Data> f_string;
  mojo::internal::Pointer<mojo::internal::Array_Data<int8_t>> f_array;
  uint8_t f_bool : 1;
  uint8_t padfinal_[7];

 private:
  MultiVersionStructV7_Data();
  ~MultiVersionStructV7_Data() = delete;
};
static_assert(sizeof(MultiVersionStructV7_Data) == 48,
              "Bad sizeof(MultiVersionStructV7_Data)");
// Used by MultiVersionStructV7::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MultiVersionStructV7_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MultiVersionStructV7_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MultiVersionStructV7_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MultiVersionStructV7_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MultiVersionStructV7_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ReorderedStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ReorderedStruct_Data));
      new (data()) ReorderedStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ReorderedStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ReorderedStruct_Data>(index_);
    }
    ReorderedStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t c;
  int32_t a;
  int32_t b;
  uint8_t padfinal_[4];

 private:
  ReorderedStruct_Data();
  ~ReorderedStruct_Data() = delete;
};
static_assert(sizeof(ReorderedStruct_Data) == 24,
              "Bad sizeof(ReorderedStruct_Data)");
// Used by ReorderedStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ReorderedStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ReorderedStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ReorderedStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ReorderedStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ReorderedStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ContainsInterface_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContainsInterface_Data));
      new (data()) ContainsInterface_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContainsInterface_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContainsInterface_Data>(index_);
    }
    ContainsInterface_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data some_interface;

 private:
  ContainsInterface_Data();
  ~ContainsInterface_Data() = delete;
};
static_assert(sizeof(ContainsInterface_Data) == 16,
              "Bad sizeof(ContainsInterface_Data)");
// Used by ContainsInterface::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ContainsInterface_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ContainsInterface_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ContainsInterface_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ContainsInterface_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ContainsInterface_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ContainsOther_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContainsOther_Data));
      new (data()) ContainsOther_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContainsOther_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContainsOther_Data>(index_);
    }
    ContainsOther_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t other;
  uint8_t padfinal_[4];

 private:
  ContainsOther_Data();
  ~ContainsOther_Data() = delete;
};
static_assert(sizeof(ContainsOther_Data) == 16,
              "Bad sizeof(ContainsOther_Data)");
// Used by ContainsOther::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ContainsOther_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ContainsOther_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ContainsOther_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ContainsOther_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ContainsOther_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ContainsInterfaceRequest_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContainsInterfaceRequest_Data));
      new (data()) ContainsInterfaceRequest_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContainsInterfaceRequest_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContainsInterfaceRequest_Data>(index_);
    }
    ContainsInterfaceRequest_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  ContainsInterfaceRequest_Data();
  ~ContainsInterfaceRequest_Data() = delete;
};
static_assert(sizeof(ContainsInterfaceRequest_Data) == 16,
              "Bad sizeof(ContainsInterfaceRequest_Data)");
// Used by ContainsInterfaceRequest::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ContainsInterfaceRequest_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ContainsInterfaceRequest_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ContainsInterfaceRequest_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ContainsInterfaceRequest_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ContainsInterfaceRequest_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SingleBoolStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SingleBoolStruct_Data));
      new (data()) SingleBoolStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SingleBoolStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SingleBoolStruct_Data>(index_);
    }
    SingleBoolStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t value : 1;
  uint8_t padfinal_[7];

 private:
  SingleBoolStruct_Data();
  ~SingleBoolStruct_Data() = delete;
};
static_assert(sizeof(SingleBoolStruct_Data) == 16,
              "Bad sizeof(SingleBoolStruct_Data)");
// Used by SingleBoolStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SingleBoolStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SingleBoolStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SingleBoolStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SingleBoolStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SingleBoolStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ContainsHashable_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContainsHashable_Data));
      new (data()) ContainsHashable_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContainsHashable_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContainsHashable_Data>(index_);
    }
    ContainsHashable_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo::test::internal::TypemappedRect_Data> rect;

 private:
  ContainsHashable_Data();
  ~ContainsHashable_Data() = delete;
};
static_assert(sizeof(ContainsHashable_Data) == 16,
              "Bad sizeof(ContainsHashable_Data)");
// Used by ContainsHashable::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ContainsHashable_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ContainsHashable_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ContainsHashable_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ContainsHashable_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ContainsHashable_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SimpleNestedStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SimpleNestedStruct_Data));
      new (data()) SimpleNestedStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SimpleNestedStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SimpleNestedStruct_Data>(index_);
    }
    SimpleNestedStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ContainsOther_Data> nested;

 private:
  SimpleNestedStruct_Data();
  ~SimpleNestedStruct_Data() = delete;
};
static_assert(sizeof(SimpleNestedStruct_Data) == 16,
              "Bad sizeof(SimpleNestedStruct_Data)");
// Used by SimpleNestedStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SimpleNestedStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SimpleNestedStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SimpleNestedStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SimpleNestedStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SimpleNestedStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_SHARED_INTERNAL_H_