// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_grammar.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_error.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class StartSpeechRecognitionRequestParams_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) StartSpeechRecognitionRequestParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StartSpeechRecognitionRequestParams_Data));
      new (data()) StartSpeechRecognitionRequestParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StartSpeechRecognitionRequestParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StartSpeechRecognitionRequestParams_Data>(index_);
    }
    StartSpeechRecognitionRequestParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data session_request;
  mojo::internal::Interface_Data client;
  uint32_t max_hypotheses;
  mojo::internal::Pointer<mojo::internal::String_Data> language;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::SpeechRecognitionGrammar_Data>>> grammars;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  uint8_t continuous : 1;
  uint8_t interim_results : 1;
  uint8_t padfinal_[7];

 private:
  StartSpeechRecognitionRequestParams_Data();
  ~StartSpeechRecognitionRequestParams_Data() = delete;
};
static_assert(sizeof(StartSpeechRecognitionRequestParams_Data) == 56,
              "Bad sizeof(StartSpeechRecognitionRequestParams_Data)");
// Used by StartSpeechRecognitionRequestParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StartSpeechRecognitionRequestParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StartSpeechRecognitionRequestParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StartSpeechRecognitionRequestParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StartSpeechRecognitionRequestParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StartSpeechRecognitionRequestParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_SHARED_INTERNAL_H_