// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_IPC_SKIA_GFX_SKIA_PARAM_TRAITS_MACROS_H_
#define UI_GFX_IPC_SKIA_GFX_SKIA_PARAM_TRAITS_MACROS_H_

#include <stdint.h>

#if defined(ENABLE_GIPC)
#include "ipc/ipc_message_macros.h"
#endif // ENABLE_GIPC
#include "third_party/skia/include/core/SkImageInfo.h"

#if defined(ENABLE_GIPC)
IPC_ENUM_TRAITS_VALIDATE(SkColorType, kLastEnum_SkColorType)
IPC_ENUM_TRAITS_VALIDATE(SkAlphaType, kLastEnum_SkAlphaType)
#endif // ENABLE_GIPC

#endif  // UI_GFX_IPC_SKIA_GFX_SKIA_PARAM_TRAITS_MACROS_H_
