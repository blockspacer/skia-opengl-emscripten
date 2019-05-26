// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_BLINK_H_
#define UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_BLINK_H_

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
#include "ui/display/mojo/display_layout.mojom-shared.h"
#include "ui/display/mojo/display_layout.mojom-blink-forward.h"

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




namespace WTF {
struct display_mojom_internal_Position_DataHashFn {
  static unsigned GetHash(const ::display::mojom::Position& value) {
    using utype = std::underlying_type<::display::mojom::Position>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::display::mojom::Position& left, const ::display::mojom::Position& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::display::mojom::Position>
    : public GenericHashTraits<::display::mojom::Position> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::display::mojom::Position& value) {
    return value == static_cast<::display::mojom::Position>(-1000000);
  }
  static void ConstructDeletedValue(::display::mojom::Position& slot, bool) {
    slot = static_cast<::display::mojom::Position>(-1000001);
  }
  static bool IsDeletedValue(const ::display::mojom::Position& value) {
    return value == static_cast<::display::mojom::Position>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct display_mojom_internal_OffsetReference_DataHashFn {
  static unsigned GetHash(const ::display::mojom::OffsetReference& value) {
    using utype = std::underlying_type<::display::mojom::OffsetReference>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::display::mojom::OffsetReference& left, const ::display::mojom::OffsetReference& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::display::mojom::OffsetReference>
    : public GenericHashTraits<::display::mojom::OffsetReference> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::display::mojom::OffsetReference& value) {
    return value == static_cast<::display::mojom::OffsetReference>(-1000000);
  }
  static void ConstructDeletedValue(::display::mojom::OffsetReference& slot, bool) {
    slot = static_cast<::display::mojom::OffsetReference>(-1000001);
  }
  static bool IsDeletedValue(const ::display::mojom::OffsetReference& value) {
    return value == static_cast<::display::mojom::OffsetReference>(-1000001);
  }
};
}  // namespace WTF


namespace display {
namespace mojom {
namespace blink {









class  DisplayPlacement {
 public:
  using DataView = DisplayPlacementDataView;
  using Data_ = internal::DisplayPlacement_Data;

