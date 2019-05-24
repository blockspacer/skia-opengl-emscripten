// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/speech/speech_recognizer.mojom-shared.h"
#include "third_party/blink/public/mojom/speech/speech_recognizer.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_grammar.mojom-blink.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-blink.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_error.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"

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

class SpeechRecognizerProxy;

template <typename ImplRefTraits>
class SpeechRecognizerStub;

class SpeechRecognizerRequestValidator;


class PLATFORM_EXPORT SpeechRecognizer
    : public SpeechRecognizerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SpeechRecognizerInterfaceBase;
  using Proxy_ = SpeechRecognizerProxy;

  template <typename ImplRefTraits>
  using Stub_ = SpeechRecognizerStub<ImplRefTraits>;

  using RequestValidator_ = SpeechRecognizerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartMinVersion = 0,
  };
  virtual ~SpeechRecognizer() {}

  
  virtual void Start(StartSpeechRecognitionRequestParamsPtr params) = 0;
};

class SpeechRecognitionSessionProxy;

template <typename ImplRefTraits>
class SpeechRecognitionSessionStub;

class SpeechRecognitionSessionRequestValidator;


class PLATFORM_EXPORT SpeechRecognitionSession
    : public SpeechRecognitionSessionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SpeechRecognitionSessionInterfaceBase;
  using Proxy_ = SpeechRecognitionSessionProxy;

  template <typename ImplRefTraits>
  using Stub_ = SpeechRecognitionSessionStub<ImplRefTraits>;

  using RequestValidator_ = SpeechRecognitionSessionRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAbortMinVersion = 0,
    kStopCaptureMinVersion = 0,
  };
  virtual ~SpeechRecognitionSession() {}

  
  virtual void Abort() = 0;

  
  virtual void StopCapture() = 0;
};

class SpeechRecognitionSessionClientProxy;

template <typename ImplRefTraits>
class SpeechRecognitionSessionClientStub;

class SpeechRecognitionSessionClientRequestValidator;


class PLATFORM_EXPORT SpeechRecognitionSessionClient
    : public SpeechRecognitionSessionClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SpeechRecognitionSessionClientInterfaceBase;
  using Proxy_ = SpeechRecognitionSessionClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = SpeechRecognitionSessionClientStub<ImplRefTraits>;

  using RequestValidator_ = SpeechRecognitionSessionClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kResultRetrievedMinVersion = 0,
    kErrorOccurredMinVersion = 0,
    kStartedMinVersion = 0,
    kAudioStartedMinVersion = 0,
    kSoundStartedMinVersion = 0,
    kSoundEndedMinVersion = 0,
    kAudioEndedMinVersion = 0,
    kEndedMinVersion = 0,
  };
  virtual ~SpeechRecognitionSessionClient() {}

  
  virtual void ResultRetrieved(WTF::Vector<::blink::mojom::blink::SpeechRecognitionResultPtr> results) = 0;

  
  virtual void ErrorOccurred(::blink::mojom::blink::SpeechRecognitionErrorPtr error) = 0;

  
  virtual void Started() = 0;

  
  virtual void AudioStarted() = 0;

  
  virtual void SoundStarted() = 0;

  
  virtual void SoundEnded() = 0;

  
  virtual void AudioEnded() = 0;

  
  virtual void Ended() = 0;
};

