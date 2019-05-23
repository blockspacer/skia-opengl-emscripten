// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data));
      new (data()) DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data>(index_);
    }
    DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data interface_provider;

 private:
  DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data();
  ~DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data() = delete;
};
static_assert(sizeof(DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data) == 16,
              "Bad sizeof(DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data));
      new (data()) DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data>(index_);
    }
    DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerProviderInfoForWorker_Data> service_worker_provider_info;
  mojo::internal::Pointer<::blink::mojom::internal::WorkerMainScriptLoadParams_Data> main_script_load_params;
  mojo::internal::Pointer<::blink::mojom::internal::URLLoaderFactoryBundle_Data> subresource_loader_factories;
  mojo::internal::Pointer<::blink::mojom::internal::ControllerServiceWorkerInfo_Data> controller_info;

 private:
  DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data();
  ~DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data() = delete;
};
static_assert(sizeof(DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data) == 40,
              "Bad sizeof(DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data));
      new (data()) DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data>(index_);
    }
    DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data();
  ~DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data() = delete;
};
static_assert(sizeof(DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data) == 8,
              "Bad sizeof(DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data));
      new (data()) DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data>(index_);
    }
    DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Handle_Data worker_interface_provider;
  uint8_t padfinal_[4];

 private:
  DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data();
  ~DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data() = delete;
};
static_assert(sizeof(DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data) == 24,
              "Bad sizeof(DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data));
      new (data()) DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data>(index_);
    }
    DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> script_url;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Interface_Data blob_url_token;
  mojo::internal::Interface_Data client;

 private:
  DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data();
  ~DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data() = delete;
};
static_assert(sizeof(DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data) == 40,
              "Bad sizeof(DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data)");

}  // namespace internal
class DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_ParamsDataView {
 public:
  DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_ParamsDataView() {}

  DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_ParamsDataView(
      internal::DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeInterfaceProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
            &data_->interface_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_ParamsDataView {
 public:
  DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_ParamsDataView() {}

  DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_ParamsDataView(
      internal::DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceWorkerProviderInfoDataView(
      ::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceWorkerProviderInfo(UserType* output) {
    auto* pointer = data_->service_worker_provider_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView>(
        pointer, output, context_);
  }
  inline void GetMainScriptLoadParamsDataView(
      ::blink::mojom::WorkerMainScriptLoadParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMainScriptLoadParams(UserType* output) {
    auto* pointer = data_->main_script_load_params.Get();
    return mojo::internal::Deserialize<::blink::mojom::WorkerMainScriptLoadParamsDataView>(
        pointer, output, context_);
  }
  inline void GetSubresourceLoaderFactoriesDataView(
      ::blink::mojom::URLLoaderFactoryBundleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubresourceLoaderFactories(UserType* output) {
    auto* pointer = data_->subresource_loader_factories.Get();
    return mojo::internal::Deserialize<::blink::mojom::URLLoaderFactoryBundleDataView>(
        pointer, output, context_);
  }
  inline void GetControllerInfoDataView(
      ::blink::mojom::ControllerServiceWorkerInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadControllerInfo(UserType* output) {
    auto* pointer = data_->controller_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ControllerServiceWorkerInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_ParamsDataView {
 public:
  DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_ParamsDataView() {}

  DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_ParamsDataView(
      internal::DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Params_Data* data_ = nullptr;
};

class DedicatedWorkerHostFactory_CreateWorkerHost_ParamsDataView {
 public:
  DedicatedWorkerHostFactory_CreateWorkerHost_ParamsDataView() {}

  DedicatedWorkerHostFactory_CreateWorkerHost_ParamsDataView(
      internal::DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeWorkerInterfaceProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderRequestDataView>(
            &data_->worker_interface_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DedicatedWorkerHostFactory_CreateWorkerHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_ParamsDataView {
 public:
  DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_ParamsDataView() {}

  DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_ParamsDataView(
      internal::DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data* data,
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
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeBlobUrlToken() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobURLTokenPtrDataView>(
            &data_->blob_url_token, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DedicatedWorkerHostFactoryClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_ParamsDataView::GetServiceWorkerProviderInfoDataView(
    ::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView* output) {
  auto pointer = data_->service_worker_provider_info.Get();
  *output = ::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView(pointer, context_);
}
inline void DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_ParamsDataView::GetMainScriptLoadParamsDataView(
    ::blink::mojom::WorkerMainScriptLoadParamsDataView* output) {
  auto pointer = data_->main_script_load_params.Get();
  *output = ::blink::mojom::WorkerMainScriptLoadParamsDataView(pointer, context_);
}
inline void DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_ParamsDataView::GetSubresourceLoaderFactoriesDataView(
    ::blink::mojom::URLLoaderFactoryBundleDataView* output) {
  auto pointer = data_->subresource_loader_factories.Get();
  *output = ::blink::mojom::URLLoaderFactoryBundleDataView(pointer, context_);
}
inline void DedicatedWorkerHostFactoryClient_OnScriptLoadStarted_ParamsDataView::GetControllerInfoDataView(
    ::blink::mojom::ControllerServiceWorkerInfoDataView* output) {
  auto pointer = data_->controller_info.Get();
  *output = ::blink::mojom::ControllerServiceWorkerInfoDataView(pointer, context_);
}




inline void DedicatedWorkerHostFactory_CreateWorkerHost_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_ParamsDataView::GetScriptUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->script_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void DedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_PARAMS_DATA_H_