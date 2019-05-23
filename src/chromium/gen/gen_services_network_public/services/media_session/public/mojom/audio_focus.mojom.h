// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_H_

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
#include "services/media_session/public/mojom/audio_focus.mojom-shared.h"
#include "services/media_session/public/mojom/audio_focus.mojom-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/media_session/public/mojom/media_session.mojom.h"
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




namespace media_session {
namespace mojom {

class AudioFocusObserverProxy;

template <typename ImplRefTraits>
class AudioFocusObserverStub;

class AudioFocusObserverRequestValidator;


class  AudioFocusObserver
    : public AudioFocusObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AudioFocusObserverInterfaceBase;
  using Proxy_ = AudioFocusObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioFocusObserverStub<ImplRefTraits>;

  using RequestValidator_ = AudioFocusObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnFocusGainedMinVersion = 0,
    kOnFocusLostMinVersion = 0,
  };
  virtual ~AudioFocusObserver() {}

  
  virtual void OnFocusGained(AudioFocusRequestStatePtr state) = 0;

  
  virtual void OnFocusLost(AudioFocusRequestStatePtr state) = 0;
};

class AudioFocusRequestClientProxy;

template <typename ImplRefTraits>
class AudioFocusRequestClientStub;

class AudioFocusRequestClientRequestValidator;
class AudioFocusRequestClientResponseValidator;


class  AudioFocusRequestClient
    : public AudioFocusRequestClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AudioFocusRequestClientInterfaceBase;
  using Proxy_ = AudioFocusRequestClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioFocusRequestClientStub<ImplRefTraits>;

  using RequestValidator_ = AudioFocusRequestClientRequestValidator;
  using ResponseValidator_ = AudioFocusRequestClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestAudioFocusMinVersion = 0,
    kAbandonAudioFocusMinVersion = 0,
    kMediaSessionInfoChangedMinVersion = 0,
  };
  virtual ~AudioFocusRequestClient() {}


  using RequestAudioFocusCallback = base::OnceCallback<void()>;
  
  virtual void RequestAudioFocus(::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, RequestAudioFocusCallback callback) = 0;

  
  virtual void AbandonAudioFocus() = 0;

  
  virtual void MediaSessionInfoChanged(::media_session::mojom::MediaSessionInfoPtr session_info) = 0;
};

class AudioFocusManagerProxy;

template <typename ImplRefTraits>
class AudioFocusManagerStub;

class AudioFocusManagerRequestValidator;
class AudioFocusManagerResponseValidator;


class  AudioFocusManager
    : public AudioFocusManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 5;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AudioFocusManagerInterfaceBase;
  using Proxy_ = AudioFocusManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioFocusManagerStub<ImplRefTraits>;

  using RequestValidator_ = AudioFocusManagerRequestValidator;
  using ResponseValidator_ = AudioFocusManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestAudioFocusMinVersion = 0,
    kRequestGroupedAudioFocusMinVersion = 4,
    kGetFocusRequestsMinVersion = 0,
    kAddObserverMinVersion = 0,
    kSetSourceNameMinVersion = 2,
    kSetEnforcementModeMinVersion = 5,
  };
  virtual ~AudioFocusManager() {}


  using RequestAudioFocusCallback = base::OnceCallback<void(const base::UnguessableToken&)>;
  
  virtual void RequestAudioFocus(AudioFocusRequestClientRequest client, ::media_session::mojom::MediaSessionPtr media_session, ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, RequestAudioFocusCallback callback) = 0;


  using RequestGroupedAudioFocusCallback = base::OnceCallback<void(const base::UnguessableToken&)>;
  
  virtual void RequestGroupedAudioFocus(AudioFocusRequestClientRequest client, ::media_session::mojom::MediaSessionPtr media_session, ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, const base::UnguessableToken& group_id, RequestGroupedAudioFocusCallback callback) = 0;


  using GetFocusRequestsCallback = base::OnceCallback<void(std::vector<AudioFocusRequestStatePtr>)>;
  
  virtual void GetFocusRequests(GetFocusRequestsCallback callback) = 0;

  
  virtual void AddObserver(AudioFocusObserverPtr observer) = 0;

  
  virtual void SetSourceName(const std::string& name) = 0;

  
  virtual void SetEnforcementMode(EnforcementMode mode) = 0;
};

