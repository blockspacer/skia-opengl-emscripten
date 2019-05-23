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

#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom.h"

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

#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom-params-data.h"
#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_USER_AGENT_USER_AGENT_METADATA_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_USER_AGENT_USER_AGENT_METADATA_MOJOM_JUMBO_H_
#endif
namespace blink {
namespace mojom {
UserAgentMetadata::UserAgentMetadata()
    : brand(),
      full_version(),
      major_version(),
      platform(),
      architecture(),
      model() {}

UserAgentMetadata::UserAgentMetadata(
    const std::string& brand_in,
    const std::string& full_version_in,
    const std::string& major_version_in,
    const std::string& platform_in,
    const std::string& architecture_in,
    const std::string& model_in)
    : brand(std::move(brand_in)),
      full_version(std::move(full_version_in)),
      major_version(std::move(major_version_in)),
      platform(std::move(platform_in)),
      architecture(std::move(architecture_in)),
      model(std::move(model_in)) {}

UserAgentMetadata::~UserAgentMetadata() = default;

bool UserAgentMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::UserAgentMetadata::DataView, ::blink::mojom::UserAgentMetadataPtr>::Read(
    ::blink::mojom::UserAgentMetadata::DataView input,
    ::blink::mojom::UserAgentMetadataPtr* output) {
  bool success = true;
  ::blink::mojom::UserAgentMetadataPtr result(::blink::mojom::UserAgentMetadata::New());
  
      if (!input.ReadBrand(&result->brand))
        success = false;
      if (!input.ReadFullVersion(&result->full_version))
        success = false;
      if (!input.ReadMajorVersion(&result->major_version))
        success = false;
      if (!input.ReadPlatform(&result->platform))
        success = false;
      if (!input.ReadArchitecture(&result->architecture))
        success = false;
      if (!input.ReadModel(&result->model))
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