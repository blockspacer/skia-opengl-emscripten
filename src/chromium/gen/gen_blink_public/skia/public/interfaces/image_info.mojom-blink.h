// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_BLINK_H_
#define SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_BLINK_H_

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
#include "skia/public/interfaces/image_info.mojom-shared.h"
#include "skia/public/interfaces/image_info.mojom-blink-forward.h"

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
struct skia_mojom_internal_ColorType_DataHashFn {
  static unsigned GetHash(const ::skia::mojom::ColorType& value) {
    using utype = std::underlying_type<::skia::mojom::ColorType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::skia::mojom::ColorType& left, const ::skia::mojom::ColorType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::skia::mojom::ColorType>
    : public GenericHashTraits<::skia::mojom::ColorType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::skia::mojom::ColorType& value) {
    return value == static_cast<::skia::mojom::ColorType>(-1000000);
  }
  static void ConstructDeletedValue(::skia::mojom::ColorType& slot, bool) {
    slot = static_cast<::skia::mojom::ColorType>(-1000001);
  }
  static bool IsDeletedValue(const ::skia::mojom::ColorType& value) {
    return value == static_cast<::skia::mojom::ColorType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct skia_mojom_internal_AlphaType_DataHashFn {
  static unsigned GetHash(const ::skia::mojom::AlphaType& value) {
    using utype = std::underlying_type<::skia::mojom::AlphaType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::skia::mojom::AlphaType& left, const ::skia::mojom::AlphaType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::skia::mojom::AlphaType>
    : public GenericHashTraits<::skia::mojom::AlphaType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::skia::mojom::AlphaType& value) {
    return value == static_cast<::skia::mojom::AlphaType>(-1000000);
  }
  static void ConstructDeletedValue(::skia::mojom::AlphaType& slot, bool) {
    slot = static_cast<::skia::mojom::AlphaType>(-1000001);
  }
  static bool IsDeletedValue(const ::skia::mojom::AlphaType& value) {
    return value == static_cast<::skia::mojom::AlphaType>(-1000001);
  }
};
}  // namespace WTF


namespace skia {
namespace mojom {
namespace blink {








class  ImageInfo {
 public:
  using DataView = ImageInfoDataView;
  using Data_ = internal::ImageInfo_Data;

  template <typename... Args>
  static ImageInfoPtr New(Args&&... args) {
    return ImageInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ImageInfoPtr From(const U& u) {
    return mojo::TypeConverter<ImageInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ImageInfo>::Convert(*this);
  }


  ImageInfo();

  ImageInfo(
      ColorType color_type,
      AlphaType alpha_type,
      const WTF::Vector<uint8_t>& serialized_color_space,
      uint32_t width,
      uint32_t height);

  ~ImageInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ImageInfoPtr>
  ImageInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ImageInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ImageInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ImageInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ImageInfo_UnserializedMessageContext<
            UserType, ImageInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ImageInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ImageInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ImageInfo_UnserializedMessageContext<
            UserType, ImageInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ImageInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ColorType color_type;
  
  AlphaType alpha_type;
  
  WTF::Vector<uint8_t> serialized_color_space;
  
  uint32_t width;
  
  uint32_t height;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ImageInfoPtr ImageInfo::Clone() const {
  return New(
      mojo::Clone(color_type),
      mojo::Clone(alpha_type),
      mojo::Clone(serialized_color_space),
      mojo::Clone(width),
      mojo::Clone(height)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ImageInfo>::value>::type*>
bool ImageInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->color_type, other_struct.color_type))
    return false;
  if (!mojo::Equals(this->alpha_type, other_struct.alpha_type))
    return false;
  if (!mojo::Equals(this->serialized_color_space, other_struct.serialized_color_space))
    return false;
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->height, other_struct.height))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace skia

namespace mojo {


template <>
struct  StructTraits<::skia::mojom::blink::ImageInfo::DataView,
                                         ::skia::mojom::blink::ImageInfoPtr> {
  static bool IsNull(const ::skia::mojom::blink::ImageInfoPtr& input) { return !input; }
  static void SetToNull(::skia::mojom::blink::ImageInfoPtr* output) { output->reset(); }

  static decltype(::skia::mojom::blink::ImageInfo::color_type) color_type(
      const ::skia::mojom::blink::ImageInfoPtr& input) {
    return input->color_type;
  }

  static decltype(::skia::mojom::blink::ImageInfo::alpha_type) alpha_type(
      const ::skia::mojom::blink::ImageInfoPtr& input) {
    return input->alpha_type;
  }

  static const decltype(::skia::mojom::blink::ImageInfo::serialized_color_space)& serialized_color_space(
      const ::skia::mojom::blink::ImageInfoPtr& input) {
    return input->serialized_color_space;
  }

  static decltype(::skia::mojom::blink::ImageInfo::width) width(
      const ::skia::mojom::blink::ImageInfoPtr& input) {
    return input->width;
  }

  static decltype(::skia::mojom::blink::ImageInfo::height) height(
      const ::skia::mojom::blink::ImageInfoPtr& input) {
    return input->height;
  }

  static bool Read(::skia::mojom::blink::ImageInfo::DataView input, ::skia::mojom::blink::ImageInfoPtr* output);
};

}  // namespace mojo

#endif  // SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_BLINK_H_