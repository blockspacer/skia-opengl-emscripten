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


#include "media/mojo/interfaces/interface_factory.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/mojo/interfaces/audio_decoder.mojom.h"
#include "media/mojo/interfaces/cdm_proxy.mojom.h"
#include "media/mojo/interfaces/decryptor.mojom.h"
#include "media/mojo/interfaces/content_decryption_module.mojom.h"
#include "media/mojo/interfaces/renderer.mojom.h"
#include "media/mojo/interfaces/renderer_extensions.mojom.h"
#include "media/mojo/interfaces/video_decoder.mojom.h"
#include "mojo/public/mojom/base/token.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/token_mojom_traits.h"
#endif


namespace media {
namespace mojom {


void InterfaceFactoryInterceptorForTesting::CreateAudioDecoder(::media::mojom::AudioDecoderRequest audio_decoder) {
  GetForwardingInterface()->CreateAudioDecoder(std::move(audio_decoder));
}
void InterfaceFactoryInterceptorForTesting::CreateVideoDecoder(::media::mojom::VideoDecoderRequest video_decoder) {
  GetForwardingInterface()->CreateVideoDecoder(std::move(video_decoder));
}
void InterfaceFactoryInterceptorForTesting::CreateDefaultRenderer(const std::string& audio_device_id, ::media::mojom::RendererRequest renderer) {
  GetForwardingInterface()->CreateDefaultRenderer(std::move(audio_device_id), std::move(renderer));
}
void InterfaceFactoryInterceptorForTesting::CreateCdm(const std::string& key_system, ::media::mojom::ContentDecryptionModuleRequest cdm) {
  GetForwardingInterface()->CreateCdm(std::move(key_system), std::move(cdm));
}
void InterfaceFactoryInterceptorForTesting::CreateDecryptor(int32_t cdm_id, ::media::mojom::DecryptorRequest decryptor) {
  GetForwardingInterface()->CreateDecryptor(std::move(cdm_id), std::move(decryptor));
}
void InterfaceFactoryInterceptorForTesting::CreateCdmProxy(const base::BaseToken& cdm_guid, ::media::mojom::CdmProxyRequest cdm_proxy) {
  GetForwardingInterface()->CreateCdmProxy(std::move(cdm_guid), std::move(cdm_proxy));
}
InterfaceFactoryAsyncWaiter::InterfaceFactoryAsyncWaiter(
    InterfaceFactory* proxy) : proxy_(proxy) {}

InterfaceFactoryAsyncWaiter::~InterfaceFactoryAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
