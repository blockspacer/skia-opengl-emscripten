// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_PARAMS_DATA_H_

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
class  TCPBoundSocket_Listen_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPBoundSocket_Listen_Params_Data));
      new (data()) TCPBoundSocket_Listen_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPBoundSocket_Listen_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPBoundSocket_Listen_Params_Data>(index_);
    }
    TCPBoundSocket_Listen_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t backlog;
  mojo::internal::Handle_Data socket;

 private:
  TCPBoundSocket_Listen_Params_Data();
  ~TCPBoundSocket_Listen_Params_Data() = delete;
};
static_assert(sizeof(TCPBoundSocket_Listen_Params_Data) == 16,
              "Bad sizeof(TCPBoundSocket_Listen_Params_Data)");
class  TCPBoundSocket_Listen_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPBoundSocket_Listen_ResponseParams_Data));
      new (data()) TCPBoundSocket_Listen_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPBoundSocket_Listen_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPBoundSocket_Listen_ResponseParams_Data>(index_);
    }
    TCPBoundSocket_Listen_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t padfinal_[4];

 private:
  TCPBoundSocket_Listen_ResponseParams_Data();
  ~TCPBoundSocket_Listen_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPBoundSocket_Listen_ResponseParams_Data) == 16,
              "Bad sizeof(TCPBoundSocket_Listen_ResponseParams_Data)");
class  TCPBoundSocket_Connect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPBoundSocket_Connect_Params_Data));
      new (data()) TCPBoundSocket_Connect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPBoundSocket_Connect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPBoundSocket_Connect_Params_Data>(index_);
    }
    TCPBoundSocket_Connect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::AddressList_Data> remote_addr_list;
  mojo::internal::Pointer<internal::TCPConnectedSocketOptions_Data> tcp_connected_socket_options;
  mojo::internal::Handle_Data socket;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  TCPBoundSocket_Connect_Params_Data();
  ~TCPBoundSocket_Connect_Params_Data() = delete;
};
static_assert(sizeof(TCPBoundSocket_Connect_Params_Data) == 40,
              "Bad sizeof(TCPBoundSocket_Connect_Params_Data)");
class  TCPBoundSocket_Connect_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPBoundSocket_Connect_ResponseParams_Data));
      new (data()) TCPBoundSocket_Connect_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPBoundSocket_Connect_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPBoundSocket_Connect_ResponseParams_Data>(index_);
    }
    TCPBoundSocket_Connect_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> local_addr;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> peer_addr;
  mojo::internal::Handle_Data send_stream;
  uint8_t padfinal_[4];

 private:
  TCPBoundSocket_Connect_ResponseParams_Data();
  ~TCPBoundSocket_Connect_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPBoundSocket_Connect_ResponseParams_Data) == 40,
              "Bad sizeof(TCPBoundSocket_Connect_ResponseParams_Data)");
class  TCPConnectedSocket_UpgradeToTLS_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_UpgradeToTLS_Params_Data));
      new (data()) TCPConnectedSocket_UpgradeToTLS_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_UpgradeToTLS_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_UpgradeToTLS_Params_Data>(index_);
    }
    TCPConnectedSocket_UpgradeToTLS_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::HostPortPair_Data> host_port_pair;
  mojo::internal::Pointer<::network::mojom::internal::TLSClientSocketOptions_Data> options;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;
  mojo::internal::Handle_Data request;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  TCPConnectedSocket_UpgradeToTLS_Params_Data();
  ~TCPConnectedSocket_UpgradeToTLS_Params_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_UpgradeToTLS_Params_Data) == 48,
              "Bad sizeof(TCPConnectedSocket_UpgradeToTLS_Params_Data)");
class  TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data));
      new (data()) TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data>(index_);
    }
    TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data* operator->() { return data(); }

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
  uint8_t pad2_[4];
  mojo::internal::Pointer<::network::mojom::internal::SSLInfo_Data> ssl_info;

 private:
  TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data();
  ~TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data) == 32,
              "Bad sizeof(TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data)");
