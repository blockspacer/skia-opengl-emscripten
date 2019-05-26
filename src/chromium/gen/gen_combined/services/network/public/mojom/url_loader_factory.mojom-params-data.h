// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_PARAMS_DATA_H_

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
namespace network {
namespace mojom {
namespace internal {
class  URLLoaderFactory_CreateLoaderAndStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderFactory_CreateLoaderAndStart_Params_Data));
      new (data()) URLLoaderFactory_CreateLoaderAndStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderFactory_CreateLoaderAndStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderFactory_CreateLoaderAndStart_Params_Data>(index_);
    }
    URLLoaderFactory_CreateLoaderAndStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data loader;
  int32_t routing_id;
  int32_t request_id;
  uint32_t options;
  mojo::internal::Pointer<::network::mojom::internal::URLRequest_Data> request;
  mojo::internal::Interface_Data client;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;

 private:
  URLLoaderFactory_CreateLoaderAndStart_Params_Data();
  ~URLLoaderFactory_CreateLoaderAndStart_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderFactory_CreateLoaderAndStart_Params_Data) == 48,
              "Bad sizeof(URLLoaderFactory_CreateLoaderAndStart_Params_Data)");
class  URLLoaderFactory_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderFactory_Clone_Params_Data));
      new (data()) URLLoaderFactory_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderFactory_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderFactory_Clone_Params_Data>(index_);
    }
    URLLoaderFactory_Clone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data factory;
  uint8_t padfinal_[4];

 private:
  URLLoaderFactory_Clone_Params_Data();
  ~URLLoaderFactory_Clone_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderFactory_Clone_Params_Data) == 16,
              "Bad sizeof(URLLoaderFactory_Clone_Params_Data)");

}  // namespace internal
class URLLoaderFactory_CreateLoaderAndStart_ParamsDataView {
 public:
  URLLoaderFactory_CreateLoaderAndStart_ParamsDataView() {}

  URLLoaderFactory_CreateLoaderAndStart_ParamsDataView(
      internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeLoader() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderRequestDataView>(
            &data_->loader, &result, context_);
    DCHECK(ret);
    return result;
  }
  int32_t routing_id() const {
    return data_->routing_id;
  }
  int32_t request_id() const {
    return data_->request_id;
  }
  uint32_t options() const {
    return data_->options;
  }
  inline void GetRequestDataView(
      ::network::mojom::URLRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::network::mojom::URLRequestDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetTrafficAnnotationDataView(
      ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrafficAnnotation(UserType* output) {
    auto* pointer = data_->traffic_annotation.Get();
    return mojo::internal::Deserialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoaderFactory_Clone_ParamsDataView {
 public:
  URLLoaderFactory_Clone_ParamsDataView() {}

  URLLoaderFactory_Clone_ParamsDataView(
      internal::URLLoaderFactory_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryRequestDataView>(
            &data_->factory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::URLLoaderFactory_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void URLLoaderFactory_CreateLoaderAndStart_ParamsDataView::GetRequestDataView(
    ::network::mojom::URLRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::network::mojom::URLRequestDataView(pointer, context_);
}
inline void URLLoaderFactory_CreateLoaderAndStart_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_PARAMS_DATA_H_