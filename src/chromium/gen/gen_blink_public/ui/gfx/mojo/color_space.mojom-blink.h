// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_COLOR_SPACE_MOJOM_BLINK_H_
#define UI_GFX_MOJO_COLOR_SPACE_MOJOM_BLINK_H_

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
#include "ui/gfx/mojo/color_space.mojom-shared.h"
#include "ui/gfx/mojo/color_space.mojom-blink-forward.h"

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
struct gfx_mojom_internal_ColorSpacePrimaryID_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::ColorSpacePrimaryID& value) {
    using utype = std::underlying_type<::gfx::mojom::ColorSpacePrimaryID>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::ColorSpacePrimaryID& left, const ::gfx::mojom::ColorSpacePrimaryID& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gfx::mojom::ColorSpacePrimaryID>
    : public GenericHashTraits<::gfx::mojom::ColorSpacePrimaryID> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gfx::mojom::ColorSpacePrimaryID& value) {
    return value == static_cast<::gfx::mojom::ColorSpacePrimaryID>(-1000000);
  }
  static void ConstructDeletedValue(::gfx::mojom::ColorSpacePrimaryID& slot, bool) {
    slot = static_cast<::gfx::mojom::ColorSpacePrimaryID>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::ColorSpacePrimaryID& value) {
    return value == static_cast<::gfx::mojom::ColorSpacePrimaryID>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct gfx_mojom_internal_ColorSpaceTransferID_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::ColorSpaceTransferID& value) {
    using utype = std::underlying_type<::gfx::mojom::ColorSpaceTransferID>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::ColorSpaceTransferID& left, const ::gfx::mojom::ColorSpaceTransferID& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gfx::mojom::ColorSpaceTransferID>
    : public GenericHashTraits<::gfx::mojom::ColorSpaceTransferID> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gfx::mojom::ColorSpaceTransferID& value) {
    return value == static_cast<::gfx::mojom::ColorSpaceTransferID>(-1000000);
  }
  static void ConstructDeletedValue(::gfx::mojom::ColorSpaceTransferID& slot, bool) {
    slot = static_cast<::gfx::mojom::ColorSpaceTransferID>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::ColorSpaceTransferID& value) {
    return value == static_cast<::gfx::mojom::ColorSpaceTransferID>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct gfx_mojom_internal_ColorSpaceMatrixID_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::ColorSpaceMatrixID& value) {
    using utype = std::underlying_type<::gfx::mojom::ColorSpaceMatrixID>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::ColorSpaceMatrixID& left, const ::gfx::mojom::ColorSpaceMatrixID& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gfx::mojom::ColorSpaceMatrixID>
    : public GenericHashTraits<::gfx::mojom::ColorSpaceMatrixID> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gfx::mojom::ColorSpaceMatrixID& value) {
    return value == static_cast<::gfx::mojom::ColorSpaceMatrixID>(-1000000);
  }
  static void ConstructDeletedValue(::gfx::mojom::ColorSpaceMatrixID& slot, bool) {
    slot = static_cast<::gfx::mojom::ColorSpaceMatrixID>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::ColorSpaceMatrixID& value) {
    return value == static_cast<::gfx::mojom::ColorSpaceMatrixID>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct gfx_mojom_internal_ColorSpaceRangeID_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::ColorSpaceRangeID& value) {
    using utype = std::underlying_type<::gfx::mojom::ColorSpaceRangeID>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::ColorSpaceRangeID& left, const ::gfx::mojom::ColorSpaceRangeID& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gfx::mojom::ColorSpaceRangeID>
    : public GenericHashTraits<::gfx::mojom::ColorSpaceRangeID> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gfx::mojom::ColorSpaceRangeID& value) {
    return value == static_cast<::gfx::mojom::ColorSpaceRangeID>(-1000000);
  }
  static void ConstructDeletedValue(::gfx::mojom::ColorSpaceRangeID& slot, bool) {
    slot = static_cast<::gfx::mojom::ColorSpaceRangeID>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::ColorSpaceRangeID& value) {
    return value == static_cast<::gfx::mojom::ColorSpaceRangeID>(-1000001);
  }
};
}  // namespace WTF


