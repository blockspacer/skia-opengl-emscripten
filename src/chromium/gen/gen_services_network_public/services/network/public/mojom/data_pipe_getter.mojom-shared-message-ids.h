// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1961050381 value is based on sha256(salt + "DataPipeGetter1").
constexpr uint32_t kDataPipeGetter_Read_Name = 1961050381;
// The 2001677708 value is based on sha256(salt + "DataPipeGetter2").
constexpr uint32_t kDataPipeGetter_Clone_Name = 2001677708;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_SHARED_MESSAGE_IDS_H_