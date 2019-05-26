// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "media/mojo/interfaces/decryptor.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace media {
namespace mojom {
namespace internal {
using CdmConfig_Data = mojo::native::internal::NativeStruct_Data;
class CdmPromiseResult_Data;
class CdmKeyInformation_Data;
using EmeInitDataType_Data =
    mojo::internal::NativeEnum_Data;
using CdmSessionType_Data =
    mojo::internal::NativeEnum_Data;
using CdmMessageType_Data =
    mojo::internal::NativeEnum_Data;

struct CdmKeyStatus_Data {
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
using HdcpVersion_Data =
    mojo::internal::NativeEnum_Data;
using CdmPromiseResult_Exception_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)
class  CdmPromiseResult_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmPromiseResult_Data));
      new (data()) CdmPromiseResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmPromiseResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmPromiseResult_Data>(index_);
    }
    CdmPromiseResult_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[3];
  int32_t exception;
  uint32_t system_code;
  uint8_t pad2_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  CdmPromiseResult_Data();
  ~CdmPromiseResult_Data() = delete;
};
static_assert(sizeof(CdmPromiseResult_Data) == 32,
              "Bad sizeof(CdmPromiseResult_Data)");
// Used by CdmPromiseResult::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CdmPromiseResult_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CdmPromiseResult_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CdmPromiseResult_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CdmPromiseResult_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CdmPromiseResult_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CdmKeyInformation_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmKeyInformation_Data));
      new (data()) CdmKeyInformation_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmKeyInformation_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmKeyInformation_Data>(index_);
    }
    CdmKeyInformation_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_id;
  int32_t status;
  uint32_t system_code;

 private:
  CdmKeyInformation_Data();
  ~CdmKeyInformation_Data() = delete;
};
static_assert(sizeof(CdmKeyInformation_Data) == 24,
              "Bad sizeof(CdmKeyInformation_Data)");
// Used by CdmKeyInformation::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CdmKeyInformation_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CdmKeyInformation_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CdmKeyInformation_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CdmKeyInformation_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CdmKeyInformation_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_INTERNAL_H_