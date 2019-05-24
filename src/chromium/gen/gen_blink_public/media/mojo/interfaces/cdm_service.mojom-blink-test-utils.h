// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/cdm_service.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT CdmServiceInterceptorForTesting : public CdmService {
  virtual CdmService* GetForwardingInterface() = 0;
  void LoadCdm(const base::FilePath& cdm_path) override;
  void CreateCdmFactory(::media::mojom::blink::CdmFactoryRequest factory, ::service_manager::mojom::blink::InterfaceProviderPtr host_interfaces) override;
};
class BLINK_PLATFORM_EXPORT CdmServiceAsyncWaiter {
 public:
  explicit CdmServiceAsyncWaiter(CdmService* proxy);
  ~CdmServiceAsyncWaiter();

 private:
  CdmService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CdmServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_BLINK_TEST_UTILS_H_