// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_PARAMS_DATA_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) ProcessMetadata_SetPID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessMetadata_SetPID_Params_Data));
      new (data()) ProcessMetadata_SetPID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessMetadata_SetPID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessMetadata_SetPID_Params_Data>(index_);
    }
    ProcessMetadata_SetPID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data> pid;

 private:
  ProcessMetadata_SetPID_Params_Data();
  ~ProcessMetadata_SetPID_Params_Data() = delete;
};
static_assert(sizeof(ProcessMetadata_SetPID_Params_Data) == 16,
              "Bad sizeof(ProcessMetadata_SetPID_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_BindInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_BindInterface_Params_Data));
      new (data()) Connector_BindInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_BindInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_BindInterface_Params_Data>(index_);
    }
    Connector_BindInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::service_manager::mojom::internal::ServiceFilter_Data> filter;
  mojo::internal::Pointer<mojo::internal::String_Data> interface_name;
  mojo::internal::Handle_Data interface_pipe;
  int32_t priority;

 private:
  Connector_BindInterface_Params_Data();
  ~Connector_BindInterface_Params_Data() = delete;
};
static_assert(sizeof(Connector_BindInterface_Params_Data) == 32,
              "Bad sizeof(Connector_BindInterface_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_BindInterface_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_BindInterface_ResponseParams_Data));
      new (data()) Connector_BindInterface_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_BindInterface_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_BindInterface_ResponseParams_Data>(index_);
    }
    Connector_BindInterface_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::Identity_Data> identity;

 private:
  Connector_BindInterface_ResponseParams_Data();
  ~Connector_BindInterface_ResponseParams_Data() = delete;
};
static_assert(sizeof(Connector_BindInterface_ResponseParams_Data) == 24,
              "Bad sizeof(Connector_BindInterface_ResponseParams_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_QueryService_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_QueryService_Params_Data));
      new (data()) Connector_QueryService_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_QueryService_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_QueryService_Params_Data>(index_);
    }
    Connector_QueryService_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> service_name;

 private:
  Connector_QueryService_Params_Data();
  ~Connector_QueryService_Params_Data() = delete;
};
static_assert(sizeof(Connector_QueryService_Params_Data) == 16,
              "Bad sizeof(Connector_QueryService_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_QueryService_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_QueryService_ResponseParams_Data));
      new (data()) Connector_QueryService_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_QueryService_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_QueryService_ResponseParams_Data>(index_);
    }
    Connector_QueryService_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ServiceInfo_Data> info;

 private:
  Connector_QueryService_ResponseParams_Data();
  ~Connector_QueryService_ResponseParams_Data() = delete;
};
static_assert(sizeof(Connector_QueryService_ResponseParams_Data) == 16,
              "Bad sizeof(Connector_QueryService_ResponseParams_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_WarmService_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_WarmService_Params_Data));
      new (data()) Connector_WarmService_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_WarmService_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_WarmService_Params_Data>(index_);
    }
    Connector_WarmService_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::service_manager::mojom::internal::ServiceFilter_Data> filter;

 private:
  Connector_WarmService_Params_Data();
  ~Connector_WarmService_Params_Data() = delete;
};
static_assert(sizeof(Connector_WarmService_Params_Data) == 16,
              "Bad sizeof(Connector_WarmService_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_WarmService_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_WarmService_ResponseParams_Data));
      new (data()) Connector_WarmService_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_WarmService_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_WarmService_ResponseParams_Data>(index_);
    }
    Connector_WarmService_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::Identity_Data> identity;

 private:
  Connector_WarmService_ResponseParams_Data();
  ~Connector_WarmService_ResponseParams_Data() = delete;
};
static_assert(sizeof(Connector_WarmService_ResponseParams_Data) == 24,
              "Bad sizeof(Connector_WarmService_ResponseParams_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_RegisterServiceInstance_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_RegisterServiceInstance_Params_Data));
      new (data()) Connector_RegisterServiceInstance_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_RegisterServiceInstance_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_RegisterServiceInstance_Params_Data>(index_);
    }
    Connector_RegisterServiceInstance_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Identity_Data> identity;
  mojo::internal::Handle_Data service;
  mojo::internal::Handle_Data metadata_receiver;

 private:
  Connector_RegisterServiceInstance_Params_Data();
  ~Connector_RegisterServiceInstance_Params_Data() = delete;
};
static_assert(sizeof(Connector_RegisterServiceInstance_Params_Data) == 24,
              "Bad sizeof(Connector_RegisterServiceInstance_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_RegisterServiceInstance_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_RegisterServiceInstance_ResponseParams_Data));
      new (data()) Connector_RegisterServiceInstance_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_RegisterServiceInstance_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_RegisterServiceInstance_ResponseParams_Data>(index_);
    }
    Connector_RegisterServiceInstance_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  Connector_RegisterServiceInstance_ResponseParams_Data();
  ~Connector_RegisterServiceInstance_ResponseParams_Data() = delete;
};
static_assert(sizeof(Connector_RegisterServiceInstance_ResponseParams_Data) == 16,
              "Bad sizeof(Connector_RegisterServiceInstance_ResponseParams_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_Clone_Params_Data));
      new (data()) Connector_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_Clone_Params_Data>(index_);
    }
    Connector_Clone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  Connector_Clone_Params_Data();
  ~Connector_Clone_Params_Data() = delete;
};
static_assert(sizeof(Connector_Clone_Params_Data) == 16,
              "Bad sizeof(Connector_Clone_Params_Data)");
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) Connector_FilterInterfaces_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Connector_FilterInterfaces_Params_Data));
      new (data()) Connector_FilterInterfaces_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Connector_FilterInterfaces_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Connector_FilterInterfaces_Params_Data>(index_);
    }
    Connector_FilterInterfaces_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> spec;
  mojo::internal::Pointer<internal::Identity_Data> source;
  mojo::internal::Handle_Data source_request;
  mojo::internal::Interface_Data target;
  uint8_t padfinal_[4];

 private:
  Connector_FilterInterfaces_Params_Data();
  ~Connector_FilterInterfaces_Params_Data() = delete;
};
static_assert(sizeof(Connector_FilterInterfaces_Params_Data) == 40,
              "Bad sizeof(Connector_FilterInterfaces_Params_Data)");

}  // namespace internal
class ProcessMetadata_SetPID_ParamsDataView {
 public:
  ProcessMetadata_SetPID_ParamsDataView() {}

