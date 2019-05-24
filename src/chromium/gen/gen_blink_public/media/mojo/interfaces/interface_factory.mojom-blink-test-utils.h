// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/interface_factory.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT InterfaceFactoryInterceptorForTesting : public InterfaceFactory {
  virtual InterfaceFactory* GetForwardingInterface() = 0;
  void CreateAudioDecoder(::media::mojom::blink::AudioDecoderRequest audio_decoder) override;
  void CreateVideoDecoder(::media::mojom::blink::VideoDecoderRequest video_decoder) override;
  void CreateDefaultRenderer(const WTF::String& audio_device_id, ::media::mojom::blink::RendererRequest renderer) override;
  void CreateCdm(const WTF::String& key_system, ::media::mojom::blink::ContentDecryptionModuleRequest cdm) override;
  void CreateDecryptor(int32_t cdm_id, ::media::mojom::blink::DecryptorRequest decryptor) override;
  void CreateCdmProxy(::mojo_base::mojom::blink::TokenPtr cdm_guid, ::media::mojom::blink::CdmProxyRequest cdm_proxy) override;
};
class BLINK_PLATFORM_EXPORT InterfaceFactoryAsyncWaiter {
 public:
  explicit InterfaceFactoryAsyncWaiter(InterfaceFactory* proxy);
  ~InterfaceFactoryAsyncWaiter();

 private:
  InterfaceFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InterfaceFactoryAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_BLINK_TEST_UTILS_H_