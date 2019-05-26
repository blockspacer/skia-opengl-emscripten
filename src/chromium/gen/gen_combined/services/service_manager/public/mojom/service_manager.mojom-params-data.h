// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_PARAMS_DATA_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_PARAMS_DATA_H_

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
namespace service_manager {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManagerListener_OnInit_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManagerListener_OnInit_Params_Data));
      new (data()) ServiceManagerListener_OnInit_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManagerListener_OnInit_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManagerListener_OnInit_Params_Data>(index_);
    }
    ServiceManagerListener_OnInit_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::RunningServiceInfo_Data>>> running_services;

 private:
  ServiceManagerListener_OnInit_Params_Data();
  ~ServiceManagerListener_OnInit_Params_Data() = delete;
};
static_assert(sizeof(ServiceManagerListener_OnInit_Params_Data) == 16,
              "Bad sizeof(ServiceManagerListener_OnInit_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManagerListener_OnServiceCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManagerListener_OnServiceCreated_Params_Data));
      new (data()) ServiceManagerListener_OnServiceCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManagerListener_OnServiceCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManagerListener_OnServiceCreated_Params_Data>(index_);
    }
    ServiceManagerListener_OnServiceCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::RunningServiceInfo_Data> service;

 private:
  ServiceManagerListener_OnServiceCreated_Params_Data();
  ~ServiceManagerListener_OnServiceCreated_Params_Data() = delete;
};
static_assert(sizeof(ServiceManagerListener_OnServiceCreated_Params_Data) == 16,
              "Bad sizeof(ServiceManagerListener_OnServiceCreated_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManagerListener_OnServiceStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManagerListener_OnServiceStarted_Params_Data));
      new (data()) ServiceManagerListener_OnServiceStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManagerListener_OnServiceStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManagerListener_OnServiceStarted_Params_Data>(index_);
    }
    ServiceManagerListener_OnServiceStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::service_manager::mojom::internal::Identity_Data> identity;
  uint32_t pid_deprecated;
  uint8_t padfinal_[4];

 private:
  ServiceManagerListener_OnServiceStarted_Params_Data();
  ~ServiceManagerListener_OnServiceStarted_Params_Data() = delete;
};
static_assert(sizeof(ServiceManagerListener_OnServiceStarted_Params_Data) == 24,
              "Bad sizeof(ServiceManagerListener_OnServiceStarted_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManagerListener_OnServicePIDReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManagerListener_OnServicePIDReceived_Params_Data));
      new (data()) ServiceManagerListener_OnServicePIDReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManagerListener_OnServicePIDReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManagerListener_OnServicePIDReceived_Params_Data>(index_);
    }
    ServiceManagerListener_OnServicePIDReceived_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::service_manager::mojom::internal::Identity_Data> identity;
  uint32_t pid;
  uint8_t padfinal_[4];

 private:
  ServiceManagerListener_OnServicePIDReceived_Params_Data();
  ~ServiceManagerListener_OnServicePIDReceived_Params_Data() = delete;
};
static_assert(sizeof(ServiceManagerListener_OnServicePIDReceived_Params_Data) == 24,
              "Bad sizeof(ServiceManagerListener_OnServicePIDReceived_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManagerListener_OnServiceFailedToStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManagerListener_OnServiceFailedToStart_Params_Data));
      new (data()) ServiceManagerListener_OnServiceFailedToStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManagerListener_OnServiceFailedToStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManagerListener_OnServiceFailedToStart_Params_Data>(index_);
    }
    ServiceManagerListener_OnServiceFailedToStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::service_manager::mojom::internal::Identity_Data> identity;

 private:
  ServiceManagerListener_OnServiceFailedToStart_Params_Data();
  ~ServiceManagerListener_OnServiceFailedToStart_Params_Data() = delete;
};
static_assert(sizeof(ServiceManagerListener_OnServiceFailedToStart_Params_Data) == 16,
              "Bad sizeof(ServiceManagerListener_OnServiceFailedToStart_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManagerListener_OnServiceStopped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManagerListener_OnServiceStopped_Params_Data));
      new (data()) ServiceManagerListener_OnServiceStopped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManagerListener_OnServiceStopped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManagerListener_OnServiceStopped_Params_Data>(index_);
    }
    ServiceManagerListener_OnServiceStopped_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::service_manager::mojom::internal::Identity_Data> identity;

 private:
  ServiceManagerListener_OnServiceStopped_Params_Data();
  ~ServiceManagerListener_OnServiceStopped_Params_Data() = delete;
};
static_assert(sizeof(ServiceManagerListener_OnServiceStopped_Params_Data) == 16,
              "Bad sizeof(ServiceManagerListener_OnServiceStopped_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ServiceManager_AddListener_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceManager_AddListener_Params_Data));
      new (data()) ServiceManager_AddListener_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceManager_AddListener_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceManager_AddListener_Params_Data>(index_);
    }
    ServiceManager_AddListener_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data listener;

 private:
  ServiceManager_AddListener_Params_Data();
  ~ServiceManager_AddListener_Params_Data() = delete;
};
static_assert(sizeof(ServiceManager_AddListener_Params_Data) == 16,
              "Bad sizeof(ServiceManager_AddListener_Params_Data)");

}  // namespace internal
class ServiceManagerListener_OnInit_ParamsDataView {
 public:
  ServiceManagerListener_OnInit_ParamsDataView() {}

