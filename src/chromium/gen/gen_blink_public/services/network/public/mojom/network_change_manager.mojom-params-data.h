// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_PARAMS_DATA_H_

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
class  NetworkChangeManagerClient_OnInitialConnectionType_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkChangeManagerClient_OnInitialConnectionType_Params_Data));
      new (data()) NetworkChangeManagerClient_OnInitialConnectionType_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkChangeManagerClient_OnInitialConnectionType_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkChangeManagerClient_OnInitialConnectionType_Params_Data>(index_);
    }
    NetworkChangeManagerClient_OnInitialConnectionType_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  NetworkChangeManagerClient_OnInitialConnectionType_Params_Data();
  ~NetworkChangeManagerClient_OnInitialConnectionType_Params_Data() = delete;
};
static_assert(sizeof(NetworkChangeManagerClient_OnInitialConnectionType_Params_Data) == 16,
              "Bad sizeof(NetworkChangeManagerClient_OnInitialConnectionType_Params_Data)");
class  NetworkChangeManagerClient_OnNetworkChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkChangeManagerClient_OnNetworkChanged_Params_Data));
      new (data()) NetworkChangeManagerClient_OnNetworkChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkChangeManagerClient_OnNetworkChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkChangeManagerClient_OnNetworkChanged_Params_Data>(index_);
    }
    NetworkChangeManagerClient_OnNetworkChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  NetworkChangeManagerClient_OnNetworkChanged_Params_Data();
  ~NetworkChangeManagerClient_OnNetworkChanged_Params_Data() = delete;
};
static_assert(sizeof(NetworkChangeManagerClient_OnNetworkChanged_Params_Data) == 16,
              "Bad sizeof(NetworkChangeManagerClient_OnNetworkChanged_Params_Data)");
class  NetworkChangeManager_RequestNotifications_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkChangeManager_RequestNotifications_Params_Data));
      new (data()) NetworkChangeManager_RequestNotifications_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkChangeManager_RequestNotifications_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkChangeManager_RequestNotifications_Params_Data>(index_);
    }
    NetworkChangeManager_RequestNotifications_Params_Data* operator->() { return data(); }

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
  NetworkChangeManager_RequestNotifications_Params_Data();
  ~NetworkChangeManager_RequestNotifications_Params_Data() = delete;
};
static_assert(sizeof(NetworkChangeManager_RequestNotifications_Params_Data) == 16,
              "Bad sizeof(NetworkChangeManager_RequestNotifications_Params_Data)");

}  // namespace internal
class NetworkChangeManagerClient_OnInitialConnectionType_ParamsDataView {
 public:
  NetworkChangeManagerClient_OnInitialConnectionType_ParamsDataView() {}

  NetworkChangeManagerClient_OnInitialConnectionType_ParamsDataView(
      internal::NetworkChangeManagerClient_OnInitialConnectionType_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::ConnectionType>(
        data_value, output);
  }

  ConnectionType type() const {
    return static_cast<ConnectionType>(data_->type);
  }
 private:
  internal::NetworkChangeManagerClient_OnInitialConnectionType_Params_Data* data_ = nullptr;
};

class NetworkChangeManagerClient_OnNetworkChanged_ParamsDataView {
 public:
  NetworkChangeManagerClient_OnNetworkChanged_ParamsDataView() {}

  NetworkChangeManagerClient_OnNetworkChanged_ParamsDataView(
      internal::NetworkChangeManagerClient_OnNetworkChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::ConnectionType>(
        data_value, output);
  }

  ConnectionType type() const {
    return static_cast<ConnectionType>(data_->type);
  }
 private:
  internal::NetworkChangeManagerClient_OnNetworkChanged_Params_Data* data_ = nullptr;
};

class NetworkChangeManager_RequestNotifications_ParamsDataView {
 public:
  NetworkChangeManager_RequestNotifications_ParamsDataView() {}

  NetworkChangeManager_RequestNotifications_ParamsDataView(
      internal::NetworkChangeManager_RequestNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClientPtr() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::NetworkChangeManagerClientPtrDataView>(
            &data_->client_ptr, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NetworkChangeManager_RequestNotifications_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};







}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_PARAMS_DATA_H_