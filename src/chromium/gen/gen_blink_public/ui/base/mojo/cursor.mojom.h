// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_MOJO_CURSOR_MOJOM_H_
#define UI_BASE_MOJO_CURSOR_MOJOM_H_

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
#include "ui/base/mojo/cursor.mojom-shared.h"
#include "ui/base/mojo/cursor.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "skia/public/interfaces/bitmap.mojom.h"
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
#include "ui/base/cursor/cursor.h"
#include "ui/base/cursor/cursor_type.h"




namespace ui {
namespace mojom {








class  Cursor {
 public:
  using DataView = CursorDataView;
  using Data_ = internal::Cursor_Data;

  template <typename... Args>
  static CursorPtr New(Args&&... args) {
    return CursorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CursorPtr From(const U& u) {
    return mojo::TypeConverter<CursorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Cursor>::Convert(*this);
  }


  Cursor();

  Cursor(
      ui::CursorType native_type,
      const gfx::Point& hotspot,
      const SkBitmap& bitmap,
      float device_scale_factor);

  ~Cursor();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CursorPtr>
  CursorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Cursor>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Cursor::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Cursor::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Cursor_UnserializedMessageContext<
            UserType, Cursor::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Cursor::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Cursor::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Cursor_UnserializedMessageContext<
            UserType, Cursor::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Cursor::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ui::CursorType native_type;
  
  gfx::Point hotspot;
  
  SkBitmap bitmap;
  
  float device_scale_factor;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
CursorPtr Cursor::Clone() const {
  return New(
      mojo::Clone(native_type),
      mojo::Clone(hotspot),
      mojo::Clone(bitmap),
      mojo::Clone(device_scale_factor)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Cursor>::value>::type*>
bool Cursor::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->native_type, other_struct.native_type))
    return false;
  if (!mojo::Equals(this->hotspot, other_struct.hotspot))
    return false;
  if (!mojo::Equals(this->bitmap, other_struct.bitmap))
    return false;
  if (!mojo::Equals(this->device_scale_factor, other_struct.device_scale_factor))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::Cursor::DataView,
                                         ::ui::mojom::CursorPtr> {
  static bool IsNull(const ::ui::mojom::CursorPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::CursorPtr* output) { output->reset(); }

  static decltype(::ui::mojom::Cursor::native_type) native_type(
      const ::ui::mojom::CursorPtr& input) {
    return input->native_type;
  }

  static const decltype(::ui::mojom::Cursor::hotspot)& hotspot(
      const ::ui::mojom::CursorPtr& input) {
    return input->hotspot;
  }

  static  decltype(::ui::mojom::Cursor::bitmap)& bitmap(
       ::ui::mojom::CursorPtr& input) {
    return input->bitmap;
  }

  static decltype(::ui::mojom::Cursor::device_scale_factor) device_scale_factor(
      const ::ui::mojom::CursorPtr& input) {
    return input->device_scale_factor;
  }

  static bool Read(::ui::mojom::Cursor::DataView input, ::ui::mojom::CursorPtr* output);
};

}  // namespace mojo

#endif  // UI_BASE_MOJO_CURSOR_MOJOM_H_