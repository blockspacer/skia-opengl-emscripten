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

#include "media/mojo/interfaces/remoting_common.mojom.h"

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

#include "media/mojo/interfaces/remoting_common.mojom-params-data.h"
#include "media/mojo/interfaces/remoting_common.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/remoting_common.mojom-import-headers.h"


#ifndef MEDIA_MOJO_INTERFACES_REMOTING_COMMON_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_COMMON_MOJOM_JUMBO_H_
#endif
namespace media {
namespace mojom {
RemotingSinkMetadata::RemotingSinkMetadata()
    : features(),
      audio_capabilities(),
      video_capabilities(),
      friendly_name() {}

RemotingSinkMetadata::RemotingSinkMetadata(
    const std::vector<RemotingSinkFeature>& features_in,
    const std::vector<RemotingSinkAudioCapability>& audio_capabilities_in,
    const std::vector<RemotingSinkVideoCapability>& video_capabilities_in,
    const std::string& friendly_name_in)
    : features(std::move(features_in)),
      audio_capabilities(std::move(audio_capabilities_in)),
      video_capabilities(std::move(video_capabilities_in)),
      friendly_name(std::move(friendly_name_in)) {}

RemotingSinkMetadata::~RemotingSinkMetadata() = default;

bool RemotingSinkMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::RemotingSinkMetadata::DataView, ::media::mojom::RemotingSinkMetadataPtr>::Read(
    ::media::mojom::RemotingSinkMetadata::DataView input,
    ::media::mojom::RemotingSinkMetadataPtr* output) {
  bool success = true;
  ::media::mojom::RemotingSinkMetadataPtr result(::media::mojom::RemotingSinkMetadata::New());
  
      if (!input.ReadFeatures(&result->features))
        success = false;
      if (!input.ReadAudioCapabilities(&result->audio_capabilities))
        success = false;
      if (!input.ReadVideoCapabilities(&result->video_capabilities))
        success = false;
      if (!input.ReadFriendlyName(&result->friendly_name))
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