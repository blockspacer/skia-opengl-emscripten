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

#include "services/network/public/mojom/origin_policy_manager.mojom-blink.h"

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

#include "services/network/public/mojom/origin_policy_manager.mojom-params-data.h"
#include "services/network/public/mojom/origin_policy_manager.mojom-shared-message-ids.h"

#include "services/network/public/mojom/origin_policy_manager.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif
namespace network {
namespace mojom {
namespace blink {
OriginPolicyContents::OriginPolicyContents()
    : features(),
      content_security_policies(),
      content_security_policies_report_only() {}

OriginPolicyContents::OriginPolicyContents(
    const WTF::Vector<WTF::String>& features_in,
    const WTF::Vector<WTF::String>& content_security_policies_in,
    const WTF::Vector<WTF::String>& content_security_policies_report_only_in)
    : features(std::move(features_in)),
      content_security_policies(std::move(content_security_policies_in)),
      content_security_policies_report_only(std::move(content_security_policies_report_only_in)) {}

OriginPolicyContents::~OriginPolicyContents() = default;

bool OriginPolicyContents::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
OriginPolicy::OriginPolicy()
    : state(),
      policy_url(),
      contents() {}

OriginPolicy::OriginPolicy(
    OriginPolicyState state_in,
    const ::blink::KURL& policy_url_in,
    OriginPolicyContentsPtr contents_in)
    : state(std::move(state_in)),
      policy_url(std::move(policy_url_in)),
      contents(std::move(contents_in)) {}

OriginPolicy::~OriginPolicy() = default;

bool OriginPolicy::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char OriginPolicyManager::Name_[] = "network.mojom.OriginPolicyManager";

OriginPolicyManagerProxy::OriginPolicyManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool OriginPolicyManagerStubDispatch::Accept(
    OriginPolicyManager* impl,
    mojo::Message* message) {
  return false;
}

// static
bool OriginPolicyManagerStubDispatch::AcceptWithResponder(
    OriginPolicyManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool OriginPolicyManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "OriginPolicyManager RequestValidator");

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::OriginPolicyContents::DataView, ::network::mojom::blink::OriginPolicyContentsPtr>::Read(
    ::network::mojom::blink::OriginPolicyContents::DataView input,
    ::network::mojom::blink::OriginPolicyContentsPtr* output) {
  bool success = true;
  ::network::mojom::blink::OriginPolicyContentsPtr result(::network::mojom::blink::OriginPolicyContents::New());
  
      if (!input.ReadFeatures(&result->features))
        success = false;
      if (!input.ReadContentSecurityPolicies(&result->content_security_policies))
        success = false;
      if (!input.ReadContentSecurityPoliciesReportOnly(&result->content_security_policies_report_only))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::OriginPolicy::DataView, ::network::mojom::blink::OriginPolicyPtr>::Read(
    ::network::mojom::blink::OriginPolicy::DataView input,
    ::network::mojom::blink::OriginPolicyPtr* output) {
  bool success = true;
  ::network::mojom::blink::OriginPolicyPtr result(::network::mojom::blink::OriginPolicy::New());
  
      if (!input.ReadState(&result->state))
        success = false;
      if (!input.ReadPolicyUrl(&result->policy_url))
        success = false;
      if (!input.ReadContents(&result->contents))
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