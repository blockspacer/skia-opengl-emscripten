// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "content/public/common/service_names.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "content/public/common/service_names.mojom-params-data.h"
#include "content/public/common/service_names.mojom-shared-message-ids.h"

#include "content/public/common/service_names.mojom-import-headers.h"


#ifndef CONTENT_PUBLIC_COMMON_SERVICE_NAMES_MOJOM_JUMBO_H_
#define CONTENT_PUBLIC_COMMON_SERVICE_NAMES_MOJOM_JUMBO_H_
#endif
namespace content {
namespace mojom {
const char kBrowserServiceName[] = "content_browser";
const char kGpuServiceName[] = "content_gpu";
const char kPackagedServicesServiceName[] = "content_packaged_services";
const char kPluginServiceName[] = "content_plugin";
const char kRendererServiceName[] = "content_renderer";
const char kUtilityServiceName[] = "content_utility";
const char kNetworkServiceName[] = "network";
}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif