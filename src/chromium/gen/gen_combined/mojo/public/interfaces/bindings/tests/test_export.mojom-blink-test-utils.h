// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_BLINK_TEST_UTILS_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_BLINK_TEST_UTILS_H_

#include "mojo/public/interfaces/bindings/tests/test_export.mojom-blink.h"
#include "mojo/public/cpp/bindings/tests/mojo_test_blink_export.h"


namespace mojo {
namespace test {
namespace test_export {
namespace blink {


class MOJO_TEST_BLINK_EXPORT ExportedInterfaceInterceptorForTesting : public ExportedInterface {
  virtual ExportedInterface* GetForwardingInterface() = 0;
};
class MOJO_TEST_BLINK_EXPORT ExportedInterfaceAsyncWaiter {
 public:
  explicit ExportedInterfaceAsyncWaiter(ExportedInterface* proxy);
  ~ExportedInterfaceAsyncWaiter();

 private:
  ExportedInterface* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ExportedInterfaceAsyncWaiter);
};




}  // namespace blink
}  // namespace test_export
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_BLINK_TEST_UTILS_H_