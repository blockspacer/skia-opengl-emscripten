// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_H_

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
#include "media/mojo/interfaces/decryptor.mojom-shared.h"
#include "media/mojo/interfaces/decryptor.mojom-forward.h"
#include "media/mojo/interfaces/media_types.mojom-forward.h"
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
#include "media/base/decryptor.h"




namespace media {
namespace mojom {

class DecryptorProxy;

template <typename ImplRefTraits>
class DecryptorStub;

class DecryptorRequestValidator;
class DecryptorResponseValidator;


class  Decryptor
    : public DecryptorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DecryptorInterfaceBase;
  using Proxy_ = DecryptorProxy;

  template <typename ImplRefTraits>
  using Stub_ = DecryptorStub<ImplRefTraits>;

  using RequestValidator_ = DecryptorRequestValidator;
  using ResponseValidator_ = DecryptorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitializeMinVersion = 0,
    kDecryptMinVersion = 0,
    kCancelDecryptMinVersion = 0,
    kInitializeAudioDecoderMinVersion = 0,
    kInitializeVideoDecoderMinVersion = 0,
    kDecryptAndDecodeAudioMinVersion = 0,
    kDecryptAndDecodeVideoMinVersion = 0,
    kResetDecoderMinVersion = 0,
    kDeinitializeDecoderMinVersion = 0,
  };
  
  using Status = Decryptor_Status;
  
  using StreamType = Decryptor_StreamType;
  virtual ~Decryptor() {}

  
  virtual void Initialize(mojo::ScopedDataPipeConsumerHandle audio_pipe, mojo::ScopedDataPipeConsumerHandle video_pipe, mojo::ScopedDataPipeConsumerHandle decrypt_pipe, mojo::ScopedDataPipeProducerHandle decrypted_pipe) = 0;


  using DecryptCallback = base::OnceCallback<void(media::Decryptor::Status, ::media::mojom::DecoderBufferPtr)>;
  
  virtual void Decrypt(media::Decryptor::StreamType stream_type, ::media::mojom::DecoderBufferPtr encrypted, DecryptCallback callback) = 0;

  
  virtual void CancelDecrypt(media::Decryptor::StreamType stream_type) = 0;


  using InitializeAudioDecoderCallback = base::OnceCallback<void(bool)>;
  
  virtual void InitializeAudioDecoder(const ::media::AudioDecoderConfig& config, InitializeAudioDecoderCallback callback) = 0;


  using InitializeVideoDecoderCallback = base::OnceCallback<void(bool)>;
  
  virtual void InitializeVideoDecoder(const media::VideoDecoderConfig& config, InitializeVideoDecoderCallback callback) = 0;


  using DecryptAndDecodeAudioCallback = base::OnceCallback<void(media::Decryptor::Status, std::vector<::media::mojom::AudioBufferPtr>)>;
  
  virtual void DecryptAndDecodeAudio(::media::mojom::DecoderBufferPtr encrypted, DecryptAndDecodeAudioCallback callback) = 0;


  using DecryptAndDecodeVideoCallback = base::OnceCallback<void(media::Decryptor::Status, const scoped_refptr<media::VideoFrame>&, FrameResourceReleaserPtr)>;
  
  virtual void DecryptAndDecodeVideo(::media::mojom::DecoderBufferPtr encrypted, DecryptAndDecodeVideoCallback callback) = 0;

  
  virtual void ResetDecoder(media::Decryptor::StreamType stream_type) = 0;

  
  virtual void DeinitializeDecoder(media::Decryptor::StreamType stream_type) = 0;
};

class FrameResourceReleaserProxy;

template <typename ImplRefTraits>
class FrameResourceReleaserStub;

class FrameResourceReleaserRequestValidator;


class  FrameResourceReleaser
    : public FrameResourceReleaserInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = FrameResourceReleaserInterfaceBase;
  using Proxy_ = FrameResourceReleaserProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameResourceReleaserStub<ImplRefTraits>;

  using RequestValidator_ = FrameResourceReleaserRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~FrameResourceReleaser() {}
};

class  DecryptorProxy
    : public Decryptor {
 public:
  using InterfaceType = Decryptor;

  explicit DecryptorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(mojo::ScopedDataPipeConsumerHandle audio_pipe, mojo::ScopedDataPipeConsumerHandle video_pipe, mojo::ScopedDataPipeConsumerHandle decrypt_pipe, mojo::ScopedDataPipeProducerHandle decrypted_pipe) final;
  void Decrypt(media::Decryptor::StreamType stream_type, ::media::mojom::DecoderBufferPtr encrypted, DecryptCallback callback) final;
  void CancelDecrypt(media::Decryptor::StreamType stream_type) final;
  void InitializeAudioDecoder(const ::media::AudioDecoderConfig& config, InitializeAudioDecoderCallback callback) final;
  void InitializeVideoDecoder(const media::VideoDecoderConfig& config, InitializeVideoDecoderCallback callback) final;
  void DecryptAndDecodeAudio(::media::mojom::DecoderBufferPtr encrypted, DecryptAndDecodeAudioCallback callback) final;
  void DecryptAndDecodeVideo(::media::mojom::DecoderBufferPtr encrypted, DecryptAndDecodeVideoCallback callback) final;
  void ResetDecoder(media::Decryptor::StreamType stream_type) final;
  void DeinitializeDecoder(media::Decryptor::StreamType stream_type) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  FrameResourceReleaserProxy
    : public FrameResourceReleaser {
 public:
  using InterfaceType = FrameResourceReleaser;

  explicit FrameResourceReleaserProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DecryptorStubDispatch {
 public:
  static bool Accept(Decryptor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Decryptor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Decryptor>>
class DecryptorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DecryptorStub() {}
  ~DecryptorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DecryptorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DecryptorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FrameResourceReleaserStubDispatch {
 public:
  static bool Accept(FrameResourceReleaser* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameResourceReleaser* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameResourceReleaser>>
class FrameResourceReleaserStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameResourceReleaserStub() {}
  ~FrameResourceReleaserStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameResourceReleaserStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameResourceReleaserStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DecryptorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FrameResourceReleaserRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DecryptorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_H_