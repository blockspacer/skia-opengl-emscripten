// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_BLINK_H_
#define UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_BLINK_H_

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
#include "ui/display/mojo/display_snapshot.mojom-shared.h"
#include "ui/display/mojo/display_snapshot.mojom-blink-forward.h"
#include "mojo/public/mojom/base/file_path.mojom-blink.h"
#include "ui/display/mojo/display_constants.mojom-blink.h"
#include "ui/display/mojo/display_mode.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "ui/gfx/mojo/color_space.mojom-blink.h"

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








class  DisplaySnapshot {
 public:
  using DataView = DisplaySnapshotDataView;
  using Data_ = internal::DisplaySnapshot_Data;

  template <typename... Args>
  static DisplaySnapshotPtr New(Args&&... args) {
    return DisplaySnapshotPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DisplaySnapshotPtr From(const U& u) {
    return mojo::TypeConverter<DisplaySnapshotPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DisplaySnapshot>::Convert(*this);
  }


  DisplaySnapshot();

  DisplaySnapshot(
      int64_t display_id,
      const ::blink::WebPoint& origin,
      const ::blink::WebSize& physical_size,
      ::display::mojom::blink::DisplayConnectionType type,
      bool is_aspect_preserving_scaling,
      bool has_overscan,
      bool has_color_correction_matrix,
      bool color_correction_in_linear_space,
      ::gfx::mojom::blink::ColorSpacePtr color_space,
      const WTF::String& display_name,
      const base::FilePath& sys_path,
      WTF::Vector<::display::mojom::blink::DisplayModePtr> modes,
      const WTF::Vector<uint8_t>& edid,
      uint64_t current_mode_index,
      bool has_current_mode,
      uint64_t native_mode_index,
      bool has_native_mode,
      int64_t product_code,
      int32_t year_of_manufacture,
      const ::blink::WebSize& maximum_cursor_size);

  ~DisplaySnapshot();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DisplaySnapshotPtr>
  DisplaySnapshotPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DisplaySnapshot>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DisplaySnapshot::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DisplaySnapshot::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DisplaySnapshot_UnserializedMessageContext<
            UserType, DisplaySnapshot::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DisplaySnapshot::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DisplaySnapshot::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DisplaySnapshot_UnserializedMessageContext<
            UserType, DisplaySnapshot::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DisplaySnapshot::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t display_id;
  
  ::blink::WebPoint origin;
  
  ::blink::WebSize physical_size;
  
  ::display::mojom::blink::DisplayConnectionType type;
  
  bool is_aspect_preserving_scaling;
  
  bool has_overscan;
  
  bool has_color_correction_matrix;
  
  bool color_correction_in_linear_space;
  
  ::gfx::mojom::blink::ColorSpacePtr color_space;
  
  WTF::String display_name;
  
  base::FilePath sys_path;
  
  WTF::Vector<::display::mojom::blink::DisplayModePtr> modes;
  
  WTF::Vector<uint8_t> edid;
  
  uint64_t current_mode_index;
  
  bool has_current_mode;
  
  uint64_t native_mode_index;
  
  bool has_native_mode;
  
  int64_t product_code;
  
  int32_t year_of_manufacture;
  
  ::blink::WebSize maximum_cursor_size;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DisplaySnapshot);
};

template <typename StructPtrType>
DisplaySnapshotPtr DisplaySnapshot::Clone() const {
  return New(
      mojo::Clone(display_id),
      mojo::Clone(origin),
      mojo::Clone(physical_size),
      mojo::Clone(type),
      mojo::Clone(is_aspect_preserving_scaling),
      mojo::Clone(has_overscan),
      mojo::Clone(has_color_correction_matrix),
      mojo::Clone(color_correction_in_linear_space),
      mojo::Clone(color_space),
      mojo::Clone(display_name),
      mojo::Clone(sys_path),
      mojo::Clone(modes),
      mojo::Clone(edid),
      mojo::Clone(current_mode_index),
      mojo::Clone(has_current_mode),
      mojo::Clone(native_mode_index),
      mojo::Clone(has_native_mode),
      mojo::Clone(product_code),
      mojo::Clone(year_of_manufacture),
      mojo::Clone(maximum_cursor_size)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DisplaySnapshot>::value>::type*>
bool DisplaySnapshot::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->display_id, other_struct.display_id))
    return false;
  if (!mojo::Equals(this->origin, other_struct.origin))
    return false;
  if (!mojo::Equals(this->physical_size, other_struct.physical_size))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->is_aspect_preserving_scaling, other_struct.is_aspect_preserving_scaling))
    return false;
  if (!mojo::Equals(this->has_overscan, other_struct.has_overscan))
    return false;
  if (!mojo::Equals(this->has_color_correction_matrix, other_struct.has_color_correction_matrix))
    return false;
  if (!mojo::Equals(this->color_correction_in_linear_space, other_struct.color_correction_in_linear_space))
    return false;
  if (!mojo::Equals(this->color_space, other_struct.color_space))
    return false;
  if (!mojo::Equals(this->display_name, other_struct.display_name))
    return false;
  if (!mojo::Equals(this->sys_path, other_struct.sys_path))
    return false;
  if (!mojo::Equals(this->modes, other_struct.modes))
    return false;
  if (!mojo::Equals(this->edid, other_struct.edid))
    return false;
  if (!mojo::Equals(this->current_mode_index, other_struct.current_mode_index))
    return false;
  if (!mojo::Equals(this->has_current_mode, other_struct.has_current_mode))
    return false;
  if (!mojo::Equals(this->native_mode_index, other_struct.native_mode_index))
    return false;
  if (!mojo::Equals(this->has_native_mode, other_struct.has_native_mode))
    return false;
  if (!mojo::Equals(this->product_code, other_struct.product_code))
    return false;
  if (!mojo::Equals(this->year_of_manufacture, other_struct.year_of_manufacture))
    return false;
  if (!mojo::Equals(this->maximum_cursor_size, other_struct.maximum_cursor_size))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace display