  ProcessMetadata_SetPID_ParamsDataView(
      internal::ProcessMetadata_SetPID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPidDataView(
      ::mojo_base::mojom::ProcessIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPid(UserType* output) {
    auto* pointer = data_->pid.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ProcessIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProcessMetadata_SetPID_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_BindInterface_ParamsDataView {
 public:
  Connector_BindInterface_ParamsDataView() {}

  Connector_BindInterface_ParamsDataView(
      internal::Connector_BindInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilterDataView(
      ::service_manager::mojom::ServiceFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::ServiceFilterDataView>(
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
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPriority(UserType* output) const {
    auto data_value = data_->priority;
    return mojo::internal::Deserialize<::service_manager::mojom::BindInterfacePriority>(
        data_value, output);
  }

  BindInterfacePriority priority() const {
    return static_cast<BindInterfacePriority>(data_->priority);
  }
 private:
  internal::Connector_BindInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_BindInterface_ResponseParamsDataView {
 public:
  Connector_BindInterface_ResponseParamsDataView() {}

  Connector_BindInterface_ResponseParamsDataView(
      internal::Connector_BindInterface_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::service_manager::mojom::ConnectResult>(
        data_value, output);
  }

  ConnectResult result() const {
    return static_cast<ConnectResult>(data_->result);
  }
  inline void GetIdentityDataView(
      IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
 private:
  internal::Connector_BindInterface_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_QueryService_ParamsDataView {
 public:
  Connector_QueryService_ParamsDataView() {}

  Connector_QueryService_ParamsDataView(
      internal::Connector_QueryService_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceName(UserType* output) {
    auto* pointer = data_->service_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Connector_QueryService_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_QueryService_ResponseParamsDataView {
 public:
  Connector_QueryService_ResponseParamsDataView() {}

  Connector_QueryService_ResponseParamsDataView(
      internal::Connector_QueryService_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      ServiceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::ServiceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::Connector_QueryService_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_WarmService_ParamsDataView {
 public:
  Connector_WarmService_ParamsDataView() {}

  Connector_WarmService_ParamsDataView(
      internal::Connector_WarmService_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilterDataView(
      ::service_manager::mojom::ServiceFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::ServiceFilterDataView>(
        pointer, output, context_);
  }
 private:
  internal::Connector_WarmService_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_WarmService_ResponseParamsDataView {
 public:
  Connector_WarmService_ResponseParamsDataView() {}

  Connector_WarmService_ResponseParamsDataView(
      internal::Connector_WarmService_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::service_manager::mojom::ConnectResult>(
        data_value, output);
  }

  ConnectResult result() const {
    return static_cast<ConnectResult>(data_->result);
  }
  inline void GetIdentityDataView(
      IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
 private:
  internal::Connector_WarmService_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_RegisterServiceInstance_ParamsDataView {
 public:
  Connector_RegisterServiceInstance_ParamsDataView() {}

  Connector_RegisterServiceInstance_ParamsDataView(
      internal::Connector_RegisterServiceInstance_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdentityDataView(
      IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
  mojo::ScopedMessagePipeHandle TakeService() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->service, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeMetadataReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::service_manager::mojom::ProcessMetadataInterfaceBase>>(
            &data_->metadata_receiver, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Connector_RegisterServiceInstance_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_RegisterServiceInstance_ResponseParamsDataView {
 public:
  Connector_RegisterServiceInstance_ResponseParamsDataView() {}

  Connector_RegisterServiceInstance_ResponseParamsDataView(
      internal::Connector_RegisterServiceInstance_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::service_manager::mojom::ConnectResult>(
        data_value, output);
  }

  ConnectResult result() const {
    return static_cast<ConnectResult>(data_->result);
  }
 private:
  internal::Connector_RegisterServiceInstance_ResponseParams_Data* data_ = nullptr;
};

class Connector_Clone_ParamsDataView {
 public:
  Connector_Clone_ParamsDataView() {}

  Connector_Clone_ParamsDataView(
      internal::Connector_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::ConnectorRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Connector_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Connector_FilterInterfaces_ParamsDataView {
 public:
  Connector_FilterInterfaces_ParamsDataView() {}

  Connector_FilterInterfaces_ParamsDataView(
      internal::Connector_FilterInterfaces_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSpecDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSpec(UserType* output) {
    auto* pointer = data_->spec.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSourceDataView(
      IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSourceRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderRequestDataView>(
            &data_->source_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeTarget() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
            &data_->target, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Connector_FilterInterfaces_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ProcessMetadata_SetPID_ParamsDataView::GetPidDataView(
    ::mojo_base::mojom::ProcessIdDataView* output) {
  auto pointer = data_->pid.Get();
  *output = ::mojo_base::mojom::ProcessIdDataView(pointer, context_);
}


inline void Connector_BindInterface_ParamsDataView::GetFilterDataView(
    ::service_manager::mojom::ServiceFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = ::service_manager::mojom::ServiceFilterDataView(pointer, context_);
}
inline void Connector_BindInterface_ParamsDataView::GetInterfaceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->interface_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Connector_BindInterface_ResponseParamsDataView::GetIdentityDataView(
    IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = IdentityDataView(pointer, context_);
}


inline void Connector_QueryService_ParamsDataView::GetServiceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Connector_QueryService_ResponseParamsDataView::GetInfoDataView(
    ServiceInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = ServiceInfoDataView(pointer, context_);
}


inline void Connector_WarmService_ParamsDataView::GetFilterDataView(
    ::service_manager::mojom::ServiceFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = ::service_manager::mojom::ServiceFilterDataView(pointer, context_);
}


inline void Connector_WarmService_ResponseParamsDataView::GetIdentityDataView(
    IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = IdentityDataView(pointer, context_);
}


inline void Connector_RegisterServiceInstance_ParamsDataView::GetIdentityDataView(
    IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = IdentityDataView(pointer, context_);
}






inline void Connector_FilterInterfaces_ParamsDataView::GetSpecDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->spec.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Connector_FilterInterfaces_ParamsDataView::GetSourceDataView(
    IdentityDataView* output) {
  auto pointer = data_->source.Get();
  *output = IdentityDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace service_manager

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_PARAMS_DATA_H_