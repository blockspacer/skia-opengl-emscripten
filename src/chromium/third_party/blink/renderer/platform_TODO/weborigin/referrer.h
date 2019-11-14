/*
 * Copyright (C) 2014 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef THIRD_PARTY_BLINK_RENDERER_PLATFORM_WEBORIGIN_REFERRER_H_
#define THIRD_PARTY_BLINK_RENDERER_PLATFORM_WEBORIGIN_REFERRER_H_

#if defined(ENABLE_GNET)
#include "services/network/public/mojom/referrer_policy.mojom-shared.h"
#endif // ENABLE_GNET
#include "third_party/blink/renderer/platform/weborigin/kurl.h"
#include "third_party/blink/renderer/platform/wtf/allocator.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

struct Referrer {
  DISALLOW_NEW();
  Referrer(const String& referrer
#if defined(ENABLE_GNET)
  ,
           network::mojom::ReferrerPolicy referrer_policy
#endif // ENABLE_GNET
           )
      : referrer(referrer)
#if defined(ENABLE_GNET)
      , referrer_policy(referrer_policy)
#endif // ENABLE_GNET
      {
    DCHECK(referrer == NoReferrer() || KURL(NullURL(), referrer).IsValid());
  }
  Referrer()
#if defined(ENABLE_GNET)
  : referrer_policy(network::mojom::ReferrerPolicy::kDefault)
#endif // ENABLE_GNET
  {}
  // We use these strings instead of "no-referrer" and "client" in the spec.
  static String NoReferrer() { return String(); }
  static String ClientReferrerString() { return "about:client"; }

  AtomicString referrer;
#if defined(ENABLE_GNET)
  network::mojom::ReferrerPolicy referrer_policy;
#endif // ENABLE_GNET
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_PLATFORM_WEBORIGIN_REFERRER_H_
