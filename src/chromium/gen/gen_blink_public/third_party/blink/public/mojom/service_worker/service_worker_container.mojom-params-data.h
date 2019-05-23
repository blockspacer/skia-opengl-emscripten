// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_Register_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_Register_Params_Data));
      new (data()) ServiceWorkerContainerHost_Register_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_Register_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_Register_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_Register_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> script_url;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerRegistrationOptions_Data> options;

 private:
  ServiceWorkerContainerHost_Register_Params_Data();
  ~ServiceWorkerContainerHost_Register_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_Register_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerContainerHost_Register_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_Register_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_Register_ResponseParams_Data));
      new (data()) ServiceWorkerContainerHost_Register_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_Register_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_Register_ResponseParams_Data>(index_);
    }
    ServiceWorkerContainerHost_Register_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data> registration;

 private:
  ServiceWorkerContainerHost_Register_ResponseParams_Data();
  ~ServiceWorkerContainerHost_Register_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_Register_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerContainerHost_Register_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_GetRegistration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_GetRegistration_Params_Data));
      new (data()) ServiceWorkerContainerHost_GetRegistration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_GetRegistration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_GetRegistration_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_GetRegistration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> client_url;

 private:
  ServiceWorkerContainerHost_GetRegistration_Params_Data();
  ~ServiceWorkerContainerHost_GetRegistration_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_GetRegistration_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerContainerHost_GetRegistration_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data));
      new (data()) ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data>(index_);
    }
    ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data> registration;

 private:
  ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data();
  ~ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_GetRegistrations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_GetRegistrations_Params_Data));
      new (data()) ServiceWorkerContainerHost_GetRegistrations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_GetRegistrations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_GetRegistrations_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_GetRegistrations_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerContainerHost_GetRegistrations_Params_Data();
  ~ServiceWorkerContainerHost_GetRegistrations_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_GetRegistrations_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerContainerHost_GetRegistrations_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data));
      new (data()) ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data>(index_);
    }
    ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data>>> infos;

 private:
  ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data();
  ~ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data));
      new (data()) ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data();
  ~ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data));
      new (data()) ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data>(index_);
    }
    ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data> registration;

 private:
  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data();
  ~ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data) == 16,
              "Bad sizeof(ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data));
      new (data()) ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data controller;
  int32_t purpose;

 private:
  ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data();
  ~ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_CloneContainerHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_CloneContainerHost_Params_Data));
      new (data()) ServiceWorkerContainerHost_CloneContainerHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_CloneContainerHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_CloneContainerHost_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_CloneContainerHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data container_host;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerContainerHost_CloneContainerHost_Params_Data();
  ~ServiceWorkerContainerHost_CloneContainerHost_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_CloneContainerHost_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerContainerHost_CloneContainerHost_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_Ping_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_Ping_Params_Data));
      new (data()) ServiceWorkerContainerHost_Ping_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_Ping_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_Ping_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_Ping_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerContainerHost_Ping_Params_Data();
  ~ServiceWorkerContainerHost_Ping_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_Ping_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerContainerHost_Ping_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_Ping_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_Ping_ResponseParams_Data));
      new (data()) ServiceWorkerContainerHost_Ping_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_Ping_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_Ping_ResponseParams_Data>(index_);
    }
    ServiceWorkerContainerHost_Ping_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerContainerHost_Ping_ResponseParams_Data();
  ~ServiceWorkerContainerHost_Ping_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_Ping_ResponseParams_Data) == 8,
              "Bad sizeof(ServiceWorkerContainerHost_Ping_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data));
      new (data()) ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data();
  ~ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainerHost_OnExecutionReady_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainerHost_OnExecutionReady_Params_Data));
      new (data()) ServiceWorkerContainerHost_OnExecutionReady_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainerHost_OnExecutionReady_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainerHost_OnExecutionReady_Params_Data>(index_);
    }
    ServiceWorkerContainerHost_OnExecutionReady_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerContainerHost_OnExecutionReady_Params_Data();
  ~ServiceWorkerContainerHost_OnExecutionReady_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainerHost_OnExecutionReady_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerContainerHost_OnExecutionReady_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainer_SetController_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainer_SetController_Params_Data));
      new (data()) ServiceWorkerContainer_SetController_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainer_SetController_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainer_SetController_Params_Data>(index_);
    }
    ServiceWorkerContainer_SetController_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::ControllerServiceWorkerInfo_Data> controller_info;
  uint8_t should_notify_controllerchange : 1;
  uint8_t padfinal_[7];

 private:
  ServiceWorkerContainer_SetController_Params_Data();
  ~ServiceWorkerContainer_SetController_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainer_SetController_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerContainer_SetController_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainer_PostMessageToClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainer_PostMessageToClient_Params_Data));
      new (data()) ServiceWorkerContainer_PostMessageToClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainer_PostMessageToClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainer_PostMessageToClient_Params_Data>(index_);
    }
    ServiceWorkerContainer_PostMessageToClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> source;
  mojo::internal::Pointer<::blink::mojom::internal::TransferableMessage_Data> message;

 private:
  ServiceWorkerContainer_PostMessageToClient_Params_Data();
  ~ServiceWorkerContainer_PostMessageToClient_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainer_PostMessageToClient_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerContainer_PostMessageToClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerContainer_CountFeature_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerContainer_CountFeature_Params_Data));
      new (data()) ServiceWorkerContainer_CountFeature_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerContainer_CountFeature_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerContainer_CountFeature_Params_Data>(index_);
    }
    ServiceWorkerContainer_CountFeature_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t feature;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerContainer_CountFeature_Params_Data();
  ~ServiceWorkerContainer_CountFeature_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerContainer_CountFeature_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerContainer_CountFeature_Params_Data)");

}  // namespace internal
class ServiceWorkerContainerHost_Register_ParamsDataView {
 public:
  ServiceWorkerContainerHost_Register_ParamsDataView() {}

