// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
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
class HitTestRegion_Data;
class HitTestRegionList_Data;

#pragma pack(push, 1)
class  HitTestRegion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HitTestRegion_Data));
      new (data()) HitTestRegion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HitTestRegion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HitTestRegion_Data>(index_);
    }
    HitTestRegion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t flags;
  uint32_t async_hit_test_reasons;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> rect;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> transform;

 private:
  HitTestRegion_Data();
  ~HitTestRegion_Data() = delete;
};
static_assert(sizeof(HitTestRegion_Data) == 40,
              "Bad sizeof(HitTestRegion_Data)");
// Used by HitTestRegion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HitTestRegion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HitTestRegion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HitTestRegion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HitTestRegion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HitTestRegion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HitTestRegionList_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HitTestRegionList_Data));
      new (data()) HitTestRegionList_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HitTestRegionList_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HitTestRegionList_Data>(index_);
    }
    HitTestRegionList_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t flags;
  uint32_t async_hit_test_reasons;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> bounds;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> transform;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HitTestRegion_Data>>> regions;

 private:
  HitTestRegionList_Data();
  ~HitTestRegionList_Data() = delete;
};
static_assert(sizeof(HitTestRegionList_Data) == 40,
              "Bad sizeof(HitTestRegionList_Data)");
// Used by HitTestRegionList::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HitTestRegionList_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HitTestRegionList_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HitTestRegionList_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HitTestRegionList_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HitTestRegionList_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_SHARED_INTERNAL_H_