  ServiceManagerListener_OnInit_ParamsDataView(
      internal::ServiceManagerListener_OnInit_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRunningServicesDataView(
      mojo::ArrayDataView<RunningServiceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRunningServices(UserType* output) {
    auto* pointer = data_->running_services.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::service_manager::mojom::RunningServiceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ServiceManagerListener_OnInit_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceManagerListener_OnServiceCreated_ParamsDataView {
 public:
  ServiceManagerListener_OnServiceCreated_ParamsDataView() {}

  ServiceManagerListener_OnServiceCreated_ParamsDataView(
      internal::ServiceManagerListener_OnServiceCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceDataView(
      RunningServiceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadService(UserType* output) {
    auto* pointer = data_->service.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::RunningServiceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceManagerListener_OnServiceCreated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceManagerListener_OnServiceStarted_ParamsDataView {
 public:
  ServiceManagerListener_OnServiceStarted_ParamsDataView() {}

  ServiceManagerListener_OnServiceStarted_ParamsDataView(
      internal::ServiceManagerListener_OnServiceStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdentityDataView(
      ::service_manager::mojom::IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
  uint32_t pid_deprecated() const {
    return data_->pid_deprecated;
  }
 private:
  internal::ServiceManagerListener_OnServiceStarted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceManagerListener_OnServicePIDReceived_ParamsDataView {
 public:
  ServiceManagerListener_OnServicePIDReceived_ParamsDataView() {}

  ServiceManagerListener_OnServicePIDReceived_ParamsDataView(
      internal::ServiceManagerListener_OnServicePIDReceived_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdentityDataView(
      ::service_manager::mojom::IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
  uint32_t pid() const {
    return data_->pid;
  }
 private:
  internal::ServiceManagerListener_OnServicePIDReceived_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceManagerListener_OnServiceFailedToStart_ParamsDataView {
 public:
  ServiceManagerListener_OnServiceFailedToStart_ParamsDataView() {}

  ServiceManagerListener_OnServiceFailedToStart_ParamsDataView(
      internal::ServiceManagerListener_OnServiceFailedToStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdentityDataView(
      ::service_manager::mojom::IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceManagerListener_OnServiceFailedToStart_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceManagerListener_OnServiceStopped_ParamsDataView {
 public:
  ServiceManagerListener_OnServiceStopped_ParamsDataView() {}

  ServiceManagerListener_OnServiceStopped_ParamsDataView(
      internal::ServiceManagerListener_OnServiceStopped_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdentityDataView(
      ::service_manager::mojom::IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceManagerListener_OnServiceStopped_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceManager_AddListener_ParamsDataView {
 public:
  ServiceManager_AddListener_ParamsDataView() {}

  ServiceManager_AddListener_ParamsDataView(
      internal::ServiceManager_AddListener_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::ServiceManagerListenerPtrDataView>(
            &data_->listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceManager_AddListener_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ServiceManagerListener_OnInit_ParamsDataView::GetRunningServicesDataView(
    mojo::ArrayDataView<RunningServiceInfoDataView>* output) {
  auto pointer = data_->running_services.Get();
  *output = mojo::ArrayDataView<RunningServiceInfoDataView>(pointer, context_);
}


inline void ServiceManagerListener_OnServiceCreated_ParamsDataView::GetServiceDataView(
    RunningServiceInfoDataView* output) {
  auto pointer = data_->service.Get();
  *output = RunningServiceInfoDataView(pointer, context_);
}


inline void ServiceManagerListener_OnServiceStarted_ParamsDataView::GetIdentityDataView(
    ::service_manager::mojom::IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::service_manager::mojom::IdentityDataView(pointer, context_);
}


inline void ServiceManagerListener_OnServicePIDReceived_ParamsDataView::GetIdentityDataView(
    ::service_manager::mojom::IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::service_manager::mojom::IdentityDataView(pointer, context_);
}


inline void ServiceManagerListener_OnServiceFailedToStart_ParamsDataView::GetIdentityDataView(
    ::service_manager::mojom::IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::service_manager::mojom::IdentityDataView(pointer, context_);
}


inline void ServiceManagerListener_OnServiceStopped_ParamsDataView::GetIdentityDataView(
    ::service_manager::mojom::IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::service_manager::mojom::IdentityDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace service_manager

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_PARAMS_DATA_H_