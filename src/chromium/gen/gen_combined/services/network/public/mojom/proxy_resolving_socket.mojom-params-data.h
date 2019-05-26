// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_PARAMS_DATA_H_

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
class  ProxyResolvingSocket_UpgradeToTLS_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolvingSocket_UpgradeToTLS_Params_Data));
      new (data()) ProxyResolvingSocket_UpgradeToTLS_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolvingSocket_UpgradeToTLS_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolvingSocket_UpgradeToTLS_Params_Data>(index_);
    }
    ProxyResolvingSocket_UpgradeToTLS_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::HostPortPair_Data> host_port_pair;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;
  mojo::internal::Handle_Data request;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  ProxyResolvingSocket_UpgradeToTLS_Params_Data();
  ~ProxyResolvingSocket_UpgradeToTLS_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolvingSocket_UpgradeToTLS_Params_Data) == 40,
              "Bad sizeof(ProxyResolvingSocket_UpgradeToTLS_Params_Data)");
class  ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data));
      new (data()) ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data>(index_);
    }
    ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  mojo::internal::Handle_Data receive_stream;
  mojo::internal::Handle_Data send_stream;
  uint8_t padfinal_[4];

 private:
  ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data();
  ~ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data() = delete;
};
static_assert(sizeof(ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data) == 24,
              "Bad sizeof(ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data)");
class  ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data));
      new (data()) ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data>(index_);
    }
    ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<internal::ProxyResolvingSocketOptions_Data> options;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;
  mojo::internal::Handle_Data socket;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data();
  ~ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data) == 48,
              "Bad sizeof(ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data)");
class  ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data));
      new (data()) ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data>(index_);
    }
    ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  mojo::internal::Handle_Data receive_stream;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> local_addr;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> peer_addr;
  mojo::internal::Handle_Data send_stream;
  uint8_t padfinal_[4];

 private:
  ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data();
  ~ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data() = delete;
};
static_assert(sizeof(ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data) == 40,
              "Bad sizeof(ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data)");

}  // namespace internal
class ProxyResolvingSocket_UpgradeToTLS_ParamsDataView {
 public:
  ProxyResolvingSocket_UpgradeToTLS_ParamsDataView() {}

  ProxyResolvingSocket_UpgradeToTLS_ParamsDataView(
      internal::ProxyResolvingSocket_UpgradeToTLS_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostPortPairDataView(
      ::network::mojom::HostPortPairDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostPortPair(UserType* output) {
    auto* pointer = data_->host_port_pair.Get();
    return mojo::internal::Deserialize<::network::mojom::HostPortPairDataView>(
        pointer, output, context_);
  }
  inline void GetTrafficAnnotationDataView(
      ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrafficAnnotation(UserType* output) {
    auto* pointer = data_->traffic_annotation.Get();
    return mojo::internal::Deserialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TLSClientSocketRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::SocketObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProxyResolvingSocket_UpgradeToTLS_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyResolvingSocket_UpgradeToTLS_ResponseParamsDataView {
 public:
  ProxyResolvingSocket_UpgradeToTLS_ResponseParamsDataView() {}

  ProxyResolvingSocket_UpgradeToTLS_ResponseParamsDataView(
      internal::ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
  mojo::ScopedDataPipeConsumerHandle TakeReceiveStream() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->receive_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeProducerHandle TakeSendStream() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->send_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ParamsDataView {
 public:
  ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ParamsDataView() {}

  ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ParamsDataView(
      internal::ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data* data,
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
  inline void GetOptionsDataView(
      ProxyResolvingSocketOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyResolvingSocketOptionsDataView>(
        pointer, output, context_);
  }
  inline void GetTrafficAnnotationDataView(
      ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrafficAnnotation(UserType* output) {
    auto* pointer = data_->traffic_annotation.Get();
    return mojo::internal::Deserialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSocket() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::ProxyResolvingSocketRequestDataView>(
            &data_->socket, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::SocketObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParamsDataView {
 public:
  ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParamsDataView() {}

  ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParamsDataView(
      internal::ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetLocalAddrDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddr(UserType* output) {
    auto* pointer = data_->local_addr.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetPeerAddrDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPeerAddr(UserType* output) {
    auto* pointer = data_->peer_addr.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  mojo::ScopedDataPipeConsumerHandle TakeReceiveStream() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->receive_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeProducerHandle TakeSendStream() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->send_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ProxyResolvingSocket_UpgradeToTLS_ParamsDataView::GetHostPortPairDataView(
    ::network::mojom::HostPortPairDataView* output) {
  auto pointer = data_->host_port_pair.Get();
  *output = ::network::mojom::HostPortPairDataView(pointer, context_);
}
inline void ProxyResolvingSocket_UpgradeToTLS_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}




inline void ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ParamsDataView::GetOptionsDataView(
    ProxyResolvingSocketOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = ProxyResolvingSocketOptionsDataView(pointer, context_);
}
inline void ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}


inline void ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParamsDataView::GetLocalAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->local_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParamsDataView::GetPeerAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->peer_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_PARAMS_DATA_H_