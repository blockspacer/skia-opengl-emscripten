// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_PARAMETERS_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_PARAMETERS_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {
using AudioParametersDataView = mojo::native::NativeStructDataView;

using AudioParameters = mojo::native::NativeStruct;
using AudioParametersPtr = mojo::native::NativeStructPtr;




}  // namespace mojom
}  // namespace media
#include "media/base/audio_parameters.h"

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_PARAMETERS_MOJOM_FORWARD_H_