  ServiceWorkerContainerHost_Register_ParamsDataView(
      internal::ServiceWorkerContainerHost_Register_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetScriptUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScriptUrl(UserType* output) {
    auto* pointer = data_->script_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      ::blink::mojom::ServiceWorkerRegistrationOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerContainerHost_Register_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_Register_ResponseParamsDataView {
 public:
  ServiceWorkerContainerHost_Register_ResponseParamsDataView() {}

  ServiceWorkerContainerHost_Register_ResponseParamsDataView(
      internal::ServiceWorkerContainerHost_Register_ResponseParams_Data* data,
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
  inline void GetRegistrationDataView(
      ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerContainerHost_Register_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_GetRegistration_ParamsDataView {
 public:
  ServiceWorkerContainerHost_GetRegistration_ParamsDataView() {}

  ServiceWorkerContainerHost_GetRegistration_ParamsDataView(
      internal::ServiceWorkerContainerHost_GetRegistration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientUrl(UserType* output) {
    auto* pointer = data_->client_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerContainerHost_GetRegistration_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_GetRegistration_ResponseParamsDataView {
 public:
  ServiceWorkerContainerHost_GetRegistration_ResponseParamsDataView() {}

  ServiceWorkerContainerHost_GetRegistration_ResponseParamsDataView(
      internal::ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data* data,
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
  inline void GetRegistrationDataView(
      ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerContainerHost_GetRegistration_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_GetRegistrations_ParamsDataView {
 public:
  ServiceWorkerContainerHost_GetRegistrations_ParamsDataView() {}

  ServiceWorkerContainerHost_GetRegistrations_ParamsDataView(
      internal::ServiceWorkerContainerHost_GetRegistrations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerContainerHost_GetRegistrations_Params_Data* data_ = nullptr;
};

class ServiceWorkerContainerHost_GetRegistrations_ResponseParamsDataView {
 public:
  ServiceWorkerContainerHost_GetRegistrations_ResponseParamsDataView() {}

  ServiceWorkerContainerHost_GetRegistrations_ResponseParamsDataView(
      internal::ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data* data,
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
  inline void GetInfosDataView(
      mojo::ArrayDataView<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfos(UserType* output) {
    auto* pointer = data_->infos.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerContainerHost_GetRegistrations_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_GetRegistrationForReady_ParamsDataView {
 public:
  ServiceWorkerContainerHost_GetRegistrationForReady_ParamsDataView() {}

  ServiceWorkerContainerHost_GetRegistrationForReady_ParamsDataView(
      internal::ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerContainerHost_GetRegistrationForReady_Params_Data* data_ = nullptr;
};

class ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParamsDataView {
 public:
  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParamsDataView() {}

  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParamsDataView(
      internal::ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRegistrationDataView(
      ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_EnsureControllerServiceWorker_ParamsDataView {
 public:
  ServiceWorkerContainerHost_EnsureControllerServiceWorker_ParamsDataView() {}

  ServiceWorkerContainerHost_EnsureControllerServiceWorker_ParamsDataView(
      internal::ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeController() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ControllerServiceWorkerRequestDataView>(
            &data_->controller, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPurpose(UserType* output) const {
    auto data_value = data_->purpose;
    return mojo::internal::Deserialize<::blink::mojom::ControllerServiceWorkerPurpose>(
        data_value, output);
  }

  ControllerServiceWorkerPurpose purpose() const {
    return static_cast<ControllerServiceWorkerPurpose>(data_->purpose);
  }
 private:
  internal::ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_CloneContainerHost_ParamsDataView {
 public:
  ServiceWorkerContainerHost_CloneContainerHost_ParamsDataView() {}

  ServiceWorkerContainerHost_CloneContainerHost_ParamsDataView(
      internal::ServiceWorkerContainerHost_CloneContainerHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeContainerHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerContainerHostRequestDataView>(
            &data_->container_host, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerContainerHost_CloneContainerHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainerHost_Ping_ParamsDataView {
 public:
  ServiceWorkerContainerHost_Ping_ParamsDataView() {}

  ServiceWorkerContainerHost_Ping_ParamsDataView(
      internal::ServiceWorkerContainerHost_Ping_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerContainerHost_Ping_Params_Data* data_ = nullptr;
};

class ServiceWorkerContainerHost_Ping_ResponseParamsDataView {
 public:
  ServiceWorkerContainerHost_Ping_ResponseParamsDataView() {}

  ServiceWorkerContainerHost_Ping_ResponseParamsDataView(
      internal::ServiceWorkerContainerHost_Ping_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerContainerHost_Ping_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorkerContainerHost_HintToUpdateServiceWorker_ParamsDataView {
 public:
  ServiceWorkerContainerHost_HintToUpdateServiceWorker_ParamsDataView() {}

  ServiceWorkerContainerHost_HintToUpdateServiceWorker_ParamsDataView(
      internal::ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerContainerHost_HintToUpdateServiceWorker_Params_Data* data_ = nullptr;
};

class ServiceWorkerContainerHost_OnExecutionReady_ParamsDataView {
 public:
  ServiceWorkerContainerHost_OnExecutionReady_ParamsDataView() {}

  ServiceWorkerContainerHost_OnExecutionReady_ParamsDataView(
      internal::ServiceWorkerContainerHost_OnExecutionReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerContainerHost_OnExecutionReady_Params_Data* data_ = nullptr;
};

class ServiceWorkerContainer_SetController_ParamsDataView {
 public:
  ServiceWorkerContainer_SetController_ParamsDataView() {}

  ServiceWorkerContainer_SetController_ParamsDataView(
      internal::ServiceWorkerContainer_SetController_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetControllerInfoDataView(
      ::blink::mojom::ControllerServiceWorkerInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadControllerInfo(UserType* output) {
    auto* pointer = data_->controller_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ControllerServiceWorkerInfoDataView>(
        pointer, output, context_);
  }
  bool should_notify_controllerchange() const {
    return data_->should_notify_controllerchange;
  }
 private:
  internal::ServiceWorkerContainer_SetController_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainer_PostMessageToClient_ParamsDataView {
 public:
  ServiceWorkerContainer_PostMessageToClient_ParamsDataView() {}

  ServiceWorkerContainer_PostMessageToClient_ParamsDataView(
      internal::ServiceWorkerContainer_PostMessageToClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
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
  internal::ServiceWorkerContainer_PostMessageToClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerContainer_CountFeature_ParamsDataView {
 public:
  ServiceWorkerContainer_CountFeature_ParamsDataView() {}

  ServiceWorkerContainer_CountFeature_ParamsDataView(
      internal::ServiceWorkerContainer_CountFeature_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeature(UserType* output) const {
    auto data_value = data_->feature;
    return mojo::internal::Deserialize<::blink::mojom::WebFeature>(
        data_value, output);
  }

  ::blink::mojom::WebFeature feature() const {
    return static_cast<::blink::mojom::WebFeature>(data_->feature);
  }
 private:
  internal::ServiceWorkerContainer_CountFeature_Params_Data* data_ = nullptr;
};


inline void ServiceWorkerContainerHost_Register_ParamsDataView::GetScriptUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->script_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ServiceWorkerContainerHost_Register_ParamsDataView::GetOptionsDataView(
    ::blink::mojom::ServiceWorkerRegistrationOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = ::blink::mojom::ServiceWorkerRegistrationOptionsDataView(pointer, context_);
}


inline void ServiceWorkerContainerHost_Register_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerContainerHost_Register_ResponseParamsDataView::GetRegistrationDataView(
    ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output) {
  auto pointer = data_->registration.Get();
  *output = ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView(pointer, context_);
}


inline void ServiceWorkerContainerHost_GetRegistration_ParamsDataView::GetClientUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->client_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ServiceWorkerContainerHost_GetRegistration_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerContainerHost_GetRegistration_ResponseParamsDataView::GetRegistrationDataView(
    ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output) {
  auto pointer = data_->registration.Get();
  *output = ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView(pointer, context_);
}




inline void ServiceWorkerContainerHost_GetRegistrations_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerContainerHost_GetRegistrations_ResponseParamsDataView::GetInfosDataView(
    mojo::ArrayDataView<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>* output) {
  auto pointer = data_->infos.Get();
  *output = mojo::ArrayDataView<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(pointer, context_);
}




inline void ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParamsDataView::GetRegistrationDataView(
    ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output) {
  auto pointer = data_->registration.Get();
  *output = ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView(pointer, context_);
}














inline void ServiceWorkerContainer_SetController_ParamsDataView::GetControllerInfoDataView(
    ::blink::mojom::ControllerServiceWorkerInfoDataView* output) {
  auto pointer = data_->controller_info.Get();
  *output = ::blink::mojom::ControllerServiceWorkerInfoDataView(pointer, context_);
}


inline void ServiceWorkerContainer_PostMessageToClient_ParamsDataView::GetSourceDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->source.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}
inline void ServiceWorkerContainer_PostMessageToClient_ParamsDataView::GetMessageDataView(
    ::blink::mojom::TransferableMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::blink::mojom::TransferableMessageDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_PARAMS_DATA_H_