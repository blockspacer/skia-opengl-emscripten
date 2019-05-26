// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef URL_MOJOM_ORIGIN_MOJOM_BLINK_H_
#define URL_MOJOM_ORIGIN_MOJOM_BLINK_H_

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
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/origin.mojom-blink-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

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
#include "third_party/blink/renderer/platform/weborigin/security_origin.h"




namespace url {
namespace mojom {
namespace blink {








class  Origin {
 public:
  using DataView = OriginDataView;
  using Data_ = internal::Origin_Data;

  template <typename... Args>
  static OriginPtr New(Args&&... args) {
    return OriginPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static OriginPtr From(const U& u) {
    return mojo::TypeConverter<OriginPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Origin>::Convert(*this);
  }


  Origin();

  Origin(
      const WTF::String& scheme,
      const WTF::String& host,
      uint16_t port,
      const base::Optional<base::UnguessableToken>& nonce_if_opaque);

  ~Origin();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = OriginPtr>
  OriginPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Origin>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Origin::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Origin::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Origin_UnserializedMessageContext<
            UserType, Origin::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Origin::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Origin::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Origin_UnserializedMessageContext<
            UserType, Origin::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Origin::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String scheme;
  
  WTF::String host;
  
  uint16_t port;
  
  base::Optional<base::UnguessableToken> nonce_if_opaque;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
OriginPtr Origin::Clone() const {
  return New(
      mojo::Clone(scheme),
      mojo::Clone(host),
      mojo::Clone(port),
      mojo::Clone(nonce_if_opaque)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Origin>::value>::type*>
bool Origin::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->scheme, other_struct.scheme))
    return false;
  if (!mojo::Equals(this->host, other_struct.host))
    return false;
  if (!mojo::Equals(this->port, other_struct.port))
    return false;
  if (!mojo::Equals(this->nonce_if_opaque, other_struct.nonce_if_opaque))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace url

namespace mojo {


template <>
struct  StructTraits<::url::mojom::blink::Origin::DataView,
                                         ::url::mojom::blink::OriginPtr> {
  static bool IsNull(const ::url::mojom::blink::OriginPtr& input) { return !input; }
  static void SetToNull(::url::mojom::blink::OriginPtr* output) { output->reset(); }

  static const decltype(::url::mojom::blink::Origin::scheme)& scheme(
      const ::url::mojom::blink::OriginPtr& input) {
    return input->scheme;
  }

  static const decltype(::url::mojom::blink::Origin::host)& host(
      const ::url::mojom::blink::OriginPtr& input) {
    return input->host;
  }

  static decltype(::url::mojom::blink::Origin::port) port(
      const ::url::mojom::blink::OriginPtr& input) {
    return input->port;
  }

  static const decltype(::url::mojom::blink::Origin::nonce_if_opaque)& nonce_if_opaque(
      const ::url::mojom::blink::OriginPtr& input) {
    return input->nonce_if_opaque;
  }

  static bool Read(::url::mojom::blink::Origin::DataView input, ::url::mojom::blink::OriginPtr* output);
};

}  // namespace mojo

#endif  // URL_MOJOM_ORIGIN_MOJOM_BLINK_H_