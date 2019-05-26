// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-shared-internal.h"
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
class WrapperStruct_Data;
class DummyStruct_Data;
class SmallStruct_Data;
class SmallStructNonNullableUnion_Data;
class SmallObjStruct_Data;
class TryNonNullStruct_Data;
class ImportedUnionStruct_Data;
class PodUnion_Data;
class ObjectUnion_Data;
class HandleUnion_Data;
class OldUnion_Data;
class NewUnion_Data;
class ImportedUnionUnion_Data;

struct AnEnum_Data {
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

struct AnExtensibleEnum_Data {
 public:
  static bool constexpr kIsExtensible = true;

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


class  PodUnion_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  PodUnion_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~PodUnion_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PodUnion_Data));
      new (data()) PodUnion_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) PodUnion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PodUnion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PodUnion_Data>(index_);
    }
    PodUnion_Data* operator->() { return data(); }

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
    tag = static_cast<PodUnion_Tag>(0);
    data.unknown = 0U;
  }

  enum class PodUnion_Tag : uint32_t {

    
    F_INT8,
    
    F_INT8_OTHER,
    
    F_UINT8,
    
    F_INT16,
    
    F_UINT16,
    
    F_INT32,
    
    F_UINT32,
    
    F_INT64,
    
    F_UINT64,
    
    F_FLOAT,
    
    F_DOUBLE,
    
    F_BOOL,
    
    F_ENUM,
    
    F_EXTENSIBLE_ENUM,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    int8_t f_f_int8;
    int8_t f_f_int8_other;
    uint8_t f_f_uint8;
    int16_t f_f_int16;
    uint16_t f_f_uint16;
    int32_t f_f_int32;
    uint32_t f_f_uint32;
    int64_t f_f_int64;
    uint64_t f_f_uint64;
    float f_f_float;
    double f_f_double;
    uint8_t f_f_bool : 1;
    int32_t f_f_enum;
    int32_t f_f_extensible_enum;
    uint64_t unknown;
  };

  uint32_t size;
  PodUnion_Tag tag;
  Union_ data;
};
static_assert(sizeof(PodUnion_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(PodUnion_Data)");


class  ObjectUnion_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  ObjectUnion_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~ObjectUnion_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ObjectUnion_Data));
      new (data()) ObjectUnion_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) ObjectUnion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ObjectUnion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ObjectUnion_Data>(index_);
    }
    ObjectUnion_Data* operator->() { return data(); }

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
    tag = static_cast<ObjectUnion_Tag>(0);
    data.unknown = 0U;
  }

  enum class ObjectUnion_Tag : uint32_t {

    
    F_INT8,
    
    F_STRING,
    
    F_DUMMY,
    
    F_NULLABLE,
    
    F_ARRAY_INT8,
    
    F_MAP_INT8,
    
    F_POD_UNION,
    
    F_SMALL_STRUCTS,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    int8_t f_f_int8;
    mojo::internal::Pointer<mojo::internal::String_Data> f_f_string;
    mojo::internal::Pointer<internal::DummyStruct_Data> f_f_dummy;
    mojo::internal::Pointer<internal::DummyStruct_Data> f_f_nullable;
    mojo::internal::Pointer<mojo::internal::Array_Data<int8_t>> f_f_array_int8;
    mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, int8_t>> f_f_map_int8;
    mojo::internal::Pointer<internal::PodUnion_Data> f_f_pod_union;
    mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SmallStruct_Data>>> f_f_small_structs;
    uint64_t unknown;
  };

  uint32_t size;
  ObjectUnion_Tag tag;
  Union_ data;
};
static_assert(sizeof(ObjectUnion_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(ObjectUnion_Data)");


class  HandleUnion_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  HandleUnion_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~HandleUnion_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HandleUnion_Data));
      new (data()) HandleUnion_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) HandleUnion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HandleUnion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HandleUnion_Data>(index_);
    }
    HandleUnion_Data* operator->() { return data(); }

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
    tag = static_cast<HandleUnion_Tag>(0);
    data.unknown = 0U;
  }

  enum class HandleUnion_Tag : uint32_t {

    
    F_HANDLE,
    
    F_MESSAGE_PIPE,
    
    F_DATA_PIPE_CONSUMER,
    
    F_DATA_PIPE_PRODUCER,
    
    F_SHARED_BUFFER,
    
    F_SMALL_CACHE,
    
    F_SMALL_CACHE_RECEIVER,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Handle_Data f_f_handle;
    mojo::internal::Handle_Data f_f_message_pipe;
    mojo::internal::Handle_Data f_f_data_pipe_consumer;
    mojo::internal::Handle_Data f_f_data_pipe_producer;
    mojo::internal::Handle_Data f_f_shared_buffer;
    mojo::internal::Interface_Data f_f_small_cache;
    mojo::internal::Handle_Data f_f_small_cache_receiver;
    uint64_t unknown;
  };

  uint32_t size;
  HandleUnion_Tag tag;
  Union_ data;
};
static_assert(sizeof(HandleUnion_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(HandleUnion_Data)");


class  OldUnion_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  OldUnion_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~OldUnion_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OldUnion_Data));
      new (data()) OldUnion_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) OldUnion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OldUnion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OldUnion_Data>(index_);
    }
    OldUnion_Data* operator->() { return data(); }

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
    tag = static_cast<OldUnion_Tag>(0);
    data.unknown = 0U;
  }

  enum class OldUnion_Tag : uint32_t {

    
    F_INT8,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    int8_t f_f_int8;
    uint64_t unknown;
  };

  uint32_t size;
  OldUnion_Tag tag;
  Union_ data;
};
static_assert(sizeof(OldUnion_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(OldUnion_Data)");


class  NewUnion_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  NewUnion_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~NewUnion_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NewUnion_Data));
      new (data()) NewUnion_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) NewUnion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NewUnion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NewUnion_Data>(index_);
    }
    NewUnion_Data* operator->() { return data(); }

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
    tag = static_cast<NewUnion_Tag>(0);
    data.unknown = 0U;
  }

  enum class NewUnion_Tag : uint32_t {

    
    F_INT8,
    
    F_INT16,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    int8_t f_f_int8;
    int16_t f_f_int16;
    uint64_t unknown;
  };

  uint32_t size;
  NewUnion_Tag tag;
  Union_ data;
};
static_assert(sizeof(NewUnion_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(NewUnion_Data)");


class  ImportedUnionUnion_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  ImportedUnionUnion_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~ImportedUnionUnion_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImportedUnionUnion_Data));
      new (data()) ImportedUnionUnion_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) ImportedUnionUnion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImportedUnionUnion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImportedUnionUnion_Data>(index_);
    }
    ImportedUnionUnion_Data* operator->() { return data(); }

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
    tag = static_cast<ImportedUnionUnion_Tag>(0);
    data.unknown = 0U;
  }

  enum class ImportedUnionUnion_Tag : uint32_t {

    
    POINT_OR_SHAPE,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<::imported::internal::PointOrShape_Data> f_point_or_shape;
    uint64_t unknown;
  };

  uint32_t size;
  ImportedUnionUnion_Tag tag;
  Union_ data;
};
static_assert(sizeof(ImportedUnionUnion_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(ImportedUnionUnion_Data)");
class  WrapperStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WrapperStruct_Data));
      new (data()) WrapperStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WrapperStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WrapperStruct_Data>(index_);
    }
    WrapperStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::ObjectUnion_Data object_union;
  internal::PodUnion_Data pod_union;
  internal::HandleUnion_Data handle_union;

 private:
  WrapperStruct_Data();
  ~WrapperStruct_Data() = delete;
};
static_assert(sizeof(WrapperStruct_Data) == 56,
              "Bad sizeof(WrapperStruct_Data)");