class  TCPConnectedSocket_SetSendBufferSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_SetSendBufferSize_Params_Data));
      new (data()) TCPConnectedSocket_SetSendBufferSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_SetSendBufferSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_SetSendBufferSize_Params_Data>(index_);
    }
    TCPConnectedSocket_SetSendBufferSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t send_buffer_size;
  uint8_t padfinal_[4];

 private:
  TCPConnectedSocket_SetSendBufferSize_Params_Data();
  ~TCPConnectedSocket_SetSendBufferSize_Params_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_SetSendBufferSize_Params_Data) == 16,
              "Bad sizeof(TCPConnectedSocket_SetSendBufferSize_Params_Data)");
class  TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data));
      new (data()) TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data>(index_);
    }
    TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t padfinal_[4];

 private:
  TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data();
  ~TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data) == 16,
              "Bad sizeof(TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data)");
class  TCPConnectedSocket_SetReceiveBufferSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_SetReceiveBufferSize_Params_Data));
      new (data()) TCPConnectedSocket_SetReceiveBufferSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_SetReceiveBufferSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_SetReceiveBufferSize_Params_Data>(index_);
    }
    TCPConnectedSocket_SetReceiveBufferSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t receive_buffer_size;
  uint8_t padfinal_[4];

 private:
  TCPConnectedSocket_SetReceiveBufferSize_Params_Data();
  ~TCPConnectedSocket_SetReceiveBufferSize_Params_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_SetReceiveBufferSize_Params_Data) == 16,
              "Bad sizeof(TCPConnectedSocket_SetReceiveBufferSize_Params_Data)");
class  TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data));
      new (data()) TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data>(index_);
    }
    TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t padfinal_[4];

 private:
  TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data();
  ~TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data) == 16,
              "Bad sizeof(TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data)");
class  TCPConnectedSocket_SetNoDelay_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_SetNoDelay_Params_Data));
      new (data()) TCPConnectedSocket_SetNoDelay_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_SetNoDelay_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_SetNoDelay_Params_Data>(index_);
    }
    TCPConnectedSocket_SetNoDelay_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t no_delay : 1;
  uint8_t padfinal_[7];

 private:
  TCPConnectedSocket_SetNoDelay_Params_Data();
  ~TCPConnectedSocket_SetNoDelay_Params_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_SetNoDelay_Params_Data) == 16,
              "Bad sizeof(TCPConnectedSocket_SetNoDelay_Params_Data)");
class  TCPConnectedSocket_SetNoDelay_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_SetNoDelay_ResponseParams_Data));
      new (data()) TCPConnectedSocket_SetNoDelay_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_SetNoDelay_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_SetNoDelay_ResponseParams_Data>(index_);
    }
    TCPConnectedSocket_SetNoDelay_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  TCPConnectedSocket_SetNoDelay_ResponseParams_Data();
  ~TCPConnectedSocket_SetNoDelay_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_SetNoDelay_ResponseParams_Data) == 16,
              "Bad sizeof(TCPConnectedSocket_SetNoDelay_ResponseParams_Data)");
class  TCPConnectedSocket_SetKeepAlive_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_SetKeepAlive_Params_Data));
      new (data()) TCPConnectedSocket_SetKeepAlive_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_SetKeepAlive_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_SetKeepAlive_Params_Data>(index_);
    }
    TCPConnectedSocket_SetKeepAlive_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enable : 1;
  uint8_t pad0_[3];
  int32_t delay_secs;

 private:
  TCPConnectedSocket_SetKeepAlive_Params_Data();
  ~TCPConnectedSocket_SetKeepAlive_Params_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_SetKeepAlive_Params_Data) == 16,
              "Bad sizeof(TCPConnectedSocket_SetKeepAlive_Params_Data)");
class  TCPConnectedSocket_SetKeepAlive_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPConnectedSocket_SetKeepAlive_ResponseParams_Data));
      new (data()) TCPConnectedSocket_SetKeepAlive_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPConnectedSocket_SetKeepAlive_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPConnectedSocket_SetKeepAlive_ResponseParams_Data>(index_);
    }
    TCPConnectedSocket_SetKeepAlive_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  TCPConnectedSocket_SetKeepAlive_ResponseParams_Data();
  ~TCPConnectedSocket_SetKeepAlive_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPConnectedSocket_SetKeepAlive_ResponseParams_Data) == 16,
              "Bad sizeof(TCPConnectedSocket_SetKeepAlive_ResponseParams_Data)");
