// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_WEB_CANONICAL_COOKIE_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_WEB_CANONICAL_COOKIE_H_

#include "base/optional.h"
#include "base/time/time.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/restricted_cookie_manager.mojom-shared.h"
#endif // ENABLE_GNET
#include "third_party/blink/public/platform/web_string.h"
#include "third_party/blink/public/platform/web_url.h"
#include "third_party/blink/renderer/platform/platform_export.h"  // nogncheck

namespace blink {

// This class is a blink analogue for net::CanonicalCookie.
// TODO(jsbell): Once all prospective clients are migrated to blink, move this
// to renderer/platform as blink::CanonicalCookie.
class BLINK_PLATFORM_EXPORT WebCanonicalCookie {
 public:
  // Default/copy constructor needed for use with Vector.
  WebCanonicalCookie();
  WebCanonicalCookie(const WebCanonicalCookie& other);

  ~WebCanonicalCookie();

  WebCanonicalCookie& operator=(const WebCanonicalCookie& other);

  const WebString& Name() const { return name_; }
  const WebString& Value() const { return value_; }
  const WebString& Domain() const { return domain_; }
  const WebString& Path() const { return path_; }
  base::Time CreationDate() const { return creation_; }
  base::Time ExpiryDate() const { return expiration_; }
  base::Time LastAccessDate() const { return last_access_; }
  bool IsSecure() const { return is_secure_; }
  bool IsHttpOnly() const { return is_http_only_; }
#if defined(ENABLE_GNET)
  network::mojom::CookieSameSite SameSite() const { return same_site_; }
  network::mojom::CookiePriority Priority() const { return priority_; }
#endif // ENABLE_GNET

  // If the result is not canonical, nullopt will be returned.
  static base::Optional<WebCanonicalCookie> Create(
      WebString name,
      WebString value,
      WebString domain,
      WebString path,
      base::Time creation,
      base::Time expiration,
      base::Time last_access,
      bool is_secure,
      bool is_http_only
#if defined(ENABLE_GNET)
      ,
      network::mojom::CookieSameSite same_site,
      network::mojom::CookiePriority priority
#endif // ENABLE_GNET
      );

  // Parsing, for the document.cookie API.
  // If the result is not canonical, nullopt will be returned.
  static base::Optional<WebCanonicalCookie> Create(const WebURL& url,
                                                   const WebString& cookie_line,
                                                   base::Time creation_time);
#if defined(ENABLE_GNET)
  static constexpr const network::mojom::CookiePriority kDefaultPriority =
      network::mojom::CookiePriority::MEDIUM;
#endif // ENABLE_GNET

 private:
  // Prefer static Create methods, which ensure that the returned cookie is
  // canonical.
  WebCanonicalCookie(WebString name,
                     WebString value,
                     WebString domain,
                     WebString path,
                     base::Time creation,
                     base::Time expiration,
                     base::Time last_access,
                     bool is_secure,
                     bool is_http_only
#if defined(ENABLE_GNET)
                     ,
                     network::mojom::CookieSameSite same_site,
                     network::mojom::CookiePriority priority
#endif // ENABLE_GNET
                     );

  WebString name_;
  WebString value_;
  WebString domain_;
  WebString path_;
  base::Time creation_;
  base::Time expiration_;
  base::Time last_access_;
  bool is_secure_ = false;
  bool is_http_only_ = false;
#if defined(ENABLE_GNET)
  network::mojom::CookieSameSite same_site_ =
      network::mojom::CookieSameSite::NO_RESTRICTION;
  network::mojom::CookiePriority priority_ = kDefaultPriority;
#endif // ENABLE_GNET
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_WEB_CANONICAL_COOKIE_H_
