// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_ID_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_ID_MOJOM_BLINK_H_

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
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-blink-forward.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-blink.h"

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
#include "components/viz/common/surfaces/surface_id.h"




namespace viz {
namespace mojom {
namespace blink {








class  SurfaceId {
 public:
  using DataView = SurfaceIdDataView;
  using Data_ = internal::SurfaceId_Data;

  template <typename... Args>
  static SurfaceIdPtr New(Args&&... args) {
    return SurfaceIdPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SurfaceIdPtr From(const U& u) {
    return mojo::TypeConverter<SurfaceIdPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SurfaceId>::Convert(*this);
  }


  SurfaceId();

  SurfaceId(
      const viz::FrameSinkId& frame_sink_id,
      const viz::LocalSurfaceId& local_surface_id);

  ~SurfaceId();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SurfaceIdPtr>
  SurfaceIdPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SurfaceId>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SurfaceId::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SurfaceId::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SurfaceId_UnserializedMessageContext<
            UserType, SurfaceId::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SurfaceId::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SurfaceId::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SurfaceId_UnserializedMessageContext<
            UserType, SurfaceId::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SurfaceId::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  viz::FrameSinkId frame_sink_id;
  
  viz::LocalSurfaceId local_surface_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SurfaceIdPtr SurfaceId::Clone() const {
  return New(
      mojo::Clone(frame_sink_id),
      mojo::Clone(local_surface_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SurfaceId>::value>::type*>
bool SurfaceId::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->frame_sink_id, other_struct.frame_sink_id))
    return false;
  if (!mojo::Equals(this->local_surface_id, other_struct.local_surface_id))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::blink::SurfaceId::DataView,
                                         ::viz::mojom::blink::SurfaceIdPtr> {
  static bool IsNull(const ::viz::mojom::blink::SurfaceIdPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::SurfaceIdPtr* output) { output->reset(); }

  static const decltype(::viz::mojom::blink::SurfaceId::frame_sink_id)& frame_sink_id(
      const ::viz::mojom::blink::SurfaceIdPtr& input) {
    return input->frame_sink_id;
  }

  static const decltype(::viz::mojom::blink::SurfaceId::local_surface_id)& local_surface_id(
      const ::viz::mojom::blink::SurfaceIdPtr& input) {
    return input->local_surface_id;
  }

  static bool Read(::viz::mojom::blink::SurfaceId::DataView input, ::viz::mojom::blink::SurfaceIdPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_ID_MOJOM_BLINK_H_