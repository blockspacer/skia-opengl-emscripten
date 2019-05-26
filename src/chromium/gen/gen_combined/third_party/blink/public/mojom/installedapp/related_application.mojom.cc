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

#include "third_party/blink/public/mojom/installedapp/related_application.mojom.h"

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

#include "third_party/blink/public/mojom/installedapp/related_application.mojom-params-data.h"
#include "third_party/blink/public/mojom/installedapp/related_application.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/installedapp/related_application.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_RELATED_APPLICATION_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_RELATED_APPLICATION_MOJOM_JUMBO_H_
#endif
namespace blink {
namespace mojom {
RelatedApplication::RelatedApplication()
    : platform(),
      url(),
      id() {}

RelatedApplication::RelatedApplication(
    const std::string& platform_in,
    const base::Optional<std::string>& url_in,
    const base::Optional<std::string>& id_in)
    : platform(std::move(platform_in)),
      url(std::move(url_in)),
      id(std::move(id_in)) {}

RelatedApplication::~RelatedApplication() = default;

bool RelatedApplication::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::RelatedApplication::DataView, ::blink::mojom::RelatedApplicationPtr>::Read(
    ::blink::mojom::RelatedApplication::DataView input,
    ::blink::mojom::RelatedApplicationPtr* output) {
  bool success = true;
  ::blink::mojom::RelatedApplicationPtr result(::blink::mojom::RelatedApplication::New());
  
      if (!input.ReadPlatform(&result->platform))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif