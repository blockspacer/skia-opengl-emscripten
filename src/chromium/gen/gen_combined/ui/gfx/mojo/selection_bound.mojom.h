// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_SELECTION_BOUND_MOJOM_H_
#define UI_GFX_MOJO_SELECTION_BOUND_MOJOM_H_

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
#include "ui/gfx/mojo/selection_bound.mojom-shared.h"
#include "ui/gfx/mojo/selection_bound.mojom-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
#include "ui/gfx/selection_bound.h"




namespace gfx {
namespace mojom {








class  SelectionBound {
 public:
  using DataView = SelectionBoundDataView;
  using Data_ = internal::SelectionBound_Data;

  template <typename... Args>
  static SelectionBoundPtr New(Args&&... args) {
    return SelectionBoundPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SelectionBoundPtr From(const U& u) {
    return mojo::TypeConverter<SelectionBoundPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SelectionBound>::Convert(*this);
  }


  SelectionBound();

  SelectionBound(
      SelectionBoundType type,
      const gfx::PointF& edge_top,
      const gfx::PointF& edge_bottom,
      bool visible);

  ~SelectionBound();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SelectionBoundPtr>
  SelectionBoundPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SelectionBound>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SelectionBound::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SelectionBound::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SelectionBound_UnserializedMessageContext<
            UserType, SelectionBound::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SelectionBound::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SelectionBound::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SelectionBound_UnserializedMessageContext<
            UserType, SelectionBound::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SelectionBound::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  SelectionBoundType type;
  
  gfx::PointF edge_top;
  
  gfx::PointF edge_bottom;
  
  bool visible;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SelectionBoundPtr SelectionBound::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(edge_top),
      mojo::Clone(edge_bottom),
      mojo::Clone(visible)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SelectionBound>::value>::type*>
bool SelectionBound::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->edge_top, other_struct.edge_top))
    return false;
  if (!mojo::Equals(this->edge_bottom, other_struct.edge_bottom))
    return false;
  if (!mojo::Equals(this->visible, other_struct.visible))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::SelectionBound::DataView,
                                         ::gfx::mojom::SelectionBoundPtr> {
  static bool IsNull(const ::gfx::mojom::SelectionBoundPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::SelectionBoundPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::SelectionBound::type) type(
      const ::gfx::mojom::SelectionBoundPtr& input) {
    return input->type;
  }

  static const decltype(::gfx::mojom::SelectionBound::edge_top)& edge_top(
      const ::gfx::mojom::SelectionBoundPtr& input) {
    return input->edge_top;
  }

  static const decltype(::gfx::mojom::SelectionBound::edge_bottom)& edge_bottom(
      const ::gfx::mojom::SelectionBoundPtr& input) {
    return input->edge_bottom;
  }

  static decltype(::gfx::mojom::SelectionBound::visible) visible(
      const ::gfx::mojom::SelectionBoundPtr& input) {
    return input->visible;
  }

  static bool Read(::gfx::mojom::SelectionBound::DataView input, ::gfx::mojom::SelectionBoundPtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_MOJO_SELECTION_BOUND_MOJOM_H_