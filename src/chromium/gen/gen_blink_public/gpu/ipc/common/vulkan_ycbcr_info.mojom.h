// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_VULKAN_YCBCR_INFO_MOJOM_H_
#define GPU_IPC_COMMON_VULKAN_YCBCR_INFO_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "gpu/ipc/common/vulkan_ycbcr_info.mojom-shared.h"
#include "gpu/ipc/common/vulkan_ycbcr_info.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "gpu/vulkan/vulkan_ycbcr_info.h"




namespace gpu {
namespace mojom {








class  VulkanYCbCrInfo {
 public:
  using DataView = VulkanYCbCrInfoDataView;
  using Data_ = internal::VulkanYCbCrInfo_Data;

  template <typename... Args>
  static VulkanYCbCrInfoPtr New(Args&&... args) {
    return VulkanYCbCrInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VulkanYCbCrInfoPtr From(const U& u) {
    return mojo::TypeConverter<VulkanYCbCrInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VulkanYCbCrInfo>::Convert(*this);
  }


  VulkanYCbCrInfo();

  VulkanYCbCrInfo(
      uint32_t suggested_ycbcr_model,
      uint32_t suggested_ycbcr_range,
      uint32_t suggested_xchroma_offset,
      uint32_t suggested_ychroma_offset,
      uint64_t external_format,
      uint32_t format_features);

  ~VulkanYCbCrInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VulkanYCbCrInfoPtr>
  VulkanYCbCrInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VulkanYCbCrInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VulkanYCbCrInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VulkanYCbCrInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VulkanYCbCrInfo_UnserializedMessageContext<
            UserType, VulkanYCbCrInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VulkanYCbCrInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VulkanYCbCrInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VulkanYCbCrInfo_UnserializedMessageContext<
            UserType, VulkanYCbCrInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VulkanYCbCrInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t suggested_ycbcr_model;
  
  uint32_t suggested_ycbcr_range;
  
  uint32_t suggested_xchroma_offset;
  
  uint32_t suggested_ychroma_offset;
  
  uint64_t external_format;
  
  uint32_t format_features;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
VulkanYCbCrInfoPtr VulkanYCbCrInfo::Clone() const {
  return New(
      mojo::Clone(suggested_ycbcr_model),
      mojo::Clone(suggested_ycbcr_range),
      mojo::Clone(suggested_xchroma_offset),
      mojo::Clone(suggested_ychroma_offset),
      mojo::Clone(external_format),
      mojo::Clone(format_features)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VulkanYCbCrInfo>::value>::type*>
bool VulkanYCbCrInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->suggested_ycbcr_model, other_struct.suggested_ycbcr_model))
    return false;
  if (!mojo::Equals(this->suggested_ycbcr_range, other_struct.suggested_ycbcr_range))
    return false;
  if (!mojo::Equals(this->suggested_xchroma_offset, other_struct.suggested_xchroma_offset))
    return false;
  if (!mojo::Equals(this->suggested_ychroma_offset, other_struct.suggested_ychroma_offset))
    return false;
  if (!mojo::Equals(this->external_format, other_struct.external_format))
    return false;
  if (!mojo::Equals(this->format_features, other_struct.format_features))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::VulkanYCbCrInfo::DataView,
                                         ::gpu::mojom::VulkanYCbCrInfoPtr> {
  static bool IsNull(const ::gpu::mojom::VulkanYCbCrInfoPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::VulkanYCbCrInfoPtr* output) { output->reset(); }

  static decltype(::gpu::mojom::VulkanYCbCrInfo::suggested_ycbcr_model) suggested_ycbcr_model(
      const ::gpu::mojom::VulkanYCbCrInfoPtr& input) {
    return input->suggested_ycbcr_model;
  }

  static decltype(::gpu::mojom::VulkanYCbCrInfo::suggested_ycbcr_range) suggested_ycbcr_range(
      const ::gpu::mojom::VulkanYCbCrInfoPtr& input) {
    return input->suggested_ycbcr_range;
  }

  static decltype(::gpu::mojom::VulkanYCbCrInfo::suggested_xchroma_offset) suggested_xchroma_offset(
      const ::gpu::mojom::VulkanYCbCrInfoPtr& input) {
    return input->suggested_xchroma_offset;
  }

  static decltype(::gpu::mojom::VulkanYCbCrInfo::suggested_ychroma_offset) suggested_ychroma_offset(
      const ::gpu::mojom::VulkanYCbCrInfoPtr& input) {
    return input->suggested_ychroma_offset;
  }

  static decltype(::gpu::mojom::VulkanYCbCrInfo::external_format) external_format(
      const ::gpu::mojom::VulkanYCbCrInfoPtr& input) {
    return input->external_format;
  }

  static decltype(::gpu::mojom::VulkanYCbCrInfo::format_features) format_features(
      const ::gpu::mojom::VulkanYCbCrInfoPtr& input) {
    return input->format_features;
  }

  static bool Read(::gpu::mojom::VulkanYCbCrInfo::DataView input, ::gpu::mojom::VulkanYCbCrInfoPtr* output);
};

}  // namespace mojo

#endif  // GPU_IPC_COMMON_VULKAN_YCBCR_INFO_MOJOM_H_