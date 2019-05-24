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

#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom-blink.h"

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

#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom-params-data.h"
#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_INFO_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_INFO_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
SharedWorkerInfo::SharedWorkerInfo()
    : url(),
      name(),
      content_security_policy(),
      content_security_policy_type(),
      creation_address_space() {}

SharedWorkerInfo::SharedWorkerInfo(
    const ::blink::KURL& url_in,
    const WTF::String& name_in,
    const WTF::String& content_security_policy_in,
    ::blink::mojom::blink::ContentSecurityPolicyType content_security_policy_type_in,
    ::blink::mojom::blink::IPAddressSpace creation_address_space_in)
    : url(std::move(url_in)),
      name(std::move(name_in)),
      content_security_policy(std::move(content_security_policy_in)),
      content_security_policy_type(std::move(content_security_policy_type_in)),
      creation_address_space(std::move(creation_address_space_in)) {}

SharedWorkerInfo::~SharedWorkerInfo() = default;

bool SharedWorkerInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::SharedWorkerInfo::DataView, ::blink::mojom::blink::SharedWorkerInfoPtr>::Read(
    ::blink::mojom::blink::SharedWorkerInfo::DataView input,
    ::blink::mojom::blink::SharedWorkerInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::SharedWorkerInfoPtr result(::blink::mojom::blink::SharedWorkerInfo::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadContentSecurityPolicy(&result->content_security_policy))
        success = false;
      if (!input.ReadContentSecurityPolicyType(&result->content_security_policy_type))
        success = false;
      if (!input.ReadCreationAddressSpace(&result->creation_address_space))
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