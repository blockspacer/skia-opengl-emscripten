// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/serial.mojom.h"


namespace device {
namespace mojom {


class  SerialPortManagerInterceptorForTesting : public SerialPortManager {
  virtual SerialPortManager* GetForwardingInterface() = 0;
  void GetDevices(GetDevicesCallback callback) override;
  void GetPort(const base::UnguessableToken& token, SerialPortRequest port_request, SerialPortConnectionWatcherPtr watcher) override;
};
class  SerialPortManagerAsyncWaiter {
 public:
  explicit SerialPortManagerAsyncWaiter(SerialPortManager* proxy);
  ~SerialPortManagerAsyncWaiter();
  void GetDevices(
      std::vector<SerialPortInfoPtr>* out_devices);

 private:
  SerialPortManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SerialPortManagerAsyncWaiter);
};


class  SerialPortInterceptorForTesting : public SerialPort {
  virtual SerialPort* GetForwardingInterface() = 0;
  void Open(SerialConnectionOptionsPtr options, mojo::ScopedDataPipeConsumerHandle in_stream, mojo::ScopedDataPipeProducerHandle out_stream, SerialPortClientAssociatedPtrInfo client, OpenCallback callback) override;
  void ClearSendError(mojo::ScopedDataPipeConsumerHandle consumer) override;
  void ClearReadError(mojo::ScopedDataPipeProducerHandle producer) override;
  void Flush(FlushCallback callback) override;
  void GetControlSignals(GetControlSignalsCallback callback) override;
  void SetControlSignals(SerialHostControlSignalsPtr signals, SetControlSignalsCallback callback) override;
  void ConfigurePort(SerialConnectionOptionsPtr options, ConfigurePortCallback callback) override;
  void GetPortInfo(GetPortInfoCallback callback) override;
  void SetBreak(SetBreakCallback callback) override;
  void ClearBreak(ClearBreakCallback callback) override;
};
class  SerialPortAsyncWaiter {
 public:
  explicit SerialPortAsyncWaiter(SerialPort* proxy);
  ~SerialPortAsyncWaiter();
  void Open(
      SerialConnectionOptionsPtr options, mojo::ScopedDataPipeConsumerHandle in_stream, mojo::ScopedDataPipeProducerHandle out_stream, SerialPortClientAssociatedPtrInfo client, bool* out_success);
  void Flush(
      bool* out_success);
  void GetControlSignals(
      SerialPortControlSignalsPtr* out_signals);
  void SetControlSignals(
      SerialHostControlSignalsPtr signals, bool* out_success);
  void ConfigurePort(
      SerialConnectionOptionsPtr options, bool* out_success);
  void GetPortInfo(
      SerialConnectionInfoPtr* out_info);
  void SetBreak(
      bool* out_success);
  void ClearBreak(
      bool* out_success);

 private:
  SerialPort* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SerialPortAsyncWaiter);
};


class  SerialPortClientInterceptorForTesting : public SerialPortClient {
  virtual SerialPortClient* GetForwardingInterface() = 0;
  void OnReadError(SerialReceiveError error) override;
  void OnSendError(SerialSendError error) override;
};
class  SerialPortClientAsyncWaiter {
 public:
  explicit SerialPortClientAsyncWaiter(SerialPortClient* proxy);
  ~SerialPortClientAsyncWaiter();

 private:
  SerialPortClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SerialPortClientAsyncWaiter);
};


class  SerialPortConnectionWatcherInterceptorForTesting : public SerialPortConnectionWatcher {
  virtual SerialPortConnectionWatcher* GetForwardingInterface() = 0;
};
class  SerialPortConnectionWatcherAsyncWaiter {
 public:
  explicit SerialPortConnectionWatcherAsyncWaiter(SerialPortConnectionWatcher* proxy);
  ~SerialPortConnectionWatcherAsyncWaiter();

 private:
  SerialPortConnectionWatcher* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SerialPortConnectionWatcherAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_TEST_UTILS_H_