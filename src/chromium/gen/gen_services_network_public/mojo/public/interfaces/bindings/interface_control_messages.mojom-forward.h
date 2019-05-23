// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "base/component_export.h"




namespace mojo {
namespace interface_control {
class RunMessageParamsDataView;

class RunResponseMessageParamsDataView;

class QueryVersionDataView;

class QueryVersionResultDataView;

class FlushForTestingDataView;

class RunOrClosePipeMessageParamsDataView;

class RequireVersionDataView;

class RunInputDataView;
class RunOutputDataView;
class RunOrClosePipeInputDataView;

constexpr uint32_t kRunMessageId = 0xFFFFFFFFU;

constexpr uint32_t kRunOrClosePipeMessageId = 0xFFFFFFFEU;
class RunMessageParams;
using RunMessageParamsPtr = mojo::StructPtr<RunMessageParams>;

class RunResponseMessageParams;
using RunResponseMessageParamsPtr = mojo::StructPtr<RunResponseMessageParams>;

class QueryVersion;
using QueryVersionPtr = mojo::InlinedStructPtr<QueryVersion>;

class QueryVersionResult;
using QueryVersionResultPtr = mojo::InlinedStructPtr<QueryVersionResult>;

class FlushForTesting;
using FlushForTestingPtr = mojo::InlinedStructPtr<FlushForTesting>;

class RunOrClosePipeMessageParams;
using RunOrClosePipeMessageParamsPtr = mojo::StructPtr<RunOrClosePipeMessageParams>;

class RequireVersion;
using RequireVersionPtr = mojo::InlinedStructPtr<RequireVersion>;

class RunInput;

typedef mojo::StructPtr<RunInput> RunInputPtr;

class RunOutput;

typedef mojo::StructPtr<RunOutput> RunOutputPtr;

class RunOrClosePipeInput;

typedef mojo::StructPtr<RunOrClosePipeInput> RunOrClosePipeInputPtr;




}  // namespace interface_control
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_FORWARD_H_