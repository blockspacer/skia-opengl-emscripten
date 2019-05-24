// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WINDOW_FEATURES_WINDOW_FEATURES_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WINDOW_FEATURES_WINDOW_FEATURES_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/window_features/window_features.mojom-shared.h"
#include "third_party/blink/public/mojom/window_features/window_features.mojom-blink-forward.h"

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
#include "third_party/blink/renderer/platform/platform_export.h"




namespace blink {
namespace mojom {
namespace blink {








class PLATFORM_EXPORT WindowFeatures {
 public:
  using DataView = WindowFeaturesDataView;
  using Data_ = internal::WindowFeatures_Data;

  template <typename... Args>
  static WindowFeaturesPtr New(Args&&... args) {
    return WindowFeaturesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WindowFeaturesPtr From(const U& u) {
    return mojo::TypeConverter<WindowFeaturesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WindowFeatures>::Convert(*this);
  }


  WindowFeatures();

  WindowFeatures(
      float x,
      bool has_x,
      float y,
      bool has_y,
      float width,
      bool has_width,
      float height,
      bool has_height,
      bool menu_bar_visible,
      bool status_bar_visible,
      bool tool_bar_visible,
      bool scrollbars_visible);

  ~WindowFeatures();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WindowFeaturesPtr>
  WindowFeaturesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WindowFeatures>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WindowFeatures::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WindowFeatures::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WindowFeatures_UnserializedMessageContext<
            UserType, WindowFeatures::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WindowFeatures::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return WindowFeatures::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WindowFeatures_UnserializedMessageContext<
            UserType, WindowFeatures::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WindowFeatures::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float x;
  
  bool has_x;
  
  float y;
  
  bool has_y;
  
  float width;
  
  bool has_width;
  
  float height;
  
  bool has_height;
  
  bool menu_bar_visible;
  
  bool status_bar_visible;
  
  bool tool_bar_visible;
  
  bool scrollbars_visible;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
WindowFeaturesPtr WindowFeatures::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(has_x),
      mojo::Clone(y),
      mojo::Clone(has_y),
      mojo::Clone(width),
      mojo::Clone(has_width),
      mojo::Clone(height),
      mojo::Clone(has_height),
      mojo::Clone(menu_bar_visible),
      mojo::Clone(status_bar_visible),
      mojo::Clone(tool_bar_visible),
      mojo::Clone(scrollbars_visible)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WindowFeatures>::value>::type*>
bool WindowFeatures::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->has_x, other_struct.has_x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  if (!mojo::Equals(this->has_y, other_struct.has_y))
    return false;
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->has_width, other_struct.has_width))
    return false;
  if (!mojo::Equals(this->height, other_struct.height))
    return false;
  if (!mojo::Equals(this->has_height, other_struct.has_height))
    return false;
  if (!mojo::Equals(this->menu_bar_visible, other_struct.menu_bar_visible))
    return false;
  if (!mojo::Equals(this->status_bar_visible, other_struct.status_bar_visible))
    return false;
  if (!mojo::Equals(this->tool_bar_visible, other_struct.tool_bar_visible))
    return false;
  if (!mojo::Equals(this->scrollbars_visible, other_struct.scrollbars_visible))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::WindowFeatures::DataView,
                                         ::blink::mojom::blink::WindowFeaturesPtr> {
  static bool IsNull(const ::blink::mojom::blink::WindowFeaturesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::WindowFeaturesPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::WindowFeatures::x) x(
      const ::blink::mojom::blink::WindowFeaturesPtr& input) {
    return input->x;
  }

  static decltype(::blink::mojom::blink::WindowFeatures::has_x) has_x(
      const ::blink::mojom::blink::WindowFeaturesPtr& input) {
    return input->has_x;
  }

  static decltype(::blink::mojom::blink::WindowFeatures::y) y(
      const ::blink::mojom::blink::WindowFeaturesPtr& input) {
    return input->y;
  }

  static decltype(::blink::mojom::blink::WindowFeatures::has_y) has_y(
      const ::blink::mojom::blink::WindowFeaturesPtr& input) {
    return input->has_y;
  }

  static decltype(::blink::mojom::blink::WindowFeatures::width) width(
      const ::blink::mojom::blink::WindowFeaturesPtr& input) {
    return input->width;
  }

  static decltype(::blink::mojom::blink::WindowFeatures::has_width) has_width(
      const ::blink::mojom::blink::WindowFeaturesPtr& input) {
    return input->has_width;
  }

  static decltype(::blink::mojom::blink::WindowFeatures::height) height(
      const ::blink::mojom::blink::WindowFeaturesPtr& input) {
    return input->height;
  }

  static decltype(::blink::mojom::blink::WindowFeatures::has_height) has_height(
      const ::blink::mojom::blink::WindowFeaturesPtr& input) {
    return input->has_height;
  }

  static decltype(::blink::mojom::blink::WindowFeatures::menu_bar_visible) menu_bar_visible(
      const ::blink::mojom::blink::WindowFeaturesPtr& input) {
    return input->menu_bar_visible;
  }

  static decltype(::blink::mojom::blink::WindowFeatures::status_bar_visible) status_bar_visible(
      const ::blink::mojom::blink::WindowFeaturesPtr& input) {
    return input->status_bar_visible;
  }

  static decltype(::blink::mojom::blink::WindowFeatures::tool_bar_visible) tool_bar_visible(
      const ::blink::mojom::blink::WindowFeaturesPtr& input) {
    return input->tool_bar_visible;
  }

  static decltype(::blink::mojom::blink::WindowFeatures::scrollbars_visible) scrollbars_visible(
      const ::blink::mojom::blink::WindowFeaturesPtr& input) {
    return input->scrollbars_visible;
  }

  static bool Read(::blink::mojom::blink::WindowFeatures::DataView input, ::blink::mojom::blink::WindowFeaturesPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WINDOW_FEATURES_WINDOW_FEATURES_MOJOM_BLINK_H_