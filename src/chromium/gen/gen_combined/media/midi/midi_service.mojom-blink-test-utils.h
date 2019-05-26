// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MIDI_MIDI_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MIDI_MIDI_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "media/midi/midi_service.mojom-blink.h"


namespace midi {
namespace mojom {
namespace blink {


class  MidiSessionClientInterceptorForTesting : public MidiSessionClient {
  virtual MidiSessionClient* GetForwardingInterface() = 0;
  void AddInputPort(PortInfoPtr info) override;
  void AddOutputPort(PortInfoPtr info) override;
  void SetInputPortState(uint32_t port, PortState state) override;
  void SetOutputPortState(uint32_t port, PortState state) override;
  void SessionStarted(Result result) override;
  void AcknowledgeSentData(uint32_t bytes) override;
  void DataReceived(uint32_t port, const WTF::Vector<uint8_t>& data, base::TimeTicks timestamp) override;
};
class  MidiSessionClientAsyncWaiter {
 public:
  explicit MidiSessionClientAsyncWaiter(MidiSessionClient* proxy);
  ~MidiSessionClientAsyncWaiter();

 private:
  MidiSessionClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MidiSessionClientAsyncWaiter);
};


class  MidiSessionProviderInterceptorForTesting : public MidiSessionProvider {
  virtual MidiSessionProvider* GetForwardingInterface() = 0;
  void StartSession(MidiSessionRequest request, MidiSessionClientPtr client) override;
};
class  MidiSessionProviderAsyncWaiter {
 public:
  explicit MidiSessionProviderAsyncWaiter(MidiSessionProvider* proxy);
  ~MidiSessionProviderAsyncWaiter();

 private:
  MidiSessionProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MidiSessionProviderAsyncWaiter);
};


class  MidiSessionInterceptorForTesting : public MidiSession {
  virtual MidiSession* GetForwardingInterface() = 0;
  void SendData(uint32_t port, const WTF::Vector<uint8_t>& data, base::TimeTicks timestamp) override;
};
class  MidiSessionAsyncWaiter {
 public:
  explicit MidiSessionAsyncWaiter(MidiSession* proxy);
  ~MidiSessionAsyncWaiter();

 private:
  MidiSession* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MidiSessionAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace midi

#endif  // MEDIA_MIDI_MIDI_SERVICE_MOJOM_BLINK_TEST_UTILS_H_