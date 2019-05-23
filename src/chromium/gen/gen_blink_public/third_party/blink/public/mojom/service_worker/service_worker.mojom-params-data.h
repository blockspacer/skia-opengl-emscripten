// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_SetCachedMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_SetCachedMetadata_Params_Data));
      new (data()) ServiceWorkerHost_SetCachedMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_SetCachedMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_SetCachedMetadata_Params_Data>(index_);
    }
    ServiceWorkerHost_SetCachedMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  ServiceWorkerHost_SetCachedMetadata_Params_Data();
  ~ServiceWorkerHost_SetCachedMetadata_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_SetCachedMetadata_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerHost_SetCachedMetadata_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_ClearCachedMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_ClearCachedMetadata_Params_Data));
      new (data()) ServiceWorkerHost_ClearCachedMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_ClearCachedMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_ClearCachedMetadata_Params_Data>(index_);
    }
    ServiceWorkerHost_ClearCachedMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  ServiceWorkerHost_ClearCachedMetadata_Params_Data();
  ~ServiceWorkerHost_ClearCachedMetadata_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_ClearCachedMetadata_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_ClearCachedMetadata_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_GetClients_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_GetClients_Params_Data));
      new (data()) ServiceWorkerHost_GetClients_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_GetClients_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_GetClients_Params_Data>(index_);
    }
    ServiceWorkerHost_GetClients_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientQueryOptions_Data> options;

 private:
  ServiceWorkerHost_GetClients_Params_Data();
  ~ServiceWorkerHost_GetClients_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_GetClients_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_GetClients_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_GetClients_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_GetClients_ResponseParams_Data));
      new (data()) ServiceWorkerHost_GetClients_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_GetClients_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_GetClients_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_GetClients_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data>>> clients;

 private:
  ServiceWorkerHost_GetClients_ResponseParams_Data();
  ~ServiceWorkerHost_GetClients_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_GetClients_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_GetClients_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_GetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_GetClient_Params_Data));
      new (data()) ServiceWorkerHost_GetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_GetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_GetClient_Params_Data>(index_);
    }
    ServiceWorkerHost_GetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> client_uuid;

 private:
  ServiceWorkerHost_GetClient_Params_Data();
  ~ServiceWorkerHost_GetClient_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_GetClient_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_GetClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_GetClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_GetClient_ResponseParams_Data));
      new (data()) ServiceWorkerHost_GetClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_GetClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_GetClient_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_GetClient_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data> client;

 private:
  ServiceWorkerHost_GetClient_ResponseParams_Data();
  ~ServiceWorkerHost_GetClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_GetClient_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_GetClient_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_OpenNewTab_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_OpenNewTab_Params_Data));
      new (data()) ServiceWorkerHost_OpenNewTab_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_OpenNewTab_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_OpenNewTab_Params_Data>(index_);
    }
    ServiceWorkerHost_OpenNewTab_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  ServiceWorkerHost_OpenNewTab_Params_Data();
  ~ServiceWorkerHost_OpenNewTab_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_OpenNewTab_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_OpenNewTab_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_OpenNewTab_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_OpenNewTab_ResponseParams_Data));
      new (data()) ServiceWorkerHost_OpenNewTab_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_OpenNewTab_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_OpenNewTab_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_OpenNewTab_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data> client;
  mojo::internal::Pointer<mojo::internal::String_Data> error_msg;

 private:
  ServiceWorkerHost_OpenNewTab_ResponseParams_Data();
  ~ServiceWorkerHost_OpenNewTab_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_OpenNewTab_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerHost_OpenNewTab_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data));
      new (data()) ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data>(index_);
    }
    ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data();
  ~ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data));
      new (data()) ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data> client;
  mojo::internal::Pointer<mojo::internal::String_Data> error_msg;

 private:
  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data();
  ~ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_PostMessageToClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_PostMessageToClient_Params_Data));
      new (data()) ServiceWorkerHost_PostMessageToClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_PostMessageToClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_PostMessageToClient_Params_Data>(index_);
    }
    ServiceWorkerHost_PostMessageToClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> client_uuid;
  mojo::internal::Pointer<::blink::mojom::internal::TransferableMessage_Data> message;

 private:
  ServiceWorkerHost_PostMessageToClient_Params_Data();
  ~ServiceWorkerHost_PostMessageToClient_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_PostMessageToClient_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerHost_PostMessageToClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_FocusClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_FocusClient_Params_Data));
      new (data()) ServiceWorkerHost_FocusClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_FocusClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_FocusClient_Params_Data>(index_);
    }
    ServiceWorkerHost_FocusClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> client_uuid;

 private:
  ServiceWorkerHost_FocusClient_Params_Data();
  ~ServiceWorkerHost_FocusClient_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_FocusClient_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_FocusClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_FocusClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_FocusClient_ResponseParams_Data));
      new (data()) ServiceWorkerHost_FocusClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_FocusClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_FocusClient_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_FocusClient_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data> client;

 private:
  ServiceWorkerHost_FocusClient_ResponseParams_Data();
  ~ServiceWorkerHost_FocusClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_FocusClient_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_FocusClient_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_NavigateClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_NavigateClient_Params_Data));
      new (data()) ServiceWorkerHost_NavigateClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_NavigateClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_NavigateClient_Params_Data>(index_);
    }
    ServiceWorkerHost_NavigateClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> client_uuid;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  ServiceWorkerHost_NavigateClient_Params_Data();
  ~ServiceWorkerHost_NavigateClient_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_NavigateClient_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerHost_NavigateClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_NavigateClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_NavigateClient_ResponseParams_Data));
      new (data()) ServiceWorkerHost_NavigateClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_NavigateClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_NavigateClient_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_NavigateClient_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data> client;
  mojo::internal::Pointer<mojo::internal::String_Data> error_msg;

 private:
  ServiceWorkerHost_NavigateClient_ResponseParams_Data();
  ~ServiceWorkerHost_NavigateClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_NavigateClient_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerHost_NavigateClient_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_SkipWaiting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_SkipWaiting_Params_Data));
      new (data()) ServiceWorkerHost_SkipWaiting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_SkipWaiting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_SkipWaiting_Params_Data>(index_);
    }
    ServiceWorkerHost_SkipWaiting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerHost_SkipWaiting_Params_Data();
  ~ServiceWorkerHost_SkipWaiting_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_SkipWaiting_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerHost_SkipWaiting_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_SkipWaiting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_SkipWaiting_ResponseParams_Data));
      new (data()) ServiceWorkerHost_SkipWaiting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_SkipWaiting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_SkipWaiting_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_SkipWaiting_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  ServiceWorkerHost_SkipWaiting_ResponseParams_Data();
  ~ServiceWorkerHost_SkipWaiting_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_SkipWaiting_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorkerHost_SkipWaiting_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_ClaimClients_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_ClaimClients_Params_Data));
      new (data()) ServiceWorkerHost_ClaimClients_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_ClaimClients_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_ClaimClients_Params_Data>(index_);
    }
    ServiceWorkerHost_ClaimClients_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerHost_ClaimClients_Params_Data();
  ~ServiceWorkerHost_ClaimClients_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_ClaimClients_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerHost_ClaimClients_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerHost_ClaimClients_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerHost_ClaimClients_ResponseParams_Data));
      new (data()) ServiceWorkerHost_ClaimClients_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerHost_ClaimClients_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerHost_ClaimClients_ResponseParams_Data>(index_);
    }
    ServiceWorkerHost_ClaimClients_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> error_msg;

 private:
  ServiceWorkerHost_ClaimClients_ResponseParams_Data();
  ~ServiceWorkerHost_ClaimClients_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerHost_ClaimClients_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerHost_ClaimClients_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_InitializeGlobalScope_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_InitializeGlobalScope_Params_Data));
      new (data()) ServiceWorker_InitializeGlobalScope_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_InitializeGlobalScope_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_InitializeGlobalScope_Params_Data>(index_);
    }
    ServiceWorker_InitializeGlobalScope_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data service_worker_host;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data> registration_info;
  int32_t fetch_handler_existence;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_InitializeGlobalScope_Params_Data();
  ~ServiceWorker_InitializeGlobalScope_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_InitializeGlobalScope_Params_Data) == 32,
              "Bad sizeof(ServiceWorker_InitializeGlobalScope_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchInstallEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchInstallEvent_Params_Data));
      new (data()) ServiceWorker_DispatchInstallEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchInstallEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchInstallEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchInstallEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorker_DispatchInstallEvent_Params_Data();
  ~ServiceWorker_DispatchInstallEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchInstallEvent_Params_Data) == 8,
              "Bad sizeof(ServiceWorker_DispatchInstallEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchInstallEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchInstallEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchInstallEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchInstallEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchInstallEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchInstallEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t has_fetch_handler : 1;
  uint8_t padfinal_[3];

 private:
  ServiceWorker_DispatchInstallEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchInstallEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchInstallEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchInstallEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchActivateEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchActivateEvent_Params_Data));
      new (data()) ServiceWorker_DispatchActivateEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchActivateEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchActivateEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchActivateEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorker_DispatchActivateEvent_Params_Data();
  ~ServiceWorker_DispatchActivateEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchActivateEvent_Params_Data) == 8,
              "Bad sizeof(ServiceWorker_DispatchActivateEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchActivateEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchActivateEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchActivateEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchActivateEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchActivateEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchActivateEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchActivateEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchActivateEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchActivateEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchActivateEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data));
      new (data()) ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::BackgroundFetchRegistration_Data> registration;

 private:
  ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data();
  ~ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data));
      new (data()) ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::BackgroundFetchRegistration_Data> registration;

 private:
  ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data();
  ~ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data));
      new (data()) ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::BackgroundFetchRegistration_Data> registration;

 private:
  ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data();
  ~ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data));
      new (data()) ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::BackgroundFetchRegistration_Data> registration;

 private:
  ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data();
  ~ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchCookieChangeEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchCookieChangeEvent_Params_Data));
      new (data()) ServiceWorker_DispatchCookieChangeEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchCookieChangeEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchCookieChangeEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchCookieChangeEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::CanonicalCookie_Data> cookie;
  int32_t cause;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchCookieChangeEvent_Params_Data();
  ~ServiceWorker_DispatchCookieChangeEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchCookieChangeEvent_Params_Data) == 24,
              "Bad sizeof(ServiceWorker_DispatchCookieChangeEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchFetchEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchFetchEvent_Params_Data));
      new (data()) ServiceWorker_DispatchFetchEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchFetchEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchFetchEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchFetchEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::DispatchFetchEventParams_Data> params;
  mojo::internal::Interface_Data response_callback;

 private:
  ServiceWorker_DispatchFetchEvent_Params_Data();
  ~ServiceWorker_DispatchFetchEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchFetchEvent_Params_Data) == 24,
              "Bad sizeof(ServiceWorker_DispatchFetchEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchFetchEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchFetchEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchFetchEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchFetchEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchFetchEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchFetchEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchFetchEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchFetchEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchFetchEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchFetchEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchNotificationClickEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchNotificationClickEvent_Params_Data));
      new (data()) ServiceWorker_DispatchNotificationClickEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchNotificationClickEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchNotificationClickEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchNotificationClickEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> notification_id;
  mojo::internal::Pointer<::blink::mojom::internal::NotificationData_Data> notification_data;
  int32_t action_index;
  uint8_t pad2_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> reply;

 private:
  ServiceWorker_DispatchNotificationClickEvent_Params_Data();
  ~ServiceWorker_DispatchNotificationClickEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchNotificationClickEvent_Params_Data) == 40,
              "Bad sizeof(ServiceWorker_DispatchNotificationClickEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchNotificationCloseEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchNotificationCloseEvent_Params_Data));
      new (data()) ServiceWorker_DispatchNotificationCloseEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchNotificationCloseEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchNotificationCloseEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchNotificationCloseEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> notification_id;
  mojo::internal::Pointer<::blink::mojom::internal::NotificationData_Data> notification_data;

 private:
  ServiceWorker_DispatchNotificationCloseEvent_Params_Data();
  ~ServiceWorker_DispatchNotificationCloseEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchNotificationCloseEvent_Params_Data) == 24,
              "Bad sizeof(ServiceWorker_DispatchNotificationCloseEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchPushEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchPushEvent_Params_Data));
      new (data()) ServiceWorker_DispatchPushEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchPushEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchPushEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchPushEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> payload;

 private:
  ServiceWorker_DispatchPushEvent_Params_Data();
  ~ServiceWorker_DispatchPushEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchPushEvent_Params_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchPushEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchPushEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchPushEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchPushEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchPushEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchPushEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchPushEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchPushEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchPushEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchPushEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchPushEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchSyncEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchSyncEvent_Params_Data));
      new (data()) ServiceWorker_DispatchSyncEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchSyncEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchSyncEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchSyncEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  uint8_t last_chance : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timeout;

 private:
  ServiceWorker_DispatchSyncEvent_Params_Data();
  ~ServiceWorker_DispatchSyncEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchSyncEvent_Params_Data) == 32,
              "Bad sizeof(ServiceWorker_DispatchSyncEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchSyncEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchSyncEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchSyncEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchSyncEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchSyncEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchSyncEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchSyncEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchSyncEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchSyncEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchSyncEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchAbortPaymentEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchAbortPaymentEvent_Params_Data));
      new (data()) ServiceWorker_DispatchAbortPaymentEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchAbortPaymentEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchAbortPaymentEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchAbortPaymentEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data result_of_abort_payment;

 private:
  ServiceWorker_DispatchAbortPaymentEvent_Params_Data();
  ~ServiceWorker_DispatchAbortPaymentEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchAbortPaymentEvent_Params_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchAbortPaymentEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchCanMakePaymentEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchCanMakePaymentEvent_Params_Data));
      new (data()) ServiceWorker_DispatchCanMakePaymentEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchCanMakePaymentEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchCanMakePaymentEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchCanMakePaymentEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::payments::mojom::internal::CanMakePaymentEventData_Data> event_data;
  mojo::internal::Interface_Data result_of_can_make_payment;

 private:
  ServiceWorker_DispatchCanMakePaymentEvent_Params_Data();
  ~ServiceWorker_DispatchCanMakePaymentEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchCanMakePaymentEvent_Params_Data) == 24,
              "Bad sizeof(ServiceWorker_DispatchCanMakePaymentEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchPaymentRequestEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchPaymentRequestEvent_Params_Data));
      new (data()) ServiceWorker_DispatchPaymentRequestEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchPaymentRequestEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchPaymentRequestEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchPaymentRequestEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::payments::mojom::internal::PaymentRequestEventData_Data> request_data;
  mojo::internal::Interface_Data response_callback;

 private:
  ServiceWorker_DispatchPaymentRequestEvent_Params_Data();
  ~ServiceWorker_DispatchPaymentRequestEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchPaymentRequestEvent_Params_Data) == 24,
              "Bad sizeof(ServiceWorker_DispatchPaymentRequestEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchExtendableMessageEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchExtendableMessageEvent_Params_Data));
      new (data()) ServiceWorker_DispatchExtendableMessageEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchExtendableMessageEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchExtendableMessageEvent_Params_Data>(index_);
    }
    ServiceWorker_DispatchExtendableMessageEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ExtendableMessageEvent_Data> event;

 private:
  ServiceWorker_DispatchExtendableMessageEvent_Params_Data();
  ~ServiceWorker_DispatchExtendableMessageEvent_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchExtendableMessageEvent_Params_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchExtendableMessageEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data();
  ~ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data));
      new (data()) ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data>(index_);
    }
    ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ExtendableMessageEvent_Data> event;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timeout;

 private:
  ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data();
  ~ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data) == 24,
              "Bad sizeof(ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data));
      new (data()) ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data>(index_);
    }
    ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data();
  ~ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_Ping_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_Ping_Params_Data));
      new (data()) ServiceWorker_Ping_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_Ping_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_Ping_Params_Data>(index_);
    }
    ServiceWorker_Ping_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorker_Ping_Params_Data();
  ~ServiceWorker_Ping_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_Ping_Params_Data) == 8,
              "Bad sizeof(ServiceWorker_Ping_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_Ping_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_Ping_ResponseParams_Data));
      new (data()) ServiceWorker_Ping_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_Ping_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_Ping_ResponseParams_Data>(index_);
    }
    ServiceWorker_Ping_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorker_Ping_ResponseParams_Data();
  ~ServiceWorker_Ping_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorker_Ping_ResponseParams_Data) == 8,
              "Bad sizeof(ServiceWorker_Ping_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorker_SetIdleTimerDelayToZero_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorker_SetIdleTimerDelayToZero_Params_Data));
      new (data()) ServiceWorker_SetIdleTimerDelayToZero_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorker_SetIdleTimerDelayToZero_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorker_SetIdleTimerDelayToZero_Params_Data>(index_);
    }
    ServiceWorker_SetIdleTimerDelayToZero_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorker_SetIdleTimerDelayToZero_Params_Data();
  ~ServiceWorker_SetIdleTimerDelayToZero_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorker_SetIdleTimerDelayToZero_Params_Data) == 8,
              "Bad sizeof(ServiceWorker_SetIdleTimerDelayToZero_Params_Data)");

}  // namespace internal
class ServiceWorkerHost_SetCachedMetadata_ParamsDataView {
 public:
  ServiceWorkerHost_SetCachedMetadata_ParamsDataView() {}

