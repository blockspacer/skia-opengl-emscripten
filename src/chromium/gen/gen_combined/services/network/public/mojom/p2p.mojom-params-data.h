// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_PARAMS_DATA_H_

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
class  P2PNetworkNotificationClient_NetworkListChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PNetworkNotificationClient_NetworkListChanged_Params_Data));
      new (data()) P2PNetworkNotificationClient_NetworkListChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PNetworkNotificationClient_NetworkListChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PNetworkNotificationClient_NetworkListChanged_Params_Data>(index_);
    }
    P2PNetworkNotificationClient_NetworkListChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::NetworkInterface_Data>>> networks;
  mojo::internal::Pointer<::network::mojom::internal::IPAddress_Data> default_ipv4_local_address;
  mojo::internal::Pointer<::network::mojom::internal::IPAddress_Data> default_ipv6_local_address;

 private:
  P2PNetworkNotificationClient_NetworkListChanged_Params_Data();
  ~P2PNetworkNotificationClient_NetworkListChanged_Params_Data() = delete;
};
static_assert(sizeof(P2PNetworkNotificationClient_NetworkListChanged_Params_Data) == 32,
              "Bad sizeof(P2PNetworkNotificationClient_NetworkListChanged_Params_Data)");
class  P2PSocketManager_StartNetworkNotifications_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PSocketManager_StartNetworkNotifications_Params_Data));
      new (data()) P2PSocketManager_StartNetworkNotifications_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PSocketManager_StartNetworkNotifications_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PSocketManager_StartNetworkNotifications_Params_Data>(index_);
    }
    P2PSocketManager_StartNetworkNotifications_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  P2PSocketManager_StartNetworkNotifications_Params_Data();
  ~P2PSocketManager_StartNetworkNotifications_Params_Data() = delete;
};
static_assert(sizeof(P2PSocketManager_StartNetworkNotifications_Params_Data) == 16,
              "Bad sizeof(P2PSocketManager_StartNetworkNotifications_Params_Data)");
class  P2PSocketManager_GetHostAddress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PSocketManager_GetHostAddress_Params_Data));
      new (data()) P2PSocketManager_GetHostAddress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PSocketManager_GetHostAddress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PSocketManager_GetHostAddress_Params_Data>(index_);
    }
    P2PSocketManager_GetHostAddress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> host_name;
  uint8_t enable_mdns : 1;
  uint8_t padfinal_[7];

 private:
  P2PSocketManager_GetHostAddress_Params_Data();
  ~P2PSocketManager_GetHostAddress_Params_Data() = delete;
};
static_assert(sizeof(P2PSocketManager_GetHostAddress_Params_Data) == 24,
              "Bad sizeof(P2PSocketManager_GetHostAddress_Params_Data)");
class  P2PSocketManager_GetHostAddress_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PSocketManager_GetHostAddress_ResponseParams_Data));
      new (data()) P2PSocketManager_GetHostAddress_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PSocketManager_GetHostAddress_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PSocketManager_GetHostAddress_ResponseParams_Data>(index_);
    }
    P2PSocketManager_GetHostAddress_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::IPAddress_Data>>> addresses;

 private:
  P2PSocketManager_GetHostAddress_ResponseParams_Data();
  ~P2PSocketManager_GetHostAddress_ResponseParams_Data() = delete;
};
static_assert(sizeof(P2PSocketManager_GetHostAddress_ResponseParams_Data) == 16,
              "Bad sizeof(P2PSocketManager_GetHostAddress_ResponseParams_Data)");
class  P2PSocketManager_CreateSocket_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PSocketManager_CreateSocket_Params_Data));
      new (data()) P2PSocketManager_CreateSocket_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PSocketManager_CreateSocket_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PSocketManager_CreateSocket_Params_Data>(index_);
    }
    P2PSocketManager_CreateSocket_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  mojo::internal::Handle_Data socket;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> local_address;
  mojo::internal::Pointer<internal::P2PPortRange_Data> port_range;
  mojo::internal::Pointer<internal::P2PHostAndIPEndPoint_Data> remote_address;
  mojo::internal::Interface_Data client;

 private:
  P2PSocketManager_CreateSocket_Params_Data();
  ~P2PSocketManager_CreateSocket_Params_Data() = delete;
};
static_assert(sizeof(P2PSocketManager_CreateSocket_Params_Data) == 48,
              "Bad sizeof(P2PSocketManager_CreateSocket_Params_Data)");
class  P2PSocket_Send_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PSocket_Send_Params_Data));
      new (data()) P2PSocket_Send_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PSocket_Send_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PSocket_Send_Params_Data>(index_);
    }
    P2PSocket_Send_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int8_t>> data;
  mojo::internal::Pointer<internal::P2PPacketInfo_Data> packet_info;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;

 private:
  P2PSocket_Send_Params_Data();
  ~P2PSocket_Send_Params_Data() = delete;
};
static_assert(sizeof(P2PSocket_Send_Params_Data) == 32,
              "Bad sizeof(P2PSocket_Send_Params_Data)");
