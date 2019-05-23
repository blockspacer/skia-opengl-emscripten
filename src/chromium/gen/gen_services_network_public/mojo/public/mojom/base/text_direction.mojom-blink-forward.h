// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_TEXT_DIRECTION_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_MOJOM_BASE_TEXT_DIRECTION_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "base/component_export.h"


namespace mojo_base {
namespace mojom {

enum class TextDirection : int32_t;
}  // namespace mojo_base
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct mojo_base_mojom_internal_TextDirection_DataHashFn;

template <>
struct DefaultHash<::mojo_base::mojom::TextDirection> {
  using Hash = mojo_base_mojom_internal_TextDirection_DataHashFn;
};
}  // namespace WTF


namespace mojo_base {
namespace mojom {
namespace blink {
using TextDirection = TextDirection;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_TEXT_DIRECTION_MOJOM_BLINK_FORWARD_H_