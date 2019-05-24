// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_NO_MODULE_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_NO_MODULE_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"





enum class EnumWithoutModule : int32_t;
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct internal_EnumWithoutModule_DataHashFn;

template <>
struct DefaultHash<::EnumWithoutModule> {
  using Hash = internal_EnumWithoutModule_DataHashFn;
};
}  // namespace WTF


namespace blink {
using EnumWithoutModule = EnumWithoutModule;  // Alias for definition in the parent namespace.



}  // namespace blink

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_NO_MODULE_MOJOM_BLINK_FORWARD_H_