class  SocketObserver_OnReadError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SocketObserver_OnReadError_Params_Data));
      new (data()) SocketObserver_OnReadError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SocketObserver_OnReadError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SocketObserver_OnReadError_Params_Data>(index_);
    }
    SocketObserver_OnReadError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t padfinal_[4];

 private:
  SocketObserver_OnReadError_Params_Data();
  ~SocketObserver_OnReadError_Params_Data() = delete;
};
static_assert(sizeof(SocketObserver_OnReadError_Params_Data) == 16,
              "Bad sizeof(SocketObserver_OnReadError_Params_Data)");
class  SocketObserver_OnWriteError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SocketObserver_OnWriteError_Params_Data));
      new (data()) SocketObserver_OnWriteError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SocketObserver_OnWriteError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SocketObserver_OnWriteError_Params_Data>(index_);
    }
    SocketObserver_OnWriteError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t padfinal_[4];

 private:
  SocketObserver_OnWriteError_Params_Data();
  ~SocketObserver_OnWriteError_Params_Data() = delete;
};
static_assert(sizeof(SocketObserver_OnWriteError_Params_Data) == 16,
              "Bad sizeof(SocketObserver_OnWriteError_Params_Data)");
class  TCPServerSocket_Accept_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPServerSocket_Accept_Params_Data));
      new (data()) TCPServerSocket_Accept_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPServerSocket_Accept_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPServerSocket_Accept_Params_Data>(index_);
    }
    TCPServerSocket_Accept_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data observer;

 private:
  TCPServerSocket_Accept_Params_Data();
  ~TCPServerSocket_Accept_Params_Data() = delete;
};
static_assert(sizeof(TCPServerSocket_Accept_Params_Data) == 16,
              "Bad sizeof(TCPServerSocket_Accept_Params_Data)");
class  TCPServerSocket_Accept_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TCPServerSocket_Accept_ResponseParams_Data));
      new (data()) TCPServerSocket_Accept_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TCPServerSocket_Accept_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TCPServerSocket_Accept_ResponseParams_Data>(index_);
    }
    TCPServerSocket_Accept_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  mojo::internal::Handle_Data send_stream;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> remote_addr;
  mojo::internal::Interface_Data connected_socket;
  mojo::internal::Handle_Data receive_stream;
  uint8_t padfinal_[4];

 private:
  TCPServerSocket_Accept_ResponseParams_Data();
  ~TCPServerSocket_Accept_ResponseParams_Data() = delete;
};
static_assert(sizeof(TCPServerSocket_Accept_ResponseParams_Data) == 40,
              "Bad sizeof(TCPServerSocket_Accept_ResponseParams_Data)");

}  // namespace internal
class TCPBoundSocket_Listen_ParamsDataView {
 public:
  TCPBoundSocket_Listen_ParamsDataView() {}

