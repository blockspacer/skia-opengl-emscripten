// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "base/component_export.h"




namespace mojo {
namespace pipe_control {
class RunOrClosePipeMessageParamsDataView;

class DisconnectReasonDataView;

class PeerAssociatedEndpointClosedEventDataView;

class RunOrClosePipeInputDataView;

constexpr uint32_t kRunOrClosePipeMessageId = 0xFFFFFFFEU;
class RunOrClosePipeMessageParams;
using RunOrClosePipeMessageParamsPtr = mojo::StructPtr<RunOrClosePipeMessageParams>;

class DisconnectReason;
using DisconnectReasonPtr = mojo::InlinedStructPtr<DisconnectReason>;

class PeerAssociatedEndpointClosedEvent;
using PeerAssociatedEndpointClosedEventPtr = mojo::StructPtr<PeerAssociatedEndpointClosedEvent>;

class RunOrClosePipeInput;

typedef mojo::StructPtr<RunOrClosePipeInput> RunOrClosePipeInputPtr;




}  // namespace pipe_control
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_FORWARD_H_