// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {
class TimeDataView;

class TimeDeltaDataView;

class TimeTicksDataView;

class Time;
using TimePtr = mojo::InlinedStructPtr<Time>;

class TimeDelta;
using TimeDeltaPtr = mojo::InlinedStructPtr<TimeDelta>;

class TimeTicks;
using TimeTicksPtr = mojo::InlinedStructPtr<TimeTicks>;




}  // namespace mojom
}  // namespace mojo_base
#include "base/time/time.h"

#endif  // MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_FORWARD_H_