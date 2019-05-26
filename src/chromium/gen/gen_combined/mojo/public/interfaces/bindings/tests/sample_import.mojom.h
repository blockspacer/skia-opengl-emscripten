// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-forward.h"
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

class ImportedInterfaceProxy;

template <typename ImplRefTraits>
class ImportedInterfaceStub;

class ImportedInterfaceRequestValidator;


class  ImportedInterface
    : public ImportedInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ImportedInterfaceInterfaceBase;
  using Proxy_ = ImportedInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = ImportedInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = ImportedInterfaceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDoSomethingMinVersion = 0,
  };
  virtual ~ImportedInterface() {}

  
  virtual void DoSomething() = 0;
};

class  ImportedInterfaceProxy
    : public ImportedInterface {
 public:
  using InterfaceType = ImportedInterface;

  explicit ImportedInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void DoSomething() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ImportedInterfaceStubDispatch {
 public:
  static bool Accept(ImportedInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ImportedInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ImportedInterface>>
class ImportedInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ImportedInterfaceStub() {}
  ~ImportedInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImportedInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImportedInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ImportedInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





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





class  PointOrShape {
 public:
  using DataView = PointOrShapeDataView;
  using Data_ = internal::PointOrShape_Data;
  using Tag = Data_::PointOrShape_Tag;

  static PointOrShapePtr New() {
    return PointOrShapePtr(base::in_place);
  }
  // Construct an instance holding |point|.
  static PointOrShapePtr
  NewPoint(
      PointPtr point) {
    auto result = PointOrShapePtr(base::in_place);
    result->set_point(std::move(point));
    return result;
  }
  // Construct an instance holding |shape|.
  static PointOrShapePtr
  NewShape(
      Shape shape) {
    auto result = PointOrShapePtr(base::in_place);
    result->set_shape(std::move(shape));
    return result;
  }

  template <typename U>
  static PointOrShapePtr From(const U& u) {
    return mojo::TypeConverter<PointOrShapePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PointOrShape>::Convert(*this);
  }

  PointOrShape();
  ~PointOrShape();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = PointOrShapePtr>
  PointOrShapePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PointOrShape>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_point() const { return tag_ == Tag::POINT; }

  
  PointPtr& get_point() const {
    DCHECK(tag_ == Tag::POINT);
    return *(data_.point);
  }

  
  void set_point(
      PointPtr point);
  
  bool is_shape() const { return tag_ == Tag::SHAPE; }

  
  Shape get_shape() const {
    DCHECK(tag_ == Tag::SHAPE);
    return data_.shape;
  }

  
  void set_shape(
      Shape shape);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PointOrShape::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<PointOrShape::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    PointPtr* point;
    Shape shape;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};


template <typename UnionPtrType>
PointOrShapePtr PointOrShape::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::POINT:
      rv->set_point(mojo::Clone(*data_.point));
      break;
    case Tag::SHAPE:
      rv->set_shape(mojo::Clone(data_.shape));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PointOrShape>::value>::type*>
bool PointOrShape::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::POINT:
      return mojo::Equals(*(data_.point), *(other.data_.point));
    case Tag::SHAPE:
      return mojo::Equals(data_.shape, other.data_.shape);
  }

  return false;
}
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


}  // namespace imported

namespace mojo {


template <>
struct  StructTraits<::imported::Point::DataView,
                                         ::imported::PointPtr> {
  static bool IsNull(const ::imported::PointPtr& input) { return !input; }
  static void SetToNull(::imported::PointPtr* output) { output->reset(); }

  static decltype(::imported::Point::x) x(
      const ::imported::PointPtr& input) {
    return input->x;
  }

  static decltype(::imported::Point::y) y(
      const ::imported::PointPtr& input) {
    return input->y;
  }

  static bool Read(::imported::Point::DataView input, ::imported::PointPtr* output);
};


template <>
struct  UnionTraits<::imported::PointOrShape::DataView,
                                        ::imported::PointOrShapePtr> {
  static bool IsNull(const ::imported::PointOrShapePtr& input) { return !input; }
  static void SetToNull(::imported::PointOrShapePtr* output) { output->reset(); }

  static ::imported::PointOrShape::Tag GetTag(const ::imported::PointOrShapePtr& input) {
    return input->which();
  }

  static const ::imported::PointPtr& point(const ::imported::PointOrShapePtr& input) {
    return input->get_point();
  }

  static  ::imported::Shape shape(const ::imported::PointOrShapePtr& input) {
    return input->get_shape();
  }

  static bool Read(::imported::PointOrShape::DataView input, ::imported::PointOrShapePtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_H_