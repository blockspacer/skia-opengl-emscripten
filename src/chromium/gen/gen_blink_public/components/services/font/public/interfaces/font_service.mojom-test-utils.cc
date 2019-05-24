// Copyright 2019 The Chromium Authors. All rights reserved.
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


#include "components/services/font/public/interfaces/font_service.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/file.mojom.h"


#ifndef COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_JUMBO_H_
#define COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#endif


namespace font_service {
namespace mojom {


void FontServiceInterceptorForTesting::MatchFamilyName(const std::string& family_name, TypefaceStylePtr style, MatchFamilyNameCallback callback) {
  GetForwardingInterface()->MatchFamilyName(std::move(family_name), std::move(style), std::move(callback));
}
void FontServiceInterceptorForTesting::OpenStream(uint32_t id_number, OpenStreamCallback callback) {
  GetForwardingInterface()->OpenStream(std::move(id_number), std::move(callback));
}
void FontServiceInterceptorForTesting::FallbackFontForCharacter(uint32_t character, const std::string& locale, FallbackFontForCharacterCallback callback) {
  GetForwardingInterface()->FallbackFontForCharacter(std::move(character), std::move(locale), std::move(callback));
}
void FontServiceInterceptorForTesting::FontRenderStyleForStrike(const std::string& family, uint32_t size, bool is_italic, bool is_bold, float device_scale_factor, FontRenderStyleForStrikeCallback callback) {
  GetForwardingInterface()->FontRenderStyleForStrike(std::move(family), std::move(size), std::move(is_italic), std::move(is_bold), std::move(device_scale_factor), std::move(callback));
}
void FontServiceInterceptorForTesting::MatchFontByPostscriptNameOrFullFontName(const std::string& postscript_name_or_full_font_name, MatchFontByPostscriptNameOrFullFontNameCallback callback) {
  GetForwardingInterface()->MatchFontByPostscriptNameOrFullFontName(std::move(postscript_name_or_full_font_name), std::move(callback));
}
void FontServiceInterceptorForTesting::MatchFontWithFallback(const std::string& family, bool is_bold, bool is_italic, uint32_t charset, uint32_t fallback_family_type, MatchFontWithFallbackCallback callback) {
  GetForwardingInterface()->MatchFontWithFallback(std::move(family), std::move(is_bold), std::move(is_italic), std::move(charset), std::move(fallback_family_type), std::move(callback));
}
FontServiceAsyncWaiter::FontServiceAsyncWaiter(
    FontService* proxy) : proxy_(proxy) {}

FontServiceAsyncWaiter::~FontServiceAsyncWaiter() = default;

void FontServiceAsyncWaiter::MatchFamilyName(
    const std::string& family_name, TypefaceStylePtr style, FontIdentityPtr* out_identity, std::string* out_family_name, TypefaceStylePtr* out_style) {
  base::RunLoop loop;
  proxy_->MatchFamilyName(std::move(family_name),std::move(style),
      base::BindOnce(
          [](base::RunLoop* loop,
             FontIdentityPtr* out_identity
,
             std::string* out_family_name
,
             TypefaceStylePtr* out_style
,
             FontIdentityPtr identity,
             const std::string& family_name,
             TypefaceStylePtr style) {*out_identity = std::move(identity);*out_family_name = std::move(family_name);*out_style = std::move(style);
            loop->Quit();
          },
          &loop,
          out_identity,
          out_family_name,
          out_style));
  loop.Run();
}
void FontServiceAsyncWaiter::OpenStream(
    uint32_t id_number, base::File* out_font_handle) {
  base::RunLoop loop;
  proxy_->OpenStream(std::move(id_number),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::File* out_font_handle
,
             base::File font_handle) {*out_font_handle = std::move(font_handle);
            loop->Quit();
          },
          &loop,
          out_font_handle));
  loop.Run();
}
void FontServiceAsyncWaiter::FallbackFontForCharacter(
    uint32_t character, const std::string& locale, FontIdentityPtr* out_identity, std::string* out_family_name, bool* out_is_bold, bool* out_is_italic) {
  base::RunLoop loop;
  proxy_->FallbackFontForCharacter(std::move(character),std::move(locale),
      base::BindOnce(
          [](base::RunLoop* loop,
             FontIdentityPtr* out_identity
,
             std::string* out_family_name
,
             bool* out_is_bold
,
             bool* out_is_italic
,
             FontIdentityPtr identity,
             const std::string& family_name,
             bool is_bold,
             bool is_italic) {*out_identity = std::move(identity);*out_family_name = std::move(family_name);*out_is_bold = std::move(is_bold);*out_is_italic = std::move(is_italic);
            loop->Quit();
          },
          &loop,
          out_identity,
          out_family_name,
          out_is_bold,
          out_is_italic));
  loop.Run();
}
void FontServiceAsyncWaiter::FontRenderStyleForStrike(
    const std::string& family, uint32_t size, bool is_italic, bool is_bold, float device_scale_factor, FontRenderStylePtr* out_font_render_style) {
  base::RunLoop loop;
  proxy_->FontRenderStyleForStrike(std::move(family),std::move(size),std::move(is_italic),std::move(is_bold),std::move(device_scale_factor),
      base::BindOnce(
          [](base::RunLoop* loop,
             FontRenderStylePtr* out_font_render_style
,
             FontRenderStylePtr font_render_style) {*out_font_render_style = std::move(font_render_style);
            loop->Quit();
          },
          &loop,
          out_font_render_style));
  loop.Run();
}
void FontServiceAsyncWaiter::MatchFontByPostscriptNameOrFullFontName(
    const std::string& postscript_name_or_full_font_name, FontIdentityPtr* out_identity) {
  base::RunLoop loop;
  proxy_->MatchFontByPostscriptNameOrFullFontName(std::move(postscript_name_or_full_font_name),
      base::BindOnce(
          [](base::RunLoop* loop,
             FontIdentityPtr* out_identity
,
             FontIdentityPtr identity) {*out_identity = std::move(identity);
            loop->Quit();
          },
          &loop,
          out_identity));
  loop.Run();
}
void FontServiceAsyncWaiter::MatchFontWithFallback(
    const std::string& family, bool is_bold, bool is_italic, uint32_t charset, uint32_t fallback_family_type, base::File* out_font_file_handle) {
  base::RunLoop loop;
  proxy_->MatchFontWithFallback(std::move(family),std::move(is_bold),std::move(is_italic),std::move(charset),std::move(fallback_family_type),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::File* out_font_file_handle
,
             base::File font_file_handle) {*out_font_file_handle = std::move(font_file_handle);
            loop->Quit();
          },
          &loop,
          out_font_file_handle));
  loop.Run();
}





}  // namespace mojom
}  // namespace font_service

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif