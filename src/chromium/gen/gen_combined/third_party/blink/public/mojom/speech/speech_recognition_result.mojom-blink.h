// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_RESULT_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_RESULT_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-shared.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-blink-forward.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"

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









class PLATFORM_EXPORT SpeechRecognitionHypothesis {
 public:
  using DataView = SpeechRecognitionHypothesisDataView;
  using Data_ = internal::SpeechRecognitionHypothesis_Data;

  template <typename... Args>
  static SpeechRecognitionHypothesisPtr New(Args&&... args) {
    return SpeechRecognitionHypothesisPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SpeechRecognitionHypothesisPtr From(const U& u) {
    return mojo::TypeConverter<SpeechRecognitionHypothesisPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SpeechRecognitionHypothesis>::Convert(*this);
  }


  SpeechRecognitionHypothesis();

  SpeechRecognitionHypothesis(
      const WTF::String& utterance,
      double confidence);

  ~SpeechRecognitionHypothesis();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SpeechRecognitionHypothesisPtr>
  SpeechRecognitionHypothesisPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SpeechRecognitionHypothesis>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SpeechRecognitionHypothesis::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SpeechRecognitionHypothesis::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SpeechRecognitionHypothesis_UnserializedMessageContext<
            UserType, SpeechRecognitionHypothesis::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SpeechRecognitionHypothesis::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SpeechRecognitionHypothesis::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SpeechRecognitionHypothesis_UnserializedMessageContext<
            UserType, SpeechRecognitionHypothesis::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SpeechRecognitionHypothesis::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String utterance;
  
  double confidence;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT SpeechRecognitionResult {
 public:
  using DataView = SpeechRecognitionResultDataView;
  using Data_ = internal::SpeechRecognitionResult_Data;

  template <typename... Args>
  static SpeechRecognitionResultPtr New(Args&&... args) {
    return SpeechRecognitionResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SpeechRecognitionResultPtr From(const U& u) {
    return mojo::TypeConverter<SpeechRecognitionResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SpeechRecognitionResult>::Convert(*this);
  }


  SpeechRecognitionResult();

  SpeechRecognitionResult(
      WTF::Vector<SpeechRecognitionHypothesisPtr> hypotheses,
      bool is_provisional);

  ~SpeechRecognitionResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SpeechRecognitionResultPtr>
  SpeechRecognitionResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SpeechRecognitionResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SpeechRecognitionResult::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SpeechRecognitionResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SpeechRecognitionResult_UnserializedMessageContext<
            UserType, SpeechRecognitionResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SpeechRecognitionResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SpeechRecognitionResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SpeechRecognitionResult_UnserializedMessageContext<
            UserType, SpeechRecognitionResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SpeechRecognitionResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<SpeechRecognitionHypothesisPtr> hypotheses;
  
  bool is_provisional;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SpeechRecognitionResult);
};

template <typename StructPtrType>
SpeechRecognitionHypothesisPtr SpeechRecognitionHypothesis::Clone() const {
  return New(
      mojo::Clone(utterance),
      mojo::Clone(confidence)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SpeechRecognitionHypothesis>::value>::type*>
bool SpeechRecognitionHypothesis::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->utterance, other_struct.utterance))
    return false;
  if (!mojo::Equals(this->confidence, other_struct.confidence))
    return false;
  return true;
}
template <typename StructPtrType>
SpeechRecognitionResultPtr SpeechRecognitionResult::Clone() const {
  return New(
      mojo::Clone(hypotheses),
      mojo::Clone(is_provisional)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SpeechRecognitionResult>::value>::type*>
bool SpeechRecognitionResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->hypotheses, other_struct.hypotheses))
    return false;
  if (!mojo::Equals(this->is_provisional, other_struct.is_provisional))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SpeechRecognitionHypothesis::DataView,
                                         ::blink::mojom::blink::SpeechRecognitionHypothesisPtr> {
  static bool IsNull(const ::blink::mojom::blink::SpeechRecognitionHypothesisPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SpeechRecognitionHypothesisPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::SpeechRecognitionHypothesis::utterance)& utterance(
      const ::blink::mojom::blink::SpeechRecognitionHypothesisPtr& input) {
    return input->utterance;
  }

  static decltype(::blink::mojom::blink::SpeechRecognitionHypothesis::confidence) confidence(
      const ::blink::mojom::blink::SpeechRecognitionHypothesisPtr& input) {
    return input->confidence;
  }

  static bool Read(::blink::mojom::blink::SpeechRecognitionHypothesis::DataView input, ::blink::mojom::blink::SpeechRecognitionHypothesisPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SpeechRecognitionResult::DataView,
                                         ::blink::mojom::blink::SpeechRecognitionResultPtr> {
  static bool IsNull(const ::blink::mojom::blink::SpeechRecognitionResultPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SpeechRecognitionResultPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::SpeechRecognitionResult::hypotheses)& hypotheses(
      const ::blink::mojom::blink::SpeechRecognitionResultPtr& input) {
    return input->hypotheses;
  }

  static decltype(::blink::mojom::blink::SpeechRecognitionResult::is_provisional) is_provisional(
      const ::blink::mojom::blink::SpeechRecognitionResultPtr& input) {
    return input->is_provisional;
  }

  static bool Read(::blink::mojom::blink::SpeechRecognitionResult::DataView input, ::blink::mojom::blink::SpeechRecognitionResultPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_RESULT_MOJOM_BLINK_H_