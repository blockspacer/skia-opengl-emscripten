// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SHARED_QUAD_STATE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SHARED_QUAD_STATE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojo/rrect_f.mojom-shared-internal.h"
#include "ui/gfx/mojo/transform.mojom-shared-internal.h"
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
class SharedQuadState_Data;

#pragma pack(push, 1)
class  SharedQuadState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SharedQuadState_Data));
      new (data()) SharedQuadState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SharedQuadState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SharedQuadState_Data>(index_);
    }
    SharedQuadState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> quad_to_target_transform;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> quad_layer_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> visible_quad_layer_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::RRectF_Data> rounded_corner_bounds;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> clip_rect;
  uint8_t is_clipped : 1;
  uint8_t are_contents_opaque : 1;
  uint8_t pad6_[3];
  float opacity;
  uint32_t blend_mode;
  int32_t sorting_context_id;

 private:
  SharedQuadState_Data();
  ~SharedQuadState_Data() = delete;
};
static_assert(sizeof(SharedQuadState_Data) == 64,
              "Bad sizeof(SharedQuadState_Data)");
// Used by SharedQuadState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SharedQuadState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SharedQuadState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SharedQuadState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SharedQuadState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SharedQuadState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SHARED_QUAD_STATE_MOJOM_SHARED_INTERNAL_H_