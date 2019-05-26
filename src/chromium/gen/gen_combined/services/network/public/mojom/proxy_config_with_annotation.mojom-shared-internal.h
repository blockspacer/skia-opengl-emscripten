// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared-internal.h"
#include "services/network/public/mojom/proxy_config.mojom-shared-internal.h"
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
class ProxyConfigWithAnnotation_Data;

#pragma pack(push, 1)
class  ProxyConfigWithAnnotation_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyConfigWithAnnotation_Data));
      new (data()) ProxyConfigWithAnnotation_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyConfigWithAnnotation_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyConfigWithAnnotation_Data>(index_);
    }
    ProxyConfigWithAnnotation_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::ProxyConfig_Data> value;
  mojo::internal::Pointer<::network::mojom::internal::MutableNetworkTrafficAnnotationTag_Data> traffic_annotation;

 private:
  ProxyConfigWithAnnotation_Data();
  ~ProxyConfigWithAnnotation_Data() = delete;
};
static_assert(sizeof(ProxyConfigWithAnnotation_Data) == 24,
              "Bad sizeof(ProxyConfigWithAnnotation_Data)");
// Used by ProxyConfigWithAnnotation::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProxyConfigWithAnnotation_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProxyConfigWithAnnotation_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProxyConfigWithAnnotation_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ProxyConfigWithAnnotation_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProxyConfigWithAnnotation_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_INTERNAL_H_