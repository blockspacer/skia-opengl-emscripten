// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/speech/speech_recognizer.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_grammar.mojom-shared.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-shared.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_error.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class StartSpeechRecognitionRequestParamsDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::StartSpeechRecognitionRequestParamsDataView> {
  using Data = ::blink::mojom::internal::StartSpeechRecognitionRequestParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SpeechRecognizerInterfaceBase {};

using SpeechRecognizerPtrDataView =
    mojo::InterfacePtrDataView<SpeechRecognizerInterfaceBase>;
using SpeechRecognizerRequestDataView =
    mojo::InterfaceRequestDataView<SpeechRecognizerInterfaceBase>;
using SpeechRecognizerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SpeechRecognizerInterfaceBase>;
using SpeechRecognizerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SpeechRecognizerInterfaceBase>;
class SpeechRecognitionSessionInterfaceBase {};

using SpeechRecognitionSessionPtrDataView =
    mojo::InterfacePtrDataView<SpeechRecognitionSessionInterfaceBase>;
using SpeechRecognitionSessionRequestDataView =
    mojo::InterfaceRequestDataView<SpeechRecognitionSessionInterfaceBase>;
using SpeechRecognitionSessionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SpeechRecognitionSessionInterfaceBase>;
using SpeechRecognitionSessionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SpeechRecognitionSessionInterfaceBase>;
class SpeechRecognitionSessionClientInterfaceBase {};

using SpeechRecognitionSessionClientPtrDataView =
    mojo::InterfacePtrDataView<SpeechRecognitionSessionClientInterfaceBase>;
using SpeechRecognitionSessionClientRequestDataView =
    mojo::InterfaceRequestDataView<SpeechRecognitionSessionClientInterfaceBase>;
using SpeechRecognitionSessionClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SpeechRecognitionSessionClientInterfaceBase>;
using SpeechRecognitionSessionClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SpeechRecognitionSessionClientInterfaceBase>;
class StartSpeechRecognitionRequestParamsDataView {
 public:
  StartSpeechRecognitionRequestParamsDataView() {}

  StartSpeechRecognitionRequestParamsDataView(
      internal::StartSpeechRecognitionRequestParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeSessionRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::SpeechRecognitionSessionRequestDataView>(
            &data_->session_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::SpeechRecognitionSessionClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLanguage(UserType* output) {
    auto* pointer = data_->language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetGrammarsDataView(
      mojo::ArrayDataView<::blink::mojom::SpeechRecognitionGrammarDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGrammars(UserType* output) {
    auto* pointer = data_->grammars.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SpeechRecognitionGrammarDataView>>(
        pointer, output, context_);
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  uint32_t max_hypotheses() const {
    return data_->max_hypotheses;
  }
  bool continuous() const {
    return data_->continuous;
  }
  bool interim_results() const {
    return data_->interim_results;
  }
 private:
  internal::StartSpeechRecognitionRequestParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::StartSpeechRecognitionRequestParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::StartSpeechRecognitionRequestParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::StartSpeechRecognitionRequestParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::session_request(input)) in_session_request = Traits::session_request(input);
    mojo::internal::Serialize<::blink::mojom::SpeechRecognitionSessionRequestDataView>(
        in_session_request, &(*output)->session_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->session_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid session_request in StartSpeechRecognitionRequestParams struct");
    decltype(Traits::client(input)) in_client = Traits::client(input);
    mojo::internal::Serialize<::blink::mojom::SpeechRecognitionSessionClientPtrDataView>(
        in_client, &(*output)->client, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->client),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid client in StartSpeechRecognitionRequestParams struct");
    decltype(Traits::language(input)) in_language = Traits::language(input);
    typename decltype((*output)->language)::BaseType::BufferWriter
        language_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_language, buffer, &language_writer, context);
    (*output)->language.Set(
        language_writer.is_null() ? nullptr : language_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->language.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null language in StartSpeechRecognitionRequestParams struct");
    decltype(Traits::grammars(input)) in_grammars = Traits::grammars(input);
    typename decltype((*output)->grammars)::BaseType::BufferWriter
        grammars_writer;
    const mojo::internal::ContainerValidateParams grammars_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SpeechRecognitionGrammarDataView>>(
        in_grammars, buffer, &grammars_writer, &grammars_validate_params,
        context);
    (*output)->grammars.Set(
        grammars_writer.is_null() ? nullptr : grammars_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->grammars.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null grammars in StartSpeechRecognitionRequestParams struct");
    decltype(Traits::origin(input)) in_origin = Traits::origin(input);
    typename decltype((*output)->origin)::BaseType::BufferWriter
        origin_writer;
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_origin, buffer, &origin_writer, context);
    (*output)->origin.Set(
        origin_writer.is_null() ? nullptr : origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origin in StartSpeechRecognitionRequestParams struct");
    (*output)->max_hypotheses = Traits::max_hypotheses(input);
    (*output)->continuous = Traits::continuous(input);
    (*output)->interim_results = Traits::interim_results(input);
  }

  static bool Deserialize(::blink::mojom::internal::StartSpeechRecognitionRequestParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::StartSpeechRecognitionRequestParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void StartSpeechRecognitionRequestParamsDataView::GetLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void StartSpeechRecognitionRequestParamsDataView::GetGrammarsDataView(
    mojo::ArrayDataView<::blink::mojom::SpeechRecognitionGrammarDataView>* output) {
  auto pointer = data_->grammars.Get();
  *output = mojo::ArrayDataView<::blink::mojom::SpeechRecognitionGrammarDataView>(pointer, context_);
}
inline void StartSpeechRecognitionRequestParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_SHARED_H_