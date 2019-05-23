// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
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
class IDBKey_Data;
class IDBKeyPath_Data;
class IDBKeyRange_Data;
class IDBIndexMetadata_Data;
class IDBObjectStoreMetadata_Data;
class IDBDatabaseMetadata_Data;
class IDBNameAndVersion_Data;
class IDBIndexKeys_Data;
class IDBFileInfo_Data;
class IDBBlobInfo_Data;
class IDBValue_Data;
class IDBReturnValue_Data;
class IDBObservation_Data;
class IDBObserverTransaction_Data;
class IDBObserverChanges_Data;
class IDBError_Data;
class IDBCursorValue_Data;
class IDBKeyData_Data;
class IDBKeyPathData_Data;

struct IDBCursorDirection_Data {
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

struct IDBDataLoss_Data {
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

struct IDBKeyType_Data {
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

struct IDBKeyPathType_Data {
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

struct IDBOperationType_Data {
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

struct IDBPutMode_Data {
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

struct IDBTaskType_Data {
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

struct IDBTransactionMode_Data {
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

struct IDBStatus_Data {
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


class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBKeyData_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  IDBKeyData_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~IDBKeyData_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBKeyData_Data));
      new (data()) IDBKeyData_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) IDBKeyData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBKeyData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBKeyData_Data>(index_);
    }
    IDBKeyData_Data* operator->() { return data(); }

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
    tag = static_cast<IDBKeyData_Tag>(0);
    data.unknown = 0U;
  }

  enum class IDBKeyData_Tag : uint32_t {

    
    KEY_ARRAY,
    
    BINARY,
    
    STRING,
    
    DATE,
    
    NUMBER,
    
    OTHER_INVALID,
    
    OTHER_NULL,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IDBKey_Data>>> f_key_array;
    mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> f_binary;
    mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> f_string;
    double f_date;
    double f_number;
    uint8_t f_other_invalid : 1;
    uint8_t f_other_null : 1;
    uint64_t unknown;
  };

  uint32_t size;
  IDBKeyData_Tag tag;
  Union_ data;
};
static_assert(sizeof(IDBKeyData_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(IDBKeyData_Data)");


class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBKeyPathData_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  IDBKeyPathData_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~IDBKeyPathData_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBKeyPathData_Data));
      new (data()) IDBKeyPathData_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) IDBKeyPathData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBKeyPathData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBKeyPathData_Data>(index_);
    }
    IDBKeyPathData_Data* operator->() { return data(); }

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
    tag = static_cast<IDBKeyPathData_Tag>(0);
    data.unknown = 0U;
  }

  enum class IDBKeyPathData_Tag : uint32_t {

    
    STRING,
    
    STRING_ARRAY,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> f_string;
    mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data>>> f_string_array;
    uint64_t unknown;
  };

  uint32_t size;
  IDBKeyPathData_Tag tag;
  Union_ data;
};
static_assert(sizeof(IDBKeyPathData_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(IDBKeyPathData_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBKey_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBKey_Data));
      new (data()) IDBKey_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBKey_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBKey_Data>(index_);
    }
    IDBKey_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::IDBKeyData_Data data;

 private:
  IDBKey_Data();
  ~IDBKey_Data() = delete;
};
static_assert(sizeof(IDBKey_Data) == 24,
              "Bad sizeof(IDBKey_Data)");
// Used by IDBKey::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBKey_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBKey_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBKey_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBKey_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBKey_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBKeyPath_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBKeyPath_Data));
      new (data()) IDBKeyPath_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBKeyPath_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBKeyPath_Data>(index_);
    }
    IDBKeyPath_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::IDBKeyPathData_Data data;

 private:
  IDBKeyPath_Data();
  ~IDBKeyPath_Data() = delete;
};
static_assert(sizeof(IDBKeyPath_Data) == 24,
              "Bad sizeof(IDBKeyPath_Data)");
// Used by IDBKeyPath::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBKeyPath_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBKeyPath_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBKeyPath_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBKeyPath_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBKeyPath_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBKeyRange_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBKeyRange_Data));
      new (data()) IDBKeyRange_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBKeyRange_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBKeyRange_Data>(index_);
    }
    IDBKeyRange_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::IDBKey_Data> lower;
  mojo::internal::Pointer<internal::IDBKey_Data> upper;
  uint8_t lower_open : 1;
  uint8_t upper_open : 1;
  uint8_t padfinal_[7];

 private:
  IDBKeyRange_Data();
  ~IDBKeyRange_Data() = delete;
};
static_assert(sizeof(IDBKeyRange_Data) == 32,
              "Bad sizeof(IDBKeyRange_Data)");
