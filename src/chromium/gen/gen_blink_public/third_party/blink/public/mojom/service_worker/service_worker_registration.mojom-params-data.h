// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_Update_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_Update_Params_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_Update_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_Update_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_Update_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_Update_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerRegistrationObjectHost_Update_Params_Data();
  ~ServiceWorkerRegistrationObjectHost_Update_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_Update_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_Update_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data* operator->() { return data(); }

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
  ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data();
  ~ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_Unregister_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_Unregister_Params_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_Unregister_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_Unregister_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_Unregister_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_Unregister_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerRegistrationObjectHost_Unregister_Params_Data();
  ~ServiceWorkerRegistrationObjectHost_Unregister_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_Unregister_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_Unregister_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data* operator->() { return data(); }

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
  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data();
  ~ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enable : 1;
  uint8_t padfinal_[7];

 private:
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data();
  ~ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data* operator->() { return data(); }

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
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data();
  ~ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data();
  ~ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::blink::mojom::internal::NavigationPreloadState_Data> state;

 private:
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data();
  ~ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data) == 32,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> value;

 private:
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data();
  ~ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data));
      new (data()) ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data>(index_);
    }
    ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data* operator->() { return data(); }

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
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data();
  ~ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data) == 24,
              "Bad sizeof(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data));
      new (data()) ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ChangedServiceWorkerObjectsMask_Data> changed_mask;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> installing;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> waiting;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> active;

 private:
  ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data();
  ~ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data) == 40,
              "Bad sizeof(ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data));
      new (data()) ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t update_via_cache;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data();
  ~ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerRegistrationObject_UpdateFound_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerRegistrationObject_UpdateFound_Params_Data));
      new (data()) ServiceWorkerRegistrationObject_UpdateFound_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerRegistrationObject_UpdateFound_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerRegistrationObject_UpdateFound_Params_Data>(index_);
    }
    ServiceWorkerRegistrationObject_UpdateFound_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerRegistrationObject_UpdateFound_Params_Data();
  ~ServiceWorkerRegistrationObject_UpdateFound_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerRegistrationObject_UpdateFound_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerRegistrationObject_UpdateFound_Params_Data)");

}  // namespace internal
class ServiceWorkerRegistrationObjectHost_Update_ParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_Update_ParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_Update_ParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_Update_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerRegistrationObjectHost_Update_Params_Data* data_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_Update_ResponseParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_Update_ResponseParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_Update_ResponseParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data* data,
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
  internal::ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_Unregister_ParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_Unregister_ParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_Unregister_ParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_Unregister_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerRegistrationObjectHost_Unregister_Params_Data* data_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_Unregister_ResponseParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data* data,
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
  internal::ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enable() const {
    return data_->enable;
  }
 private:
  internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data* data_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data* data,
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
  internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data* data_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data* data,
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
  inline void GetStateDataView(
      ::blink::mojom::NavigationPreloadStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::blink::mojom::NavigationPreloadStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParamsDataView {
 public:
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParamsDataView() {}

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParamsDataView(
      internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data* data,
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
  internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObject_SetServiceWorkerObjects_ParamsDataView {
 public:
  ServiceWorkerRegistrationObject_SetServiceWorkerObjects_ParamsDataView() {}

  ServiceWorkerRegistrationObject_SetServiceWorkerObjects_ParamsDataView(
      internal::ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetChangedMaskDataView(
      ChangedServiceWorkerObjectsMaskDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChangedMask(UserType* output) {
    auto* pointer = data_->changed_mask.Get();
    return mojo::internal::Deserialize<::blink::mojom::ChangedServiceWorkerObjectsMaskDataView>(
        pointer, output, context_);
  }
  inline void GetInstallingDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstalling(UserType* output) {
    auto* pointer = data_->installing.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
  inline void GetWaitingDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWaiting(UserType* output) {
    auto* pointer = data_->waiting.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
  inline void GetActiveDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadActive(UserType* output) {
    auto* pointer = data_->active.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerRegistrationObject_SetServiceWorkerObjects_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObject_SetUpdateViaCache_ParamsDataView {
 public:
  ServiceWorkerRegistrationObject_SetUpdateViaCache_ParamsDataView() {}

  ServiceWorkerRegistrationObject_SetUpdateViaCache_ParamsDataView(
      internal::ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateViaCache(UserType* output) const {
    auto data_value = data_->update_via_cache;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerUpdateViaCache>(
        data_value, output);
  }

  ServiceWorkerUpdateViaCache update_via_cache() const {
    return static_cast<ServiceWorkerUpdateViaCache>(data_->update_via_cache);
  }
 private:
  internal::ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data* data_ = nullptr;
};

class ServiceWorkerRegistrationObject_UpdateFound_ParamsDataView {
 public:
  ServiceWorkerRegistrationObject_UpdateFound_ParamsDataView() {}

  ServiceWorkerRegistrationObject_UpdateFound_ParamsDataView(
      internal::ServiceWorkerRegistrationObject_UpdateFound_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerRegistrationObject_UpdateFound_Params_Data* data_ = nullptr;
};




inline void ServiceWorkerRegistrationObjectHost_Update_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void ServiceWorkerRegistrationObjectHost_Unregister_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParamsDataView::GetStateDataView(
    ::blink::mojom::NavigationPreloadStateDataView* output) {
  auto pointer = data_->state.Get();
  *output = ::blink::mojom::NavigationPreloadStateDataView(pointer, context_);
}


inline void ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ParamsDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorkerRegistrationObject_SetServiceWorkerObjects_ParamsDataView::GetChangedMaskDataView(
    ChangedServiceWorkerObjectsMaskDataView* output) {
  auto pointer = data_->changed_mask.Get();
  *output = ChangedServiceWorkerObjectsMaskDataView(pointer, context_);
}
inline void ServiceWorkerRegistrationObject_SetServiceWorkerObjects_ParamsDataView::GetInstallingDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->installing.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}
inline void ServiceWorkerRegistrationObject_SetServiceWorkerObjects_ParamsDataView::GetWaitingDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->waiting.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}
inline void ServiceWorkerRegistrationObject_SetServiceWorkerObjects_ParamsDataView::GetActiveDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->active.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_PARAMS_DATA_H_