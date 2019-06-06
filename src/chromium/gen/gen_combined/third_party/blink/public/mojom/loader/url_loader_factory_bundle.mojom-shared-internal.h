// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/url_loader_factory.mojom-shared-internal.h"
#endif // ENABLE_GNET
#include "url/mojom/origin.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class URLLoaderFactoryBundle_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) URLLoaderFactoryBundle_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderFactoryBundle_Data));
      new (data()) URLLoaderFactoryBundle_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderFactoryBundle_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderFactoryBundle_Data>(index_);
    }
    URLLoaderFactoryBundle_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data default_factory;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Interface_Data>> scheme_specific_factories;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<::url::mojom::internal::Origin_Data>, mojo::internal::Interface_Data>> initiator_specific_factories;
  mojo::internal::Interface_Data appcache_factory;
  uint8_t bypass_redirect_checks : 1;
  uint8_t padfinal_[7];

 private:
  URLLoaderFactoryBundle_Data();
  ~URLLoaderFactoryBundle_Data() = delete;
};
static_assert(sizeof(URLLoaderFactoryBundle_Data) == 48,
              "Bad sizeof(URLLoaderFactoryBundle_Data)");
// Used by URLLoaderFactoryBundle::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct URLLoaderFactoryBundle_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  URLLoaderFactoryBundle_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~URLLoaderFactoryBundle_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    URLLoaderFactoryBundle_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    URLLoaderFactoryBundle_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_SHARED_INTERNAL_H_
