// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_RETURNED_RESOURCE_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_RETURNED_RESOURCE_MOJOM_H_

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
#include "services/viz/public/interfaces/compositing/returned_resource.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/returned_resource.mojom-forward.h"
#include "gpu/ipc/common/sync_token.mojom.h"
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
#include "components/viz/common/resources/returned_resource.h"




namespace viz {
namespace mojom {








class  ReturnedResource {
 public:
  using DataView = ReturnedResourceDataView;
  using Data_ = internal::ReturnedResource_Data;

  template <typename... Args>
  static ReturnedResourcePtr New(Args&&... args) {
    return ReturnedResourcePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReturnedResourcePtr From(const U& u) {
    return mojo::TypeConverter<ReturnedResourcePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ReturnedResource>::Convert(*this);
  }


  ReturnedResource();

  ReturnedResource(
      uint32_t id,
      const ::gpu::SyncToken& sync_token,
      int32_t count,
      bool lost);

  ~ReturnedResource();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReturnedResourcePtr>
  ReturnedResourcePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ReturnedResource>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ReturnedResource::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ReturnedResource::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ReturnedResource_UnserializedMessageContext<
            UserType, ReturnedResource::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ReturnedResource::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ReturnedResource::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ReturnedResource_UnserializedMessageContext<
            UserType, ReturnedResource::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ReturnedResource::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t id;
  
  ::gpu::SyncToken sync_token;
  
  int32_t count;
  
  bool lost;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ReturnedResourcePtr ReturnedResource::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(sync_token),
      mojo::Clone(count),
      mojo::Clone(lost)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ReturnedResource>::value>::type*>
bool ReturnedResource::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->sync_token, other_struct.sync_token))
    return false;
  if (!mojo::Equals(this->count, other_struct.count))
    return false;
  if (!mojo::Equals(this->lost, other_struct.lost))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::ReturnedResource::DataView,
                                         ::viz::mojom::ReturnedResourcePtr> {
  static bool IsNull(const ::viz::mojom::ReturnedResourcePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::ReturnedResourcePtr* output) { output->reset(); }

  static decltype(::viz::mojom::ReturnedResource::id) id(
      const ::viz::mojom::ReturnedResourcePtr& input) {
    return input->id;
  }

  static const decltype(::viz::mojom::ReturnedResource::sync_token)& sync_token(
      const ::viz::mojom::ReturnedResourcePtr& input) {
    return input->sync_token;
  }

  static decltype(::viz::mojom::ReturnedResource::count) count(
      const ::viz::mojom::ReturnedResourcePtr& input) {
    return input->count;
  }

  static decltype(::viz::mojom::ReturnedResource::lost) lost(
      const ::viz::mojom::ReturnedResourcePtr& input) {
    return input->lost;
  }

  static bool Read(::viz::mojom::ReturnedResource::DataView input, ::viz::mojom::ReturnedResourcePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_RETURNED_RESOURCE_MOJOM_H_