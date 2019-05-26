// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class DataElementBytes_Data;
class DataElementFile_Data;
class DataElementFilesystemURL_Data;
class DataElementBlob_Data;
class DataElement_Data;

#pragma pack(push, 1)


class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DataElement_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  DataElement_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~DataElement_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DataElement_Data));
      new (data()) DataElement_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) DataElement_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DataElement_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DataElement_Data>(index_);
    }
    DataElement_Data* operator->() { return data(); }

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
    tag = static_cast<DataElement_Tag>(0);
    data.unknown = 0U;
  }

  enum class DataElement_Tag : uint32_t {

    
    BYTES,
    
    FILE,
    
    FILE_FILESYSTEM,
    
    BLOB,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::DataElementBytes_Data> f_bytes;
    mojo::internal::Pointer<internal::DataElementFile_Data> f_file;
    mojo::internal::Pointer<internal::DataElementFilesystemURL_Data> f_file_filesystem;
    mojo::internal::Pointer<internal::DataElementBlob_Data> f_blob;
    uint64_t unknown;
  };

  uint32_t size;
  DataElement_Tag tag;
  Union_ data;
};
static_assert(sizeof(DataElement_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(DataElement_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DataElementBytes_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DataElementBytes_Data));
      new (data()) DataElementBytes_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DataElementBytes_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DataElementBytes_Data>(index_);
    }
    DataElementBytes_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t length;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> embedded_data;
  mojo::internal::Interface_Data data;

 private:
  DataElementBytes_Data();
  ~DataElementBytes_Data() = delete;
};
static_assert(sizeof(DataElementBytes_Data) == 32,
              "Bad sizeof(DataElementBytes_Data)");
// Used by DataElementBytes::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DataElementBytes_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DataElementBytes_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DataElementBytes_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DataElementBytes_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DataElementBytes_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DataElementFile_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DataElementFile_Data));
      new (data()) DataElementFile_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DataElementFile_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DataElementFile_Data>(index_);
    }
    DataElementFile_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> path;
  uint64_t offset;
  uint64_t length;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expected_modification_time;

 private:
  DataElementFile_Data();
  ~DataElementFile_Data() = delete;
};
static_assert(sizeof(DataElementFile_Data) == 40,
              "Bad sizeof(DataElementFile_Data)");
// Used by DataElementFile::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DataElementFile_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DataElementFile_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DataElementFile_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DataElementFile_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DataElementFile_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DataElementFilesystemURL_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DataElementFilesystemURL_Data));
      new (data()) DataElementFilesystemURL_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DataElementFilesystemURL_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DataElementFilesystemURL_Data>(index_);
    }
    DataElementFilesystemURL_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  uint64_t offset;
  uint64_t length;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expected_modification_time;

 private:
  DataElementFilesystemURL_Data();
  ~DataElementFilesystemURL_Data() = delete;
};
static_assert(sizeof(DataElementFilesystemURL_Data) == 40,
              "Bad sizeof(DataElementFilesystemURL_Data)");
// Used by DataElementFilesystemURL::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DataElementFilesystemURL_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DataElementFilesystemURL_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DataElementFilesystemURL_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DataElementFilesystemURL_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DataElementFilesystemURL_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DataElementBlob_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DataElementBlob_Data));
      new (data()) DataElementBlob_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DataElementBlob_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DataElementBlob_Data>(index_);
    }
    DataElementBlob_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data blob;
  uint64_t offset;
  uint64_t length;

 private:
  DataElementBlob_Data();
  ~DataElementBlob_Data() = delete;
};
static_assert(sizeof(DataElementBlob_Data) == 32,
              "Bad sizeof(DataElementBlob_Data)");
// Used by DataElementBlob::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DataElementBlob_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DataElementBlob_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DataElementBlob_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DataElementBlob_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DataElementBlob_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_SHARED_INTERNAL_H_