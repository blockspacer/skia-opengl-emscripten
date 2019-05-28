// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/test_wtf_types.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/test_wtf_types.mojom-forward.h"
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

class TestWTFProxy;

template <typename ImplRefTraits>
class TestWTFStub;

class TestWTFRequestValidator;
class TestWTFResponseValidator;


class  TestWTF
    : public TestWTFInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TestWTFInterfaceBase;
  using Proxy_ = TestWTFProxy;

  template <typename ImplRefTraits>
  using Stub_ = TestWTFStub<ImplRefTraits>;

  using RequestValidator_ = TestWTFRequestValidator;
  using ResponseValidator_ = TestWTFResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEchoStringMinVersion = 0,
    kEchoStringArrayMinVersion = 0,
    kEchoStringMapMinVersion = 0,
  };
  
  using NestedEnum = TestWTF_NestedEnum;
  virtual ~TestWTF() {}


  using EchoStringCallback = base::OnceCallback<void(const base::Optional<std::string>&)>;
  
  virtual void EchoString(const base::Optional<std::string>& str, EchoStringCallback callback) = 0;


  using EchoStringArrayCallback = base::OnceCallback<void(const base::Optional<std::vector<base::Optional<std::string>>>&)>;
  
  virtual void EchoStringArray(const base::Optional<std::vector<base::Optional<std::string>>>& arr, EchoStringArrayCallback callback) = 0;


  using EchoStringMapCallback = base::OnceCallback<void(const base::Optional<base::flat_map<std::string, base::Optional<std::string>>>&)>;
  
  virtual void EchoStringMap(const base::Optional<base::flat_map<std::string, base::Optional<std::string>>>& str_map, EchoStringMapCallback callback) = 0;
};