class  P2PSocket_SetOption_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PSocket_SetOption_Params_Data));
      new (data()) P2PSocket_SetOption_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PSocket_SetOption_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PSocket_SetOption_Params_Data>(index_);
    }
    P2PSocket_SetOption_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t option;
  int32_t value;

 private:
  P2PSocket_SetOption_Params_Data();
  ~P2PSocket_SetOption_Params_Data() = delete;
};
static_assert(sizeof(P2PSocket_SetOption_Params_Data) == 16,
              "Bad sizeof(P2PSocket_SetOption_Params_Data)");
class  P2PSocketClient_SocketCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PSocketClient_SocketCreated_Params_Data));
      new (data()) P2PSocketClient_SocketCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PSocketClient_SocketCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PSocketClient_SocketCreated_Params_Data>(index_);
    }
    P2PSocketClient_SocketCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> local_address;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> remote_address;

 private:
  P2PSocketClient_SocketCreated_Params_Data();
  ~P2PSocketClient_SocketCreated_Params_Data() = delete;
};
static_assert(sizeof(P2PSocketClient_SocketCreated_Params_Data) == 24,
              "Bad sizeof(P2PSocketClient_SocketCreated_Params_Data)");
class  P2PSocketClient_SendComplete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PSocketClient_SendComplete_Params_Data));
      new (data()) P2PSocketClient_SendComplete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PSocketClient_SendComplete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PSocketClient_SendComplete_Params_Data>(index_);
    }
    P2PSocketClient_SendComplete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::P2PSendPacketMetrics_Data> send_metrics;

 private:
  P2PSocketClient_SendComplete_Params_Data();
  ~P2PSocketClient_SendComplete_Params_Data() = delete;
};
static_assert(sizeof(P2PSocketClient_SendComplete_Params_Data) == 16,
              "Bad sizeof(P2PSocketClient_SendComplete_Params_Data)");
class  P2PSocketClient_IncomingTcpConnection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PSocketClient_IncomingTcpConnection_Params_Data));
      new (data()) P2PSocketClient_IncomingTcpConnection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PSocketClient_IncomingTcpConnection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PSocketClient_IncomingTcpConnection_Params_Data>(index_);
    }
    P2PSocketClient_IncomingTcpConnection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> socket_address;
  mojo::internal::Interface_Data socket;
  mojo::internal::Handle_Data client;
  uint8_t padfinal_[4];

 private:
  P2PSocketClient_IncomingTcpConnection_Params_Data();
  ~P2PSocketClient_IncomingTcpConnection_Params_Data() = delete;
};
static_assert(sizeof(P2PSocketClient_IncomingTcpConnection_Params_Data) == 32,
              "Bad sizeof(P2PSocketClient_IncomingTcpConnection_Params_Data)");
class  P2PSocketClient_DataReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(P2PSocketClient_DataReceived_Params_Data));
      new (data()) P2PSocketClient_DataReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    P2PSocketClient_DataReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<P2PSocketClient_DataReceived_Params_Data>(index_);
    }
    P2PSocketClient_DataReceived_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> socket_address;
  mojo::internal::Pointer<mojo::internal::Array_Data<int8_t>> data;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> timestamp;

 private:
  P2PSocketClient_DataReceived_Params_Data();
  ~P2PSocketClient_DataReceived_Params_Data() = delete;
};
static_assert(sizeof(P2PSocketClient_DataReceived_Params_Data) == 32,
              "Bad sizeof(P2PSocketClient_DataReceived_Params_Data)");

}  // namespace internal
class P2PNetworkNotificationClient_NetworkListChanged_ParamsDataView {
 public:
  P2PNetworkNotificationClient_NetworkListChanged_ParamsDataView() {}

