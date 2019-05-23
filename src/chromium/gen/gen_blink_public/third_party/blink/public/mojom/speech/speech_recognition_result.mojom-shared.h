// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_RESULT_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_RESULT_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class SpeechRecognitionHypothesisDataView;

class SpeechRecognitionResultDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::SpeechRecognitionHypothesisDataView> {
  using Data = ::blink::mojom::internal::SpeechRecognitionHypothesis_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::SpeechRecognitionResultDataView> {
  using Data = ::blink::mojom::internal::SpeechRecognitionResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
class SpeechRecognitionHypothesisDataView {
 public:
  SpeechRecognitionHypothesisDataView() {}

  SpeechRecognitionHypothesisDataView(
      internal::SpeechRecognitionHypothesis_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUtteranceDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUtterance(UserType* output) {
    auto* pointer = data_->utterance.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  double confidence() const {
    return data_->confidence;
  }
 private:
  internal::SpeechRecognitionHypothesis_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpeechRecognitionResultDataView {
 public:
  SpeechRecognitionResultDataView() {}

  SpeechRecognitionResultDataView(
      internal::SpeechRecognitionResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHypothesesDataView(
      mojo::ArrayDataView<SpeechRecognitionHypothesisDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHypotheses(UserType* output) {
    auto* pointer = data_->hypotheses.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SpeechRecognitionHypothesisDataView>>(
        pointer, output, context_);
  }
  bool is_provisional() const {
    return data_->is_provisional;
  }
 private:
  internal::SpeechRecognitionResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SpeechRecognitionHypothesisDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SpeechRecognitionHypothesisDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SpeechRecognitionHypothesis_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::utterance(input)) in_utterance = Traits::utterance(input);
    typename decltype((*output)->utterance)::BaseType::BufferWriter
        utterance_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_utterance, buffer, &utterance_writer, context);
    (*output)->utterance.Set(
        utterance_writer.is_null() ? nullptr : utterance_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->utterance.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null utterance in SpeechRecognitionHypothesis struct");
    (*output)->confidence = Traits::confidence(input);
  }

  static bool Deserialize(::blink::mojom::internal::SpeechRecognitionHypothesis_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SpeechRecognitionHypothesisDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SpeechRecognitionResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SpeechRecognitionResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SpeechRecognitionResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::hypotheses(input)) in_hypotheses = Traits::hypotheses(input);
    typename decltype((*output)->hypotheses)::BaseType::BufferWriter
        hypotheses_writer;
    const mojo::internal::ContainerValidateParams hypotheses_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SpeechRecognitionHypothesisDataView>>(
        in_hypotheses, buffer, &hypotheses_writer, &hypotheses_validate_params,
        context);
    (*output)->hypotheses.Set(
        hypotheses_writer.is_null() ? nullptr : hypotheses_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->hypotheses.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null hypotheses in SpeechRecognitionResult struct");
    (*output)->is_provisional = Traits::is_provisional(input);
  }

  static bool Deserialize(::blink::mojom::internal::SpeechRecognitionResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SpeechRecognitionResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void SpeechRecognitionHypothesisDataView::GetUtteranceDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->utterance.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void SpeechRecognitionResultDataView::GetHypothesesDataView(
    mojo::ArrayDataView<SpeechRecognitionHypothesisDataView>* output) {
  auto pointer = data_->hypotheses.Get();
  *output = mojo::ArrayDataView<SpeechRecognitionHypothesisDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_RESULT_MOJOM_SHARED_H_