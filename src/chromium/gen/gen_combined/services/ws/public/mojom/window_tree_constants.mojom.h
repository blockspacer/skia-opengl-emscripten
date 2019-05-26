// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_CONSTANTS_MOJOM_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_CONSTANTS_MOJOM_H_

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
#include "services/ws/public/mojom/window_tree_constants.mojom-shared.h"
#include "services/ws/public/mojom/window_tree_constants.mojom-forward.h"
#include "ui/base/mojo/ui_base_types.mojom.h"
#include "ui/display/mojo/display.mojom.h"
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




namespace ws {
namespace mojom {










class  FrameDecorationValues {
 public:
  using DataView = FrameDecorationValuesDataView;
  using Data_ = internal::FrameDecorationValues_Data;

  template <typename... Args>
  static FrameDecorationValuesPtr New(Args&&... args) {
    return FrameDecorationValuesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FrameDecorationValuesPtr From(const U& u) {
    return mojo::TypeConverter<FrameDecorationValuesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FrameDecorationValues>::Convert(*this);
  }


  FrameDecorationValues();

  FrameDecorationValues(
      const gfx::Insets& normal_client_area_insets,
      const gfx::Insets& maximized_client_area_insets,
      uint32_t max_title_bar_button_width);

  ~FrameDecorationValues();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FrameDecorationValuesPtr>
  FrameDecorationValuesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FrameDecorationValues>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FrameDecorationValues::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FrameDecorationValues::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FrameDecorationValues_UnserializedMessageContext<
            UserType, FrameDecorationValues::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FrameDecorationValues::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FrameDecorationValues::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FrameDecorationValues_UnserializedMessageContext<
            UserType, FrameDecorationValues::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FrameDecorationValues::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  gfx::Insets normal_client_area_insets;
  
  gfx::Insets maximized_client_area_insets;
  
  uint32_t max_title_bar_button_width;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  WindowData {
 public:
  using DataView = WindowDataDataView;
  using Data_ = internal::WindowData_Data;

  template <typename... Args>
  static WindowDataPtr New(Args&&... args) {
    return WindowDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WindowDataPtr From(const U& u) {
    return mojo::TypeConverter<WindowDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WindowData>::Convert(*this);
  }


  WindowData();

  WindowData(
      uint64_t parent_id,
      uint64_t window_id,
      uint64_t transient_parent_id,
      const gfx::Rect& bounds,
      ui::WindowShowState state,
      const base::flat_map<std::string, std::vector<uint8_t>>& properties,
      bool visible);

  ~WindowData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WindowDataPtr>
  WindowDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WindowData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WindowData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WindowData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WindowData_UnserializedMessageContext<
            UserType, WindowData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WindowData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WindowData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WindowData_UnserializedMessageContext<
            UserType, WindowData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WindowData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t parent_id;
  
  uint64_t window_id;
  
  uint64_t transient_parent_id;
  
  gfx::Rect bounds;
  
  ui::WindowShowState state;
  
  base::flat_map<std::string, std::vector<uint8_t>> properties;
  
  bool visible;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  WsDisplay {
 public:
  using DataView = WsDisplayDataView;
  using Data_ = internal::WsDisplay_Data;

  template <typename... Args>
  static WsDisplayPtr New(Args&&... args) {
    return WsDisplayPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WsDisplayPtr From(const U& u) {
    return mojo::TypeConverter<WsDisplayPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WsDisplay>::Convert(*this);
  }


  WsDisplay();

  WsDisplay(
      const display::Display& display,
      FrameDecorationValuesPtr frame_decoration_values);

  ~WsDisplay();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WsDisplayPtr>
  WsDisplayPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WsDisplay>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WsDisplay::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WsDisplay::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WsDisplay_UnserializedMessageContext<
            UserType, WsDisplay::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WsDisplay::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WsDisplay::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WsDisplay_UnserializedMessageContext<
            UserType, WsDisplay::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WsDisplay::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  display::Display display;
  
  FrameDecorationValuesPtr frame_decoration_values;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WsDisplay);
};

template <typename StructPtrType>
FrameDecorationValuesPtr FrameDecorationValues::Clone() const {
  return New(
      mojo::Clone(normal_client_area_insets),
      mojo::Clone(maximized_client_area_insets),
      mojo::Clone(max_title_bar_button_width)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FrameDecorationValues>::value>::type*>
bool FrameDecorationValues::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->normal_client_area_insets, other_struct.normal_client_area_insets))
    return false;
  if (!mojo::Equals(this->maximized_client_area_insets, other_struct.maximized_client_area_insets))
    return false;
  if (!mojo::Equals(this->max_title_bar_button_width, other_struct.max_title_bar_button_width))
    return false;
  return true;
}
template <typename StructPtrType>
WindowDataPtr WindowData::Clone() const {
  return New(
      mojo::Clone(parent_id),
      mojo::Clone(window_id),
      mojo::Clone(transient_parent_id),
      mojo::Clone(bounds),
      mojo::Clone(state),
      mojo::Clone(properties),
      mojo::Clone(visible)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WindowData>::value>::type*>
bool WindowData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->parent_id, other_struct.parent_id))
    return false;
  if (!mojo::Equals(this->window_id, other_struct.window_id))
    return false;
  if (!mojo::Equals(this->transient_parent_id, other_struct.transient_parent_id))
    return false;
  if (!mojo::Equals(this->bounds, other_struct.bounds))
    return false;
  if (!mojo::Equals(this->state, other_struct.state))
    return false;
  if (!mojo::Equals(this->properties, other_struct.properties))
    return false;
  if (!mojo::Equals(this->visible, other_struct.visible))
    return false;
  return true;
}
template <typename StructPtrType>
WsDisplayPtr WsDisplay::Clone() const {
  return New(
      mojo::Clone(display),
      mojo::Clone(frame_decoration_values)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WsDisplay>::value>::type*>
bool WsDisplay::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->display, other_struct.display))
    return false;
  if (!mojo::Equals(this->frame_decoration_values, other_struct.frame_decoration_values))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ws

namespace mojo {


template <>
struct  StructTraits<::ws::mojom::FrameDecorationValues::DataView,
                                         ::ws::mojom::FrameDecorationValuesPtr> {
  static bool IsNull(const ::ws::mojom::FrameDecorationValuesPtr& input) { return !input; }
  static void SetToNull(::ws::mojom::FrameDecorationValuesPtr* output) { output->reset(); }

  static const decltype(::ws::mojom::FrameDecorationValues::normal_client_area_insets)& normal_client_area_insets(
      const ::ws::mojom::FrameDecorationValuesPtr& input) {
    return input->normal_client_area_insets;
  }

  static const decltype(::ws::mojom::FrameDecorationValues::maximized_client_area_insets)& maximized_client_area_insets(
      const ::ws::mojom::FrameDecorationValuesPtr& input) {
    return input->maximized_client_area_insets;
  }

  static decltype(::ws::mojom::FrameDecorationValues::max_title_bar_button_width) max_title_bar_button_width(
      const ::ws::mojom::FrameDecorationValuesPtr& input) {
    return input->max_title_bar_button_width;
  }

  static bool Read(::ws::mojom::FrameDecorationValues::DataView input, ::ws::mojom::FrameDecorationValuesPtr* output);
};


template <>
struct  StructTraits<::ws::mojom::WindowData::DataView,
                                         ::ws::mojom::WindowDataPtr> {
  static bool IsNull(const ::ws::mojom::WindowDataPtr& input) { return !input; }
  static void SetToNull(::ws::mojom::WindowDataPtr* output) { output->reset(); }

  static decltype(::ws::mojom::WindowData::parent_id) parent_id(
      const ::ws::mojom::WindowDataPtr& input) {
    return input->parent_id;
  }

  static decltype(::ws::mojom::WindowData::window_id) window_id(
      const ::ws::mojom::WindowDataPtr& input) {
    return input->window_id;
  }

  static decltype(::ws::mojom::WindowData::transient_parent_id) transient_parent_id(
      const ::ws::mojom::WindowDataPtr& input) {
    return input->transient_parent_id;
  }

  static const decltype(::ws::mojom::WindowData::bounds)& bounds(
      const ::ws::mojom::WindowDataPtr& input) {
    return input->bounds;
  }

  static decltype(::ws::mojom::WindowData::state) state(
      const ::ws::mojom::WindowDataPtr& input) {
    return input->state;
  }

  static const decltype(::ws::mojom::WindowData::properties)& properties(
      const ::ws::mojom::WindowDataPtr& input) {
    return input->properties;
  }

  static decltype(::ws::mojom::WindowData::visible) visible(
      const ::ws::mojom::WindowDataPtr& input) {
    return input->visible;
  }

  static bool Read(::ws::mojom::WindowData::DataView input, ::ws::mojom::WindowDataPtr* output);
};


template <>
struct  StructTraits<::ws::mojom::WsDisplay::DataView,
                                         ::ws::mojom::WsDisplayPtr> {
  static bool IsNull(const ::ws::mojom::WsDisplayPtr& input) { return !input; }
  static void SetToNull(::ws::mojom::WsDisplayPtr* output) { output->reset(); }

  static const decltype(::ws::mojom::WsDisplay::display)& display(
      const ::ws::mojom::WsDisplayPtr& input) {
    return input->display;
  }

  static const decltype(::ws::mojom::WsDisplay::frame_decoration_values)& frame_decoration_values(
      const ::ws::mojom::WsDisplayPtr& input) {
    return input->frame_decoration_values;
  }

  static bool Read(::ws::mojom::WsDisplay::DataView input, ::ws::mojom::WsDisplayPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_CONSTANTS_MOJOM_H_