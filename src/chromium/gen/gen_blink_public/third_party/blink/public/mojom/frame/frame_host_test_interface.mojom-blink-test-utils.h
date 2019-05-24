// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/frame/frame_host_test_interface.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT FrameHostTestInterfaceInterceptorForTesting : public FrameHostTestInterface {
  virtual FrameHostTestInterface* GetForwardingInterface() = 0;
  void Ping(const ::blink::KURL& source_url, const WTF::String& source_event) override;
  void GetName(GetNameCallback callback) override;
};
class PLATFORM_EXPORT FrameHostTestInterfaceAsyncWaiter {
 public:
  explicit FrameHostTestInterfaceAsyncWaiter(FrameHostTestInterface* proxy);
  ~FrameHostTestInterfaceAsyncWaiter();
  void GetName(
      WTF::String* out_name);

 private:
  FrameHostTestInterface* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameHostTestInterfaceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_BLINK_TEST_UTILS_H_