// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 66275089 value is based on sha256(salt + "InterfaceFactory1").
constexpr uint32_t kInterfaceFactory_CreateAudioDecoder_Name = 66275089;
// The 181759656 value is based on sha256(salt + "InterfaceFactory2").
constexpr uint32_t kInterfaceFactory_CreateVideoDecoder_Name = 181759656;
// The 8729640 value is based on sha256(salt + "InterfaceFactory3").
constexpr uint32_t kInterfaceFactory_CreateDefaultRenderer_Name = 8729640;
// The 1620884047 value is based on sha256(salt + "InterfaceFactory4").
constexpr uint32_t kInterfaceFactory_CreateCdm_Name = 1620884047;
// The 847542670 value is based on sha256(salt + "InterfaceFactory5").
constexpr uint32_t kInterfaceFactory_CreateDecryptor_Name = 847542670;
// The 1820771334 value is based on sha256(salt + "InterfaceFactory6").
constexpr uint32_t kInterfaceFactory_CreateCdmProxy_Name = 1820771334;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_