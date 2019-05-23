// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCES_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCES_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom-shared.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom-forward.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/mojo/font_render_params.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {








class BLINK_COMMON_EXPORT RendererPreferences {
 public:
  using DataView = RendererPreferencesDataView;
  using Data_ = internal::RendererPreferences_Data;

  template <typename... Args>
  static RendererPreferencesPtr New(Args&&... args) {
    return RendererPreferencesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RendererPreferencesPtr From(const U& u) {
    return mojo::TypeConverter<RendererPreferencesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RendererPreferences>::Convert(*this);
  }


  RendererPreferences();

  RendererPreferences(
      bool can_accept_load_drops,
      bool should_antialias_text,
      gfx::FontRenderParams::Hinting hinting,
      bool use_autohinter,
      bool use_bitmaps,
      gfx::FontRenderParams::SubpixelRendering subpixel_rendering,
      bool use_subpixel_positioning,
      uint32_t focus_ring_color,
      uint32_t active_selection_bg_color,
      uint32_t active_selection_fg_color,
      uint32_t inactive_selection_bg_color,
      uint32_t inactive_selection_fg_color,
      bool browser_handles_all_top_level_requests,
      base::Optional<base::TimeDelta> caret_blink_interval,
      bool use_custom_colors,
      bool enable_referrers,
      bool allow_cross_origin_auth_prompt,
      bool enable_do_not_track,
      bool enable_encrypted_media,
      const std::string& webrtc_ip_handling_policy,
      uint16_t webrtc_udp_min_port,
      uint16_t webrtc_udp_max_port,
      const std::string& user_agent_override,
      const std::string& accept_languages,
      bool disable_client_blocked_error_page,
      bool plugin_fullscreen_allowed,
      const std::string& network_contry_iso,
      const std::string& system_font_family_name);

  ~RendererPreferences();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RendererPreferencesPtr>
  RendererPreferencesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RendererPreferences>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RendererPreferences::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RendererPreferences::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RendererPreferences_UnserializedMessageContext<
            UserType, RendererPreferences::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RendererPreferences::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RendererPreferences::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RendererPreferences_UnserializedMessageContext<
            UserType, RendererPreferences::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RendererPreferences::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool can_accept_load_drops;
  
  bool should_antialias_text;
  
  gfx::FontRenderParams::Hinting hinting;
  
  bool use_autohinter;
  
  bool use_bitmaps;
  
  gfx::FontRenderParams::SubpixelRendering subpixel_rendering;
  
  bool use_subpixel_positioning;
  
  uint32_t focus_ring_color;
  
  uint32_t active_selection_bg_color;
  
  uint32_t active_selection_fg_color;
  
  uint32_t inactive_selection_bg_color;
  
  uint32_t inactive_selection_fg_color;
  
  bool browser_handles_all_top_level_requests;
  
  base::Optional<base::TimeDelta> caret_blink_interval;
  
  bool use_custom_colors;
  
  bool enable_referrers;
  
  bool allow_cross_origin_auth_prompt;
  
  bool enable_do_not_track;
  
  bool enable_encrypted_media;
  
  std::string webrtc_ip_handling_policy;
  
  uint16_t webrtc_udp_min_port;
  
  uint16_t webrtc_udp_max_port;
  
  std::string user_agent_override;
  
  std::string accept_languages;
  
  bool disable_client_blocked_error_page;
  
  bool plugin_fullscreen_allowed;
  
  std::string network_contry_iso;
  
  std::string system_font_family_name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
RendererPreferencesPtr RendererPreferences::Clone() const {
  return New(
      mojo::Clone(can_accept_load_drops),
      mojo::Clone(should_antialias_text),
      mojo::Clone(hinting),
      mojo::Clone(use_autohinter),
      mojo::Clone(use_bitmaps),
      mojo::Clone(subpixel_rendering),
      mojo::Clone(use_subpixel_positioning),
      mojo::Clone(focus_ring_color),
      mojo::Clone(active_selection_bg_color),
      mojo::Clone(active_selection_fg_color),
      mojo::Clone(inactive_selection_bg_color),
      mojo::Clone(inactive_selection_fg_color),
      mojo::Clone(browser_handles_all_top_level_requests),
      mojo::Clone(caret_blink_interval),
      mojo::Clone(use_custom_colors),
      mojo::Clone(enable_referrers),
      mojo::Clone(allow_cross_origin_auth_prompt),
      mojo::Clone(enable_do_not_track),
      mojo::Clone(enable_encrypted_media),
      mojo::Clone(webrtc_ip_handling_policy),
      mojo::Clone(webrtc_udp_min_port),
      mojo::Clone(webrtc_udp_max_port),
      mojo::Clone(user_agent_override),
      mojo::Clone(accept_languages),
      mojo::Clone(disable_client_blocked_error_page),
      mojo::Clone(plugin_fullscreen_allowed),
      mojo::Clone(network_contry_iso),
      mojo::Clone(system_font_family_name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RendererPreferences>::value>::type*>
bool RendererPreferences::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->can_accept_load_drops, other_struct.can_accept_load_drops))
    return false;
  if (!mojo::Equals(this->should_antialias_text, other_struct.should_antialias_text))
    return false;
  if (!mojo::Equals(this->hinting, other_struct.hinting))
    return false;
  if (!mojo::Equals(this->use_autohinter, other_struct.use_autohinter))
    return false;
  if (!mojo::Equals(this->use_bitmaps, other_struct.use_bitmaps))
    return false;
  if (!mojo::Equals(this->subpixel_rendering, other_struct.subpixel_rendering))
    return false;
  if (!mojo::Equals(this->use_subpixel_positioning, other_struct.use_subpixel_positioning))
    return false;
  if (!mojo::Equals(this->focus_ring_color, other_struct.focus_ring_color))
    return false;
  if (!mojo::Equals(this->active_selection_bg_color, other_struct.active_selection_bg_color))
    return false;
  if (!mojo::Equals(this->active_selection_fg_color, other_struct.active_selection_fg_color))
    return false;
  if (!mojo::Equals(this->inactive_selection_bg_color, other_struct.inactive_selection_bg_color))
    return false;
  if (!mojo::Equals(this->inactive_selection_fg_color, other_struct.inactive_selection_fg_color))
    return false;
  if (!mojo::Equals(this->browser_handles_all_top_level_requests, other_struct.browser_handles_all_top_level_requests))
    return false;
  if (!mojo::Equals(this->caret_blink_interval, other_struct.caret_blink_interval))
    return false;
  if (!mojo::Equals(this->use_custom_colors, other_struct.use_custom_colors))
    return false;
  if (!mojo::Equals(this->enable_referrers, other_struct.enable_referrers))
    return false;
  if (!mojo::Equals(this->allow_cross_origin_auth_prompt, other_struct.allow_cross_origin_auth_prompt))
    return false;
  if (!mojo::Equals(this->enable_do_not_track, other_struct.enable_do_not_track))
    return false;
  if (!mojo::Equals(this->enable_encrypted_media, other_struct.enable_encrypted_media))
    return false;
  if (!mojo::Equals(this->webrtc_ip_handling_policy, other_struct.webrtc_ip_handling_policy))
    return false;
  if (!mojo::Equals(this->webrtc_udp_min_port, other_struct.webrtc_udp_min_port))
    return false;
  if (!mojo::Equals(this->webrtc_udp_max_port, other_struct.webrtc_udp_max_port))
    return false;
  if (!mojo::Equals(this->user_agent_override, other_struct.user_agent_override))
    return false;
  if (!mojo::Equals(this->accept_languages, other_struct.accept_languages))
    return false;
  if (!mojo::Equals(this->disable_client_blocked_error_page, other_struct.disable_client_blocked_error_page))
    return false;
  if (!mojo::Equals(this->plugin_fullscreen_allowed, other_struct.plugin_fullscreen_allowed))
    return false;
  if (!mojo::Equals(this->network_contry_iso, other_struct.network_contry_iso))
    return false;
  if (!mojo::Equals(this->system_font_family_name, other_struct.system_font_family_name))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::RendererPreferences::DataView,
                                         ::blink::mojom::RendererPreferencesPtr> {
  static bool IsNull(const ::blink::mojom::RendererPreferencesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::RendererPreferencesPtr* output) { output->reset(); }

  static decltype(::blink::mojom::RendererPreferences::can_accept_load_drops) can_accept_load_drops(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->can_accept_load_drops;
  }

  static decltype(::blink::mojom::RendererPreferences::should_antialias_text) should_antialias_text(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->should_antialias_text;
  }

  static decltype(::blink::mojom::RendererPreferences::hinting) hinting(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->hinting;
  }

  static decltype(::blink::mojom::RendererPreferences::use_autohinter) use_autohinter(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->use_autohinter;
  }

  static decltype(::blink::mojom::RendererPreferences::use_bitmaps) use_bitmaps(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->use_bitmaps;
  }

  static decltype(::blink::mojom::RendererPreferences::subpixel_rendering) subpixel_rendering(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->subpixel_rendering;
  }

  static decltype(::blink::mojom::RendererPreferences::use_subpixel_positioning) use_subpixel_positioning(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->use_subpixel_positioning;
  }

  static decltype(::blink::mojom::RendererPreferences::focus_ring_color) focus_ring_color(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->focus_ring_color;
  }

  static decltype(::blink::mojom::RendererPreferences::active_selection_bg_color) active_selection_bg_color(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->active_selection_bg_color;
  }

  static decltype(::blink::mojom::RendererPreferences::active_selection_fg_color) active_selection_fg_color(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->active_selection_fg_color;
  }

  static decltype(::blink::mojom::RendererPreferences::inactive_selection_bg_color) inactive_selection_bg_color(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->inactive_selection_bg_color;
  }

  static decltype(::blink::mojom::RendererPreferences::inactive_selection_fg_color) inactive_selection_fg_color(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->inactive_selection_fg_color;
  }

  static decltype(::blink::mojom::RendererPreferences::browser_handles_all_top_level_requests) browser_handles_all_top_level_requests(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->browser_handles_all_top_level_requests;
  }

  static const decltype(::blink::mojom::RendererPreferences::caret_blink_interval)& caret_blink_interval(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->caret_blink_interval;
  }

  static decltype(::blink::mojom::RendererPreferences::use_custom_colors) use_custom_colors(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->use_custom_colors;
  }

  static decltype(::blink::mojom::RendererPreferences::enable_referrers) enable_referrers(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->enable_referrers;
  }

  static decltype(::blink::mojom::RendererPreferences::allow_cross_origin_auth_prompt) allow_cross_origin_auth_prompt(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->allow_cross_origin_auth_prompt;
  }

  static decltype(::blink::mojom::RendererPreferences::enable_do_not_track) enable_do_not_track(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->enable_do_not_track;
  }

  static decltype(::blink::mojom::RendererPreferences::enable_encrypted_media) enable_encrypted_media(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->enable_encrypted_media;
  }

  static const decltype(::blink::mojom::RendererPreferences::webrtc_ip_handling_policy)& webrtc_ip_handling_policy(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->webrtc_ip_handling_policy;
  }

  static decltype(::blink::mojom::RendererPreferences::webrtc_udp_min_port) webrtc_udp_min_port(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->webrtc_udp_min_port;
  }

  static decltype(::blink::mojom::RendererPreferences::webrtc_udp_max_port) webrtc_udp_max_port(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->webrtc_udp_max_port;
  }

  static const decltype(::blink::mojom::RendererPreferences::user_agent_override)& user_agent_override(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->user_agent_override;
  }

  static const decltype(::blink::mojom::RendererPreferences::accept_languages)& accept_languages(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->accept_languages;
  }

  static decltype(::blink::mojom::RendererPreferences::disable_client_blocked_error_page) disable_client_blocked_error_page(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->disable_client_blocked_error_page;
  }

  static decltype(::blink::mojom::RendererPreferences::plugin_fullscreen_allowed) plugin_fullscreen_allowed(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->plugin_fullscreen_allowed;
  }

  static const decltype(::blink::mojom::RendererPreferences::network_contry_iso)& network_contry_iso(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->network_contry_iso;
  }

  static const decltype(::blink::mojom::RendererPreferences::system_font_family_name)& system_font_family_name(
      const ::blink::mojom::RendererPreferencesPtr& input) {
    return input->system_font_family_name;
  }

  static bool Read(::blink::mojom::RendererPreferences::DataView input, ::blink::mojom::RendererPreferencesPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCES_MOJOM_H_