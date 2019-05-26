// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_MODE_MOJOM_BLINK_H_
#define UI_DISPLAY_MOJO_DISPLAY_MODE_MOJOM_BLINK_H_

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
#include "ui/display/mojo/display_mode.mojom-shared.h"
#include "ui/display/mojo/display_mode.mojom-blink-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"

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




namespace display {
namespace mojom {
namespace blink {








class  DisplayMode {
 public:
  using DataView = DisplayModeDataView;
  using Data_ = internal::DisplayMode_Data;

  template <typename... Args>
  static DisplayModePtr New(Args&&... args) {
    return DisplayModePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DisplayModePtr From(const U& u) {
    return mojo::TypeConverter<DisplayModePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DisplayMode>::Convert(*this);
  }


  DisplayMode();

  DisplayMode(
      const ::blink::WebSize& size,
      bool is_interlaced,
      float refresh_rate);

  ~DisplayMode();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DisplayModePtr>
  DisplayModePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DisplayMode>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DisplayMode::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DisplayMode::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DisplayMode_UnserializedMessageContext<
            UserType, DisplayMode::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DisplayMode::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DisplayMode::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DisplayMode_UnserializedMessageContext<
            UserType, DisplayMode::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DisplayMode::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::WebSize size;
  
  bool is_interlaced;
  
  float refresh_rate;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
DisplayModePtr DisplayMode::Clone() const {
  return New(
      mojo::Clone(size),
      mojo::Clone(is_interlaced),
      mojo::Clone(refresh_rate)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DisplayMode>::value>::type*>
bool DisplayMode::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->is_interlaced, other_struct.is_interlaced))
    return false;
  if (!mojo::Equals(this->refresh_rate, other_struct.refresh_rate))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace display

namespace mojo {


template <>
struct  StructTraits<::display::mojom::blink::DisplayMode::DataView,
                                         ::display::mojom::blink::DisplayModePtr> {
  static bool IsNull(const ::display::mojom::blink::DisplayModePtr& input) { return !input; }
  static void SetToNull(::display::mojom::blink::DisplayModePtr* output) { output->reset(); }

  static const decltype(::display::mojom::blink::DisplayMode::size)& size(
      const ::display::mojom::blink::DisplayModePtr& input) {
    return input->size;
  }

  static decltype(::display::mojom::blink::DisplayMode::is_interlaced) is_interlaced(
      const ::display::mojom::blink::DisplayModePtr& input) {
    return input->is_interlaced;
  }

  static decltype(::display::mojom::blink::DisplayMode::refresh_rate) refresh_rate(
      const ::display::mojom::blink::DisplayModePtr& input) {
    return input->refresh_rate;
  }

  static bool Read(::display::mojom::blink::DisplayMode::DataView input, ::display::mojom::blink::DisplayModePtr* output);
};

}  // namespace mojo

#endif  // UI_DISPLAY_MOJO_DISPLAY_MODE_MOJOM_BLINK_H_