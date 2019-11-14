// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_RENDERER_PLATFORM_LOADER_FETCH_HTTPS_STATE_H_
#define THIRD_PARTY_BLINK_RENDERER_PLATFORM_LOADER_FETCH_HTTPS_STATE_H_

#include "base/optional.h"
#include "third_party/blink/renderer/platform/platform_export.h"

namespace blink {
#if defined(ENABLE_GNET)
class SecurityOrigin;
#endif // ENABLE_GNET

// https://fetch.spec.whatwg.org/#concept-https-state-value
enum class HttpsState {
  kNone,
  // kDeprecated is not used.
  kModern
};

#if defined(ENABLE_GNET)
// According to the Fetch spec, HTTPS state is set during fetch, e.g. to
// modern for https: or to request's client's HTTPS state for data:.
// In the Blink implementation however, HTTPS state is calculated from
// response URL's SecurityOrigin and optional |parent_https_state| (that
// represents request's client's HTTPS state) to emulate this behavior.
// TODO(https://crbug.com/880986): Implement HTTPS state in more
// spec-conformant way.
PLATFORM_EXPORT HttpsState CalculateHttpsState(
    const SecurityOrigin*,
    base::Optional<HttpsState> parent_https_state = base::nullopt);
#endif // ENABLE_GNET

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_PLATFORM_LOADER_FETCH_HTTPS_STATE_H_
