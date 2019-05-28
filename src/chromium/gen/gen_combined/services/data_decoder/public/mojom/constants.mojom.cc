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

#include "services/data_decoder/public/mojom/constants.mojom.h"

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

#include "services/data_decoder/public/mojom/constants.mojom-params-data.h"
#include "services/data_decoder/public/mojom/constants.mojom-shared-message-ids.h"

#include "services/data_decoder/public/mojom/constants.mojom-import-headers.h"


#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_CONSTANTS_MOJOM_JUMBO_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_CONSTANTS_MOJOM_JUMBO_H_
#endif
namespace data_decoder {
namespace mojom {
const char kServiceName[] = "data_decoder";
}  // namespace mojom
}  // namespace data_decoder

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif