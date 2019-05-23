// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "gpu/ipc/common/mailbox.mojom-shared-internal.h"
#include "gpu/ipc/common/sync_token.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/copy_output_result.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace viz {
namespace mojom {
namespace internal {
class CopyOutputRequest_Data;

#pragma pack(push, 1)
class  CopyOutputRequest_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CopyOutputRequest_Data));
      new (data()) CopyOutputRequest_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CopyOutputRequest_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CopyOutputRequest_Data>(index_);
    }
    CopyOutputRequest_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result_format;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Vector2d_Data> scale_from;
  mojo::internal::Pointer<::gfx::mojom::internal::Vector2d_Data> scale_to;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> source;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> area;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> result_selection;
  mojo::internal::Interface_Data result_sender;

 private:
  CopyOutputRequest_Data();
  ~CopyOutputRequest_Data() = delete;
};
static_assert(sizeof(CopyOutputRequest_Data) == 64,
              "Bad sizeof(CopyOutputRequest_Data)");
// Used by CopyOutputRequest::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CopyOutputRequest_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CopyOutputRequest_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CopyOutputRequest_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CopyOutputRequest_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CopyOutputRequest_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_SHARED_INTERNAL_H_