class PLATFORM_EXPORT SpeechRecognizerProxy
    : public SpeechRecognizer {
 public:
  using InterfaceType = SpeechRecognizer;

  explicit SpeechRecognizerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Start(StartSpeechRecognitionRequestParamsPtr params) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT SpeechRecognitionSessionProxy
    : public SpeechRecognitionSession {
 public:
  using InterfaceType = SpeechRecognitionSession;

  explicit SpeechRecognitionSessionProxy(mojo::MessageReceiverWithResponder* receiver);
  void Abort() final;
  void StopCapture() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT SpeechRecognitionSessionClientProxy
    : public SpeechRecognitionSessionClient {
 public:
  using InterfaceType = SpeechRecognitionSessionClient;

  explicit SpeechRecognitionSessionClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void ResultRetrieved(WTF::Vector<::blink::mojom::blink::SpeechRecognitionResultPtr> results) final;
  void ErrorOccurred(::blink::mojom::blink::SpeechRecognitionErrorPtr error) final;
  void Started() final;
  void AudioStarted() final;
  void SoundStarted() final;
  void SoundEnded() final;
  void AudioEnded() final;
  void Ended() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT SpeechRecognizerStubDispatch {
 public:
  static bool Accept(SpeechRecognizer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SpeechRecognizer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SpeechRecognizer>>
class SpeechRecognizerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SpeechRecognizerStub() {}
  ~SpeechRecognizerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpeechRecognizerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpeechRecognizerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT SpeechRecognitionSessionStubDispatch {
 public:
  static bool Accept(SpeechRecognitionSession* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SpeechRecognitionSession* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SpeechRecognitionSession>>
class SpeechRecognitionSessionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SpeechRecognitionSessionStub() {}
  ~SpeechRecognitionSessionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpeechRecognitionSessionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpeechRecognitionSessionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT SpeechRecognitionSessionClientStubDispatch {
 public:
  static bool Accept(SpeechRecognitionSessionClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SpeechRecognitionSessionClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SpeechRecognitionSessionClient>>
class SpeechRecognitionSessionClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SpeechRecognitionSessionClientStub() {}
  ~SpeechRecognitionSessionClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpeechRecognitionSessionClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpeechRecognitionSessionClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT SpeechRecognizerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT SpeechRecognitionSessionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT SpeechRecognitionSessionClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class PLATFORM_EXPORT StartSpeechRecognitionRequestParams {
 public:
  using DataView = StartSpeechRecognitionRequestParamsDataView;
  using Data_ = internal::StartSpeechRecognitionRequestParams_Data;

  template <typename... Args>
  static StartSpeechRecognitionRequestParamsPtr New(Args&&... args) {
    return StartSpeechRecognitionRequestParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StartSpeechRecognitionRequestParamsPtr From(const U& u) {
    return mojo::TypeConverter<StartSpeechRecognitionRequestParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StartSpeechRecognitionRequestParams>::Convert(*this);
  }


  StartSpeechRecognitionRequestParams();

  StartSpeechRecognitionRequestParams(
      SpeechRecognitionSessionRequest session_request,
      SpeechRecognitionSessionClientPtrInfo client,
      const WTF::String& language,
      WTF::Vector<::blink::mojom::blink::SpeechRecognitionGrammarPtr> grammars,
      const scoped_refptr<const ::blink::SecurityOrigin>& origin,
      uint32_t max_hypotheses,
      bool continuous,
      bool interim_results);

  ~StartSpeechRecognitionRequestParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StartSpeechRecognitionRequestParamsPtr>
  StartSpeechRecognitionRequestParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StartSpeechRecognitionRequestParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StartSpeechRecognitionRequestParams::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StartSpeechRecognitionRequestParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StartSpeechRecognitionRequestParams_UnserializedMessageContext<
            UserType, StartSpeechRecognitionRequestParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StartSpeechRecognitionRequestParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return StartSpeechRecognitionRequestParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StartSpeechRecognitionRequestParams_UnserializedMessageContext<
            UserType, StartSpeechRecognitionRequestParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StartSpeechRecognitionRequestParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  SpeechRecognitionSessionRequest session_request;
  
  SpeechRecognitionSessionClientPtrInfo client;
  
  WTF::String language;
  
  WTF::Vector<::blink::mojom::blink::SpeechRecognitionGrammarPtr> grammars;
  
  scoped_refptr<const ::blink::SecurityOrigin> origin;
  
  uint32_t max_hypotheses;
  
  bool continuous;
  
  bool interim_results;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(StartSpeechRecognitionRequestParams);
};

template <typename StructPtrType>
StartSpeechRecognitionRequestParamsPtr StartSpeechRecognitionRequestParams::Clone() const {
  return New(
      mojo::Clone(session_request),
      mojo::Clone(client),
      mojo::Clone(language),
      mojo::Clone(grammars),
      mojo::Clone(origin),
      mojo::Clone(max_hypotheses),
      mojo::Clone(continuous),
      mojo::Clone(interim_results)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StartSpeechRecognitionRequestParams>::value>::type*>
bool StartSpeechRecognitionRequestParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->session_request, other_struct.session_request))
    return false;
  if (!mojo::Equals(this->client, other_struct.client))
    return false;
  if (!mojo::Equals(this->language, other_struct.language))
    return false;
  if (!mojo::Equals(this->grammars, other_struct.grammars))
    return false;
  if (!mojo::Equals(this->origin, other_struct.origin))
    return false;
  if (!mojo::Equals(this->max_hypotheses, other_struct.max_hypotheses))
    return false;
  if (!mojo::Equals(this->continuous, other_struct.continuous))
    return false;
  if (!mojo::Equals(this->interim_results, other_struct.interim_results))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::StartSpeechRecognitionRequestParams::DataView,
                                         ::blink::mojom::blink::StartSpeechRecognitionRequestParamsPtr> {
  static bool IsNull(const ::blink::mojom::blink::StartSpeechRecognitionRequestParamsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::StartSpeechRecognitionRequestParamsPtr* output) { output->reset(); }

  static  decltype(::blink::mojom::blink::StartSpeechRecognitionRequestParams::session_request)& session_request(
       ::blink::mojom::blink::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->session_request;
  }

  static  decltype(::blink::mojom::blink::StartSpeechRecognitionRequestParams::client)& client(
       ::blink::mojom::blink::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->client;
  }

  static const decltype(::blink::mojom::blink::StartSpeechRecognitionRequestParams::language)& language(
      const ::blink::mojom::blink::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->language;
  }

  static const decltype(::blink::mojom::blink::StartSpeechRecognitionRequestParams::grammars)& grammars(
      const ::blink::mojom::blink::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->grammars;
  }

  static const decltype(::blink::mojom::blink::StartSpeechRecognitionRequestParams::origin)& origin(
      const ::blink::mojom::blink::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->origin;
  }

  static decltype(::blink::mojom::blink::StartSpeechRecognitionRequestParams::max_hypotheses) max_hypotheses(
      const ::blink::mojom::blink::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->max_hypotheses;
  }

  static decltype(::blink::mojom::blink::StartSpeechRecognitionRequestParams::continuous) continuous(
      const ::blink::mojom::blink::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->continuous;
  }

  static decltype(::blink::mojom::blink::StartSpeechRecognitionRequestParams::interim_results) interim_results(
      const ::blink::mojom::blink::StartSpeechRecognitionRequestParamsPtr& input) {
    return input->interim_results;
  }

  static bool Read(::blink::mojom::blink::StartSpeechRecognitionRequestParams::DataView input, ::blink::mojom::blink::StartSpeechRecognitionRequestParamsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_BLINK_H_