// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace font_service {
namespace mojom {

namespace internal {


// The 854264465 value is based on sha256(salt + "FontService1").
constexpr uint32_t kFontService_MatchFamilyName_Name = 854264465;
// The 2118242793 value is based on sha256(salt + "FontService2").
constexpr uint32_t kFontService_OpenStream_Name = 2118242793;
// The 1955934320 value is based on sha256(salt + "FontService3").
constexpr uint32_t kFontService_FallbackFontForCharacter_Name = 1955934320;
// The 706576500 value is based on sha256(salt + "FontService4").
constexpr uint32_t kFontService_FontRenderStyleForStrike_Name = 706576500;
// The 608865829 value is based on sha256(salt + "FontService5").
constexpr uint32_t kFontService_MatchFontByPostscriptNameOrFullFontName_Name = 608865829;
// The 1626836227 value is based on sha256(salt + "FontService6").
constexpr uint32_t kFontService_MatchFontWithFallback_Name = 1626836227;

}  // namespace internal
}  // namespace mojom
}  // namespace font_service

#endif  // COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_