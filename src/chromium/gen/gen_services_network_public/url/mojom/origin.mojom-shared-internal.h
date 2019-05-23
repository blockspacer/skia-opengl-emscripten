// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef URL_MOJOM_ORIGIN_MOJOM_SHARED_INTERNAL_H_
#define URL_MOJOM_ORIGIN_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace url {
namespace mojom {
namespace internal {
class Origin_Data;

#pragma pack(push, 1)
class  Origin_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Origin_Data));
      new (data()) Origin_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Origin_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Origin_Data>(index_);
    }
    Origin_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> scheme;
  mojo::internal::Pointer<mojo::internal::String_Data> host;
  uint16_t port;
  uint8_t pad2_[6];
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> nonce_if_opaque;

 private:
  Origin_Data();
  ~Origin_Data() = delete;
};
static_assert(sizeof(Origin_Data) == 40,
              "Bad sizeof(Origin_Data)");
// Used by Origin::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Origin_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Origin_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Origin_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Origin_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Origin_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace url

#endif  // URL_MOJOM_ORIGIN_MOJOM_SHARED_INTERNAL_H_