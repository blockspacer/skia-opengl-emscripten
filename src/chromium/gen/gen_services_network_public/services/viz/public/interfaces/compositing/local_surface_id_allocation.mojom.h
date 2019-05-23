// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_ALLOCATION_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_ALLOCATION_MOJOM_H_

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
#include "services/viz/public/interfaces/compositing/local_surface_id_allocation.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/local_surface_id_allocation.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom.h"
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
#include "components/viz/common/surfaces/local_surface_id_allocation.h"




namespace viz {
namespace mojom {








class  LocalSurfaceIdAllocation {
 public:
  using DataView = LocalSurfaceIdAllocationDataView;
  using Data_ = internal::LocalSurfaceIdAllocation_Data;

  template <typename... Args>
  static LocalSurfaceIdAllocationPtr New(Args&&... args) {
    return LocalSurfaceIdAllocationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LocalSurfaceIdAllocationPtr From(const U& u) {
    return mojo::TypeConverter<LocalSurfaceIdAllocationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LocalSurfaceIdAllocation>::Convert(*this);
  }


  LocalSurfaceIdAllocation();

  LocalSurfaceIdAllocation(
      const viz::LocalSurfaceId& local_surface_id,
      base::TimeTicks allocation_time);

  ~LocalSurfaceIdAllocation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LocalSurfaceIdAllocationPtr>
  LocalSurfaceIdAllocationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LocalSurfaceIdAllocation>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LocalSurfaceIdAllocation::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LocalSurfaceIdAllocation::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LocalSurfaceIdAllocation_UnserializedMessageContext<
            UserType, LocalSurfaceIdAllocation::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LocalSurfaceIdAllocation::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LocalSurfaceIdAllocation::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LocalSurfaceIdAllocation_UnserializedMessageContext<
            UserType, LocalSurfaceIdAllocation::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LocalSurfaceIdAllocation::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  viz::LocalSurfaceId local_surface_id;
  
  base::TimeTicks allocation_time;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
LocalSurfaceIdAllocationPtr LocalSurfaceIdAllocation::Clone() const {
  return New(
      mojo::Clone(local_surface_id),
      mojo::Clone(allocation_time)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LocalSurfaceIdAllocation>::value>::type*>
bool LocalSurfaceIdAllocation::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->local_surface_id, other_struct.local_surface_id))
    return false;
  if (!mojo::Equals(this->allocation_time, other_struct.allocation_time))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::LocalSurfaceIdAllocation::DataView,
                                         ::viz::mojom::LocalSurfaceIdAllocationPtr> {
  static bool IsNull(const ::viz::mojom::LocalSurfaceIdAllocationPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::LocalSurfaceIdAllocationPtr* output) { output->reset(); }

  static const decltype(::viz::mojom::LocalSurfaceIdAllocation::local_surface_id)& local_surface_id(
      const ::viz::mojom::LocalSurfaceIdAllocationPtr& input) {
    return input->local_surface_id;
  }

  static const decltype(::viz::mojom::LocalSurfaceIdAllocation::allocation_time)& allocation_time(
      const ::viz::mojom::LocalSurfaceIdAllocationPtr& input) {
    return input->allocation_time;
  }

  static bool Read(::viz::mojom::LocalSurfaceIdAllocation::DataView input, ::viz::mojom::LocalSurfaceIdAllocationPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_ALLOCATION_MOJOM_H_