// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_PARAMS_DATA_H_

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
class  UDPSocket_Bind_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Bind_Params_Data));
      new (data()) UDPSocket_Bind_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Bind_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Bind_Params_Data>(index_);
    }
    UDPSocket_Bind_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> local_addr;
  mojo::internal::Pointer<internal::UDPSocketOptions_Data> socket_options;

 private:
  UDPSocket_Bind_Params_Data();
  ~UDPSocket_Bind_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_Bind_Params_Data) == 24,
              "Bad sizeof(UDPSocket_Bind_Params_Data)");
class  UDPSocket_Bind_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Bind_ResponseParams_Data));
      new (data()) UDPSocket_Bind_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Bind_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Bind_ResponseParams_Data>(index_);
    }
    UDPSocket_Bind_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> local_addr_out;

 private:
  UDPSocket_Bind_ResponseParams_Data();
  ~UDPSocket_Bind_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_Bind_ResponseParams_Data) == 24,
              "Bad sizeof(UDPSocket_Bind_ResponseParams_Data)");
class  UDPSocket_Connect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Connect_Params_Data));
      new (data()) UDPSocket_Connect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Connect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Connect_Params_Data>(index_);
    }
    UDPSocket_Connect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> remote_addr;
  mojo::internal::Pointer<internal::UDPSocketOptions_Data> socket_options;

 private:
  UDPSocket_Connect_Params_Data();
  ~UDPSocket_Connect_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_Connect_Params_Data) == 24,
              "Bad sizeof(UDPSocket_Connect_Params_Data)");
class  UDPSocket_Connect_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Connect_ResponseParams_Data));
      new (data()) UDPSocket_Connect_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Connect_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Connect_ResponseParams_Data>(index_);
    }
    UDPSocket_Connect_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> local_addr_out;

 private:
  UDPSocket_Connect_ResponseParams_Data();
  ~UDPSocket_Connect_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_Connect_ResponseParams_Data) == 24,
              "Bad sizeof(UDPSocket_Connect_ResponseParams_Data)");
class  UDPSocket_SetBroadcast_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_SetBroadcast_Params_Data));
      new (data()) UDPSocket_SetBroadcast_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_SetBroadcast_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_SetBroadcast_Params_Data>(index_);
    }
    UDPSocket_SetBroadcast_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t broadcast : 1;
  uint8_t padfinal_[7];

 private:
  UDPSocket_SetBroadcast_Params_Data();
  ~UDPSocket_SetBroadcast_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_SetBroadcast_Params_Data) == 16,
              "Bad sizeof(UDPSocket_SetBroadcast_Params_Data)");
class  UDPSocket_SetBroadcast_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_SetBroadcast_ResponseParams_Data));
      new (data()) UDPSocket_SetBroadcast_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_SetBroadcast_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_SetBroadcast_ResponseParams_Data>(index_);
    }
    UDPSocket_SetBroadcast_ResponseParams_Data* operator->() { return data(); }

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
  UDPSocket_SetBroadcast_ResponseParams_Data();
  ~UDPSocket_SetBroadcast_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_SetBroadcast_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_SetBroadcast_ResponseParams_Data)");
class  UDPSocket_SetSendBufferSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_SetSendBufferSize_Params_Data));
      new (data()) UDPSocket_SetSendBufferSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_SetSendBufferSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_SetSendBufferSize_Params_Data>(index_);
    }
    UDPSocket_SetSendBufferSize_Params_Data* operator->() { return data(); }

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
  UDPSocket_SetSendBufferSize_Params_Data();
  ~UDPSocket_SetSendBufferSize_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_SetSendBufferSize_Params_Data) == 16,
              "Bad sizeof(UDPSocket_SetSendBufferSize_Params_Data)");