// Used by IDBKeyRange::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBKeyRange_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBKeyRange_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBKeyRange_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBKeyRange_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBKeyRange_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBIndexMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBIndexMetadata_Data));
      new (data()) IDBIndexMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBIndexMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBIndexMetadata_Data>(index_);
    }
    IDBIndexMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<internal::IDBKeyPath_Data> key_path;
  uint8_t unique : 1;
  uint8_t multi_entry : 1;
  uint8_t padfinal_[7];

 private:
  IDBIndexMetadata_Data();
  ~IDBIndexMetadata_Data() = delete;
};
static_assert(sizeof(IDBIndexMetadata_Data) == 40,
              "Bad sizeof(IDBIndexMetadata_Data)");
// Used by IDBIndexMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBIndexMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBIndexMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBIndexMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBIndexMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBIndexMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBObjectStoreMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBObjectStoreMetadata_Data));
      new (data()) IDBObjectStoreMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBObjectStoreMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBObjectStoreMetadata_Data>(index_);
    }
    IDBObjectStoreMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<internal::IDBKeyPath_Data> key_path;
  uint8_t auto_increment : 1;
  uint8_t pad3_[7];
  int64_t max_index_id;
  mojo::internal::Pointer<mojo::internal::Map_Data<int64_t, mojo::internal::Pointer<internal::IDBIndexMetadata_Data>>> indexes;

 private:
  IDBObjectStoreMetadata_Data();
  ~IDBObjectStoreMetadata_Data() = delete;
};
static_assert(sizeof(IDBObjectStoreMetadata_Data) == 56,
              "Bad sizeof(IDBObjectStoreMetadata_Data)");
// Used by IDBObjectStoreMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBObjectStoreMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBObjectStoreMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBObjectStoreMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBObjectStoreMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBObjectStoreMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBDatabaseMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBDatabaseMetadata_Data));
      new (data()) IDBDatabaseMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBDatabaseMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBDatabaseMetadata_Data>(index_);
    }
    IDBDatabaseMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  int64_t version;
  int64_t max_object_store_id;
  mojo::internal::Pointer<mojo::internal::Map_Data<int64_t, mojo::internal::Pointer<internal::IDBObjectStoreMetadata_Data>>> object_stores;

 private:
  IDBDatabaseMetadata_Data();
  ~IDBDatabaseMetadata_Data() = delete;
};
static_assert(sizeof(IDBDatabaseMetadata_Data) == 48,
              "Bad sizeof(IDBDatabaseMetadata_Data)");
// Used by IDBDatabaseMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBDatabaseMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBDatabaseMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBDatabaseMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBDatabaseMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBDatabaseMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBNameAndVersion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBNameAndVersion_Data));
      new (data()) IDBNameAndVersion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBNameAndVersion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBNameAndVersion_Data>(index_);
    }
    IDBNameAndVersion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  int64_t version;

 private:
  IDBNameAndVersion_Data();
  ~IDBNameAndVersion_Data() = delete;
};
static_assert(sizeof(IDBNameAndVersion_Data) == 24,
              "Bad sizeof(IDBNameAndVersion_Data)");
// Used by IDBNameAndVersion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBNameAndVersion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBNameAndVersion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBNameAndVersion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBNameAndVersion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBNameAndVersion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBIndexKeys_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBIndexKeys_Data));
      new (data()) IDBIndexKeys_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBIndexKeys_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBIndexKeys_Data>(index_);
    }
    IDBIndexKeys_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t index_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IDBKey_Data>>> index_keys;

 private:
  IDBIndexKeys_Data();
  ~IDBIndexKeys_Data() = delete;
};
static_assert(sizeof(IDBIndexKeys_Data) == 24,
              "Bad sizeof(IDBIndexKeys_Data)");
// Used by IDBIndexKeys::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBIndexKeys_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBIndexKeys_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBIndexKeys_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBIndexKeys_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBIndexKeys_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBFileInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBFileInfo_Data));
      new (data()) IDBFileInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBFileInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBFileInfo_Data>(index_);
    }
    IDBFileInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> path;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> name;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> last_modified;

 private:
  IDBFileInfo_Data();
  ~IDBFileInfo_Data() = delete;
};
static_assert(sizeof(IDBFileInfo_Data) == 32,
              "Bad sizeof(IDBFileInfo_Data)");
// Used by IDBFileInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBFileInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBFileInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBFileInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBFileInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBFileInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBBlobInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBBlobInfo_Data));
      new (data()) IDBBlobInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBBlobInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBBlobInfo_Data>(index_);
    }
    IDBBlobInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data blob;
  mojo::internal::Pointer<mojo::internal::String_Data> uuid;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> mime_type;
  int64_t size;
  mojo::internal::Pointer<internal::IDBFileInfo_Data> file;

 private:
  IDBBlobInfo_Data();
  ~IDBBlobInfo_Data() = delete;
};
static_assert(sizeof(IDBBlobInfo_Data) == 48,
              "Bad sizeof(IDBBlobInfo_Data)");
