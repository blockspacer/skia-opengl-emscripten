// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_TEST_UTILS_H_
#define COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_TEST_UTILS_H_

#include "components/services/font/public/interfaces/font_service.mojom.h"


namespace font_service {
namespace mojom {


class  FontServiceInterceptorForTesting : public FontService {
  virtual FontService* GetForwardingInterface() = 0;
  void MatchFamilyName(const std::string& family_name, TypefaceStylePtr style, MatchFamilyNameCallback callback) override;
  void OpenStream(uint32_t id_number, OpenStreamCallback callback) override;
  void FallbackFontForCharacter(uint32_t character, const std::string& locale, FallbackFontForCharacterCallback callback) override;
  void FontRenderStyleForStrike(const std::string& family, uint32_t size, bool is_italic, bool is_bold, float device_scale_factor, FontRenderStyleForStrikeCallback callback) override;
  void MatchFontByPostscriptNameOrFullFontName(const std::string& postscript_name_or_full_font_name, MatchFontByPostscriptNameOrFullFontNameCallback callback) override;
  void MatchFontWithFallback(const std::string& family, bool is_bold, bool is_italic, uint32_t charset, uint32_t fallback_family_type, MatchFontWithFallbackCallback callback) override;
};
class  FontServiceAsyncWaiter {
 public:
  explicit FontServiceAsyncWaiter(FontService* proxy);
  ~FontServiceAsyncWaiter();
  void MatchFamilyName(
      const std::string& family_name, TypefaceStylePtr style, FontIdentityPtr* out_identity, std::string* out_family_name, TypefaceStylePtr* out_style);
  void OpenStream(
      uint32_t id_number, base::File* out_font_handle);
  void FallbackFontForCharacter(
      uint32_t character, const std::string& locale, FontIdentityPtr* out_identity, std::string* out_family_name, bool* out_is_bold, bool* out_is_italic);
  void FontRenderStyleForStrike(
      const std::string& family, uint32_t size, bool is_italic, bool is_bold, float device_scale_factor, FontRenderStylePtr* out_font_render_style);
  void MatchFontByPostscriptNameOrFullFontName(
      const std::string& postscript_name_or_full_font_name, FontIdentityPtr* out_identity);
  void MatchFontWithFallback(
      const std::string& family, bool is_bold, bool is_italic, uint32_t charset, uint32_t fallback_family_type, base::File* out_font_file_handle);

 private:
  FontService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FontServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace font_service

#endif  // COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_TEST_UTILS_H_