// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_BEGIN_FRAME_ARGS_MOJOM_BLINK_FORWARD_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_BEGIN_FRAME_ARGS_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace viz {
namespace mojom {

enum class BeginFrameArgsType : int32_t;
}  // namespace viz
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct viz_mojom_internal_BeginFrameArgsType_DataHashFn;

template <>
struct DefaultHash<::viz::mojom::BeginFrameArgsType> {
  using Hash = viz_mojom_internal_BeginFrameArgsType_DataHashFn;
};
}  // namespace WTF


namespace viz {
namespace mojom {
namespace blink {
using BeginFrameArgsType = BeginFrameArgsType;  // Alias for definition in the parent namespace.
class BeginFrameArgs;
using BeginFrameArgsPtr = mojo::StructPtr<BeginFrameArgs>;

class BeginFrameAck;
using BeginFrameAckPtr = mojo::InlinedStructPtr<BeginFrameAck>;




}  // namespace blink
}  // namespace mojom
}  // namespace viz
#include "components/viz/common/frame_sinks/begin_frame_args.h"

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_BEGIN_FRAME_ARGS_MOJOM_BLINK_FORWARD_H_