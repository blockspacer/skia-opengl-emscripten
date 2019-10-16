// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_TOKEN_MOJOM_H_
#define MOJO_PUBLIC_MOJOM_BASE_TOKEN_MOJOM_H_

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
#include "mojo/public/mojom/base/token.mojom-shared.h"
#include "mojo/public/mojom/base/token.mojom-forward.h"
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
#include "base/base_token.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {





class COMPONENT_EXPORT(MOJO_BASE_MOJOM) Token {
 public:
  using DataView = TokenDataView;
  using Data_ = internal::Token_Data;

  template <typename... Args>
  static TokenPtr New(Args&&... args) {
    return TokenPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TokenPtr From(const U& u) {
    return mojo::TypeConverter<TokenPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Token>::Convert(*this);
  }


  Token();

  Token(
      uint64_t high,
      uint64_t low);

  ~Token();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TokenPtr>
  TokenPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Token>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Token::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Token::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Token_UnserializedMessageContext<
            UserType, Token::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Token::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Token::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Token_UnserializedMessageContext<
            UserType, Token::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Token::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t high;
  
  uint64_t low;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
TokenPtr Token::Clone() const {
  return New(
      mojo::Clone(high),
      mojo::Clone(low)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Token>::value>::type*>
bool Token::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->high, other_struct.high))
    return false;
  if (!mojo::Equals(this->low, other_struct.low))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM) StructTraits<::mojo_base::mojom::Token::DataView,
                                         ::mojo_base::mojom::TokenPtr> {
  static bool IsNull(const ::mojo_base::mojom::TokenPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::TokenPtr* output) { output->reset(); }

  static decltype(::mojo_base::mojom::Token::high) high(
      const ::mojo_base::mojom::TokenPtr& input) {
    return input->high;
  }

  static decltype(::mojo_base::mojom::Token::low) low(
      const ::mojo_base::mojom::TokenPtr& input) {
    return input->low;
  }

  static bool Read(::mojo_base::mojom::Token::DataView input, ::mojo_base::mojom::TokenPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_TOKEN_MOJOM_H_
