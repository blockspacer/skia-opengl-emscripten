// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/feature_policy/feature_policy_parser.h"

#include <stddef.h>
#include <stdint.h>
#include <memory>
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/testing/blink_fuzzer_test_support.h"
#include "third_party/blink/renderer/platform/weborigin/security_origin.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

void ParseValueForFuzzer(blink::mojom::PolicyValueType feature_type,
                         const WTF::String& value_string) {
  bool ok;
  blink::FeaturePolicyParser::ParseValueForType(feature_type, value_string,
                                                &ok);
}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  static blink::BlinkFuzzerTestSupport test_support =
      blink::BlinkFuzzerTestSupport();
  ParseValueForFuzzer(blink::mojom::PolicyValueType::kBool,
                      WTF::String(data, size));
  ParseValueForFuzzer(blink::mojom::PolicyValueType::kDecDouble,
                      WTF::String(data, size));
  return 0;
}
