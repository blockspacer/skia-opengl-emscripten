// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_MHTML_LOAD_RESULT_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_MHTML_LOAD_RESULT_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"




namespace blink {
namespace mojom {

enum class MHTMLLoadResult : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_MHTMLLoadResult_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::MHTMLLoadResult> {
  using Hash = blink_mojom_internal_MHTMLLoadResult_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using MHTMLLoadResult = MHTMLLoadResult;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_MHTML_LOAD_RESULT_MOJOM_BLINK_FORWARD_H_