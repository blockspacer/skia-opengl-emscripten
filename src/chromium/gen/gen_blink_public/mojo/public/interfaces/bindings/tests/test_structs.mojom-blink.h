// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_BLINK_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_BLINK_H_

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
#include "mojo/public/interfaces/bindings/tests/test_structs.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/test_structs.mojom-blink-forward.h"
#include "mojo/public/interfaces/bindings/tests/rect.mojom-blink.h"

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
struct mojo_test_internal_ScopedConstants_EType_DataHashFn {
  static unsigned GetHash(const ::mojo::test::ScopedConstants_EType& value) {
    using utype = std::underlying_type<::mojo::test::ScopedConstants_EType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::mojo::test::ScopedConstants_EType& left, const ::mojo::test::ScopedConstants_EType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::mojo::test::ScopedConstants_EType>
    : public GenericHashTraits<::mojo::test::ScopedConstants_EType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::mojo::test::ScopedConstants_EType& value) {
    return value == static_cast<::mojo::test::ScopedConstants_EType>(-1000000);
  }
  static void ConstructDeletedValue(::mojo::test::ScopedConstants_EType& slot, bool) {
    slot = static_cast<::mojo::test::ScopedConstants_EType>(-1000001);
  }
  static bool IsDeletedValue(const ::mojo::test::ScopedConstants_EType& value) {
    return value == static_cast<::mojo::test::ScopedConstants_EType>(-1000001);
  }
};
}  // namespace WTF


namespace mojo {
namespace test {
namespace blink {

class SomeInterfaceProxy;

template <typename ImplRefTraits>
class SomeInterfaceStub;

class SomeInterfaceRequestValidator;
class SomeInterfaceResponseValidator;


class  SomeInterface
    : public SomeInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SomeInterfaceInterfaceBase;
  using Proxy_ = SomeInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = SomeInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = SomeInterfaceRequestValidator;
  using ResponseValidator_ = SomeInterfaceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSomeMethodMinVersion = 0,
  };
  virtual ~SomeInterface() {}


  using SomeMethodCallback = base::OnceCallback<void(RectPairPtr)>;
  
