// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/cdm_service.mojom.h"


namespace media {
namespace mojom {


class  CdmServiceInterceptorForTesting : public CdmService {
  virtual CdmService* GetForwardingInterface() = 0;
  void LoadCdm(const base::FilePath& cdm_path) override;
  void CreateCdmFactory(::media::mojom::CdmFactoryRequest factory, ::service_manager::mojom::InterfaceProviderPtr host_interfaces) override;
};
class  CdmServiceAsyncWaiter {
 public:
  explicit CdmServiceAsyncWaiter(CdmService* proxy);
  ~CdmServiceAsyncWaiter();

 private:
  CdmService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CdmServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_TEST_UTILS_H_