// Used by IDBBlobInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBBlobInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBBlobInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBBlobInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBBlobInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBBlobInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBValue_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBValue_Data));
      new (data()) IDBValue_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBValue_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBValue_Data>(index_);
    }
    IDBValue_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> bits;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IDBBlobInfo_Data>>> blob_or_file_info;

 private:
  IDBValue_Data();
  ~IDBValue_Data() = delete;
};
static_assert(sizeof(IDBValue_Data) == 24,
              "Bad sizeof(IDBValue_Data)");
// Used by IDBValue::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBValue_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBValue_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBValue_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBValue_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBValue_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBReturnValue_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBReturnValue_Data));
      new (data()) IDBReturnValue_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBReturnValue_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBReturnValue_Data>(index_);
    }
    IDBReturnValue_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::IDBValue_Data> value;
  mojo::internal::Pointer<internal::IDBKey_Data> primary_key;
  mojo::internal::Pointer<internal::IDBKeyPath_Data> key_path;

 private:
  IDBReturnValue_Data();
  ~IDBReturnValue_Data() = delete;
};
static_assert(sizeof(IDBReturnValue_Data) == 32,
              "Bad sizeof(IDBReturnValue_Data)");
// Used by IDBReturnValue::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBReturnValue_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBReturnValue_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBReturnValue_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBReturnValue_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBReturnValue_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBObservation_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBObservation_Data));
      new (data()) IDBObservation_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBObservation_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBObservation_Data>(index_);
    }
    IDBObservation_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t object_store_id;
  int32_t type;
  uint8_t pad1_[4];
  mojo::internal::Pointer<internal::IDBKeyRange_Data> key_range;
  mojo::internal::Pointer<internal::IDBValue_Data> value;

 private:
  IDBObservation_Data();
  ~IDBObservation_Data() = delete;
};
static_assert(sizeof(IDBObservation_Data) == 40,
              "Bad sizeof(IDBObservation_Data)");
// Used by IDBObservation::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBObservation_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBObservation_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBObservation_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBObservation_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBObservation_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBObserverTransaction_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBObserverTransaction_Data));
      new (data()) IDBObserverTransaction_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBObserverTransaction_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBObserverTransaction_Data>(index_);
    }
    IDBObserverTransaction_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t id;
  mojo::internal::Pointer<mojo::internal::Array_Data<int64_t>> scope;

 private:
  IDBObserverTransaction_Data();
  ~IDBObserverTransaction_Data() = delete;
};
static_assert(sizeof(IDBObserverTransaction_Data) == 24,
              "Bad sizeof(IDBObserverTransaction_Data)");
// Used by IDBObserverTransaction::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBObserverTransaction_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBObserverTransaction_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBObserverTransaction_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBObserverTransaction_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBObserverTransaction_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBObserverChanges_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBObserverChanges_Data));
      new (data()) IDBObserverChanges_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBObserverChanges_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBObserverChanges_Data>(index_);
    }
    IDBObserverChanges_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<int32_t, mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>>>> observation_index_map;
  mojo::internal::Pointer<mojo::internal::Map_Data<int32_t, mojo::internal::Pointer<internal::IDBObserverTransaction_Data>>> transaction_map;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IDBObservation_Data>>> observations;

 private:
  IDBObserverChanges_Data();
  ~IDBObserverChanges_Data() = delete;
};
static_assert(sizeof(IDBObserverChanges_Data) == 32,
              "Bad sizeof(IDBObserverChanges_Data)");
// Used by IDBObserverChanges::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBObserverChanges_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBObserverChanges_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBObserverChanges_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBObserverChanges_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBObserverChanges_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBError_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBError_Data));
      new (data()) IDBError_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBError_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBError_Data>(index_);
    }
    IDBError_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_code;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> error_message;

 private:
  IDBError_Data();
  ~IDBError_Data() = delete;
};
static_assert(sizeof(IDBError_Data) == 24,
              "Bad sizeof(IDBError_Data)");
// Used by IDBError::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBError_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBError_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBError_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBError_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBError_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IDBCursorValue_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IDBCursorValue_Data));
      new (data()) IDBCursorValue_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IDBCursorValue_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IDBCursorValue_Data>(index_);
    }
    IDBCursorValue_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IDBKey_Data>>> keys;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IDBKey_Data>>> primary_keys;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::IDBValue_Data>>> values;

 private:
  IDBCursorValue_Data();
  ~IDBCursorValue_Data() = delete;
};
static_assert(sizeof(IDBCursorValue_Data) == 32,
              "Bad sizeof(IDBCursorValue_Data)");
// Used by IDBCursorValue::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct IDBCursorValue_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  IDBCursorValue_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~IDBCursorValue_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    IDBCursorValue_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    IDBCursorValue_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_SHARED_INTERNAL_H_