// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef URL_MOJOM_URL_MOJOM_BLINK_FORWARD_H_
#define URL_MOJOM_URL_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace url {
namespace mojom {
}  // namespace url
}  // namespace mojom


namespace url {
namespace mojom {
namespace blink {
class Url;
using UrlPtr = mojo::InlinedStructPtr<Url>;




}  // namespace blink
}  // namespace mojom
}  // namespace url
#include "third_party/blink/renderer/platform/weborigin/kurl.h"

#endif  // URL_MOJOM_URL_MOJOM_BLINK_FORWARD_H_