// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_BLINK_H_
#define SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_BLINK_H_

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
#include "skia/public/interfaces/bitmap.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom-blink-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink.h"
#include "skia/public/interfaces/image_info.mojom-blink.h"

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
#include "third_party/skia/include/core/SkBitmap.h"




namespace skia {
namespace mojom {
namespace blink {









class  Bitmap {
 public:
  using DataView = BitmapDataView;
  using Data_ = internal::Bitmap_Data;

  template <typename... Args>
  static BitmapPtr New(Args&&... args) {
    return BitmapPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BitmapPtr From(const U& u) {
    return mojo::TypeConverter<BitmapPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Bitmap>::Convert(*this);
  }


  Bitmap();

  Bitmap(
      ::skia::mojom::blink::ImageInfoPtr image_info,
      uint64_t row_bytes,
      mojo_base::BigBuffer pixel_data);

  ~Bitmap();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BitmapPtr>
  BitmapPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Bitmap>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Bitmap::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Bitmap::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Bitmap_UnserializedMessageContext<
            UserType, Bitmap::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Bitmap::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Bitmap::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Bitmap_UnserializedMessageContext<
            UserType, Bitmap::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Bitmap::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::skia::mojom::blink::ImageInfoPtr image_info;
  
  uint64_t row_bytes;
  
  mojo_base::BigBuffer pixel_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Bitmap);
};





class  InlineBitmap {
 public:
  using DataView = InlineBitmapDataView;
  using Data_ = internal::InlineBitmap_Data;

  template <typename... Args>
  static InlineBitmapPtr New(Args&&... args) {
    return InlineBitmapPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static InlineBitmapPtr From(const U& u) {
    return mojo::TypeConverter<InlineBitmapPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, InlineBitmap>::Convert(*this);
  }


  InlineBitmap();

  InlineBitmap(
      ::skia::mojom::blink::ImageInfoPtr image_info,
      uint64_t row_bytes,
      const WTF::Vector<uint8_t>& pixel_data);

  ~InlineBitmap();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = InlineBitmapPtr>
  InlineBitmapPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, InlineBitmap>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        InlineBitmap::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        InlineBitmap::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::InlineBitmap_UnserializedMessageContext<
            UserType, InlineBitmap::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<InlineBitmap::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return InlineBitmap::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::InlineBitmap_UnserializedMessageContext<
            UserType, InlineBitmap::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<InlineBitmap::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::skia::mojom::blink::ImageInfoPtr image_info;
  
  uint64_t row_bytes;
  
  WTF::Vector<uint8_t> pixel_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(InlineBitmap);
};

template <typename StructPtrType>
BitmapPtr Bitmap::Clone() const {
  return New(
      mojo::Clone(image_info),
      mojo::Clone(row_bytes),
      mojo::Clone(pixel_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Bitmap>::value>::type*>
bool Bitmap::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->image_info, other_struct.image_info))
    return false;
  if (!mojo::Equals(this->row_bytes, other_struct.row_bytes))
    return false;
  if (!mojo::Equals(this->pixel_data, other_struct.pixel_data))
    return false;
  return true;
}
template <typename StructPtrType>
InlineBitmapPtr InlineBitmap::Clone() const {
  return New(
      mojo::Clone(image_info),
      mojo::Clone(row_bytes),
      mojo::Clone(pixel_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, InlineBitmap>::value>::type*>
bool InlineBitmap::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->image_info, other_struct.image_info))
    return false;
  if (!mojo::Equals(this->row_bytes, other_struct.row_bytes))
    return false;
  if (!mojo::Equals(this->pixel_data, other_struct.pixel_data))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace skia

namespace mojo {


template <>
struct  StructTraits<::skia::mojom::blink::Bitmap::DataView,
                                         ::skia::mojom::blink::BitmapPtr> {
  static bool IsNull(const ::skia::mojom::blink::BitmapPtr& input) { return !input; }
  static void SetToNull(::skia::mojom::blink::BitmapPtr* output) { output->reset(); }

  static const decltype(::skia::mojom::blink::Bitmap::image_info)& image_info(
      const ::skia::mojom::blink::BitmapPtr& input) {
    return input->image_info;
  }

  static decltype(::skia::mojom::blink::Bitmap::row_bytes) row_bytes(
      const ::skia::mojom::blink::BitmapPtr& input) {
    return input->row_bytes;
  }

  static  decltype(::skia::mojom::blink::Bitmap::pixel_data)& pixel_data(
       ::skia::mojom::blink::BitmapPtr& input) {
    return input->pixel_data;
  }

  static bool Read(::skia::mojom::blink::Bitmap::DataView input, ::skia::mojom::blink::BitmapPtr* output);
};


template <>
struct  StructTraits<::skia::mojom::blink::InlineBitmap::DataView,
                                         ::skia::mojom::blink::InlineBitmapPtr> {
  static bool IsNull(const ::skia::mojom::blink::InlineBitmapPtr& input) { return !input; }
  static void SetToNull(::skia::mojom::blink::InlineBitmapPtr* output) { output->reset(); }

  static const decltype(::skia::mojom::blink::InlineBitmap::image_info)& image_info(
      const ::skia::mojom::blink::InlineBitmapPtr& input) {
    return input->image_info;
  }

  static decltype(::skia::mojom::blink::InlineBitmap::row_bytes) row_bytes(
      const ::skia::mojom::blink::InlineBitmapPtr& input) {
    return input->row_bytes;
  }

  static const decltype(::skia::mojom::blink::InlineBitmap::pixel_data)& pixel_data(
      const ::skia::mojom::blink::InlineBitmapPtr& input) {
    return input->pixel_data;
  }

  static bool Read(::skia::mojom::blink::InlineBitmap::DataView input, ::skia::mojom::blink::InlineBitmapPtr* output);
};

}  // namespace mojo

#endif  // SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_BLINK_H_