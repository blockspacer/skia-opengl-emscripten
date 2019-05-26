// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_UNIQUE_NAME_LOOKUP_FONT_UNIQUE_NAME_LOOKUP_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_UNIQUE_NAME_LOOKUP_FONT_UNIQUE_NAME_LOOKUP_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/font_unique_name_lookup/font_unique_name_lookup.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT FontUniqueNameLookupInterceptorForTesting : public FontUniqueNameLookup {
  virtual FontUniqueNameLookup* GetForwardingInterface() = 0;
  void GetUniqueNameLookupTable(GetUniqueNameLookupTableCallback callback) override;
};
class PLATFORM_EXPORT FontUniqueNameLookupAsyncWaiter {
 public:
  explicit FontUniqueNameLookupAsyncWaiter(FontUniqueNameLookup* proxy);
  ~FontUniqueNameLookupAsyncWaiter();
  void GetUniqueNameLookupTable(
      base::ReadOnlySharedMemoryRegion* out_font_lookup_table);

 private:
  FontUniqueNameLookup* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FontUniqueNameLookupAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_UNIQUE_NAME_LOOKUP_FONT_UNIQUE_NAME_LOOKUP_MOJOM_BLINK_TEST_UTILS_H_