class  UDPSocket_SetSendBufferSize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_SetSendBufferSize_ResponseParams_Data));
      new (data()) UDPSocket_SetSendBufferSize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_SetSendBufferSize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_SetSendBufferSize_ResponseParams_Data>(index_);
    }
    UDPSocket_SetSendBufferSize_ResponseParams_Data* operator->() { return data(); }

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
  UDPSocket_SetSendBufferSize_ResponseParams_Data();
  ~UDPSocket_SetSendBufferSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_SetSendBufferSize_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_SetSendBufferSize_ResponseParams_Data)");
class  UDPSocket_SetReceiveBufferSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_SetReceiveBufferSize_Params_Data));
      new (data()) UDPSocket_SetReceiveBufferSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_SetReceiveBufferSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_SetReceiveBufferSize_Params_Data>(index_);
    }
    UDPSocket_SetReceiveBufferSize_Params_Data* operator->() { return data(); }

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
  UDPSocket_SetReceiveBufferSize_Params_Data();
  ~UDPSocket_SetReceiveBufferSize_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_SetReceiveBufferSize_Params_Data) == 16,
              "Bad sizeof(UDPSocket_SetReceiveBufferSize_Params_Data)");
class  UDPSocket_SetReceiveBufferSize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_SetReceiveBufferSize_ResponseParams_Data));
      new (data()) UDPSocket_SetReceiveBufferSize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_SetReceiveBufferSize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_SetReceiveBufferSize_ResponseParams_Data>(index_);
    }
    UDPSocket_SetReceiveBufferSize_ResponseParams_Data* operator->() { return data(); }

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
  UDPSocket_SetReceiveBufferSize_ResponseParams_Data();
  ~UDPSocket_SetReceiveBufferSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_SetReceiveBufferSize_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_SetReceiveBufferSize_ResponseParams_Data)");
class  UDPSocket_JoinGroup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_JoinGroup_Params_Data));
      new (data()) UDPSocket_JoinGroup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_JoinGroup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_JoinGroup_Params_Data>(index_);
    }
    UDPSocket_JoinGroup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPAddress_Data> group_address;

 private:
  UDPSocket_JoinGroup_Params_Data();
  ~UDPSocket_JoinGroup_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_JoinGroup_Params_Data) == 16,
              "Bad sizeof(UDPSocket_JoinGroup_Params_Data)");
class  UDPSocket_JoinGroup_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_JoinGroup_ResponseParams_Data));
      new (data()) UDPSocket_JoinGroup_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_JoinGroup_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_JoinGroup_ResponseParams_Data>(index_);
    }
    UDPSocket_JoinGroup_ResponseParams_Data* operator->() { return data(); }

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
  UDPSocket_JoinGroup_ResponseParams_Data();
  ~UDPSocket_JoinGroup_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_JoinGroup_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_JoinGroup_ResponseParams_Data)");
class  UDPSocket_LeaveGroup_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_LeaveGroup_Params_Data));
      new (data()) UDPSocket_LeaveGroup_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_LeaveGroup_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_LeaveGroup_Params_Data>(index_);
    }
    UDPSocket_LeaveGroup_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPAddress_Data> group_address;

 private:
  UDPSocket_LeaveGroup_Params_Data();
  ~UDPSocket_LeaveGroup_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_LeaveGroup_Params_Data) == 16,
              "Bad sizeof(UDPSocket_LeaveGroup_Params_Data)");
class  UDPSocket_LeaveGroup_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_LeaveGroup_ResponseParams_Data));
      new (data()) UDPSocket_LeaveGroup_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_LeaveGroup_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_LeaveGroup_ResponseParams_Data>(index_);
    }
    UDPSocket_LeaveGroup_ResponseParams_Data* operator->() { return data(); }

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
  UDPSocket_LeaveGroup_ResponseParams_Data();
  ~UDPSocket_LeaveGroup_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_LeaveGroup_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_LeaveGroup_ResponseParams_Data)");
