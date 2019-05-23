// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_H_

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
#include "media/mojo/interfaces/audio_logging.mojom-forward.h"
#include "media/mojo/interfaces/audio_parameters.mojom-forward.h"
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




namespace media {
namespace mojom {

class AudioLogProxy;

template <typename ImplRefTraits>
class AudioLogStub;

class AudioLogRequestValidator;


class  AudioLog
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

  
  virtual void OnCreated(const media::AudioParameters& params, const std::string& device_id) = 0;

  
  virtual void OnStarted() = 0;

  
  virtual void OnStopped() = 0;

  
  virtual void OnClosed() = 0;

  
  virtual void OnError() = 0;

  
  virtual void OnSetVolume(double volume) = 0;

  
  virtual void OnProcessingStateChanged(const std::string& message) = 0;

  
  virtual void OnLogMessage(const std::string& message) = 0;
};

class AudioLogFactoryProxy;

template <typename ImplRefTraits>
class AudioLogFactoryStub;

class AudioLogFactoryRequestValidator;


class  AudioLogFactory
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

class  AudioLogProxy
    : public AudioLog {
 public:
  using InterfaceType = AudioLog;

  explicit AudioLogProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnCreated(const media::AudioParameters& params, const std::string& device_id) final;
  void OnStarted() final;
  void OnStopped() final;
  void OnClosed() final;
  void OnError() final;
  void OnSetVolume(double volume) final;
  void OnProcessingStateChanged(const std::string& message) final;
  void OnLogMessage(const std::string& message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  AudioLogFactoryProxy
    : public AudioLogFactory {
 public:
  using InterfaceType = AudioLogFactory;

  explicit AudioLogFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateAudioLog(AudioLogComponent component, int32_t component_id, AudioLogRequest audio_log_request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  AudioLogStubDispatch {
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
class  AudioLogFactoryStubDispatch {
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
class  AudioLogRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AudioLogFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_H_