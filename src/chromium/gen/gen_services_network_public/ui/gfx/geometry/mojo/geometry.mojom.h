// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_H_
#define UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_H_

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
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-forward.h"
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
#include "ui/gfx/geometry/insets.h"
#include "ui/gfx/geometry/point.h"
#include "ui/gfx/geometry/point3_f.h"
#include "ui/gfx/geometry/point_f.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/gfx/geometry/rect_f.h"
#include "ui/gfx/geometry/safe_integer_conversions.h"
#include "ui/gfx/geometry/scroll_offset.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/geometry/vector2d.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "ui/gfx/geometry/vector3d_f.h"




namespace gfx {
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





class  PointF {
 public:
  using DataView = PointFDataView;
  using Data_ = internal::PointF_Data;

  template <typename... Args>
  static PointFPtr New(Args&&... args) {
    return PointFPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PointFPtr From(const U& u) {
    return mojo::TypeConverter<PointFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PointF>::Convert(*this);
  }


  PointF();

  PointF(
      float x,
      float y);

  ~PointF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PointFPtr>
  PointFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PointF>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PointF::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PointF::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PointF_UnserializedMessageContext<
            UserType, PointF::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PointF::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PointF::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PointF_UnserializedMessageContext<
            UserType, PointF::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PointF::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float x;
  
  float y;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  Point3F {
 public:
  using DataView = Point3FDataView;
  using Data_ = internal::Point3F_Data;

  template <typename... Args>
  static Point3FPtr New(Args&&... args) {
    return Point3FPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static Point3FPtr From(const U& u) {
    return mojo::TypeConverter<Point3FPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Point3F>::Convert(*this);
  }


  Point3F();

  Point3F(
      float x,
      float y,
      float z);

  ~Point3F();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Point3FPtr>
  Point3FPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Point3F>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Point3F::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Point3F::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Point3F_UnserializedMessageContext<
            UserType, Point3F::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Point3F::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Point3F::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Point3F_UnserializedMessageContext<
            UserType, Point3F::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Point3F::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float x;
  
  float y;
  
  float z;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





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





class  SizeF {
 public:
  using DataView = SizeFDataView;
  using Data_ = internal::SizeF_Data;

  template <typename... Args>
  static SizeFPtr New(Args&&... args) {
    return SizeFPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SizeFPtr From(const U& u) {
    return mojo::TypeConverter<SizeFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SizeF>::Convert(*this);
  }


  SizeF();

  SizeF(
      float width,
      float height);

  ~SizeF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SizeFPtr>
  SizeFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SizeF>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SizeF::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SizeF::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SizeF_UnserializedMessageContext<
            UserType, SizeF::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SizeF::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SizeF::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SizeF_UnserializedMessageContext<
            UserType, SizeF::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SizeF::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float width;
  
  float height;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





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

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Rect::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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





class  RectF {
 public:
  using DataView = RectFDataView;
  using Data_ = internal::RectF_Data;

  template <typename... Args>
  static RectFPtr New(Args&&... args) {
    return RectFPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RectFPtr From(const U& u) {
    return mojo::TypeConverter<RectFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RectF>::Convert(*this);
  }


  RectF();

  RectF(
      float x,
      float y,
      float width,
      float height);

  ~RectF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RectFPtr>
  RectFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RectF>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RectF::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RectF::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RectF_UnserializedMessageContext<
            UserType, RectF::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RectF::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RectF::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RectF_UnserializedMessageContext<
            UserType, RectF::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RectF::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float x;
  
  float y;
  
  float width;
  
  float height;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  Insets {
 public:
  using DataView = InsetsDataView;
  using Data_ = internal::Insets_Data;

  template <typename... Args>
  static InsetsPtr New(Args&&... args) {
    return InsetsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static InsetsPtr From(const U& u) {
    return mojo::TypeConverter<InsetsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Insets>::Convert(*this);
  }


  Insets();

  Insets(
      int32_t top,
      int32_t left,
      int32_t bottom,
      int32_t right);

  ~Insets();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = InsetsPtr>
  InsetsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Insets>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Insets::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Insets::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Insets_UnserializedMessageContext<
            UserType, Insets::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Insets::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Insets::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Insets_UnserializedMessageContext<
            UserType, Insets::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Insets::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t top;
  
  int32_t left;
  
  int32_t bottom;
  
  int32_t right;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  InsetsF {
 public:
  using DataView = InsetsFDataView;
  using Data_ = internal::InsetsF_Data;

  template <typename... Args>
  static InsetsFPtr New(Args&&... args) {
    return InsetsFPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static InsetsFPtr From(const U& u) {
    return mojo::TypeConverter<InsetsFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, InsetsF>::Convert(*this);
  }


  InsetsF();

  InsetsF(
      float top,
      float left,
      float bottom,
      float right);

  ~InsetsF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = InsetsFPtr>
  InsetsFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, InsetsF>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        InsetsF::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        InsetsF::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::InsetsF_UnserializedMessageContext<
            UserType, InsetsF::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<InsetsF::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return InsetsF::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::InsetsF_UnserializedMessageContext<
            UserType, InsetsF::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<InsetsF::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float top;
  
  float left;
  
  float bottom;
  
  float right;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  Vector2d {
 public:
  using DataView = Vector2dDataView;
  using Data_ = internal::Vector2d_Data;

  template <typename... Args>
  static Vector2dPtr New(Args&&... args) {
    return Vector2dPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static Vector2dPtr From(const U& u) {
    return mojo::TypeConverter<Vector2dPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Vector2d>::Convert(*this);
  }


  Vector2d();

  Vector2d(
      int32_t x,
      int32_t y);

  ~Vector2d();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Vector2dPtr>
  Vector2dPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Vector2d>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Vector2d::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Vector2d::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Vector2d_UnserializedMessageContext<
            UserType, Vector2d::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Vector2d::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Vector2d::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Vector2d_UnserializedMessageContext<
            UserType, Vector2d::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Vector2d::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t x;
  
  int32_t y;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  Vector2dF {
 public:
  using DataView = Vector2dFDataView;
  using Data_ = internal::Vector2dF_Data;

  template <typename... Args>
  static Vector2dFPtr New(Args&&... args) {
    return Vector2dFPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static Vector2dFPtr From(const U& u) {
    return mojo::TypeConverter<Vector2dFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Vector2dF>::Convert(*this);
  }


  Vector2dF();

  Vector2dF(
      float x,
      float y);

  ~Vector2dF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Vector2dFPtr>
  Vector2dFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Vector2dF>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Vector2dF::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Vector2dF::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Vector2dF_UnserializedMessageContext<
            UserType, Vector2dF::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Vector2dF::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Vector2dF::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Vector2dF_UnserializedMessageContext<
            UserType, Vector2dF::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Vector2dF::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float x;
  
  float y;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  Vector3dF {
 public:
  using DataView = Vector3dFDataView;
  using Data_ = internal::Vector3dF_Data;

  template <typename... Args>
  static Vector3dFPtr New(Args&&... args) {
    return Vector3dFPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static Vector3dFPtr From(const U& u) {
    return mojo::TypeConverter<Vector3dFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Vector3dF>::Convert(*this);
  }


  Vector3dF();

  Vector3dF(
      float x,
      float y,
      float z);

  ~Vector3dF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Vector3dFPtr>
  Vector3dFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Vector3dF>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Vector3dF::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Vector3dF::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Vector3dF_UnserializedMessageContext<
            UserType, Vector3dF::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Vector3dF::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Vector3dF::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Vector3dF_UnserializedMessageContext<
            UserType, Vector3dF::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Vector3dF::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float x;
  
  float y;
  
  float z;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  ScrollOffset {
 public:
  using DataView = ScrollOffsetDataView;
  using Data_ = internal::ScrollOffset_Data;

  template <typename... Args>
  static ScrollOffsetPtr New(Args&&... args) {
    return ScrollOffsetPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ScrollOffsetPtr From(const U& u) {
    return mojo::TypeConverter<ScrollOffsetPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ScrollOffset>::Convert(*this);
  }


  ScrollOffset();

  ScrollOffset(
      float x,
      float y);

  ~ScrollOffset();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ScrollOffsetPtr>
  ScrollOffsetPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ScrollOffset>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ScrollOffset::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ScrollOffset::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ScrollOffset_UnserializedMessageContext<
            UserType, ScrollOffset::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ScrollOffset::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ScrollOffset::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ScrollOffset_UnserializedMessageContext<
            UserType, ScrollOffset::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ScrollOffset::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float x;
  
  float y;

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
template <typename StructPtrType>
PointFPtr PointF::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PointF>::value>::type*>
bool PointF::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  return true;
}
template <typename StructPtrType>
Point3FPtr Point3F::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y),
      mojo::Clone(z)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Point3F>::value>::type*>
bool Point3F::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  if (!mojo::Equals(this->z, other_struct.z))
    return false;
  return true;
}
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
SizeFPtr SizeF::Clone() const {
  return New(
      mojo::Clone(width),
      mojo::Clone(height)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SizeF>::value>::type*>
bool SizeF::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->height, other_struct.height))
    return false;
  return true;
}
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
RectFPtr RectF::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y),
      mojo::Clone(width),
      mojo::Clone(height)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RectF>::value>::type*>
bool RectF::Equals(const T& other_struct) const {
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
InsetsPtr Insets::Clone() const {
  return New(
      mojo::Clone(top),
      mojo::Clone(left),
      mojo::Clone(bottom),
      mojo::Clone(right)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Insets>::value>::type*>
bool Insets::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->top, other_struct.top))
    return false;
  if (!mojo::Equals(this->left, other_struct.left))
    return false;
  if (!mojo::Equals(this->bottom, other_struct.bottom))
    return false;
  if (!mojo::Equals(this->right, other_struct.right))
    return false;
  return true;
}
template <typename StructPtrType>
InsetsFPtr InsetsF::Clone() const {
  return New(
      mojo::Clone(top),
      mojo::Clone(left),
      mojo::Clone(bottom),
      mojo::Clone(right)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, InsetsF>::value>::type*>
bool InsetsF::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->top, other_struct.top))
    return false;
  if (!mojo::Equals(this->left, other_struct.left))
    return false;
  if (!mojo::Equals(this->bottom, other_struct.bottom))
    return false;
  if (!mojo::Equals(this->right, other_struct.right))
    return false;
  return true;
}
template <typename StructPtrType>
Vector2dPtr Vector2d::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Vector2d>::value>::type*>
bool Vector2d::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  return true;
}
template <typename StructPtrType>
Vector2dFPtr Vector2dF::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Vector2dF>::value>::type*>
bool Vector2dF::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  return true;
}
template <typename StructPtrType>
Vector3dFPtr Vector3dF::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y),
      mojo::Clone(z)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Vector3dF>::value>::type*>
bool Vector3dF::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  if (!mojo::Equals(this->z, other_struct.z))
    return false;
  return true;
}
template <typename StructPtrType>
ScrollOffsetPtr ScrollOffset::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ScrollOffset>::value>::type*>
bool ScrollOffset::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::Point::DataView,
                                         ::gfx::mojom::PointPtr> {
  static bool IsNull(const ::gfx::mojom::PointPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::PointPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::Point::x) x(
      const ::gfx::mojom::PointPtr& input) {
    return input->x;
  }

  static decltype(::gfx::mojom::Point::y) y(
      const ::gfx::mojom::PointPtr& input) {
    return input->y;
  }

  static bool Read(::gfx::mojom::Point::DataView input, ::gfx::mojom::PointPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::PointF::DataView,
                                         ::gfx::mojom::PointFPtr> {
  static bool IsNull(const ::gfx::mojom::PointFPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::PointFPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::PointF::x) x(
      const ::gfx::mojom::PointFPtr& input) {
    return input->x;
  }

  static decltype(::gfx::mojom::PointF::y) y(
      const ::gfx::mojom::PointFPtr& input) {
    return input->y;
  }

  static bool Read(::gfx::mojom::PointF::DataView input, ::gfx::mojom::PointFPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::Point3F::DataView,
                                         ::gfx::mojom::Point3FPtr> {
  static bool IsNull(const ::gfx::mojom::Point3FPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::Point3FPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::Point3F::x) x(
      const ::gfx::mojom::Point3FPtr& input) {
    return input->x;
  }

  static decltype(::gfx::mojom::Point3F::y) y(
      const ::gfx::mojom::Point3FPtr& input) {
    return input->y;
  }

  static decltype(::gfx::mojom::Point3F::z) z(
      const ::gfx::mojom::Point3FPtr& input) {
    return input->z;
  }

  static bool Read(::gfx::mojom::Point3F::DataView input, ::gfx::mojom::Point3FPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::Size::DataView,
                                         ::gfx::mojom::SizePtr> {
  static bool IsNull(const ::gfx::mojom::SizePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::SizePtr* output) { output->reset(); }

  static decltype(::gfx::mojom::Size::width) width(
      const ::gfx::mojom::SizePtr& input) {
    return input->width;
  }

  static decltype(::gfx::mojom::Size::height) height(
      const ::gfx::mojom::SizePtr& input) {
    return input->height;
  }

  static bool Read(::gfx::mojom::Size::DataView input, ::gfx::mojom::SizePtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::SizeF::DataView,
                                         ::gfx::mojom::SizeFPtr> {
  static bool IsNull(const ::gfx::mojom::SizeFPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::SizeFPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::SizeF::width) width(
      const ::gfx::mojom::SizeFPtr& input) {
    return input->width;
  }

  static decltype(::gfx::mojom::SizeF::height) height(
      const ::gfx::mojom::SizeFPtr& input) {
    return input->height;
  }

  static bool Read(::gfx::mojom::SizeF::DataView input, ::gfx::mojom::SizeFPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::Rect::DataView,
                                         ::gfx::mojom::RectPtr> {
  static bool IsNull(const ::gfx::mojom::RectPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::RectPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::Rect::x) x(
      const ::gfx::mojom::RectPtr& input) {
    return input->x;
  }

  static decltype(::gfx::mojom::Rect::y) y(
      const ::gfx::mojom::RectPtr& input) {
    return input->y;
  }

  static decltype(::gfx::mojom::Rect::width) width(
      const ::gfx::mojom::RectPtr& input) {
    return input->width;
  }

  static decltype(::gfx::mojom::Rect::height) height(
      const ::gfx::mojom::RectPtr& input) {
    return input->height;
  }

  static bool Read(::gfx::mojom::Rect::DataView input, ::gfx::mojom::RectPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::RectF::DataView,
                                         ::gfx::mojom::RectFPtr> {
  static bool IsNull(const ::gfx::mojom::RectFPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::RectFPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::RectF::x) x(
      const ::gfx::mojom::RectFPtr& input) {
    return input->x;
  }

  static decltype(::gfx::mojom::RectF::y) y(
      const ::gfx::mojom::RectFPtr& input) {
    return input->y;
  }

  static decltype(::gfx::mojom::RectF::width) width(
      const ::gfx::mojom::RectFPtr& input) {
    return input->width;
  }

  static decltype(::gfx::mojom::RectF::height) height(
      const ::gfx::mojom::RectFPtr& input) {
    return input->height;
  }

  static bool Read(::gfx::mojom::RectF::DataView input, ::gfx::mojom::RectFPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::Insets::DataView,
                                         ::gfx::mojom::InsetsPtr> {
  static bool IsNull(const ::gfx::mojom::InsetsPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::InsetsPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::Insets::top) top(
      const ::gfx::mojom::InsetsPtr& input) {
    return input->top;
  }

  static decltype(::gfx::mojom::Insets::left) left(
      const ::gfx::mojom::InsetsPtr& input) {
    return input->left;
  }

  static decltype(::gfx::mojom::Insets::bottom) bottom(
      const ::gfx::mojom::InsetsPtr& input) {
    return input->bottom;
  }

  static decltype(::gfx::mojom::Insets::right) right(
      const ::gfx::mojom::InsetsPtr& input) {
    return input->right;
  }

  static bool Read(::gfx::mojom::Insets::DataView input, ::gfx::mojom::InsetsPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::InsetsF::DataView,
                                         ::gfx::mojom::InsetsFPtr> {
  static bool IsNull(const ::gfx::mojom::InsetsFPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::InsetsFPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::InsetsF::top) top(
      const ::gfx::mojom::InsetsFPtr& input) {
    return input->top;
  }

  static decltype(::gfx::mojom::InsetsF::left) left(
      const ::gfx::mojom::InsetsFPtr& input) {
    return input->left;
  }

  static decltype(::gfx::mojom::InsetsF::bottom) bottom(
      const ::gfx::mojom::InsetsFPtr& input) {
    return input->bottom;
  }

  static decltype(::gfx::mojom::InsetsF::right) right(
      const ::gfx::mojom::InsetsFPtr& input) {
    return input->right;
  }

  static bool Read(::gfx::mojom::InsetsF::DataView input, ::gfx::mojom::InsetsFPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::Vector2d::DataView,
                                         ::gfx::mojom::Vector2dPtr> {
  static bool IsNull(const ::gfx::mojom::Vector2dPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::Vector2dPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::Vector2d::x) x(
      const ::gfx::mojom::Vector2dPtr& input) {
    return input->x;
  }

  static decltype(::gfx::mojom::Vector2d::y) y(
      const ::gfx::mojom::Vector2dPtr& input) {
    return input->y;
  }

  static bool Read(::gfx::mojom::Vector2d::DataView input, ::gfx::mojom::Vector2dPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::Vector2dF::DataView,
                                         ::gfx::mojom::Vector2dFPtr> {
  static bool IsNull(const ::gfx::mojom::Vector2dFPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::Vector2dFPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::Vector2dF::x) x(
      const ::gfx::mojom::Vector2dFPtr& input) {
    return input->x;
  }

  static decltype(::gfx::mojom::Vector2dF::y) y(
      const ::gfx::mojom::Vector2dFPtr& input) {
    return input->y;
  }

  static bool Read(::gfx::mojom::Vector2dF::DataView input, ::gfx::mojom::Vector2dFPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::Vector3dF::DataView,
                                         ::gfx::mojom::Vector3dFPtr> {
  static bool IsNull(const ::gfx::mojom::Vector3dFPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::Vector3dFPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::Vector3dF::x) x(
      const ::gfx::mojom::Vector3dFPtr& input) {
    return input->x;
  }

  static decltype(::gfx::mojom::Vector3dF::y) y(
      const ::gfx::mojom::Vector3dFPtr& input) {
    return input->y;
  }

  static decltype(::gfx::mojom::Vector3dF::z) z(
      const ::gfx::mojom::Vector3dFPtr& input) {
    return input->z;
  }

  static bool Read(::gfx::mojom::Vector3dF::DataView input, ::gfx::mojom::Vector3dFPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::ScrollOffset::DataView,
                                         ::gfx::mojom::ScrollOffsetPtr> {
  static bool IsNull(const ::gfx::mojom::ScrollOffsetPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::ScrollOffsetPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::ScrollOffset::x) x(
      const ::gfx::mojom::ScrollOffsetPtr& input) {
    return input->x;
  }

  static decltype(::gfx::mojom::ScrollOffset::y) y(
      const ::gfx::mojom::ScrollOffsetPtr& input) {
    return input->y;
  }

  static bool Read(::gfx::mojom::ScrollOffset::DataView input, ::gfx::mojom::ScrollOffsetPtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_H_