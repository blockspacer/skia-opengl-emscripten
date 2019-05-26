// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_ERROR_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_ERROR_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/speech/speech_recognition_error.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_error_code.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class SpeechRecognitionErrorDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::SpeechRecognitionErrorDataView> {
  using Data = ::blink::mojom::internal::SpeechRecognitionError_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class SpeechAudioErrorDetails : int32_t {
  
  kNone,
  
  kNoMic,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, SpeechAudioErrorDetails value);
inline bool IsKnownEnumValue(SpeechAudioErrorDetails value) {
  return internal::SpeechAudioErrorDetails_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class SpeechRecognitionErrorDataView {
 public:
  SpeechRecognitionErrorDataView() {}

  SpeechRecognitionErrorDataView(
      internal::SpeechRecognitionError_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCode(UserType* output) const {
    auto data_value = data_->code;
    return mojo::internal::Deserialize<::blink::mojom::SpeechRecognitionErrorCode>(
        data_value, output);
  }

  ::blink::mojom::SpeechRecognitionErrorCode code() const {
    return static_cast<::blink::mojom::SpeechRecognitionErrorCode>(data_->code);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDetails(UserType* output) const {
    auto data_value = data_->details;
    return mojo::internal::Deserialize<::blink::mojom::SpeechAudioErrorDetails>(
        data_value, output);
  }

  SpeechAudioErrorDetails details() const {
    return static_cast<SpeechAudioErrorDetails>(data_->details);
  }
 private:
  internal::SpeechRecognitionError_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::SpeechAudioErrorDetails>
    : public mojo::internal::EnumHashImpl<::blink::mojom::SpeechAudioErrorDetails> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::SpeechAudioErrorDetails, ::blink::mojom::SpeechAudioErrorDetails> {
  static ::blink::mojom::SpeechAudioErrorDetails ToMojom(::blink::mojom::SpeechAudioErrorDetails input) { return input; }
  static bool FromMojom(::blink::mojom::SpeechAudioErrorDetails input, ::blink::mojom::SpeechAudioErrorDetails* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SpeechAudioErrorDetails, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::SpeechAudioErrorDetails, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::SpeechAudioErrorDetails>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SpeechRecognitionErrorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SpeechRecognitionErrorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SpeechRecognitionError_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::SpeechRecognitionErrorCode>(
        Traits::code(input), &(*output)->code);
    mojo::internal::Serialize<::blink::mojom::SpeechAudioErrorDetails>(
        Traits::details(input), &(*output)->details);
  }

  static bool Deserialize(::blink::mojom::internal::SpeechRecognitionError_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SpeechRecognitionErrorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_ERROR_MOJOM_SHARED_H_