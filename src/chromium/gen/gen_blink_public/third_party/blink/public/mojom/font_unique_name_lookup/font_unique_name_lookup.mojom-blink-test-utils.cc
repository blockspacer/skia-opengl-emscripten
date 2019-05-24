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


#include "third_party/blink/public/mojom/font_unique_name_lookup/font_unique_name_lookup.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/file_path.mojom-blink.h"
#include "mojo/public/mojom/base/shared_memory.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_UNIQUE_NAME_LOOKUP_FONT_UNIQUE_NAME_LOOKUP_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_UNIQUE_NAME_LOOKUP_FONT_UNIQUE_NAME_LOOKUP_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void FontUniqueNameLookupInterceptorForTesting::GetUniqueNameLookupTable(GetUniqueNameLookupTableCallback callback) {
  GetForwardingInterface()->GetUniqueNameLookupTable(std::move(callback));
}
FontUniqueNameLookupAsyncWaiter::FontUniqueNameLookupAsyncWaiter(
    FontUniqueNameLookup* proxy) : proxy_(proxy) {}

FontUniqueNameLookupAsyncWaiter::~FontUniqueNameLookupAsyncWaiter() = default;

void FontUniqueNameLookupAsyncWaiter::GetUniqueNameLookupTable(
    base::ReadOnlySharedMemoryRegion* out_font_lookup_table) {
  base::RunLoop loop;
  proxy_->GetUniqueNameLookupTable(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::ReadOnlySharedMemoryRegion* out_font_lookup_table
,
             base::ReadOnlySharedMemoryRegion font_lookup_table) {*out_font_lookup_table = std::move(font_lookup_table);
            loop->Quit();
          },
          &loop,
          out_font_lookup_table));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif