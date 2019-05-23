// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_H_

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
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-shared.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-forward.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
#include "url/mojom/origin.mojom.h"
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
#include "third_party/blink/public/common/loader/url_loader_factory_bundle.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {








class BLINK_COMMON_EXPORT URLLoaderFactoryBundle {
 public:
  using DataView = URLLoaderFactoryBundleDataView;
  using Data_ = internal::URLLoaderFactoryBundle_Data;

  template <typename... Args>
  static URLLoaderFactoryBundlePtr New(Args&&... args) {
    return URLLoaderFactoryBundlePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static URLLoaderFactoryBundlePtr From(const U& u) {
    return mojo::TypeConverter<URLLoaderFactoryBundlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, URLLoaderFactoryBundle>::Convert(*this);
  }


  URLLoaderFactoryBundle();

  URLLoaderFactoryBundle(
      ::network::mojom::URLLoaderFactoryPtrInfo default_factory,
      base::flat_map<std::string, ::network::mojom::URLLoaderFactoryPtrInfo> scheme_specific_factories,
      base::flat_map<url::Origin, ::network::mojom::URLLoaderFactoryPtrInfo> initiator_specific_factories,
      ::network::mojom::URLLoaderFactoryPtrInfo appcache_factory,
      bool bypass_redirect_checks);

  ~URLLoaderFactoryBundle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = URLLoaderFactoryBundlePtr>
  URLLoaderFactoryBundlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, URLLoaderFactoryBundle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        URLLoaderFactoryBundle::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        URLLoaderFactoryBundle::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::URLLoaderFactoryBundle_UnserializedMessageContext<
            UserType, URLLoaderFactoryBundle::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<URLLoaderFactoryBundle::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return URLLoaderFactoryBundle::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::URLLoaderFactoryBundle_UnserializedMessageContext<
            UserType, URLLoaderFactoryBundle::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<URLLoaderFactoryBundle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::network::mojom::URLLoaderFactoryPtrInfo default_factory;
  
  base::flat_map<std::string, ::network::mojom::URLLoaderFactoryPtrInfo> scheme_specific_factories;
  
  base::flat_map<url::Origin, ::network::mojom::URLLoaderFactoryPtrInfo> initiator_specific_factories;
  
  ::network::mojom::URLLoaderFactoryPtrInfo appcache_factory;
  
  bool bypass_redirect_checks;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(URLLoaderFactoryBundle);
};

template <typename StructPtrType>
URLLoaderFactoryBundlePtr URLLoaderFactoryBundle::Clone() const {
  return New(
      mojo::Clone(default_factory),
      mojo::Clone(scheme_specific_factories),
      mojo::Clone(initiator_specific_factories),
      mojo::Clone(appcache_factory),
      mojo::Clone(bypass_redirect_checks)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, URLLoaderFactoryBundle>::value>::type*>
bool URLLoaderFactoryBundle::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->default_factory, other_struct.default_factory))
    return false;
  if (!mojo::Equals(this->scheme_specific_factories, other_struct.scheme_specific_factories))
    return false;
  if (!mojo::Equals(this->initiator_specific_factories, other_struct.initiator_specific_factories))
    return false;
  if (!mojo::Equals(this->appcache_factory, other_struct.appcache_factory))
    return false;
  if (!mojo::Equals(this->bypass_redirect_checks, other_struct.bypass_redirect_checks))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::URLLoaderFactoryBundle::DataView,
                                         ::blink::mojom::URLLoaderFactoryBundlePtr> {
  static bool IsNull(const ::blink::mojom::URLLoaderFactoryBundlePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::URLLoaderFactoryBundlePtr* output) { output->reset(); }

  static  decltype(::blink::mojom::URLLoaderFactoryBundle::default_factory)& default_factory(
       ::blink::mojom::URLLoaderFactoryBundlePtr& input) {
    return input->default_factory;
  }

  static  decltype(::blink::mojom::URLLoaderFactoryBundle::scheme_specific_factories)& scheme_specific_factories(
       ::blink::mojom::URLLoaderFactoryBundlePtr& input) {
    return input->scheme_specific_factories;
  }

  static  decltype(::blink::mojom::URLLoaderFactoryBundle::initiator_specific_factories)& initiator_specific_factories(
       ::blink::mojom::URLLoaderFactoryBundlePtr& input) {
    return input->initiator_specific_factories;
  }

  static  decltype(::blink::mojom::URLLoaderFactoryBundle::appcache_factory)& appcache_factory(
       ::blink::mojom::URLLoaderFactoryBundlePtr& input) {
    return input->appcache_factory;
  }

  static decltype(::blink::mojom::URLLoaderFactoryBundle::bypass_redirect_checks) bypass_redirect_checks(
      const ::blink::mojom::URLLoaderFactoryBundlePtr& input) {
    return input->bypass_redirect_checks;
  }

  static bool Read(::blink::mojom::URLLoaderFactoryBundle::DataView input, ::blink::mojom::URLLoaderFactoryBundlePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_H_