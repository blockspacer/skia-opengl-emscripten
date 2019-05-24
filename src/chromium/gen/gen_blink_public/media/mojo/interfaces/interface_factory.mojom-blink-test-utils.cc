// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "media/mojo/interfaces/interface_factory.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/audio_decoder.mojom-blink.h"
#include "media/mojo/interfaces/cdm_proxy.mojom-blink.h"
#include "media/mojo/interfaces/decryptor.mojom-blink.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-blink.h"
#include "media/mojo/interfaces/renderer.mojom-blink.h"
#include "media/mojo/interfaces/renderer_extensions.mojom-blink.h"
#include "media/mojo/interfaces/video_decoder.mojom-blink.h"
#include "mojo/public/mojom/base/token.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_BLINK_JUMBO_H_
#endif


namespace media {
namespace mojom {
namespace blink {


void InterfaceFactoryInterceptorForTesting::CreateAudioDecoder(::media::mojom::blink::AudioDecoderRequest audio_decoder) {
  GetForwardingInterface()->CreateAudioDecoder(std::move(audio_decoder));
}
void InterfaceFactoryInterceptorForTesting::CreateVideoDecoder(::media::mojom::blink::VideoDecoderRequest video_decoder) {
  GetForwardingInterface()->CreateVideoDecoder(std::move(video_decoder));
}
void InterfaceFactoryInterceptorForTesting::CreateDefaultRenderer(const WTF::String& audio_device_id, ::media::mojom::blink::RendererRequest renderer) {
  GetForwardingInterface()->CreateDefaultRenderer(std::move(audio_device_id), std::move(renderer));
}
void InterfaceFactoryInterceptorForTesting::CreateCdm(const WTF::String& key_system, ::media::mojom::blink::ContentDecryptionModuleRequest cdm) {
  GetForwardingInterface()->CreateCdm(std::move(key_system), std::move(cdm));
}
void InterfaceFactoryInterceptorForTesting::CreateDecryptor(int32_t cdm_id, ::media::mojom::blink::DecryptorRequest decryptor) {
  GetForwardingInterface()->CreateDecryptor(std::move(cdm_id), std::move(decryptor));
}
void InterfaceFactoryInterceptorForTesting::CreateCdmProxy(::mojo_base::mojom::blink::TokenPtr cdm_guid, ::media::mojom::blink::CdmProxyRequest cdm_proxy) {
  GetForwardingInterface()->CreateCdmProxy(std::move(cdm_guid), std::move(cdm_proxy));
}
InterfaceFactoryAsyncWaiter::InterfaceFactoryAsyncWaiter(
    InterfaceFactory* proxy) : proxy_(proxy) {}

InterfaceFactoryAsyncWaiter::~InterfaceFactoryAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif