// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCES_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/gfx/mojo/font_render_params.mojom-shared-internal.h"
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
class RendererPreferences_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) RendererPreferences_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererPreferences_Data));
      new (data()) RendererPreferences_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererPreferences_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererPreferences_Data>(index_);
    }
    RendererPreferences_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t can_accept_load_drops : 1;
  uint8_t should_antialias_text : 1;
  uint8_t use_autohinter : 1;
  uint8_t use_bitmaps : 1;
  uint8_t use_subpixel_positioning : 1;
  uint8_t browser_handles_all_top_level_requests : 1;
  uint8_t use_custom_colors : 1;
  uint8_t enable_referrers : 1;
  uint8_t allow_cross_origin_auth_prompt : 1;
  uint8_t enable_do_not_track : 1;
  uint8_t enable_encrypted_media : 1;
  uint8_t disable_client_blocked_error_page : 1;
  uint8_t plugin_fullscreen_allowed : 1;
  uint16_t webrtc_udp_min_port;
  int32_t hinting;
  int32_t subpixel_rendering;
  uint32_t focus_ring_color;
  uint32_t active_selection_bg_color;
  uint32_t active_selection_fg_color;
  uint32_t inactive_selection_bg_color;
  uint32_t inactive_selection_fg_color;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> caret_blink_interval;
  mojo::internal::Pointer<mojo::internal::String_Data> webrtc_ip_handling_policy;
  uint16_t webrtc_udp_max_port;
  uint8_t pad23_[6];
  mojo::internal::Pointer<mojo::internal::String_Data> user_agent_override;
  mojo::internal::Pointer<mojo::internal::String_Data> accept_languages;
  mojo::internal::Pointer<mojo::internal::String_Data> network_contry_iso;
  mojo::internal::Pointer<mojo::internal::String_Data> system_font_family_name;

 private:
  RendererPreferences_Data();
  ~RendererPreferences_Data() = delete;
};
static_assert(sizeof(RendererPreferences_Data) == 96,
              "Bad sizeof(RendererPreferences_Data)");
// Used by RendererPreferences::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RendererPreferences_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RendererPreferences_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RendererPreferences_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RendererPreferences_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RendererPreferences_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCES_MOJOM_SHARED_INTERNAL_H_