// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCES_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCES_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/gfx/mojo/font_render_params.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class RendererPreferencesDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::RendererPreferencesDataView> {
  using Data = ::blink::mojom::internal::RendererPreferences_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
class RendererPreferencesDataView {
 public:
  RendererPreferencesDataView() {}

  RendererPreferencesDataView(
      internal::RendererPreferences_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool can_accept_load_drops() const {
    return data_->can_accept_load_drops;
  }
  bool should_antialias_text() const {
    return data_->should_antialias_text;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHinting(UserType* output) const {
    auto data_value = data_->hinting;
    return mojo::internal::Deserialize<::gfx::mojom::Hinting>(
        data_value, output);
  }

  ::gfx::mojom::Hinting hinting() const {
    return static_cast<::gfx::mojom::Hinting>(data_->hinting);
  }
  bool use_autohinter() const {
    return data_->use_autohinter;
  }
  bool use_bitmaps() const {
    return data_->use_bitmaps;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubpixelRendering(UserType* output) const {
    auto data_value = data_->subpixel_rendering;
    return mojo::internal::Deserialize<::gfx::mojom::SubpixelRendering>(
        data_value, output);
  }

  ::gfx::mojom::SubpixelRendering subpixel_rendering() const {
    return static_cast<::gfx::mojom::SubpixelRendering>(data_->subpixel_rendering);
  }
  bool use_subpixel_positioning() const {
    return data_->use_subpixel_positioning;
  }
  uint32_t focus_ring_color() const {
    return data_->focus_ring_color;
  }
  uint32_t active_selection_bg_color() const {
    return data_->active_selection_bg_color;
  }
  uint32_t active_selection_fg_color() const {
    return data_->active_selection_fg_color;
  }
  uint32_t inactive_selection_bg_color() const {
    return data_->inactive_selection_bg_color;
  }
  uint32_t inactive_selection_fg_color() const {
    return data_->inactive_selection_fg_color;
  }
  bool browser_handles_all_top_level_requests() const {
    return data_->browser_handles_all_top_level_requests;
  }
  inline void GetCaretBlinkIntervalDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCaretBlinkInterval(UserType* output) {
    auto* pointer = data_->caret_blink_interval.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  bool use_custom_colors() const {
    return data_->use_custom_colors;
  }
  bool enable_referrers() const {
    return data_->enable_referrers;
  }
  bool allow_cross_origin_auth_prompt() const {
    return data_->allow_cross_origin_auth_prompt;
  }
  bool enable_do_not_track() const {
    return data_->enable_do_not_track;
  }
  bool enable_encrypted_media() const {
    return data_->enable_encrypted_media;
  }
  inline void GetWebrtcIpHandlingPolicyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWebrtcIpHandlingPolicy(UserType* output) {
    auto* pointer = data_->webrtc_ip_handling_policy.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint16_t webrtc_udp_min_port() const {
    return data_->webrtc_udp_min_port;
  }
  uint16_t webrtc_udp_max_port() const {
    return data_->webrtc_udp_max_port;
  }
  inline void GetUserAgentOverrideDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserAgentOverride(UserType* output) {
    auto* pointer = data_->user_agent_override.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAcceptLanguagesDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAcceptLanguages(UserType* output) {
    auto* pointer = data_->accept_languages.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool disable_client_blocked_error_page() const {
    return data_->disable_client_blocked_error_page;
  }
  bool plugin_fullscreen_allowed() const {
    return data_->plugin_fullscreen_allowed;
  }
  inline void GetNetworkContryIsoDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNetworkContryIso(UserType* output) {
    auto* pointer = data_->network_contry_iso.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSystemFontFamilyNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSystemFontFamilyName(UserType* output) {
    auto* pointer = data_->system_font_family_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::RendererPreferences_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::RendererPreferencesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::RendererPreferencesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::RendererPreferences_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->can_accept_load_drops = Traits::can_accept_load_drops(input);
    (*output)->should_antialias_text = Traits::should_antialias_text(input);
    mojo::internal::Serialize<::gfx::mojom::Hinting>(
        Traits::hinting(input), &(*output)->hinting);
    (*output)->use_autohinter = Traits::use_autohinter(input);
    (*output)->use_bitmaps = Traits::use_bitmaps(input);
    mojo::internal::Serialize<::gfx::mojom::SubpixelRendering>(
        Traits::subpixel_rendering(input), &(*output)->subpixel_rendering);
    (*output)->use_subpixel_positioning = Traits::use_subpixel_positioning(input);
    (*output)->focus_ring_color = Traits::focus_ring_color(input);
    (*output)->active_selection_bg_color = Traits::active_selection_bg_color(input);
    (*output)->active_selection_fg_color = Traits::active_selection_fg_color(input);
    (*output)->inactive_selection_bg_color = Traits::inactive_selection_bg_color(input);
    (*output)->inactive_selection_fg_color = Traits::inactive_selection_fg_color(input);
    (*output)->browser_handles_all_top_level_requests = Traits::browser_handles_all_top_level_requests(input);
    decltype(Traits::caret_blink_interval(input)) in_caret_blink_interval = Traits::caret_blink_interval(input);
    typename decltype((*output)->caret_blink_interval)::BaseType::BufferWriter
        caret_blink_interval_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_caret_blink_interval, buffer, &caret_blink_interval_writer, context);
    (*output)->caret_blink_interval.Set(
        caret_blink_interval_writer.is_null() ? nullptr : caret_blink_interval_writer.data());
    (*output)->use_custom_colors = Traits::use_custom_colors(input);
    (*output)->enable_referrers = Traits::enable_referrers(input);
    (*output)->allow_cross_origin_auth_prompt = Traits::allow_cross_origin_auth_prompt(input);
    (*output)->enable_do_not_track = Traits::enable_do_not_track(input);
    (*output)->enable_encrypted_media = Traits::enable_encrypted_media(input);
    decltype(Traits::webrtc_ip_handling_policy(input)) in_webrtc_ip_handling_policy = Traits::webrtc_ip_handling_policy(input);
    typename decltype((*output)->webrtc_ip_handling_policy)::BaseType::BufferWriter
        webrtc_ip_handling_policy_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_webrtc_ip_handling_policy, buffer, &webrtc_ip_handling_policy_writer, context);
    (*output)->webrtc_ip_handling_policy.Set(
        webrtc_ip_handling_policy_writer.is_null() ? nullptr : webrtc_ip_handling_policy_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->webrtc_ip_handling_policy.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null webrtc_ip_handling_policy in RendererPreferences struct");
    (*output)->webrtc_udp_min_port = Traits::webrtc_udp_min_port(input);
    (*output)->webrtc_udp_max_port = Traits::webrtc_udp_max_port(input);
    decltype(Traits::user_agent_override(input)) in_user_agent_override = Traits::user_agent_override(input);
    typename decltype((*output)->user_agent_override)::BaseType::BufferWriter
        user_agent_override_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_user_agent_override, buffer, &user_agent_override_writer, context);
    (*output)->user_agent_override.Set(
        user_agent_override_writer.is_null() ? nullptr : user_agent_override_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->user_agent_override.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null user_agent_override in RendererPreferences struct");
    decltype(Traits::accept_languages(input)) in_accept_languages = Traits::accept_languages(input);
    typename decltype((*output)->accept_languages)::BaseType::BufferWriter
        accept_languages_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_accept_languages, buffer, &accept_languages_writer, context);
    (*output)->accept_languages.Set(
        accept_languages_writer.is_null() ? nullptr : accept_languages_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->accept_languages.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null accept_languages in RendererPreferences struct");
    (*output)->disable_client_blocked_error_page = Traits::disable_client_blocked_error_page(input);
    (*output)->plugin_fullscreen_allowed = Traits::plugin_fullscreen_allowed(input);
    decltype(Traits::network_contry_iso(input)) in_network_contry_iso = Traits::network_contry_iso(input);
    typename decltype((*output)->network_contry_iso)::BaseType::BufferWriter
        network_contry_iso_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_network_contry_iso, buffer, &network_contry_iso_writer, context);
    (*output)->network_contry_iso.Set(
        network_contry_iso_writer.is_null() ? nullptr : network_contry_iso_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->network_contry_iso.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null network_contry_iso in RendererPreferences struct");
    decltype(Traits::system_font_family_name(input)) in_system_font_family_name = Traits::system_font_family_name(input);
    typename decltype((*output)->system_font_family_name)::BaseType::BufferWriter
        system_font_family_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_system_font_family_name, buffer, &system_font_family_name_writer, context);
    (*output)->system_font_family_name.Set(
        system_font_family_name_writer.is_null() ? nullptr : system_font_family_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->system_font_family_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null system_font_family_name in RendererPreferences struct");
  }

  static bool Deserialize(::blink::mojom::internal::RendererPreferences_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::RendererPreferencesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void RendererPreferencesDataView::GetCaretBlinkIntervalDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->caret_blink_interval.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void RendererPreferencesDataView::GetWebrtcIpHandlingPolicyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->webrtc_ip_handling_policy.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RendererPreferencesDataView::GetUserAgentOverrideDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_agent_override.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RendererPreferencesDataView::GetAcceptLanguagesDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->accept_languages.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RendererPreferencesDataView::GetNetworkContryIsoDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->network_contry_iso.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RendererPreferencesDataView::GetSystemFontFamilyNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->system_font_family_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCES_MOJOM_SHARED_H_