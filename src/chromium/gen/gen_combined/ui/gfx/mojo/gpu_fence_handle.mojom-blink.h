// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_GPU_FENCE_HANDLE_MOJOM_BLINK_H_
#define UI_GFX_MOJO_GPU_FENCE_HANDLE_MOJOM_BLINK_H_

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
#include "ui/gfx/mojo/gpu_fence_handle.mojom-shared.h"
#include "ui/gfx/mojo/gpu_fence_handle.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

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
#include "ui/gfx/gpu_fence_handle.h"




namespace WTF {
struct gfx_mojom_internal_GpuFenceHandleType_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::GpuFenceHandleType& value) {
    using utype = std::underlying_type<::gfx::mojom::GpuFenceHandleType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::GpuFenceHandleType& left, const ::gfx::mojom::GpuFenceHandleType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gfx::mojom::GpuFenceHandleType>
    : public GenericHashTraits<::gfx::mojom::GpuFenceHandleType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gfx::mojom::GpuFenceHandleType& value) {
    return value == static_cast<::gfx::mojom::GpuFenceHandleType>(-1000000);
  }
  static void ConstructDeletedValue(::gfx::mojom::GpuFenceHandleType& slot, bool) {
    slot = static_cast<::gfx::mojom::GpuFenceHandleType>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::GpuFenceHandleType& value) {
    return value == static_cast<::gfx::mojom::GpuFenceHandleType>(-1000001);
  }
};
}  // namespace WTF


namespace gfx {
namespace mojom {
namespace blink {








class  GpuFenceHandle {
 public:
  using DataView = GpuFenceHandleDataView;
  using Data_ = internal::GpuFenceHandle_Data;

  template <typename... Args>
  static GpuFenceHandlePtr New(Args&&... args) {
    return GpuFenceHandlePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GpuFenceHandlePtr From(const U& u) {
    return mojo::TypeConverter<GpuFenceHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuFenceHandle>::Convert(*this);
  }


  GpuFenceHandle();

  GpuFenceHandle(
      GpuFenceHandleType type,
      mojo::ScopedHandle native_fd);

  ~GpuFenceHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GpuFenceHandlePtr>
  GpuFenceHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuFenceHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GpuFenceHandle::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GpuFenceHandle::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GpuFenceHandle_UnserializedMessageContext<
            UserType, GpuFenceHandle::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GpuFenceHandle::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GpuFenceHandle::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GpuFenceHandle_UnserializedMessageContext<
            UserType, GpuFenceHandle::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GpuFenceHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  GpuFenceHandleType type;
  
  mojo::ScopedHandle native_fd;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GpuFenceHandle);
};

template <typename StructPtrType>
GpuFenceHandlePtr GpuFenceHandle::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(native_fd)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuFenceHandle>::value>::type*>
bool GpuFenceHandle::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->native_fd, other_struct.native_fd))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::blink::GpuFenceHandle::DataView,
                                         ::gfx::mojom::blink::GpuFenceHandlePtr> {
  static bool IsNull(const ::gfx::mojom::blink::GpuFenceHandlePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::blink::GpuFenceHandlePtr* output) { output->reset(); }

  static decltype(::gfx::mojom::blink::GpuFenceHandle::type) type(
      const ::gfx::mojom::blink::GpuFenceHandlePtr& input) {
    return input->type;
  }

  static  decltype(::gfx::mojom::blink::GpuFenceHandle::native_fd)& native_fd(
       ::gfx::mojom::blink::GpuFenceHandlePtr& input) {
    return input->native_fd;
  }

  static bool Read(::gfx::mojom::blink::GpuFenceHandle::DataView input, ::gfx::mojom::blink::GpuFenceHandlePtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_MOJO_GPU_FENCE_HANDLE_MOJOM_BLINK_H_