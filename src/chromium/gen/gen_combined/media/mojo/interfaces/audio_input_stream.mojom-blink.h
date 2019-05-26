// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/audio_input_stream.mojom-shared.h"
#include "media/mojo/interfaces/audio_input_stream.mojom-blink-forward.h"
#include "media/mojo/interfaces/audio_parameters.mojom-blink-forward.h"
#include "media/mojo/interfaces/media_types.mojom-blink-forward.h"

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
struct media_mojom_internal_AudioInputStreamObserver_DisconnectReason_DataHashFn {
  static unsigned GetHash(const ::media::mojom::AudioInputStreamObserver_DisconnectReason& value) {
    using utype = std::underlying_type<::media::mojom::AudioInputStreamObserver_DisconnectReason>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::AudioInputStreamObserver_DisconnectReason& left, const ::media::mojom::AudioInputStreamObserver_DisconnectReason& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media::mojom::AudioInputStreamObserver_DisconnectReason>
    : public GenericHashTraits<::media::mojom::AudioInputStreamObserver_DisconnectReason> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::AudioInputStreamObserver_DisconnectReason& value) {
    return value == static_cast<::media::mojom::AudioInputStreamObserver_DisconnectReason>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::AudioInputStreamObserver_DisconnectReason& slot, bool) {
    slot = static_cast<::media::mojom::AudioInputStreamObserver_DisconnectReason>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::AudioInputStreamObserver_DisconnectReason& value) {
    return value == static_cast<::media::mojom::AudioInputStreamObserver_DisconnectReason>(-1000001);
  }
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {

class AudioInputStreamProxy;

template <typename ImplRefTraits>
class AudioInputStreamStub;

class AudioInputStreamRequestValidator;


class BLINK_PLATFORM_EXPORT AudioInputStream
    : public AudioInputStreamInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AudioInputStreamInterfaceBase;
  using Proxy_ = AudioInputStreamProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioInputStreamStub<ImplRefTraits>;

  using RequestValidator_ = AudioInputStreamRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRecordMinVersion = 0,
    kSetVolumeMinVersion = 0,
  };
  virtual ~AudioInputStream() {}

  
  virtual void Record() = 0;

  
  virtual void SetVolume(double volume) = 0;
};

class AudioInputStreamClientProxy;

template <typename ImplRefTraits>
class AudioInputStreamClientStub;

class AudioInputStreamClientRequestValidator;


class BLINK_PLATFORM_EXPORT AudioInputStreamClient
    : public AudioInputStreamClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AudioInputStreamClientInterfaceBase;
  using Proxy_ = AudioInputStreamClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioInputStreamClientStub<ImplRefTraits>;

  using RequestValidator_ = AudioInputStreamClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnErrorMinVersion = 0,
    kOnMutedStateChangedMinVersion = 0,
  };
  virtual ~AudioInputStreamClient() {}

  
  virtual void OnError() = 0;

  
  virtual void OnMutedStateChanged(bool is_muted) = 0;
};

class AudioInputStreamObserverProxy;

template <typename ImplRefTraits>
class AudioInputStreamObserverStub;

class AudioInputStreamObserverRequestValidator;


class BLINK_PLATFORM_EXPORT AudioInputStreamObserver
    : public AudioInputStreamObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AudioInputStreamObserverInterfaceBase;
  using Proxy_ = AudioInputStreamObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioInputStreamObserverStub<ImplRefTraits>;

  using RequestValidator_ = AudioInputStreamObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDidStartRecordingMinVersion = 0,
  };
  
  using DisconnectReason = AudioInputStreamObserver_DisconnectReason;
  virtual ~AudioInputStreamObserver() {}

  
  virtual void DidStartRecording() = 0;
};

class BLINK_PLATFORM_EXPORT AudioInputStreamProxy
    : public AudioInputStream {
 public:
  using InterfaceType = AudioInputStream;

  explicit AudioInputStreamProxy(mojo::MessageReceiverWithResponder* receiver);
  void Record() final;
  void SetVolume(double volume) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT AudioInputStreamClientProxy
    : public AudioInputStreamClient {
 public:
  using InterfaceType = AudioInputStreamClient;

  explicit AudioInputStreamClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnError() final;
  void OnMutedStateChanged(bool is_muted) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT AudioInputStreamObserverProxy
    : public AudioInputStreamObserver {
 public:
  using InterfaceType = AudioInputStreamObserver;

  explicit AudioInputStreamObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void DidStartRecording() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT AudioInputStreamStubDispatch {
 public:
  static bool Accept(AudioInputStream* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioInputStream* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioInputStream>>
class AudioInputStreamStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioInputStreamStub() {}
  ~AudioInputStreamStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioInputStreamStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioInputStreamStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT AudioInputStreamClientStubDispatch {
 public:
  static bool Accept(AudioInputStreamClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioInputStreamClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioInputStreamClient>>
class AudioInputStreamClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioInputStreamClientStub() {}
  ~AudioInputStreamClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioInputStreamClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioInputStreamClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT AudioInputStreamObserverStubDispatch {
 public:
  static bool Accept(AudioInputStreamObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioInputStreamObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioInputStreamObserver>>
class AudioInputStreamObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioInputStreamObserverStub() {}
  ~AudioInputStreamObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioInputStreamObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioInputStreamObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT AudioInputStreamRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT AudioInputStreamClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT AudioInputStreamObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_BLINK_H_