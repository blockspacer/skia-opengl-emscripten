// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_MOJOM_H_

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
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
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
#include "components/viz/common/surfaces/local_surface_id.h"




namespace viz {
namespace mojom {








class  LocalSurfaceId {
 public:
  using DataView = LocalSurfaceIdDataView;
  using Data_ = internal::LocalSurfaceId_Data;

  template <typename... Args>
  static LocalSurfaceIdPtr New(Args&&... args) {
    return LocalSurfaceIdPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LocalSurfaceIdPtr From(const U& u) {
    return mojo::TypeConverter<LocalSurfaceIdPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LocalSurfaceId>::Convert(*this);
  }


  LocalSurfaceId();

  LocalSurfaceId(
      uint32_t parent_sequence_number,
      uint32_t child_sequence_number,
      const base::UnguessableToken& embed_token);

  ~LocalSurfaceId();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LocalSurfaceIdPtr>
  LocalSurfaceIdPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LocalSurfaceId>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LocalSurfaceId::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LocalSurfaceId::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LocalSurfaceId_UnserializedMessageContext<
            UserType, LocalSurfaceId::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LocalSurfaceId::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LocalSurfaceId::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LocalSurfaceId_UnserializedMessageContext<
            UserType, LocalSurfaceId::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LocalSurfaceId::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t parent_sequence_number;
  
  uint32_t child_sequence_number;
  
  base::UnguessableToken embed_token;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
LocalSurfaceIdPtr LocalSurfaceId::Clone() const {
  return New(
      mojo::Clone(parent_sequence_number),
      mojo::Clone(child_sequence_number),
      mojo::Clone(embed_token)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LocalSurfaceId>::value>::type*>
bool LocalSurfaceId::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->parent_sequence_number, other_struct.parent_sequence_number))
    return false;
  if (!mojo::Equals(this->child_sequence_number, other_struct.child_sequence_number))
    return false;
  if (!mojo::Equals(this->embed_token, other_struct.embed_token))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::LocalSurfaceId::DataView,
                                         ::viz::mojom::LocalSurfaceIdPtr> {
  static bool IsNull(const ::viz::mojom::LocalSurfaceIdPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::LocalSurfaceIdPtr* output) { output->reset(); }

  static decltype(::viz::mojom::LocalSurfaceId::parent_sequence_number) parent_sequence_number(
      const ::viz::mojom::LocalSurfaceIdPtr& input) {
    return input->parent_sequence_number;
  }

  static decltype(::viz::mojom::LocalSurfaceId::child_sequence_number) child_sequence_number(
      const ::viz::mojom::LocalSurfaceIdPtr& input) {
    return input->child_sequence_number;
  }

  static const decltype(::viz::mojom::LocalSurfaceId::embed_token)& embed_token(
      const ::viz::mojom::LocalSurfaceIdPtr& input) {
    return input->embed_token;
  }

  static bool Read(::viz::mojom::LocalSurfaceId::DataView input, ::viz::mojom::LocalSurfaceIdPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_MOJOM_H_