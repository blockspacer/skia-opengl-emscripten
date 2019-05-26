// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/frame_deadline.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/selection.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_range.mojom-shared-internal.h"
#include "ui/latency/mojo/latency_info.mojom-shared-internal.h"
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
class CompositorFrameMetadata_Data;

#pragma pack(push, 1)
class  CompositorFrameMetadata_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameMetadata_Data));
      new (data()) CompositorFrameMetadata_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameMetadata_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameMetadata_Data>(index_);
    }
    CompositorFrameMetadata_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float device_scale_factor;
  float page_scale_factor;
  mojo::internal::Pointer<::gfx::mojom::internal::Vector2dF_Data> root_scroll_offset;
  mojo::internal::Pointer<::gfx::mojom::internal::SizeF_Data> scrollable_viewport_size;
  uint8_t may_contain_video : 1;
  uint8_t is_resourceless_software_draw_with_scroll_or_animation : 1;
  uint8_t send_frame_token_to_embedder : 1;
  uint8_t pad6_[3];
  uint32_t root_background_color;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ui::mojom::internal::LatencyInfo_Data>>> latency_info;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::viz::mojom::internal::SurfaceRange_Data>>> referenced_surfaces;
  mojo::internal::Pointer<::viz::mojom::internal::FrameDeadline_Data> deadline;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::viz::mojom::internal::SurfaceId_Data>>> activation_dependencies;
  uint32_t content_source_id;
  uint32_t frame_token;
  mojo::internal::Pointer<::viz::mojom::internal::BeginFrameAck_Data> begin_frame_ack;
  float min_page_scale_factor;
  float top_controls_height;
  float top_controls_shown_ratio;
  uint8_t pad17_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> local_surface_id_allocation_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> preferred_frame_interval;

 private:
  CompositorFrameMetadata_Data();
  ~CompositorFrameMetadata_Data() = delete;
};
static_assert(sizeof(CompositorFrameMetadata_Data) == 120,
              "Bad sizeof(CompositorFrameMetadata_Data)");
// Used by CompositorFrameMetadata::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CompositorFrameMetadata_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CompositorFrameMetadata_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CompositorFrameMetadata_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CompositorFrameMetadata_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CompositorFrameMetadata_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_SHARED_INTERNAL_H_