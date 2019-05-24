// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/network/http_names.json5


#include "third_party/blink/renderer/platform/network/http_names.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace http_names {

void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kAccept = reinterpret_cast<AtomicString*>(&names_storage)[0];
const AtomicString& kAcceptCH = reinterpret_cast<AtomicString*>(&names_storage)[1];
const AtomicString& kAcceptCHLifetime = reinterpret_cast<AtomicString*>(&names_storage)[2];
const AtomicString& kAccessControlAllowCredentials = reinterpret_cast<AtomicString*>(&names_storage)[3];
const AtomicString& kAccessControlAllowExternal = reinterpret_cast<AtomicString*>(&names_storage)[4];
const AtomicString& kAccessControlAllowHeaders = reinterpret_cast<AtomicString*>(&names_storage)[5];
const AtomicString& kAccessControlAllowMethods = reinterpret_cast<AtomicString*>(&names_storage)[6];
const AtomicString& kAccessControlAllowOrigin = reinterpret_cast<AtomicString*>(&names_storage)[7];
const AtomicString& kAccessControlExposeHeaders = reinterpret_cast<AtomicString*>(&names_storage)[8];
const AtomicString& kAccessControlMaxAge = reinterpret_cast<AtomicString*>(&names_storage)[9];
const AtomicString& kAccessControlRequestExternal = reinterpret_cast<AtomicString*>(&names_storage)[10];
const AtomicString& kAccessControlRequestHeaders = reinterpret_cast<AtomicString*>(&names_storage)[11];
const AtomicString& kAccessControlRequestMethod = reinterpret_cast<AtomicString*>(&names_storage)[12];
const AtomicString& kAllowCSPFrom = reinterpret_cast<AtomicString*>(&names_storage)[13];
const AtomicString& kCacheControl = reinterpret_cast<AtomicString*>(&names_storage)[14];
const AtomicString& kContentDPR = reinterpret_cast<AtomicString*>(&names_storage)[15];
const AtomicString& kContentDisposition = reinterpret_cast<AtomicString*>(&names_storage)[16];
const AtomicString& kContentLanguage = reinterpret_cast<AtomicString*>(&names_storage)[17];
const AtomicString& kContentSecurityPolicy = reinterpret_cast<AtomicString*>(&names_storage)[18];
const AtomicString& kContentSecurityPolicyReportOnly = reinterpret_cast<AtomicString*>(&names_storage)[19];
const AtomicString& kContentType = reinterpret_cast<AtomicString*>(&names_storage)[20];
const AtomicString& kDate = reinterpret_cast<AtomicString*>(&names_storage)[21];
const AtomicString& kETag = reinterpret_cast<AtomicString*>(&names_storage)[22];
const AtomicString& kExpires = reinterpret_cast<AtomicString*>(&names_storage)[23];
const AtomicString& kFeaturePolicy = reinterpret_cast<AtomicString*>(&names_storage)[24];
const AtomicString& kFeaturePolicyReportOnly = reinterpret_cast<AtomicString*>(&names_storage)[25];
const AtomicString& kGET = reinterpret_cast<AtomicString*>(&names_storage)[26];
const AtomicString& kHEAD = reinterpret_cast<AtomicString*>(&names_storage)[27];
const AtomicString& kIfMatch = reinterpret_cast<AtomicString*>(&names_storage)[28];
const AtomicString& kIfModifiedSince = reinterpret_cast<AtomicString*>(&names_storage)[29];
const AtomicString& kIfNoneMatch = reinterpret_cast<AtomicString*>(&names_storage)[30];
const AtomicString& kIfRange = reinterpret_cast<AtomicString*>(&names_storage)[31];
const AtomicString& kIfUnmodifiedSince = reinterpret_cast<AtomicString*>(&names_storage)[32];
const AtomicString& kLastEventID = reinterpret_cast<AtomicString*>(&names_storage)[33];
const AtomicString& kLastModified = reinterpret_cast<AtomicString*>(&names_storage)[34];
const AtomicString& kLink = reinterpret_cast<AtomicString*>(&names_storage)[35];
const AtomicString& kLocation = reinterpret_cast<AtomicString*>(&names_storage)[36];
const AtomicString& kOPTIONS = reinterpret_cast<AtomicString*>(&names_storage)[37];
const AtomicString& kOrigin = reinterpret_cast<AtomicString*>(&names_storage)[38];
const AtomicString& kOriginTrial = reinterpret_cast<AtomicString*>(&names_storage)[39];
const AtomicString& kPOST = reinterpret_cast<AtomicString*>(&names_storage)[40];
const AtomicString& kPUT = reinterpret_cast<AtomicString*>(&names_storage)[41];
const AtomicString& kPingFrom = reinterpret_cast<AtomicString*>(&names_storage)[42];
const AtomicString& kPingTo = reinterpret_cast<AtomicString*>(&names_storage)[43];
const AtomicString& kPragma = reinterpret_cast<AtomicString*>(&names_storage)[44];
const AtomicString& kRange = reinterpret_cast<AtomicString*>(&names_storage)[45];
const AtomicString& kReferer = reinterpret_cast<AtomicString*>(&names_storage)[46];
const AtomicString& kReferrerPolicy = reinterpret_cast<AtomicString*>(&names_storage)[47];
const AtomicString& kRefresh = reinterpret_cast<AtomicString*>(&names_storage)[48];
const AtomicString& kResourceFreshness = reinterpret_cast<AtomicString*>(&names_storage)[49];
const AtomicString& kSaveData = reinterpret_cast<AtomicString*>(&names_storage)[50];
const AtomicString& kSecCHLang = reinterpret_cast<AtomicString*>(&names_storage)[51];
const AtomicString& kSecRequiredCSP = reinterpret_cast<AtomicString*>(&names_storage)[52];
const AtomicString& kServerTiming = reinterpret_cast<AtomicString*>(&names_storage)[53];
const AtomicString& kSourceMap = reinterpret_cast<AtomicString*>(&names_storage)[54];
const AtomicString& kTimingAllowOrigin = reinterpret_cast<AtomicString*>(&names_storage)[55];
const AtomicString& kUpgradeInsecureRequests = reinterpret_cast<AtomicString*>(&names_storage)[56];
const AtomicString& kUserAgent = reinterpret_cast<AtomicString*>(&names_storage)[57];
const AtomicString& kVary = reinterpret_cast<AtomicString*>(&names_storage)[58];
const AtomicString& kXContentTypeOptions = reinterpret_cast<AtomicString*>(&names_storage)[59];
const AtomicString& kXDNSPrefetchControl = reinterpret_cast<AtomicString*>(&names_storage)[60];
const AtomicString& kXFrameOptions = reinterpret_cast<AtomicString*>(&names_storage)[61];
const AtomicString& kXSourceMap = reinterpret_cast<AtomicString*>(&names_storage)[62];
const AtomicString& kXXSSProtection = reinterpret_cast<AtomicString*>(&names_storage)[63];

