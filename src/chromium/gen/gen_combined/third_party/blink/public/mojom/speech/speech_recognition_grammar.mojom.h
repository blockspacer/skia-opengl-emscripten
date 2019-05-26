// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_GRAMMAR_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_GRAMMAR_MOJOM_H_

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
#include "third_party/blink/public/mojom/speech/speech_recognition_grammar.mojom-shared.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_grammar.mojom-forward.h"
#include "url/mojom/url.mojom.h"
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








class BLINK_COMMON_EXPORT SpeechRecognitionGrammar {
 public:
  using DataView = SpeechRecognitionGrammarDataView;
  using Data_ = internal::SpeechRecognitionGrammar_Data;

  template <typename... Args>
  static SpeechRecognitionGrammarPtr New(Args&&... args) {
    return SpeechRecognitionGrammarPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SpeechRecognitionGrammarPtr From(const U& u) {
    return mojo::TypeConverter<SpeechRecognitionGrammarPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SpeechRecognitionGrammar>::Convert(*this);
  }


  SpeechRecognitionGrammar();

  SpeechRecognitionGrammar(
      const GURL& url,
      double weight);

  ~SpeechRecognitionGrammar();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SpeechRecognitionGrammarPtr>
  SpeechRecognitionGrammarPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SpeechRecognitionGrammar>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SpeechRecognitionGrammar::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SpeechRecognitionGrammar::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SpeechRecognitionGrammar_UnserializedMessageContext<
            UserType, SpeechRecognitionGrammar::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SpeechRecognitionGrammar::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SpeechRecognitionGrammar::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SpeechRecognitionGrammar_UnserializedMessageContext<
            UserType, SpeechRecognitionGrammar::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SpeechRecognitionGrammar::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  GURL url;
  
  double weight;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SpeechRecognitionGrammarPtr SpeechRecognitionGrammar::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(weight)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SpeechRecognitionGrammar>::value>::type*>
bool SpeechRecognitionGrammar::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->weight, other_struct.weight))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::SpeechRecognitionGrammar::DataView,
                                         ::blink::mojom::SpeechRecognitionGrammarPtr> {
  static bool IsNull(const ::blink::mojom::SpeechRecognitionGrammarPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::SpeechRecognitionGrammarPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::SpeechRecognitionGrammar::url)& url(
      const ::blink::mojom::SpeechRecognitionGrammarPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::SpeechRecognitionGrammar::weight) weight(
      const ::blink::mojom::SpeechRecognitionGrammarPtr& input) {
    return input->weight;
  }

  static bool Read(::blink::mojom::SpeechRecognitionGrammar::DataView input, ::blink::mojom::SpeechRecognitionGrammarPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_GRAMMAR_MOJOM_H_