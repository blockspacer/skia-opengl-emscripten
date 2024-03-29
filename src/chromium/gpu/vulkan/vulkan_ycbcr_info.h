// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_VULKAN_VULKAN_YCBCR_INFO_H_
#define GPU_VULKAN_VULKAN_YCBCR_INFO_H_

#include <stdint.h>

#include "gpu/vulkan/vulkan_export.h"

namespace gpu {

// Sampler Ycbcr conversion information.
struct VULKAN_EXPORT VulkanYCbCrInfo {
  VulkanYCbCrInfo();
  VulkanYCbCrInfo(uint32_t suggested_ycbcr_model,
                  uint32_t suggested_ycbcr_range,
                  uint32_t suggested_xchroma_offset,
                  uint32_t suggested_ychroma_offset,
                  uint64_t external_format,
                  uint32_t format_features);

  // Describes the color matrix for conversion between color models.
  // Corresponds to vulkan type: VkSamplerYcbcrModelConversion.
  uint32_t suggested_ycbcr_model;

  // Describes whether the encoded values have headroom and foot room, or
  // whether the encoding uses the full numerical range.
  // Corresponds to vulkan type: VkSamplerYcbcrRange.
  uint32_t suggested_ycbcr_range;

  // Describes the sample location associated with downsampled chroma channels
  // in the x dimension. It has no effect for formats in which chroma channels
  // are the same resolution as the luma channel.
  // Corresponds to vulkan type: VkChromaLocation.
  uint32_t suggested_xchroma_offset;

  // Describes the sample location associated with downsampled chroma channels
  // in the y dimension. It has no effect for formats in which chroma channels
  // are not downsampled vertically.
  // Corresponds to vulkan type: VkChromaLocation.
  uint32_t suggested_ychroma_offset;

  // Implementation-defined external format identifier for use with
  // VkExternalFormatANDROID.
  // This property is driver specific.
  uint64_t external_format;

  // Describes the capabilities of the external format when used with an image
  // bound to memory imported from buffer.
  // Corresponds to vulkan type: VkFormatFeatureFlags.
  uint32_t format_features;
};

}  // namespace gpu

#endif  // GPU_VULKAN_VULKAN_YCBCR_INFO_H_
