// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_BLINK_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
}  // namespace media
}  // namespace mojom


namespace media {
namespace mojom {
namespace blink {
class ReadWriteAudioDataPipe;
using ReadWriteAudioDataPipePtr = mojo::StructPtr<ReadWriteAudioDataPipe>;

class ReadOnlyAudioDataPipe;
using ReadOnlyAudioDataPipePtr = mojo::StructPtr<ReadOnlyAudioDataPipe>;




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_BLINK_FORWARD_H_