// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 932328851 value is based on sha256(salt + "CdmService1").
constexpr uint32_t kCdmService_LoadCdm_Name = 932328851;
// The 477889692 value is based on sha256(salt + "CdmService2").
constexpr uint32_t kCdmService_CreateCdmFactory_Name = 477889692;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_