  ServiceWorkerHost_SetCachedMetadata_ParamsDataView(
      internal::ServiceWorkerHost_SetCachedMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_SetCachedMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_ClearCachedMetadata_ParamsDataView {
 public:
  ServiceWorkerHost_ClearCachedMetadata_ParamsDataView() {}

  ServiceWorkerHost_ClearCachedMetadata_ParamsDataView(
      internal::ServiceWorkerHost_ClearCachedMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_ClearCachedMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_GetClients_ParamsDataView {
 public:
  ServiceWorkerHost_GetClients_ParamsDataView() {}

  ServiceWorkerHost_GetClients_ParamsDataView(
      internal::ServiceWorkerHost_GetClients_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      ::blink::mojom::ServiceWorkerClientQueryOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientQueryOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_GetClients_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_GetClients_ResponseParamsDataView {
 public:
  ServiceWorkerHost_GetClients_ResponseParamsDataView() {}

  ServiceWorkerHost_GetClients_ResponseParamsDataView(
      internal::ServiceWorkerHost_GetClients_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientsDataView(
      mojo::ArrayDataView<::blink::mojom::ServiceWorkerClientInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClients(UserType* output) {
    auto* pointer = data_->clients.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ServiceWorkerClientInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_GetClients_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_GetClient_ParamsDataView {
 public:
  ServiceWorkerHost_GetClient_ParamsDataView() {}

  ServiceWorkerHost_GetClient_ParamsDataView(
      internal::ServiceWorkerHost_GetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientUuid(UserType* output) {
    auto* pointer = data_->client_uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_GetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_GetClient_ResponseParamsDataView {
 public:
  ServiceWorkerHost_GetClient_ResponseParamsDataView() {}

  ServiceWorkerHost_GetClient_ResponseParamsDataView(
      internal::ServiceWorkerHost_GetClient_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientDataView(
      ::blink::mojom::ServiceWorkerClientInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClient(UserType* output) {
    auto* pointer = data_->client.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_GetClient_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_OpenNewTab_ParamsDataView {
 public:
  ServiceWorkerHost_OpenNewTab_ParamsDataView() {}

  ServiceWorkerHost_OpenNewTab_ParamsDataView(
      internal::ServiceWorkerHost_OpenNewTab_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_OpenNewTab_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_OpenNewTab_ResponseParamsDataView {
 public:
  ServiceWorkerHost_OpenNewTab_ResponseParamsDataView() {}

  ServiceWorkerHost_OpenNewTab_ResponseParamsDataView(
      internal::ServiceWorkerHost_OpenNewTab_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetClientDataView(
      ::blink::mojom::ServiceWorkerClientInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClient(UserType* output) {
    auto* pointer = data_->client.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        pointer, output, context_);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_OpenNewTab_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_OpenPaymentHandlerWindow_ParamsDataView {
 public:
  ServiceWorkerHost_OpenPaymentHandlerWindow_ParamsDataView() {}

  ServiceWorkerHost_OpenPaymentHandlerWindow_ParamsDataView(
      internal::ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParamsDataView {
 public:
  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParamsDataView() {}

  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParamsDataView(
      internal::ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetClientDataView(
      ::blink::mojom::ServiceWorkerClientInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClient(UserType* output) {
    auto* pointer = data_->client.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        pointer, output, context_);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_PostMessageToClient_ParamsDataView {
 public:
  ServiceWorkerHost_PostMessageToClient_ParamsDataView() {}

  ServiceWorkerHost_PostMessageToClient_ParamsDataView(
      internal::ServiceWorkerHost_PostMessageToClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientUuid(UserType* output) {
    auto* pointer = data_->client_uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMessageDataView(
      ::blink::mojom::TransferableMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::TransferableMessageDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_PostMessageToClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_FocusClient_ParamsDataView {
 public:
  ServiceWorkerHost_FocusClient_ParamsDataView() {}

  ServiceWorkerHost_FocusClient_ParamsDataView(
      internal::ServiceWorkerHost_FocusClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientUuid(UserType* output) {
    auto* pointer = data_->client_uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_FocusClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_FocusClient_ResponseParamsDataView {
 public:
  ServiceWorkerHost_FocusClient_ResponseParamsDataView() {}

  ServiceWorkerHost_FocusClient_ResponseParamsDataView(
      internal::ServiceWorkerHost_FocusClient_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientDataView(
      ::blink::mojom::ServiceWorkerClientInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClient(UserType* output) {
    auto* pointer = data_->client.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_FocusClient_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_NavigateClient_ParamsDataView {
 public:
  ServiceWorkerHost_NavigateClient_ParamsDataView() {}

  ServiceWorkerHost_NavigateClient_ParamsDataView(
      internal::ServiceWorkerHost_NavigateClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientUuid(UserType* output) {
    auto* pointer = data_->client_uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_NavigateClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_NavigateClient_ResponseParamsDataView {
 public:
  ServiceWorkerHost_NavigateClient_ResponseParamsDataView() {}

  ServiceWorkerHost_NavigateClient_ResponseParamsDataView(
      internal::ServiceWorkerHost_NavigateClient_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetClientDataView(
      ::blink::mojom::ServiceWorkerClientInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClient(UserType* output) {
    auto* pointer = data_->client.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        pointer, output, context_);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_NavigateClient_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerHost_SkipWaiting_ParamsDataView {
 public:
  ServiceWorkerHost_SkipWaiting_ParamsDataView() {}

  ServiceWorkerHost_SkipWaiting_ParamsDataView(
      internal::ServiceWorkerHost_SkipWaiting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerHost_SkipWaiting_Params_Data* data_ = nullptr;
};

class ServiceWorkerHost_SkipWaiting_ResponseParamsDataView {
 public:
  ServiceWorkerHost_SkipWaiting_ResponseParamsDataView() {}

  ServiceWorkerHost_SkipWaiting_ResponseParamsDataView(
      internal::ServiceWorkerHost_SkipWaiting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::ServiceWorkerHost_SkipWaiting_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorkerHost_ClaimClients_ParamsDataView {
 public:
  ServiceWorkerHost_ClaimClients_ParamsDataView() {}

  ServiceWorkerHost_ClaimClients_ParamsDataView(
      internal::ServiceWorkerHost_ClaimClients_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerHost_ClaimClients_Params_Data* data_ = nullptr;
};

class ServiceWorkerHost_ClaimClients_ResponseParamsDataView {
 public:
  ServiceWorkerHost_ClaimClients_ResponseParamsDataView() {}

  ServiceWorkerHost_ClaimClients_ResponseParamsDataView(
      internal::ServiceWorkerHost_ClaimClients_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerErrorType>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerErrorType error() const {
    return static_cast<::blink::mojom::ServiceWorkerErrorType>(data_->error);
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerHost_ClaimClients_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_InitializeGlobalScope_ParamsDataView {
 public:
  ServiceWorker_InitializeGlobalScope_ParamsDataView() {}

  ServiceWorker_InitializeGlobalScope_ParamsDataView(
      internal::ServiceWorker_InitializeGlobalScope_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeServiceWorkerHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerHostAssociatedPtrInfoDataView>(
            &data_->service_worker_host, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetRegistrationInfoDataView(
      ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistrationInfo(UserType* output) {
    auto* pointer = data_->registration_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFetchHandlerExistence(UserType* output) const {
    auto data_value = data_->fetch_handler_existence;
    return mojo::internal::Deserialize<::blink::mojom::FetchHandlerExistence>(
        data_value, output);
  }

  FetchHandlerExistence fetch_handler_existence() const {
    return static_cast<FetchHandlerExistence>(data_->fetch_handler_existence);
  }
 private:
  internal::ServiceWorker_InitializeGlobalScope_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchInstallEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchInstallEvent_ParamsDataView() {}

  ServiceWorker_DispatchInstallEvent_ParamsDataView(
      internal::ServiceWorker_DispatchInstallEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorker_DispatchInstallEvent_Params_Data* data_ = nullptr;
};

class ServiceWorker_DispatchInstallEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchInstallEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchInstallEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchInstallEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
  bool has_fetch_handler() const {
    return data_->has_fetch_handler;
  }
 private:
  internal::ServiceWorker_DispatchInstallEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchActivateEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchActivateEvent_ParamsDataView() {}

  ServiceWorker_DispatchActivateEvent_ParamsDataView(
      internal::ServiceWorker_DispatchActivateEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorker_DispatchActivateEvent_Params_Data* data_ = nullptr;
};

class ServiceWorker_DispatchActivateEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchActivateEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchActivateEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchActivateEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchActivateEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchBackgroundFetchAbortEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchBackgroundFetchAbortEvent_ParamsDataView() {}

  ServiceWorker_DispatchBackgroundFetchAbortEvent_ParamsDataView(
      internal::ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRegistrationDataView(
      ::blink::mojom::BackgroundFetchRegistrationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorker_DispatchBackgroundFetchAbortEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchBackgroundFetchAbortEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchBackgroundFetchClickEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchBackgroundFetchClickEvent_ParamsDataView() {}

  ServiceWorker_DispatchBackgroundFetchClickEvent_ParamsDataView(
      internal::ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRegistrationDataView(
      ::blink::mojom::BackgroundFetchRegistrationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorker_DispatchBackgroundFetchClickEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchBackgroundFetchClickEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchBackgroundFetchFailEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchBackgroundFetchFailEvent_ParamsDataView() {}

  ServiceWorker_DispatchBackgroundFetchFailEvent_ParamsDataView(
      internal::ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRegistrationDataView(
      ::blink::mojom::BackgroundFetchRegistrationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorker_DispatchBackgroundFetchFailEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchBackgroundFetchFailEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchBackgroundFetchSuccessEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchBackgroundFetchSuccessEvent_ParamsDataView() {}

  ServiceWorker_DispatchBackgroundFetchSuccessEvent_ParamsDataView(
      internal::ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRegistrationDataView(
      ::blink::mojom::BackgroundFetchRegistrationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorker_DispatchBackgroundFetchSuccessEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchBackgroundFetchSuccessEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchCookieChangeEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchCookieChangeEvent_ParamsDataView() {}

  ServiceWorker_DispatchCookieChangeEvent_ParamsDataView(
      internal::ServiceWorker_DispatchCookieChangeEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookieDataView(
      ::network::mojom::CanonicalCookieDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookie(UserType* output) {
    auto* pointer = data_->cookie.Get();
    return mojo::internal::Deserialize<::network::mojom::CanonicalCookieDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCause(UserType* output) const {
    auto data_value = data_->cause;
    return mojo::internal::Deserialize<::network::mojom::CookieChangeCause>(
        data_value, output);
  }

  ::network::mojom::CookieChangeCause cause() const {
    return static_cast<::network::mojom::CookieChangeCause>(data_->cause);
  }
 private:
  internal::ServiceWorker_DispatchCookieChangeEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchCookieChangeEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchCookieChangeEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchCookieChangeEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchCookieChangeEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchFetchEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchFetchEvent_ParamsDataView() {}

  ServiceWorker_DispatchFetchEvent_ParamsDataView(
      internal::ServiceWorker_DispatchFetchEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      ::blink::mojom::DispatchFetchEventParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::blink::mojom::DispatchFetchEventParamsDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeResponseCallback() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerFetchResponseCallbackPtrDataView>(
            &data_->response_callback, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorker_DispatchFetchEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchFetchEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchFetchEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchFetchEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchFetchEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchFetchEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchNotificationClickEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchNotificationClickEvent_ParamsDataView() {}

  ServiceWorker_DispatchNotificationClickEvent_ParamsDataView(
      internal::ServiceWorker_DispatchNotificationClickEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNotificationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationId(UserType* output) {
    auto* pointer = data_->notification_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNotificationDataDataView(
      ::blink::mojom::NotificationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationData(UserType* output) {
    auto* pointer = data_->notification_data.Get();
    return mojo::internal::Deserialize<::blink::mojom::NotificationDataDataView>(
        pointer, output, context_);
  }
  int32_t action_index() const {
    return data_->action_index;
  }
  inline void GetReplyDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReply(UserType* output) {
    auto* pointer = data_->reply.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorker_DispatchNotificationClickEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchNotificationClickEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchNotificationClickEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchNotificationClickEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchNotificationClickEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchNotificationCloseEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchNotificationCloseEvent_ParamsDataView() {}

  ServiceWorker_DispatchNotificationCloseEvent_ParamsDataView(
      internal::ServiceWorker_DispatchNotificationCloseEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNotificationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationId(UserType* output) {
    auto* pointer = data_->notification_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNotificationDataDataView(
      ::blink::mojom::NotificationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationData(UserType* output) {
    auto* pointer = data_->notification_data.Get();
    return mojo::internal::Deserialize<::blink::mojom::NotificationDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorker_DispatchNotificationCloseEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchNotificationCloseEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchNotificationCloseEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchNotificationCloseEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchNotificationCloseEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchPushEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchPushEvent_ParamsDataView() {}

  ServiceWorker_DispatchPushEvent_ParamsDataView(
      internal::ServiceWorker_DispatchPushEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPayloadDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPayload(UserType* output) {
    auto* pointer = data_->payload.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorker_DispatchPushEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchPushEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchPushEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchPushEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchPushEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchPushEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchSyncEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchSyncEvent_ParamsDataView() {}

  ServiceWorker_DispatchSyncEvent_ParamsDataView(
      internal::ServiceWorker_DispatchSyncEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool last_chance() const {
    return data_->last_chance;
  }
  inline void GetTimeoutDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeout(UserType* output) {
    auto* pointer = data_->timeout.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorker_DispatchSyncEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchSyncEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchSyncEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchSyncEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchSyncEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchSyncEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchAbortPaymentEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchAbortPaymentEvent_ParamsDataView() {}

  ServiceWorker_DispatchAbortPaymentEvent_ParamsDataView(
      internal::ServiceWorker_DispatchAbortPaymentEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeResultOfAbortPayment() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::payments::mojom::PaymentHandlerResponseCallbackPtrDataView>(
            &data_->result_of_abort_payment, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorker_DispatchAbortPaymentEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchAbortPaymentEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchAbortPaymentEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchAbortPaymentEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchAbortPaymentEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchCanMakePaymentEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchCanMakePaymentEvent_ParamsDataView() {}

  ServiceWorker_DispatchCanMakePaymentEvent_ParamsDataView(
      internal::ServiceWorker_DispatchCanMakePaymentEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventDataDataView(
      ::payments::mojom::CanMakePaymentEventDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEventData(UserType* output) {
    auto* pointer = data_->event_data.Get();
    return mojo::internal::Deserialize<::payments::mojom::CanMakePaymentEventDataDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeResultOfCanMakePayment() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::payments::mojom::PaymentHandlerResponseCallbackPtrDataView>(
            &data_->result_of_can_make_payment, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorker_DispatchCanMakePaymentEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchCanMakePaymentEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchCanMakePaymentEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchCanMakePaymentEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchCanMakePaymentEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchPaymentRequestEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchPaymentRequestEvent_ParamsDataView() {}

  ServiceWorker_DispatchPaymentRequestEvent_ParamsDataView(
      internal::ServiceWorker_DispatchPaymentRequestEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataDataView(
      ::payments::mojom::PaymentRequestEventDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestData(UserType* output) {
    auto* pointer = data_->request_data.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentRequestEventDataDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeResponseCallback() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::payments::mojom::PaymentHandlerResponseCallbackPtrDataView>(
            &data_->response_callback, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorker_DispatchPaymentRequestEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchPaymentRequestEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchPaymentRequestEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchPaymentRequestEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchPaymentRequestEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchExtendableMessageEvent_ParamsDataView {
 public:
  ServiceWorker_DispatchExtendableMessageEvent_ParamsDataView() {}

  ServiceWorker_DispatchExtendableMessageEvent_ParamsDataView(
      internal::ServiceWorker_DispatchExtendableMessageEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventDataView(
      ExtendableMessageEventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::blink::mojom::ExtendableMessageEventDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorker_DispatchExtendableMessageEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchExtendableMessageEvent_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchExtendableMessageEvent_ResponseParamsDataView() {}

  ServiceWorker_DispatchExtendableMessageEvent_ResponseParamsDataView(
      internal::ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchExtendableMessageEvent_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ParamsDataView {
 public:
  ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ParamsDataView() {}

  ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ParamsDataView(
      internal::ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventDataView(
      ExtendableMessageEventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::blink::mojom::ExtendableMessageEventDataView>(
        pointer, output, context_);
  }
  inline void GetTimeoutDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeout(UserType* output) {
    auto* pointer = data_->timeout.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParamsDataView {
 public:
  ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParamsDataView() {}

  ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParamsDataView(
      internal::ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_Ping_ParamsDataView {
 public:
  ServiceWorker_Ping_ParamsDataView() {}

  ServiceWorker_Ping_ParamsDataView(
      internal::ServiceWorker_Ping_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorker_Ping_Params_Data* data_ = nullptr;
};

class ServiceWorker_Ping_ResponseParamsDataView {
 public:
  ServiceWorker_Ping_ResponseParamsDataView() {}

  ServiceWorker_Ping_ResponseParamsDataView(
      internal::ServiceWorker_Ping_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorker_Ping_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorker_SetIdleTimerDelayToZero_ParamsDataView {
 public:
  ServiceWorker_SetIdleTimerDelayToZero_ParamsDataView() {}

  ServiceWorker_SetIdleTimerDelayToZero_ParamsDataView(
      internal::ServiceWorker_SetIdleTimerDelayToZero_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorker_SetIdleTimerDelayToZero_Params_Data* data_ = nullptr;
};


inline void ServiceWorkerHost_SetCachedMetadata_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ServiceWorkerHost_SetCachedMetadata_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void ServiceWorkerHost_ClearCachedMetadata_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ServiceWorkerHost_GetClients_ParamsDataView::GetOptionsDataView(
    ::blink::mojom::ServiceWorkerClientQueryOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = ::blink::mojom::ServiceWorkerClientQueryOptionsDataView(pointer, context_);
}


inline void ServiceWorkerHost_GetClients_ResponseParamsDataView::GetClientsDataView(
    mojo::ArrayDataView<::blink::mojom::ServiceWorkerClientInfoDataView>* output) {
  auto pointer = data_->clients.Get();
  *output = mojo::ArrayDataView<::blink::mojom::ServiceWorkerClientInfoDataView>(pointer, context_);
}


inline void ServiceWorkerHost_GetClient_ParamsDataView::GetClientUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorkerHost_GetClient_ResponseParamsDataView::GetClientDataView(
    ::blink::mojom::ServiceWorkerClientInfoDataView* output) {
  auto pointer = data_->client.Get();
  *output = ::blink::mojom::ServiceWorkerClientInfoDataView(pointer, context_);
}


inline void ServiceWorkerHost_OpenNewTab_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ServiceWorkerHost_OpenNewTab_ResponseParamsDataView::GetClientDataView(
    ::blink::mojom::ServiceWorkerClientInfoDataView* output) {
  auto pointer = data_->client.Get();
  *output = ::blink::mojom::ServiceWorkerClientInfoDataView(pointer, context_);
}
inline void ServiceWorkerHost_OpenNewTab_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorkerHost_OpenPaymentHandlerWindow_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParamsDataView::GetClientDataView(
    ::blink::mojom::ServiceWorkerClientInfoDataView* output) {
  auto pointer = data_->client.Get();
  *output = ::blink::mojom::ServiceWorkerClientInfoDataView(pointer, context_);
}
inline void ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorkerHost_PostMessageToClient_ParamsDataView::GetClientUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerHost_PostMessageToClient_ParamsDataView::GetMessageDataView(
    ::blink::mojom::TransferableMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::blink::mojom::TransferableMessageDataView(pointer, context_);
}


inline void ServiceWorkerHost_FocusClient_ParamsDataView::GetClientUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorkerHost_FocusClient_ResponseParamsDataView::GetClientDataView(
    ::blink::mojom::ServiceWorkerClientInfoDataView* output) {
  auto pointer = data_->client.Get();
  *output = ::blink::mojom::ServiceWorkerClientInfoDataView(pointer, context_);
}


inline void ServiceWorkerHost_NavigateClient_ParamsDataView::GetClientUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerHost_NavigateClient_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ServiceWorkerHost_NavigateClient_ResponseParamsDataView::GetClientDataView(
    ::blink::mojom::ServiceWorkerClientInfoDataView* output) {
  auto pointer = data_->client.Get();
  *output = ::blink::mojom::ServiceWorkerClientInfoDataView(pointer, context_);
}
inline void ServiceWorkerHost_NavigateClient_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}








inline void ServiceWorkerHost_ClaimClients_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorker_InitializeGlobalScope_ParamsDataView::GetRegistrationInfoDataView(
    ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output) {
  auto pointer = data_->registration_info.Get();
  *output = ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView(pointer, context_);
}










inline void ServiceWorker_DispatchBackgroundFetchAbortEvent_ParamsDataView::GetRegistrationDataView(
    ::blink::mojom::BackgroundFetchRegistrationDataView* output) {
  auto pointer = data_->registration.Get();
  *output = ::blink::mojom::BackgroundFetchRegistrationDataView(pointer, context_);
}




inline void ServiceWorker_DispatchBackgroundFetchClickEvent_ParamsDataView::GetRegistrationDataView(
    ::blink::mojom::BackgroundFetchRegistrationDataView* output) {
  auto pointer = data_->registration.Get();
  *output = ::blink::mojom::BackgroundFetchRegistrationDataView(pointer, context_);
}




inline void ServiceWorker_DispatchBackgroundFetchFailEvent_ParamsDataView::GetRegistrationDataView(
    ::blink::mojom::BackgroundFetchRegistrationDataView* output) {
  auto pointer = data_->registration.Get();
  *output = ::blink::mojom::BackgroundFetchRegistrationDataView(pointer, context_);
}




inline void ServiceWorker_DispatchBackgroundFetchSuccessEvent_ParamsDataView::GetRegistrationDataView(
    ::blink::mojom::BackgroundFetchRegistrationDataView* output) {
  auto pointer = data_->registration.Get();
  *output = ::blink::mojom::BackgroundFetchRegistrationDataView(pointer, context_);
}




inline void ServiceWorker_DispatchCookieChangeEvent_ParamsDataView::GetCookieDataView(
    ::network::mojom::CanonicalCookieDataView* output) {
  auto pointer = data_->cookie.Get();
  *output = ::network::mojom::CanonicalCookieDataView(pointer, context_);
}




inline void ServiceWorker_DispatchFetchEvent_ParamsDataView::GetParamsDataView(
    ::blink::mojom::DispatchFetchEventParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::blink::mojom::DispatchFetchEventParamsDataView(pointer, context_);
}




inline void ServiceWorker_DispatchNotificationClickEvent_ParamsDataView::GetNotificationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->notification_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorker_DispatchNotificationClickEvent_ParamsDataView::GetNotificationDataDataView(
    ::blink::mojom::NotificationDataDataView* output) {
  auto pointer = data_->notification_data.Get();
  *output = ::blink::mojom::NotificationDataDataView(pointer, context_);
}
inline void ServiceWorker_DispatchNotificationClickEvent_ParamsDataView::GetReplyDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->reply.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void ServiceWorker_DispatchNotificationCloseEvent_ParamsDataView::GetNotificationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->notification_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorker_DispatchNotificationCloseEvent_ParamsDataView::GetNotificationDataDataView(
    ::blink::mojom::NotificationDataDataView* output) {
  auto pointer = data_->notification_data.Get();
  *output = ::blink::mojom::NotificationDataDataView(pointer, context_);
}




inline void ServiceWorker_DispatchPushEvent_ParamsDataView::GetPayloadDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->payload.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void ServiceWorker_DispatchSyncEvent_ParamsDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorker_DispatchSyncEvent_ParamsDataView::GetTimeoutDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timeout.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}








inline void ServiceWorker_DispatchCanMakePaymentEvent_ParamsDataView::GetEventDataDataView(
    ::payments::mojom::CanMakePaymentEventDataDataView* output) {
  auto pointer = data_->event_data.Get();
  *output = ::payments::mojom::CanMakePaymentEventDataDataView(pointer, context_);
}




inline void ServiceWorker_DispatchPaymentRequestEvent_ParamsDataView::GetRequestDataDataView(
    ::payments::mojom::PaymentRequestEventDataDataView* output) {
  auto pointer = data_->request_data.Get();
  *output = ::payments::mojom::PaymentRequestEventDataDataView(pointer, context_);
}




inline void ServiceWorker_DispatchExtendableMessageEvent_ParamsDataView::GetEventDataView(
    ExtendableMessageEventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ExtendableMessageEventDataView(pointer, context_);
}




inline void ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ParamsDataView::GetEventDataView(
    ExtendableMessageEventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ExtendableMessageEventDataView(pointer, context_);
}
inline void ServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_ParamsDataView::GetTimeoutDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timeout.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}









}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_PARAMS_DATA_H_