// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "mojo/public/cpp/base/token_mojom_traits.h"

namespace mojo {

// static
bool StructTraits<mojo_base::mojom::TokenDataView, base::BaseToken>::Read(
    mojo_base::mojom::TokenDataView data,
    base::BaseToken* out) {
  *out = base::BaseToken{data.high(), data.low()};
  return true;
}

}  // namespace mojo
