// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_BLINK_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_BLINK_H_

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
#include "mojo/public/interfaces/bindings/tests/rect.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/rect.mojom-blink-forward.h"

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
#include "mojo/public/cpp/bindings/tests/rect_blink.h"
#include "mojo/public/cpp/bindings/tests/shared_rect.h"




namespace mojo {
namespace test {
namespace blink {





class  Rect {
 public:
  using DataView = RectDataView;
  using Data_ = internal::Rect_Data;

  template <typename... Args>
  static RectPtr New(Args&&... args) {
    return RectPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RectPtr From(const U& u) {
    return mojo::TypeConverter<RectPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Rect>::Convert(*this);
  }


  Rect();

  Rect(
      int32_t x,
      int32_t y,
      int32_t width,
      int32_t height);

  ~Rect();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RectPtr>
  RectPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Rect>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Rect::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Rect::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Rect_UnserializedMessageContext<
            UserType, Rect::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Rect::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Rect::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Rect_UnserializedMessageContext<
            UserType, Rect::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Rect::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t x;
  
  int32_t y;
  
  int32_t width;
  
  int32_t height;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  TypemappedRect {
 public:
  using DataView = TypemappedRectDataView;
  using Data_ = internal::TypemappedRect_Data;

  template <typename... Args>
  static TypemappedRectPtr New(Args&&... args) {
    return TypemappedRectPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TypemappedRectPtr From(const U& u) {
    return mojo::TypeConverter<TypemappedRectPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TypemappedRect>::Convert(*this);
  }


  TypemappedRect();

  TypemappedRect(
      int32_t x,
      int32_t y,
      int32_t width,
      int32_t height);

  ~TypemappedRect();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TypemappedRectPtr>
  TypemappedRectPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TypemappedRect>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TypemappedRect::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TypemappedRect::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TypemappedRect_UnserializedMessageContext<
            UserType, TypemappedRect::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TypemappedRect::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TypemappedRect::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TypemappedRect_UnserializedMessageContext<
            UserType, TypemappedRect::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TypemappedRect::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t x;
  
  int32_t y;
  
  int32_t width;
  
  int32_t height;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  SharedTypemappedRect {
 public:
  using DataView = SharedTypemappedRectDataView;
  using Data_ = internal::SharedTypemappedRect_Data;

  template <typename... Args>
  static SharedTypemappedRectPtr New(Args&&... args) {
    return SharedTypemappedRectPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SharedTypemappedRectPtr From(const U& u) {
    return mojo::TypeConverter<SharedTypemappedRectPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SharedTypemappedRect>::Convert(*this);
  }


  SharedTypemappedRect();

  SharedTypemappedRect(
      int32_t x,
      int32_t y,
      int32_t width,
      int32_t height);

  ~SharedTypemappedRect();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SharedTypemappedRectPtr>
  SharedTypemappedRectPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SharedTypemappedRect>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SharedTypemappedRect::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SharedTypemappedRect::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SharedTypemappedRect_UnserializedMessageContext<
            UserType, SharedTypemappedRect::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SharedTypemappedRect::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SharedTypemappedRect::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SharedTypemappedRect_UnserializedMessageContext<
            UserType, SharedTypemappedRect::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SharedTypemappedRect::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t x;
  
  int32_t y;
  
  int32_t width;
  
  int32_t height;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






template <typename StructPtrType>
RectPtr Rect::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y),
      mojo::Clone(width),
      mojo::Clone(height)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Rect>::value>::type*>
bool Rect::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->height, other_struct.height))
    return false;
  return true;
}
template <typename StructPtrType>
TypemappedRectPtr TypemappedRect::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y),
      mojo::Clone(width),
      mojo::Clone(height)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TypemappedRect>::value>::type*>
bool TypemappedRect::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->height, other_struct.height))
    return false;
  return true;
}
template <typename StructPtrType>
SharedTypemappedRectPtr SharedTypemappedRect::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y),
      mojo::Clone(width),
      mojo::Clone(height)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SharedTypemappedRect>::value>::type*>
bool SharedTypemappedRect::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->height, other_struct.height))
    return false;
  return true;
}


}  // namespace blink
}  // namespace test
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::test::blink::Rect::DataView,
                                         ::mojo::test::blink::RectPtr> {
  static bool IsNull(const ::mojo::test::blink::RectPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::RectPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::Rect::x) x(
      const ::mojo::test::blink::RectPtr& input) {
    return input->x;
  }

  static decltype(::mojo::test::blink::Rect::y) y(
      const ::mojo::test::blink::RectPtr& input) {
    return input->y;
  }

  static decltype(::mojo::test::blink::Rect::width) width(
      const ::mojo::test::blink::RectPtr& input) {
    return input->width;
  }

  static decltype(::mojo::test::blink::Rect::height) height(
      const ::mojo::test::blink::RectPtr& input) {
    return input->height;
  }

  static bool Read(::mojo::test::blink::Rect::DataView input, ::mojo::test::blink::RectPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::TypemappedRect::DataView,
                                         ::mojo::test::blink::TypemappedRectPtr> {
  static bool IsNull(const ::mojo::test::blink::TypemappedRectPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::TypemappedRectPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::TypemappedRect::x) x(
      const ::mojo::test::blink::TypemappedRectPtr& input) {
    return input->x;
  }

  static decltype(::mojo::test::blink::TypemappedRect::y) y(
      const ::mojo::test::blink::TypemappedRectPtr& input) {
    return input->y;
  }

  static decltype(::mojo::test::blink::TypemappedRect::width) width(
      const ::mojo::test::blink::TypemappedRectPtr& input) {
    return input->width;
  }

  static decltype(::mojo::test::blink::TypemappedRect::height) height(
      const ::mojo::test::blink::TypemappedRectPtr& input) {
    return input->height;
  }

  static bool Read(::mojo::test::blink::TypemappedRect::DataView input, ::mojo::test::blink::TypemappedRectPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::SharedTypemappedRect::DataView,
                                         ::mojo::test::blink::SharedTypemappedRectPtr> {
  static bool IsNull(const ::mojo::test::blink::SharedTypemappedRectPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::SharedTypemappedRectPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::SharedTypemappedRect::x) x(
      const ::mojo::test::blink::SharedTypemappedRectPtr& input) {
    return input->x;
  }

  static decltype(::mojo::test::blink::SharedTypemappedRect::y) y(
      const ::mojo::test::blink::SharedTypemappedRectPtr& input) {
    return input->y;
  }

  static decltype(::mojo::test::blink::SharedTypemappedRect::width) width(
      const ::mojo::test::blink::SharedTypemappedRectPtr& input) {
    return input->width;
  }

  static decltype(::mojo::test::blink::SharedTypemappedRect::height) height(
      const ::mojo::test::blink::SharedTypemappedRectPtr& input) {
    return input->height;
  }

  static bool Read(::mojo::test::blink::SharedTypemappedRect::DataView input, ::mojo::test::blink::SharedTypemappedRectPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_BLINK_H_