  TCPBoundSocket_Listen_ParamsDataView(
      internal::TCPBoundSocket_Listen_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t backlog() const {
    return data_->backlog;
  }
  template <typename UserType>
  UserType TakeSocket() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TCPServerSocketRequestDataView>(
            &data_->socket, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TCPBoundSocket_Listen_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TCPBoundSocket_Listen_ResponseParamsDataView {
 public:
  TCPBoundSocket_Listen_ResponseParamsDataView() {}

  TCPBoundSocket_Listen_ResponseParamsDataView(
      internal::TCPBoundSocket_Listen_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::TCPBoundSocket_Listen_ResponseParams_Data* data_ = nullptr;
};

class TCPBoundSocket_Connect_ParamsDataView {
 public:
  TCPBoundSocket_Connect_ParamsDataView() {}

  TCPBoundSocket_Connect_ParamsDataView(
      internal::TCPBoundSocket_Connect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRemoteAddrListDataView(
      ::network::mojom::AddressListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRemoteAddrList(UserType* output) {
    auto* pointer = data_->remote_addr_list.Get();
    return mojo::internal::Deserialize<::network::mojom::AddressListDataView>(
        pointer, output, context_);
  }
  inline void GetTcpConnectedSocketOptionsDataView(
      TCPConnectedSocketOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTcpConnectedSocketOptions(UserType* output) {
    auto* pointer = data_->tcp_connected_socket_options.Get();
    return mojo::internal::Deserialize<::network::mojom::TCPConnectedSocketOptionsDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSocket() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TCPConnectedSocketRequestDataView>(
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
  internal::TCPBoundSocket_Connect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TCPBoundSocket_Connect_ResponseParamsDataView {
 public:
  TCPBoundSocket_Connect_ResponseParamsDataView() {}

  TCPBoundSocket_Connect_ResponseParamsDataView(
      internal::TCPBoundSocket_Connect_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
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
  internal::TCPBoundSocket_Connect_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TCPConnectedSocket_UpgradeToTLS_ParamsDataView {
 public:
  TCPConnectedSocket_UpgradeToTLS_ParamsDataView() {}

  TCPConnectedSocket_UpgradeToTLS_ParamsDataView(
      internal::TCPConnectedSocket_UpgradeToTLS_Params_Data* data,
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
  inline void GetOptionsDataView(
      ::network::mojom::TLSClientSocketOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::network::mojom::TLSClientSocketOptionsDataView>(
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
  internal::TCPConnectedSocket_UpgradeToTLS_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TCPConnectedSocket_UpgradeToTLS_ResponseParamsDataView {
 public:
  TCPConnectedSocket_UpgradeToTLS_ResponseParamsDataView() {}

  TCPConnectedSocket_UpgradeToTLS_ResponseParamsDataView(
      internal::TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data* data,
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
  inline void GetSslInfoDataView(
      ::network::mojom::SSLInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSslInfo(UserType* output) {
    auto* pointer = data_->ssl_info.Get();
    return mojo::internal::Deserialize<::network::mojom::SSLInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TCPConnectedSocket_SetSendBufferSize_ParamsDataView {
 public:
  TCPConnectedSocket_SetSendBufferSize_ParamsDataView() {}

  TCPConnectedSocket_SetSendBufferSize_ParamsDataView(
      internal::TCPConnectedSocket_SetSendBufferSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t send_buffer_size() const {
    return data_->send_buffer_size;
  }
 private:
  internal::TCPConnectedSocket_SetSendBufferSize_Params_Data* data_ = nullptr;
};

class TCPConnectedSocket_SetSendBufferSize_ResponseParamsDataView {
 public:
  TCPConnectedSocket_SetSendBufferSize_ResponseParamsDataView() {}

  TCPConnectedSocket_SetSendBufferSize_ResponseParamsDataView(
      internal::TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data* data_ = nullptr;
};

class TCPConnectedSocket_SetReceiveBufferSize_ParamsDataView {
 public:
  TCPConnectedSocket_SetReceiveBufferSize_ParamsDataView() {}

  TCPConnectedSocket_SetReceiveBufferSize_ParamsDataView(
      internal::TCPConnectedSocket_SetReceiveBufferSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t receive_buffer_size() const {
    return data_->receive_buffer_size;
  }
 private:
  internal::TCPConnectedSocket_SetReceiveBufferSize_Params_Data* data_ = nullptr;
};

class TCPConnectedSocket_SetReceiveBufferSize_ResponseParamsDataView {
 public:
  TCPConnectedSocket_SetReceiveBufferSize_ResponseParamsDataView() {}

  TCPConnectedSocket_SetReceiveBufferSize_ResponseParamsDataView(
      internal::TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data* data_ = nullptr;
};

class TCPConnectedSocket_SetNoDelay_ParamsDataView {
 public:
  TCPConnectedSocket_SetNoDelay_ParamsDataView() {}

  TCPConnectedSocket_SetNoDelay_ParamsDataView(
      internal::TCPConnectedSocket_SetNoDelay_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool no_delay() const {
    return data_->no_delay;
  }
 private:
  internal::TCPConnectedSocket_SetNoDelay_Params_Data* data_ = nullptr;
};

class TCPConnectedSocket_SetNoDelay_ResponseParamsDataView {
 public:
  TCPConnectedSocket_SetNoDelay_ResponseParamsDataView() {}

  TCPConnectedSocket_SetNoDelay_ResponseParamsDataView(
      internal::TCPConnectedSocket_SetNoDelay_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::TCPConnectedSocket_SetNoDelay_ResponseParams_Data* data_ = nullptr;
};

class TCPConnectedSocket_SetKeepAlive_ParamsDataView {
 public:
  TCPConnectedSocket_SetKeepAlive_ParamsDataView() {}

  TCPConnectedSocket_SetKeepAlive_ParamsDataView(
      internal::TCPConnectedSocket_SetKeepAlive_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enable() const {
    return data_->enable;
  }
  int32_t delay_secs() const {
    return data_->delay_secs;
  }
 private:
  internal::TCPConnectedSocket_SetKeepAlive_Params_Data* data_ = nullptr;
};

class TCPConnectedSocket_SetKeepAlive_ResponseParamsDataView {
 public:
  TCPConnectedSocket_SetKeepAlive_ResponseParamsDataView() {}

  TCPConnectedSocket_SetKeepAlive_ResponseParamsDataView(
      internal::TCPConnectedSocket_SetKeepAlive_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::TCPConnectedSocket_SetKeepAlive_ResponseParams_Data* data_ = nullptr;
};

class SocketObserver_OnReadError_ParamsDataView {
 public:
  SocketObserver_OnReadError_ParamsDataView() {}

  SocketObserver_OnReadError_ParamsDataView(
      internal::SocketObserver_OnReadError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::SocketObserver_OnReadError_Params_Data* data_ = nullptr;
};

class SocketObserver_OnWriteError_ParamsDataView {
 public:
  SocketObserver_OnWriteError_ParamsDataView() {}

  SocketObserver_OnWriteError_ParamsDataView(
      internal::SocketObserver_OnWriteError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::SocketObserver_OnWriteError_Params_Data* data_ = nullptr;
};

class TCPServerSocket_Accept_ParamsDataView {
 public:
  TCPServerSocket_Accept_ParamsDataView() {}

  TCPServerSocket_Accept_ParamsDataView(
      internal::TCPServerSocket_Accept_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
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
  internal::TCPServerSocket_Accept_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TCPServerSocket_Accept_ResponseParamsDataView {
 public:
  TCPServerSocket_Accept_ResponseParamsDataView() {}

  TCPServerSocket_Accept_ResponseParamsDataView(
      internal::TCPServerSocket_Accept_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
  inline void GetRemoteAddrDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRemoteAddr(UserType* output) {
    auto* pointer = data_->remote_addr.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeConnectedSocket() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TCPConnectedSocketPtrDataView>(
            &data_->connected_socket, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeConsumerHandle TakeSendStream() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->send_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeProducerHandle TakeReceiveStream() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->receive_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TCPServerSocket_Accept_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};






inline void TCPBoundSocket_Connect_ParamsDataView::GetRemoteAddrListDataView(
    ::network::mojom::AddressListDataView* output) {
  auto pointer = data_->remote_addr_list.Get();
  *output = ::network::mojom::AddressListDataView(pointer, context_);
}
inline void TCPBoundSocket_Connect_ParamsDataView::GetTcpConnectedSocketOptionsDataView(
    TCPConnectedSocketOptionsDataView* output) {
  auto pointer = data_->tcp_connected_socket_options.Get();
  *output = TCPConnectedSocketOptionsDataView(pointer, context_);
}


inline void TCPBoundSocket_Connect_ResponseParamsDataView::GetLocalAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->local_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void TCPBoundSocket_Connect_ResponseParamsDataView::GetPeerAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->peer_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}


inline void TCPConnectedSocket_UpgradeToTLS_ParamsDataView::GetHostPortPairDataView(
    ::network::mojom::HostPortPairDataView* output) {
  auto pointer = data_->host_port_pair.Get();
  *output = ::network::mojom::HostPortPairDataView(pointer, context_);
}
inline void TCPConnectedSocket_UpgradeToTLS_ParamsDataView::GetOptionsDataView(
    ::network::mojom::TLSClientSocketOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = ::network::mojom::TLSClientSocketOptionsDataView(pointer, context_);
}
inline void TCPConnectedSocket_UpgradeToTLS_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}


inline void TCPConnectedSocket_UpgradeToTLS_ResponseParamsDataView::GetSslInfoDataView(
    ::network::mojom::SSLInfoDataView* output) {
  auto pointer = data_->ssl_info.Get();
  *output = ::network::mojom::SSLInfoDataView(pointer, context_);
}
























inline void TCPServerSocket_Accept_ResponseParamsDataView::GetRemoteAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->remote_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_PARAMS_DATA_H_