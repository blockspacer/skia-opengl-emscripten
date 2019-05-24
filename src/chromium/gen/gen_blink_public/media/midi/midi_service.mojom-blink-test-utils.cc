// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "media/midi/midi_service.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"


#ifndef MEDIA_MIDI_MIDI_SERVICE_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MIDI_MIDI_SERVICE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif


namespace midi {
namespace mojom {
namespace blink {


void MidiSessionClientInterceptorForTesting::AddInputPort(PortInfoPtr info) {
  GetForwardingInterface()->AddInputPort(std::move(info));
}
void MidiSessionClientInterceptorForTesting::AddOutputPort(PortInfoPtr info) {
  GetForwardingInterface()->AddOutputPort(std::move(info));
}
void MidiSessionClientInterceptorForTesting::SetInputPortState(uint32_t port, PortState state) {
  GetForwardingInterface()->SetInputPortState(std::move(port), std::move(state));
}
void MidiSessionClientInterceptorForTesting::SetOutputPortState(uint32_t port, PortState state) {
  GetForwardingInterface()->SetOutputPortState(std::move(port), std::move(state));
}
void MidiSessionClientInterceptorForTesting::SessionStarted(Result result) {
  GetForwardingInterface()->SessionStarted(std::move(result));
}
void MidiSessionClientInterceptorForTesting::AcknowledgeSentData(uint32_t bytes) {
  GetForwardingInterface()->AcknowledgeSentData(std::move(bytes));
}
void MidiSessionClientInterceptorForTesting::DataReceived(uint32_t port, const WTF::Vector<uint8_t>& data, base::TimeTicks timestamp) {
  GetForwardingInterface()->DataReceived(std::move(port), std::move(data), std::move(timestamp));
}
MidiSessionClientAsyncWaiter::MidiSessionClientAsyncWaiter(
    MidiSessionClient* proxy) : proxy_(proxy) {}

MidiSessionClientAsyncWaiter::~MidiSessionClientAsyncWaiter() = default;




void MidiSessionProviderInterceptorForTesting::StartSession(MidiSessionRequest request, MidiSessionClientPtr client) {
  GetForwardingInterface()->StartSession(std::move(request), std::move(client));
}
MidiSessionProviderAsyncWaiter::MidiSessionProviderAsyncWaiter(
    MidiSessionProvider* proxy) : proxy_(proxy) {}

MidiSessionProviderAsyncWaiter::~MidiSessionProviderAsyncWaiter() = default;




void MidiSessionInterceptorForTesting::SendData(uint32_t port, const WTF::Vector<uint8_t>& data, base::TimeTicks timestamp) {
  GetForwardingInterface()->SendData(std::move(port), std::move(data), std::move(timestamp));
}
MidiSessionAsyncWaiter::MidiSessionAsyncWaiter(
    MidiSession* proxy) : proxy_(proxy) {}

MidiSessionAsyncWaiter::~MidiSessionAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace midi

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif