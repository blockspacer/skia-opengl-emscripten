// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FRAME_SINK_ID_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FRAME_SINK_ID_MOJOM_H_

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
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-forward.h"
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
#include "components/viz/common/surfaces/frame_sink_id.h"




namespace viz {
namespace mojom {





class  FrameSinkId {
 public:
  using DataView = FrameSinkIdDataView;
  using Data_ = internal::FrameSinkId_Data;

  template <typename... Args>
  static FrameSinkIdPtr New(Args&&... args) {
    return FrameSinkIdPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FrameSinkIdPtr From(const U& u) {
    return mojo::TypeConverter<FrameSinkIdPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FrameSinkId>::Convert(*this);
  }


  FrameSinkId();

  FrameSinkId(
      uint32_t client_id,
      uint32_t sink_id);

  ~FrameSinkId();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FrameSinkIdPtr>
  FrameSinkIdPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FrameSinkId>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FrameSinkId::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FrameSinkId::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FrameSinkId_UnserializedMessageContext<
            UserType, FrameSinkId::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FrameSinkId::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FrameSinkId::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FrameSinkId_UnserializedMessageContext<
            UserType, FrameSinkId::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FrameSinkId::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t client_id;
  
  uint32_t sink_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
FrameSinkIdPtr FrameSinkId::Clone() const {
  return New(
      mojo::Clone(client_id),
      mojo::Clone(sink_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FrameSinkId>::value>::type*>
bool FrameSinkId::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->client_id, other_struct.client_id))
    return false;
  if (!mojo::Equals(this->sink_id, other_struct.sink_id))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::FrameSinkId::DataView,
                                         ::viz::mojom::FrameSinkIdPtr> {
  static bool IsNull(const ::viz::mojom::FrameSinkIdPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::FrameSinkIdPtr* output) { output->reset(); }

  static decltype(::viz::mojom::FrameSinkId::client_id) client_id(
      const ::viz::mojom::FrameSinkIdPtr& input) {
    return input->client_id;
  }

  static decltype(::viz::mojom::FrameSinkId::sink_id) sink_id(
      const ::viz::mojom::FrameSinkIdPtr& input) {
    return input->sink_id;
  }

  static bool Read(::viz::mojom::FrameSinkId::DataView input, ::viz::mojom::FrameSinkIdPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FRAME_SINK_ID_MOJOM_H_