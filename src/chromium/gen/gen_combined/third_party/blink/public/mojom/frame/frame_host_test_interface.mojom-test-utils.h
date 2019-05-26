// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/frame/frame_host_test_interface.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT FrameHostTestInterfaceInterceptorForTesting : public FrameHostTestInterface {
  virtual FrameHostTestInterface* GetForwardingInterface() = 0;
  void Ping(const GURL& source_url, const std::string& source_event) override;
  void GetName(GetNameCallback callback) override;
};
class BLINK_COMMON_EXPORT FrameHostTestInterfaceAsyncWaiter {
 public:
  explicit FrameHostTestInterfaceAsyncWaiter(FrameHostTestInterface* proxy);
  ~FrameHostTestInterfaceAsyncWaiter();
  void GetName(
      std::string* out_name);

 private:
  FrameHostTestInterface* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameHostTestInterfaceAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_TEST_UTILS_H_