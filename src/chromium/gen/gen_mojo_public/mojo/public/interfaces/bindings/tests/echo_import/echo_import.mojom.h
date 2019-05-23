// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_IMPORT_ECHO_IMPORT_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_IMPORT_ECHO_IMPORT_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/echo_import/echo_import.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/echo_import/echo_import.mojom-forward.h"
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




namespace test {
namespace echo_import {
namespace mojom {





class  Point {
 public:
  using DataView = PointDataView;
  using Data_ = internal::Point_Data;

  template <typename... Args>
  static PointPtr New(Args&&... args) {
    return PointPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PointPtr From(const U& u) {
    return mojo::TypeConverter<PointPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Point>::Convert(*this);
  }


  Point();

  Point(
      int32_t x,
      int32_t y);

  ~Point();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PointPtr>
  PointPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Point>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Point::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Point::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Point_UnserializedMessageContext<
            UserType, Point::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Point::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Point::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Point_UnserializedMessageContext<
            UserType, Point::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Point::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t x;
  
  int32_t y;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
PointPtr Point::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Point>::value>::type*>
bool Point::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace echo_import
}  // namespace test

namespace mojo {


template <>
struct  StructTraits<::test::echo_import::mojom::Point::DataView,
                                         ::test::echo_import::mojom::PointPtr> {
  static bool IsNull(const ::test::echo_import::mojom::PointPtr& input) { return !input; }
  static void SetToNull(::test::echo_import::mojom::PointPtr* output) { output->reset(); }

  static decltype(::test::echo_import::mojom::Point::x) x(
      const ::test::echo_import::mojom::PointPtr& input) {
    return input->x;
  }

  static decltype(::test::echo_import::mojom::Point::y) y(
      const ::test::echo_import::mojom::PointPtr& input) {
    return input->y;
  }

  static bool Read(::test::echo_import::mojom::Point::DataView input, ::test::echo_import::mojom::PointPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_IMPORT_ECHO_IMPORT_MOJOM_H_