// Used by WrapperStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WrapperStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WrapperStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WrapperStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WrapperStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WrapperStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DummyStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DummyStruct_Data));
      new (data()) DummyStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DummyStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DummyStruct_Data>(index_);
    }
    DummyStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int8_t f_int8;
  uint8_t padfinal_[7];

 private:
  DummyStruct_Data();
  ~DummyStruct_Data() = delete;
};
static_assert(sizeof(DummyStruct_Data) == 16,
              "Bad sizeof(DummyStruct_Data)");
// Used by DummyStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DummyStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DummyStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DummyStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DummyStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DummyStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SmallStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SmallStruct_Data));
      new (data()) SmallStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SmallStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SmallStruct_Data>(index_);
    }
    SmallStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DummyStruct_Data> dummy_struct;
  internal::PodUnion_Data pod_union;
  mojo::internal::Pointer<mojo::internal::Array_Data<internal::PodUnion_Data>> pod_union_array;
  mojo::internal::Pointer<mojo::internal::Array_Data<internal::PodUnion_Data>> nullable_pod_union_array;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::DummyStruct_Data>>> s_array;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, internal::PodUnion_Data>> pod_union_map;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, internal::PodUnion_Data>> nullable_pod_union_map;

 private:
  SmallStruct_Data();
  ~SmallStruct_Data() = delete;
};
static_assert(sizeof(SmallStruct_Data) == 72,
              "Bad sizeof(SmallStruct_Data)");
