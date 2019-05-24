// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_H_
#define UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_H_

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
#include "ui/gfx/image/mojo/image.mojom-shared.h"
#include "ui/gfx/image/mojo/image.mojom-forward.h"
#include "skia/public/interfaces/bitmap.mojom.h"
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
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/image/image_skia.h"
#include "ui/gfx/image/image_skia_rep.h"




namespace gfx {
namespace mojom {









class  ImageSkiaRep {
 public:
  using DataView = ImageSkiaRepDataView;
  using Data_ = internal::ImageSkiaRep_Data;

  template <typename... Args>
  static ImageSkiaRepPtr New(Args&&... args) {
    return ImageSkiaRepPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ImageSkiaRepPtr From(const U& u) {
    return mojo::TypeConverter<ImageSkiaRepPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ImageSkiaRep>::Convert(*this);
  }


  ImageSkiaRep();

  ImageSkiaRep(
      const SkBitmap& bitmap,
      float scale);

  ~ImageSkiaRep();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ImageSkiaRepPtr>
  ImageSkiaRepPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ImageSkiaRep>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ImageSkiaRep::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ImageSkiaRep::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ImageSkiaRep_UnserializedMessageContext<
            UserType, ImageSkiaRep::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ImageSkiaRep::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ImageSkiaRep::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ImageSkiaRep_UnserializedMessageContext<
            UserType, ImageSkiaRep::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ImageSkiaRep::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  SkBitmap bitmap;
  
  float scale;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  ImageSkia {
 public:
  using DataView = ImageSkiaDataView;
  using Data_ = internal::ImageSkia_Data;

  template <typename... Args>
  static ImageSkiaPtr New(Args&&... args) {
    return ImageSkiaPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ImageSkiaPtr From(const U& u) {
    return mojo::TypeConverter<ImageSkiaPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ImageSkia>::Convert(*this);
  }


  ImageSkia();

  explicit ImageSkia(
      const std::vector<gfx::ImageSkiaRep>& image_reps);

  ~ImageSkia();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ImageSkiaPtr>
  ImageSkiaPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ImageSkia>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ImageSkia::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ImageSkia::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ImageSkia_UnserializedMessageContext<
            UserType, ImageSkia::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ImageSkia::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ImageSkia::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ImageSkia_UnserializedMessageContext<
            UserType, ImageSkia::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ImageSkia::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<gfx::ImageSkiaRep> image_reps;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ImageSkiaRepPtr ImageSkiaRep::Clone() const {
  return New(
      mojo::Clone(bitmap),
      mojo::Clone(scale)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ImageSkiaRep>::value>::type*>
bool ImageSkiaRep::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bitmap, other_struct.bitmap))
    return false;
  if (!mojo::Equals(this->scale, other_struct.scale))
    return false;
  return true;
}
template <typename StructPtrType>
ImageSkiaPtr ImageSkia::Clone() const {
  return New(
      mojo::Clone(image_reps)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ImageSkia>::value>::type*>
bool ImageSkia::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->image_reps, other_struct.image_reps))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::ImageSkiaRep::DataView,
                                         ::gfx::mojom::ImageSkiaRepPtr> {
  static bool IsNull(const ::gfx::mojom::ImageSkiaRepPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::ImageSkiaRepPtr* output) { output->reset(); }

  static  decltype(::gfx::mojom::ImageSkiaRep::bitmap)& bitmap(
       ::gfx::mojom::ImageSkiaRepPtr& input) {
    return input->bitmap;
  }

  static decltype(::gfx::mojom::ImageSkiaRep::scale) scale(
      const ::gfx::mojom::ImageSkiaRepPtr& input) {
    return input->scale;
  }

  static bool Read(::gfx::mojom::ImageSkiaRep::DataView input, ::gfx::mojom::ImageSkiaRepPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::ImageSkia::DataView,
                                         ::gfx::mojom::ImageSkiaPtr> {
  static bool IsNull(const ::gfx::mojom::ImageSkiaPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::ImageSkiaPtr* output) { output->reset(); }

  static  decltype(::gfx::mojom::ImageSkia::image_reps)& image_reps(
       ::gfx::mojom::ImageSkiaPtr& input) {
    return input->image_reps;
  }

  static bool Read(::gfx::mojom::ImageSkia::DataView input, ::gfx::mojom::ImageSkiaPtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_H_