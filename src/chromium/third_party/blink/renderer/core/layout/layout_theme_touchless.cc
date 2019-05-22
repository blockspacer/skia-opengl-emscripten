// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/layout/layout_theme_touchless.h"

namespace blink {

scoped_refptr<LayoutTheme> LayoutThemeTouchless::Create() {
  return base::AdoptRef(new LayoutThemeTouchless());
}

LayoutTheme& LayoutTheme::NativeTheme() {
  DEFINE_STATIC_REF(LayoutTheme, layout_theme,
                    (LayoutThemeTouchless::Create()));
  return *layout_theme;
}

LayoutThemeTouchless::~LayoutThemeTouchless() {}

bool LayoutThemeTouchless::IsFocusRingOutset() const {
  return true;
}

}  // namespace blink
