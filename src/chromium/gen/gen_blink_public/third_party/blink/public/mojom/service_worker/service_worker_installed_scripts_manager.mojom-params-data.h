// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data));
      new (data()) ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data>(index_);
    }
    ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> script_url;

 private:
  ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data();
  ~ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data));
      new (data()) ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data>(index_);
    }
    ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ServiceWorkerScriptInfo_Data> script_info;

 private:
  ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data();
  ~ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data)");

}  // namespace internal
class ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_ParamsDataView {
 public:
  ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_ParamsDataView() {}

  ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_ParamsDataView(
      internal::ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data* data,
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
 private:
  internal::ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerInstalledScriptsManager_TransferInstalledScript_ParamsDataView {
 public:
  ServiceWorkerInstalledScriptsManager_TransferInstalledScript_ParamsDataView() {}

  ServiceWorkerInstalledScriptsManager_TransferInstalledScript_ParamsDataView(
      internal::ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetScriptInfoDataView(
      ServiceWorkerScriptInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScriptInfo(UserType* output) {
    auto* pointer = data_->script_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerScriptInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_ParamsDataView::GetScriptUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->script_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ServiceWorkerInstalledScriptsManager_TransferInstalledScript_ParamsDataView::GetScriptInfoDataView(
    ServiceWorkerScriptInfoDataView* output) {
  auto pointer = data_->script_info.Get();
  *output = ServiceWorkerScriptInfoDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_PARAMS_DATA_H_