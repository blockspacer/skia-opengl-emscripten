// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/views/controls/menu/menu_image_util.h"

#include "ui/gfx/color_palette.h"
#include "ui/gfx/paint_vector_icon.h"
#include "ui/gfx/vector_icon_types.h"
#if !defined(UI_VIEWS_PORT)
#include "ui/views/vector_icons.h"
#endif // UI_VIEWS_PORT

namespace views {

gfx::ImageSkia GetMenuCheckImage(SkColor icon_color) {
#if !defined(UI_VIEWS_PORT)
  return gfx::CreateVectorIcon(kMenuCheckIcon, icon_color);
#else
  return gfx::ImageSkia();
#endif // UI_VIEWS_PORT
}

gfx::ImageSkia GetRadioButtonImage(bool toggled,
                                   bool hovered,
                                   SkColor default_icon_color) {
#if !defined(UI_VIEWS_PORT)
  const gfx::VectorIcon& icon =
      toggled ? kMenuRadioSelectedIcon : kMenuRadioEmptyIcon;
  SkColor color =
      toggled && !hovered ? gfx::kGoogleBlue500 : default_icon_color;
  return gfx::CreateVectorIcon(icon, kMenuCheckSize, color);
#else
  return gfx::ImageSkia();
#endif // UI_VIEWS_PORT
}

gfx::ImageSkia GetSubmenuArrowImage(SkColor icon_color) {
#if !defined(UI_VIEWS_PORT)
  return gfx::CreateVectorIcon(kSubmenuArrowIcon, icon_color);
#else
  return gfx::ImageSkia();
#endif // UI_VIEWS_PORT
}

}  // namespace views
