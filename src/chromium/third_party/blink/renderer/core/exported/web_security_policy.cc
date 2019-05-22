/*
 * Copyright (C) 2009 Google Inc. All rights reserved.
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

#include "third_party/blink/public/web/web_security_policy.h"

#include "services/network/public/mojom/referrer_policy.mojom-blink.h"
#include "third_party/blink/public/platform/web_security_origin.h"
#include "third_party/blink/public/platform/web_string.h"
#include "third_party/blink/public/platform/web_url.h"
#include "third_party/blink/renderer/core/loader/frame_loader.h"
#include "third_party/blink/renderer/platform/weborigin/scheme_registry.h"
#include "third_party/blink/renderer/platform/weborigin/security_origin.h"
#include "third_party/blink/renderer/platform/weborigin/security_policy.h"

namespace blink {

void WebSecurityPolicy::RegisterURLSchemeAsDisplayIsolated(
    const WebString& scheme) {
  SchemeRegistry::RegisterURLSchemeAsDisplayIsolated(scheme);
}

void WebSecurityPolicy::RegisterURLSchemeAsAllowingServiceWorkers(
    const WebString& scheme) {
  SchemeRegistry::RegisterURLSchemeAsAllowingServiceWorkers(scheme);
}

void WebSecurityPolicy::RegisterURLSchemeAsAllowingWasmEvalCSP(
    const WebString& scheme) {
  SchemeRegistry::RegisterURLSchemeAsAllowingWasmEvalCSP(scheme);
}

void WebSecurityPolicy::RegisterURLSchemeAsSupportingFetchAPI(
    const WebString& scheme) {
  SchemeRegistry::RegisterURLSchemeAsSupportingFetchAPI(scheme);
}

void WebSecurityPolicy::RegisterURLSchemeAsFirstPartyWhenTopLevel(
    const WebString& scheme) {
  SchemeRegistry::RegisterURLSchemeAsFirstPartyWhenTopLevel(scheme);
}

void WebSecurityPolicy::AddOriginAccessAllowListEntry(
    const WebURL& source_origin,
    const WebString& destination_protocol,
    const WebString& destination_host,
    bool allow_destination_subdomains,
    const network::mojom::CorsOriginAccessMatchPriority priority) {
  SecurityPolicy::AddOriginAccessAllowListEntry(
      *SecurityOrigin::Create(source_origin), destination_protocol,
      destination_host, allow_destination_subdomains, priority);
}

void WebSecurityPolicy::AddOriginAccessBlockListEntry(
    const WebURL& source_origin,
    const WebString& destination_protocol,
    const WebString& destination_host,
    bool allow_destination_subdomains,
    const network::mojom::CorsOriginAccessMatchPriority priority) {
  SecurityPolicy::AddOriginAccessBlockListEntry(
      *SecurityOrigin::Create(source_origin), destination_protocol,
      destination_host, allow_destination_subdomains, priority);
}

void WebSecurityPolicy::ClearOriginAccessListForOrigin(
    const WebURL& source_origin) {
  scoped_refptr<SecurityOrigin> security_origin =
      SecurityOrigin::Create(source_origin);
  SecurityPolicy::ClearOriginAccessListForOrigin(*security_origin);
}

void WebSecurityPolicy::ClearOriginAccessList() {
  SecurityPolicy::ClearOriginAccessList();
}

void WebSecurityPolicy::AddOriginToTrustworthySafelist(
    const WebString& origin) {
  SecurityPolicy::AddOriginToTrustworthySafelist(origin);
}

void WebSecurityPolicy::AddSchemeToSecureContextSafelist(
    const WebString& scheme) {
  SchemeRegistry::RegisterURLSchemeBypassingSecureContextCheck(scheme);
}

WebString WebSecurityPolicy::GenerateReferrerHeader(
    network::mojom::ReferrerPolicy referrer_policy,
    const WebURL& url,
    const WebString& referrer) {
  return SecurityPolicy::GenerateReferrer(referrer_policy, url, referrer)
      .referrer;
}

void WebSecurityPolicy::RegisterURLSchemeAsNotAllowingJavascriptURLs(
    const WebString& scheme) {
  SchemeRegistry::RegisterURLSchemeAsNotAllowingJavascriptURLs(scheme);
}

void WebSecurityPolicy::RegisterURLSchemeAsAllowedForReferrer(
    const WebString& scheme) {
  SchemeRegistry::RegisterURLSchemeAsAllowedForReferrer(scheme);
}

}  // namespace blink