  template <typename... Args>
  static DisplayPlacementPtr New(Args&&... args) {
    return DisplayPlacementPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DisplayPlacementPtr From(const U& u) {
    return mojo::TypeConverter<DisplayPlacementPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DisplayPlacement>::Convert(*this);
  }


  DisplayPlacement();

  DisplayPlacement(
      int64_t display_id,
      int64_t parent_display_id,
      Position position,
      int32_t offset,
      OffsetReference offset_reference);

  ~DisplayPlacement();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DisplayPlacementPtr>
  DisplayPlacementPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DisplayPlacement>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DisplayPlacement::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DisplayPlacement::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DisplayPlacement_UnserializedMessageContext<
            UserType, DisplayPlacement::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DisplayPlacement::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DisplayPlacement::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DisplayPlacement_UnserializedMessageContext<
            UserType, DisplayPlacement::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DisplayPlacement::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t display_id;
  
  int64_t parent_display_id;
  
  Position position;
  
  int32_t offset;
  
  OffsetReference offset_reference;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  DisplayLayout {
 public:
  using DataView = DisplayLayoutDataView;
  using Data_ = internal::DisplayLayout_Data;

  template <typename... Args>
  static DisplayLayoutPtr New(Args&&... args) {
    return DisplayLayoutPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DisplayLayoutPtr From(const U& u) {
    return mojo::TypeConverter<DisplayLayoutPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DisplayLayout>::Convert(*this);
  }


  DisplayLayout();

  DisplayLayout(
      bool default_unified,
      int64_t primary_display_id,
      WTF::Vector<DisplayPlacementPtr> placement_list);

  ~DisplayLayout();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DisplayLayoutPtr>
  DisplayLayoutPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DisplayLayout>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DisplayLayout::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DisplayLayout::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DisplayLayout_UnserializedMessageContext<
            UserType, DisplayLayout::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DisplayLayout::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DisplayLayout::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DisplayLayout_UnserializedMessageContext<
            UserType, DisplayLayout::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DisplayLayout::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool default_unified;
  
  int64_t primary_display_id;
  
  WTF::Vector<DisplayPlacementPtr> placement_list;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DisplayLayout);
};

template <typename StructPtrType>
DisplayPlacementPtr DisplayPlacement::Clone() const {
  return New(
      mojo::Clone(display_id),
      mojo::Clone(parent_display_id),
      mojo::Clone(position),
      mojo::Clone(offset),
      mojo::Clone(offset_reference)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DisplayPlacement>::value>::type*>
bool DisplayPlacement::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->display_id, other_struct.display_id))
    return false;
  if (!mojo::Equals(this->parent_display_id, other_struct.parent_display_id))
    return false;
  if (!mojo::Equals(this->position, other_struct.position))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->offset_reference, other_struct.offset_reference))
    return false;
  return true;
}
template <typename StructPtrType>
DisplayLayoutPtr DisplayLayout::Clone() const {
  return New(
      mojo::Clone(default_unified),
      mojo::Clone(primary_display_id),
      mojo::Clone(placement_list)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DisplayLayout>::value>::type*>
bool DisplayLayout::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->default_unified, other_struct.default_unified))
    return false;
  if (!mojo::Equals(this->primary_display_id, other_struct.primary_display_id))
    return false;
  if (!mojo::Equals(this->placement_list, other_struct.placement_list))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace display

namespace mojo {


template <>
struct  StructTraits<::display::mojom::blink::DisplayPlacement::DataView,
                                         ::display::mojom::blink::DisplayPlacementPtr> {
  static bool IsNull(const ::display::mojom::blink::DisplayPlacementPtr& input) { return !input; }
  static void SetToNull(::display::mojom::blink::DisplayPlacementPtr* output) { output->reset(); }

  static decltype(::display::mojom::blink::DisplayPlacement::display_id) display_id(
      const ::display::mojom::blink::DisplayPlacementPtr& input) {
    return input->display_id;
  }

  static decltype(::display::mojom::blink::DisplayPlacement::parent_display_id) parent_display_id(
      const ::display::mojom::blink::DisplayPlacementPtr& input) {
    return input->parent_display_id;
  }

  static decltype(::display::mojom::blink::DisplayPlacement::position) position(
      const ::display::mojom::blink::DisplayPlacementPtr& input) {
    return input->position;
  }

  static decltype(::display::mojom::blink::DisplayPlacement::offset) offset(
      const ::display::mojom::blink::DisplayPlacementPtr& input) {
    return input->offset;
  }

  static decltype(::display::mojom::blink::DisplayPlacement::offset_reference) offset_reference(
      const ::display::mojom::blink::DisplayPlacementPtr& input) {
    return input->offset_reference;
  }

  static bool Read(::display::mojom::blink::DisplayPlacement::DataView input, ::display::mojom::blink::DisplayPlacementPtr* output);
};


template <>
struct  StructTraits<::display::mojom::blink::DisplayLayout::DataView,
                                         ::display::mojom::blink::DisplayLayoutPtr> {
  static bool IsNull(const ::display::mojom::blink::DisplayLayoutPtr& input) { return !input; }
  static void SetToNull(::display::mojom::blink::DisplayLayoutPtr* output) { output->reset(); }

  static decltype(::display::mojom::blink::DisplayLayout::default_unified) default_unified(
      const ::display::mojom::blink::DisplayLayoutPtr& input) {
    return input->default_unified;
  }

  static decltype(::display::mojom::blink::DisplayLayout::primary_display_id) primary_display_id(
      const ::display::mojom::blink::DisplayLayoutPtr& input) {
    return input->primary_display_id;
  }

  static const decltype(::display::mojom::blink::DisplayLayout::placement_list)& placement_list(
      const ::display::mojom::blink::DisplayLayoutPtr& input) {
    return input->placement_list;
  }

  static bool Read(::display::mojom::blink::DisplayLayout::DataView input, ::display::mojom::blink::DisplayLayoutPtr* output);
};

}  // namespace mojo

#endif  // UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_BLINK_H_