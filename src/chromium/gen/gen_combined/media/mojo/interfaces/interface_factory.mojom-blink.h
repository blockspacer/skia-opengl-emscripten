// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/interface_factory.mojom-shared.h"
#include "media/mojo/interfaces/interface_factory.mojom-blink-forward.h"
#include "media/mojo/interfaces/audio_decoder.mojom-blink-forward.h"
#include "media/mojo/interfaces/cdm_proxy.mojom-blink-forward.h"
#include "media/mojo/interfaces/decryptor.mojom-blink-forward.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-blink-forward.h"
#include "media/mojo/interfaces/renderer.mojom-blink-forward.h"
#include "media/mojo/interfaces/renderer_extensions.mojom-blink-forward.h"
#include "media/mojo/interfaces/video_decoder.mojom-blink-forward.h"
#include "mojo/public/mojom/base/token.mojom-blink-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink-forward.h"

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

class InterfaceFactoryProxy;

template <typename ImplRefTraits>
class InterfaceFactoryStub;

class InterfaceFactoryRequestValidator;


class BLINK_PLATFORM_EXPORT InterfaceFactory
    : public InterfaceFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = InterfaceFactoryInterfaceBase;
  using Proxy_ = InterfaceFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = InterfaceFactoryStub<ImplRefTraits>;

  using RequestValidator_ = InterfaceFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateAudioDecoderMinVersion = 0,
    kCreateVideoDecoderMinVersion = 0,
    kCreateDefaultRendererMinVersion = 0,
    kCreateCdmMinVersion = 0,
    kCreateDecryptorMinVersion = 0,
    kCreateCdmProxyMinVersion = 0,
  };
  virtual ~InterfaceFactory() {}

  
  virtual void CreateAudioDecoder(::media::mojom::blink::AudioDecoderRequest audio_decoder) = 0;

  
  virtual void CreateVideoDecoder(::media::mojom::blink::VideoDecoderRequest video_decoder) = 0;

  
  virtual void CreateDefaultRenderer(const WTF::String& audio_device_id, ::media::mojom::blink::RendererRequest renderer) = 0;

  
  virtual void CreateCdm(const WTF::String& key_system, ::media::mojom::blink::ContentDecryptionModuleRequest cdm) = 0;

  
  virtual void CreateDecryptor(int32_t cdm_id, ::media::mojom::blink::DecryptorRequest decryptor) = 0;

  
  virtual void CreateCdmProxy(::mojo_base::mojom::blink::TokenPtr cdm_guid, ::media::mojom::blink::CdmProxyRequest cdm_proxy) = 0;
};

class BLINK_PLATFORM_EXPORT InterfaceFactoryProxy
    : public InterfaceFactory {
 public:
  using InterfaceType = InterfaceFactory;

  explicit InterfaceFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateAudioDecoder(::media::mojom::blink::AudioDecoderRequest audio_decoder) final;
  void CreateVideoDecoder(::media::mojom::blink::VideoDecoderRequest video_decoder) final;
  void CreateDefaultRenderer(const WTF::String& audio_device_id, ::media::mojom::blink::RendererRequest renderer) final;
  void CreateCdm(const WTF::String& key_system, ::media::mojom::blink::ContentDecryptionModuleRequest cdm) final;
  void CreateDecryptor(int32_t cdm_id, ::media::mojom::blink::DecryptorRequest decryptor) final;
  void CreateCdmProxy(::mojo_base::mojom::blink::TokenPtr cdm_guid, ::media::mojom::blink::CdmProxyRequest cdm_proxy) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT InterfaceFactoryStubDispatch {
 public:
  static bool Accept(InterfaceFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InterfaceFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InterfaceFactory>>
class InterfaceFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InterfaceFactoryStub() {}
  ~InterfaceFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterfaceFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterfaceFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT InterfaceFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_BLINK_H_