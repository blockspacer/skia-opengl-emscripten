// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_MOJOM_H_

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
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-forward.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom.h"
#include "services/viz/public/interfaces/compositing/render_pass.mojom.h"
#include "services/viz/public/interfaces/compositing/transferable_resource.mojom.h"
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
#include "components/viz/common/quads/compositor_frame.h"




namespace viz {
namespace mojom {








class  CompositorFrame {
 public:
  using DataView = CompositorFrameDataView;
  using Data_ = internal::CompositorFrame_Data;

  template <typename... Args>
  static CompositorFramePtr New(Args&&... args) {
    return CompositorFramePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CompositorFramePtr From(const U& u) {
    return mojo::TypeConverter<CompositorFramePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CompositorFrame>::Convert(*this);
  }


  CompositorFrame();

  CompositorFrame(
      viz::CompositorFrameMetadata metadata,
      const std::vector<viz::TransferableResource>& resources,
      std::vector<std::unique_ptr<viz::RenderPass>> passes);

  ~CompositorFrame();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CompositorFramePtr>
  CompositorFramePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CompositorFrame>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CompositorFrame::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CompositorFrame::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CompositorFrame_UnserializedMessageContext<
            UserType, CompositorFrame::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CompositorFrame::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CompositorFrame::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CompositorFrame_UnserializedMessageContext<
            UserType, CompositorFrame::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CompositorFrame::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  viz::CompositorFrameMetadata metadata;
  
  std::vector<viz::TransferableResource> resources;
  
  std::vector<std::unique_ptr<viz::RenderPass>> passes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CompositorFrame);
};

template <typename StructPtrType>
CompositorFramePtr CompositorFrame::Clone() const {
  return New(
      mojo::Clone(metadata),
      mojo::Clone(resources),
      mojo::Clone(passes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CompositorFrame>::value>::type*>
bool CompositorFrame::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->metadata, other_struct.metadata))
    return false;
  if (!mojo::Equals(this->resources, other_struct.resources))
    return false;
  if (!mojo::Equals(this->passes, other_struct.passes))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::CompositorFrame::DataView,
                                         ::viz::mojom::CompositorFramePtr> {
  static bool IsNull(const ::viz::mojom::CompositorFramePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::CompositorFramePtr* output) { output->reset(); }

  static const decltype(::viz::mojom::CompositorFrame::metadata)& metadata(
      const ::viz::mojom::CompositorFramePtr& input) {
    return input->metadata;
  }

  static const decltype(::viz::mojom::CompositorFrame::resources)& resources(
      const ::viz::mojom::CompositorFramePtr& input) {
    return input->resources;
  }

  static  decltype(::viz::mojom::CompositorFrame::passes)& passes(
       ::viz::mojom::CompositorFramePtr& input) {
    return input->passes;
  }

  static bool Read(::viz::mojom::CompositorFrame::DataView input, ::viz::mojom::CompositorFramePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_MOJOM_H_