namespace mojo {


template <>
struct  StructTraits<::display::mojom::blink::DisplaySnapshot::DataView,
                                         ::display::mojom::blink::DisplaySnapshotPtr> {
  static bool IsNull(const ::display::mojom::blink::DisplaySnapshotPtr& input) { return !input; }
  static void SetToNull(::display::mojom::blink::DisplaySnapshotPtr* output) { output->reset(); }

  static decltype(::display::mojom::blink::DisplaySnapshot::display_id) display_id(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->display_id;
  }

  static const decltype(::display::mojom::blink::DisplaySnapshot::origin)& origin(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->origin;
  }

  static const decltype(::display::mojom::blink::DisplaySnapshot::physical_size)& physical_size(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->physical_size;
  }

  static decltype(::display::mojom::blink::DisplaySnapshot::type) type(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->type;
  }

  static decltype(::display::mojom::blink::DisplaySnapshot::is_aspect_preserving_scaling) is_aspect_preserving_scaling(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->is_aspect_preserving_scaling;
  }

  static decltype(::display::mojom::blink::DisplaySnapshot::has_overscan) has_overscan(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->has_overscan;
  }

  static decltype(::display::mojom::blink::DisplaySnapshot::has_color_correction_matrix) has_color_correction_matrix(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->has_color_correction_matrix;
  }

  static decltype(::display::mojom::blink::DisplaySnapshot::color_correction_in_linear_space) color_correction_in_linear_space(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->color_correction_in_linear_space;
  }

  static const decltype(::display::mojom::blink::DisplaySnapshot::color_space)& color_space(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->color_space;
  }

  static const decltype(::display::mojom::blink::DisplaySnapshot::display_name)& display_name(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->display_name;
  }

  static const decltype(::display::mojom::blink::DisplaySnapshot::sys_path)& sys_path(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->sys_path;
  }

  static const decltype(::display::mojom::blink::DisplaySnapshot::modes)& modes(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->modes;
  }

  static const decltype(::display::mojom::blink::DisplaySnapshot::edid)& edid(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->edid;
  }

  static decltype(::display::mojom::blink::DisplaySnapshot::current_mode_index) current_mode_index(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->current_mode_index;
  }

  static decltype(::display::mojom::blink::DisplaySnapshot::has_current_mode) has_current_mode(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->has_current_mode;
  }

  static decltype(::display::mojom::blink::DisplaySnapshot::native_mode_index) native_mode_index(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->native_mode_index;
  }

  static decltype(::display::mojom::blink::DisplaySnapshot::has_native_mode) has_native_mode(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->has_native_mode;
  }

  static decltype(::display::mojom::blink::DisplaySnapshot::product_code) product_code(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->product_code;
  }

  static decltype(::display::mojom::blink::DisplaySnapshot::year_of_manufacture) year_of_manufacture(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->year_of_manufacture;
  }

  static const decltype(::display::mojom::blink::DisplaySnapshot::maximum_cursor_size)& maximum_cursor_size(
      const ::display::mojom::blink::DisplaySnapshotPtr& input) {
    return input->maximum_cursor_size;
  }

  static bool Read(::display::mojom::blink::DisplaySnapshot::DataView input, ::display::mojom::blink::DisplaySnapshotPtr* output);
};

}  // namespace mojo

#endif  // UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_BLINK_H_