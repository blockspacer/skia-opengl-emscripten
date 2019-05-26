// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_PARAMS_DATA_H_

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
class  NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params_Data));
      new (data()) NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params_Data>(index_);
    }
    NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  int32_t downlink_bandwidth_kbps;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> http_rtt;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> transport_rtt;

 private:
  NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params_Data();
  ~NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params_Data() = delete;
};
static_assert(sizeof(NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params_Data) == 32,
              "Bad sizeof(NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params_Data)");
class  NetworkQualityEstimatorManager_RequestNotifications_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkQualityEstimatorManager_RequestNotifications_Params_Data));
      new (data()) NetworkQualityEstimatorManager_RequestNotifications_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkQualityEstimatorManager_RequestNotifications_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkQualityEstimatorManager_RequestNotifications_Params_Data>(index_);
    }
    NetworkQualityEstimatorManager_RequestNotifications_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client_ptr;

 private:
  NetworkQualityEstimatorManager_RequestNotifications_Params_Data();
  ~NetworkQualityEstimatorManager_RequestNotifications_Params_Data() = delete;
};
static_assert(sizeof(NetworkQualityEstimatorManager_RequestNotifications_Params_Data) == 16,
              "Bad sizeof(NetworkQualityEstimatorManager_RequestNotifications_Params_Data)");

}  // namespace internal
class NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_ParamsDataView {
 public:
  NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_ParamsDataView() {}

  NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_ParamsDataView(
      internal::NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::EffectiveConnectionType>(
        data_value, output);
  }

  ::network::mojom::EffectiveConnectionType type() const {
    return static_cast<::network::mojom::EffectiveConnectionType>(data_->type);
  }
  inline void GetHttpRttDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHttpRtt(UserType* output) {
    auto* pointer = data_->http_rtt.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetTransportRttDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransportRtt(UserType* output) {
    auto* pointer = data_->transport_rtt.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  int32_t downlink_bandwidth_kbps() const {
    return data_->downlink_bandwidth_kbps;
  }
 private:
  internal::NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkQualityEstimatorManager_RequestNotifications_ParamsDataView {
 public:
  NetworkQualityEstimatorManager_RequestNotifications_ParamsDataView() {}

  NetworkQualityEstimatorManager_RequestNotifications_ParamsDataView(
      internal::NetworkQualityEstimatorManager_RequestNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClientPtr() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::NetworkQualityEstimatorManagerClientPtrDataView>(
            &data_->client_ptr, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkQualityEstimatorManager_RequestNotifications_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_ParamsDataView::GetHttpRttDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->http_rtt.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void NetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_ParamsDataView::GetTransportRttDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->transport_rtt.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_PARAMS_DATA_H_