namespace gfx {
namespace mojom {
namespace blink {








class  ColorSpace {
 public:
  using DataView = ColorSpaceDataView;
  using Data_ = internal::ColorSpace_Data;

  template <typename... Args>
  static ColorSpacePtr New(Args&&... args) {
    return ColorSpacePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ColorSpacePtr From(const U& u) {
    return mojo::TypeConverter<ColorSpacePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ColorSpace>::Convert(*this);
  }


  ColorSpace();

  ColorSpace(
      ColorSpacePrimaryID primaries,
      ColorSpaceTransferID transfer,
      ColorSpaceMatrixID matrix,
      ColorSpaceRangeID range,
      const WTF::Vector<float>& custom_primary_matrix,
      const WTF::Vector<float>& custom_transfer_params);

  ~ColorSpace();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ColorSpacePtr>
  ColorSpacePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ColorSpace>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ColorSpace::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ColorSpace::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ColorSpace_UnserializedMessageContext<
            UserType, ColorSpace::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ColorSpace::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ColorSpace::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ColorSpace_UnserializedMessageContext<
            UserType, ColorSpace::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ColorSpace::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ColorSpacePrimaryID primaries;
  
  ColorSpaceTransferID transfer;
  
  ColorSpaceMatrixID matrix;
  
  ColorSpaceRangeID range;
  
  WTF::Vector<float> custom_primary_matrix;
  
  WTF::Vector<float> custom_transfer_params;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ColorSpacePtr ColorSpace::Clone() const {
  return New(
      mojo::Clone(primaries),
      mojo::Clone(transfer),
      mojo::Clone(matrix),
      mojo::Clone(range),
      mojo::Clone(custom_primary_matrix),
      mojo::Clone(custom_transfer_params)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ColorSpace>::value>::type*>
bool ColorSpace::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->primaries, other_struct.primaries))
    return false;
  if (!mojo::Equals(this->transfer, other_struct.transfer))
    return false;
  if (!mojo::Equals(this->matrix, other_struct.matrix))
    return false;
  if (!mojo::Equals(this->range, other_struct.range))
    return false;
  if (!mojo::Equals(this->custom_primary_matrix, other_struct.custom_primary_matrix))
    return false;
  if (!mojo::Equals(this->custom_transfer_params, other_struct.custom_transfer_params))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::blink::ColorSpace::DataView,
                                         ::gfx::mojom::blink::ColorSpacePtr> {
  static bool IsNull(const ::gfx::mojom::blink::ColorSpacePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::blink::ColorSpacePtr* output) { output->reset(); }

  static decltype(::gfx::mojom::blink::ColorSpace::primaries) primaries(
      const ::gfx::mojom::blink::ColorSpacePtr& input) {
    return input->primaries;
  }

  static decltype(::gfx::mojom::blink::ColorSpace::transfer) transfer(
      const ::gfx::mojom::blink::ColorSpacePtr& input) {
    return input->transfer;
  }

  static decltype(::gfx::mojom::blink::ColorSpace::matrix) matrix(
      const ::gfx::mojom::blink::ColorSpacePtr& input) {
    return input->matrix;
  }

  static decltype(::gfx::mojom::blink::ColorSpace::range) range(
      const ::gfx::mojom::blink::ColorSpacePtr& input) {
    return input->range;
  }

  static const decltype(::gfx::mojom::blink::ColorSpace::custom_primary_matrix)& custom_primary_matrix(
      const ::gfx::mojom::blink::ColorSpacePtr& input) {
    return input->custom_primary_matrix;
  }

  static const decltype(::gfx::mojom::blink::ColorSpace::custom_transfer_params)& custom_transfer_params(
      const ::gfx::mojom::blink::ColorSpacePtr& input) {
    return input->custom_transfer_params;
  }

  static bool Read(::gfx::mojom::blink::ColorSpace::DataView input, ::gfx::mojom::blink::ColorSpacePtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_MOJO_COLOR_SPACE_MOJOM_BLINK_H_