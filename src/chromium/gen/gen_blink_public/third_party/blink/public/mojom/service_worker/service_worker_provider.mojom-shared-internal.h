// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker_mode.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider_type.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared-internal.h"
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
class ServiceWorkerProviderInfoForWorker_Data;
class ServiceWorkerProviderInfoForStartWorker_Data;
class ServiceWorkerProviderInfoForWindow_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerProviderInfoForWorker_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerProviderInfoForWorker_Data));
      new (data()) ServiceWorkerProviderInfoForWorker_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerProviderInfoForWorker_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerProviderInfoForWorker_Data>(index_);
    }
    ServiceWorkerProviderInfoForWorker_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data host_ptr_info;
  mojo::internal::AssociatedEndpointHandle_Data client_request;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerProviderInfoForWorker_Data();
  ~ServiceWorkerProviderInfoForWorker_Data() = delete;
};
static_assert(sizeof(ServiceWorkerProviderInfoForWorker_Data) == 24,
              "Bad sizeof(ServiceWorkerProviderInfoForWorker_Data)");
// Used by ServiceWorkerProviderInfoForWorker::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceWorkerProviderInfoForWorker_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceWorkerProviderInfoForWorker_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceWorkerProviderInfoForWorker_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ServiceWorkerProviderInfoForWorker_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceWorkerProviderInfoForWorker_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerProviderInfoForStartWorker_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerProviderInfoForStartWorker_Data));
      new (data()) ServiceWorkerProviderInfoForStartWorker_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerProviderInfoForStartWorker_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerProviderInfoForStartWorker_Data>(index_);
    }
    ServiceWorkerProviderInfoForStartWorker_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data host_ptr_info;
  mojo::internal::AssociatedEndpointHandle_Data client_request;
  mojo::internal::Interface_Data script_loader_factory_ptr_info;
  mojo::internal::Interface_Data cache_storage;
  mojo::internal::Interface_Data interface_provider;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerProviderInfoForStartWorker_Data();
  ~ServiceWorkerProviderInfoForStartWorker_Data() = delete;
};
static_assert(sizeof(ServiceWorkerProviderInfoForStartWorker_Data) == 48,
              "Bad sizeof(ServiceWorkerProviderInfoForStartWorker_Data)");
// Used by ServiceWorkerProviderInfoForStartWorker::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceWorkerProviderInfoForStartWorker_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceWorkerProviderInfoForStartWorker_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceWorkerProviderInfoForStartWorker_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ServiceWorkerProviderInfoForStartWorker_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceWorkerProviderInfoForStartWorker_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerProviderInfoForWindow_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerProviderInfoForWindow_Data));
      new (data()) ServiceWorkerProviderInfoForWindow_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerProviderInfoForWindow_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerProviderInfoForWindow_Data>(index_);
    }
    ServiceWorkerProviderInfoForWindow_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data host_ptr_info;
  mojo::internal::AssociatedEndpointHandle_Data client_request;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerProviderInfoForWindow_Data();
  ~ServiceWorkerProviderInfoForWindow_Data() = delete;
};
static_assert(sizeof(ServiceWorkerProviderInfoForWindow_Data) == 24,
              "Bad sizeof(ServiceWorkerProviderInfoForWindow_Data)");
// Used by ServiceWorkerProviderInfoForWindow::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceWorkerProviderInfoForWindow_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceWorkerProviderInfoForWindow_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceWorkerProviderInfoForWindow_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ServiceWorkerProviderInfoForWindow_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceWorkerProviderInfoForWindow_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_INTERNAL_H_