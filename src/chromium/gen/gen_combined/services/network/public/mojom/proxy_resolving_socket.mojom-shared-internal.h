// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared-internal.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared-internal.h"
#include "services/network/public/mojom/network_param.mojom-shared-internal.h"
#include "services/network/public/mojom/ssl_config.mojom-shared-internal.h"
#include "services/network/public/mojom/tcp_socket.mojom-shared-internal.h"
#include "services/network/public/mojom/tls_socket.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace network {
namespace mojom {
namespace internal {
class ProxyResolvingSocketOptions_Data;

#pragma pack(push, 1)
class  ProxyResolvingSocketOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolvingSocketOptions_Data));
      new (data()) ProxyResolvingSocketOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolvingSocketOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolvingSocketOptions_Data>(index_);
    }
    ProxyResolvingSocketOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t use_tls : 1;
  uint8_t fake_tls_handshake : 1;
  uint8_t padfinal_[7];

 private:
  ProxyResolvingSocketOptions_Data();
  ~ProxyResolvingSocketOptions_Data() = delete;
};
static_assert(sizeof(ProxyResolvingSocketOptions_Data) == 16,
              "Bad sizeof(ProxyResolvingSocketOptions_Data)");
// Used by ProxyResolvingSocketOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProxyResolvingSocketOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProxyResolvingSocketOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProxyResolvingSocketOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ProxyResolvingSocketOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProxyResolvingSocketOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_SHARED_INTERNAL_H_