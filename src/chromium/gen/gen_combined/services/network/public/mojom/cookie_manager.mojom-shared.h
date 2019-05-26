// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared-internal.h"
#include "components/content_settings/core/common/content_settings.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class CookieManagerParamsDataView;

class CookieOptionsDataView;

class CanonicalCookieDataView;

class CookieWithStatusDataView;

class CookieDeletionFilterDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::CookieManagerParamsDataView> {
  using Data = ::network::mojom::internal::CookieManagerParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::CookieOptionsDataView> {
  using Data = ::network::mojom::internal::CookieOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::CanonicalCookieDataView> {
  using Data = ::network::mojom::internal::CanonicalCookie_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::CookieWithStatusDataView> {
  using Data = ::network::mojom::internal::CookieWithStatus_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::CookieDeletionFilterDataView> {
  using Data = ::network::mojom::internal::CookieDeletionFilter_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class CookiePriority : int32_t {
  
  LOW,
  
  MEDIUM,
  
  HIGH,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, CookiePriority value);
inline bool IsKnownEnumValue(CookiePriority value) {
  return internal::CookiePriority_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class CookieSameSite : int32_t {
  
  UNSPECIFIED = -1,
  
  NO_RESTRICTION = 0,
  
  LAX_MODE = 1,
  
  STRICT_MODE = 2,
  
  EXTENDED_MODE = 3,
  kMinValue = -1,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, CookieSameSite value);
inline bool IsKnownEnumValue(CookieSameSite value) {
  return internal::CookieSameSite_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class CookieSameSiteContext : int32_t {
  
  CROSS_SITE,
  
  SAME_SITE_LAX,
  
  SAME_SITE_STRICT,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, CookieSameSiteContext value);
inline bool IsKnownEnumValue(CookieSameSiteContext value) {
  return internal::CookieSameSiteContext_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class CookieInclusionStatus : int32_t {
  
  INCLUDE,
  
  EXCLUDE_HTTP_ONLY,
  
  EXCLUDE_SECURE_ONLY,
  
  EXCLUDE_DOMAIN_MISMATCH,
  
  EXCLUDE_NOT_ON_PATH,
  
  EXCLUDE_SAMESITE_STRICT,
  
  EXCLUDE_SAMESITE_LAX,
  
  EXCLUDE_SAMESITE_EXTENDED,
  
  EXCLUDE_SAMESITE_UNSPECIFIED_TREATED_AS_LAX,
  
  EXCLUDE_SAMESITE_NONE_INSECURE,
  
  EXCLUDE_USER_PREFERENCES,
  
  EXCLUDE_FAILURE_TO_STORE,
  
  EXCLUDE_NONCOOKIEABLE_SCHEME,
  
  EXCLUDE_OVERWRITE_SECURE,
  
  EXCLUDE_OVERWRITE_HTTP_ONLY,
  
  EXCLUDE_INVALID_DOMAIN,
  
  EXCLUDE_INVALID_PREFIX,
  
  EXCLUDE_UNKNOWN_ERROR,
  kMinValue = 0,
  kMaxValue = 17,
};

 std::ostream& operator<<(std::ostream& os, CookieInclusionStatus value);
inline bool IsKnownEnumValue(CookieInclusionStatus value) {
  return internal::CookieInclusionStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class CookieChangeCause : int32_t {
  
  INSERTED,
  
  EXPLICIT,
  
  UNKNOWN_DELETION,
  
  OVERWRITE,
  
  EXPIRED,
  
  EVICTED,
  
  EXPIRED_OVERWRITE,
  kMinValue = 0,
  kMaxValue = 6,
};

 std::ostream& operator<<(std::ostream& os, CookieChangeCause value);
inline bool IsKnownEnumValue(CookieChangeCause value) {
  return internal::CookieChangeCause_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class CookieDeletionSessionControl : int32_t {
  
  IGNORE_CONTROL,
  
  SESSION_COOKIES,
  
  PERSISTENT_COOKIES,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, CookieDeletionSessionControl value);
inline bool IsKnownEnumValue(CookieDeletionSessionControl value) {
  return internal::CookieDeletionSessionControl_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class CookieChangeListenerInterfaceBase {};

using CookieChangeListenerPtrDataView =
    mojo::InterfacePtrDataView<CookieChangeListenerInterfaceBase>;
using CookieChangeListenerRequestDataView =
    mojo::InterfaceRequestDataView<CookieChangeListenerInterfaceBase>;
using CookieChangeListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CookieChangeListenerInterfaceBase>;
using CookieChangeListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CookieChangeListenerInterfaceBase>;
class CookieManagerInterfaceBase {};

using CookieManagerPtrDataView =
    mojo::InterfacePtrDataView<CookieManagerInterfaceBase>;
using CookieManagerRequestDataView =
    mojo::InterfaceRequestDataView<CookieManagerInterfaceBase>;
using CookieManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CookieManagerInterfaceBase>;
using CookieManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CookieManagerInterfaceBase>;
class CookieManagerParamsDataView {
 public:
  CookieManagerParamsDataView() {}

  CookieManagerParamsDataView(
      internal::CookieManagerParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool block_third_party_cookies() const {
    return data_->block_third_party_cookies;
  }
  inline void GetSettingsDataView(
      mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSettings(UserType* output) {
    auto* pointer = data_->settings.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
        pointer, output, context_);
  }
  inline void GetSecureOriginCookiesAllowedSchemesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSecureOriginCookiesAllowedSchemes(UserType* output) {
    auto* pointer = data_->secure_origin_cookies_allowed_schemes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetMatchingSchemeCookiesAllowedSchemesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatchingSchemeCookiesAllowedSchemes(UserType* output) {
    auto* pointer = data_->matching_scheme_cookies_allowed_schemes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetThirdPartyCookiesAllowedSchemesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadThirdPartyCookiesAllowedSchemes(UserType* output) {
    auto* pointer = data_->third_party_cookies_allowed_schemes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  bool allow_file_scheme_cookies() const {
    return data_->allow_file_scheme_cookies;
  }
 private:
  internal::CookieManagerParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieOptionsDataView {
 public:
  CookieOptionsDataView() {}

  CookieOptionsDataView(
      internal::CookieOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool exclude_httponly() const {
    return data_->exclude_httponly;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSameSiteCookieContext(UserType* output) const {
    auto data_value = data_->same_site_cookie_context;
    return mojo::internal::Deserialize<::network::mojom::CookieSameSiteContext>(
        data_value, output);
  }

  CookieSameSiteContext same_site_cookie_context() const {
    return static_cast<CookieSameSiteContext>(data_->same_site_cookie_context);
  }
  bool update_access_time() const {
    return data_->update_access_time;
  }
  inline void GetServerTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServerTime(UserType* output) {
    auto* pointer = data_->server_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  bool return_excluded_cookies() const {
    return data_->return_excluded_cookies;
  }
 private:
  internal::CookieOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CanonicalCookieDataView {
 public:
  CanonicalCookieDataView() {}

  CanonicalCookieDataView(
      internal::CanonicalCookie_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDomainDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDomain(UserType* output) {
    auto* pointer = data_->domain.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCreationDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCreation(UserType* output) {
    auto* pointer = data_->creation.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetExpiryDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExpiry(UserType* output) {
    auto* pointer = data_->expiry.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetLastAccessDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastAccess(UserType* output) {
    auto* pointer = data_->last_access.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  bool secure() const {
    return data_->secure;
  }
  bool httponly() const {
    return data_->httponly;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSiteRestrictions(UserType* output) const {
    auto data_value = data_->site_restrictions;
    return mojo::internal::Deserialize<::network::mojom::CookieSameSite>(
        data_value, output);
  }

  CookieSameSite site_restrictions() const {
    return static_cast<CookieSameSite>(data_->site_restrictions);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPriority(UserType* output) const {
    auto data_value = data_->priority;
    return mojo::internal::Deserialize<::network::mojom::CookiePriority>(
        data_value, output);
  }

  CookiePriority priority() const {
    return static_cast<CookiePriority>(data_->priority);
  }
 private:
  internal::CanonicalCookie_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieWithStatusDataView {
 public:
  CookieWithStatusDataView() {}

  CookieWithStatusDataView(
      internal::CookieWithStatus_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookieDataView(
      CanonicalCookieDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookie(UserType* output) {
    auto* pointer = data_->cookie.Get();
    return mojo::internal::Deserialize<::network::mojom::CanonicalCookieDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::network::mojom::CookieInclusionStatus>(
        data_value, output);
  }

  CookieInclusionStatus status() const {
    return static_cast<CookieInclusionStatus>(data_->status);
  }
 private:
  internal::CookieWithStatus_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieDeletionFilterDataView {
 public:
  CookieDeletionFilterDataView() {}

  CookieDeletionFilterDataView(
      internal::CookieDeletionFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCreatedAfterTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCreatedAfterTime(UserType* output) {
    auto* pointer = data_->created_after_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetCreatedBeforeTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCreatedBeforeTime(UserType* output) {
    auto* pointer = data_->created_before_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetExcludingDomainsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExcludingDomains(UserType* output) {
    auto* pointer = data_->excluding_domains.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetIncludingDomainsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIncludingDomains(UserType* output) {
    auto* pointer = data_->including_domains.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetCookieNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookieName(UserType* output) {
    auto* pointer = data_->cookie_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetHostNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostName(UserType* output) {
    auto* pointer = data_->host_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionControl(UserType* output) const {
    auto data_value = data_->session_control;
    return mojo::internal::Deserialize<::network::mojom::CookieDeletionSessionControl>(
        data_value, output);
  }

  CookieDeletionSessionControl session_control() const {
    return static_cast<CookieDeletionSessionControl>(data_->session_control);
  }
 private:
  internal::CookieDeletionFilter_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::CookiePriority>
    : public mojo::internal::EnumHashImpl<::network::mojom::CookiePriority> {};

template <>
struct hash<::network::mojom::CookieSameSite>
    : public mojo::internal::EnumHashImpl<::network::mojom::CookieSameSite> {};

template <>
struct hash<::network::mojom::CookieSameSiteContext>
    : public mojo::internal::EnumHashImpl<::network::mojom::CookieSameSiteContext> {};

template <>
struct hash<::network::mojom::CookieInclusionStatus>
    : public mojo::internal::EnumHashImpl<::network::mojom::CookieInclusionStatus> {};

template <>
struct hash<::network::mojom::CookieChangeCause>
    : public mojo::internal::EnumHashImpl<::network::mojom::CookieChangeCause> {};

template <>
struct hash<::network::mojom::CookieDeletionSessionControl>
    : public mojo::internal::EnumHashImpl<::network::mojom::CookieDeletionSessionControl> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::CookiePriority, ::network::mojom::CookiePriority> {
  static ::network::mojom::CookiePriority ToMojom(::network::mojom::CookiePriority input) { return input; }
  static bool FromMojom(::network::mojom::CookiePriority input, ::network::mojom::CookiePriority* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookiePriority, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CookiePriority, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CookiePriority>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::CookieSameSite, ::network::mojom::CookieSameSite> {
  static ::network::mojom::CookieSameSite ToMojom(::network::mojom::CookieSameSite input) { return input; }
  static bool FromMojom(::network::mojom::CookieSameSite input, ::network::mojom::CookieSameSite* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieSameSite, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CookieSameSite, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CookieSameSite>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::CookieSameSiteContext, ::network::mojom::CookieSameSiteContext> {
  static ::network::mojom::CookieSameSiteContext ToMojom(::network::mojom::CookieSameSiteContext input) { return input; }
  static bool FromMojom(::network::mojom::CookieSameSiteContext input, ::network::mojom::CookieSameSiteContext* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieSameSiteContext, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CookieSameSiteContext, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CookieSameSiteContext>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::CookieInclusionStatus, ::network::mojom::CookieInclusionStatus> {
  static ::network::mojom::CookieInclusionStatus ToMojom(::network::mojom::CookieInclusionStatus input) { return input; }
  static bool FromMojom(::network::mojom::CookieInclusionStatus input, ::network::mojom::CookieInclusionStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieInclusionStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CookieInclusionStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CookieInclusionStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::CookieChangeCause, ::network::mojom::CookieChangeCause> {
  static ::network::mojom::CookieChangeCause ToMojom(::network::mojom::CookieChangeCause input) { return input; }
  static bool FromMojom(::network::mojom::CookieChangeCause input, ::network::mojom::CookieChangeCause* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieChangeCause, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CookieChangeCause, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CookieChangeCause>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::CookieDeletionSessionControl, ::network::mojom::CookieDeletionSessionControl> {
  static ::network::mojom::CookieDeletionSessionControl ToMojom(::network::mojom::CookieDeletionSessionControl input) { return input; }
  static bool FromMojom(::network::mojom::CookieDeletionSessionControl input, ::network::mojom::CookieDeletionSessionControl* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieDeletionSessionControl, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CookieDeletionSessionControl, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CookieDeletionSessionControl>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieManagerParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::CookieManagerParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::CookieManagerParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->block_third_party_cookies = Traits::block_third_party_cookies(input);
    decltype(Traits::settings(input)) in_settings = Traits::settings(input);
    typename decltype((*output)->settings)::BaseType::BufferWriter
        settings_writer;
    const mojo::internal::ContainerValidateParams settings_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
        in_settings, buffer, &settings_writer, &settings_validate_params,
        context);
    (*output)->settings.Set(
        settings_writer.is_null() ? nullptr : settings_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->settings.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null settings in CookieManagerParams struct");
    decltype(Traits::secure_origin_cookies_allowed_schemes(input)) in_secure_origin_cookies_allowed_schemes = Traits::secure_origin_cookies_allowed_schemes(input);
    typename decltype((*output)->secure_origin_cookies_allowed_schemes)::BaseType::BufferWriter
        secure_origin_cookies_allowed_schemes_writer;
    const mojo::internal::ContainerValidateParams secure_origin_cookies_allowed_schemes_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_secure_origin_cookies_allowed_schemes, buffer, &secure_origin_cookies_allowed_schemes_writer, &secure_origin_cookies_allowed_schemes_validate_params,
        context);
    (*output)->secure_origin_cookies_allowed_schemes.Set(
        secure_origin_cookies_allowed_schemes_writer.is_null() ? nullptr : secure_origin_cookies_allowed_schemes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->secure_origin_cookies_allowed_schemes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null secure_origin_cookies_allowed_schemes in CookieManagerParams struct");
    decltype(Traits::matching_scheme_cookies_allowed_schemes(input)) in_matching_scheme_cookies_allowed_schemes = Traits::matching_scheme_cookies_allowed_schemes(input);
    typename decltype((*output)->matching_scheme_cookies_allowed_schemes)::BaseType::BufferWriter
        matching_scheme_cookies_allowed_schemes_writer;
    const mojo::internal::ContainerValidateParams matching_scheme_cookies_allowed_schemes_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_matching_scheme_cookies_allowed_schemes, buffer, &matching_scheme_cookies_allowed_schemes_writer, &matching_scheme_cookies_allowed_schemes_validate_params,
        context);
    (*output)->matching_scheme_cookies_allowed_schemes.Set(
        matching_scheme_cookies_allowed_schemes_writer.is_null() ? nullptr : matching_scheme_cookies_allowed_schemes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->matching_scheme_cookies_allowed_schemes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null matching_scheme_cookies_allowed_schemes in CookieManagerParams struct");
    decltype(Traits::third_party_cookies_allowed_schemes(input)) in_third_party_cookies_allowed_schemes = Traits::third_party_cookies_allowed_schemes(input);
    typename decltype((*output)->third_party_cookies_allowed_schemes)::BaseType::BufferWriter
        third_party_cookies_allowed_schemes_writer;
    const mojo::internal::ContainerValidateParams third_party_cookies_allowed_schemes_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_third_party_cookies_allowed_schemes, buffer, &third_party_cookies_allowed_schemes_writer, &third_party_cookies_allowed_schemes_validate_params,
        context);
    (*output)->third_party_cookies_allowed_schemes.Set(
        third_party_cookies_allowed_schemes_writer.is_null() ? nullptr : third_party_cookies_allowed_schemes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->third_party_cookies_allowed_schemes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null third_party_cookies_allowed_schemes in CookieManagerParams struct");
    (*output)->allow_file_scheme_cookies = Traits::allow_file_scheme_cookies(input);
  }

  static bool Deserialize(::network::mojom::internal::CookieManagerParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::CookieManagerParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::CookieOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::CookieOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->exclude_httponly = Traits::exclude_httponly(input);
    mojo::internal::Serialize<::network::mojom::CookieSameSiteContext>(
        Traits::same_site_cookie_context(input), &(*output)->same_site_cookie_context);
    (*output)->update_access_time = Traits::update_access_time(input);
    decltype(Traits::server_time(input)) in_server_time = Traits::server_time(input);
    typename decltype((*output)->server_time)::BaseType::BufferWriter
        server_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_server_time, buffer, &server_time_writer, context);
    (*output)->server_time.Set(
        server_time_writer.is_null() ? nullptr : server_time_writer.data());
    (*output)->return_excluded_cookies = Traits::return_excluded_cookies(input);
  }

  static bool Deserialize(::network::mojom::internal::CookieOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::CookieOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CanonicalCookieDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::CanonicalCookieDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::CanonicalCookie_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in CanonicalCookie struct");
    decltype(Traits::value(input)) in_value = Traits::value(input);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in CanonicalCookie struct");
    decltype(Traits::domain(input)) in_domain = Traits::domain(input);
    typename decltype((*output)->domain)::BaseType::BufferWriter
        domain_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_domain, buffer, &domain_writer, context);
    (*output)->domain.Set(
        domain_writer.is_null() ? nullptr : domain_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->domain.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null domain in CanonicalCookie struct");
    decltype(Traits::path(input)) in_path = Traits::path(input);
    typename decltype((*output)->path)::BaseType::BufferWriter
        path_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_path, buffer, &path_writer, context);
    (*output)->path.Set(
        path_writer.is_null() ? nullptr : path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in CanonicalCookie struct");
    decltype(Traits::creation(input)) in_creation = Traits::creation(input);
    typename decltype((*output)->creation)::BaseType::BufferWriter
        creation_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_creation, buffer, &creation_writer, context);
    (*output)->creation.Set(
        creation_writer.is_null() ? nullptr : creation_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->creation.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null creation in CanonicalCookie struct");
    decltype(Traits::expiry(input)) in_expiry = Traits::expiry(input);
    typename decltype((*output)->expiry)::BaseType::BufferWriter
        expiry_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_expiry, buffer, &expiry_writer, context);
    (*output)->expiry.Set(
        expiry_writer.is_null() ? nullptr : expiry_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->expiry.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null expiry in CanonicalCookie struct");
    decltype(Traits::last_access(input)) in_last_access = Traits::last_access(input);
    typename decltype((*output)->last_access)::BaseType::BufferWriter
        last_access_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_last_access, buffer, &last_access_writer, context);
    (*output)->last_access.Set(
        last_access_writer.is_null() ? nullptr : last_access_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->last_access.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null last_access in CanonicalCookie struct");
    (*output)->secure = Traits::secure(input);
    (*output)->httponly = Traits::httponly(input);
    mojo::internal::Serialize<::network::mojom::CookieSameSite>(
        Traits::site_restrictions(input), &(*output)->site_restrictions);
    mojo::internal::Serialize<::network::mojom::CookiePriority>(
        Traits::priority(input), &(*output)->priority);
  }

  static bool Deserialize(::network::mojom::internal::CanonicalCookie_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::CanonicalCookieDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieWithStatusDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::CookieWithStatusDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::CookieWithStatus_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::cookie(input)) in_cookie = Traits::cookie(input);
    typename decltype((*output)->cookie)::BaseType::BufferWriter
        cookie_writer;
    mojo::internal::Serialize<::network::mojom::CanonicalCookieDataView>(
        in_cookie, buffer, &cookie_writer, context);
    (*output)->cookie.Set(
        cookie_writer.is_null() ? nullptr : cookie_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->cookie.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null cookie in CookieWithStatus struct");
    mojo::internal::Serialize<::network::mojom::CookieInclusionStatus>(
        Traits::status(input), &(*output)->status);
  }

  static bool Deserialize(::network::mojom::internal::CookieWithStatus_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::CookieWithStatusDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CookieDeletionFilterDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::CookieDeletionFilterDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::CookieDeletionFilter_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::created_after_time(input)) in_created_after_time = Traits::created_after_time(input);
    typename decltype((*output)->created_after_time)::BaseType::BufferWriter
        created_after_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_created_after_time, buffer, &created_after_time_writer, context);
    (*output)->created_after_time.Set(
        created_after_time_writer.is_null() ? nullptr : created_after_time_writer.data());
    decltype(Traits::created_before_time(input)) in_created_before_time = Traits::created_before_time(input);
    typename decltype((*output)->created_before_time)::BaseType::BufferWriter
        created_before_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_created_before_time, buffer, &created_before_time_writer, context);
    (*output)->created_before_time.Set(
        created_before_time_writer.is_null() ? nullptr : created_before_time_writer.data());
    decltype(Traits::excluding_domains(input)) in_excluding_domains = Traits::excluding_domains(input);
    typename decltype((*output)->excluding_domains)::BaseType::BufferWriter
        excluding_domains_writer;
    const mojo::internal::ContainerValidateParams excluding_domains_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_excluding_domains, buffer, &excluding_domains_writer, &excluding_domains_validate_params,
        context);
    (*output)->excluding_domains.Set(
        excluding_domains_writer.is_null() ? nullptr : excluding_domains_writer.data());
    decltype(Traits::including_domains(input)) in_including_domains = Traits::including_domains(input);
    typename decltype((*output)->including_domains)::BaseType::BufferWriter
        including_domains_writer;
    const mojo::internal::ContainerValidateParams including_domains_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_including_domains, buffer, &including_domains_writer, &including_domains_validate_params,
        context);
    (*output)->including_domains.Set(
        including_domains_writer.is_null() ? nullptr : including_domains_writer.data());
    decltype(Traits::cookie_name(input)) in_cookie_name = Traits::cookie_name(input);
    typename decltype((*output)->cookie_name)::BaseType::BufferWriter
        cookie_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_cookie_name, buffer, &cookie_name_writer, context);
    (*output)->cookie_name.Set(
        cookie_name_writer.is_null() ? nullptr : cookie_name_writer.data());
    decltype(Traits::host_name(input)) in_host_name = Traits::host_name(input);
    typename decltype((*output)->host_name)::BaseType::BufferWriter
        host_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_host_name, buffer, &host_name_writer, context);
    (*output)->host_name.Set(
        host_name_writer.is_null() ? nullptr : host_name_writer.data());
    decltype(Traits::url(input)) in_url = Traits::url(input);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    mojo::internal::Serialize<::network::mojom::CookieDeletionSessionControl>(
        Traits::session_control(input), &(*output)->session_control);
  }

  static bool Deserialize(::network::mojom::internal::CookieDeletionFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::CookieDeletionFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void CookieManagerParamsDataView::GetSettingsDataView(
    mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>* output) {
  auto pointer = data_->settings.Get();
  *output = mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>(pointer, context_);
}
inline void CookieManagerParamsDataView::GetSecureOriginCookiesAllowedSchemesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->secure_origin_cookies_allowed_schemes.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void CookieManagerParamsDataView::GetMatchingSchemeCookiesAllowedSchemesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->matching_scheme_cookies_allowed_schemes.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void CookieManagerParamsDataView::GetThirdPartyCookiesAllowedSchemesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->third_party_cookies_allowed_schemes.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void CookieOptionsDataView::GetServerTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->server_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void CanonicalCookieDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CanonicalCookieDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CanonicalCookieDataView::GetDomainDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->domain.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CanonicalCookieDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CanonicalCookieDataView::GetCreationDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->creation.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void CanonicalCookieDataView::GetExpiryDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expiry.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void CanonicalCookieDataView::GetLastAccessDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->last_access.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void CookieWithStatusDataView::GetCookieDataView(
    CanonicalCookieDataView* output) {
  auto pointer = data_->cookie.Get();
  *output = CanonicalCookieDataView(pointer, context_);
}


inline void CookieDeletionFilterDataView::GetCreatedAfterTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->created_after_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void CookieDeletionFilterDataView::GetCreatedBeforeTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->created_before_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void CookieDeletionFilterDataView::GetExcludingDomainsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->excluding_domains.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void CookieDeletionFilterDataView::GetIncludingDomainsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->including_domains.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void CookieDeletionFilterDataView::GetCookieNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->cookie_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CookieDeletionFilterDataView::GetHostNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CookieDeletionFilterDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_H_