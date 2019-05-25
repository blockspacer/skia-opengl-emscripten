// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 772341301 value is based on sha256(salt + "DataPipeGetter1").
constexpr uint32_t kDataPipeGetter_Read_Name = 772341301;
// The 323355724 value is based on sha256(salt + "DataPipeGetter2").
constexpr uint32_t kDataPipeGetter_Clone_Name = 323355724;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_SHARED_MESSAGE_IDS_H_