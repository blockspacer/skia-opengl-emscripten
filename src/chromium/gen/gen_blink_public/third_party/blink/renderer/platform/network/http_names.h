// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/network/http_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_PLATFORM_NETWORK_HTTP_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_PLATFORM_NETWORK_HTTP_NAMES_H_

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/platform/platform_export.h"

namespace blink {
namespace http_names {

PLATFORM_EXPORT extern const WTF::AtomicString& kAccept;
PLATFORM_EXPORT extern const WTF::AtomicString& kAcceptCH;
PLATFORM_EXPORT extern const WTF::AtomicString& kAcceptCHLifetime;
PLATFORM_EXPORT extern const WTF::AtomicString& kAccessControlAllowCredentials;
PLATFORM_EXPORT extern const WTF::AtomicString& kAccessControlAllowExternal;
PLATFORM_EXPORT extern const WTF::AtomicString& kAccessControlAllowHeaders;
PLATFORM_EXPORT extern const WTF::AtomicString& kAccessControlAllowMethods;
PLATFORM_EXPORT extern const WTF::AtomicString& kAccessControlAllowOrigin;
PLATFORM_EXPORT extern const WTF::AtomicString& kAccessControlExposeHeaders;
PLATFORM_EXPORT extern const WTF::AtomicString& kAccessControlMaxAge;
PLATFORM_EXPORT extern const WTF::AtomicString& kAccessControlRequestExternal;
PLATFORM_EXPORT extern const WTF::AtomicString& kAccessControlRequestHeaders;
PLATFORM_EXPORT extern const WTF::AtomicString& kAccessControlRequestMethod;
PLATFORM_EXPORT extern const WTF::AtomicString& kAllowCSPFrom;
PLATFORM_EXPORT extern const WTF::AtomicString& kCacheControl;
PLATFORM_EXPORT extern const WTF::AtomicString& kContentDPR;
PLATFORM_EXPORT extern const WTF::AtomicString& kContentDisposition;
PLATFORM_EXPORT extern const WTF::AtomicString& kContentLanguage;
PLATFORM_EXPORT extern const WTF::AtomicString& kContentSecurityPolicy;
PLATFORM_EXPORT extern const WTF::AtomicString& kContentSecurityPolicyReportOnly;
PLATFORM_EXPORT extern const WTF::AtomicString& kContentType;
PLATFORM_EXPORT extern const WTF::AtomicString& kDate;
PLATFORM_EXPORT extern const WTF::AtomicString& kETag;
PLATFORM_EXPORT extern const WTF::AtomicString& kExpires;
PLATFORM_EXPORT extern const WTF::AtomicString& kFeaturePolicy;
PLATFORM_EXPORT extern const WTF::AtomicString& kFeaturePolicyReportOnly;
PLATFORM_EXPORT extern const WTF::AtomicString& kGET;
PLATFORM_EXPORT extern const WTF::AtomicString& kHEAD;
PLATFORM_EXPORT extern const WTF::AtomicString& kIfMatch;
PLATFORM_EXPORT extern const WTF::AtomicString& kIfModifiedSince;
PLATFORM_EXPORT extern const WTF::AtomicString& kIfNoneMatch;
PLATFORM_EXPORT extern const WTF::AtomicString& kIfRange;
PLATFORM_EXPORT extern const WTF::AtomicString& kIfUnmodifiedSince;
PLATFORM_EXPORT extern const WTF::AtomicString& kLastEventID;
PLATFORM_EXPORT extern const WTF::AtomicString& kLastModified;
PLATFORM_EXPORT extern const WTF::AtomicString& kLink;
PLATFORM_EXPORT extern const WTF::AtomicString& kLocation;
PLATFORM_EXPORT extern const WTF::AtomicString& kOPTIONS;
PLATFORM_EXPORT extern const WTF::AtomicString& kOrigin;
PLATFORM_EXPORT extern const WTF::AtomicString& kOriginTrial;
PLATFORM_EXPORT extern const WTF::AtomicString& kPOST;
PLATFORM_EXPORT extern const WTF::AtomicString& kPUT;
PLATFORM_EXPORT extern const WTF::AtomicString& kPingFrom;
PLATFORM_EXPORT extern const WTF::AtomicString& kPingTo;
PLATFORM_EXPORT extern const WTF::AtomicString& kPragma;
PLATFORM_EXPORT extern const WTF::AtomicString& kRange;
PLATFORM_EXPORT extern const WTF::AtomicString& kReferer;
PLATFORM_EXPORT extern const WTF::AtomicString& kReferrerPolicy;
PLATFORM_EXPORT extern const WTF::AtomicString& kRefresh;
PLATFORM_EXPORT extern const WTF::AtomicString& kResourceFreshness;
PLATFORM_EXPORT extern const WTF::AtomicString& kSaveData;
PLATFORM_EXPORT extern const WTF::AtomicString& kSecCHLang;
PLATFORM_EXPORT extern const WTF::AtomicString& kSecRequiredCSP;
PLATFORM_EXPORT extern const WTF::AtomicString& kServerTiming;
PLATFORM_EXPORT extern const WTF::AtomicString& kSourceMap;
PLATFORM_EXPORT extern const WTF::AtomicString& kTimingAllowOrigin;
PLATFORM_EXPORT extern const WTF::AtomicString& kUpgradeInsecureRequests;
PLATFORM_EXPORT extern const WTF::AtomicString& kUserAgent;
PLATFORM_EXPORT extern const WTF::AtomicString& kVary;
PLATFORM_EXPORT extern const WTF::AtomicString& kXContentTypeOptions;
PLATFORM_EXPORT extern const WTF::AtomicString& kXDNSPrefetchControl;
PLATFORM_EXPORT extern const WTF::AtomicString& kXFrameOptions;
PLATFORM_EXPORT extern const WTF::AtomicString& kXSourceMap;
PLATFORM_EXPORT extern const WTF::AtomicString& kXXSSProtection;

constexpr unsigned kNamesCount = 64;

PLATFORM_EXPORT void Init();

}  // namespace http_names
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_PLATFORM_NETWORK_HTTP_NAMES_H_
