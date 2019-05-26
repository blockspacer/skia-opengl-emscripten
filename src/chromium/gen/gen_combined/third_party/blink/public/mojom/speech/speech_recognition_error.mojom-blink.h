// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_ERROR_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_ERROR_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/speech/speech_recognition_error.mojom-shared.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_error.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_error_code.mojom-blink-forward.h"

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




namespace WTF {
struct blink_mojom_internal_SpeechAudioErrorDetails_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::SpeechAudioErrorDetails& value) {
    using utype = std::underlying_type<::blink::mojom::SpeechAudioErrorDetails>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::SpeechAudioErrorDetails& left, const ::blink::mojom::SpeechAudioErrorDetails& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::SpeechAudioErrorDetails>
    : public GenericHashTraits<::blink::mojom::SpeechAudioErrorDetails> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::SpeechAudioErrorDetails& value) {
    return value == static_cast<::blink::mojom::SpeechAudioErrorDetails>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::SpeechAudioErrorDetails& slot, bool) {
    slot = static_cast<::blink::mojom::SpeechAudioErrorDetails>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::SpeechAudioErrorDetails& value) {
    return value == static_cast<::blink::mojom::SpeechAudioErrorDetails>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {





class PLATFORM_EXPORT SpeechRecognitionError {
 public:
  using DataView = SpeechRecognitionErrorDataView;
  using Data_ = internal::SpeechRecognitionError_Data;

  template <typename... Args>
  static SpeechRecognitionErrorPtr New(Args&&... args) {
    return SpeechRecognitionErrorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SpeechRecognitionErrorPtr From(const U& u) {
    return mojo::TypeConverter<SpeechRecognitionErrorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SpeechRecognitionError>::Convert(*this);
  }


  SpeechRecognitionError();

  SpeechRecognitionError(
      ::blink::mojom::blink::SpeechRecognitionErrorCode code,
      SpeechAudioErrorDetails details);

  ~SpeechRecognitionError();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SpeechRecognitionErrorPtr>
  SpeechRecognitionErrorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SpeechRecognitionError>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SpeechRecognitionError::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SpeechRecognitionError::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SpeechRecognitionError_UnserializedMessageContext<
            UserType, SpeechRecognitionError::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SpeechRecognitionError::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SpeechRecognitionError::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SpeechRecognitionError_UnserializedMessageContext<
            UserType, SpeechRecognitionError::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SpeechRecognitionError::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::mojom::blink::SpeechRecognitionErrorCode code;
  
  SpeechAudioErrorDetails details;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
SpeechRecognitionErrorPtr SpeechRecognitionError::Clone() const {
  return New(
      mojo::Clone(code),
      mojo::Clone(details)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SpeechRecognitionError>::value>::type*>
bool SpeechRecognitionError::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->code, other_struct.code))
    return false;
  if (!mojo::Equals(this->details, other_struct.details))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SpeechRecognitionError::DataView,
                                         ::blink::mojom::blink::SpeechRecognitionErrorPtr> {
  static bool IsNull(const ::blink::mojom::blink::SpeechRecognitionErrorPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SpeechRecognitionErrorPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::SpeechRecognitionError::code) code(
      const ::blink::mojom::blink::SpeechRecognitionErrorPtr& input) {
    return input->code;
  }

  static decltype(::blink::mojom::blink::SpeechRecognitionError::details) details(
      const ::blink::mojom::blink::SpeechRecognitionErrorPtr& input) {
    return input->details;
  }

  static bool Read(::blink::mojom::blink::SpeechRecognitionError::DataView input, ::blink::mojom::blink::SpeechRecognitionErrorPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_ERROR_MOJOM_BLINK_H_