// Used by SmallStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SmallStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SmallStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SmallStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SmallStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SmallStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SmallStructNonNullableUnion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SmallStructNonNullableUnion_Data));
      new (data()) SmallStructNonNullableUnion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SmallStructNonNullableUnion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SmallStructNonNullableUnion_Data>(index_);
    }
    SmallStructNonNullableUnion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::PodUnion_Data pod_union;

 private:
  SmallStructNonNullableUnion_Data();
  ~SmallStructNonNullableUnion_Data() = delete;
};
static_assert(sizeof(SmallStructNonNullableUnion_Data) == 24,
              "Bad sizeof(SmallStructNonNullableUnion_Data)");
// Used by SmallStructNonNullableUnion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SmallStructNonNullableUnion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SmallStructNonNullableUnion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SmallStructNonNullableUnion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SmallStructNonNullableUnion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SmallStructNonNullableUnion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SmallObjStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SmallObjStruct_Data));
      new (data()) SmallObjStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SmallObjStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SmallObjStruct_Data>(index_);
    }
    SmallObjStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::ObjectUnion_Data obj_union;
  int8_t f_int8;
  uint8_t padfinal_[7];

 private:
  SmallObjStruct_Data();
  ~SmallObjStruct_Data() = delete;
};
static_assert(sizeof(SmallObjStruct_Data) == 32,
              "Bad sizeof(SmallObjStruct_Data)");
// Used by SmallObjStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SmallObjStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SmallObjStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SmallObjStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SmallObjStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SmallObjStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TryNonNullStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TryNonNullStruct_Data));
      new (data()) TryNonNullStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TryNonNullStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TryNonNullStruct_Data>(index_);
    }
    TryNonNullStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DummyStruct_Data> nullable;
  mojo::internal::Pointer<internal::DummyStruct_Data> non_nullable;

 private:
  TryNonNullStruct_Data();
  ~TryNonNullStruct_Data() = delete;
};
static_assert(sizeof(TryNonNullStruct_Data) == 24,
              "Bad sizeof(TryNonNullStruct_Data)");
// Used by TryNonNullStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TryNonNullStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TryNonNullStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TryNonNullStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TryNonNullStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TryNonNullStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ImportedUnionStruct_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImportedUnionStruct_Data));
      new (data()) ImportedUnionStruct_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImportedUnionStruct_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImportedUnionStruct_Data>(index_);
    }
    ImportedUnionStruct_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  ::imported::internal::PointOrShape_Data point_or_shape;

 private:
  ImportedUnionStruct_Data();
  ~ImportedUnionStruct_Data() = delete;
};
static_assert(sizeof(ImportedUnionStruct_Data) == 24,
              "Bad sizeof(ImportedUnionStruct_Data)");
// Used by ImportedUnionStruct::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ImportedUnionStruct_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ImportedUnionStruct_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ImportedUnionStruct_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ImportedUnionStruct_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ImportedUnionStruct_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_SHARED_INTERNAL_H_