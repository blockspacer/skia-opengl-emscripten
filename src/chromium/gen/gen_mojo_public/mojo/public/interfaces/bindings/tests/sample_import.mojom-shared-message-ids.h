// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_SHARED_MESSAGE_IDS_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace imported {

namespace internal {


// The 1503730779 value is based on sha256(salt + "ImportedInterface1").
constexpr uint32_t kImportedInterface_DoSomething_Name = 1503730779;

}  // namespace internal
}  // namespace imported

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_SHARED_MESSAGE_IDS_H_