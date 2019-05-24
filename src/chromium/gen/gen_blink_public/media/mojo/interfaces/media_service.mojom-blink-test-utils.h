// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/media_service.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT MediaServiceInterceptorForTesting : public MediaService {
  virtual MediaService* GetForwardingInterface() = 0;
  void CreateInterfaceFactory(::media::mojom::blink::InterfaceFactoryRequest factory, ::service_manager::mojom::blink::InterfaceProviderPtr host_interfaces) override;
};
class BLINK_PLATFORM_EXPORT MediaServiceAsyncWaiter {
 public:
  explicit MediaServiceAsyncWaiter(MediaService* proxy);
  ~MediaServiceAsyncWaiter();

 private:
  MediaService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_BLINK_TEST_UTILS_H_