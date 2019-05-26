// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerFactory_CreateSharedWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedWorkerFactory_CreateSharedWorker_Params_Data));
      new (data()) SharedWorkerFactory_CreateSharedWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedWorkerFactory_CreateSharedWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedWorkerFactory_CreateSharedWorker_Params_Data>(index_);
    }
    SharedWorkerFactory_CreateSharedWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::SharedWorkerInfo_Data> info;
  uint8_t pause_on_start : 1;
  uint8_t pad1_[3];
  mojo::internal::Handle_Data preference_watcher_request;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> devtools_worker_token;
  mojo::internal::Pointer<::blink::mojom::internal::RendererPreferences_Data> renderer_preferences;
  mojo::internal::Interface_Data content_settings;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerProviderInfoForWorker_Data> service_worker_provider_info;
  int32_t appcache_host_id;
  mojo::internal::Interface_Data main_script_loader_factory;
  mojo::internal::Handle_Data shared_worker;
  mojo::internal::Pointer<::blink::mojom::internal::WorkerMainScriptLoadParams_Data> main_script_load_params;
  mojo::internal::Pointer<::blink::mojom::internal::URLLoaderFactoryBundle_Data> subresource_loader_factories;
  mojo::internal::Pointer<::blink::mojom::internal::ControllerServiceWorkerInfo_Data> controller_info;
  mojo::internal::Interface_Data host;
  mojo::internal::Interface_Data interface_provider;

 private:
  SharedWorkerFactory_CreateSharedWorker_Params_Data();
  ~SharedWorkerFactory_CreateSharedWorker_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerFactory_CreateSharedWorker_Params_Data) == 112,
              "Bad sizeof(SharedWorkerFactory_CreateSharedWorker_Params_Data)");

}  // namespace internal
class SharedWorkerFactory_CreateSharedWorker_ParamsDataView {
 public:
  SharedWorkerFactory_CreateSharedWorker_ParamsDataView() {}

  SharedWorkerFactory_CreateSharedWorker_ParamsDataView(
      internal::SharedWorkerFactory_CreateSharedWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      ::blink::mojom::SharedWorkerInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::blink::mojom::SharedWorkerInfoDataView>(
        pointer, output, context_);
  }
  bool pause_on_start() const {
    return data_->pause_on_start;
  }
  inline void GetDevtoolsWorkerTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevtoolsWorkerToken(UserType* output) {
    auto* pointer = data_->devtools_worker_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetRendererPreferencesDataView(
      ::blink::mojom::RendererPreferencesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRendererPreferences(UserType* output) {
    auto* pointer = data_->renderer_preferences.Get();
    return mojo::internal::Deserialize<::blink::mojom::RendererPreferencesDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakePreferenceWatcherRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::RendererPreferenceWatcherRequestDataView>(
            &data_->preference_watcher_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeContentSettings() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::WorkerContentSettingsProxyPtrDataView>(
            &data_->content_settings, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetServiceWorkerProviderInfoDataView(
      ::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceWorkerProviderInfo(UserType* output) {
    auto* pointer = data_->service_worker_provider_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView>(
        pointer, output, context_);
  }
  int32_t appcache_host_id() const {
    return data_->appcache_host_id;
  }
  template <typename UserType>
  UserType TakeMainScriptLoaderFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryPtrDataView>(
            &data_->main_script_loader_factory, &result, context_);
    DCHECK(ret);
    return result;
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
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::SharedWorkerHostPtrDataView>(
            &data_->host, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeSharedWorker() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::SharedWorkerRequestDataView>(
            &data_->shared_worker, &result, context_);
    DCHECK(ret);
    return result;
  }
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
  internal::SharedWorkerFactory_CreateSharedWorker_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void SharedWorkerFactory_CreateSharedWorker_ParamsDataView::GetInfoDataView(
    ::blink::mojom::SharedWorkerInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = ::blink::mojom::SharedWorkerInfoDataView(pointer, context_);
}
inline void SharedWorkerFactory_CreateSharedWorker_ParamsDataView::GetDevtoolsWorkerTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->devtools_worker_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void SharedWorkerFactory_CreateSharedWorker_ParamsDataView::GetRendererPreferencesDataView(
    ::blink::mojom::RendererPreferencesDataView* output) {
  auto pointer = data_->renderer_preferences.Get();
  *output = ::blink::mojom::RendererPreferencesDataView(pointer, context_);
}
inline void SharedWorkerFactory_CreateSharedWorker_ParamsDataView::GetServiceWorkerProviderInfoDataView(
    ::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView* output) {
  auto pointer = data_->service_worker_provider_info.Get();
  *output = ::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView(pointer, context_);
}
inline void SharedWorkerFactory_CreateSharedWorker_ParamsDataView::GetMainScriptLoadParamsDataView(
    ::blink::mojom::WorkerMainScriptLoadParamsDataView* output) {
  auto pointer = data_->main_script_load_params.Get();
  *output = ::blink::mojom::WorkerMainScriptLoadParamsDataView(pointer, context_);
}
inline void SharedWorkerFactory_CreateSharedWorker_ParamsDataView::GetSubresourceLoaderFactoriesDataView(
    ::blink::mojom::URLLoaderFactoryBundleDataView* output) {
  auto pointer = data_->subresource_loader_factories.Get();
  *output = ::blink::mojom::URLLoaderFactoryBundleDataView(pointer, context_);
}
inline void SharedWorkerFactory_CreateSharedWorker_ParamsDataView::GetControllerInfoDataView(
    ::blink::mojom::ControllerServiceWorkerInfoDataView* output) {
  auto pointer = data_->controller_info.Get();
  *output = ::blink::mojom::ControllerServiceWorkerInfoDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_PARAMS_DATA_H_