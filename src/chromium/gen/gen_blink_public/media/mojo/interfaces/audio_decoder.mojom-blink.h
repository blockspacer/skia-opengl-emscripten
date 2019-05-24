// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/audio_decoder.mojom-shared.h"
#include "media/mojo/interfaces/audio_decoder.mojom-blink-forward.h"
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




namespace media {
namespace mojom {
namespace blink {

class AudioDecoderProxy;

template <typename ImplRefTraits>
class AudioDecoderStub;

class AudioDecoderRequestValidator;
class AudioDecoderResponseValidator;


class BLINK_PLATFORM_EXPORT AudioDecoder
    : public AudioDecoderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AudioDecoderInterfaceBase;
  using Proxy_ = AudioDecoderProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioDecoderStub<ImplRefTraits>;

  using RequestValidator_ = AudioDecoderRequestValidator;
  using ResponseValidator_ = AudioDecoderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kConstructMinVersion = 0,
    kInitializeMinVersion = 0,
    kSetDataSourceMinVersion = 0,
    kDecodeMinVersion = 0,
    kResetMinVersion = 0,
  };
  virtual ~AudioDecoder() {}

  
  virtual void Construct(AudioDecoderClientAssociatedPtrInfo client) = 0;


  using InitializeCallback = base::OnceCallback<void(bool, bool)>;
  
  virtual void Initialize(::media::mojom::blink::AudioDecoderConfigPtr config, int32_t cdm_id, InitializeCallback callback) = 0;

  
  virtual void SetDataSource(mojo::ScopedDataPipeConsumerHandle receive_pipe) = 0;


  using DecodeCallback = base::OnceCallback<void(::media::mojom::blink::DecodeStatus)>;
  
  virtual void Decode(::media::mojom::blink::DecoderBufferPtr buffer, DecodeCallback callback) = 0;


  using ResetCallback = base::OnceCallback<void()>;
  
  virtual void Reset(ResetCallback callback) = 0;
};

class AudioDecoderClientProxy;

template <typename ImplRefTraits>
class AudioDecoderClientStub;

class AudioDecoderClientRequestValidator;


class BLINK_PLATFORM_EXPORT AudioDecoderClient
    : public AudioDecoderClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AudioDecoderClientInterfaceBase;
  using Proxy_ = AudioDecoderClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = AudioDecoderClientStub<ImplRefTraits>;

  using RequestValidator_ = AudioDecoderClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnBufferDecodedMinVersion = 0,
    kOnWaitingMinVersion = 0,
  };
  virtual ~AudioDecoderClient() {}

  
  virtual void OnBufferDecoded(::media::mojom::blink::AudioBufferPtr buffer) = 0;

  
  virtual void OnWaiting(::media::mojom::blink::WaitingReason reason) = 0;
};

class BLINK_PLATFORM_EXPORT AudioDecoderProxy
    : public AudioDecoder {
 public:
  using InterfaceType = AudioDecoder;

  explicit AudioDecoderProxy(mojo::MessageReceiverWithResponder* receiver);
  void Construct(AudioDecoderClientAssociatedPtrInfo client) final;
  void Initialize(::media::mojom::blink::AudioDecoderConfigPtr config, int32_t cdm_id, InitializeCallback callback) final;
  void SetDataSource(mojo::ScopedDataPipeConsumerHandle receive_pipe) final;
  void Decode(::media::mojom::blink::DecoderBufferPtr buffer, DecodeCallback callback) final;
  void Reset(ResetCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT AudioDecoderClientProxy
    : public AudioDecoderClient {
 public:
  using InterfaceType = AudioDecoderClient;

  explicit AudioDecoderClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnBufferDecoded(::media::mojom::blink::AudioBufferPtr buffer) final;
  void OnWaiting(::media::mojom::blink::WaitingReason reason) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT AudioDecoderStubDispatch {
 public:
  static bool Accept(AudioDecoder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioDecoder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioDecoder>>
class AudioDecoderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioDecoderStub() {}
  ~AudioDecoderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioDecoderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioDecoderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT AudioDecoderClientStubDispatch {
 public:
  static bool Accept(AudioDecoderClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AudioDecoderClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AudioDecoderClient>>
class AudioDecoderClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AudioDecoderClientStub() {}
  ~AudioDecoderClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioDecoderClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AudioDecoderClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT AudioDecoderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT AudioDecoderClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT AudioDecoderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_BLINK_H_