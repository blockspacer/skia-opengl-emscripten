// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 2074356776 value is based on sha256(salt + "ChunkedDataPipeGetter1").
constexpr uint32_t kChunkedDataPipeGetter_GetSize_Name = 2074356776;
// The 124892306 value is based on sha256(salt + "ChunkedDataPipeGetter2").
constexpr uint32_t kChunkedDataPipeGetter_StartReading_Name = 124892306;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_SHARED_MESSAGE_IDS_H_