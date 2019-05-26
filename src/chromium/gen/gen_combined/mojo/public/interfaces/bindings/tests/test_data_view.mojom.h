// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_DATA_VIEW_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_DATA_VIEW_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/test_data_view.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/test_data_view.mojom-forward.h"
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




namespace mojo {
namespace test {
namespace data_view {

class TestInterfaceProxy;

template <typename ImplRefTraits>
class TestInterfaceStub;

class TestInterfaceRequestValidator;
class TestInterfaceResponseValidator;


class  TestInterface
    : public TestInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = TestInterfaceInterfaceBase;
  using Proxy_ = TestInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = TestInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = TestInterfaceRequestValidator;
  using ResponseValidator_ = TestInterfaceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEchoMinVersion = 0,
  };
  virtual ~TestInterface() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Echo(int32_t value, int32_t* out_out_value);

  using EchoCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void Echo(int32_t value, EchoCallback callback) = 0;
};

class  TestInterfaceProxy
    : public TestInterface {
 public:
  using InterfaceType = TestInterface;

  explicit TestInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Echo(int32_t value, int32_t* out_out_value) final;
  void Echo(int32_t value, EchoCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  TestInterfaceStubDispatch {
 public:
  static bool Accept(TestInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TestInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TestInterface>>
class TestInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TestInterfaceStub() {}
  ~TestInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TestInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TestInterfaceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  NestedStruct {
 public:
  using DataView = NestedStructDataView;
  using Data_ = internal::NestedStruct_Data;

  template <typename... Args>
  static NestedStructPtr New(Args&&... args) {
    return NestedStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NestedStructPtr From(const U& u) {
    return mojo::TypeConverter<NestedStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NestedStruct>::Convert(*this);
  }


  NestedStruct();

  explicit NestedStruct(
      int32_t f_int32);

  ~NestedStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NestedStructPtr>
  NestedStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NestedStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NestedStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NestedStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NestedStruct_UnserializedMessageContext<
            UserType, NestedStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NestedStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NestedStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NestedStruct_UnserializedMessageContext<
            UserType, NestedStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NestedStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t f_int32;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class  TestUnion {
 public:
  using DataView = TestUnionDataView;
  using Data_ = internal::TestUnion_Data;
  using Tag = Data_::TestUnion_Tag;

  static TestUnionPtr New() {
    return TestUnionPtr(base::in_place);
  }
  // Construct an instance holding |f_bool|.
  static TestUnionPtr
  NewFBool(
      bool f_bool) {
    auto result = TestUnionPtr(base::in_place);
    result->set_f_bool(std::move(f_bool));
    return result;
  }
  // Construct an instance holding |f_int32|.
  static TestUnionPtr
  NewFInt32(
      int32_t f_int32) {
    auto result = TestUnionPtr(base::in_place);
    result->set_f_int32(std::move(f_int32));
    return result;
  }

  template <typename U>
  static TestUnionPtr From(const U& u) {
    return mojo::TypeConverter<TestUnionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TestUnion>::Convert(*this);
  }

  TestUnion();
  ~TestUnion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = TestUnionPtr>
  TestUnionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TestUnion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_f_bool() const { return tag_ == Tag::F_BOOL; }

  
  bool get_f_bool() const {
    DCHECK(tag_ == Tag::F_BOOL);
    return data_.f_bool;
  }

  
  void set_f_bool(
      bool f_bool);
  
  bool is_f_int32() const { return tag_ == Tag::F_INT32; }

  
  int32_t get_f_int32() const {
    DCHECK(tag_ == Tag::F_INT32);
    return data_.f_int32;
  }

  
  void set_f_int32(
      int32_t f_int32);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TestUnion::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<TestUnion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    bool f_bool;
    int32_t f_int32;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};







class  TestStruct {
 public:
  using DataView = TestStructDataView;
  using Data_ = internal::TestStruct_Data;

  template <typename... Args>
  static TestStructPtr New(Args&&... args) {
    return TestStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TestStructPtr From(const U& u) {
    return mojo::TypeConverter<TestStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TestStruct>::Convert(*this);
  }


  TestStruct();

  TestStruct(
      const std::string& f_string,
      NestedStructPtr f_struct,
      TestNativeStructPtr f_native_struct,
      const std::vector<bool>& f_bool_array,
      const std::vector<int32_t>& f_int32_array,
      const std::vector<TestEnum>& f_enum_array,
      std::vector<mojo::PendingRemote<TestInterface>> f_interface_array,
      const std::vector<std::vector<int32_t>>& f_nested_array,
      std::vector<NestedStructPtr> f_struct_array,
      std::vector<TestUnionPtr> f_union_array,
      const base::flat_map<std::string, int32_t>& f_map);

  ~TestStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TestStructPtr>
  TestStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TestStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TestStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TestStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TestStruct_UnserializedMessageContext<
            UserType, TestStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TestStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TestStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TestStruct_UnserializedMessageContext<
            UserType, TestStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TestStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string f_string;
  
  NestedStructPtr f_struct;
  
  TestNativeStructPtr f_native_struct;
  
  std::vector<bool> f_bool_array;
  
  std::vector<int32_t> f_int32_array;
  
  std::vector<TestEnum> f_enum_array;
  
  std::vector<mojo::PendingRemote<TestInterface>> f_interface_array;
  
  std::vector<std::vector<int32_t>> f_nested_array;
  
  std::vector<NestedStructPtr> f_struct_array;
  
  std::vector<TestUnionPtr> f_union_array;
  
  base::flat_map<std::string, int32_t> f_map;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(TestStruct);
};

template <typename UnionPtrType>
TestUnionPtr TestUnion::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::F_BOOL:
      rv->set_f_bool(mojo::Clone(data_.f_bool));
      break;
    case Tag::F_INT32:
      rv->set_f_int32(mojo::Clone(data_.f_int32));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TestUnion>::value>::type*>
bool TestUnion::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::F_BOOL:
      return mojo::Equals(data_.f_bool, other.data_.f_bool);
    case Tag::F_INT32:
      return mojo::Equals(data_.f_int32, other.data_.f_int32);
  }

  return false;
}
template <typename StructPtrType>
NestedStructPtr NestedStruct::Clone() const {
  return New(
      mojo::Clone(f_int32)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NestedStruct>::value>::type*>
bool NestedStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f_int32, other_struct.f_int32))
    return false;
  return true;
}
template <typename StructPtrType>
TestStructPtr TestStruct::Clone() const {
  return New(
      mojo::Clone(f_string),
      mojo::Clone(f_struct),
      mojo::Clone(f_native_struct),
      mojo::Clone(f_bool_array),
      mojo::Clone(f_int32_array),
      mojo::Clone(f_enum_array),
      mojo::Clone(f_interface_array),
      mojo::Clone(f_nested_array),
      mojo::Clone(f_struct_array),
      mojo::Clone(f_union_array),
      mojo::Clone(f_map)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TestStruct>::value>::type*>
bool TestStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f_string, other_struct.f_string))
    return false;
  if (!mojo::Equals(this->f_struct, other_struct.f_struct))
    return false;
  if (!mojo::Equals(this->f_native_struct, other_struct.f_native_struct))
    return false;
  if (!mojo::Equals(this->f_bool_array, other_struct.f_bool_array))
    return false;
  if (!mojo::Equals(this->f_int32_array, other_struct.f_int32_array))
    return false;
  if (!mojo::Equals(this->f_enum_array, other_struct.f_enum_array))
    return false;
  if (!mojo::Equals(this->f_interface_array, other_struct.f_interface_array))
    return false;
  if (!mojo::Equals(this->f_nested_array, other_struct.f_nested_array))
    return false;
  if (!mojo::Equals(this->f_struct_array, other_struct.f_struct_array))
    return false;
  if (!mojo::Equals(this->f_union_array, other_struct.f_union_array))
    return false;
  if (!mojo::Equals(this->f_map, other_struct.f_map))
    return false;
  return true;
}


}  // namespace data_view
}  // namespace test
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::test::data_view::NestedStruct::DataView,
                                         ::mojo::test::data_view::NestedStructPtr> {
  static bool IsNull(const ::mojo::test::data_view::NestedStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::data_view::NestedStructPtr* output) { output->reset(); }

  static decltype(::mojo::test::data_view::NestedStruct::f_int32) f_int32(
      const ::mojo::test::data_view::NestedStructPtr& input) {
    return input->f_int32;
  }

  static bool Read(::mojo::test::data_view::NestedStruct::DataView input, ::mojo::test::data_view::NestedStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::data_view::TestStruct::DataView,
                                         ::mojo::test::data_view::TestStructPtr> {
  static bool IsNull(const ::mojo::test::data_view::TestStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::data_view::TestStructPtr* output) { output->reset(); }

  static const decltype(::mojo::test::data_view::TestStruct::f_string)& f_string(
      const ::mojo::test::data_view::TestStructPtr& input) {
    return input->f_string;
  }

  static const decltype(::mojo::test::data_view::TestStruct::f_struct)& f_struct(
      const ::mojo::test::data_view::TestStructPtr& input) {
    return input->f_struct;
  }

  static const decltype(::mojo::test::data_view::TestStruct::f_native_struct)& f_native_struct(
      const ::mojo::test::data_view::TestStructPtr& input) {
    return input->f_native_struct;
  }

  static const decltype(::mojo::test::data_view::TestStruct::f_bool_array)& f_bool_array(
      const ::mojo::test::data_view::TestStructPtr& input) {
    return input->f_bool_array;
  }

  static const decltype(::mojo::test::data_view::TestStruct::f_int32_array)& f_int32_array(
      const ::mojo::test::data_view::TestStructPtr& input) {
    return input->f_int32_array;
  }

  static const decltype(::mojo::test::data_view::TestStruct::f_enum_array)& f_enum_array(
      const ::mojo::test::data_view::TestStructPtr& input) {
    return input->f_enum_array;
  }

  static  decltype(::mojo::test::data_view::TestStruct::f_interface_array)& f_interface_array(
       ::mojo::test::data_view::TestStructPtr& input) {
    return input->f_interface_array;
  }

  static const decltype(::mojo::test::data_view::TestStruct::f_nested_array)& f_nested_array(
      const ::mojo::test::data_view::TestStructPtr& input) {
    return input->f_nested_array;
  }

  static const decltype(::mojo::test::data_view::TestStruct::f_struct_array)& f_struct_array(
      const ::mojo::test::data_view::TestStructPtr& input) {
    return input->f_struct_array;
  }

  static const decltype(::mojo::test::data_view::TestStruct::f_union_array)& f_union_array(
      const ::mojo::test::data_view::TestStructPtr& input) {
    return input->f_union_array;
  }

  static const decltype(::mojo::test::data_view::TestStruct::f_map)& f_map(
      const ::mojo::test::data_view::TestStructPtr& input) {
    return input->f_map;
  }

  static bool Read(::mojo::test::data_view::TestStruct::DataView input, ::mojo::test::data_view::TestStructPtr* output);
};


template <>
struct  UnionTraits<::mojo::test::data_view::TestUnion::DataView,
                                        ::mojo::test::data_view::TestUnionPtr> {
  static bool IsNull(const ::mojo::test::data_view::TestUnionPtr& input) { return !input; }
  static void SetToNull(::mojo::test::data_view::TestUnionPtr* output) { output->reset(); }

  static ::mojo::test::data_view::TestUnion::Tag GetTag(const ::mojo::test::data_view::TestUnionPtr& input) {
    return input->which();
  }

  static  bool f_bool(const ::mojo::test::data_view::TestUnionPtr& input) {
    return input->get_f_bool();
  }

  static  int32_t f_int32(const ::mojo::test::data_view::TestUnionPtr& input) {
    return input->get_f_int32();
  }

  static bool Read(::mojo::test::data_view::TestUnion::DataView input, ::mojo::test::data_view::TestUnionPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_DATA_VIEW_MOJOM_H_