class  UDPSocket_ReceiveMore_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_ReceiveMore_Params_Data));
      new (data()) UDPSocket_ReceiveMore_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_ReceiveMore_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_ReceiveMore_Params_Data>(index_);
    }
    UDPSocket_ReceiveMore_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t num_additional_datagrams;
  uint8_t padfinal_[4];

 private:
  UDPSocket_ReceiveMore_Params_Data();
  ~UDPSocket_ReceiveMore_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_ReceiveMore_Params_Data) == 16,
              "Bad sizeof(UDPSocket_ReceiveMore_Params_Data)");
class  UDPSocket_ReceiveMoreWithBufferSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_ReceiveMoreWithBufferSize_Params_Data));
      new (data()) UDPSocket_ReceiveMoreWithBufferSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_ReceiveMoreWithBufferSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_ReceiveMoreWithBufferSize_Params_Data>(index_);
    }
    UDPSocket_ReceiveMoreWithBufferSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t num_additional_datagrams;
  uint32_t buffer_size;

 private:
  UDPSocket_ReceiveMoreWithBufferSize_Params_Data();
  ~UDPSocket_ReceiveMoreWithBufferSize_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_ReceiveMoreWithBufferSize_Params_Data) == 16,
              "Bad sizeof(UDPSocket_ReceiveMoreWithBufferSize_Params_Data)");
class  UDPSocket_SendTo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_SendTo_Params_Data));
      new (data()) UDPSocket_SendTo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_SendTo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_SendTo_Params_Data>(index_);
    }
    UDPSocket_SendTo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> dest_addr;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlyBuffer_Data> data;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;

 private:
  UDPSocket_SendTo_Params_Data();
  ~UDPSocket_SendTo_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_SendTo_Params_Data) == 32,
              "Bad sizeof(UDPSocket_SendTo_Params_Data)");
class  UDPSocket_SendTo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_SendTo_ResponseParams_Data));
      new (data()) UDPSocket_SendTo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_SendTo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_SendTo_ResponseParams_Data>(index_);
    }
    UDPSocket_SendTo_ResponseParams_Data* operator->() { return data(); }

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
  UDPSocket_SendTo_ResponseParams_Data();
  ~UDPSocket_SendTo_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_SendTo_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_SendTo_ResponseParams_Data)");
class  UDPSocket_Send_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Send_Params_Data));
      new (data()) UDPSocket_Send_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Send_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Send_Params_Data>(index_);
    }
    UDPSocket_Send_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlyBuffer_Data> data;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;

 private:
  UDPSocket_Send_Params_Data();
  ~UDPSocket_Send_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_Send_Params_Data) == 24,
              "Bad sizeof(UDPSocket_Send_Params_Data)");
class  UDPSocket_Send_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Send_ResponseParams_Data));
      new (data()) UDPSocket_Send_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Send_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Send_ResponseParams_Data>(index_);
    }
    UDPSocket_Send_ResponseParams_Data* operator->() { return data(); }

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
  UDPSocket_Send_ResponseParams_Data();
  ~UDPSocket_Send_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_Send_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_Send_ResponseParams_Data)");
class  UDPSocket_Close_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocket_Close_Params_Data));
      new (data()) UDPSocket_Close_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocket_Close_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocket_Close_Params_Data>(index_);
    }
    UDPSocket_Close_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UDPSocket_Close_Params_Data();
  ~UDPSocket_Close_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_Close_Params_Data) == 8,
              "Bad sizeof(UDPSocket_Close_Params_Data)");
class  UDPSocketReceiver_OnReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocketReceiver_OnReceived_Params_Data));
      new (data()) UDPSocketReceiver_OnReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocketReceiver_OnReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocketReceiver_OnReceived_Params_Data>(index_);
    }
    UDPSocketReceiver_OnReceived_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> src_addr;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlyBuffer_Data> data;

 private:
  UDPSocketReceiver_OnReceived_Params_Data();
  ~UDPSocketReceiver_OnReceived_Params_Data() = delete;
};
static_assert(sizeof(UDPSocketReceiver_OnReceived_Params_Data) == 32,
              "Bad sizeof(UDPSocketReceiver_OnReceived_Params_Data)");

}  // namespace internal
class UDPSocket_Bind_ParamsDataView {
 public:
  UDPSocket_Bind_ParamsDataView() {}

