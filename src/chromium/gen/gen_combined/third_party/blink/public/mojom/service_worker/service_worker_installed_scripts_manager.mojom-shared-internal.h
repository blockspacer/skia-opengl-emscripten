// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class ServiceWorkerInstalledScriptsInfo_Data;
class ServiceWorkerScriptInfo_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerInstalledScriptsInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerInstalledScriptsInfo_Data));
      new (data()) ServiceWorkerInstalledScriptsInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerInstalledScriptsInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerInstalledScriptsInfo_Data>(index_);
    }
    ServiceWorkerInstalledScriptsInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data manager_request;
  mojo::internal::Interface_Data manager_host_ptr;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> installed_urls;

 private:
  ServiceWorkerInstalledScriptsInfo_Data();
  ~ServiceWorkerInstalledScriptsInfo_Data() = delete;
};
static_assert(sizeof(ServiceWorkerInstalledScriptsInfo_Data) == 32,
              "Bad sizeof(ServiceWorkerInstalledScriptsInfo_Data)");
// Used by ServiceWorkerInstalledScriptsInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceWorkerInstalledScriptsInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceWorkerInstalledScriptsInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceWorkerInstalledScriptsInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ServiceWorkerInstalledScriptsInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceWorkerInstalledScriptsInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerScriptInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerScriptInfo_Data));
      new (data()) ServiceWorkerScriptInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerScriptInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerScriptInfo_Data>(index_);
    }
    ServiceWorkerScriptInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> script_url;
  mojo::internal::Pointer<mojo::internal::String_Data> encoding;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> headers;
  mojo::internal::Handle_Data body;
  mojo::internal::Handle_Data meta_data;
  uint64_t body_size;
  uint64_t meta_data_size;

 private:
  ServiceWorkerScriptInfo_Data();
  ~ServiceWorkerScriptInfo_Data() = delete;
};
static_assert(sizeof(ServiceWorkerScriptInfo_Data) == 56,
              "Bad sizeof(ServiceWorkerScriptInfo_Data)");
// Used by ServiceWorkerScriptInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceWorkerScriptInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceWorkerScriptInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceWorkerScriptInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ServiceWorkerScriptInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceWorkerScriptInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_SHARED_INTERNAL_H_