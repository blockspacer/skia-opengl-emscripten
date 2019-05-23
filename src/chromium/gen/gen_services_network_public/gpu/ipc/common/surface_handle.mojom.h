// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_SURFACE_HANDLE_MOJOM_H_
#define GPU_IPC_COMMON_SURFACE_HANDLE_MOJOM_H_

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
#include "gpu/ipc/common/surface_handle.mojom-shared.h"
#include "gpu/ipc/common/surface_handle.mojom-forward.h"
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
#include "gpu/ipc/common/surface_handle.h"




namespace gpu {
namespace mojom {





class  SurfaceHandle {
 public:
  using DataView = SurfaceHandleDataView;
  using Data_ = internal::SurfaceHandle_Data;

  template <typename... Args>
  static SurfaceHandlePtr New(Args&&... args) {
    return SurfaceHandlePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SurfaceHandlePtr From(const U& u) {
    return mojo::TypeConverter<SurfaceHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SurfaceHandle>::Convert(*this);
  }


  SurfaceHandle();

  explicit SurfaceHandle(
      uint64_t surface_handle);

  ~SurfaceHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SurfaceHandlePtr>
  SurfaceHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SurfaceHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SurfaceHandle::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SurfaceHandle::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SurfaceHandle_UnserializedMessageContext<
            UserType, SurfaceHandle::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SurfaceHandle::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SurfaceHandle::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SurfaceHandle_UnserializedMessageContext<
            UserType, SurfaceHandle::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SurfaceHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t surface_handle;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
SurfaceHandlePtr SurfaceHandle::Clone() const {
  return New(
      mojo::Clone(surface_handle)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SurfaceHandle>::value>::type*>
bool SurfaceHandle::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->surface_handle, other_struct.surface_handle))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::SurfaceHandle::DataView,
                                         ::gpu::mojom::SurfaceHandlePtr> {
  static bool IsNull(const ::gpu::mojom::SurfaceHandlePtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::SurfaceHandlePtr* output) { output->reset(); }

  static decltype(::gpu::mojom::SurfaceHandle::surface_handle) surface_handle(
      const ::gpu::mojom::SurfaceHandlePtr& input) {
    return input->surface_handle;
  }

  static bool Read(::gpu::mojom::SurfaceHandle::DataView input, ::gpu::mojom::SurfaceHandlePtr* output);
};

}  // namespace mojo

#endif  // GPU_IPC_COMMON_SURFACE_HANDLE_MOJOM_H_