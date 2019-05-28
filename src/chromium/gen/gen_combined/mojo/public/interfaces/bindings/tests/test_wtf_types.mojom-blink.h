// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_BLINK_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_BLINK_H_

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
#include "mojo/public/interfaces/bindings/tests/test_wtf_types.mojom-blink-forward.h"

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
struct mojo_test_internal_TopLevelEnum_DataHashFn {
  static unsigned GetHash(const ::mojo::test::TopLevelEnum& value) {
    using utype = std::underlying_type<::mojo::test::TopLevelEnum>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::mojo::test::TopLevelEnum& left, const ::mojo::test::TopLevelEnum& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::mojo::test::TopLevelEnum>
    : public GenericHashTraits<::mojo::test::TopLevelEnum> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::mojo::test::TopLevelEnum& value) {
    return value == static_cast<::mojo::test::TopLevelEnum>(-1000000);
  }
  static void ConstructDeletedValue(::mojo::test::TopLevelEnum& slot, bool) {
    slot = static_cast<::mojo::test::TopLevelEnum>(-1000001);
  }
  static bool IsDeletedValue(const ::mojo::test::TopLevelEnum& value) {
    return value == static_cast<::mojo::test::TopLevelEnum>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct mojo_test_internal_TestWTFStruct_NestedEnum_DataHashFn {
  static unsigned GetHash(const ::mojo::test::TestWTFStruct_NestedEnum& value) {
    using utype = std::underlying_type<::mojo::test::TestWTFStruct_NestedEnum>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::mojo::test::TestWTFStruct_NestedEnum& left, const ::mojo::test::TestWTFStruct_NestedEnum& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::mojo::test::TestWTFStruct_NestedEnum>
    : public GenericHashTraits<::mojo::test::TestWTFStruct_NestedEnum> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::mojo::test::TestWTFStruct_NestedEnum& value) {
    return value == static_cast<::mojo::test::TestWTFStruct_NestedEnum>(-1000000);
  }
  static void ConstructDeletedValue(::mojo::test::TestWTFStruct_NestedEnum& slot, bool) {
    slot = static_cast<::mojo::test::TestWTFStruct_NestedEnum>(-1000001);
  }
  static bool IsDeletedValue(const ::mojo::test::TestWTFStruct_NestedEnum& value) {
    return value == static_cast<::mojo::test::TestWTFStruct_NestedEnum>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct mojo_test_internal_TestWTF_NestedEnum_DataHashFn {
  static unsigned GetHash(const ::mojo::test::TestWTF_NestedEnum& value) {
    using utype = std::underlying_type<::mojo::test::TestWTF_NestedEnum>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::mojo::test::TestWTF_NestedEnum& left, const ::mojo::test::TestWTF_NestedEnum& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::mojo::test::TestWTF_NestedEnum>
    : public GenericHashTraits<::mojo::test::TestWTF_NestedEnum> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::mojo::test::TestWTF_NestedEnum& value) {
    return value == static_cast<::mojo::test::TestWTF_NestedEnum>(-1000000);
  }
  static void ConstructDeletedValue(::mojo::test::TestWTF_NestedEnum& slot, bool) {
    slot = static_cast<::mojo::test::TestWTF_NestedEnum>(-1000001);
  }
  static bool IsDeletedValue(const ::mojo::test::TestWTF_NestedEnum& value) {
    return value == static_cast<::mojo::test::TestWTF_NestedEnum>(-1000001);
  }
};
}  // namespace WTF


namespace mojo {
namespace test {
namespace blink {

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


  using EchoStringCallback = base::OnceCallback<void(const WTF::String&)>;
  
  virtual void EchoString(const WTF::String& str, EchoStringCallback callback) = 0;


  using EchoStringArrayCallback = base::OnceCallback<void(const base::Optional<WTF::Vector<WTF::String>>&)>;
  
  virtual void EchoStringArray(const base::Optional<WTF::Vector<WTF::String>>& arr, EchoStringArrayCallback callback) = 0;


  using EchoStringMapCallback = base::OnceCallback<void(const base::Optional<WTF::HashMap<WTF::String, WTF::String>>&)>;
  
  virtual void EchoStringMap(const base::Optional<WTF::HashMap<WTF::String, WTF::String>>& str_map, EchoStringMapCallback callback) = 0;
};

class  TestWTFProxy
    : public TestWTF {
 public:
  using InterfaceType = TestWTF;

  explicit TestWTFProxy(mojo::MessageReceiverWithResponder* receiver);
  void EchoString(const WTF::String& str, EchoStringCallback callback) final;
  void EchoStringArray(const base::Optional<WTF::Vector<WTF::String>>& arr, EchoStringArrayCallback callback) final;
  void EchoStringMap(const base::Optional<WTF::HashMap<WTF::String, WTF::String>>& str_map, EchoStringMapCallback callback) final;

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
      const WTF::String& str,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TestWTFStruct::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::String str;
  
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
      const WTF::String& str) {
    auto result = TestWTFCodeGeneration2Ptr(base::in_place);
    result->set_str(std::move(str));
    return result;
  }
  // Construct an instance holding |strs|.
  static TestWTFCodeGeneration2Ptr
  NewStrs(
      const WTF::Vector<WTF::String>& strs) {
    auto result = TestWTFCodeGeneration2Ptr(base::in_place);
    result->set_strs(std::move(strs));
    return result;
  }
  // Construct an instance holding |str_map|.
  static TestWTFCodeGeneration2Ptr
  NewStrMap(
      const WTF::HashMap<WTF::String, WTF::String>& str_map) {
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

  
  WTF::String& get_str() const {
    DCHECK(tag_ == Tag::STR);
    return *(data_.str);
  }

  
  void set_str(
      const WTF::String& str);
  
  bool is_strs() const { return tag_ == Tag::STRS; }

  
  WTF::Vector<WTF::String>& get_strs() const {
    DCHECK(tag_ == Tag::STRS);
    return *(data_.strs);
  }

  
  void set_strs(
      const WTF::Vector<WTF::String>& strs);
  
  bool is_str_map() const { return tag_ == Tag::STR_MAP; }

  
  WTF::HashMap<WTF::String, WTF::String>& get_str_map() const {
    DCHECK(tag_ == Tag::STR_MAP);
    return *(data_.str_map);
  }

  
  void set_str_map(
      const WTF::HashMap<WTF::String, WTF::String>& str_map);

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
    WTF::String* str;
    WTF::Vector<WTF::String>* strs;
    WTF::HashMap<WTF::String, WTF::String>* str_map;
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
      const WTF::String& str,
      const WTF::String& nullable_str,
      const WTF::Vector<WTF::String>& strs,
      const WTF::Vector<WTF::String>& nullable_strs,
      const WTF::Vector<WTF::Vector<int32_t>>& arrays,
      const WTF::Vector<bool>& bools,
      WTF::Vector<mojo::ScopedMessagePipeHandle> handles,
      const WTF::HashMap<WTF::String, WTF::String>& str_map,
      const WTF::HashMap<int32_t, WTF::Vector<int32_t>>& array_map,
      WTF::HashMap<int32_t, mojo::ScopedMessagePipeHandle> handle_map,
      const WTF::Vector<WTF::HashMap<WTF::String, WTF::String>>& str_maps);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TestWTFCodeGeneration::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::String str;
  
  WTF::String nullable_str;
  
  WTF::Vector<WTF::String> strs;
  
  WTF::Vector<WTF::String> nullable_strs;
  
  WTF::Vector<WTF::Vector<int32_t>> arrays;
  
  WTF::Vector<bool> bools;
  
  WTF::Vector<mojo::ScopedMessagePipeHandle> handles;
  
  WTF::HashMap<WTF::String, WTF::String> str_map;
  
  WTF::HashMap<int32_t, WTF::Vector<int32_t>> array_map;
  
  WTF::HashMap<int32_t, mojo::ScopedMessagePipeHandle> handle_map;
  
  WTF::Vector<WTF::HashMap<WTF::String, WTF::String>> str_maps;

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
      WTF::Vector<TestWTFStructPtr> array_struct,
      WTF::HashMap<TestWTFStructPtr, TestWTFStructPtr> map_struct);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TestWTFStructWrapper::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
  
  WTF::Vector<TestWTFStructPtr> array_struct;
  
  WTF::HashMap<TestWTFStructPtr, TestWTFStructPtr> map_struct;

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


}  // namespace blink
}  // namespace test
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::test::blink::TestWTFCodeGeneration::DataView,
                                         ::mojo::test::blink::TestWTFCodeGenerationPtr> {
  static bool IsNull(const ::mojo::test::blink::TestWTFCodeGenerationPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::TestWTFCodeGenerationPtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::TestWTFCodeGeneration::str)& str(
      const ::mojo::test::blink::TestWTFCodeGenerationPtr& input) {
    return input->str;
  }

  static const decltype(::mojo::test::blink::TestWTFCodeGeneration::nullable_str)& nullable_str(
      const ::mojo::test::blink::TestWTFCodeGenerationPtr& input) {
    return input->nullable_str;
  }

  static const decltype(::mojo::test::blink::TestWTFCodeGeneration::strs)& strs(
      const ::mojo::test::blink::TestWTFCodeGenerationPtr& input) {
    return input->strs;
  }

  static const decltype(::mojo::test::blink::TestWTFCodeGeneration::nullable_strs)& nullable_strs(
      const ::mojo::test::blink::TestWTFCodeGenerationPtr& input) {
    return input->nullable_strs;
  }

  static const decltype(::mojo::test::blink::TestWTFCodeGeneration::arrays)& arrays(
      const ::mojo::test::blink::TestWTFCodeGenerationPtr& input) {
    return input->arrays;
  }

  static const decltype(::mojo::test::blink::TestWTFCodeGeneration::bools)& bools(
      const ::mojo::test::blink::TestWTFCodeGenerationPtr& input) {
    return input->bools;
  }

  static  decltype(::mojo::test::blink::TestWTFCodeGeneration::handles)& handles(
       ::mojo::test::blink::TestWTFCodeGenerationPtr& input) {
    return input->handles;
  }

  static const decltype(::mojo::test::blink::TestWTFCodeGeneration::str_map)& str_map(
      const ::mojo::test::blink::TestWTFCodeGenerationPtr& input) {
    return input->str_map;
  }

  static const decltype(::mojo::test::blink::TestWTFCodeGeneration::array_map)& array_map(
      const ::mojo::test::blink::TestWTFCodeGenerationPtr& input) {
    return input->array_map;
  }

  static  decltype(::mojo::test::blink::TestWTFCodeGeneration::handle_map)& handle_map(
       ::mojo::test::blink::TestWTFCodeGenerationPtr& input) {
    return input->handle_map;
  }

  static const decltype(::mojo::test::blink::TestWTFCodeGeneration::str_maps)& str_maps(
      const ::mojo::test::blink::TestWTFCodeGenerationPtr& input) {
    return input->str_maps;
  }

  static bool Read(::mojo::test::blink::TestWTFCodeGeneration::DataView input, ::mojo::test::blink::TestWTFCodeGenerationPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::TestWTFStruct::DataView,
                                         ::mojo::test::blink::TestWTFStructPtr> {
  static bool IsNull(const ::mojo::test::blink::TestWTFStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::TestWTFStructPtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::TestWTFStruct::str)& str(
      const ::mojo::test::blink::TestWTFStructPtr& input) {
    return input->str;
  }

  static decltype(::mojo::test::blink::TestWTFStruct::integer) integer(
      const ::mojo::test::blink::TestWTFStructPtr& input) {
    return input->integer;
  }

  static bool Read(::mojo::test::blink::TestWTFStruct::DataView input, ::mojo::test::blink::TestWTFStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::TestWTFStructWrapper::DataView,
                                         ::mojo::test::blink::TestWTFStructWrapperPtr> {
  static bool IsNull(const ::mojo::test::blink::TestWTFStructWrapperPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::TestWTFStructWrapperPtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::TestWTFStructWrapper::nested_struct)& nested_struct(
      const ::mojo::test::blink::TestWTFStructWrapperPtr& input) {
    return input->nested_struct;
  }

  static const decltype(::mojo::test::blink::TestWTFStructWrapper::array_struct)& array_struct(
      const ::mojo::test::blink::TestWTFStructWrapperPtr& input) {
    return input->array_struct;
  }

  static const decltype(::mojo::test::blink::TestWTFStructWrapper::map_struct)& map_struct(
      const ::mojo::test::blink::TestWTFStructWrapperPtr& input) {
    return input->map_struct;
  }

  static bool Read(::mojo::test::blink::TestWTFStructWrapper::DataView input, ::mojo::test::blink::TestWTFStructWrapperPtr* output);
};


template <>
struct  UnionTraits<::mojo::test::blink::TestWTFCodeGeneration2::DataView,
                                        ::mojo::test::blink::TestWTFCodeGeneration2Ptr> {
  static bool IsNull(const ::mojo::test::blink::TestWTFCodeGeneration2Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::TestWTFCodeGeneration2Ptr* output) { output->reset(); }

  static ::mojo::test::blink::TestWTFCodeGeneration2::Tag GetTag(const ::mojo::test::blink::TestWTFCodeGeneration2Ptr& input) {
    return input->which();
  }

  static const WTF::String& str(const ::mojo::test::blink::TestWTFCodeGeneration2Ptr& input) {
    return input->get_str();
  }

  static const WTF::Vector<WTF::String>& strs(const ::mojo::test::blink::TestWTFCodeGeneration2Ptr& input) {
    return input->get_strs();
  }

  static const WTF::HashMap<WTF::String, WTF::String>& str_map(const ::mojo::test::blink::TestWTFCodeGeneration2Ptr& input) {
    return input->get_str_map();
  }

  static bool Read(::mojo::test::blink::TestWTFCodeGeneration2::DataView input, ::mojo::test::blink::TestWTFCodeGeneration2Ptr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_BLINK_H_