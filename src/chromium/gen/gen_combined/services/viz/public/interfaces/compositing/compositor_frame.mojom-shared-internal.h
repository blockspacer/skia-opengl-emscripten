// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/render_pass.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/transferable_resource.mojom-shared-internal.h"
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
class CompositorFrame_Data;

#pragma pack(push, 1)
class  CompositorFrame_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrame_Data));
      new (data()) CompositorFrame_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrame_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrame_Data>(index_);
    }
    CompositorFrame_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::CompositorFrameMetadata_Data> metadata;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::viz::mojom::internal::TransferableResource_Data>>> resources;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::viz::mojom::internal::RenderPass_Data>>> passes;

 private:
  CompositorFrame_Data();
  ~CompositorFrame_Data() = delete;
};
static_assert(sizeof(CompositorFrame_Data) == 32,
              "Bad sizeof(CompositorFrame_Data)");
// Used by CompositorFrame::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CompositorFrame_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CompositorFrame_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CompositorFrame_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CompositorFrame_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CompositorFrame_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_MOJOM_SHARED_INTERNAL_H_