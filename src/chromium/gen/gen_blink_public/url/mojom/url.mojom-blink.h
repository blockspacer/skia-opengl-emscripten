// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef URL_MOJOM_URL_MOJOM_BLINK_H_
#define URL_MOJOM_URL_MOJOM_BLINK_H_

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
#include "url/mojom/url.mojom-shared.h"
#include "url/mojom/url.mojom-blink-forward.h"

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
#include "third_party/blink/renderer/platform/weborigin/kurl.h"




namespace url {
namespace mojom {
namespace blink {





class  Url {
 public:
  using DataView = UrlDataView;
  using Data_ = internal::Url_Data;

  template <typename... Args>
  static UrlPtr New(Args&&... args) {
    return UrlPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UrlPtr From(const U& u) {
    return mojo::TypeConverter<UrlPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Url>::Convert(*this);
  }


  Url();

  explicit Url(
      const WTF::String& url);

  ~Url();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UrlPtr>
  UrlPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Url>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Url::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Url::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Url_UnserializedMessageContext<
            UserType, Url::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Url::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Url::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Url_UnserializedMessageContext<
            UserType, Url::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Url::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String url;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
UrlPtr Url::Clone() const {
  return New(
      mojo::Clone(url)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Url>::value>::type*>
bool Url::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace url

namespace mojo {


template <>
struct  StructTraits<::url::mojom::blink::Url::DataView,
                                         ::url::mojom::blink::UrlPtr> {
  static bool IsNull(const ::url::mojom::blink::UrlPtr& input) { return !input; }
  static void SetToNull(::url::mojom::blink::UrlPtr* output) { output->reset(); }

  static const decltype(::url::mojom::blink::Url::url)& url(
      const ::url::mojom::blink::UrlPtr& input) {
    return input->url;
  }

  static bool Read(::url::mojom::blink::Url::DataView input, ::url::mojom::blink::UrlPtr* output);
};

}  // namespace mojo

#endif  // URL_MOJOM_URL_MOJOM_BLINK_H_