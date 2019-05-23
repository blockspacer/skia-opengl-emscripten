// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_RRECT_F_MOJOM_H_
#define UI_GFX_MOJO_RRECT_F_MOJOM_H_

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
#include "ui/gfx/mojo/rrect_f.mojom-shared.h"
#include "ui/gfx/mojo/rrect_f.mojom-forward.h"
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
#include "ui/gfx/rrect_f.h"




namespace gfx {
namespace mojom {








class  RRectF {
 public:
  using DataView = RRectFDataView;
  using Data_ = internal::RRectF_Data;

  template <typename... Args>
  static RRectFPtr New(Args&&... args) {
    return RRectFPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RRectFPtr From(const U& u) {
    return mojo::TypeConverter<RRectFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RRectF>::Convert(*this);
  }


  RRectF();

  RRectF(
      RRectFType type,
      const gfx::RectF& rect,
      const gfx::Vector2dF& upper_left,
      const gfx::Vector2dF& upper_right,
      const gfx::Vector2dF& lower_right,
      const gfx::Vector2dF& lower_left);

  ~RRectF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RRectFPtr>
  RRectFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RRectF>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RRectF::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RRectF::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RRectF_UnserializedMessageContext<
            UserType, RRectF::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RRectF::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RRectF::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RRectF_UnserializedMessageContext<
            UserType, RRectF::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RRectF::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  RRectFType type;
  
  gfx::RectF rect;
  
  gfx::Vector2dF upper_left;
  
  gfx::Vector2dF upper_right;
  
  gfx::Vector2dF lower_right;
  
  gfx::Vector2dF lower_left;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
RRectFPtr RRectF::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(rect),
      mojo::Clone(upper_left),
      mojo::Clone(upper_right),
      mojo::Clone(lower_right),
      mojo::Clone(lower_left)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RRectF>::value>::type*>
bool RRectF::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->rect, other_struct.rect))
    return false;
  if (!mojo::Equals(this->upper_left, other_struct.upper_left))
    return false;
  if (!mojo::Equals(this->upper_right, other_struct.upper_right))
    return false;
  if (!mojo::Equals(this->lower_right, other_struct.lower_right))
    return false;
  if (!mojo::Equals(this->lower_left, other_struct.lower_left))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::RRectF::DataView,
                                         ::gfx::mojom::RRectFPtr> {
  static bool IsNull(const ::gfx::mojom::RRectFPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::RRectFPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::RRectF::type) type(
      const ::gfx::mojom::RRectFPtr& input) {
    return input->type;
  }

  static const decltype(::gfx::mojom::RRectF::rect)& rect(
      const ::gfx::mojom::RRectFPtr& input) {
    return input->rect;
  }

  static const decltype(::gfx::mojom::RRectF::upper_left)& upper_left(
      const ::gfx::mojom::RRectFPtr& input) {
    return input->upper_left;
  }

  static const decltype(::gfx::mojom::RRectF::upper_right)& upper_right(
      const ::gfx::mojom::RRectFPtr& input) {
    return input->upper_right;
  }

  static const decltype(::gfx::mojom::RRectF::lower_right)& lower_right(
      const ::gfx::mojom::RRectFPtr& input) {
    return input->lower_right;
  }

  static const decltype(::gfx::mojom::RRectF::lower_left)& lower_left(
      const ::gfx::mojom::RRectFPtr& input) {
    return input->lower_left;
  }

  static bool Read(::gfx::mojom::RRectF::DataView input, ::gfx::mojom::RRectFPtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_MOJO_RRECT_F_MOJOM_H_