  UDPSocket_Bind_ParamsDataView(
      internal::UDPSocket_Bind_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocalAddrDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddr(UserType* output) {
    auto* pointer = data_->local_addr.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetSocketOptionsDataView(
      UDPSocketOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSocketOptions(UserType* output) {
    auto* pointer = data_->socket_options.Get();
    return mojo::internal::Deserialize<::network::mojom::UDPSocketOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_Bind_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_Bind_ResponseParamsDataView {
 public:
  UDPSocket_Bind_ResponseParamsDataView() {}

  UDPSocket_Bind_ResponseParamsDataView(
      internal::UDPSocket_Bind_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetLocalAddrOutDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddrOut(UserType* output) {
    auto* pointer = data_->local_addr_out.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_Bind_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_Connect_ParamsDataView {
 public:
  UDPSocket_Connect_ParamsDataView() {}

  UDPSocket_Connect_ParamsDataView(
      internal::UDPSocket_Connect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRemoteAddrDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRemoteAddr(UserType* output) {
    auto* pointer = data_->remote_addr.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetSocketOptionsDataView(
      UDPSocketOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSocketOptions(UserType* output) {
    auto* pointer = data_->socket_options.Get();
    return mojo::internal::Deserialize<::network::mojom::UDPSocketOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_Connect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_Connect_ResponseParamsDataView {
 public:
  UDPSocket_Connect_ResponseParamsDataView() {}

  UDPSocket_Connect_ResponseParamsDataView(
      internal::UDPSocket_Connect_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetLocalAddrOutDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalAddrOut(UserType* output) {
    auto* pointer = data_->local_addr_out.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_Connect_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_SetBroadcast_ParamsDataView {
 public:
  UDPSocket_SetBroadcast_ParamsDataView() {}

  UDPSocket_SetBroadcast_ParamsDataView(
      internal::UDPSocket_SetBroadcast_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool broadcast() const {
    return data_->broadcast;
  }
 private:
  internal::UDPSocket_SetBroadcast_Params_Data* data_ = nullptr;
};

class UDPSocket_SetBroadcast_ResponseParamsDataView {
 public:
  UDPSocket_SetBroadcast_ResponseParamsDataView() {}

  UDPSocket_SetBroadcast_ResponseParamsDataView(
      internal::UDPSocket_SetBroadcast_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::UDPSocket_SetBroadcast_ResponseParams_Data* data_ = nullptr;
};

class UDPSocket_SetSendBufferSize_ParamsDataView {
 public:
  UDPSocket_SetSendBufferSize_ParamsDataView() {}

  UDPSocket_SetSendBufferSize_ParamsDataView(
      internal::UDPSocket_SetSendBufferSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t send_buffer_size() const {
    return data_->send_buffer_size;
  }
 private:
  internal::UDPSocket_SetSendBufferSize_Params_Data* data_ = nullptr;
};

class UDPSocket_SetSendBufferSize_ResponseParamsDataView {
 public:
  UDPSocket_SetSendBufferSize_ResponseParamsDataView() {}

  UDPSocket_SetSendBufferSize_ResponseParamsDataView(
      internal::UDPSocket_SetSendBufferSize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::UDPSocket_SetSendBufferSize_ResponseParams_Data* data_ = nullptr;
};

class UDPSocket_SetReceiveBufferSize_ParamsDataView {
 public:
  UDPSocket_SetReceiveBufferSize_ParamsDataView() {}

  UDPSocket_SetReceiveBufferSize_ParamsDataView(
      internal::UDPSocket_SetReceiveBufferSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t receive_buffer_size() const {
    return data_->receive_buffer_size;
  }
 private:
  internal::UDPSocket_SetReceiveBufferSize_Params_Data* data_ = nullptr;
};

class UDPSocket_SetReceiveBufferSize_ResponseParamsDataView {
 public:
  UDPSocket_SetReceiveBufferSize_ResponseParamsDataView() {}

  UDPSocket_SetReceiveBufferSize_ResponseParamsDataView(
      internal::UDPSocket_SetReceiveBufferSize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::UDPSocket_SetReceiveBufferSize_ResponseParams_Data* data_ = nullptr;
};

class UDPSocket_JoinGroup_ParamsDataView {
 public:
  UDPSocket_JoinGroup_ParamsDataView() {}

  UDPSocket_JoinGroup_ParamsDataView(
      internal::UDPSocket_JoinGroup_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGroupAddressDataView(
      ::network::mojom::IPAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupAddress(UserType* output) {
    auto* pointer = data_->group_address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPAddressDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_JoinGroup_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_JoinGroup_ResponseParamsDataView {
 public:
  UDPSocket_JoinGroup_ResponseParamsDataView() {}

  UDPSocket_JoinGroup_ResponseParamsDataView(
      internal::UDPSocket_JoinGroup_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::UDPSocket_JoinGroup_ResponseParams_Data* data_ = nullptr;
};

class UDPSocket_LeaveGroup_ParamsDataView {
 public:
  UDPSocket_LeaveGroup_ParamsDataView() {}

  UDPSocket_LeaveGroup_ParamsDataView(
      internal::UDPSocket_LeaveGroup_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGroupAddressDataView(
      ::network::mojom::IPAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupAddress(UserType* output) {
    auto* pointer = data_->group_address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPAddressDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocket_LeaveGroup_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_LeaveGroup_ResponseParamsDataView {
 public:
  UDPSocket_LeaveGroup_ResponseParamsDataView() {}

  UDPSocket_LeaveGroup_ResponseParamsDataView(
      internal::UDPSocket_LeaveGroup_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::UDPSocket_LeaveGroup_ResponseParams_Data* data_ = nullptr;
};

class UDPSocket_ReceiveMore_ParamsDataView {
 public:
  UDPSocket_ReceiveMore_ParamsDataView() {}

  UDPSocket_ReceiveMore_ParamsDataView(
      internal::UDPSocket_ReceiveMore_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t num_additional_datagrams() const {
    return data_->num_additional_datagrams;
  }
 private:
  internal::UDPSocket_ReceiveMore_Params_Data* data_ = nullptr;
};

class UDPSocket_ReceiveMoreWithBufferSize_ParamsDataView {
 public:
  UDPSocket_ReceiveMoreWithBufferSize_ParamsDataView() {}

  UDPSocket_ReceiveMoreWithBufferSize_ParamsDataView(
      internal::UDPSocket_ReceiveMoreWithBufferSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t num_additional_datagrams() const {
    return data_->num_additional_datagrams;
  }
  uint32_t buffer_size() const {
    return data_->buffer_size;
  }
 private:
  internal::UDPSocket_ReceiveMoreWithBufferSize_Params_Data* data_ = nullptr;
};

class UDPSocket_SendTo_ParamsDataView {
 public:
  UDPSocket_SendTo_ParamsDataView() {}

  UDPSocket_SendTo_ParamsDataView(
      internal::UDPSocket_SendTo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDestAddrDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDestAddr(UserType* output) {
    auto* pointer = data_->dest_addr.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      ::mojo_base::mojom::ReadOnlyBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlyBufferDataView>(
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
  internal::UDPSocket_SendTo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_SendTo_ResponseParamsDataView {
 public:
  UDPSocket_SendTo_ResponseParamsDataView() {}

  UDPSocket_SendTo_ResponseParamsDataView(
      internal::UDPSocket_SendTo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::UDPSocket_SendTo_ResponseParams_Data* data_ = nullptr;
};

class UDPSocket_Send_ParamsDataView {
 public:
  UDPSocket_Send_ParamsDataView() {}

  UDPSocket_Send_ParamsDataView(
      internal::UDPSocket_Send_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      ::mojo_base::mojom::ReadOnlyBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlyBufferDataView>(
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
  internal::UDPSocket_Send_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UDPSocket_Send_ResponseParamsDataView {
 public:
  UDPSocket_Send_ResponseParamsDataView() {}

  UDPSocket_Send_ResponseParamsDataView(
      internal::UDPSocket_Send_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::UDPSocket_Send_ResponseParams_Data* data_ = nullptr;
};

class UDPSocket_Close_ParamsDataView {
 public:
  UDPSocket_Close_ParamsDataView() {}

  UDPSocket_Close_ParamsDataView(
      internal::UDPSocket_Close_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UDPSocket_Close_Params_Data* data_ = nullptr;
};

class UDPSocketReceiver_OnReceived_ParamsDataView {
 public:
  UDPSocketReceiver_OnReceived_ParamsDataView() {}

  UDPSocketReceiver_OnReceived_ParamsDataView(
      internal::UDPSocketReceiver_OnReceived_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetSrcAddrDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSrcAddr(UserType* output) {
    auto* pointer = data_->src_addr.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      ::mojo_base::mojom::ReadOnlyBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlyBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::UDPSocketReceiver_OnReceived_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void UDPSocket_Bind_ParamsDataView::GetLocalAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->local_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void UDPSocket_Bind_ParamsDataView::GetSocketOptionsDataView(
    UDPSocketOptionsDataView* output) {
  auto pointer = data_->socket_options.Get();
  *output = UDPSocketOptionsDataView(pointer, context_);
}


inline void UDPSocket_Bind_ResponseParamsDataView::GetLocalAddrOutDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->local_addr_out.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}


inline void UDPSocket_Connect_ParamsDataView::GetRemoteAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->remote_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void UDPSocket_Connect_ParamsDataView::GetSocketOptionsDataView(
    UDPSocketOptionsDataView* output) {
  auto pointer = data_->socket_options.Get();
  *output = UDPSocketOptionsDataView(pointer, context_);
}


inline void UDPSocket_Connect_ResponseParamsDataView::GetLocalAddrOutDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->local_addr_out.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}














inline void UDPSocket_JoinGroup_ParamsDataView::GetGroupAddressDataView(
    ::network::mojom::IPAddressDataView* output) {
  auto pointer = data_->group_address.Get();
  *output = ::network::mojom::IPAddressDataView(pointer, context_);
}




inline void UDPSocket_LeaveGroup_ParamsDataView::GetGroupAddressDataView(
    ::network::mojom::IPAddressDataView* output) {
  auto pointer = data_->group_address.Get();
  *output = ::network::mojom::IPAddressDataView(pointer, context_);
}








inline void UDPSocket_SendTo_ParamsDataView::GetDestAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->dest_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void UDPSocket_SendTo_ParamsDataView::GetDataDataView(
    ::mojo_base::mojom::ReadOnlyBufferDataView* output) {
  auto pointer = data_->data.Get();
  *output = ::mojo_base::mojom::ReadOnlyBufferDataView(pointer, context_);
}
inline void UDPSocket_SendTo_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}




inline void UDPSocket_Send_ParamsDataView::GetDataDataView(
    ::mojo_base::mojom::ReadOnlyBufferDataView* output) {
  auto pointer = data_->data.Get();
  *output = ::mojo_base::mojom::ReadOnlyBufferDataView(pointer, context_);
}
inline void UDPSocket_Send_ParamsDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}






inline void UDPSocketReceiver_OnReceived_ParamsDataView::GetSrcAddrDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->src_addr.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void UDPSocketReceiver_OnReceived_ParamsDataView::GetDataDataView(
    ::mojo_base::mojom::ReadOnlyBufferDataView* output) {
  auto pointer = data_->data.Get();
  *output = ::mojo_base::mojom::ReadOnlyBufferDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_PARAMS_DATA_H_