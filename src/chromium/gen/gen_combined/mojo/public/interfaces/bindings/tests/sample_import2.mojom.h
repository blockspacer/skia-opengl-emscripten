// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom-forward.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom.h"
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




namespace imported {





class  Size {
 public:
  using DataView = SizeDataView;
  using Data_ = internal::Size_Data;

  template <typename... Args>
  static SizePtr New(Args&&... args) {
    return SizePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SizePtr From(const U& u) {
    return mojo::TypeConverter<SizePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Size>::Convert(*this);
  }


  Size();

  Size(
      int32_t width,
      int32_t height);

  ~Size();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SizePtr>
  SizePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Size>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Size::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Size::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Size_UnserializedMessageContext<
            UserType, Size::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Size::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Size::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Size_UnserializedMessageContext<
            UserType, Size::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Size::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t width;
  
  int32_t height;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  Thing {
 public:
  using DataView = ThingDataView;
  using Data_ = internal::Thing_Data;

  template <typename... Args>
  static ThingPtr New(Args&&... args) {
    return ThingPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ThingPtr From(const U& u) {
    return mojo::TypeConverter<ThingPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Thing>::Convert(*this);
  }


  Thing();

  Thing(
      ::imported::Shape shape,
      Color color,
      ::imported::PointPtr location,
      SizePtr size);

  ~Thing();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ThingPtr>
  ThingPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Thing>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Thing::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Thing::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Thing_UnserializedMessageContext<
            UserType, Thing::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Thing::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Thing::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Thing_UnserializedMessageContext<
            UserType, Thing::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Thing::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::imported::Shape shape;
  
  Color color;
  
  ::imported::PointPtr location;
  
  SizePtr size;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Thing);
};

template <typename StructPtrType>
SizePtr Size::Clone() const {
  return New(
      mojo::Clone(width),
      mojo::Clone(height)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Size>::value>::type*>
bool Size::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->height, other_struct.height))
    return false;
  return true;
}
template <typename StructPtrType>
ThingPtr Thing::Clone() const {
  return New(
      mojo::Clone(shape),
      mojo::Clone(color),
      mojo::Clone(location),
      mojo::Clone(size)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Thing>::value>::type*>
bool Thing::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->shape, other_struct.shape))
    return false;
  if (!mojo::Equals(this->color, other_struct.color))
    return false;
  if (!mojo::Equals(this->location, other_struct.location))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  return true;
}


}  // namespace imported

namespace mojo {


template <>
struct  StructTraits<::imported::Size::DataView,
                                         ::imported::SizePtr> {
  static bool IsNull(const ::imported::SizePtr& input) { return !input; }
  static void SetToNull(::imported::SizePtr* output) { output->reset(); }

  static decltype(::imported::Size::width) width(
      const ::imported::SizePtr& input) {
    return input->width;
  }

  static decltype(::imported::Size::height) height(
      const ::imported::SizePtr& input) {
    return input->height;
  }

  static bool Read(::imported::Size::DataView input, ::imported::SizePtr* output);
};


template <>
struct  StructTraits<::imported::Thing::DataView,
                                         ::imported::ThingPtr> {
  static bool IsNull(const ::imported::ThingPtr& input) { return !input; }
  static void SetToNull(::imported::ThingPtr* output) { output->reset(); }

  static decltype(::imported::Thing::shape) shape(
      const ::imported::ThingPtr& input) {
    return input->shape;
  }

  static decltype(::imported::Thing::color) color(
      const ::imported::ThingPtr& input) {
    return input->color;
  }

  static const decltype(::imported::Thing::location)& location(
      const ::imported::ThingPtr& input) {
    return input->location;
  }

  static const decltype(::imported::Thing::size)& size(
      const ::imported::ThingPtr& input) {
    return input->size;
  }

  static bool Read(::imported::Thing::DataView input, ::imported::ThingPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_H_