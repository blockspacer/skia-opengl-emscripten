// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class AnchorElementMetrics_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AnchorElementMetrics_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AnchorElementMetrics_Data));
      new (data()) AnchorElementMetrics_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AnchorElementMetrics_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AnchorElementMetrics_Data>(index_);
    }
    AnchorElementMetrics_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float ratio_area;
  float ratio_visible_area;
  float ratio_distance_top_to_visible_top;
  float ratio_distance_center_to_visible_top;
  float ratio_distance_root_top;
  float ratio_distance_root_bottom;
  uint8_t is_in_iframe : 1;
  uint8_t contains_image : 1;
  uint8_t is_same_host : 1;
  uint8_t is_url_incremented_by_one : 1;
  uint8_t pad9_[7];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> source_url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> target_url;

 private:
  AnchorElementMetrics_Data();
  ~AnchorElementMetrics_Data() = delete;
};
static_assert(sizeof(AnchorElementMetrics_Data) == 56,
              "Bad sizeof(AnchorElementMetrics_Data)");
// Used by AnchorElementMetrics::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AnchorElementMetrics_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AnchorElementMetrics_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AnchorElementMetrics_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AnchorElementMetrics_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AnchorElementMetrics_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_SHARED_INTERNAL_H_