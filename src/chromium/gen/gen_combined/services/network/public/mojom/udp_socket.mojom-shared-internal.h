// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_address.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared-internal.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared-internal.h"
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
class UDPSocketOptions_Data;

#pragma pack(push, 1)
class  UDPSocketOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UDPSocketOptions_Data));
      new (data()) UDPSocketOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UDPSocketOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UDPSocketOptions_Data>(index_);
    }
    UDPSocketOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t allow_address_reuse : 1;
  uint8_t allow_broadcast : 1;
  uint8_t allow_address_sharing_for_multicast : 1;
  uint8_t multicast_loopback_mode : 1;
  uint8_t pad3_[3];
  uint32_t multicast_interface;
  uint32_t multicast_time_to_live;
  int32_t send_buffer_size;
  int32_t receive_buffer_size;
  uint8_t padfinal_[4];

 private:
  UDPSocketOptions_Data();
  ~UDPSocketOptions_Data() = delete;
};
static_assert(sizeof(UDPSocketOptions_Data) == 32,
              "Bad sizeof(UDPSocketOptions_Data)");
// Used by UDPSocketOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UDPSocketOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UDPSocketOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UDPSocketOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UDPSocketOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UDPSocketOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_INTERNAL_H_