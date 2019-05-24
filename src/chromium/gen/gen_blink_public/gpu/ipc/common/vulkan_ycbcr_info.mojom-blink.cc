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

#include "gpu/ipc/common/vulkan_ycbcr_info.mojom-blink.h"

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

#include "gpu/ipc/common/vulkan_ycbcr_info.mojom-params-data.h"
#include "gpu/ipc/common/vulkan_ycbcr_info.mojom-shared-message-ids.h"

#include "gpu/ipc/common/vulkan_ycbcr_info.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef GPU_IPC_COMMON_VULKAN_YCBCR_INFO_MOJOM_BLINK_JUMBO_H_
#define GPU_IPC_COMMON_VULKAN_YCBCR_INFO_MOJOM_BLINK_JUMBO_H_
#endif
namespace gpu {
namespace mojom {
namespace blink {
VulkanYCbCrInfo::VulkanYCbCrInfo()
    : suggested_ycbcr_model(),
      suggested_ycbcr_range(),
      suggested_xchroma_offset(),
      suggested_ychroma_offset(),
      external_format(),
      format_features() {}

VulkanYCbCrInfo::VulkanYCbCrInfo(
    uint32_t suggested_ycbcr_model_in,
    uint32_t suggested_ycbcr_range_in,
    uint32_t suggested_xchroma_offset_in,
    uint32_t suggested_ychroma_offset_in,
    uint64_t external_format_in,
    uint32_t format_features_in)
    : suggested_ycbcr_model(std::move(suggested_ycbcr_model_in)),
      suggested_ycbcr_range(std::move(suggested_ycbcr_range_in)),
      suggested_xchroma_offset(std::move(suggested_xchroma_offset_in)),
      suggested_ychroma_offset(std::move(suggested_ychroma_offset_in)),
      external_format(std::move(external_format_in)),
      format_features(std::move(format_features_in)) {}

VulkanYCbCrInfo::~VulkanYCbCrInfo() = default;
size_t VulkanYCbCrInfo::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->suggested_ycbcr_model);
  seed = mojo::internal::WTFHash(seed, this->suggested_ycbcr_range);
  seed = mojo::internal::WTFHash(seed, this->suggested_xchroma_offset);
  seed = mojo::internal::WTFHash(seed, this->suggested_ychroma_offset);
  seed = mojo::internal::WTFHash(seed, this->external_format);
  seed = mojo::internal::WTFHash(seed, this->format_features);
  return seed;
}

bool VulkanYCbCrInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


// static
bool StructTraits<::gpu::mojom::blink::VulkanYCbCrInfo::DataView, ::gpu::mojom::blink::VulkanYCbCrInfoPtr>::Read(
    ::gpu::mojom::blink::VulkanYCbCrInfo::DataView input,
    ::gpu::mojom::blink::VulkanYCbCrInfoPtr* output) {
  bool success = true;
  ::gpu::mojom::blink::VulkanYCbCrInfoPtr result(::gpu::mojom::blink::VulkanYCbCrInfo::New());
  
      result->suggested_ycbcr_model = input.suggested_ycbcr_model();
      result->suggested_ycbcr_range = input.suggested_ycbcr_range();
      result->suggested_xchroma_offset = input.suggested_xchroma_offset();
      result->suggested_ychroma_offset = input.suggested_ychroma_offset();
      result->external_format = input.external_format();
      result->format_features = input.format_features();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif