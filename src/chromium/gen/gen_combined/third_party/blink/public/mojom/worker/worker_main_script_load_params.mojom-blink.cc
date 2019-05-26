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

#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-blink.h"

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

#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-params-data.h"
#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_MAIN_SCRIPT_LOAD_PARAMS_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_MAIN_SCRIPT_LOAD_PARAMS_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
WorkerMainScriptLoadParams::WorkerMainScriptLoadParams()
    : response_head(),
      url_loader_client_endpoints(),
      redirect_infos(),
      redirect_response_heads() {}

WorkerMainScriptLoadParams::WorkerMainScriptLoadParams(
    ::network::mojom::blink::URLResponseHeadPtr response_head_in,
    ::network::mojom::blink::URLLoaderClientEndpointsPtr url_loader_client_endpoints_in,
    WTF::Vector<::network::mojom::blink::URLRequestRedirectInfoPtr> redirect_infos_in,
    WTF::Vector<::network::mojom::blink::URLResponseHeadPtr> redirect_response_heads_in)
    : response_head(std::move(response_head_in)),
      url_loader_client_endpoints(std::move(url_loader_client_endpoints_in)),
      redirect_infos(std::move(redirect_infos_in)),
      redirect_response_heads(std::move(redirect_response_heads_in)) {}

WorkerMainScriptLoadParams::~WorkerMainScriptLoadParams() = default;

bool WorkerMainScriptLoadParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::WorkerMainScriptLoadParams::DataView, ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr>::Read(
    ::blink::mojom::blink::WorkerMainScriptLoadParams::DataView input,
    ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr result(::blink::mojom::blink::WorkerMainScriptLoadParams::New());
  
      if (!input.ReadResponseHead(&result->response_head))
        success = false;
      if (!input.ReadUrlLoaderClientEndpoints(&result->url_loader_client_endpoints))
        success = false;
      if (!input.ReadRedirectInfos(&result->redirect_infos))
        success = false;
      if (!input.ReadRedirectResponseHeads(&result->redirect_response_heads))
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