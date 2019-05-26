// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/serial/serial.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT SerialServiceInterceptorForTesting : public SerialService {
  virtual SerialService* GetForwardingInterface() = 0;
  void GetPorts(GetPortsCallback callback) override;
  void RequestPort(std::vector<SerialPortFilterPtr> filters, RequestPortCallback callback) override;
  void GetPort(const base::UnguessableToken& token, ::device::mojom::SerialPortRequest port_request) override;
};
class BLINK_COMMON_EXPORT SerialServiceAsyncWaiter {
 public:
  explicit SerialServiceAsyncWaiter(SerialService* proxy);
  ~SerialServiceAsyncWaiter();
  void GetPorts(
      std::vector<SerialPortInfoPtr>* out_ports);
  void RequestPort(
      std::vector<SerialPortFilterPtr> filters, SerialPortInfoPtr* out_port);

 private:
  SerialService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SerialServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_TEST_UTILS_H_