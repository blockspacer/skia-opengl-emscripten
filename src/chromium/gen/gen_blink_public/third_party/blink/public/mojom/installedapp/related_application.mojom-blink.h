// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_RELATED_APPLICATION_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_RELATED_APPLICATION_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/installedapp/related_application.mojom-shared.h"
#include "third_party/blink/public/mojom/installedapp/related_application.mojom-blink-forward.h"

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
#include "third_party/blink/renderer/platform/platform_export.h"




namespace blink {
namespace mojom {
namespace blink {





class PLATFORM_EXPORT RelatedApplication {
 public:
  using DataView = RelatedApplicationDataView;
  using Data_ = internal::RelatedApplication_Data;

  template <typename... Args>
  static RelatedApplicationPtr New(Args&&... args) {
    return RelatedApplicationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RelatedApplicationPtr From(const U& u) {
    return mojo::TypeConverter<RelatedApplicationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RelatedApplication>::Convert(*this);
  }


  RelatedApplication();

  RelatedApplication(
      const WTF::String& platform,
      const WTF::String& url,
      const WTF::String& id);

  ~RelatedApplication();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RelatedApplicationPtr>
  RelatedApplicationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RelatedApplication>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RelatedApplication::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RelatedApplication::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RelatedApplication_UnserializedMessageContext<
            UserType, RelatedApplication::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RelatedApplication::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return RelatedApplication::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RelatedApplication_UnserializedMessageContext<
            UserType, RelatedApplication::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RelatedApplication::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String platform;
  
  WTF::String url;
  
  WTF::String id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
RelatedApplicationPtr RelatedApplication::Clone() const {
  return New(
      mojo::Clone(platform),
      mojo::Clone(url),
      mojo::Clone(id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RelatedApplication>::value>::type*>
bool RelatedApplication::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->platform, other_struct.platform))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::RelatedApplication::DataView,
                                         ::blink::mojom::blink::RelatedApplicationPtr> {
  static bool IsNull(const ::blink::mojom::blink::RelatedApplicationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::RelatedApplicationPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::RelatedApplication::platform)& platform(
      const ::blink::mojom::blink::RelatedApplicationPtr& input) {
    return input->platform;
  }

  static const decltype(::blink::mojom::blink::RelatedApplication::url)& url(
      const ::blink::mojom::blink::RelatedApplicationPtr& input) {
    return input->url;
  }

  static const decltype(::blink::mojom::blink::RelatedApplication::id)& id(
      const ::blink::mojom::blink::RelatedApplicationPtr& input) {
    return input->id;
  }

  static bool Read(::blink::mojom::blink::RelatedApplication::DataView input, ::blink::mojom::blink::RelatedApplicationPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_RELATED_APPLICATION_MOJOM_BLINK_H_