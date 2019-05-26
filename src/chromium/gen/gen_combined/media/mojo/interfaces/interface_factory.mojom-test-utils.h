// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/interface_factory.mojom.h"


namespace media {
namespace mojom {


class  InterfaceFactoryInterceptorForTesting : public InterfaceFactory {
  virtual InterfaceFactory* GetForwardingInterface() = 0;
  void CreateAudioDecoder(::media::mojom::AudioDecoderRequest audio_decoder) override;
  void CreateVideoDecoder(::media::mojom::VideoDecoderRequest video_decoder) override;
  void CreateDefaultRenderer(const std::string& audio_device_id, ::media::mojom::RendererRequest renderer) override;
  void CreateCdm(const std::string& key_system, ::media::mojom::ContentDecryptionModuleRequest cdm) override;
  void CreateDecryptor(int32_t cdm_id, ::media::mojom::DecryptorRequest decryptor) override;
  void CreateCdmProxy(const base::Token& cdm_guid, ::media::mojom::CdmProxyRequest cdm_proxy) override;
};
class  InterfaceFactoryAsyncWaiter {
 public:
  explicit InterfaceFactoryAsyncWaiter(InterfaceFactory* proxy);
  ~InterfaceFactoryAsyncWaiter();

 private:
  InterfaceFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InterfaceFactoryAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_TEST_UTILS_H_