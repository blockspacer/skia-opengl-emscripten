// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_GAMMA_RAMP_RGB_ENTRY_MOJOM_H_
#define UI_DISPLAY_MOJO_GAMMA_RAMP_RGB_ENTRY_MOJOM_H_

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
#include "ui/display/mojo/gamma_ramp_rgb_entry.mojom-shared.h"
#include "ui/display/mojo/gamma_ramp_rgb_entry.mojom-forward.h"
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
#include "ui/display/types/gamma_ramp_rgb_entry.h"




namespace display {
namespace mojom {





class  GammaRampRGBEntry {
 public:
  using DataView = GammaRampRGBEntryDataView;
  using Data_ = internal::GammaRampRGBEntry_Data;

  template <typename... Args>
  static GammaRampRGBEntryPtr New(Args&&... args) {
    return GammaRampRGBEntryPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GammaRampRGBEntryPtr From(const U& u) {
    return mojo::TypeConverter<GammaRampRGBEntryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GammaRampRGBEntry>::Convert(*this);
  }


  GammaRampRGBEntry();

  GammaRampRGBEntry(
      uint16_t r,
      uint16_t g,
      uint16_t b);

  ~GammaRampRGBEntry();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GammaRampRGBEntryPtr>
  GammaRampRGBEntryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GammaRampRGBEntry>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GammaRampRGBEntry::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GammaRampRGBEntry::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GammaRampRGBEntry_UnserializedMessageContext<
            UserType, GammaRampRGBEntry::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GammaRampRGBEntry::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GammaRampRGBEntry::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GammaRampRGBEntry_UnserializedMessageContext<
            UserType, GammaRampRGBEntry::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GammaRampRGBEntry::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint16_t r;
  
  uint16_t g;
  
  uint16_t b;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
GammaRampRGBEntryPtr GammaRampRGBEntry::Clone() const {
  return New(
      mojo::Clone(r),
      mojo::Clone(g),
      mojo::Clone(b)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GammaRampRGBEntry>::value>::type*>
bool GammaRampRGBEntry::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->r, other_struct.r))
    return false;
  if (!mojo::Equals(this->g, other_struct.g))
    return false;
  if (!mojo::Equals(this->b, other_struct.b))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace display

namespace mojo {


template <>
struct  StructTraits<::display::mojom::GammaRampRGBEntry::DataView,
                                         ::display::mojom::GammaRampRGBEntryPtr> {
  static bool IsNull(const ::display::mojom::GammaRampRGBEntryPtr& input) { return !input; }
  static void SetToNull(::display::mojom::GammaRampRGBEntryPtr* output) { output->reset(); }

  static decltype(::display::mojom::GammaRampRGBEntry::r) r(
      const ::display::mojom::GammaRampRGBEntryPtr& input) {
    return input->r;
  }

  static decltype(::display::mojom::GammaRampRGBEntry::g) g(
      const ::display::mojom::GammaRampRGBEntryPtr& input) {
    return input->g;
  }

  static decltype(::display::mojom::GammaRampRGBEntry::b) b(
      const ::display::mojom::GammaRampRGBEntryPtr& input) {
    return input->b;
  }

  static bool Read(::display::mojom::GammaRampRGBEntry::DataView input, ::display::mojom::GammaRampRGBEntryPtr* output);
};

}  // namespace mojo

#endif  // UI_DISPLAY_MOJO_GAMMA_RAMP_RGB_ENTRY_MOJOM_H_