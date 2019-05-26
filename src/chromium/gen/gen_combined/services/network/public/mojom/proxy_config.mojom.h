// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/network/public/mojom/proxy_config.mojom-shared.h"
#include "services/network/public/mojom/proxy_config.mojom-forward.h"
#include "mojo/public/mojom/base/big_string.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "net/proxy_resolution/proxy_bypass_rules.h"
#include "net/proxy_resolution/proxy_config.h"
#include "net/proxy_resolution/proxy_list.h"




namespace network {
namespace mojom {











class  ProxyBypassRules {
 public:
  using DataView = ProxyBypassRulesDataView;
  using Data_ = internal::ProxyBypassRules_Data;

  template <typename... Args>
  static ProxyBypassRulesPtr New(Args&&... args) {
    return ProxyBypassRulesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProxyBypassRulesPtr From(const U& u) {
    return mojo::TypeConverter<ProxyBypassRulesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProxyBypassRules>::Convert(*this);
  }


  ProxyBypassRules();

  explicit ProxyBypassRules(
      const std::vector<std::string>& rules);

  ~ProxyBypassRules();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProxyBypassRulesPtr>
  ProxyBypassRulesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProxyBypassRules>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProxyBypassRules::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProxyBypassRules::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProxyBypassRules_UnserializedMessageContext<
            UserType, ProxyBypassRules::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProxyBypassRules::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProxyBypassRules::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProxyBypassRules_UnserializedMessageContext<
            UserType, ProxyBypassRules::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProxyBypassRules::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<std::string> rules;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  ProxyList {
 public:
  using DataView = ProxyListDataView;
  using Data_ = internal::ProxyList_Data;

  template <typename... Args>
  static ProxyListPtr New(Args&&... args) {
    return ProxyListPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProxyListPtr From(const U& u) {
    return mojo::TypeConverter<ProxyListPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProxyList>::Convert(*this);
  }


  ProxyList();

  explicit ProxyList(
      const std::vector<std::string>& proxies);

  ~ProxyList();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProxyListPtr>
  ProxyListPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProxyList>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProxyList::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProxyList::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProxyList_UnserializedMessageContext<
            UserType, ProxyList::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProxyList::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProxyList::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProxyList_UnserializedMessageContext<
            UserType, ProxyList::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProxyList::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<std::string> proxies;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  ProxyRules {
 public:
  using DataView = ProxyRulesDataView;
  using Data_ = internal::ProxyRules_Data;

  template <typename... Args>
  static ProxyRulesPtr New(Args&&... args) {
    return ProxyRulesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProxyRulesPtr From(const U& u) {
    return mojo::TypeConverter<ProxyRulesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProxyRules>::Convert(*this);
  }


  ProxyRules();

  ProxyRules(
      const net::ProxyBypassRules& bypass_rules,
      bool reverse_bypass,
      net::ProxyConfig::ProxyRules::Type type,
      const net::ProxyList& single_proxies,
      const net::ProxyList& proxies_for_http,
      const net::ProxyList& proxies_for_https,
      const net::ProxyList& proxies_for_ftp,
      const net::ProxyList& fallback_proxies);

  ~ProxyRules();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProxyRulesPtr>
  ProxyRulesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProxyRules>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProxyRules::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProxyRules::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProxyRules_UnserializedMessageContext<
            UserType, ProxyRules::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProxyRules::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProxyRules::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProxyRules_UnserializedMessageContext<
            UserType, ProxyRules::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProxyRules::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  net::ProxyBypassRules bypass_rules;
  
  bool reverse_bypass;
  
  net::ProxyConfig::ProxyRules::Type type;
  
  net::ProxyList single_proxies;
  
  net::ProxyList proxies_for_http;
  
  net::ProxyList proxies_for_https;
  
  net::ProxyList proxies_for_ftp;
  
  net::ProxyList fallback_proxies;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  ProxyConfig {
 public:
  using DataView = ProxyConfigDataView;
  using Data_ = internal::ProxyConfig_Data;

  template <typename... Args>
  static ProxyConfigPtr New(Args&&... args) {
    return ProxyConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProxyConfigPtr From(const U& u) {
    return mojo::TypeConverter<ProxyConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProxyConfig>::Convert(*this);
  }


  ProxyConfig();

  ProxyConfig(
      bool auto_detect,
      const std::string& pac_url,
      bool pac_mandatory,
      const net::ProxyConfig::ProxyRules& proxy_rules);

  ~ProxyConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProxyConfigPtr>
  ProxyConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProxyConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProxyConfig::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProxyConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProxyConfig_UnserializedMessageContext<
            UserType, ProxyConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProxyConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProxyConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProxyConfig_UnserializedMessageContext<
            UserType, ProxyConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProxyConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool auto_detect;
  
  std::string pac_url;
  
  bool pac_mandatory;
  
  net::ProxyConfig::ProxyRules proxy_rules;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ProxyBypassRulesPtr ProxyBypassRules::Clone() const {
  return New(
      mojo::Clone(rules)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProxyBypassRules>::value>::type*>
bool ProxyBypassRules::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->rules, other_struct.rules))
    return false;
  return true;
}
template <typename StructPtrType>
ProxyListPtr ProxyList::Clone() const {
  return New(
      mojo::Clone(proxies)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProxyList>::value>::type*>
bool ProxyList::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->proxies, other_struct.proxies))
    return false;
  return true;
}
template <typename StructPtrType>
ProxyRulesPtr ProxyRules::Clone() const {
  return New(
      mojo::Clone(bypass_rules),
      mojo::Clone(reverse_bypass),
      mojo::Clone(type),
      mojo::Clone(single_proxies),
      mojo::Clone(proxies_for_http),
      mojo::Clone(proxies_for_https),
      mojo::Clone(proxies_for_ftp),
      mojo::Clone(fallback_proxies)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProxyRules>::value>::type*>
bool ProxyRules::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bypass_rules, other_struct.bypass_rules))
    return false;
  if (!mojo::Equals(this->reverse_bypass, other_struct.reverse_bypass))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->single_proxies, other_struct.single_proxies))
    return false;
  if (!mojo::Equals(this->proxies_for_http, other_struct.proxies_for_http))
    return false;
  if (!mojo::Equals(this->proxies_for_https, other_struct.proxies_for_https))
    return false;
  if (!mojo::Equals(this->proxies_for_ftp, other_struct.proxies_for_ftp))
    return false;
  if (!mojo::Equals(this->fallback_proxies, other_struct.fallback_proxies))
    return false;
  return true;
}
template <typename StructPtrType>
ProxyConfigPtr ProxyConfig::Clone() const {
  return New(
      mojo::Clone(auto_detect),
      mojo::Clone(pac_url),
      mojo::Clone(pac_mandatory),
      mojo::Clone(proxy_rules)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProxyConfig>::value>::type*>
bool ProxyConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->auto_detect, other_struct.auto_detect))
    return false;
  if (!mojo::Equals(this->pac_url, other_struct.pac_url))
    return false;
  if (!mojo::Equals(this->pac_mandatory, other_struct.pac_mandatory))
    return false;
  if (!mojo::Equals(this->proxy_rules, other_struct.proxy_rules))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::ProxyBypassRules::DataView,
                                         ::network::mojom::ProxyBypassRulesPtr> {
  static bool IsNull(const ::network::mojom::ProxyBypassRulesPtr& input) { return !input; }
  static void SetToNull(::network::mojom::ProxyBypassRulesPtr* output) { output->reset(); }

  static const decltype(::network::mojom::ProxyBypassRules::rules)& rules(
      const ::network::mojom::ProxyBypassRulesPtr& input) {
    return input->rules;
  }

  static bool Read(::network::mojom::ProxyBypassRules::DataView input, ::network::mojom::ProxyBypassRulesPtr* output);
};


template <>
struct  StructTraits<::network::mojom::ProxyList::DataView,
                                         ::network::mojom::ProxyListPtr> {
  static bool IsNull(const ::network::mojom::ProxyListPtr& input) { return !input; }
  static void SetToNull(::network::mojom::ProxyListPtr* output) { output->reset(); }

  static const decltype(::network::mojom::ProxyList::proxies)& proxies(
      const ::network::mojom::ProxyListPtr& input) {
    return input->proxies;
  }

  static bool Read(::network::mojom::ProxyList::DataView input, ::network::mojom::ProxyListPtr* output);
};


template <>
struct  StructTraits<::network::mojom::ProxyRules::DataView,
                                         ::network::mojom::ProxyRulesPtr> {
  static bool IsNull(const ::network::mojom::ProxyRulesPtr& input) { return !input; }
  static void SetToNull(::network::mojom::ProxyRulesPtr* output) { output->reset(); }

  static const decltype(::network::mojom::ProxyRules::bypass_rules)& bypass_rules(
      const ::network::mojom::ProxyRulesPtr& input) {
    return input->bypass_rules;
  }

  static decltype(::network::mojom::ProxyRules::reverse_bypass) reverse_bypass(
      const ::network::mojom::ProxyRulesPtr& input) {
    return input->reverse_bypass;
  }

  static decltype(::network::mojom::ProxyRules::type) type(
      const ::network::mojom::ProxyRulesPtr& input) {
    return input->type;
  }

  static const decltype(::network::mojom::ProxyRules::single_proxies)& single_proxies(
      const ::network::mojom::ProxyRulesPtr& input) {
    return input->single_proxies;
  }

  static const decltype(::network::mojom::ProxyRules::proxies_for_http)& proxies_for_http(
      const ::network::mojom::ProxyRulesPtr& input) {
    return input->proxies_for_http;
  }

  static const decltype(::network::mojom::ProxyRules::proxies_for_https)& proxies_for_https(
      const ::network::mojom::ProxyRulesPtr& input) {
    return input->proxies_for_https;
  }

  static const decltype(::network::mojom::ProxyRules::proxies_for_ftp)& proxies_for_ftp(
      const ::network::mojom::ProxyRulesPtr& input) {
    return input->proxies_for_ftp;
  }

  static const decltype(::network::mojom::ProxyRules::fallback_proxies)& fallback_proxies(
      const ::network::mojom::ProxyRulesPtr& input) {
    return input->fallback_proxies;
  }

  static bool Read(::network::mojom::ProxyRules::DataView input, ::network::mojom::ProxyRulesPtr* output);
};


template <>
struct  StructTraits<::network::mojom::ProxyConfig::DataView,
                                         ::network::mojom::ProxyConfigPtr> {
  static bool IsNull(const ::network::mojom::ProxyConfigPtr& input) { return !input; }
  static void SetToNull(::network::mojom::ProxyConfigPtr* output) { output->reset(); }

  static decltype(::network::mojom::ProxyConfig::auto_detect) auto_detect(
      const ::network::mojom::ProxyConfigPtr& input) {
    return input->auto_detect;
  }

  static  decltype(::network::mojom::ProxyConfig::pac_url)& pac_url(
       ::network::mojom::ProxyConfigPtr& input) {
    return input->pac_url;
  }

  static decltype(::network::mojom::ProxyConfig::pac_mandatory) pac_mandatory(
      const ::network::mojom::ProxyConfigPtr& input) {
    return input->pac_mandatory;
  }

  static const decltype(::network::mojom::ProxyConfig::proxy_rules)& proxy_rules(
      const ::network::mojom::ProxyConfigPtr& input) {
    return input->proxy_rules;
  }

  static bool Read(::network::mojom::ProxyConfig::DataView input, ::network::mojom::ProxyConfigPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_H_