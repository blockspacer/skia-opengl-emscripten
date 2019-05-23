// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/digitally_signed.mojom-shared.h"
#include "services/network/public/mojom/digitally_signed.mojom-blink-forward.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct network_mojom_internal_HashAlgorithm_DataHashFn {
  static unsigned GetHash(const ::network::mojom::HashAlgorithm& value) {
    using utype = std::underlying_type<::network::mojom::HashAlgorithm>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::HashAlgorithm& left, const ::network::mojom::HashAlgorithm& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::HashAlgorithm>
    : public GenericHashTraits<::network::mojom::HashAlgorithm> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::HashAlgorithm& value) {
    return value == static_cast<::network::mojom::HashAlgorithm>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::HashAlgorithm& slot, bool) {
    slot = static_cast<::network::mojom::HashAlgorithm>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::HashAlgorithm& value) {
    return value == static_cast<::network::mojom::HashAlgorithm>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct network_mojom_internal_SignatureAlgorithm_DataHashFn {
  static unsigned GetHash(const ::network::mojom::SignatureAlgorithm& value) {
    using utype = std::underlying_type<::network::mojom::SignatureAlgorithm>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::SignatureAlgorithm& left, const ::network::mojom::SignatureAlgorithm& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::SignatureAlgorithm>
    : public GenericHashTraits<::network::mojom::SignatureAlgorithm> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::SignatureAlgorithm& value) {
    return value == static_cast<::network::mojom::SignatureAlgorithm>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::SignatureAlgorithm& slot, bool) {
    slot = static_cast<::network::mojom::SignatureAlgorithm>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::SignatureAlgorithm& value) {
    return value == static_cast<::network::mojom::SignatureAlgorithm>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {








class BLINK_PLATFORM_EXPORT DigitallySigned {
 public:
  using DataView = DigitallySignedDataView;
  using Data_ = internal::DigitallySigned_Data;

  template <typename... Args>
  static DigitallySignedPtr New(Args&&... args) {
    return DigitallySignedPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DigitallySignedPtr From(const U& u) {
    return mojo::TypeConverter<DigitallySignedPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DigitallySigned>::Convert(*this);
  }


  DigitallySigned();

  DigitallySigned(
      HashAlgorithm hash_algorithm,
      SignatureAlgorithm signature_algorithm,
      const WTF::Vector<uint8_t>& signature);

  ~DigitallySigned();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DigitallySignedPtr>
  DigitallySignedPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DigitallySigned>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DigitallySigned::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DigitallySigned::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DigitallySigned_UnserializedMessageContext<
            UserType, DigitallySigned::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DigitallySigned::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DigitallySigned::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DigitallySigned_UnserializedMessageContext<
            UserType, DigitallySigned::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DigitallySigned::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  HashAlgorithm hash_algorithm;
  
  SignatureAlgorithm signature_algorithm;
  
  WTF::Vector<uint8_t> signature;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
DigitallySignedPtr DigitallySigned::Clone() const {
  return New(
      mojo::Clone(hash_algorithm),
      mojo::Clone(signature_algorithm),
      mojo::Clone(signature)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DigitallySigned>::value>::type*>
bool DigitallySigned::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->hash_algorithm, other_struct.hash_algorithm))
    return false;
  if (!mojo::Equals(this->signature_algorithm, other_struct.signature_algorithm))
    return false;
  if (!mojo::Equals(this->signature, other_struct.signature))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::DigitallySigned::DataView,
                                         ::network::mojom::blink::DigitallySignedPtr> {
  static bool IsNull(const ::network::mojom::blink::DigitallySignedPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::DigitallySignedPtr* output) { output->reset(); }

  static decltype(::network::mojom::blink::DigitallySigned::hash_algorithm) hash_algorithm(
      const ::network::mojom::blink::DigitallySignedPtr& input) {
    return input->hash_algorithm;
  }

  static decltype(::network::mojom::blink::DigitallySigned::signature_algorithm) signature_algorithm(
      const ::network::mojom::blink::DigitallySignedPtr& input) {
    return input->signature_algorithm;
  }

  static const decltype(::network::mojom::blink::DigitallySigned::signature)& signature(
      const ::network::mojom::blink::DigitallySignedPtr& input) {
    return input->signature;
  }

  static bool Read(::network::mojom::blink::DigitallySigned::DataView input, ::network::mojom::blink::DigitallySignedPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_BLINK_H_