void Init() {
  static bool is_loaded = false;
  if (is_loaded) return;
  is_loaded = true;

  struct NameEntry {
    const char* name;
    unsigned hash;
    unsigned char length;
  };

  static const NameEntry kNames[] = {
    { "Accept", 16044384, 6 },
    { "Accept-CH", 8016737, 9 },
    { "Accept-CH-Lifetime", 1541145, 18 },
    { "Access-Control-Allow-Credentials", 6289225, 32 },
    { "Access-Control-Allow-External", 8605227, 29 },
    { "Access-Control-Allow-Headers", 1266438, 28 },
    { "Access-Control-Allow-Methods", 3562078, 28 },
    { "Access-Control-Allow-Origin", 15441179, 27 },
    { "Access-Control-Expose-Headers", 7723476, 29 },
    { "Access-Control-Max-Age", 283611, 22 },
    { "Access-Control-Request-External", 7007971, 31 },
    { "Access-Control-Request-Headers", 1508482, 30 },
    { "Access-Control-Request-Method", 16377097, 29 },
    { "Allow-CSP-From", 12361355, 14 },
    { "Cache-Control", 7757542, 13 },
    { "Content-DPR", 8569724, 11 },
    { "Content-Disposition", 362682, 19 },
    { "Content-Language", 3105184, 16 },
    { "Content-Security-Policy", 4305016, 23 },
    { "Content-Security-Policy-Report-Only", 13963024, 35 },
    { "Content-Type", 7448957, 12 },
    { "Date", 3151137, 4 },
    { "ETag", 10343133, 4 },
    { "Expires", 9729139, 7 },
    { "Feature-Policy", 1082240, 14 },
    { "Feature-Policy-Report-Only", 3646568, 26 },
    { "GET", 1490282, 3 },
    { "HEAD", 3699341, 4 },
    { "If-Match", 10647657, 8 },
    { "If-Modified-Since", 13772578, 17 },
    { "If-None-Match", 4893326, 13 },
    { "If-Range", 8269837, 8 },
    { "If-Unmodified-Since", 12269155, 19 },
    { "Last-Event-ID", 2469869, 13 },
    { "Last-Modified", 3916406, 13 },
    { "Link", 1568545, 4 },
    { "Location", 1088524, 8 },
    { "OPTIONS", 680577, 7 },
    { "Origin", 13877165, 6 },
    { "Origin-Trial", 12788968, 12 },
    { "POST", 13393727, 4 },
    { "PUT", 9202129, 3 },
    { "Ping-From", 10612987, 9 },
    { "Ping-To", 1685887, 7 },
    { "Pragma", 7452047, 6 },
    { "Range", 6535599, 5 },
    { "Referer", 15797945, 7 },
    { "Referrer-Policy", 11153730, 15 },
    { "Refresh", 7822740, 7 },
    { "Resource-Freshness", 15499919, 18 },
    { "Save-Data", 2009288, 9 },
    { "Sec-CH-Lang", 1758101, 11 },
    { "Sec-Required-CSP", 14895418, 16 },
    { "Server-Timing", 2791460, 13 },
    { "SourceMap", 10731005, 9 },
    { "Timing-Allow-Origin", 3756500, 19 },
    { "Upgrade-Insecure-Requests", 15356604, 25 },
    { "User-Agent", 13018365, 10 },
    { "Vary", 16275252, 4 },
    { "X-Content-Type-Options", 7241058, 22 },
    { "X-DNS-Prefetch-Control", 8848020, 22 },
    { "X-Frame-Options", 15031229, 15 },
    { "X-SourceMap", 10540689, 11 },
    { "X-XSS-Protection", 15642148, 16 },
  };

  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace http_names
}  // namespace blink
