// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1593957926 value is based on sha256(salt + "InsecureInputService1").
constexpr uint32_t kInsecureInputService_DidEditFieldInInsecureContext_Name = 1593957926;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_