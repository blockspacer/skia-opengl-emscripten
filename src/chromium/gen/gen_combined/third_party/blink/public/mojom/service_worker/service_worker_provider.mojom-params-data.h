// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_PARAMS_DATA_H_

#include "base/logging.h"
#include "base/macros.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif
namespace blink {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerWorkerClient_OnControllerChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerWorkerClient_OnControllerChanged_Params_Data));
      new (data()) ServiceWorkerWorkerClient_OnControllerChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerWorkerClient_OnControllerChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerWorkerClient_OnControllerChanged_Params_Data>(index_);
    }
    ServiceWorkerWorkerClient_OnControllerChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t mode;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerWorkerClient_OnControllerChanged_Params_Data();
  ~ServiceWorkerWorkerClient_OnControllerChanged_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerWorkerClient_OnControllerChanged_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerWorkerClient_OnControllerChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data));
      new (data()) ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data>(index_);
    }
    ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data();
  ~ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data));
      new (data()) ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data>(index_);
    }
    ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data host;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data();
  ~ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data)");

}  // namespace internal
class ServiceWorkerWorkerClient_OnControllerChanged_ParamsDataView {
 public:
  ServiceWorkerWorkerClient_OnControllerChanged_ParamsDataView() {}

  ServiceWorkerWorkerClient_OnControllerChanged_ParamsDataView(
      internal::ServiceWorkerWorkerClient_OnControllerChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::blink::mojom::ControllerServiceWorkerMode>(
        data_value, output);
  }

  ::blink::mojom::ControllerServiceWorkerMode mode() const {
    return static_cast<::blink::mojom::ControllerServiceWorkerMode>(data_->mode);
  }
 private:
  internal::ServiceWorkerWorkerClient_OnControllerChanged_Params_Data* data_ = nullptr;
};

class ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_ParamsDataView {
 public:
  ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_ParamsDataView() {}

  ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_ParamsDataView(
      internal::ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerWorkerClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerWorkerClientRegistry_RegisterWorkerClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_ParamsDataView {
 public:
  ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_ParamsDataView() {}

  ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_ParamsDataView(
      internal::ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerWorkerClientRegistryRequestDataView>(
            &data_->host, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerWorkerClientRegistry_CloneWorkerClientRegistry_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};







}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_PARAMS_DATA_H_