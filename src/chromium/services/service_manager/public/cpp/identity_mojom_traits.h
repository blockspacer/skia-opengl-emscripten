// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_CPP_IDENTITY_STRUCT_TRAITS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_CPP_IDENTITY_STRUCT_TRAITS_H_

#include "base/component_export.h"
#include "services/service_manager/public/cpp/identity.h"
#include "services/service_manager/public/mojom/connector.mojom-shared.h"

namespace mojo {

template <>
struct COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_TRAITS)
    StructTraits<service_manager::mojom::IdentityDataView,
                 service_manager::Identity> {
  static const std::string& name(const service_manager::Identity& identity) {
    DCHECK(!identity.name().empty());
    return identity.name();
  }
  static const base::BaseToken& instance_group(
      const service_manager::Identity& identity) {
    return identity.instance_group();
  }
  static const base::BaseToken& instance_id(
      const service_manager::Identity& identity) {
    return identity.instance_id();
  }
  static const base::BaseToken& globally_unique_id(
      const service_manager::Identity& identity) {
    return identity.globally_unique_id();
  }

  static bool Read(service_manager::mojom::IdentityDataView data,
                   service_manager::Identity* out);
};

}  // namespace mojo

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_CPP_IDENTITY_STRUCT_TRAITS_H_
