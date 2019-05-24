// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_REMOTING_COMMON_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_COMMON_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {
class RemotingSinkMetadataDataView;


enum class RemotingStopReason : int32_t;

enum class RemotingStartFailReason : int32_t;

enum class RemotingSinkFeature : int32_t;

enum class RemotingSinkAudioCapability : int32_t;

enum class RemotingSinkVideoCapability : int32_t;
class RemotingSinkMetadata;
using RemotingSinkMetadataPtr = mojo::StructPtr<RemotingSinkMetadata>;




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_REMOTING_COMMON_MOJOM_FORWARD_H_