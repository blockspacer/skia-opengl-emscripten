// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/mojom/renderer_preferences.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/renderer_preferences.mojom-params-data.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/renderer_preferences.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCES_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCES_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
RendererPreferences::RendererPreferences()
    : can_accept_load_drops(true),
      should_antialias_text(true),
      hinting(::gfx::mojom::blink::Hinting::kMedium),
      use_autohinter(false),
      use_bitmaps(false),
      subpixel_rendering(::gfx::mojom::blink::SubpixelRendering::kNone),
      use_subpixel_positioning(false),
      focus_ring_color(0xFFE59700U),
      active_selection_bg_color(0xFF1E90FFU),
      active_selection_fg_color(0xFFFFFFFFU),
      inactive_selection_bg_color(0xFFC8C8C8U),
      inactive_selection_fg_color(0xFF323232U),
      browser_handles_all_top_level_requests(false),
      caret_blink_interval(),
      use_custom_colors(true),
      enable_referrers(true),
      allow_cross_origin_auth_prompt(false),
      enable_do_not_track(false),
      enable_encrypted_media(true),
      webrtc_ip_handling_policy(),
      webrtc_udp_min_port(0U),
      webrtc_udp_max_port(0U),
      user_agent_override(),
      accept_languages(),
      disable_client_blocked_error_page(false),
      plugin_fullscreen_allowed(true),
      network_contry_iso(),
      system_font_family_name() {}

RendererPreferences::RendererPreferences(
    bool can_accept_load_drops_in,
    bool should_antialias_text_in,
    ::gfx::mojom::blink::Hinting hinting_in,
    bool use_autohinter_in,
    bool use_bitmaps_in,
    ::gfx::mojom::blink::SubpixelRendering subpixel_rendering_in,
    bool use_subpixel_positioning_in,
    uint32_t focus_ring_color_in,
    uint32_t active_selection_bg_color_in,
    uint32_t active_selection_fg_color_in,
    uint32_t inactive_selection_bg_color_in,
    uint32_t inactive_selection_fg_color_in,
    bool browser_handles_all_top_level_requests_in,
    base::Optional<base::TimeDelta> caret_blink_interval_in,
    bool use_custom_colors_in,
    bool enable_referrers_in,
    bool allow_cross_origin_auth_prompt_in,
    bool enable_do_not_track_in,
    bool enable_encrypted_media_in,
    const WTF::String& webrtc_ip_handling_policy_in,
    uint16_t webrtc_udp_min_port_in,
    uint16_t webrtc_udp_max_port_in,
    const WTF::String& user_agent_override_in,
    const WTF::String& accept_languages_in,
    bool disable_client_blocked_error_page_in,
    bool plugin_fullscreen_allowed_in,
    const WTF::String& network_contry_iso_in,
    const WTF::String& system_font_family_name_in)
    : can_accept_load_drops(std::move(can_accept_load_drops_in)),
      should_antialias_text(std::move(should_antialias_text_in)),
      hinting(std::move(hinting_in)),
      use_autohinter(std::move(use_autohinter_in)),
      use_bitmaps(std::move(use_bitmaps_in)),
      subpixel_rendering(std::move(subpixel_rendering_in)),
      use_subpixel_positioning(std::move(use_subpixel_positioning_in)),
      focus_ring_color(std::move(focus_ring_color_in)),
      active_selection_bg_color(std::move(active_selection_bg_color_in)),
      active_selection_fg_color(std::move(active_selection_fg_color_in)),
      inactive_selection_bg_color(std::move(inactive_selection_bg_color_in)),
      inactive_selection_fg_color(std::move(inactive_selection_fg_color_in)),
      browser_handles_all_top_level_requests(std::move(browser_handles_all_top_level_requests_in)),
      caret_blink_interval(std::move(caret_blink_interval_in)),
      use_custom_colors(std::move(use_custom_colors_in)),
      enable_referrers(std::move(enable_referrers_in)),
      allow_cross_origin_auth_prompt(std::move(allow_cross_origin_auth_prompt_in)),
      enable_do_not_track(std::move(enable_do_not_track_in)),
      enable_encrypted_media(std::move(enable_encrypted_media_in)),
      webrtc_ip_handling_policy(std::move(webrtc_ip_handling_policy_in)),
      webrtc_udp_min_port(std::move(webrtc_udp_min_port_in)),
      webrtc_udp_max_port(std::move(webrtc_udp_max_port_in)),
      user_agent_override(std::move(user_agent_override_in)),
      accept_languages(std::move(accept_languages_in)),
      disable_client_blocked_error_page(std::move(disable_client_blocked_error_page_in)),
      plugin_fullscreen_allowed(std::move(plugin_fullscreen_allowed_in)),
      network_contry_iso(std::move(network_contry_iso_in)),
      system_font_family_name(std::move(system_font_family_name_in)) {}

RendererPreferences::~RendererPreferences() = default;

bool RendererPreferences::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::RendererPreferences::DataView, ::blink::mojom::blink::RendererPreferencesPtr>::Read(
    ::blink::mojom::blink::RendererPreferences::DataView input,
    ::blink::mojom::blink::RendererPreferencesPtr* output) {
  bool success = true;
  ::blink::mojom::blink::RendererPreferencesPtr result(::blink::mojom::blink::RendererPreferences::New());
  
      result->can_accept_load_drops = input.can_accept_load_drops();
      result->should_antialias_text = input.should_antialias_text();
      if (!input.ReadHinting(&result->hinting))
        success = false;
      result->use_autohinter = input.use_autohinter();
      result->use_bitmaps = input.use_bitmaps();
      if (!input.ReadSubpixelRendering(&result->subpixel_rendering))
        success = false;
      result->use_subpixel_positioning = input.use_subpixel_positioning();
      result->focus_ring_color = input.focus_ring_color();
      result->active_selection_bg_color = input.active_selection_bg_color();
      result->active_selection_fg_color = input.active_selection_fg_color();
      result->inactive_selection_bg_color = input.inactive_selection_bg_color();
      result->inactive_selection_fg_color = input.inactive_selection_fg_color();
      result->browser_handles_all_top_level_requests = input.browser_handles_all_top_level_requests();
      if (!input.ReadCaretBlinkInterval(&result->caret_blink_interval))
        success = false;
      result->use_custom_colors = input.use_custom_colors();
      result->enable_referrers = input.enable_referrers();
      result->allow_cross_origin_auth_prompt = input.allow_cross_origin_auth_prompt();
      result->enable_do_not_track = input.enable_do_not_track();
      result->enable_encrypted_media = input.enable_encrypted_media();
      if (!input.ReadWebrtcIpHandlingPolicy(&result->webrtc_ip_handling_policy))
        success = false;
      result->webrtc_udp_min_port = input.webrtc_udp_min_port();
      result->webrtc_udp_max_port = input.webrtc_udp_max_port();
      if (!input.ReadUserAgentOverride(&result->user_agent_override))
        success = false;
      if (!input.ReadAcceptLanguages(&result->accept_languages))
        success = false;
      result->disable_client_blocked_error_page = input.disable_client_blocked_error_page();
      result->plugin_fullscreen_allowed = input.plugin_fullscreen_allowed();
      if (!input.ReadNetworkContryIso(&result->network_contry_iso))
        success = false;
      if (!input.ReadSystemFontFamilyName(&result->system_font_family_name))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif