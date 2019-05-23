// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/proxy_config.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_string.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class ProxyBypassRulesDataView;

class ProxyListDataView;

class ProxyRulesDataView;

class ProxyConfigDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::ProxyBypassRulesDataView> {
  using Data = ::network::mojom::internal::ProxyBypassRules_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::ProxyListDataView> {
  using Data = ::network::mojom::internal::ProxyList_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::ProxyRulesDataView> {
  using Data = ::network::mojom::internal::ProxyRules_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::ProxyConfigDataView> {
  using Data = ::network::mojom::internal::ProxyConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class ProxyRulesType : int32_t {
  
  EMPTY,
  
  PROXY_LIST,
  
  PROXY_LIST_PER_SCHEME,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, ProxyRulesType value);
inline bool IsKnownEnumValue(ProxyRulesType value) {
  return internal::ProxyRulesType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class ProxyBypassRulesDataView {
 public:
  ProxyBypassRulesDataView() {}

  ProxyBypassRulesDataView(
      internal::ProxyBypassRules_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRulesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRules(UserType* output) {
    auto* pointer = data_->rules.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ProxyBypassRules_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyListDataView {
 public:
  ProxyListDataView() {}

  ProxyListDataView(
      internal::ProxyList_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProxiesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProxies(UserType* output) {
    auto* pointer = data_->proxies.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ProxyList_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyRulesDataView {
 public:
  ProxyRulesDataView() {}

  ProxyRulesDataView(
      internal::ProxyRules_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBypassRulesDataView(
      ProxyBypassRulesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBypassRules(UserType* output) {
    auto* pointer = data_->bypass_rules.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyBypassRulesDataView>(
        pointer, output, context_);
  }
  bool reverse_bypass() const {
    return data_->reverse_bypass;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::ProxyRulesType>(
        data_value, output);
  }

  ProxyRulesType type() const {
    return static_cast<ProxyRulesType>(data_->type);
  }
  inline void GetSingleProxiesDataView(
      ProxyListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSingleProxies(UserType* output) {
    auto* pointer = data_->single_proxies.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyListDataView>(
        pointer, output, context_);
  }
  inline void GetProxiesForHttpDataView(
      ProxyListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProxiesForHttp(UserType* output) {
    auto* pointer = data_->proxies_for_http.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyListDataView>(
        pointer, output, context_);
  }
  inline void GetProxiesForHttpsDataView(
      ProxyListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProxiesForHttps(UserType* output) {
    auto* pointer = data_->proxies_for_https.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyListDataView>(
        pointer, output, context_);
  }
  inline void GetProxiesForFtpDataView(
      ProxyListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProxiesForFtp(UserType* output) {
    auto* pointer = data_->proxies_for_ftp.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyListDataView>(
        pointer, output, context_);
  }
  inline void GetFallbackProxiesDataView(
      ProxyListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFallbackProxies(UserType* output) {
    auto* pointer = data_->fallback_proxies.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyListDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProxyRules_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyConfigDataView {
 public:
  ProxyConfigDataView() {}

  ProxyConfigDataView(
      internal::ProxyConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool auto_detect() const {
    return data_->auto_detect;
  }
  inline void GetPacUrlDataView(
      ::mojo_base::mojom::BigStringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPacUrl(UserType* output) {
    auto* pointer = data_->pac_url.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigStringDataView>(
        pointer, output, context_);
  }
  bool pac_mandatory() const {
    return data_->pac_mandatory;
  }
  inline void GetProxyRulesDataView(
      ProxyRulesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProxyRules(UserType* output) {
    auto* pointer = data_->proxy_rules.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyRulesDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProxyConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::ProxyRulesType>
    : public mojo::internal::EnumHashImpl<::network::mojom::ProxyRulesType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::ProxyRulesType, ::network::mojom::ProxyRulesType> {
  static ::network::mojom::ProxyRulesType ToMojom(::network::mojom::ProxyRulesType input) { return input; }
  static bool FromMojom(::network::mojom::ProxyRulesType input, ::network::mojom::ProxyRulesType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ProxyRulesType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::ProxyRulesType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::ProxyRulesType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ProxyBypassRulesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::ProxyBypassRulesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::ProxyBypassRules_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::rules(input)) in_rules = Traits::rules(input);
    typename decltype((*output)->rules)::BaseType::BufferWriter
        rules_writer;
    const mojo::internal::ContainerValidateParams rules_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_rules, buffer, &rules_writer, &rules_validate_params,
        context);
    (*output)->rules.Set(
        rules_writer.is_null() ? nullptr : rules_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->rules.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null rules in ProxyBypassRules struct");
  }

  static bool Deserialize(::network::mojom::internal::ProxyBypassRules_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::ProxyBypassRulesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ProxyListDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::ProxyListDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::ProxyList_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::proxies(input)) in_proxies = Traits::proxies(input);
    typename decltype((*output)->proxies)::BaseType::BufferWriter
        proxies_writer;
    const mojo::internal::ContainerValidateParams proxies_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_proxies, buffer, &proxies_writer, &proxies_validate_params,
        context);
    (*output)->proxies.Set(
        proxies_writer.is_null() ? nullptr : proxies_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->proxies.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null proxies in ProxyList struct");
  }

  static bool Deserialize(::network::mojom::internal::ProxyList_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::ProxyListDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ProxyRulesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::ProxyRulesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::ProxyRules_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::bypass_rules(input)) in_bypass_rules = Traits::bypass_rules(input);
    typename decltype((*output)->bypass_rules)::BaseType::BufferWriter
        bypass_rules_writer;
    mojo::internal::Serialize<::network::mojom::ProxyBypassRulesDataView>(
        in_bypass_rules, buffer, &bypass_rules_writer, context);
    (*output)->bypass_rules.Set(
        bypass_rules_writer.is_null() ? nullptr : bypass_rules_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->bypass_rules.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null bypass_rules in ProxyRules struct");
    (*output)->reverse_bypass = Traits::reverse_bypass(input);
    mojo::internal::Serialize<::network::mojom::ProxyRulesType>(
        Traits::type(input), &(*output)->type);
    decltype(Traits::single_proxies(input)) in_single_proxies = Traits::single_proxies(input);
    typename decltype((*output)->single_proxies)::BaseType::BufferWriter
        single_proxies_writer;
    mojo::internal::Serialize<::network::mojom::ProxyListDataView>(
        in_single_proxies, buffer, &single_proxies_writer, context);
    (*output)->single_proxies.Set(
        single_proxies_writer.is_null() ? nullptr : single_proxies_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->single_proxies.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null single_proxies in ProxyRules struct");
    decltype(Traits::proxies_for_http(input)) in_proxies_for_http = Traits::proxies_for_http(input);
    typename decltype((*output)->proxies_for_http)::BaseType::BufferWriter
        proxies_for_http_writer;
    mojo::internal::Serialize<::network::mojom::ProxyListDataView>(
        in_proxies_for_http, buffer, &proxies_for_http_writer, context);
    (*output)->proxies_for_http.Set(
        proxies_for_http_writer.is_null() ? nullptr : proxies_for_http_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->proxies_for_http.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null proxies_for_http in ProxyRules struct");
    decltype(Traits::proxies_for_https(input)) in_proxies_for_https = Traits::proxies_for_https(input);
    typename decltype((*output)->proxies_for_https)::BaseType::BufferWriter
        proxies_for_https_writer;
    mojo::internal::Serialize<::network::mojom::ProxyListDataView>(
        in_proxies_for_https, buffer, &proxies_for_https_writer, context);
    (*output)->proxies_for_https.Set(
        proxies_for_https_writer.is_null() ? nullptr : proxies_for_https_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->proxies_for_https.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null proxies_for_https in ProxyRules struct");
    decltype(Traits::proxies_for_ftp(input)) in_proxies_for_ftp = Traits::proxies_for_ftp(input);
    typename decltype((*output)->proxies_for_ftp)::BaseType::BufferWriter
        proxies_for_ftp_writer;
    mojo::internal::Serialize<::network::mojom::ProxyListDataView>(
        in_proxies_for_ftp, buffer, &proxies_for_ftp_writer, context);
    (*output)->proxies_for_ftp.Set(
        proxies_for_ftp_writer.is_null() ? nullptr : proxies_for_ftp_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->proxies_for_ftp.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null proxies_for_ftp in ProxyRules struct");
    decltype(Traits::fallback_proxies(input)) in_fallback_proxies = Traits::fallback_proxies(input);
    typename decltype((*output)->fallback_proxies)::BaseType::BufferWriter
        fallback_proxies_writer;
    mojo::internal::Serialize<::network::mojom::ProxyListDataView>(
        in_fallback_proxies, buffer, &fallback_proxies_writer, context);
    (*output)->fallback_proxies.Set(
        fallback_proxies_writer.is_null() ? nullptr : fallback_proxies_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->fallback_proxies.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null fallback_proxies in ProxyRules struct");
  }

  static bool Deserialize(::network::mojom::internal::ProxyRules_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::ProxyRulesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ProxyConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::ProxyConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::ProxyConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->auto_detect = Traits::auto_detect(input);
    decltype(Traits::pac_url(input)) in_pac_url = Traits::pac_url(input);
    typename decltype((*output)->pac_url)::BaseType::BufferWriter
        pac_url_writer;
    mojo::internal::Serialize<::mojo_base::mojom::BigStringDataView>(
        in_pac_url, buffer, &pac_url_writer, context);
    (*output)->pac_url.Set(
        pac_url_writer.is_null() ? nullptr : pac_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pac_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pac_url in ProxyConfig struct");
    (*output)->pac_mandatory = Traits::pac_mandatory(input);
    decltype(Traits::proxy_rules(input)) in_proxy_rules = Traits::proxy_rules(input);
    typename decltype((*output)->proxy_rules)::BaseType::BufferWriter
        proxy_rules_writer;
    mojo::internal::Serialize<::network::mojom::ProxyRulesDataView>(
        in_proxy_rules, buffer, &proxy_rules_writer, context);
    (*output)->proxy_rules.Set(
        proxy_rules_writer.is_null() ? nullptr : proxy_rules_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->proxy_rules.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null proxy_rules in ProxyConfig struct");
  }

  static bool Deserialize(::network::mojom::internal::ProxyConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::ProxyConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void ProxyBypassRulesDataView::GetRulesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->rules.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void ProxyListDataView::GetProxiesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->proxies.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void ProxyRulesDataView::GetBypassRulesDataView(
    ProxyBypassRulesDataView* output) {
  auto pointer = data_->bypass_rules.Get();
  *output = ProxyBypassRulesDataView(pointer, context_);
}
inline void ProxyRulesDataView::GetSingleProxiesDataView(
    ProxyListDataView* output) {
  auto pointer = data_->single_proxies.Get();
  *output = ProxyListDataView(pointer, context_);
}
inline void ProxyRulesDataView::GetProxiesForHttpDataView(
    ProxyListDataView* output) {
  auto pointer = data_->proxies_for_http.Get();
  *output = ProxyListDataView(pointer, context_);
}
inline void ProxyRulesDataView::GetProxiesForHttpsDataView(
    ProxyListDataView* output) {
  auto pointer = data_->proxies_for_https.Get();
  *output = ProxyListDataView(pointer, context_);
}
inline void ProxyRulesDataView::GetProxiesForFtpDataView(
    ProxyListDataView* output) {
  auto pointer = data_->proxies_for_ftp.Get();
  *output = ProxyListDataView(pointer, context_);
}
inline void ProxyRulesDataView::GetFallbackProxiesDataView(
    ProxyListDataView* output) {
  auto pointer = data_->fallback_proxies.Get();
  *output = ProxyListDataView(pointer, context_);
}


inline void ProxyConfigDataView::GetPacUrlDataView(
    ::mojo_base::mojom::BigStringDataView* output) {
  auto pointer = data_->pac_url.Get();
  *output = ::mojo_base::mojom::BigStringDataView(pointer, context_);
}
inline void ProxyConfigDataView::GetProxyRulesDataView(
    ProxyRulesDataView* output) {
  auto pointer = data_->proxy_rules.Get();
  *output = ProxyRulesDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_SHARED_H_