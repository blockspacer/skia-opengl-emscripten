// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_CPP_CONSTANTS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_CPP_CONSTANTS_H_

#include "base/component_export.h"
#include "base/base_token.h"

namespace service_manager {

extern COMPONENT_EXPORT(SERVICE_MANAGER_CPP) const base::BaseToken
    kSystemInstanceGroup;

}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_CPP_CONSTANTS_H_