class AudioFocusManagerDebugProxy;

template <typename ImplRefTraits>
class AudioFocusManagerDebugStub;

class AudioFocusManagerDebugRequestValidator;
class AudioFocusManagerDebugResponseValidator;


class  AudioFocusManagerDebug
    : public AudioFocusManagerDebugInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AudioFocusManagerDebugInterfaceBase;
  using Proxy_ = AudioFocusManagerDebugProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioFocusManagerDebugStub<ImplRefTraits>;

  using RequestValidator_ = AudioFocusManagerDebugRequestValidator;
  using ResponseValidator_ = AudioFocusManagerDebugResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetDebugInfoForRequestMinVersion = 0,
  };
  virtual ~AudioFocusManagerDebug() {}


  using GetDebugInfoForRequestCallback = base::OnceCallback<void(::media_session::mojom::MediaSessionDebugInfoPtr)>;
  
  virtual void GetDebugInfoForRequest(const base::UnguessableToken& request_id, GetDebugInfoForRequestCallback callback) = 0;
};

class  AudioFocusObserverProxy
    : public AudioFocusObserver {
 public:
  using InterfaceType = AudioFocusObserver;

  explicit AudioFocusObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnFocusGained(AudioFocusRequestStatePtr state) final;
  void OnFocusLost(AudioFocusRequestStatePtr state) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AudioFocusRequestClientProxy
    : public AudioFocusRequestClient {
 public:
  using InterfaceType = AudioFocusRequestClient;

  explicit AudioFocusRequestClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestAudioFocus(::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, RequestAudioFocusCallback callback) final;
  void AbandonAudioFocus() final;
  void MediaSessionInfoChanged(::media_session::mojom::MediaSessionInfoPtr session_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AudioFocusManagerProxy
    : public AudioFocusManager {
 public:
  using InterfaceType = AudioFocusManager;

  explicit AudioFocusManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestAudioFocus(AudioFocusRequestClientRequest client, ::media_session::mojom::MediaSessionPtr media_session, ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, RequestAudioFocusCallback callback) final;
  void RequestGroupedAudioFocus(AudioFocusRequestClientRequest client, ::media_session::mojom::MediaSessionPtr media_session, ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, const base::UnguessableToken& group_id, RequestGroupedAudioFocusCallback callback) final;
  void GetFocusRequests(GetFocusRequestsCallback callback) final;
  void AddObserver(AudioFocusObserverPtr observer) final;
  void SetSourceName(const std::string& name) final;
  void SetEnforcementMode(EnforcementMode mode) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AudioFocusManagerDebugProxy
    : public AudioFocusManagerDebug {
 public:
  using InterfaceType = AudioFocusManagerDebug;

  explicit AudioFocusManagerDebugProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDebugInfoForRequest(const base::UnguessableToken& request_id, GetDebugInfoForRequestCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  AudioFocusObserverStubDispatch {
 public:
  static bool Accept(AudioFocusObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioFocusObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioFocusObserver>>
class AudioFocusObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioFocusObserverStub() {}
  ~AudioFocusObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioFocusObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioFocusObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AudioFocusRequestClientStubDispatch {
 public:
  static bool Accept(AudioFocusRequestClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioFocusRequestClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioFocusRequestClient>>
class AudioFocusRequestClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioFocusRequestClientStub() {}
  ~AudioFocusRequestClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioFocusRequestClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioFocusRequestClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AudioFocusManagerStubDispatch {
 public:
  static bool Accept(AudioFocusManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioFocusManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioFocusManager>>
class AudioFocusManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioFocusManagerStub() {}
  ~AudioFocusManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioFocusManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioFocusManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AudioFocusManagerDebugStubDispatch {
 public:
  static bool Accept(AudioFocusManagerDebug* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioFocusManagerDebug* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioFocusManagerDebug>>
class AudioFocusManagerDebugStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioFocusManagerDebugStub() {}
  ~AudioFocusManagerDebugStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioFocusManagerDebugStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioFocusManagerDebugStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AudioFocusObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AudioFocusRequestClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AudioFocusManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AudioFocusManagerDebugRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AudioFocusRequestClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AudioFocusManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AudioFocusManagerDebugResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  AudioFocusRequestState {
 public:
  using DataView = AudioFocusRequestStateDataView;
  using Data_ = internal::AudioFocusRequestState_Data;

  template <typename... Args>
  static AudioFocusRequestStatePtr New(Args&&... args) {
    return AudioFocusRequestStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AudioFocusRequestStatePtr From(const U& u) {
    return mojo::TypeConverter<AudioFocusRequestStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AudioFocusRequestState>::Convert(*this);
  }


  AudioFocusRequestState();

  AudioFocusRequestState(
      ::media_session::mojom::MediaSessionInfoPtr session_info,
      AudioFocusType audio_focus_type);

  AudioFocusRequestState(
      ::media_session::mojom::MediaSessionInfoPtr session_info,
      AudioFocusType audio_focus_type,
      const base::Optional<std::string>& source_name);

  AudioFocusRequestState(
      ::media_session::mojom::MediaSessionInfoPtr session_info,
      AudioFocusType audio_focus_type,
      const base::Optional<std::string>& source_name,
      const base::Optional<base::UnguessableToken>& request_id);

  ~AudioFocusRequestState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AudioFocusRequestStatePtr>
  AudioFocusRequestStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AudioFocusRequestState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AudioFocusRequestState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AudioFocusRequestState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AudioFocusRequestState_UnserializedMessageContext<
            UserType, AudioFocusRequestState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AudioFocusRequestState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AudioFocusRequestState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AudioFocusRequestState_UnserializedMessageContext<
            UserType, AudioFocusRequestState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AudioFocusRequestState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::media_session::mojom::MediaSessionInfoPtr session_info;
  
  AudioFocusType audio_focus_type;
  
  base::Optional<std::string> source_name;
  
  base::Optional<base::UnguessableToken> request_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(AudioFocusRequestState);
};

template <typename StructPtrType>
AudioFocusRequestStatePtr AudioFocusRequestState::Clone() const {
  return New(
      mojo::Clone(session_info),
      mojo::Clone(audio_focus_type),
      mojo::Clone(source_name),
      mojo::Clone(request_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AudioFocusRequestState>::value>::type*>
bool AudioFocusRequestState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->session_info, other_struct.session_info))
    return false;
  if (!mojo::Equals(this->audio_focus_type, other_struct.audio_focus_type))
    return false;
  if (!mojo::Equals(this->source_name, other_struct.source_name))
    return false;
  if (!mojo::Equals(this->request_id, other_struct.request_id))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace media_session

namespace mojo {


template <>
struct  StructTraits<::media_session::mojom::AudioFocusRequestState::DataView,
                                         ::media_session::mojom::AudioFocusRequestStatePtr> {
  static bool IsNull(const ::media_session::mojom::AudioFocusRequestStatePtr& input) { return !input; }
  static void SetToNull(::media_session::mojom::AudioFocusRequestStatePtr* output) { output->reset(); }

  static const decltype(::media_session::mojom::AudioFocusRequestState::session_info)& session_info(
      const ::media_session::mojom::AudioFocusRequestStatePtr& input) {
    return input->session_info;
  }

  static decltype(::media_session::mojom::AudioFocusRequestState::audio_focus_type) audio_focus_type(
      const ::media_session::mojom::AudioFocusRequestStatePtr& input) {
    return input->audio_focus_type;
  }

  static const decltype(::media_session::mojom::AudioFocusRequestState::source_name)& source_name(
      const ::media_session::mojom::AudioFocusRequestStatePtr& input) {
    return input->source_name;
  }

  static const decltype(::media_session::mojom::AudioFocusRequestState::request_id)& request_id(
      const ::media_session::mojom::AudioFocusRequestStatePtr& input) {
    return input->request_id;
  }

  static bool Read(::media_session::mojom::AudioFocusRequestState::DataView input, ::media_session::mojom::AudioFocusRequestStatePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_H_