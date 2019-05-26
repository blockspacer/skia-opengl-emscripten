// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_PARAMS_DATA_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Service_OnStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Service_OnStart_Params_Data));
      new (data()) Service_OnStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Service_OnStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Service_OnStart_Params_Data>(index_);
    }
    Service_OnStart_Params_Data* operator->() { return data(); }

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
  Service_OnStart_Params_Data();
  ~Service_OnStart_Params_Data() = delete;
};
static_assert(sizeof(Service_OnStart_Params_Data) == 16,
              "Bad sizeof(Service_OnStart_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Service_OnStart_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Service_OnStart_ResponseParams_Data));
      new (data()) Service_OnStart_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Service_OnStart_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Service_OnStart_ResponseParams_Data>(index_);
    }
    Service_OnStart_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data connector_request;
  mojo::internal::AssociatedEndpointHandle_Data control_request;

 private:
  Service_OnStart_ResponseParams_Data();
  ~Service_OnStart_ResponseParams_Data() = delete;
};
static_assert(sizeof(Service_OnStart_ResponseParams_Data) == 16,
              "Bad sizeof(Service_OnStart_ResponseParams_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Service_OnBindInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Service_OnBindInterface_Params_Data));
      new (data()) Service_OnBindInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Service_OnBindInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Service_OnBindInterface_Params_Data>(index_);
    }
    Service_OnBindInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::BindSourceInfo_Data> source;
  mojo::internal::Pointer<mojo::internal::String_Data> interface_name;
  mojo::internal::Handle_Data interface_pipe;
  uint8_t padfinal_[4];

 private:
  Service_OnBindInterface_Params_Data();
  ~Service_OnBindInterface_Params_Data() = delete;
};
static_assert(sizeof(Service_OnBindInterface_Params_Data) == 32,
              "Bad sizeof(Service_OnBindInterface_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Service_OnBindInterface_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Service_OnBindInterface_ResponseParams_Data));
      new (data()) Service_OnBindInterface_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Service_OnBindInterface_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Service_OnBindInterface_ResponseParams_Data>(index_);
    }
    Service_OnBindInterface_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Service_OnBindInterface_ResponseParams_Data();
  ~Service_OnBindInterface_ResponseParams_Data() = delete;
};
static_assert(sizeof(Service_OnBindInterface_ResponseParams_Data) == 8,
              "Bad sizeof(Service_OnBindInterface_ResponseParams_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Service_CreatePackagedServiceInstance_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Service_CreatePackagedServiceInstance_Params_Data));
      new (data()) Service_CreatePackagedServiceInstance_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Service_CreatePackagedServiceInstance_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Service_CreatePackagedServiceInstance_Params_Data>(index_);
    }
    Service_CreatePackagedServiceInstance_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::service_manager::mojom::internal::Identity_Data> identity;
  mojo::internal::Handle_Data receiver;
  mojo::internal::Interface_Data metadata;
  uint8_t padfinal_[4];

 private:
  Service_CreatePackagedServiceInstance_Params_Data();
  ~Service_CreatePackagedServiceInstance_Params_Data() = delete;
};
static_assert(sizeof(Service_CreatePackagedServiceInstance_Params_Data) == 32,
              "Bad sizeof(Service_CreatePackagedServiceInstance_Params_Data)");

}  // namespace internal
class Service_OnStart_ParamsDataView {
 public:
  Service_OnStart_ParamsDataView() {}

  Service_OnStart_ParamsDataView(
      internal::Service_OnStart_Params_Data* data,
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
  internal::Service_OnStart_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Service_OnStart_ResponseParamsDataView {
 public:
  Service_OnStart_ResponseParamsDataView() {}

  Service_OnStart_ResponseParamsDataView(
      internal::Service_OnStart_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeConnectorRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::ConnectorRequestDataView>(
            &data_->connector_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeControlRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::ServiceControlAssociatedRequestDataView>(
            &data_->control_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Service_OnStart_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Service_OnBindInterface_ParamsDataView {
 public:
  Service_OnBindInterface_ParamsDataView() {}

  Service_OnBindInterface_ParamsDataView(
      internal::Service_OnBindInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceDataView(
      BindSourceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::BindSourceInfoDataView>(
        pointer, output, context_);
  }
  inline void GetInterfaceNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInterfaceName(UserType* output) {
    auto* pointer = data_->interface_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  mojo::ScopedMessagePipeHandle TakeInterfacePipe() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->interface_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Service_OnBindInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Service_OnBindInterface_ResponseParamsDataView {
 public:
  Service_OnBindInterface_ResponseParamsDataView() {}

  Service_OnBindInterface_ResponseParamsDataView(
      internal::Service_OnBindInterface_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Service_OnBindInterface_ResponseParams_Data* data_ = nullptr;
};

class Service_CreatePackagedServiceInstance_ParamsDataView {
 public:
  Service_CreatePackagedServiceInstance_ParamsDataView() {}

  Service_CreatePackagedServiceInstance_ParamsDataView(
      internal::Service_CreatePackagedServiceInstance_Params_Data* data,
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
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::service_manager::mojom::ServiceInterfaceBase>>(
            &data_->receiver, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeMetadata() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::service_manager::mojom::ProcessMetadataInterfaceBase>>(
            &data_->metadata, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Service_CreatePackagedServiceInstance_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Service_OnStart_ParamsDataView::GetIdentityDataView(
    ::service_manager::mojom::IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::service_manager::mojom::IdentityDataView(pointer, context_);
}




inline void Service_OnBindInterface_ParamsDataView::GetSourceDataView(
    BindSourceInfoDataView* output) {
  auto pointer = data_->source.Get();
  *output = BindSourceInfoDataView(pointer, context_);
}
inline void Service_OnBindInterface_ParamsDataView::GetInterfaceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->interface_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void Service_CreatePackagedServiceInstance_ParamsDataView::GetIdentityDataView(
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

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_PARAMS_DATA_H_