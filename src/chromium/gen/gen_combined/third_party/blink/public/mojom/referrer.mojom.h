// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REFERRER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REFERRER_MOJOM_H_

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
#include "third_party/blink/public/mojom/referrer.mojom-shared.h"
#include "third_party/blink/public/mojom/referrer.mojom-forward.h"
#include "url/mojom/url.mojom.h"
#include "services/network/public/mojom/referrer_policy.mojom.h"
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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {








class BLINK_COMMON_EXPORT Referrer {
 public:
  using DataView = ReferrerDataView;
  using Data_ = internal::Referrer_Data;

  template <typename... Args>
  static ReferrerPtr New(Args&&... args) {
    return ReferrerPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReferrerPtr From(const U& u) {
    return mojo::TypeConverter<ReferrerPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Referrer>::Convert(*this);
  }


  Referrer();

  Referrer(
      const GURL& url,
      ::network::mojom::ReferrerPolicy policy);

  ~Referrer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReferrerPtr>
  ReferrerPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Referrer>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Referrer::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Referrer::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Referrer_UnserializedMessageContext<
            UserType, Referrer::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Referrer::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Referrer::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Referrer_UnserializedMessageContext<
            UserType, Referrer::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Referrer::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  GURL url;
  
  ::network::mojom::ReferrerPolicy policy;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ReferrerPtr Referrer::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(policy)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Referrer>::value>::type*>
bool Referrer::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->policy, other_struct.policy))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::Referrer::DataView,
                                         ::blink::mojom::ReferrerPtr> {
  static bool IsNull(const ::blink::mojom::ReferrerPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ReferrerPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::Referrer::url)& url(
      const ::blink::mojom::ReferrerPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::Referrer::policy) policy(
      const ::blink::mojom::ReferrerPtr& input) {
    return input->policy;
  }

  static bool Read(::blink::mojom::Referrer::DataView input, ::blink::mojom::ReferrerPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REFERRER_MOJOM_H_