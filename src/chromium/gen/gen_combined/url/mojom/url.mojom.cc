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

#include "url/mojom/url.mojom.h"

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

#include "url/mojom/url.mojom-params-data.h"
#include "url/mojom/url.mojom-shared-message-ids.h"

#include "url/mojom/url.mojom-import-headers.h"


#ifndef URL_MOJOM_URL_MOJOM_JUMBO_H_
#define URL_MOJOM_URL_MOJOM_JUMBO_H_
#endif
namespace url {
namespace mojom {
Url::Url()
    : url() {}

Url::Url(
    const std::string& url_in)
    : url(std::move(url_in)) {}

Url::~Url() = default;

bool Url::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace url

namespace mojo {


// static
bool StructTraits<::url::mojom::Url::DataView, ::url::mojom::UrlPtr>::Read(
    ::url::mojom::Url::DataView input,
    ::url::mojom::UrlPtr* output) {
  bool success = true;
  ::url::mojom::UrlPtr result(::url::mojom::Url::New());
  
      if (!input.ReadUrl(&result->url))
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