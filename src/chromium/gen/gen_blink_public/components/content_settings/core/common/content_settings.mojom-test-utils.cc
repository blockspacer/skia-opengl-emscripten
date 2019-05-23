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


#include "components/content_settings/core/common/content_settings.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/values.mojom.h"


#ifndef COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_JUMBO_H_
#define COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_JUMBO_H_
#include "components/content_settings/core/common/content_settings_struct_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#endif


namespace content_settings {
namespace mojom {




}  // namespace mojom
}  // namespace content_settings

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif