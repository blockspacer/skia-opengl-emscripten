// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_ACCELERATED_WIDGET_MOJOM_BLINK_H_
#define UI_GFX_MOJO_ACCELERATED_WIDGET_MOJOM_BLINK_H_

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
#include "ui/gfx/mojo/accelerated_widget.mojom-shared.h"
#include "ui/gfx/mojo/accelerated_widget.mojom-blink-forward.h"

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




namespace gfx {
namespace mojom {
namespace blink {





class  AcceleratedWidget {
 public:
  using DataView = AcceleratedWidgetDataView;
  using Data_ = internal::AcceleratedWidget_Data;

  template <typename... Args>
  static AcceleratedWidgetPtr New(Args&&... args) {
    return AcceleratedWidgetPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AcceleratedWidgetPtr From(const U& u) {
    return mojo::TypeConverter<AcceleratedWidgetPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AcceleratedWidget>::Convert(*this);
  }


  AcceleratedWidget();

  explicit AcceleratedWidget(
      uint64_t widget);

  ~AcceleratedWidget();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AcceleratedWidgetPtr>
  AcceleratedWidgetPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AcceleratedWidget>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AcceleratedWidget::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AcceleratedWidget::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AcceleratedWidget_UnserializedMessageContext<
            UserType, AcceleratedWidget::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AcceleratedWidget::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AcceleratedWidget::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AcceleratedWidget_UnserializedMessageContext<
            UserType, AcceleratedWidget::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AcceleratedWidget::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t widget;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
AcceleratedWidgetPtr AcceleratedWidget::Clone() const {
  return New(
      mojo::Clone(widget)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AcceleratedWidget>::value>::type*>
bool AcceleratedWidget::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->widget, other_struct.widget))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::blink::AcceleratedWidget::DataView,
                                         ::gfx::mojom::blink::AcceleratedWidgetPtr> {
  static bool IsNull(const ::gfx::mojom::blink::AcceleratedWidgetPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::blink::AcceleratedWidgetPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::blink::AcceleratedWidget::widget) widget(
      const ::gfx::mojom::blink::AcceleratedWidgetPtr& input) {
    return input->widget;
  }

  static bool Read(::gfx::mojom::blink::AcceleratedWidget::DataView input, ::gfx::mojom::blink::AcceleratedWidgetPtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_MOJO_ACCELERATED_WIDGET_MOJOM_BLINK_H_