  P2PNetworkNotificationClient_NetworkListChanged_ParamsDataView(
      internal::P2PNetworkNotificationClient_NetworkListChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNetworksDataView(
      mojo::ArrayDataView<::network::mojom::NetworkInterfaceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNetworks(UserType* output) {
    auto* pointer = data_->networks.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::NetworkInterfaceDataView>>(
        pointer, output, context_);
  }
  inline void GetDefaultIpv4LocalAddressDataView(
      ::network::mojom::IPAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDefaultIpv4LocalAddress(UserType* output) {
    auto* pointer = data_->default_ipv4_local_address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPAddressDataView>(
        pointer, output, context_);
  }
  inline void GetDefaultIpv6LocalAddressDataView(
      ::network::mojom::IPAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDefaultIpv6LocalAddress(UserType* output) {
    auto* pointer = data_->default_ipv6_local_address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPAddressDataView>(
        pointer, output, context_);
  }
 private:
  internal::P2PNetworkNotificationClient_NetworkListChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class P2PSocketManager_StartNetworkNotifications_ParamsDataView {
 public:
  P2PSocketManager_StartNetworkNotifications_ParamsDataView() {}

  P2PSocketManager_StartNetworkNotifications_ParamsDataView(
      internal::P2PSocketManager_StartNetworkNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::P2PNetworkNotificationClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::P2PSocketManager_StartNetworkNotifications_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class P2PSocketManager_GetHostAddress_ParamsDataView {
 public:
  P2PSocketManager_GetHostAddress_ParamsDataView() {}

  P2PSocketManager_GetHostAddress_ParamsDataView(
      internal::P2PSocketManager_GetHostAddress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostName(UserType* output) {
    auto* pointer = data_->host_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool enable_mdns() const {
    return data_->enable_mdns;
  }
 private:
  internal::P2PSocketManager_GetHostAddress_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class P2PSocketManager_GetHostAddress_ResponseParamsDataView {
 public:
  P2PSocketManager_GetHostAddress_ResponseParamsDataView() {}

  P2PSocketManager_GetHostAddress_ResponseParamsDataView(
      internal::P2PSocketManager_GetHostAddress_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressesDataView(
      mojo::ArrayDataView<::network::mojom::IPAddressDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddresses(UserType* output) {
    auto* pointer = data_->addresses.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::IPAddressDataView>>(
        pointer, output, context_);
  }
 private:
  internal::P2PSocketManager_GetHostAddress_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class P2PSocketManager_CreateSocket_ParamsDataView {
 public:
  P2PSocketManager_CreateSocket_ParamsDataView() {}

  P2PSocketManager_CreateSocket_ParamsDataView(
      internal::P2PSocketManager_CreateSocket_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::P2PSocketType>(
        data_value, output);
  }

  P2PSocketType type() const {
    return static_cast<P2PSocketType>(data_->type);
  }
  inline void GetLocalAddressDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddress(UserType* output) {
    auto* pointer = data_->local_address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetPortRangeDataView(
      P2PPortRangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPortRange(UserType* output) {
    auto* pointer = data_->port_range.Get();
    return mojo::internal::Deserialize<::network::mojom::P2PPortRangeDataView>(
        pointer, output, context_);
  }
  inline void GetRemoteAddressDataView(
      P2PHostAndIPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRemoteAddress(UserType* output) {
    auto* pointer = data_->remote_address.Get();
    return mojo::internal::Deserialize<::network::mojom::P2PHostAndIPEndPointDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::P2PSocketClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeSocket() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::P2PSocketRequestDataView>(
            &data_->socket, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::P2PSocketManager_CreateSocket_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class P2PSocket_Send_ParamsDataView {
 public:
  P2PSocket_Send_ParamsDataView() {}

  P2PSocket_Send_ParamsDataView(
      internal::P2PSocket_Send_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<int8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int8_t>>(
        pointer, output, context_);
  }
  inline void GetPacketInfoDataView(
      P2PPacketInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPacketInfo(UserType* output) {
    auto* pointer = data_->packet_info.Get();
    return mojo::internal::Deserialize<::network::mojom::P2PPacketInfoDataView>(
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
 private:
  internal::P2PSocket_Send_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class P2PSocket_SetOption_ParamsDataView {
 public:
  P2PSocket_SetOption_ParamsDataView() {}

  P2PSocket_SetOption_ParamsDataView(
      internal::P2PSocket_SetOption_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOption(UserType* output) const {
    auto data_value = data_->option;
    return mojo::internal::Deserialize<::network::mojom::P2PSocketOption>(
        data_value, output);
  }

  P2PSocketOption option() const {
    return static_cast<P2PSocketOption>(data_->option);
  }
  int32_t value() const {
    return data_->value;
  }
 private:
  internal::P2PSocket_SetOption_Params_Data* data_ = nullptr;
};

class P2PSocketClient_SocketCreated_ParamsDataView {
 public:
  P2PSocketClient_SocketCreated_ParamsDataView() {}

  P2PSocketClient_SocketCreated_ParamsDataView(
      internal::P2PSocketClient_SocketCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocalAddressDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddress(UserType* output) {
    auto* pointer = data_->local_address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetRemoteAddressDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRemoteAddress(UserType* output) {
    auto* pointer = data_->remote_address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
 private:
  internal::P2PSocketClient_SocketCreated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class P2PSocketClient_SendComplete_ParamsDataView {
 public:
  P2PSocketClient_SendComplete_ParamsDataView() {}

  P2PSocketClient_SendComplete_ParamsDataView(
      internal::P2PSocketClient_SendComplete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSendMetricsDataView(
      P2PSendPacketMetricsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSendMetrics(UserType* output) {
    auto* pointer = data_->send_metrics.Get();
    return mojo::internal::Deserialize<::network::mojom::P2PSendPacketMetricsDataView>(
        pointer, output, context_);
  }
 private:
  internal::P2PSocketClient_SendComplete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class P2PSocketClient_IncomingTcpConnection_ParamsDataView {
 public:
  P2PSocketClient_IncomingTcpConnection_ParamsDataView() {}

  P2PSocketClient_IncomingTcpConnection_ParamsDataView(
      internal::P2PSocketClient_IncomingTcpConnection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSocketAddressDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSocketAddress(UserType* output) {
    auto* pointer = data_->socket_address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSocket() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::P2PSocketPtrDataView>(
            &data_->socket, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::P2PSocketClientRequestDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::P2PSocketClient_IncomingTcpConnection_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class P2PSocketClient_DataReceived_ParamsDataView {
 public:
  P2PSocketClient_DataReceived_ParamsDataView() {}

  P2PSocketClient_DataReceived_ParamsDataView(
      internal::P2PSocketClient_DataReceived_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSocketAddressDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSocketAddress(UserType* output) {
    auto* pointer = data_->socket_address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<int8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int8_t>>(
        pointer, output, context_);
  }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::P2PSocketClient_DataReceived_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void P2PNetworkNotificationClient_NetworkListChanged_ParamsDataView::GetNetworksDataView(
    mojo::ArrayDataView<::network::mojom::NetworkInterfaceDataView>* output) {
  auto pointer = data_->networks.Get();
  *output = mojo::ArrayDataView<::network::mojom::NetworkInterfaceDataView>(pointer, context_);
}
inline void P2PNetworkNotificationClient_NetworkListChanged_ParamsDataView::GetDefaultIpv4LocalAddressDataView(
    ::network::mojom::IPAddressDataView* output) {
  auto pointer = data_->default_ipv4_local_address.Get();
  *output = ::network::mojom::IPAddressDataView(pointer, context_);
}
inline void P2PNetworkNotificationClient_NetworkListChanged_ParamsDataView::GetDefaultIpv6LocalAddressDataView(
    ::network::mojom::IPAddressDataView* output) {
  auto pointer = data_->default_ipv6_local_address.Get();
  *output = ::network::mojom::IPAddressDataView(pointer, context_);
}




inline void P2PSocketManager_GetHostAddress_ParamsDataView::GetHostNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void P2PSocketManager_GetHostAddress_ResponseParamsDataView::GetAddressesDataView(
    mojo::ArrayDataView<::network::mojom::IPAddressDataView>* output) {
  auto pointer = data_->addresses.Get();
  *output = mojo::ArrayDataView<::network::mojom::IPAddressDataView>(pointer, context_);
}


inline void P2PSocketManager_CreateSocket_ParamsDataView::GetLocalAddressDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->local_address.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void P2PSocketManager_CreateSocket_ParamsDataView::GetPortRangeDataView(
    P2PPortRangeDataView* output) {
  auto pointer = data_->port_range.Get();
  *output = P2PPortRangeDataView(pointer, context_);
}
inline void P2PSocketManager_CreateSocket_ParamsDataView::GetRemoteAddressDataView(
    P2PHostAndIPEndPointDataView* output) {
  auto pointer = data_->remote_address.Get();
  *output = P2PHostAndIPEndPointDataView(pointer, context_);
}


inline void P2PSocket_Send_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<int8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<int8_t>(pointer, context_);
}
inline void P2PSocket_Send_ParamsDataView::GetPacketInfoDataView(
    P2PPacketInfoDataView* output) {
  auto pointer = data_->packet_info.Get();
  *output = P2PPacketInfoDataView(pointer, context_);
}
inline void P2PSocket_Send_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}




inline void P2PSocketClient_SocketCreated_ParamsDataView::GetLocalAddressDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->local_address.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void P2PSocketClient_SocketCreated_ParamsDataView::GetRemoteAddressDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->remote_address.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}


inline void P2PSocketClient_SendComplete_ParamsDataView::GetSendMetricsDataView(
    P2PSendPacketMetricsDataView* output) {
  auto pointer = data_->send_metrics.Get();
  *output = P2PSendPacketMetricsDataView(pointer, context_);
}


inline void P2PSocketClient_IncomingTcpConnection_ParamsDataView::GetSocketAddressDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->socket_address.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}


inline void P2PSocketClient_DataReceived_ParamsDataView::GetSocketAddressDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->socket_address.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void P2PSocketClient_DataReceived_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<int8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<int8_t>(pointer, context_);
}
inline void P2PSocketClient_DataReceived_ParamsDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_PARAMS_DATA_H_