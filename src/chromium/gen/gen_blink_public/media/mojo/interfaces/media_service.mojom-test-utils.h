// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/media_service.mojom.h"


namespace media {
namespace mojom {


class  MediaServiceInterceptorForTesting : public MediaService {
  virtual MediaService* GetForwardingInterface() = 0;
  void CreateInterfaceFactory(::media::mojom::InterfaceFactoryRequest factory, ::service_manager::mojom::InterfaceProviderPtr host_interfaces) override;
};
class  MediaServiceAsyncWaiter {
 public:
  explicit MediaServiceAsyncWaiter(MediaService* proxy);
  ~MediaServiceAsyncWaiter();

 private:
  MediaService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_TEST_UTILS_H_