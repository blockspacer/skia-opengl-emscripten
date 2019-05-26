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


#include "skia/public/interfaces/bitmap.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/big_buffer.mojom.h"
#include "skia/public/interfaces/image_info.mojom.h"


#ifndef SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_JUMBO_H_
#define SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#endif


namespace skia {
namespace mojom {




}  // namespace mojom
}  // namespace skia

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif