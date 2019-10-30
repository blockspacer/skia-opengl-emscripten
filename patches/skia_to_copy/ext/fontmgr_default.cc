// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "skia/ext/fontmgr_default.h"

#include "third_party/skia/include/core/SkFontMgr.h"

namespace {

SkDEBUGCODE(bool g_factory_called;)

    // This is a purposefully leaky pointer that has ownership of the FontMgr.
    SkFontMgr* g_fontmgr_override = nullptr;

}  // namespace

namespace skia {

void OverrideDefaultSkFontMgr(sk_sp<SkFontMgr> fontmgr) {
  SkASSERT(!g_factory_called);

  SkSafeUnref(g_fontmgr_override);
  g_fontmgr_override = fontmgr.release();
}

}  // namespace skia

/*
TODO:
lld-link: error: duplicate symbol: 
private: static class sk_sp<class SkFontMgr> __cdecl SkFontMgr::Factory(void) 
in skia.lib(fontmgr_win.SkFontMgr_win_dw_factory.obj) and in SKIA_EXT.lib(fontmgr_default.cc.obj)
*/
#if !defined(UI_VIEWS_PORT)
SK_API sk_sp<SkFontMgr> SkFontMgr::Factory() {
  SkDEBUGCODE(g_factory_called = true;);

  return g_fontmgr_override ? sk_ref_sp(g_fontmgr_override)
                            : skia::CreateDefaultSkFontMgr();
}
#endif // UI_VIEWS_PORT