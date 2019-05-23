// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_VULKAN_YCBCR_INFO_MOJOM_SHARED_H_
#define GPU_IPC_COMMON_VULKAN_YCBCR_INFO_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "gpu/ipc/common/vulkan_ycbcr_info.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gpu {
namespace mojom {
class VulkanYCbCrInfoDataView;



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gpu::mojom::VulkanYCbCrInfoDataView> {
  using Data = ::gpu::mojom::internal::VulkanYCbCrInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gpu {
namespace mojom {
class VulkanYCbCrInfoDataView {
 public:
  VulkanYCbCrInfoDataView() {}

  VulkanYCbCrInfoDataView(
      internal::VulkanYCbCrInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t suggested_ycbcr_model() const {
    return data_->suggested_ycbcr_model;
  }
  uint32_t suggested_ycbcr_range() const {
    return data_->suggested_ycbcr_range;
  }
  uint32_t suggested_xchroma_offset() const {
    return data_->suggested_xchroma_offset;
  }
  uint32_t suggested_ychroma_offset() const {
    return data_->suggested_ychroma_offset;
  }
  uint64_t external_format() const {
    return data_->external_format;
  }
  uint32_t format_features() const {
    return data_->format_features;
  }
 private:
  internal::VulkanYCbCrInfo_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::VulkanYCbCrInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::VulkanYCbCrInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::VulkanYCbCrInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->suggested_ycbcr_model = Traits::suggested_ycbcr_model(input);
    (*output)->suggested_ycbcr_range = Traits::suggested_ycbcr_range(input);
    (*output)->suggested_xchroma_offset = Traits::suggested_xchroma_offset(input);
    (*output)->suggested_ychroma_offset = Traits::suggested_ychroma_offset(input);
    (*output)->external_format = Traits::external_format(input);
    (*output)->format_features = Traits::format_features(input);
  }

  static bool Deserialize(::gpu::mojom::internal::VulkanYCbCrInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::VulkanYCbCrInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gpu {
namespace mojom {




}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_VULKAN_YCBCR_INFO_MOJOM_SHARED_H_