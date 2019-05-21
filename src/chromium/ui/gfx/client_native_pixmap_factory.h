// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_CLIENT_NATIVE_PIXMAP_FACTORY_H_
#define UI_GFX_CLIENT_NATIVE_PIXMAP_FACTORY_H_

#include <memory>
#include <vector>

#include "base/files/scoped_file.h"
#include "base/macros.h"
#include "ui/gfx/buffer_types.h"
#include "ui/gfx/client_native_pixmap.h"
#include "ui/gfx/gfx_export.h"

namespace gfx {

struct NativePixmapHandle;
class Size;

// The Ozone interface allows external implementations to hook into Chromium to
// provide a client pixmap for non-GPU processes.
class GFX_EXPORT ClientNativePixmapFactory {
 public:
  virtual ~ClientNativePixmapFactory() {}

  // Import the native pixmap from |handle| to be used in non-GPU processes.
  // This function takes ownership of any file descriptors in |handle|.
  virtual std::unique_ptr<ClientNativePixmap> ImportFromHandle(
      gfx::NativePixmapHandle handle,
      const gfx::Size& size,
      gfx::BufferUsage usage) = 0;
};

}  // namespace gfx

#endif  // UI_GFX_CLIENT_NATIVE_PIXMAP_FACTORY_H_