// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1020683870 value is based on sha256(salt + "InterfaceFactory1").
constexpr uint32_t kInterfaceFactory_CreateAudioDecoder_Name = 1020683870;
// The 1315637556 value is based on sha256(salt + "InterfaceFactory2").
constexpr uint32_t kInterfaceFactory_CreateVideoDecoder_Name = 1315637556;
// The 494496561 value is based on sha256(salt + "InterfaceFactory3").
constexpr uint32_t kInterfaceFactory_CreateDefaultRenderer_Name = 494496561;
// The 1629274453 value is based on sha256(salt + "InterfaceFactory4").
constexpr uint32_t kInterfaceFactory_CreateCdm_Name = 1629274453;
// The 1541629132 value is based on sha256(salt + "InterfaceFactory5").
constexpr uint32_t kInterfaceFactory_CreateDecryptor_Name = 1541629132;
// The 956111625 value is based on sha256(salt + "InterfaceFactory6").
constexpr uint32_t kInterfaceFactory_CreateCdmProxy_Name = 956111625;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_