  virtual void SomeMethod(RectPairPtr pair, SomeMethodCallback callback) = 0;
};

class  SomeInterfaceProxy
    : public SomeInterface {
 public:
  using InterfaceType = SomeInterface;

  explicit SomeInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SomeMethod(RectPairPtr pair, SomeMethodCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SomeInterfaceStubDispatch {
 public:
  static bool Accept(SomeInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SomeInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SomeInterface>>
class SomeInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SomeInterfaceStub() {}
  ~SomeInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SomeInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SomeInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SomeInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SomeInterfaceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};







class  EmptyStruct {
 public:
  using DataView = EmptyStructDataView;
  using Data_ = internal::EmptyStruct_Data;

  template <typename... Args>
  static EmptyStructPtr New(Args&&... args) {
    return EmptyStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EmptyStructPtr From(const U& u) {
    return mojo::TypeConverter<EmptyStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EmptyStruct>::Convert(*this);
  }


  EmptyStruct();

  ~EmptyStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EmptyStructPtr>
  EmptyStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EmptyStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EmptyStruct::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        EmptyStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::EmptyStruct_UnserializedMessageContext<
            UserType, EmptyStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<EmptyStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return EmptyStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::EmptyStruct_UnserializedMessageContext<
            UserType, EmptyStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<EmptyStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }


 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

















class  MultiVersionStructV0 {
 public:
  using DataView = MultiVersionStructV0DataView;
  using Data_ = internal::MultiVersionStructV0_Data;

  template <typename... Args>
  static MultiVersionStructV0Ptr New(Args&&... args) {
    return MultiVersionStructV0Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MultiVersionStructV0Ptr From(const U& u) {
    return mojo::TypeConverter<MultiVersionStructV0Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MultiVersionStructV0>::Convert(*this);
  }


  MultiVersionStructV0();

  explicit MultiVersionStructV0(
      int32_t f_int32);

  ~MultiVersionStructV0();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MultiVersionStructV0Ptr>
  MultiVersionStructV0Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MultiVersionStructV0>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MultiVersionStructV0::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MultiVersionStructV0::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MultiVersionStructV0_UnserializedMessageContext<
            UserType, MultiVersionStructV0::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MultiVersionStructV0::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MultiVersionStructV0::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MultiVersionStructV0_UnserializedMessageContext<
            UserType, MultiVersionStructV0::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MultiVersionStructV0::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t f_int32;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  ReorderedStruct {
 public:
  using DataView = ReorderedStructDataView;
  using Data_ = internal::ReorderedStruct_Data;

  template <typename... Args>
  static ReorderedStructPtr New(Args&&... args) {
    return ReorderedStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReorderedStructPtr From(const U& u) {
    return mojo::TypeConverter<ReorderedStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ReorderedStruct>::Convert(*this);
  }


  ReorderedStruct();

  explicit ReorderedStruct(
      int32_t c);

  ReorderedStruct(
      int32_t a,
      int32_t c);

  ReorderedStruct(
      int32_t a,
      int32_t b,
      int32_t c);

  ~ReorderedStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReorderedStructPtr>
  ReorderedStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ReorderedStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ReorderedStruct::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ReorderedStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ReorderedStruct_UnserializedMessageContext<
            UserType, ReorderedStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ReorderedStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ReorderedStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ReorderedStruct_UnserializedMessageContext<
            UserType, ReorderedStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ReorderedStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t a;
  
  int32_t b;
  
  int32_t c;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  ContainsOther {
 public:
  using DataView = ContainsOtherDataView;
  using Data_ = internal::ContainsOther_Data;

  template <typename... Args>
  static ContainsOtherPtr New(Args&&... args) {
    return ContainsOtherPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ContainsOtherPtr From(const U& u) {
    return mojo::TypeConverter<ContainsOtherPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ContainsOther>::Convert(*this);
  }


  ContainsOther();

  explicit ContainsOther(
      int32_t other);

  ~ContainsOther();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ContainsOtherPtr>
  ContainsOtherPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ContainsOther>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ContainsOther::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ContainsOther::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ContainsOther_UnserializedMessageContext<
            UserType, ContainsOther::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ContainsOther::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ContainsOther::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ContainsOther_UnserializedMessageContext<
            UserType, ContainsOther::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ContainsOther::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t other;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  SingleBoolStruct {
 public:
  using DataView = SingleBoolStructDataView;
  using Data_ = internal::SingleBoolStruct_Data;

  template <typename... Args>
  static SingleBoolStructPtr New(Args&&... args) {
    return SingleBoolStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SingleBoolStructPtr From(const U& u) {
    return mojo::TypeConverter<SingleBoolStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SingleBoolStruct>::Convert(*this);
  }


  SingleBoolStruct();

  explicit SingleBoolStruct(
      bool value);

  ~SingleBoolStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SingleBoolStructPtr>
  SingleBoolStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SingleBoolStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SingleBoolStruct::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SingleBoolStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SingleBoolStruct_UnserializedMessageContext<
            UserType, SingleBoolStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SingleBoolStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SingleBoolStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SingleBoolStruct_UnserializedMessageContext<
            UserType, SingleBoolStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SingleBoolStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  NamedRegion {
 public:
  using DataView = NamedRegionDataView;
  using Data_ = internal::NamedRegion_Data;

  template <typename... Args>
  static NamedRegionPtr New(Args&&... args) {
    return NamedRegionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NamedRegionPtr From(const U& u) {
    return mojo::TypeConverter<NamedRegionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NamedRegion>::Convert(*this);
  }


  NamedRegion();

  NamedRegion(
      const WTF::String& name,
      base::Optional<WTF::Vector<::mojo::test::blink::RectPtr>> rects);

  ~NamedRegion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NamedRegionPtr>
  NamedRegionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NamedRegion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NamedRegion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NamedRegion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NamedRegion_UnserializedMessageContext<
            UserType, NamedRegion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NamedRegion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return NamedRegion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NamedRegion_UnserializedMessageContext<
            UserType, NamedRegion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NamedRegion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String name;
  
  base::Optional<WTF::Vector<::mojo::test::blink::RectPtr>> rects;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(NamedRegion);
};





class  RectPair {
 public:
  using DataView = RectPairDataView;
  using Data_ = internal::RectPair_Data;

  template <typename... Args>
  static RectPairPtr New(Args&&... args) {
    return RectPairPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RectPairPtr From(const U& u) {
    return mojo::TypeConverter<RectPairPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RectPair>::Convert(*this);
  }


  RectPair();

  RectPair(
      ::mojo::test::blink::RectPtr first,
      ::mojo::test::blink::RectPtr second);

  ~RectPair();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RectPairPtr>
  RectPairPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RectPair>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RectPair::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RectPair::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RectPair_UnserializedMessageContext<
            UserType, RectPair::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RectPair::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return RectPair::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RectPair_UnserializedMessageContext<
            UserType, RectPair::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RectPair::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::mojo::test::blink::RectPtr first;
  
  ::mojo::test::blink::RectPtr second;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RectPair);
};







class  NoDefaultFieldValues {
 public:
  using DataView = NoDefaultFieldValuesDataView;
  using Data_ = internal::NoDefaultFieldValues_Data;

  template <typename... Args>
  static NoDefaultFieldValuesPtr New(Args&&... args) {
    return NoDefaultFieldValuesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NoDefaultFieldValuesPtr From(const U& u) {
    return mojo::TypeConverter<NoDefaultFieldValuesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NoDefaultFieldValues>::Convert(*this);
  }


  NoDefaultFieldValues();

  NoDefaultFieldValues(
      bool f0,
      int8_t f1,
      uint8_t f2,
      int16_t f3,
      uint16_t f4,
      int32_t f5,
      uint32_t f6,
      int64_t f7,
      uint64_t f8,
      float f9,
      double f10,
      const WTF::String& f11,
      const WTF::String& f12,
      mojo::ScopedMessagePipeHandle f13,
      mojo::ScopedDataPipeConsumerHandle f14,
      mojo::ScopedDataPipeProducerHandle f15,
      mojo::ScopedMessagePipeHandle f16,
      mojo::ScopedDataPipeConsumerHandle f17,
      mojo::ScopedDataPipeProducerHandle f18,
      mojo::ScopedHandle f19,
      mojo::ScopedHandle f20,
      mojo::ScopedSharedBufferHandle f21,
      mojo::ScopedSharedBufferHandle f22,
      const WTF::Vector<WTF::String>& f23,
      const WTF::Vector<WTF::String>& f24,
      const base::Optional<WTF::Vector<WTF::String>>& f25,
      const base::Optional<WTF::Vector<WTF::String>>& f26,
      EmptyStructPtr f27,
      EmptyStructPtr f28);

  ~NoDefaultFieldValues();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NoDefaultFieldValuesPtr>
  NoDefaultFieldValuesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NoDefaultFieldValues>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NoDefaultFieldValues::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NoDefaultFieldValues::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NoDefaultFieldValues_UnserializedMessageContext<
            UserType, NoDefaultFieldValues::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NoDefaultFieldValues::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return NoDefaultFieldValues::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NoDefaultFieldValues_UnserializedMessageContext<
            UserType, NoDefaultFieldValues::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NoDefaultFieldValues::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool f0;
  
  int8_t f1;
  
  uint8_t f2;
  
  int16_t f3;
  
  uint16_t f4;
  
  int32_t f5;
  
  uint32_t f6;
  
  int64_t f7;
  
  uint64_t f8;
  
  float f9;
  
  double f10;
  
  WTF::String f11;
  
  WTF::String f12;
  
  mojo::ScopedMessagePipeHandle f13;
  
  mojo::ScopedDataPipeConsumerHandle f14;
  
  mojo::ScopedDataPipeProducerHandle f15;
  
  mojo::ScopedMessagePipeHandle f16;
  
  mojo::ScopedDataPipeConsumerHandle f17;
  
  mojo::ScopedDataPipeProducerHandle f18;
  
  mojo::ScopedHandle f19;
  
  mojo::ScopedHandle f20;
  
  mojo::ScopedSharedBufferHandle f21;
  
  mojo::ScopedSharedBufferHandle f22;
  
  WTF::Vector<WTF::String> f23;
  
  WTF::Vector<WTF::String> f24;
  
  base::Optional<WTF::Vector<WTF::String>> f25;
  
  base::Optional<WTF::Vector<WTF::String>> f26;
  
  EmptyStructPtr f27;
  
  EmptyStructPtr f28;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(NoDefaultFieldValues);
};





class  DefaultFieldValues {
 public:
  using DataView = DefaultFieldValuesDataView;
  using Data_ = internal::DefaultFieldValues_Data;
  
  static const char kFoo[];

  template <typename... Args>
  static DefaultFieldValuesPtr New(Args&&... args) {
    return DefaultFieldValuesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DefaultFieldValuesPtr From(const U& u) {
    return mojo::TypeConverter<DefaultFieldValuesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DefaultFieldValues>::Convert(*this);
  }


  DefaultFieldValues();

  DefaultFieldValues(
      bool f0,
      int8_t f1,
      uint8_t f2,
      int16_t f3,
      uint16_t f4,
      int32_t f5,
      uint32_t f6,
      int64_t f7,
      uint64_t f8,
      float f9,
      float f10,
      double f11,
      double f12,
      const WTF::String& f13,
      const WTF::String& f14,
      ::mojo::test::blink::RectPtr f15,
      ::mojo::test::blink::RectPtr f16);

  ~DefaultFieldValues();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DefaultFieldValuesPtr>
  DefaultFieldValuesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DefaultFieldValues>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DefaultFieldValues::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DefaultFieldValues::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DefaultFieldValues_UnserializedMessageContext<
            UserType, DefaultFieldValues::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DefaultFieldValues::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DefaultFieldValues::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DefaultFieldValues_UnserializedMessageContext<
            UserType, DefaultFieldValues::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DefaultFieldValues::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool f0;
  
  int8_t f1;
  
  uint8_t f2;
  
  int16_t f3;
  
  uint16_t f4;
  
  int32_t f5;
  
  uint32_t f6;
  
  int64_t f7;
  
  uint64_t f8;
  
  float f9;
  
  float f10;
  
  double f11;
  
  double f12;
  
  WTF::String f13;
  
  WTF::String f14;
  
  ::mojo::test::blink::RectPtr f15;
  
  ::mojo::test::blink::RectPtr f16;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DefaultFieldValues);
};





class  ScopedConstants {
 public:
  using DataView = ScopedConstantsDataView;
  using Data_ = internal::ScopedConstants_Data;
  using EType = ScopedConstants_EType;
  
  static constexpr int32_t TEN = 10;
  
  static constexpr int32_t ALSO_TEN = ScopedConstants::TEN;

  template <typename... Args>
  static ScopedConstantsPtr New(Args&&... args) {
    return ScopedConstantsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ScopedConstantsPtr From(const U& u) {
    return mojo::TypeConverter<ScopedConstantsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ScopedConstants>::Convert(*this);
  }


  ScopedConstants();

  ScopedConstants(
      ScopedConstants::EType f0,
      ScopedConstants::EType f1,
      ScopedConstants::EType f2,
      ScopedConstants::EType f3,
      ScopedConstants::EType f4,
      int32_t f5,
      int32_t f6);

  ~ScopedConstants();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ScopedConstantsPtr>
  ScopedConstantsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ScopedConstants>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ScopedConstants::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ScopedConstants::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ScopedConstants_UnserializedMessageContext<
            UserType, ScopedConstants::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ScopedConstants::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ScopedConstants::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ScopedConstants_UnserializedMessageContext<
            UserType, ScopedConstants::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ScopedConstants::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ScopedConstants::EType f0;
  
  ScopedConstants::EType f1;
  
  ScopedConstants::EType f2;
  
  ScopedConstants::EType f3;
  
  ScopedConstants::EType f4;
  
  int32_t f5;
  
  int32_t f6;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  MapKeyTypes {
 public:
  using DataView = MapKeyTypesDataView;
  using Data_ = internal::MapKeyTypes_Data;

  template <typename... Args>
  static MapKeyTypesPtr New(Args&&... args) {
    return MapKeyTypesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MapKeyTypesPtr From(const U& u) {
    return mojo::TypeConverter<MapKeyTypesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MapKeyTypes>::Convert(*this);
  }


  MapKeyTypes();

  MapKeyTypes(
      const WTF::HashMap<int8_t, int8_t>& f1,
      const WTF::HashMap<uint8_t, uint8_t>& f2,
      const WTF::HashMap<int16_t, int16_t>& f3,
      const WTF::HashMap<uint16_t, uint16_t>& f4,
      const WTF::HashMap<int32_t, int32_t>& f5,
      const WTF::HashMap<uint32_t, uint32_t>& f6,
      const WTF::HashMap<int64_t, int64_t>& f7,
      const WTF::HashMap<uint64_t, uint64_t>& f8,
      const WTF::HashMap<float, float>& f9,
      const WTF::HashMap<double, double>& f10,
      const WTF::HashMap<WTF::String, WTF::String>& f11);

  ~MapKeyTypes();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MapKeyTypesPtr>
  MapKeyTypesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MapKeyTypes>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MapKeyTypes::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MapKeyTypes::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MapKeyTypes_UnserializedMessageContext<
            UserType, MapKeyTypes::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MapKeyTypes::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MapKeyTypes::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MapKeyTypes_UnserializedMessageContext<
            UserType, MapKeyTypes::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MapKeyTypes::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::HashMap<int8_t, int8_t> f1;
  
  WTF::HashMap<uint8_t, uint8_t> f2;
  
  WTF::HashMap<int16_t, int16_t> f3;
  
  WTF::HashMap<uint16_t, uint16_t> f4;
  
  WTF::HashMap<int32_t, int32_t> f5;
  
  WTF::HashMap<uint32_t, uint32_t> f6;
  
  WTF::HashMap<int64_t, int64_t> f7;
  
  WTF::HashMap<uint64_t, uint64_t> f8;
  
  WTF::HashMap<float, float> f9;
  
  WTF::HashMap<double, double> f10;
  
  WTF::HashMap<WTF::String, WTF::String> f11;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  MapValueTypes {
 public:
  using DataView = MapValueTypesDataView;
  using Data_ = internal::MapValueTypes_Data;

  template <typename... Args>
  static MapValueTypesPtr New(Args&&... args) {
    return MapValueTypesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MapValueTypesPtr From(const U& u) {
    return mojo::TypeConverter<MapValueTypesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MapValueTypes>::Convert(*this);
  }


  MapValueTypes();

  MapValueTypes(
      const WTF::HashMap<WTF::String, WTF::Vector<WTF::String>>& f0,
      const WTF::HashMap<WTF::String, base::Optional<WTF::Vector<WTF::String>>>& f1,
      const WTF::HashMap<WTF::String, WTF::Vector<WTF::String>>& f2,
      const WTF::HashMap<WTF::String, WTF::Vector<WTF::String>>& f3,
      const WTF::HashMap<WTF::String, WTF::Vector<base::Optional<WTF::Vector<WTF::String>>>>& f4,
      const WTF::HashMap<WTF::String, WTF::Vector<WTF::Vector<WTF::String>>>& f5,
      WTF::HashMap<WTF::String, ::mojo::test::blink::RectPtr> f6,
      const WTF::HashMap<WTF::String, WTF::HashMap<WTF::String, WTF::String>>& f7,
      const WTF::HashMap<WTF::String, WTF::Vector<WTF::HashMap<WTF::String, WTF::String>>>& f8,
      WTF::HashMap<WTF::String, mojo::ScopedHandle> f9,
      WTF::HashMap<WTF::String, WTF::Vector<mojo::ScopedHandle>> f10,
      WTF::HashMap<WTF::String, WTF::HashMap<WTF::String, mojo::ScopedHandle>> f11);

  ~MapValueTypes();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MapValueTypesPtr>
  MapValueTypesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MapValueTypes>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MapValueTypes::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MapValueTypes::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MapValueTypes_UnserializedMessageContext<
            UserType, MapValueTypes::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MapValueTypes::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MapValueTypes::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MapValueTypes_UnserializedMessageContext<
            UserType, MapValueTypes::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MapValueTypes::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::HashMap<WTF::String, WTF::Vector<WTF::String>> f0;
  
  WTF::HashMap<WTF::String, base::Optional<WTF::Vector<WTF::String>>> f1;
  
  WTF::HashMap<WTF::String, WTF::Vector<WTF::String>> f2;
  
  WTF::HashMap<WTF::String, WTF::Vector<WTF::String>> f3;
  
  WTF::HashMap<WTF::String, WTF::Vector<base::Optional<WTF::Vector<WTF::String>>>> f4;
  
  WTF::HashMap<WTF::String, WTF::Vector<WTF::Vector<WTF::String>>> f5;
  
  WTF::HashMap<WTF::String, ::mojo::test::blink::RectPtr> f6;
  
  WTF::HashMap<WTF::String, WTF::HashMap<WTF::String, WTF::String>> f7;
  
  WTF::HashMap<WTF::String, WTF::Vector<WTF::HashMap<WTF::String, WTF::String>>> f8;
  
  WTF::HashMap<WTF::String, mojo::ScopedHandle> f9;
  
  WTF::HashMap<WTF::String, WTF::Vector<mojo::ScopedHandle>> f10;
  
  WTF::HashMap<WTF::String, WTF::HashMap<WTF::String, mojo::ScopedHandle>> f11;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MapValueTypes);
};





class  ArrayValueTypes {
 public:
  using DataView = ArrayValueTypesDataView;
  using Data_ = internal::ArrayValueTypes_Data;

  template <typename... Args>
  static ArrayValueTypesPtr New(Args&&... args) {
    return ArrayValueTypesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ArrayValueTypesPtr From(const U& u) {
    return mojo::TypeConverter<ArrayValueTypesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ArrayValueTypes>::Convert(*this);
  }


  ArrayValueTypes();

  ArrayValueTypes(
      const WTF::Vector<int8_t>& f0,
      const WTF::Vector<int16_t>& f1,
      const WTF::Vector<int32_t>& f2,
      const WTF::Vector<int64_t>& f3,
      const WTF::Vector<float>& f4,
      const WTF::Vector<double>& f5,
      WTF::Vector<mojo::PendingRemote<SomeInterface>> f6,
      WTF::Vector<mojo::PendingReceiver<SomeInterface>> f7);

  ~ArrayValueTypes();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ArrayValueTypesPtr>
  ArrayValueTypesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ArrayValueTypes>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ArrayValueTypes::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ArrayValueTypes::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ArrayValueTypes_UnserializedMessageContext<
            UserType, ArrayValueTypes::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ArrayValueTypes::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ArrayValueTypes::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ArrayValueTypes_UnserializedMessageContext<
            UserType, ArrayValueTypes::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ArrayValueTypes::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<int8_t> f0;
  
  WTF::Vector<int16_t> f1;
  
  WTF::Vector<int32_t> f2;
  
  WTF::Vector<int64_t> f3;
  
  WTF::Vector<float> f4;
  
  WTF::Vector<double> f5;
  
  WTF::Vector<mojo::PendingRemote<SomeInterface>> f6;
  
  WTF::Vector<mojo::PendingReceiver<SomeInterface>> f7;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ArrayValueTypes);
};





class  FloatNumberValues {
 public:
  using DataView = FloatNumberValuesDataView;
  using Data_ = internal::FloatNumberValues_Data;
  
  static constexpr double V0 = std::numeric_limits<double>::infinity();
  
  static constexpr double V1 = -std::numeric_limits<double>::infinity();
  
  static constexpr double V2 = std::numeric_limits<double>::quiet_NaN();
  
  static constexpr float V3 = std::numeric_limits<float>::infinity();
  
  static constexpr float V4 = -std::numeric_limits<float>::infinity();
  
  static constexpr float V5 = std::numeric_limits<float>::quiet_NaN();
  
  static constexpr float V6 = 0;
  
  static constexpr double V7 = 1234567890.123;
  
  static constexpr double V8 = 1.2E+20;
  
  static constexpr double V9 = -1.2E+20;

  template <typename... Args>
  static FloatNumberValuesPtr New(Args&&... args) {
    return FloatNumberValuesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FloatNumberValuesPtr From(const U& u) {
    return mojo::TypeConverter<FloatNumberValuesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FloatNumberValues>::Convert(*this);
  }


  FloatNumberValues();

  FloatNumberValues(
      double f0,
      double f1,
      double f2,
      float f3,
      float f4,
      float f5,
      float f6,
      double f7,
      double f8,
      double f9);

  ~FloatNumberValues();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FloatNumberValuesPtr>
  FloatNumberValuesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FloatNumberValues>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FloatNumberValues::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FloatNumberValues::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FloatNumberValues_UnserializedMessageContext<
            UserType, FloatNumberValues::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FloatNumberValues::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FloatNumberValues::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FloatNumberValues_UnserializedMessageContext<
            UserType, FloatNumberValues::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FloatNumberValues::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  double f0;
  
  double f1;
  
  double f2;
  
  float f3;
  
  float f4;
  
  float f5;
  
  float f6;
  
  double f7;
  
  double f8;
  
  double f9;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  IntegerNumberValues {
 public:
  using DataView = IntegerNumberValuesDataView;
  using Data_ = internal::IntegerNumberValues_Data;
  
  static constexpr int8_t V0 = -128;
  
  static constexpr int8_t V1 = -1;
  
  static constexpr int8_t V2 = 0;
  
  static constexpr int8_t V3 = 42;
  
  static constexpr int8_t V4 = 127;
  
  static constexpr int16_t V5 = -32768;
  
  static constexpr int16_t V6 = -1;
  
  static constexpr int16_t V7 = 0;
  
  static constexpr int16_t V8 = 12345;
  
  static constexpr int16_t V9 = 32767;
  
  static constexpr int32_t V10 = (-2147483647 - 1) /* Workaround for MSVC bug; see https://crbug.com/445618 */;
  
  static constexpr int32_t V11 = -1;
  
  static constexpr int32_t V12 = 0;
  
  static constexpr int32_t V13 = 1234567890;
  
  static constexpr int32_t V14 = 2147483647;
  
  static constexpr int64_t V15 = -9007199254740991;
  
  static constexpr int64_t V16 = -1;
  
  static constexpr int64_t V17 = 0;
  
  static constexpr int64_t V18 = 1234567890123456;
  
  static constexpr int64_t V19 = 9007199254740991;

  template <typename... Args>
  static IntegerNumberValuesPtr New(Args&&... args) {
    return IntegerNumberValuesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IntegerNumberValuesPtr From(const U& u) {
    return mojo::TypeConverter<IntegerNumberValuesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IntegerNumberValues>::Convert(*this);
  }


  IntegerNumberValues();

  IntegerNumberValues(
      int8_t f0,
      int8_t f1,
      int8_t f2,
      int8_t f3,
      int8_t f4,
      int16_t f5,
      int16_t f6,
      int16_t f7,
      int16_t f8,
      int16_t f9,
      int32_t f10,
      int32_t f11,
      int32_t f12,
      int32_t f13,
      int32_t f14,
      int64_t f15,
      int64_t f16,
      int64_t f17,
      int64_t f18,
      int64_t f19);

  ~IntegerNumberValues();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IntegerNumberValuesPtr>
  IntegerNumberValuesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IntegerNumberValues>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IntegerNumberValues::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IntegerNumberValues::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IntegerNumberValues_UnserializedMessageContext<
            UserType, IntegerNumberValues::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IntegerNumberValues::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return IntegerNumberValues::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IntegerNumberValues_UnserializedMessageContext<
            UserType, IntegerNumberValues::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IntegerNumberValues::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int8_t f0;
  
  int8_t f1;
  
  int8_t f2;
  
  int8_t f3;
  
  int8_t f4;
  
  int16_t f5;
  
  int16_t f6;
  
  int16_t f7;
  
  int16_t f8;
  
  int16_t f9;
  
  int32_t f10;
  
  int32_t f11;
  
  int32_t f12;
  
  int32_t f13;
  
  int32_t f14;
  
  int64_t f15;
  
  int64_t f16;
  
  int64_t f17;
  
  int64_t f18;
  
  int64_t f19;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  UnsignedNumberValues {
 public:
  using DataView = UnsignedNumberValuesDataView;
  using Data_ = internal::UnsignedNumberValues_Data;
  
  static constexpr uint8_t V0 = 0U;
  
  static constexpr uint8_t V1 = 42U;
  
  static constexpr uint8_t V2 = 0xFFU;
  
  static constexpr uint16_t V3 = 0U;
  
  static constexpr uint16_t V4 = 12345U;
  
  static constexpr uint16_t V5 = 0xFFFFU;
  
  static constexpr uint32_t V6 = 0U;
  
  static constexpr uint32_t V7 = 1234567890U;
  
  static constexpr uint32_t V8 = 0xFFFFFFFFU;
  
  static constexpr uint64_t V9 = 0ULL;
  
  static constexpr uint64_t V10 = 1234567890123456ULL;
  
  static constexpr uint64_t V11 = 9007199254740991ULL;

  template <typename... Args>
  static UnsignedNumberValuesPtr New(Args&&... args) {
    return UnsignedNumberValuesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UnsignedNumberValuesPtr From(const U& u) {
    return mojo::TypeConverter<UnsignedNumberValuesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UnsignedNumberValues>::Convert(*this);
  }


  UnsignedNumberValues();

  UnsignedNumberValues(
      uint8_t f0,
      uint8_t f1,
      uint8_t f2,
      uint16_t f3,
      uint16_t f4,
      uint16_t f5,
      uint32_t f6,
      uint32_t f7,
      uint32_t f8,
      uint64_t f9,
      uint64_t f10,
      uint64_t f11);

  ~UnsignedNumberValues();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UnsignedNumberValuesPtr>
  UnsignedNumberValuesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UnsignedNumberValues>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UnsignedNumberValues::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UnsignedNumberValues::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UnsignedNumberValues_UnserializedMessageContext<
            UserType, UnsignedNumberValues::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UnsignedNumberValues::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return UnsignedNumberValues::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UnsignedNumberValues_UnserializedMessageContext<
            UserType, UnsignedNumberValues::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UnsignedNumberValues::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint8_t f0;
  
  uint8_t f1;
  
  uint8_t f2;
  
  uint16_t f3;
  
  uint16_t f4;
  
  uint16_t f5;
  
  uint32_t f6;
  
  uint32_t f7;
  
  uint32_t f8;
  
  uint64_t f9;
  
  uint64_t f10;
  
  uint64_t f11;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  BitArrayValues {
 public:
  using DataView = BitArrayValuesDataView;
  using Data_ = internal::BitArrayValues_Data;

  template <typename... Args>
  static BitArrayValuesPtr New(Args&&... args) {
    return BitArrayValuesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BitArrayValuesPtr From(const U& u) {
    return mojo::TypeConverter<BitArrayValuesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BitArrayValues>::Convert(*this);
  }


  BitArrayValues();

  BitArrayValues(
      const WTF::Vector<bool>& f0,
      const WTF::Vector<bool>& f1,
      const WTF::Vector<bool>& f2,
      const WTF::Vector<bool>& f3,
      const WTF::Vector<WTF::Vector<bool>>& f4,
      const WTF::Vector<base::Optional<WTF::Vector<bool>>>& f5,
      const WTF::Vector<base::Optional<WTF::Vector<bool>>>& f6);

  ~BitArrayValues();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BitArrayValuesPtr>
  BitArrayValuesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BitArrayValues>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BitArrayValues::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BitArrayValues::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BitArrayValues_UnserializedMessageContext<
            UserType, BitArrayValues::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BitArrayValues::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BitArrayValues::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BitArrayValues_UnserializedMessageContext<
            UserType, BitArrayValues::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BitArrayValues::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<bool> f0;
  
  WTF::Vector<bool> f1;
  
  WTF::Vector<bool> f2;
  
  WTF::Vector<bool> f3;
  
  WTF::Vector<WTF::Vector<bool>> f4;
  
  WTF::Vector<base::Optional<WTF::Vector<bool>>> f5;
  
  WTF::Vector<base::Optional<WTF::Vector<bool>>> f6;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  MultiVersionStruct {
 public:
  using DataView = MultiVersionStructDataView;
  using Data_ = internal::MultiVersionStruct_Data;

  template <typename... Args>
  static MultiVersionStructPtr New(Args&&... args) {
    return MultiVersionStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MultiVersionStructPtr From(const U& u) {
    return mojo::TypeConverter<MultiVersionStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MultiVersionStruct>::Convert(*this);
  }


  MultiVersionStruct();

  explicit MultiVersionStruct(
      int32_t f_int32);

  MultiVersionStruct(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect);

  MultiVersionStruct(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect,
      const WTF::String& f_string);

  MultiVersionStruct(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect,
      const WTF::String& f_string,
      const base::Optional<WTF::Vector<int8_t>>& f_array);

  MultiVersionStruct(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect,
      const WTF::String& f_string,
      const base::Optional<WTF::Vector<int8_t>>& f_array,
      mojo::ScopedMessagePipeHandle f_message_pipe,
      bool f_bool);

  MultiVersionStruct(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect,
      const WTF::String& f_string,
      const base::Optional<WTF::Vector<int8_t>>& f_array,
      mojo::ScopedMessagePipeHandle f_message_pipe,
      bool f_bool,
      int16_t f_int16);

  ~MultiVersionStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MultiVersionStructPtr>
  MultiVersionStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MultiVersionStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MultiVersionStruct::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MultiVersionStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MultiVersionStruct_UnserializedMessageContext<
            UserType, MultiVersionStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MultiVersionStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MultiVersionStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MultiVersionStruct_UnserializedMessageContext<
            UserType, MultiVersionStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MultiVersionStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t f_int32;
  
  ::mojo::test::blink::RectPtr f_rect;
  
  WTF::String f_string;
  
  base::Optional<WTF::Vector<int8_t>> f_array;
  
  mojo::ScopedMessagePipeHandle f_message_pipe;
  
  bool f_bool;
  
  int16_t f_int16;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MultiVersionStruct);
};






class  MultiVersionStructV1 {
 public:
  using DataView = MultiVersionStructV1DataView;
  using Data_ = internal::MultiVersionStructV1_Data;

  template <typename... Args>
  static MultiVersionStructV1Ptr New(Args&&... args) {
    return MultiVersionStructV1Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MultiVersionStructV1Ptr From(const U& u) {
    return mojo::TypeConverter<MultiVersionStructV1Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MultiVersionStructV1>::Convert(*this);
  }


  MultiVersionStructV1();

  explicit MultiVersionStructV1(
      int32_t f_int32);

  MultiVersionStructV1(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect);

  ~MultiVersionStructV1();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MultiVersionStructV1Ptr>
  MultiVersionStructV1Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MultiVersionStructV1>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MultiVersionStructV1::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MultiVersionStructV1::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MultiVersionStructV1_UnserializedMessageContext<
            UserType, MultiVersionStructV1::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MultiVersionStructV1::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MultiVersionStructV1::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MultiVersionStructV1_UnserializedMessageContext<
            UserType, MultiVersionStructV1::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MultiVersionStructV1::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t f_int32;
  
  ::mojo::test::blink::RectPtr f_rect;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MultiVersionStructV1);
};





class  MultiVersionStructV3 {
 public:
  using DataView = MultiVersionStructV3DataView;
  using Data_ = internal::MultiVersionStructV3_Data;

  template <typename... Args>
  static MultiVersionStructV3Ptr New(Args&&... args) {
    return MultiVersionStructV3Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MultiVersionStructV3Ptr From(const U& u) {
    return mojo::TypeConverter<MultiVersionStructV3Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MultiVersionStructV3>::Convert(*this);
  }


  MultiVersionStructV3();

  explicit MultiVersionStructV3(
      int32_t f_int32);

  MultiVersionStructV3(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect);

  MultiVersionStructV3(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect,
      const WTF::String& f_string);

  ~MultiVersionStructV3();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MultiVersionStructV3Ptr>
  MultiVersionStructV3Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MultiVersionStructV3>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MultiVersionStructV3::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MultiVersionStructV3::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MultiVersionStructV3_UnserializedMessageContext<
            UserType, MultiVersionStructV3::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MultiVersionStructV3::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MultiVersionStructV3::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MultiVersionStructV3_UnserializedMessageContext<
            UserType, MultiVersionStructV3::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MultiVersionStructV3::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t f_int32;
  
  ::mojo::test::blink::RectPtr f_rect;
  
  WTF::String f_string;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MultiVersionStructV3);
};





class  MultiVersionStructV5 {
 public:
  using DataView = MultiVersionStructV5DataView;
  using Data_ = internal::MultiVersionStructV5_Data;

  template <typename... Args>
  static MultiVersionStructV5Ptr New(Args&&... args) {
    return MultiVersionStructV5Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MultiVersionStructV5Ptr From(const U& u) {
    return mojo::TypeConverter<MultiVersionStructV5Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MultiVersionStructV5>::Convert(*this);
  }


  MultiVersionStructV5();

  explicit MultiVersionStructV5(
      int32_t f_int32);

  MultiVersionStructV5(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect);

  MultiVersionStructV5(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect,
      const WTF::String& f_string);

  MultiVersionStructV5(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect,
      const WTF::String& f_string,
      const base::Optional<WTF::Vector<int8_t>>& f_array);

  ~MultiVersionStructV5();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MultiVersionStructV5Ptr>
  MultiVersionStructV5Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MultiVersionStructV5>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MultiVersionStructV5::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MultiVersionStructV5::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MultiVersionStructV5_UnserializedMessageContext<
            UserType, MultiVersionStructV5::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MultiVersionStructV5::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MultiVersionStructV5::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MultiVersionStructV5_UnserializedMessageContext<
            UserType, MultiVersionStructV5::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MultiVersionStructV5::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t f_int32;
  
  ::mojo::test::blink::RectPtr f_rect;
  
  WTF::String f_string;
  
  base::Optional<WTF::Vector<int8_t>> f_array;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MultiVersionStructV5);
};





class  MultiVersionStructV7 {
 public:
  using DataView = MultiVersionStructV7DataView;
  using Data_ = internal::MultiVersionStructV7_Data;

  template <typename... Args>
  static MultiVersionStructV7Ptr New(Args&&... args) {
    return MultiVersionStructV7Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MultiVersionStructV7Ptr From(const U& u) {
    return mojo::TypeConverter<MultiVersionStructV7Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MultiVersionStructV7>::Convert(*this);
  }


  MultiVersionStructV7();

  explicit MultiVersionStructV7(
      int32_t f_int32);

  MultiVersionStructV7(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect);

  MultiVersionStructV7(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect,
      const WTF::String& f_string);

  MultiVersionStructV7(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect,
      const WTF::String& f_string,
      const base::Optional<WTF::Vector<int8_t>>& f_array);

  MultiVersionStructV7(
      int32_t f_int32,
      ::mojo::test::blink::RectPtr f_rect,
      const WTF::String& f_string,
      const base::Optional<WTF::Vector<int8_t>>& f_array,
      mojo::ScopedMessagePipeHandle f_message_pipe,
      bool f_bool);

  ~MultiVersionStructV7();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MultiVersionStructV7Ptr>
  MultiVersionStructV7Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MultiVersionStructV7>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MultiVersionStructV7::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MultiVersionStructV7::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MultiVersionStructV7_UnserializedMessageContext<
            UserType, MultiVersionStructV7::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MultiVersionStructV7::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MultiVersionStructV7::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MultiVersionStructV7_UnserializedMessageContext<
            UserType, MultiVersionStructV7::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MultiVersionStructV7::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t f_int32;
  
  ::mojo::test::blink::RectPtr f_rect;
  
  WTF::String f_string;
  
  base::Optional<WTF::Vector<int8_t>> f_array;
  
  mojo::ScopedMessagePipeHandle f_message_pipe;
  
  bool f_bool;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MultiVersionStructV7);
};






class  ContainsInterface {
 public:
  using DataView = ContainsInterfaceDataView;
  using Data_ = internal::ContainsInterface_Data;

  template <typename... Args>
  static ContainsInterfacePtr New(Args&&... args) {
    return ContainsInterfacePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ContainsInterfacePtr From(const U& u) {
    return mojo::TypeConverter<ContainsInterfacePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ContainsInterface>::Convert(*this);
  }


  ContainsInterface();

  explicit ContainsInterface(
      mojo::PendingRemote<SomeInterface> some_interface);

  ~ContainsInterface();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ContainsInterfacePtr>
  ContainsInterfacePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ContainsInterface>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ContainsInterface::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ContainsInterface::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ContainsInterface_UnserializedMessageContext<
            UserType, ContainsInterface::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ContainsInterface::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ContainsInterface::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ContainsInterface_UnserializedMessageContext<
            UserType, ContainsInterface::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ContainsInterface::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::PendingRemote<SomeInterface> some_interface;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ContainsInterface);
};






class  ContainsInterfaceRequest {
 public:
  using DataView = ContainsInterfaceRequestDataView;
  using Data_ = internal::ContainsInterfaceRequest_Data;

  template <typename... Args>
  static ContainsInterfaceRequestPtr New(Args&&... args) {
    return ContainsInterfaceRequestPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ContainsInterfaceRequestPtr From(const U& u) {
    return mojo::TypeConverter<ContainsInterfaceRequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ContainsInterfaceRequest>::Convert(*this);
  }


  ContainsInterfaceRequest();

  explicit ContainsInterfaceRequest(
      mojo::PendingReceiver<SomeInterface> request);

  ~ContainsInterfaceRequest();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ContainsInterfaceRequestPtr>
  ContainsInterfaceRequestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ContainsInterfaceRequest>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ContainsInterfaceRequest::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ContainsInterfaceRequest::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ContainsInterfaceRequest_UnserializedMessageContext<
            UserType, ContainsInterfaceRequest::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ContainsInterfaceRequest::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ContainsInterfaceRequest::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ContainsInterfaceRequest_UnserializedMessageContext<
            UserType, ContainsInterfaceRequest::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ContainsInterfaceRequest::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::PendingReceiver<SomeInterface> request;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ContainsInterfaceRequest);
};






class  ContainsHashable {
 public:
  using DataView = ContainsHashableDataView;
  using Data_ = internal::ContainsHashable_Data;

  template <typename... Args>
  static ContainsHashablePtr New(Args&&... args) {
    return ContainsHashablePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ContainsHashablePtr From(const U& u) {
    return mojo::TypeConverter<ContainsHashablePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ContainsHashable>::Convert(*this);
  }


  ContainsHashable();

  explicit ContainsHashable(
      const mojo::test::RectBlink& rect);

  ~ContainsHashable();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ContainsHashablePtr>
  ContainsHashablePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ContainsHashable>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ContainsHashable::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ContainsHashable::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ContainsHashable_UnserializedMessageContext<
            UserType, ContainsHashable::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ContainsHashable::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ContainsHashable::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ContainsHashable_UnserializedMessageContext<
            UserType, ContainsHashable::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ContainsHashable::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::test::RectBlink rect;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  SimpleNestedStruct {
 public:
  using DataView = SimpleNestedStructDataView;
  using Data_ = internal::SimpleNestedStruct_Data;

  template <typename... Args>
  static SimpleNestedStructPtr New(Args&&... args) {
    return SimpleNestedStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SimpleNestedStructPtr From(const U& u) {
    return mojo::TypeConverter<SimpleNestedStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SimpleNestedStruct>::Convert(*this);
  }


  SimpleNestedStruct();

  explicit SimpleNestedStruct(
      ContainsOtherPtr nested);

  ~SimpleNestedStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SimpleNestedStructPtr>
  SimpleNestedStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SimpleNestedStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SimpleNestedStruct::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SimpleNestedStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SimpleNestedStruct_UnserializedMessageContext<
            UserType, SimpleNestedStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SimpleNestedStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SimpleNestedStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SimpleNestedStruct_UnserializedMessageContext<
            UserType, SimpleNestedStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SimpleNestedStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ContainsOtherPtr nested;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SimpleNestedStruct);
};

template <typename StructPtrType>
NamedRegionPtr NamedRegion::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(rects)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NamedRegion>::value>::type*>
bool NamedRegion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->rects, other_struct.rects))
    return false;
  return true;
}
template <typename StructPtrType>
RectPairPtr RectPair::Clone() const {
  return New(
      mojo::Clone(first),
      mojo::Clone(second)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RectPair>::value>::type*>
bool RectPair::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->first, other_struct.first))
    return false;
  if (!mojo::Equals(this->second, other_struct.second))
    return false;
  return true;
}
template <typename StructPtrType>
EmptyStructPtr EmptyStruct::Clone() const {
  return New(
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EmptyStruct>::value>::type*>
bool EmptyStruct::Equals(const T& other_struct) const {
  return true;
}
template <typename StructPtrType>
NoDefaultFieldValuesPtr NoDefaultFieldValues::Clone() const {
  return New(
      mojo::Clone(f0),
      mojo::Clone(f1),
      mojo::Clone(f2),
      mojo::Clone(f3),
      mojo::Clone(f4),
      mojo::Clone(f5),
      mojo::Clone(f6),
      mojo::Clone(f7),
      mojo::Clone(f8),
      mojo::Clone(f9),
      mojo::Clone(f10),
      mojo::Clone(f11),
      mojo::Clone(f12),
      mojo::Clone(f13),
      mojo::Clone(f14),
      mojo::Clone(f15),
      mojo::Clone(f16),
      mojo::Clone(f17),
      mojo::Clone(f18),
      mojo::Clone(f19),
      mojo::Clone(f20),
      mojo::Clone(f21),
      mojo::Clone(f22),
      mojo::Clone(f23),
      mojo::Clone(f24),
      mojo::Clone(f25),
      mojo::Clone(f26),
      mojo::Clone(f27),
      mojo::Clone(f28)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NoDefaultFieldValues>::value>::type*>
bool NoDefaultFieldValues::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f0, other_struct.f0))
    return false;
  if (!mojo::Equals(this->f1, other_struct.f1))
    return false;
  if (!mojo::Equals(this->f2, other_struct.f2))
    return false;
  if (!mojo::Equals(this->f3, other_struct.f3))
    return false;
  if (!mojo::Equals(this->f4, other_struct.f4))
    return false;
  if (!mojo::Equals(this->f5, other_struct.f5))
    return false;
  if (!mojo::Equals(this->f6, other_struct.f6))
    return false;
  if (!mojo::Equals(this->f7, other_struct.f7))
    return false;
  if (!mojo::Equals(this->f8, other_struct.f8))
    return false;
  if (!mojo::Equals(this->f9, other_struct.f9))
    return false;
  if (!mojo::Equals(this->f10, other_struct.f10))
    return false;
  if (!mojo::Equals(this->f11, other_struct.f11))
    return false;
  if (!mojo::Equals(this->f12, other_struct.f12))
    return false;
  if (!mojo::Equals(this->f13, other_struct.f13))
    return false;
  if (!mojo::Equals(this->f14, other_struct.f14))
    return false;
  if (!mojo::Equals(this->f15, other_struct.f15))
    return false;
  if (!mojo::Equals(this->f16, other_struct.f16))
    return false;
  if (!mojo::Equals(this->f17, other_struct.f17))
    return false;
  if (!mojo::Equals(this->f18, other_struct.f18))
    return false;
  if (!mojo::Equals(this->f19, other_struct.f19))
    return false;
  if (!mojo::Equals(this->f20, other_struct.f20))
    return false;
  if (!mojo::Equals(this->f21, other_struct.f21))
    return false;
  if (!mojo::Equals(this->f22, other_struct.f22))
    return false;
  if (!mojo::Equals(this->f23, other_struct.f23))
    return false;
  if (!mojo::Equals(this->f24, other_struct.f24))
    return false;
  if (!mojo::Equals(this->f25, other_struct.f25))
    return false;
  if (!mojo::Equals(this->f26, other_struct.f26))
    return false;
  if (!mojo::Equals(this->f27, other_struct.f27))
    return false;
  if (!mojo::Equals(this->f28, other_struct.f28))
    return false;
  return true;
}
template <typename StructPtrType>
DefaultFieldValuesPtr DefaultFieldValues::Clone() const {
  return New(
      mojo::Clone(f0),
      mojo::Clone(f1),
      mojo::Clone(f2),
      mojo::Clone(f3),
      mojo::Clone(f4),
      mojo::Clone(f5),
      mojo::Clone(f6),
      mojo::Clone(f7),
      mojo::Clone(f8),
      mojo::Clone(f9),
      mojo::Clone(f10),
      mojo::Clone(f11),
      mojo::Clone(f12),
      mojo::Clone(f13),
      mojo::Clone(f14),
      mojo::Clone(f15),
      mojo::Clone(f16)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DefaultFieldValues>::value>::type*>
bool DefaultFieldValues::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f0, other_struct.f0))
    return false;
  if (!mojo::Equals(this->f1, other_struct.f1))
    return false;
  if (!mojo::Equals(this->f2, other_struct.f2))
    return false;
  if (!mojo::Equals(this->f3, other_struct.f3))
    return false;
  if (!mojo::Equals(this->f4, other_struct.f4))
    return false;
  if (!mojo::Equals(this->f5, other_struct.f5))
    return false;
  if (!mojo::Equals(this->f6, other_struct.f6))
    return false;
  if (!mojo::Equals(this->f7, other_struct.f7))
    return false;
  if (!mojo::Equals(this->f8, other_struct.f8))
    return false;
  if (!mojo::Equals(this->f9, other_struct.f9))
    return false;
  if (!mojo::Equals(this->f10, other_struct.f10))
    return false;
  if (!mojo::Equals(this->f11, other_struct.f11))
    return false;
  if (!mojo::Equals(this->f12, other_struct.f12))
    return false;
  if (!mojo::Equals(this->f13, other_struct.f13))
    return false;
  if (!mojo::Equals(this->f14, other_struct.f14))
    return false;
  if (!mojo::Equals(this->f15, other_struct.f15))
    return false;
  if (!mojo::Equals(this->f16, other_struct.f16))
    return false;
  return true;
}
template <typename StructPtrType>
ScopedConstantsPtr ScopedConstants::Clone() const {
  return New(
      mojo::Clone(f0),
      mojo::Clone(f1),
      mojo::Clone(f2),
      mojo::Clone(f3),
      mojo::Clone(f4),
      mojo::Clone(f5),
      mojo::Clone(f6)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ScopedConstants>::value>::type*>
bool ScopedConstants::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f0, other_struct.f0))
    return false;
  if (!mojo::Equals(this->f1, other_struct.f1))
    return false;
  if (!mojo::Equals(this->f2, other_struct.f2))
    return false;
  if (!mojo::Equals(this->f3, other_struct.f3))
    return false;
  if (!mojo::Equals(this->f4, other_struct.f4))
    return false;
  if (!mojo::Equals(this->f5, other_struct.f5))
    return false;
  if (!mojo::Equals(this->f6, other_struct.f6))
    return false;
  return true;
}
template <typename StructPtrType>
MapKeyTypesPtr MapKeyTypes::Clone() const {
  return New(
      mojo::Clone(f1),
      mojo::Clone(f2),
      mojo::Clone(f3),
      mojo::Clone(f4),
      mojo::Clone(f5),
      mojo::Clone(f6),
      mojo::Clone(f7),
      mojo::Clone(f8),
      mojo::Clone(f9),
      mojo::Clone(f10),
      mojo::Clone(f11)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MapKeyTypes>::value>::type*>
bool MapKeyTypes::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f1, other_struct.f1))
    return false;
  if (!mojo::Equals(this->f2, other_struct.f2))
    return false;
  if (!mojo::Equals(this->f3, other_struct.f3))
    return false;
  if (!mojo::Equals(this->f4, other_struct.f4))
    return false;
  if (!mojo::Equals(this->f5, other_struct.f5))
    return false;
  if (!mojo::Equals(this->f6, other_struct.f6))
    return false;
  if (!mojo::Equals(this->f7, other_struct.f7))
    return false;
  if (!mojo::Equals(this->f8, other_struct.f8))
    return false;
  if (!mojo::Equals(this->f9, other_struct.f9))
    return false;
  if (!mojo::Equals(this->f10, other_struct.f10))
    return false;
  if (!mojo::Equals(this->f11, other_struct.f11))
    return false;
  return true;
}
template <typename StructPtrType>
MapValueTypesPtr MapValueTypes::Clone() const {
  return New(
      mojo::Clone(f0),
      mojo::Clone(f1),
      mojo::Clone(f2),
      mojo::Clone(f3),
      mojo::Clone(f4),
      mojo::Clone(f5),
      mojo::Clone(f6),
      mojo::Clone(f7),
      mojo::Clone(f8),
      mojo::Clone(f9),
      mojo::Clone(f10),
      mojo::Clone(f11)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MapValueTypes>::value>::type*>
bool MapValueTypes::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f0, other_struct.f0))
    return false;
  if (!mojo::Equals(this->f1, other_struct.f1))
    return false;
  if (!mojo::Equals(this->f2, other_struct.f2))
    return false;
  if (!mojo::Equals(this->f3, other_struct.f3))
    return false;
  if (!mojo::Equals(this->f4, other_struct.f4))
    return false;
  if (!mojo::Equals(this->f5, other_struct.f5))
    return false;
  if (!mojo::Equals(this->f6, other_struct.f6))
    return false;
  if (!mojo::Equals(this->f7, other_struct.f7))
    return false;
  if (!mojo::Equals(this->f8, other_struct.f8))
    return false;
  if (!mojo::Equals(this->f9, other_struct.f9))
    return false;
  if (!mojo::Equals(this->f10, other_struct.f10))
    return false;
  if (!mojo::Equals(this->f11, other_struct.f11))
    return false;
  return true;
}
template <typename StructPtrType>
ArrayValueTypesPtr ArrayValueTypes::Clone() const {
  return New(
      mojo::Clone(f0),
      mojo::Clone(f1),
      mojo::Clone(f2),
      mojo::Clone(f3),
      mojo::Clone(f4),
      mojo::Clone(f5),
      mojo::Clone(f6),
      mojo::Clone(f7)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ArrayValueTypes>::value>::type*>
bool ArrayValueTypes::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f0, other_struct.f0))
    return false;
  if (!mojo::Equals(this->f1, other_struct.f1))
    return false;
  if (!mojo::Equals(this->f2, other_struct.f2))
    return false;
  if (!mojo::Equals(this->f3, other_struct.f3))
    return false;
  if (!mojo::Equals(this->f4, other_struct.f4))
    return false;
  if (!mojo::Equals(this->f5, other_struct.f5))
    return false;
  if (!mojo::Equals(this->f6, other_struct.f6))
    return false;
  if (!mojo::Equals(this->f7, other_struct.f7))
    return false;
  return true;
}
template <typename StructPtrType>
FloatNumberValuesPtr FloatNumberValues::Clone() const {
  return New(
      mojo::Clone(f0),
      mojo::Clone(f1),
      mojo::Clone(f2),
      mojo::Clone(f3),
      mojo::Clone(f4),
      mojo::Clone(f5),
      mojo::Clone(f6),
      mojo::Clone(f7),
      mojo::Clone(f8),
      mojo::Clone(f9)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FloatNumberValues>::value>::type*>
bool FloatNumberValues::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f0, other_struct.f0))
    return false;
  if (!mojo::Equals(this->f1, other_struct.f1))
    return false;
  if (!mojo::Equals(this->f2, other_struct.f2))
    return false;
  if (!mojo::Equals(this->f3, other_struct.f3))
    return false;
  if (!mojo::Equals(this->f4, other_struct.f4))
    return false;
  if (!mojo::Equals(this->f5, other_struct.f5))
    return false;
  if (!mojo::Equals(this->f6, other_struct.f6))
    return false;
  if (!mojo::Equals(this->f7, other_struct.f7))
    return false;
  if (!mojo::Equals(this->f8, other_struct.f8))
    return false;
  if (!mojo::Equals(this->f9, other_struct.f9))
    return false;
  return true;
}
template <typename StructPtrType>
IntegerNumberValuesPtr IntegerNumberValues::Clone() const {
  return New(
      mojo::Clone(f0),
      mojo::Clone(f1),
      mojo::Clone(f2),
      mojo::Clone(f3),
      mojo::Clone(f4),
      mojo::Clone(f5),
      mojo::Clone(f6),
      mojo::Clone(f7),
      mojo::Clone(f8),
      mojo::Clone(f9),
      mojo::Clone(f10),
      mojo::Clone(f11),
      mojo::Clone(f12),
      mojo::Clone(f13),
      mojo::Clone(f14),
      mojo::Clone(f15),
      mojo::Clone(f16),
      mojo::Clone(f17),
      mojo::Clone(f18),
      mojo::Clone(f19)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IntegerNumberValues>::value>::type*>
bool IntegerNumberValues::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f0, other_struct.f0))
    return false;
  if (!mojo::Equals(this->f1, other_struct.f1))
    return false;
  if (!mojo::Equals(this->f2, other_struct.f2))
    return false;
  if (!mojo::Equals(this->f3, other_struct.f3))
    return false;
  if (!mojo::Equals(this->f4, other_struct.f4))
    return false;
  if (!mojo::Equals(this->f5, other_struct.f5))
    return false;
  if (!mojo::Equals(this->f6, other_struct.f6))
    return false;
  if (!mojo::Equals(this->f7, other_struct.f7))
    return false;
  if (!mojo::Equals(this->f8, other_struct.f8))
    return false;
  if (!mojo::Equals(this->f9, other_struct.f9))
    return false;
  if (!mojo::Equals(this->f10, other_struct.f10))
    return false;
  if (!mojo::Equals(this->f11, other_struct.f11))
    return false;
  if (!mojo::Equals(this->f12, other_struct.f12))
    return false;
  if (!mojo::Equals(this->f13, other_struct.f13))
    return false;
  if (!mojo::Equals(this->f14, other_struct.f14))
    return false;
  if (!mojo::Equals(this->f15, other_struct.f15))
    return false;
  if (!mojo::Equals(this->f16, other_struct.f16))
    return false;
  if (!mojo::Equals(this->f17, other_struct.f17))
    return false;
  if (!mojo::Equals(this->f18, other_struct.f18))
    return false;
  if (!mojo::Equals(this->f19, other_struct.f19))
    return false;
  return true;
}
template <typename StructPtrType>
UnsignedNumberValuesPtr UnsignedNumberValues::Clone() const {
  return New(
      mojo::Clone(f0),
      mojo::Clone(f1),
      mojo::Clone(f2),
      mojo::Clone(f3),
      mojo::Clone(f4),
      mojo::Clone(f5),
      mojo::Clone(f6),
      mojo::Clone(f7),
      mojo::Clone(f8),
      mojo::Clone(f9),
      mojo::Clone(f10),
      mojo::Clone(f11)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UnsignedNumberValues>::value>::type*>
bool UnsignedNumberValues::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f0, other_struct.f0))
    return false;
  if (!mojo::Equals(this->f1, other_struct.f1))
    return false;
  if (!mojo::Equals(this->f2, other_struct.f2))
    return false;
  if (!mojo::Equals(this->f3, other_struct.f3))
    return false;
  if (!mojo::Equals(this->f4, other_struct.f4))
    return false;
  if (!mojo::Equals(this->f5, other_struct.f5))
    return false;
  if (!mojo::Equals(this->f6, other_struct.f6))
    return false;
  if (!mojo::Equals(this->f7, other_struct.f7))
    return false;
  if (!mojo::Equals(this->f8, other_struct.f8))
    return false;
  if (!mojo::Equals(this->f9, other_struct.f9))
    return false;
  if (!mojo::Equals(this->f10, other_struct.f10))
    return false;
  if (!mojo::Equals(this->f11, other_struct.f11))
    return false;
  return true;
}
template <typename StructPtrType>
BitArrayValuesPtr BitArrayValues::Clone() const {
  return New(
      mojo::Clone(f0),
      mojo::Clone(f1),
      mojo::Clone(f2),
      mojo::Clone(f3),
      mojo::Clone(f4),
      mojo::Clone(f5),
      mojo::Clone(f6)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BitArrayValues>::value>::type*>
bool BitArrayValues::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f0, other_struct.f0))
    return false;
  if (!mojo::Equals(this->f1, other_struct.f1))
    return false;
  if (!mojo::Equals(this->f2, other_struct.f2))
    return false;
  if (!mojo::Equals(this->f3, other_struct.f3))
    return false;
  if (!mojo::Equals(this->f4, other_struct.f4))
    return false;
  if (!mojo::Equals(this->f5, other_struct.f5))
    return false;
  if (!mojo::Equals(this->f6, other_struct.f6))
    return false;
  return true;
}
template <typename StructPtrType>
MultiVersionStructPtr MultiVersionStruct::Clone() const {
  return New(
      mojo::Clone(f_int32),
      mojo::Clone(f_rect),
      mojo::Clone(f_string),
      mojo::Clone(f_array),
      mojo::Clone(f_message_pipe),
      mojo::Clone(f_bool),
      mojo::Clone(f_int16)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MultiVersionStruct>::value>::type*>
bool MultiVersionStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f_int32, other_struct.f_int32))
    return false;
  if (!mojo::Equals(this->f_rect, other_struct.f_rect))
    return false;
  if (!mojo::Equals(this->f_string, other_struct.f_string))
    return false;
  if (!mojo::Equals(this->f_array, other_struct.f_array))
    return false;
  if (!mojo::Equals(this->f_message_pipe, other_struct.f_message_pipe))
    return false;
  if (!mojo::Equals(this->f_bool, other_struct.f_bool))
    return false;
  if (!mojo::Equals(this->f_int16, other_struct.f_int16))
    return false;
  return true;
}
template <typename StructPtrType>
MultiVersionStructV0Ptr MultiVersionStructV0::Clone() const {
  return New(
      mojo::Clone(f_int32)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MultiVersionStructV0>::value>::type*>
bool MultiVersionStructV0::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f_int32, other_struct.f_int32))
    return false;
  return true;
}
template <typename StructPtrType>
MultiVersionStructV1Ptr MultiVersionStructV1::Clone() const {
  return New(
      mojo::Clone(f_int32),
      mojo::Clone(f_rect)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MultiVersionStructV1>::value>::type*>
bool MultiVersionStructV1::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f_int32, other_struct.f_int32))
    return false;
  if (!mojo::Equals(this->f_rect, other_struct.f_rect))
    return false;
  return true;
}
template <typename StructPtrType>
MultiVersionStructV3Ptr MultiVersionStructV3::Clone() const {
  return New(
      mojo::Clone(f_int32),
      mojo::Clone(f_rect),
      mojo::Clone(f_string)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MultiVersionStructV3>::value>::type*>
bool MultiVersionStructV3::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f_int32, other_struct.f_int32))
    return false;
  if (!mojo::Equals(this->f_rect, other_struct.f_rect))
    return false;
  if (!mojo::Equals(this->f_string, other_struct.f_string))
    return false;
  return true;
}
template <typename StructPtrType>
MultiVersionStructV5Ptr MultiVersionStructV5::Clone() const {
  return New(
      mojo::Clone(f_int32),
      mojo::Clone(f_rect),
      mojo::Clone(f_string),
      mojo::Clone(f_array)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MultiVersionStructV5>::value>::type*>
bool MultiVersionStructV5::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f_int32, other_struct.f_int32))
    return false;
  if (!mojo::Equals(this->f_rect, other_struct.f_rect))
    return false;
  if (!mojo::Equals(this->f_string, other_struct.f_string))
    return false;
  if (!mojo::Equals(this->f_array, other_struct.f_array))
    return false;
  return true;
}
template <typename StructPtrType>
MultiVersionStructV7Ptr MultiVersionStructV7::Clone() const {
  return New(
      mojo::Clone(f_int32),
      mojo::Clone(f_rect),
      mojo::Clone(f_string),
      mojo::Clone(f_array),
      mojo::Clone(f_message_pipe),
      mojo::Clone(f_bool)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MultiVersionStructV7>::value>::type*>
bool MultiVersionStructV7::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f_int32, other_struct.f_int32))
    return false;
  if (!mojo::Equals(this->f_rect, other_struct.f_rect))
    return false;
  if (!mojo::Equals(this->f_string, other_struct.f_string))
    return false;
  if (!mojo::Equals(this->f_array, other_struct.f_array))
    return false;
  if (!mojo::Equals(this->f_message_pipe, other_struct.f_message_pipe))
    return false;
  if (!mojo::Equals(this->f_bool, other_struct.f_bool))
    return false;
  return true;
}
template <typename StructPtrType>
ReorderedStructPtr ReorderedStruct::Clone() const {
  return New(
      mojo::Clone(a),
      mojo::Clone(b),
      mojo::Clone(c)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ReorderedStruct>::value>::type*>
bool ReorderedStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->a, other_struct.a))
    return false;
  if (!mojo::Equals(this->b, other_struct.b))
    return false;
  if (!mojo::Equals(this->c, other_struct.c))
    return false;
  return true;
}
template <typename StructPtrType>
ContainsInterfacePtr ContainsInterface::Clone() const {
  return New(
      mojo::Clone(some_interface)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ContainsInterface>::value>::type*>
bool ContainsInterface::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->some_interface, other_struct.some_interface))
    return false;
  return true;
}
template <typename StructPtrType>
ContainsOtherPtr ContainsOther::Clone() const {
  return New(
      mojo::Clone(other)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ContainsOther>::value>::type*>
bool ContainsOther::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->other, other_struct.other))
    return false;
  return true;
}
template <typename StructPtrType>
ContainsInterfaceRequestPtr ContainsInterfaceRequest::Clone() const {
  return New(
      mojo::Clone(request)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ContainsInterfaceRequest>::value>::type*>
bool ContainsInterfaceRequest::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->request, other_struct.request))
    return false;
  return true;
}
template <typename StructPtrType>
SingleBoolStructPtr SingleBoolStruct::Clone() const {
  return New(
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SingleBoolStruct>::value>::type*>
bool SingleBoolStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
ContainsHashablePtr ContainsHashable::Clone() const {
  return New(
      mojo::Clone(rect)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ContainsHashable>::value>::type*>
bool ContainsHashable::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->rect, other_struct.rect))
    return false;
  return true;
}
template <typename StructPtrType>
SimpleNestedStructPtr SimpleNestedStruct::Clone() const {
  return New(
      mojo::Clone(nested)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SimpleNestedStruct>::value>::type*>
bool SimpleNestedStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->nested, other_struct.nested))
    return false;
  return true;
}


}  // namespace blink
}  // namespace test
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::test::blink::NamedRegion::DataView,
                                         ::mojo::test::blink::NamedRegionPtr> {
  static bool IsNull(const ::mojo::test::blink::NamedRegionPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::NamedRegionPtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::NamedRegion::name)& name(
      const ::mojo::test::blink::NamedRegionPtr& input) {
    return input->name;
  }

  static const decltype(::mojo::test::blink::NamedRegion::rects)& rects(
      const ::mojo::test::blink::NamedRegionPtr& input) {
    return input->rects;
  }

  static bool Read(::mojo::test::blink::NamedRegion::DataView input, ::mojo::test::blink::NamedRegionPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::RectPair::DataView,
                                         ::mojo::test::blink::RectPairPtr> {
  static bool IsNull(const ::mojo::test::blink::RectPairPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::RectPairPtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::RectPair::first)& first(
      const ::mojo::test::blink::RectPairPtr& input) {
    return input->first;
  }

  static const decltype(::mojo::test::blink::RectPair::second)& second(
      const ::mojo::test::blink::RectPairPtr& input) {
    return input->second;
  }

  static bool Read(::mojo::test::blink::RectPair::DataView input, ::mojo::test::blink::RectPairPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::EmptyStruct::DataView,
                                         ::mojo::test::blink::EmptyStructPtr> {
  static bool IsNull(const ::mojo::test::blink::EmptyStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::EmptyStructPtr* output) { output->reset(); }

  static bool Read(::mojo::test::blink::EmptyStruct::DataView input, ::mojo::test::blink::EmptyStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::NoDefaultFieldValues::DataView,
                                         ::mojo::test::blink::NoDefaultFieldValuesPtr> {
  static bool IsNull(const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::NoDefaultFieldValuesPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::NoDefaultFieldValues::f0) f0(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f0;
  }

  static decltype(::mojo::test::blink::NoDefaultFieldValues::f1) f1(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f1;
  }

  static decltype(::mojo::test::blink::NoDefaultFieldValues::f2) f2(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f2;
  }

  static decltype(::mojo::test::blink::NoDefaultFieldValues::f3) f3(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f3;
  }

  static decltype(::mojo::test::blink::NoDefaultFieldValues::f4) f4(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f4;
  }

  static decltype(::mojo::test::blink::NoDefaultFieldValues::f5) f5(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f5;
  }

  static decltype(::mojo::test::blink::NoDefaultFieldValues::f6) f6(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f6;
  }

  static decltype(::mojo::test::blink::NoDefaultFieldValues::f7) f7(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f7;
  }

  static decltype(::mojo::test::blink::NoDefaultFieldValues::f8) f8(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f8;
  }

  static decltype(::mojo::test::blink::NoDefaultFieldValues::f9) f9(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f9;
  }

  static decltype(::mojo::test::blink::NoDefaultFieldValues::f10) f10(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f10;
  }

  static const decltype(::mojo::test::blink::NoDefaultFieldValues::f11)& f11(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f11;
  }

  static const decltype(::mojo::test::blink::NoDefaultFieldValues::f12)& f12(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f12;
  }

  static  decltype(::mojo::test::blink::NoDefaultFieldValues::f13)& f13(
       ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f13;
  }

  static  decltype(::mojo::test::blink::NoDefaultFieldValues::f14)& f14(
       ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f14;
  }

  static  decltype(::mojo::test::blink::NoDefaultFieldValues::f15)& f15(
       ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f15;
  }

  static  decltype(::mojo::test::blink::NoDefaultFieldValues::f16)& f16(
       ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f16;
  }

  static  decltype(::mojo::test::blink::NoDefaultFieldValues::f17)& f17(
       ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f17;
  }

  static  decltype(::mojo::test::blink::NoDefaultFieldValues::f18)& f18(
       ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f18;
  }

  static  decltype(::mojo::test::blink::NoDefaultFieldValues::f19)& f19(
       ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f19;
  }

  static  decltype(::mojo::test::blink::NoDefaultFieldValues::f20)& f20(
       ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f20;
  }

  static  decltype(::mojo::test::blink::NoDefaultFieldValues::f21)& f21(
       ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f21;
  }

  static  decltype(::mojo::test::blink::NoDefaultFieldValues::f22)& f22(
       ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f22;
  }

  static const decltype(::mojo::test::blink::NoDefaultFieldValues::f23)& f23(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f23;
  }

  static const decltype(::mojo::test::blink::NoDefaultFieldValues::f24)& f24(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f24;
  }

  static const decltype(::mojo::test::blink::NoDefaultFieldValues::f25)& f25(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f25;
  }

  static const decltype(::mojo::test::blink::NoDefaultFieldValues::f26)& f26(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f26;
  }

  static const decltype(::mojo::test::blink::NoDefaultFieldValues::f27)& f27(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f27;
  }

  static const decltype(::mojo::test::blink::NoDefaultFieldValues::f28)& f28(
      const ::mojo::test::blink::NoDefaultFieldValuesPtr& input) {
    return input->f28;
  }

  static bool Read(::mojo::test::blink::NoDefaultFieldValues::DataView input, ::mojo::test::blink::NoDefaultFieldValuesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::DefaultFieldValues::DataView,
                                         ::mojo::test::blink::DefaultFieldValuesPtr> {
  static bool IsNull(const ::mojo::test::blink::DefaultFieldValuesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::DefaultFieldValuesPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::DefaultFieldValues::f0) f0(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f0;
  }

  static decltype(::mojo::test::blink::DefaultFieldValues::f1) f1(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f1;
  }

  static decltype(::mojo::test::blink::DefaultFieldValues::f2) f2(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f2;
  }

  static decltype(::mojo::test::blink::DefaultFieldValues::f3) f3(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f3;
  }

  static decltype(::mojo::test::blink::DefaultFieldValues::f4) f4(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f4;
  }

  static decltype(::mojo::test::blink::DefaultFieldValues::f5) f5(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f5;
  }

  static decltype(::mojo::test::blink::DefaultFieldValues::f6) f6(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f6;
  }

  static decltype(::mojo::test::blink::DefaultFieldValues::f7) f7(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f7;
  }

  static decltype(::mojo::test::blink::DefaultFieldValues::f8) f8(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f8;
  }

  static decltype(::mojo::test::blink::DefaultFieldValues::f9) f9(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f9;
  }

  static decltype(::mojo::test::blink::DefaultFieldValues::f10) f10(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f10;
  }

  static decltype(::mojo::test::blink::DefaultFieldValues::f11) f11(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f11;
  }

  static decltype(::mojo::test::blink::DefaultFieldValues::f12) f12(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f12;
  }

  static const decltype(::mojo::test::blink::DefaultFieldValues::f13)& f13(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f13;
  }

  static const decltype(::mojo::test::blink::DefaultFieldValues::f14)& f14(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f14;
  }

  static const decltype(::mojo::test::blink::DefaultFieldValues::f15)& f15(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f15;
  }

  static const decltype(::mojo::test::blink::DefaultFieldValues::f16)& f16(
      const ::mojo::test::blink::DefaultFieldValuesPtr& input) {
    return input->f16;
  }

  static bool Read(::mojo::test::blink::DefaultFieldValues::DataView input, ::mojo::test::blink::DefaultFieldValuesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::ScopedConstants::DataView,
                                         ::mojo::test::blink::ScopedConstantsPtr> {
  static bool IsNull(const ::mojo::test::blink::ScopedConstantsPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::ScopedConstantsPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::ScopedConstants::f0) f0(
      const ::mojo::test::blink::ScopedConstantsPtr& input) {
    return input->f0;
  }

  static decltype(::mojo::test::blink::ScopedConstants::f1) f1(
      const ::mojo::test::blink::ScopedConstantsPtr& input) {
    return input->f1;
  }

  static decltype(::mojo::test::blink::ScopedConstants::f2) f2(
      const ::mojo::test::blink::ScopedConstantsPtr& input) {
    return input->f2;
  }

  static decltype(::mojo::test::blink::ScopedConstants::f3) f3(
      const ::mojo::test::blink::ScopedConstantsPtr& input) {
    return input->f3;
  }

  static decltype(::mojo::test::blink::ScopedConstants::f4) f4(
      const ::mojo::test::blink::ScopedConstantsPtr& input) {
    return input->f4;
  }

  static decltype(::mojo::test::blink::ScopedConstants::f5) f5(
      const ::mojo::test::blink::ScopedConstantsPtr& input) {
    return input->f5;
  }

  static decltype(::mojo::test::blink::ScopedConstants::f6) f6(
      const ::mojo::test::blink::ScopedConstantsPtr& input) {
    return input->f6;
  }

  static bool Read(::mojo::test::blink::ScopedConstants::DataView input, ::mojo::test::blink::ScopedConstantsPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::MapKeyTypes::DataView,
                                         ::mojo::test::blink::MapKeyTypesPtr> {
  static bool IsNull(const ::mojo::test::blink::MapKeyTypesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::MapKeyTypesPtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::MapKeyTypes::f1)& f1(
      const ::mojo::test::blink::MapKeyTypesPtr& input) {
    return input->f1;
  }

  static const decltype(::mojo::test::blink::MapKeyTypes::f2)& f2(
      const ::mojo::test::blink::MapKeyTypesPtr& input) {
    return input->f2;
  }

  static const decltype(::mojo::test::blink::MapKeyTypes::f3)& f3(
      const ::mojo::test::blink::MapKeyTypesPtr& input) {
    return input->f3;
  }

  static const decltype(::mojo::test::blink::MapKeyTypes::f4)& f4(
      const ::mojo::test::blink::MapKeyTypesPtr& input) {
    return input->f4;
  }

  static const decltype(::mojo::test::blink::MapKeyTypes::f5)& f5(
      const ::mojo::test::blink::MapKeyTypesPtr& input) {
    return input->f5;
  }

  static const decltype(::mojo::test::blink::MapKeyTypes::f6)& f6(
      const ::mojo::test::blink::MapKeyTypesPtr& input) {
    return input->f6;
  }

  static const decltype(::mojo::test::blink::MapKeyTypes::f7)& f7(
      const ::mojo::test::blink::MapKeyTypesPtr& input) {
    return input->f7;
  }

  static const decltype(::mojo::test::blink::MapKeyTypes::f8)& f8(
      const ::mojo::test::blink::MapKeyTypesPtr& input) {
    return input->f8;
  }

  static const decltype(::mojo::test::blink::MapKeyTypes::f9)& f9(
      const ::mojo::test::blink::MapKeyTypesPtr& input) {
    return input->f9;
  }

  static const decltype(::mojo::test::blink::MapKeyTypes::f10)& f10(
      const ::mojo::test::blink::MapKeyTypesPtr& input) {
    return input->f10;
  }

  static const decltype(::mojo::test::blink::MapKeyTypes::f11)& f11(
      const ::mojo::test::blink::MapKeyTypesPtr& input) {
    return input->f11;
  }

  static bool Read(::mojo::test::blink::MapKeyTypes::DataView input, ::mojo::test::blink::MapKeyTypesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::MapValueTypes::DataView,
                                         ::mojo::test::blink::MapValueTypesPtr> {
  static bool IsNull(const ::mojo::test::blink::MapValueTypesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::MapValueTypesPtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::MapValueTypes::f0)& f0(
      const ::mojo::test::blink::MapValueTypesPtr& input) {
    return input->f0;
  }

  static const decltype(::mojo::test::blink::MapValueTypes::f1)& f1(
      const ::mojo::test::blink::MapValueTypesPtr& input) {
    return input->f1;
  }

  static const decltype(::mojo::test::blink::MapValueTypes::f2)& f2(
      const ::mojo::test::blink::MapValueTypesPtr& input) {
    return input->f2;
  }

  static const decltype(::mojo::test::blink::MapValueTypes::f3)& f3(
      const ::mojo::test::blink::MapValueTypesPtr& input) {
    return input->f3;
  }

  static const decltype(::mojo::test::blink::MapValueTypes::f4)& f4(
      const ::mojo::test::blink::MapValueTypesPtr& input) {
    return input->f4;
  }

  static const decltype(::mojo::test::blink::MapValueTypes::f5)& f5(
      const ::mojo::test::blink::MapValueTypesPtr& input) {
    return input->f5;
  }

  static const decltype(::mojo::test::blink::MapValueTypes::f6)& f6(
      const ::mojo::test::blink::MapValueTypesPtr& input) {
    return input->f6;
  }

  static const decltype(::mojo::test::blink::MapValueTypes::f7)& f7(
      const ::mojo::test::blink::MapValueTypesPtr& input) {
    return input->f7;
  }

  static const decltype(::mojo::test::blink::MapValueTypes::f8)& f8(
      const ::mojo::test::blink::MapValueTypesPtr& input) {
    return input->f8;
  }

  static  decltype(::mojo::test::blink::MapValueTypes::f9)& f9(
       ::mojo::test::blink::MapValueTypesPtr& input) {
    return input->f9;
  }

  static  decltype(::mojo::test::blink::MapValueTypes::f10)& f10(
       ::mojo::test::blink::MapValueTypesPtr& input) {
    return input->f10;
  }

  static  decltype(::mojo::test::blink::MapValueTypes::f11)& f11(
       ::mojo::test::blink::MapValueTypesPtr& input) {
    return input->f11;
  }

  static bool Read(::mojo::test::blink::MapValueTypes::DataView input, ::mojo::test::blink::MapValueTypesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::ArrayValueTypes::DataView,
                                         ::mojo::test::blink::ArrayValueTypesPtr> {
  static bool IsNull(const ::mojo::test::blink::ArrayValueTypesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::ArrayValueTypesPtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::ArrayValueTypes::f0)& f0(
      const ::mojo::test::blink::ArrayValueTypesPtr& input) {
    return input->f0;
  }

  static const decltype(::mojo::test::blink::ArrayValueTypes::f1)& f1(
      const ::mojo::test::blink::ArrayValueTypesPtr& input) {
    return input->f1;
  }

  static const decltype(::mojo::test::blink::ArrayValueTypes::f2)& f2(
      const ::mojo::test::blink::ArrayValueTypesPtr& input) {
    return input->f2;
  }

  static const decltype(::mojo::test::blink::ArrayValueTypes::f3)& f3(
      const ::mojo::test::blink::ArrayValueTypesPtr& input) {
    return input->f3;
  }

  static const decltype(::mojo::test::blink::ArrayValueTypes::f4)& f4(
      const ::mojo::test::blink::ArrayValueTypesPtr& input) {
    return input->f4;
  }

  static const decltype(::mojo::test::blink::ArrayValueTypes::f5)& f5(
      const ::mojo::test::blink::ArrayValueTypesPtr& input) {
    return input->f5;
  }

  static  decltype(::mojo::test::blink::ArrayValueTypes::f6)& f6(
       ::mojo::test::blink::ArrayValueTypesPtr& input) {
    return input->f6;
  }

  static  decltype(::mojo::test::blink::ArrayValueTypes::f7)& f7(
       ::mojo::test::blink::ArrayValueTypesPtr& input) {
    return input->f7;
  }

  static bool Read(::mojo::test::blink::ArrayValueTypes::DataView input, ::mojo::test::blink::ArrayValueTypesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::FloatNumberValues::DataView,
                                         ::mojo::test::blink::FloatNumberValuesPtr> {
  static bool IsNull(const ::mojo::test::blink::FloatNumberValuesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::FloatNumberValuesPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::FloatNumberValues::f0) f0(
      const ::mojo::test::blink::FloatNumberValuesPtr& input) {
    return input->f0;
  }

  static decltype(::mojo::test::blink::FloatNumberValues::f1) f1(
      const ::mojo::test::blink::FloatNumberValuesPtr& input) {
    return input->f1;
  }

  static decltype(::mojo::test::blink::FloatNumberValues::f2) f2(
      const ::mojo::test::blink::FloatNumberValuesPtr& input) {
    return input->f2;
  }

  static decltype(::mojo::test::blink::FloatNumberValues::f3) f3(
      const ::mojo::test::blink::FloatNumberValuesPtr& input) {
    return input->f3;
  }

  static decltype(::mojo::test::blink::FloatNumberValues::f4) f4(
      const ::mojo::test::blink::FloatNumberValuesPtr& input) {
    return input->f4;
  }

  static decltype(::mojo::test::blink::FloatNumberValues::f5) f5(
      const ::mojo::test::blink::FloatNumberValuesPtr& input) {
    return input->f5;
  }

  static decltype(::mojo::test::blink::FloatNumberValues::f6) f6(
      const ::mojo::test::blink::FloatNumberValuesPtr& input) {
    return input->f6;
  }

  static decltype(::mojo::test::blink::FloatNumberValues::f7) f7(
      const ::mojo::test::blink::FloatNumberValuesPtr& input) {
    return input->f7;
  }

  static decltype(::mojo::test::blink::FloatNumberValues::f8) f8(
      const ::mojo::test::blink::FloatNumberValuesPtr& input) {
    return input->f8;
  }

  static decltype(::mojo::test::blink::FloatNumberValues::f9) f9(
      const ::mojo::test::blink::FloatNumberValuesPtr& input) {
    return input->f9;
  }

  static bool Read(::mojo::test::blink::FloatNumberValues::DataView input, ::mojo::test::blink::FloatNumberValuesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::IntegerNumberValues::DataView,
                                         ::mojo::test::blink::IntegerNumberValuesPtr> {
  static bool IsNull(const ::mojo::test::blink::IntegerNumberValuesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::IntegerNumberValuesPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::IntegerNumberValues::f0) f0(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f0;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f1) f1(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f1;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f2) f2(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f2;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f3) f3(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f3;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f4) f4(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f4;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f5) f5(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f5;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f6) f6(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f6;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f7) f7(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f7;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f8) f8(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f8;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f9) f9(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f9;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f10) f10(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f10;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f11) f11(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f11;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f12) f12(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f12;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f13) f13(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f13;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f14) f14(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f14;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f15) f15(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f15;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f16) f16(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f16;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f17) f17(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f17;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f18) f18(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f18;
  }

  static decltype(::mojo::test::blink::IntegerNumberValues::f19) f19(
      const ::mojo::test::blink::IntegerNumberValuesPtr& input) {
    return input->f19;
  }

  static bool Read(::mojo::test::blink::IntegerNumberValues::DataView input, ::mojo::test::blink::IntegerNumberValuesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::UnsignedNumberValues::DataView,
                                         ::mojo::test::blink::UnsignedNumberValuesPtr> {
  static bool IsNull(const ::mojo::test::blink::UnsignedNumberValuesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::UnsignedNumberValuesPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::UnsignedNumberValues::f0) f0(
      const ::mojo::test::blink::UnsignedNumberValuesPtr& input) {
    return input->f0;
  }

  static decltype(::mojo::test::blink::UnsignedNumberValues::f1) f1(
      const ::mojo::test::blink::UnsignedNumberValuesPtr& input) {
    return input->f1;
  }

  static decltype(::mojo::test::blink::UnsignedNumberValues::f2) f2(
      const ::mojo::test::blink::UnsignedNumberValuesPtr& input) {
    return input->f2;
  }

  static decltype(::mojo::test::blink::UnsignedNumberValues::f3) f3(
      const ::mojo::test::blink::UnsignedNumberValuesPtr& input) {
    return input->f3;
  }

  static decltype(::mojo::test::blink::UnsignedNumberValues::f4) f4(
      const ::mojo::test::blink::UnsignedNumberValuesPtr& input) {
    return input->f4;
  }

  static decltype(::mojo::test::blink::UnsignedNumberValues::f5) f5(
      const ::mojo::test::blink::UnsignedNumberValuesPtr& input) {
    return input->f5;
  }

  static decltype(::mojo::test::blink::UnsignedNumberValues::f6) f6(
      const ::mojo::test::blink::UnsignedNumberValuesPtr& input) {
    return input->f6;
  }

  static decltype(::mojo::test::blink::UnsignedNumberValues::f7) f7(
      const ::mojo::test::blink::UnsignedNumberValuesPtr& input) {
    return input->f7;
  }

  static decltype(::mojo::test::blink::UnsignedNumberValues::f8) f8(
      const ::mojo::test::blink::UnsignedNumberValuesPtr& input) {
    return input->f8;
  }

  static decltype(::mojo::test::blink::UnsignedNumberValues::f9) f9(
      const ::mojo::test::blink::UnsignedNumberValuesPtr& input) {
    return input->f9;
  }

  static decltype(::mojo::test::blink::UnsignedNumberValues::f10) f10(
      const ::mojo::test::blink::UnsignedNumberValuesPtr& input) {
    return input->f10;
  }

  static decltype(::mojo::test::blink::UnsignedNumberValues::f11) f11(
      const ::mojo::test::blink::UnsignedNumberValuesPtr& input) {
    return input->f11;
  }

  static bool Read(::mojo::test::blink::UnsignedNumberValues::DataView input, ::mojo::test::blink::UnsignedNumberValuesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::BitArrayValues::DataView,
                                         ::mojo::test::blink::BitArrayValuesPtr> {
  static bool IsNull(const ::mojo::test::blink::BitArrayValuesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::BitArrayValuesPtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::BitArrayValues::f0)& f0(
      const ::mojo::test::blink::BitArrayValuesPtr& input) {
    return input->f0;
  }

  static const decltype(::mojo::test::blink::BitArrayValues::f1)& f1(
      const ::mojo::test::blink::BitArrayValuesPtr& input) {
    return input->f1;
  }

  static const decltype(::mojo::test::blink::BitArrayValues::f2)& f2(
      const ::mojo::test::blink::BitArrayValuesPtr& input) {
    return input->f2;
  }

  static const decltype(::mojo::test::blink::BitArrayValues::f3)& f3(
      const ::mojo::test::blink::BitArrayValuesPtr& input) {
    return input->f3;
  }

  static const decltype(::mojo::test::blink::BitArrayValues::f4)& f4(
      const ::mojo::test::blink::BitArrayValuesPtr& input) {
    return input->f4;
  }

  static const decltype(::mojo::test::blink::BitArrayValues::f5)& f5(
      const ::mojo::test::blink::BitArrayValuesPtr& input) {
    return input->f5;
  }

  static const decltype(::mojo::test::blink::BitArrayValues::f6)& f6(
      const ::mojo::test::blink::BitArrayValuesPtr& input) {
    return input->f6;
  }

  static bool Read(::mojo::test::blink::BitArrayValues::DataView input, ::mojo::test::blink::BitArrayValuesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::MultiVersionStruct::DataView,
                                         ::mojo::test::blink::MultiVersionStructPtr> {
  static bool IsNull(const ::mojo::test::blink::MultiVersionStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::MultiVersionStructPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::MultiVersionStruct::f_int32) f_int32(
      const ::mojo::test::blink::MultiVersionStructPtr& input) {
    return input->f_int32;
  }

  static const decltype(::mojo::test::blink::MultiVersionStruct::f_rect)& f_rect(
      const ::mojo::test::blink::MultiVersionStructPtr& input) {
    return input->f_rect;
  }

  static const decltype(::mojo::test::blink::MultiVersionStruct::f_string)& f_string(
      const ::mojo::test::blink::MultiVersionStructPtr& input) {
    return input->f_string;
  }

  static const decltype(::mojo::test::blink::MultiVersionStruct::f_array)& f_array(
      const ::mojo::test::blink::MultiVersionStructPtr& input) {
    return input->f_array;
  }

  static  decltype(::mojo::test::blink::MultiVersionStruct::f_message_pipe)& f_message_pipe(
       ::mojo::test::blink::MultiVersionStructPtr& input) {
    return input->f_message_pipe;
  }

  static decltype(::mojo::test::blink::MultiVersionStruct::f_bool) f_bool(
      const ::mojo::test::blink::MultiVersionStructPtr& input) {
    return input->f_bool;
  }

  static decltype(::mojo::test::blink::MultiVersionStruct::f_int16) f_int16(
      const ::mojo::test::blink::MultiVersionStructPtr& input) {
    return input->f_int16;
  }

  static bool Read(::mojo::test::blink::MultiVersionStruct::DataView input, ::mojo::test::blink::MultiVersionStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::MultiVersionStructV0::DataView,
                                         ::mojo::test::blink::MultiVersionStructV0Ptr> {
  static bool IsNull(const ::mojo::test::blink::MultiVersionStructV0Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::MultiVersionStructV0Ptr* output) { output->reset(); }

  static decltype(::mojo::test::blink::MultiVersionStructV0::f_int32) f_int32(
      const ::mojo::test::blink::MultiVersionStructV0Ptr& input) {
    return input->f_int32;
  }

  static bool Read(::mojo::test::blink::MultiVersionStructV0::DataView input, ::mojo::test::blink::MultiVersionStructV0Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::MultiVersionStructV1::DataView,
                                         ::mojo::test::blink::MultiVersionStructV1Ptr> {
  static bool IsNull(const ::mojo::test::blink::MultiVersionStructV1Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::MultiVersionStructV1Ptr* output) { output->reset(); }

  static decltype(::mojo::test::blink::MultiVersionStructV1::f_int32) f_int32(
      const ::mojo::test::blink::MultiVersionStructV1Ptr& input) {
    return input->f_int32;
  }

  static const decltype(::mojo::test::blink::MultiVersionStructV1::f_rect)& f_rect(
      const ::mojo::test::blink::MultiVersionStructV1Ptr& input) {
    return input->f_rect;
  }

  static bool Read(::mojo::test::blink::MultiVersionStructV1::DataView input, ::mojo::test::blink::MultiVersionStructV1Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::MultiVersionStructV3::DataView,
                                         ::mojo::test::blink::MultiVersionStructV3Ptr> {
  static bool IsNull(const ::mojo::test::blink::MultiVersionStructV3Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::MultiVersionStructV3Ptr* output) { output->reset(); }

  static decltype(::mojo::test::blink::MultiVersionStructV3::f_int32) f_int32(
      const ::mojo::test::blink::MultiVersionStructV3Ptr& input) {
    return input->f_int32;
  }

  static const decltype(::mojo::test::blink::MultiVersionStructV3::f_rect)& f_rect(
      const ::mojo::test::blink::MultiVersionStructV3Ptr& input) {
    return input->f_rect;
  }

  static const decltype(::mojo::test::blink::MultiVersionStructV3::f_string)& f_string(
      const ::mojo::test::blink::MultiVersionStructV3Ptr& input) {
    return input->f_string;
  }

  static bool Read(::mojo::test::blink::MultiVersionStructV3::DataView input, ::mojo::test::blink::MultiVersionStructV3Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::MultiVersionStructV5::DataView,
                                         ::mojo::test::blink::MultiVersionStructV5Ptr> {
  static bool IsNull(const ::mojo::test::blink::MultiVersionStructV5Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::MultiVersionStructV5Ptr* output) { output->reset(); }

  static decltype(::mojo::test::blink::MultiVersionStructV5::f_int32) f_int32(
      const ::mojo::test::blink::MultiVersionStructV5Ptr& input) {
    return input->f_int32;
  }

  static const decltype(::mojo::test::blink::MultiVersionStructV5::f_rect)& f_rect(
      const ::mojo::test::blink::MultiVersionStructV5Ptr& input) {
    return input->f_rect;
  }

  static const decltype(::mojo::test::blink::MultiVersionStructV5::f_string)& f_string(
      const ::mojo::test::blink::MultiVersionStructV5Ptr& input) {
    return input->f_string;
  }

  static const decltype(::mojo::test::blink::MultiVersionStructV5::f_array)& f_array(
      const ::mojo::test::blink::MultiVersionStructV5Ptr& input) {
    return input->f_array;
  }

  static bool Read(::mojo::test::blink::MultiVersionStructV5::DataView input, ::mojo::test::blink::MultiVersionStructV5Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::MultiVersionStructV7::DataView,
                                         ::mojo::test::blink::MultiVersionStructV7Ptr> {
  static bool IsNull(const ::mojo::test::blink::MultiVersionStructV7Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::MultiVersionStructV7Ptr* output) { output->reset(); }

  static decltype(::mojo::test::blink::MultiVersionStructV7::f_int32) f_int32(
      const ::mojo::test::blink::MultiVersionStructV7Ptr& input) {
    return input->f_int32;
  }

  static const decltype(::mojo::test::blink::MultiVersionStructV7::f_rect)& f_rect(
      const ::mojo::test::blink::MultiVersionStructV7Ptr& input) {
    return input->f_rect;
  }

  static const decltype(::mojo::test::blink::MultiVersionStructV7::f_string)& f_string(
      const ::mojo::test::blink::MultiVersionStructV7Ptr& input) {
    return input->f_string;
  }

  static const decltype(::mojo::test::blink::MultiVersionStructV7::f_array)& f_array(
      const ::mojo::test::blink::MultiVersionStructV7Ptr& input) {
    return input->f_array;
  }

  static  decltype(::mojo::test::blink::MultiVersionStructV7::f_message_pipe)& f_message_pipe(
       ::mojo::test::blink::MultiVersionStructV7Ptr& input) {
    return input->f_message_pipe;
  }

  static decltype(::mojo::test::blink::MultiVersionStructV7::f_bool) f_bool(
      const ::mojo::test::blink::MultiVersionStructV7Ptr& input) {
    return input->f_bool;
  }

  static bool Read(::mojo::test::blink::MultiVersionStructV7::DataView input, ::mojo::test::blink::MultiVersionStructV7Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::ReorderedStruct::DataView,
                                         ::mojo::test::blink::ReorderedStructPtr> {
  static bool IsNull(const ::mojo::test::blink::ReorderedStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::ReorderedStructPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::ReorderedStruct::a) a(
      const ::mojo::test::blink::ReorderedStructPtr& input) {
    return input->a;
  }

  static decltype(::mojo::test::blink::ReorderedStruct::b) b(
      const ::mojo::test::blink::ReorderedStructPtr& input) {
    return input->b;
  }

  static decltype(::mojo::test::blink::ReorderedStruct::c) c(
      const ::mojo::test::blink::ReorderedStructPtr& input) {
    return input->c;
  }

  static bool Read(::mojo::test::blink::ReorderedStruct::DataView input, ::mojo::test::blink::ReorderedStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::ContainsInterface::DataView,
                                         ::mojo::test::blink::ContainsInterfacePtr> {
  static bool IsNull(const ::mojo::test::blink::ContainsInterfacePtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::ContainsInterfacePtr* output) { output->reset(); }

  static  decltype(::mojo::test::blink::ContainsInterface::some_interface)& some_interface(
       ::mojo::test::blink::ContainsInterfacePtr& input) {
    return input->some_interface;
  }

  static bool Read(::mojo::test::blink::ContainsInterface::DataView input, ::mojo::test::blink::ContainsInterfacePtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::ContainsOther::DataView,
                                         ::mojo::test::blink::ContainsOtherPtr> {
  static bool IsNull(const ::mojo::test::blink::ContainsOtherPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::ContainsOtherPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::ContainsOther::other) other(
      const ::mojo::test::blink::ContainsOtherPtr& input) {
    return input->other;
  }

  static bool Read(::mojo::test::blink::ContainsOther::DataView input, ::mojo::test::blink::ContainsOtherPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::ContainsInterfaceRequest::DataView,
                                         ::mojo::test::blink::ContainsInterfaceRequestPtr> {
  static bool IsNull(const ::mojo::test::blink::ContainsInterfaceRequestPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::ContainsInterfaceRequestPtr* output) { output->reset(); }

  static  decltype(::mojo::test::blink::ContainsInterfaceRequest::request)& request(
       ::mojo::test::blink::ContainsInterfaceRequestPtr& input) {
    return input->request;
  }

  static bool Read(::mojo::test::blink::ContainsInterfaceRequest::DataView input, ::mojo::test::blink::ContainsInterfaceRequestPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::SingleBoolStruct::DataView,
                                         ::mojo::test::blink::SingleBoolStructPtr> {
  static bool IsNull(const ::mojo::test::blink::SingleBoolStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::SingleBoolStructPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::SingleBoolStruct::value) value(
      const ::mojo::test::blink::SingleBoolStructPtr& input) {
    return input->value;
  }

  static bool Read(::mojo::test::blink::SingleBoolStruct::DataView input, ::mojo::test::blink::SingleBoolStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::ContainsHashable::DataView,
                                         ::mojo::test::blink::ContainsHashablePtr> {
  static bool IsNull(const ::mojo::test::blink::ContainsHashablePtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::ContainsHashablePtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::ContainsHashable::rect)& rect(
      const ::mojo::test::blink::ContainsHashablePtr& input) {
    return input->rect;
  }

  static bool Read(::mojo::test::blink::ContainsHashable::DataView input, ::mojo::test::blink::ContainsHashablePtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::SimpleNestedStruct::DataView,
                                         ::mojo::test::blink::SimpleNestedStructPtr> {
  static bool IsNull(const ::mojo::test::blink::SimpleNestedStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::SimpleNestedStructPtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::SimpleNestedStruct::nested)& nested(
      const ::mojo::test::blink::SimpleNestedStructPtr& input) {
    return input->nested;
  }

  static bool Read(::mojo::test::blink::SimpleNestedStruct::DataView input, ::mojo::test::blink::SimpleNestedStructPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_BLINK_H_