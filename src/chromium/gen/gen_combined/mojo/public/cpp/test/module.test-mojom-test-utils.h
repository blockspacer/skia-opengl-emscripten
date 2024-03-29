// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_TEST_UTILS_H_
#define MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_TEST_UTILS_H_

#include "mojo/public/cpp/test/module.test-mojom.h"


namespace test_module {


class  InterfaceInterceptorForTesting : public Interface {
  virtual Interface* GetForwardingInterface() = 0;
  void DoSomething() override;
  void DoSomethingElse(StructPtr s, DoSomethingElseCallback callback) override;
};
class  InterfaceAsyncWaiter {
 public:
  explicit InterfaceAsyncWaiter(Interface* proxy);
  ~InterfaceAsyncWaiter();
  void DoSomethingElse(
      StructPtr s, GlobalEnum* out_e);

 private:
  Interface* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InterfaceAsyncWaiter);
};




}  // namespace test_module

#endif  // MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_TEST_UTILS_H_