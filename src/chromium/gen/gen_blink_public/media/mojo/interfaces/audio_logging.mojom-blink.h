// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/audio_logging.mojom-shared.h"
#include "media/mojo/interfaces/audio_logging.mojom-blink-forward.h"
#include "media/mojo/interfaces/audio_parameters.mojom-blink-forward.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct media_mojom_internal_AudioLogComponent_DataHashFn {
  static unsigned GetHash(const ::media::mojom::AudioLogComponent& value) {
    using utype = std::underlying_type<::media::mojom::AudioLogComponent>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::AudioLogComponent& left, const ::media::mojom::AudioLogComponent& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media::mojom::AudioLogComponent>
    : public GenericHashTraits<::media::mojom::AudioLogComponent> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::AudioLogComponent& value) {
    return value == static_cast<::media::mojom::AudioLogComponent>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::AudioLogComponent& slot, bool) {
    slot = static_cast<::media::mojom::AudioLogComponent>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::AudioLogComponent& value) {
    return value == static_cast<::media::mojom::AudioLogComponent>(-1000001);
  }
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {

class AudioLogProxy;

template <typename ImplRefTraits>
class AudioLogStub;

class AudioLogRequestValidator;


class BLINK_PLATFORM_EXPORT AudioLog
    : public AudioLogInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AudioLogInterfaceBase;
  using Proxy_ = AudioLogProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioLogStub<ImplRefTraits>;

  using RequestValidator_ = AudioLogRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnCreatedMinVersion = 0,
    kOnStartedMinVersion = 0,
    kOnStoppedMinVersion = 0,
    kOnClosedMinVersion = 0,
    kOnErrorMinVersion = 0,
    kOnSetVolumeMinVersion = 0,
    kOnProcessingStateChangedMinVersion = 0,
    kOnLogMessageMinVersion = 0,
  };
  virtual ~AudioLog() {}

  
  virtual void OnCreated(::media::mojom::blink::AudioParametersPtr params, const WTF::String& device_id) = 0;

  
  virtual void OnStarted() = 0;

  
  virtual void OnStopped() = 0;

  
  virtual void OnClosed() = 0;

  
  virtual void OnError() = 0;

  
  virtual void OnSetVolume(double volume) = 0;

  
  virtual void OnProcessingStateChanged(const WTF::String& message) = 0;

  
  virtual void OnLogMessage(const WTF::String& message) = 0;
};

class AudioLogFactoryProxy;

template <typename ImplRefTraits>
class AudioLogFactoryStub;

class AudioLogFactoryRequestValidator;


class BLINK_PLATFORM_EXPORT AudioLogFactory
    : public AudioLogFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AudioLogFactoryInterfaceBase;
  using Proxy_ = AudioLogFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioLogFactoryStub<ImplRefTraits>;

  using RequestValidator_ = AudioLogFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateAudioLogMinVersion = 0,
  };
  virtual ~AudioLogFactory() {}

  
  virtual void CreateAudioLog(AudioLogComponent component, int32_t component_id, AudioLogRequest audio_log_request) = 0;
};

class BLINK_PLATFORM_EXPORT AudioLogProxy
    : public AudioLog {
 public:
  using InterfaceType = AudioLog;

  explicit AudioLogProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnCreated(::media::mojom::blink::AudioParametersPtr params, const WTF::String& device_id) final;
  void OnStarted() final;
  void OnStopped() final;
  void OnClosed() final;
  void OnError() final;
  void OnSetVolume(double volume) final;
  void OnProcessingStateChanged(const WTF::String& message) final;
  void OnLogMessage(const WTF::String& message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT AudioLogFactoryProxy
    : public AudioLogFactory {
 public:
  using InterfaceType = AudioLogFactory;

  explicit AudioLogFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateAudioLog(AudioLogComponent component, int32_t component_id, AudioLogRequest audio_log_request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT AudioLogStubDispatch {
 public:
  static bool Accept(AudioLog* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioLog* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioLog>>
class AudioLogStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioLogStub() {}
  ~AudioLogStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioLogStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioLogStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT AudioLogFactoryStubDispatch {
 public:
  static bool Accept(AudioLogFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioLogFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioLogFactory>>
class AudioLogFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioLogFactoryStub() {}
  ~AudioLogFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioLogFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioLogFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT AudioLogRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT AudioLogFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_BLINK_H_