class  TestWTFProxy
    : public TestWTF {
 public:
  using InterfaceType = TestWTF;

  explicit TestWTFProxy(mojo::MessageReceiverWithResponder* receiver);
  void EchoString(const base::Optional<std::string>& str, EchoStringCallback callback) final;
  void EchoStringArray(const base::Optional<std::vector<base::Optional<std::string>>>& arr, EchoStringArrayCallback callback) final;
  void EchoStringMap(const base::Optional<base::flat_map<std::string, base::Optional<std::string>>>& str_map, EchoStringMapCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  TestWTFStubDispatch {
 public:
  static bool Accept(TestWTF* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TestWTF* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TestWTF>>
class TestWTFStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TestWTFStub() {}
  ~TestWTFStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestWTFStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestWTFStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TestWTFRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TestWTFResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class  TestWTFStruct {
 public:
  using DataView = TestWTFStructDataView;
  using Data_ = internal::TestWTFStruct_Data;
  using NestedEnum = TestWTFStruct_NestedEnum;

  template <typename... Args>
  static TestWTFStructPtr New(Args&&... args) {
    return TestWTFStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TestWTFStructPtr From(const U& u) {
    return mojo::TypeConverter<TestWTFStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TestWTFStruct>::Convert(*this);
  }


  TestWTFStruct();

  TestWTFStruct(
      const std::string& str,
      int32_t integer);

  ~TestWTFStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TestWTFStructPtr>
  TestWTFStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TestWTFStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TestWTFStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TestWTFStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TestWTFStruct_UnserializedMessageContext<
            UserType, TestWTFStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TestWTFStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TestWTFStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TestWTFStruct_UnserializedMessageContext<
            UserType, TestWTFStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TestWTFStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string str;
  
  int32_t integer;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  TestWTFCodeGeneration2 {
 public:
  using DataView = TestWTFCodeGeneration2DataView;
  using Data_ = internal::TestWTFCodeGeneration2_Data;
  using Tag = Data_::TestWTFCodeGeneration2_Tag;

  static TestWTFCodeGeneration2Ptr New() {
    return TestWTFCodeGeneration2Ptr(base::in_place);
  }
  // Construct an instance holding |str|.
  static TestWTFCodeGeneration2Ptr
  NewStr(
      const std::string& str) {
    auto result = TestWTFCodeGeneration2Ptr(base::in_place);
    result->set_str(std::move(str));
    return result;
  }
  // Construct an instance holding |strs|.
  static TestWTFCodeGeneration2Ptr
  NewStrs(
      const std::vector<std::string>& strs) {
    auto result = TestWTFCodeGeneration2Ptr(base::in_place);
    result->set_strs(std::move(strs));
    return result;
  }
  // Construct an instance holding |str_map|.
  static TestWTFCodeGeneration2Ptr
  NewStrMap(
      const base::flat_map<std::string, base::Optional<std::string>>& str_map) {
    auto result = TestWTFCodeGeneration2Ptr(base::in_place);
    result->set_str_map(std::move(str_map));
    return result;
  }

  template <typename U>
  static TestWTFCodeGeneration2Ptr From(const U& u) {
    return mojo::TypeConverter<TestWTFCodeGeneration2Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TestWTFCodeGeneration2>::Convert(*this);
  }

  TestWTFCodeGeneration2();
  ~TestWTFCodeGeneration2();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = TestWTFCodeGeneration2Ptr>
  TestWTFCodeGeneration2Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TestWTFCodeGeneration2>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_str() const { return tag_ == Tag::STR; }

  
  std::string& get_str() const {
    DCHECK(tag_ == Tag::STR);
    return *(data_.str);
  }

  
  void set_str(
      const std::string& str);
  
  bool is_strs() const { return tag_ == Tag::STRS; }

  
  std::vector<std::string>& get_strs() const {
    DCHECK(tag_ == Tag::STRS);
    return *(data_.strs);
  }

  
  void set_strs(
      const std::vector<std::string>& strs);
  
  bool is_str_map() const { return tag_ == Tag::STR_MAP; }

  
  base::flat_map<std::string, base::Optional<std::string>>& get_str_map() const {
    DCHECK(tag_ == Tag::STR_MAP);
    return *(data_.str_map);
  }

  
  void set_str_map(
      const base::flat_map<std::string, base::Optional<std::string>>& str_map);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TestWTFCodeGeneration2::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<TestWTFCodeGeneration2::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    std::string* str;
    std::vector<std::string>* strs;
    base::flat_map<std::string, base::Optional<std::string>>* str_map;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class  TestWTFCodeGeneration {
 public:
  using DataView = TestWTFCodeGenerationDataView;
  using Data_ = internal::TestWTFCodeGeneration_Data;

  template <typename... Args>
  static TestWTFCodeGenerationPtr New(Args&&... args) {
    return TestWTFCodeGenerationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TestWTFCodeGenerationPtr From(const U& u) {
    return mojo::TypeConverter<TestWTFCodeGenerationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TestWTFCodeGeneration>::Convert(*this);
  }


  TestWTFCodeGeneration();

  TestWTFCodeGeneration(
      const std::string& str,
      const base::Optional<std::string>& nullable_str,
      const std::vector<std::string>& strs,
      const std::vector<base::Optional<std::string>>& nullable_strs,
      const std::vector<std::vector<int32_t>>& arrays,
      const std::vector<bool>& bools,
      std::vector<mojo::ScopedMessagePipeHandle> handles,
      const base::flat_map<std::string, base::Optional<std::string>>& str_map,
      const base::flat_map<int32_t, std::vector<int32_t>>& array_map,
      base::flat_map<int32_t, mojo::ScopedMessagePipeHandle> handle_map,
      const std::vector<base::flat_map<std::string, base::Optional<std::string>>>& str_maps);

  ~TestWTFCodeGeneration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TestWTFCodeGenerationPtr>
  TestWTFCodeGenerationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TestWTFCodeGeneration>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TestWTFCodeGeneration::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TestWTFCodeGeneration::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TestWTFCodeGeneration_UnserializedMessageContext<
            UserType, TestWTFCodeGeneration::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TestWTFCodeGeneration::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TestWTFCodeGeneration::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TestWTFCodeGeneration_UnserializedMessageContext<
            UserType, TestWTFCodeGeneration::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TestWTFCodeGeneration::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string str;
  
  base::Optional<std::string> nullable_str;
  
  std::vector<std::string> strs;
  
  std::vector<base::Optional<std::string>> nullable_strs;
  
  std::vector<std::vector<int32_t>> arrays;
  
  std::vector<bool> bools;
  
  std::vector<mojo::ScopedMessagePipeHandle> handles;
  
  base::flat_map<std::string, base::Optional<std::string>> str_map;
  
  base::flat_map<int32_t, std::vector<int32_t>> array_map;
  
  base::flat_map<int32_t, mojo::ScopedMessagePipeHandle> handle_map;
  
  std::vector<base::flat_map<std::string, base::Optional<std::string>>> str_maps;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(TestWTFCodeGeneration);
};






class  TestWTFStructWrapper {
 public:
  using DataView = TestWTFStructWrapperDataView;
  using Data_ = internal::TestWTFStructWrapper_Data;

  template <typename... Args>
  static TestWTFStructWrapperPtr New(Args&&... args) {
    return TestWTFStructWrapperPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TestWTFStructWrapperPtr From(const U& u) {
    return mojo::TypeConverter<TestWTFStructWrapperPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TestWTFStructWrapper>::Convert(*this);
  }


  TestWTFStructWrapper();

  TestWTFStructWrapper(
      TestWTFStructPtr nested_struct,
      std::vector<TestWTFStructPtr> array_struct,
      base::flat_map<TestWTFStructPtr, TestWTFStructPtr> map_struct);

  ~TestWTFStructWrapper();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TestWTFStructWrapperPtr>
  TestWTFStructWrapperPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TestWTFStructWrapper>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TestWTFStructWrapper::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TestWTFStructWrapper::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TestWTFStructWrapper_UnserializedMessageContext<
            UserType, TestWTFStructWrapper::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TestWTFStructWrapper::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TestWTFStructWrapper::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TestWTFStructWrapper_UnserializedMessageContext<
            UserType, TestWTFStructWrapper::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TestWTFStructWrapper::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  TestWTFStructPtr nested_struct;
  
  std::vector<TestWTFStructPtr> array_struct;
  
  base::flat_map<TestWTFStructPtr, TestWTFStructPtr> map_struct;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(TestWTFStructWrapper);
};

template <typename UnionPtrType>
TestWTFCodeGeneration2Ptr TestWTFCodeGeneration2::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::STR:
      rv->set_str(mojo::Clone(*data_.str));
      break;
    case Tag::STRS:
      rv->set_strs(mojo::Clone(*data_.strs));
      break;
    case Tag::STR_MAP:
      rv->set_str_map(mojo::Clone(*data_.str_map));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TestWTFCodeGeneration2>::value>::type*>
bool TestWTFCodeGeneration2::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::STR:
      return mojo::Equals(*(data_.str), *(other.data_.str));
    case Tag::STRS:
      return mojo::Equals(*(data_.strs), *(other.data_.strs));
    case Tag::STR_MAP:
      return mojo::Equals(*(data_.str_map), *(other.data_.str_map));
  }

  return false;
}
template <typename StructPtrType>
TestWTFCodeGenerationPtr TestWTFCodeGeneration::Clone() const {
  return New(
      mojo::Clone(str),
      mojo::Clone(nullable_str),
      mojo::Clone(strs),
      mojo::Clone(nullable_strs),
      mojo::Clone(arrays),
      mojo::Clone(bools),
      mojo::Clone(handles),
      mojo::Clone(str_map),
      mojo::Clone(array_map),
      mojo::Clone(handle_map),
      mojo::Clone(str_maps)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TestWTFCodeGeneration>::value>::type*>
bool TestWTFCodeGeneration::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->str, other_struct.str))
    return false;
  if (!mojo::Equals(this->nullable_str, other_struct.nullable_str))
    return false;
  if (!mojo::Equals(this->strs, other_struct.strs))
    return false;
  if (!mojo::Equals(this->nullable_strs, other_struct.nullable_strs))
    return false;
  if (!mojo::Equals(this->arrays, other_struct.arrays))
    return false;
  if (!mojo::Equals(this->bools, other_struct.bools))
    return false;
  if (!mojo::Equals(this->handles, other_struct.handles))
    return false;
  if (!mojo::Equals(this->str_map, other_struct.str_map))
    return false;
  if (!mojo::Equals(this->array_map, other_struct.array_map))
    return false;
  if (!mojo::Equals(this->handle_map, other_struct.handle_map))
    return false;
  if (!mojo::Equals(this->str_maps, other_struct.str_maps))
    return false;
  return true;
}
template <typename StructPtrType>
TestWTFStructPtr TestWTFStruct::Clone() const {
  return New(
      mojo::Clone(str),
      mojo::Clone(integer)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TestWTFStruct>::value>::type*>
bool TestWTFStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->str, other_struct.str))
    return false;
  if (!mojo::Equals(this->integer, other_struct.integer))
    return false;
  return true;
}
template <typename StructPtrType>
TestWTFStructWrapperPtr TestWTFStructWrapper::Clone() const {
  return New(
      mojo::Clone(nested_struct),
      mojo::Clone(array_struct),
      mojo::Clone(map_struct)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TestWTFStructWrapper>::value>::type*>
bool TestWTFStructWrapper::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->nested_struct, other_struct.nested_struct))
    return false;
  if (!mojo::Equals(this->array_struct, other_struct.array_struct))
    return false;
  if (!mojo::Equals(this->map_struct, other_struct.map_struct))
    return false;
  return true;
}


}  // namespace test
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::test::TestWTFCodeGeneration::DataView,
                                         ::mojo::test::TestWTFCodeGenerationPtr> {
  static bool IsNull(const ::mojo::test::TestWTFCodeGenerationPtr& input) { return !input; }
  static void SetToNull(::mojo::test::TestWTFCodeGenerationPtr* output) { output->reset(); }

  static const decltype(::mojo::test::TestWTFCodeGeneration::str)& str(
      const ::mojo::test::TestWTFCodeGenerationPtr& input) {
    return input->str;
  }

  static const decltype(::mojo::test::TestWTFCodeGeneration::nullable_str)& nullable_str(
      const ::mojo::test::TestWTFCodeGenerationPtr& input) {
    return input->nullable_str;
  }

  static const decltype(::mojo::test::TestWTFCodeGeneration::strs)& strs(
      const ::mojo::test::TestWTFCodeGenerationPtr& input) {
    return input->strs;
  }

  static const decltype(::mojo::test::TestWTFCodeGeneration::nullable_strs)& nullable_strs(
      const ::mojo::test::TestWTFCodeGenerationPtr& input) {
    return input->nullable_strs;
  }

  static const decltype(::mojo::test::TestWTFCodeGeneration::arrays)& arrays(
      const ::mojo::test::TestWTFCodeGenerationPtr& input) {
    return input->arrays;
  }

  static const decltype(::mojo::test::TestWTFCodeGeneration::bools)& bools(
      const ::mojo::test::TestWTFCodeGenerationPtr& input) {
    return input->bools;
  }

  static  decltype(::mojo::test::TestWTFCodeGeneration::handles)& handles(
       ::mojo::test::TestWTFCodeGenerationPtr& input) {
    return input->handles;
  }

  static const decltype(::mojo::test::TestWTFCodeGeneration::str_map)& str_map(
      const ::mojo::test::TestWTFCodeGenerationPtr& input) {
    return input->str_map;
  }

  static const decltype(::mojo::test::TestWTFCodeGeneration::array_map)& array_map(
      const ::mojo::test::TestWTFCodeGenerationPtr& input) {
    return input->array_map;
  }

  static  decltype(::mojo::test::TestWTFCodeGeneration::handle_map)& handle_map(
       ::mojo::test::TestWTFCodeGenerationPtr& input) {
    return input->handle_map;
  }

  static const decltype(::mojo::test::TestWTFCodeGeneration::str_maps)& str_maps(
      const ::mojo::test::TestWTFCodeGenerationPtr& input) {
    return input->str_maps;
  }

  static bool Read(::mojo::test::TestWTFCodeGeneration::DataView input, ::mojo::test::TestWTFCodeGenerationPtr* output);
};


template <>
struct  StructTraits<::mojo::test::TestWTFStruct::DataView,
                                         ::mojo::test::TestWTFStructPtr> {
  static bool IsNull(const ::mojo::test::TestWTFStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::TestWTFStructPtr* output) { output->reset(); }

  static const decltype(::mojo::test::TestWTFStruct::str)& str(
      const ::mojo::test::TestWTFStructPtr& input) {
    return input->str;
  }

  static decltype(::mojo::test::TestWTFStruct::integer) integer(
      const ::mojo::test::TestWTFStructPtr& input) {
    return input->integer;
  }

  static bool Read(::mojo::test::TestWTFStruct::DataView input, ::mojo::test::TestWTFStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::TestWTFStructWrapper::DataView,
                                         ::mojo::test::TestWTFStructWrapperPtr> {
  static bool IsNull(const ::mojo::test::TestWTFStructWrapperPtr& input) { return !input; }
  static void SetToNull(::mojo::test::TestWTFStructWrapperPtr* output) { output->reset(); }

  static const decltype(::mojo::test::TestWTFStructWrapper::nested_struct)& nested_struct(
      const ::mojo::test::TestWTFStructWrapperPtr& input) {
    return input->nested_struct;
  }

  static const decltype(::mojo::test::TestWTFStructWrapper::array_struct)& array_struct(
      const ::mojo::test::TestWTFStructWrapperPtr& input) {
    return input->array_struct;
  }

  static const decltype(::mojo::test::TestWTFStructWrapper::map_struct)& map_struct(
      const ::mojo::test::TestWTFStructWrapperPtr& input) {
    return input->map_struct;
  }

  static bool Read(::mojo::test::TestWTFStructWrapper::DataView input, ::mojo::test::TestWTFStructWrapperPtr* output);
};


template <>
struct  UnionTraits<::mojo::test::TestWTFCodeGeneration2::DataView,
                                        ::mojo::test::TestWTFCodeGeneration2Ptr> {
  static bool IsNull(const ::mojo::test::TestWTFCodeGeneration2Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::TestWTFCodeGeneration2Ptr* output) { output->reset(); }

  static ::mojo::test::TestWTFCodeGeneration2::Tag GetTag(const ::mojo::test::TestWTFCodeGeneration2Ptr& input) {
    return input->which();
  }

  static const std::string& str(const ::mojo::test::TestWTFCodeGeneration2Ptr& input) {
    return input->get_str();
  }

  static const std::vector<std::string>& strs(const ::mojo::test::TestWTFCodeGeneration2Ptr& input) {
    return input->get_strs();
  }

  static const base::flat_map<std::string, base::Optional<std::string>>& str_map(const ::mojo::test::TestWTFCodeGeneration2Ptr& input) {
    return input->get_str_map();
  }

  static bool Read(::mojo::test::TestWTFCodeGeneration2::DataView input, ::mojo::test::TestWTFCodeGeneration2Ptr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_H_