// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/test_structs.mojom-forward.h"
#include "mojo/public/interfaces/bindings/tests/rect.mojom.h"
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EmptyStruct::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MultiVersionStructV0::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ReorderedStruct::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ContainsOther::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SingleBoolStruct::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
      const base::Optional<std::string>& name,
      base::Optional<std::vector<::mojo::test::RectPtr>> rects);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NamedRegion::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  base::Optional<std::string> name;
  
  base::Optional<std::vector<::mojo::test::RectPtr>> rects;

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
      ::mojo::test::RectPtr first,
      ::mojo::test::RectPtr second);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RectPair::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  ::mojo::test::RectPtr first;
  
  ::mojo::test::RectPtr second;

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
      const std::string& f11,
      const base::Optional<std::string>& f12,
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
      const std::vector<std::string>& f23,
      const std::vector<base::Optional<std::string>>& f24,
      const base::Optional<std::vector<std::string>>& f25,
      const base::Optional<std::vector<base::Optional<std::string>>>& f26,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NoDefaultFieldValues::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  
  std::string f11;
  
  base::Optional<std::string> f12;
  
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
  
  std::vector<std::string> f23;
  
  std::vector<base::Optional<std::string>> f24;
  
  base::Optional<std::vector<std::string>> f25;
  
  base::Optional<std::vector<base::Optional<std::string>>> f26;
  
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
      const std::string& f13,
      const base::Optional<std::string>& f14,
      ::mojo::test::RectPtr f15,
      ::mojo::test::RectPtr f16);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DefaultFieldValues::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  
  std::string f13;
  
  base::Optional<std::string> f14;
  
  ::mojo::test::RectPtr f15;
  
  ::mojo::test::RectPtr f16;

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ScopedConstants::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
      const base::flat_map<int8_t, int8_t>& f1,
      const base::flat_map<uint8_t, uint8_t>& f2,
      const base::flat_map<int16_t, int16_t>& f3,
      const base::flat_map<uint16_t, uint16_t>& f4,
      const base::flat_map<int32_t, int32_t>& f5,
      const base::flat_map<uint32_t, uint32_t>& f6,
      const base::flat_map<int64_t, int64_t>& f7,
      const base::flat_map<uint64_t, uint64_t>& f8,
      const base::flat_map<float, float>& f9,
      const base::flat_map<double, double>& f10,
      const base::flat_map<std::string, std::string>& f11);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MapKeyTypes::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  base::flat_map<int8_t, int8_t> f1;
  
  base::flat_map<uint8_t, uint8_t> f2;
  
  base::flat_map<int16_t, int16_t> f3;
  
  base::flat_map<uint16_t, uint16_t> f4;
  
  base::flat_map<int32_t, int32_t> f5;
  
  base::flat_map<uint32_t, uint32_t> f6;
  
  base::flat_map<int64_t, int64_t> f7;
  
  base::flat_map<uint64_t, uint64_t> f8;
  
  base::flat_map<float, float> f9;
  
  base::flat_map<double, double> f10;
  
  base::flat_map<std::string, std::string> f11;

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
      const base::flat_map<std::string, std::vector<std::string>>& f0,
      const base::flat_map<std::string, base::Optional<std::vector<std::string>>>& f1,
      const base::flat_map<std::string, std::vector<base::Optional<std::string>>>& f2,
      const base::flat_map<std::string, std::vector<std::string>>& f3,
      const base::flat_map<std::string, std::vector<base::Optional<std::vector<std::string>>>>& f4,
      const base::flat_map<std::string, std::vector<std::vector<std::string>>>& f5,
      base::flat_map<std::string, ::mojo::test::RectPtr> f6,
      const base::flat_map<std::string, base::flat_map<std::string, std::string>>& f7,
      const base::flat_map<std::string, std::vector<base::flat_map<std::string, std::string>>>& f8,
      base::flat_map<std::string, mojo::ScopedHandle> f9,
      base::flat_map<std::string, std::vector<mojo::ScopedHandle>> f10,
      base::flat_map<std::string, base::flat_map<std::string, mojo::ScopedHandle>> f11);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MapValueTypes::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  base::flat_map<std::string, std::vector<std::string>> f0;
  
  base::flat_map<std::string, base::Optional<std::vector<std::string>>> f1;
  
  base::flat_map<std::string, std::vector<base::Optional<std::string>>> f2;
  
  base::flat_map<std::string, std::vector<std::string>> f3;
  
  base::flat_map<std::string, std::vector<base::Optional<std::vector<std::string>>>> f4;
  
  base::flat_map<std::string, std::vector<std::vector<std::string>>> f5;
  
  base::flat_map<std::string, ::mojo::test::RectPtr> f6;
  
  base::flat_map<std::string, base::flat_map<std::string, std::string>> f7;
  
  base::flat_map<std::string, std::vector<base::flat_map<std::string, std::string>>> f8;
  
  base::flat_map<std::string, mojo::ScopedHandle> f9;
  
  base::flat_map<std::string, std::vector<mojo::ScopedHandle>> f10;
  
  base::flat_map<std::string, base::flat_map<std::string, mojo::ScopedHandle>> f11;

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
      const std::vector<int8_t>& f0,
      const std::vector<int16_t>& f1,
      const std::vector<int32_t>& f2,
      const std::vector<int64_t>& f3,
      const std::vector<float>& f4,
      const std::vector<double>& f5,
      std::vector<mojo::PendingRemote<SomeInterface>> f6,
      std::vector<mojo::PendingReceiver<SomeInterface>> f7);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ArrayValueTypes::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  std::vector<int8_t> f0;
  
  std::vector<int16_t> f1;
  
  std::vector<int32_t> f2;
  
  std::vector<int64_t> f3;
  
  std::vector<float> f4;
  
  std::vector<double> f5;
  
  std::vector<mojo::PendingRemote<SomeInterface>> f6;
  
  std::vector<mojo::PendingReceiver<SomeInterface>> f7;

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FloatNumberValues::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IntegerNumberValues::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UnsignedNumberValues::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
      const std::vector<bool>& f0,
      const std::vector<bool>& f1,
      const std::vector<bool>& f2,
      const std::vector<bool>& f3,
      const std::vector<std::vector<bool>>& f4,
      const std::vector<base::Optional<std::vector<bool>>>& f5,
      const std::vector<base::Optional<std::vector<bool>>>& f6);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BitArrayValues::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  std::vector<bool> f0;
  
  std::vector<bool> f1;
  
  std::vector<bool> f2;
  
  std::vector<bool> f3;
  
  std::vector<std::vector<bool>> f4;
  
  std::vector<base::Optional<std::vector<bool>>> f5;
  
  std::vector<base::Optional<std::vector<bool>>> f6;

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
      ::mojo::test::RectPtr f_rect);

  MultiVersionStruct(
      int32_t f_int32,
      ::mojo::test::RectPtr f_rect,
      const base::Optional<std::string>& f_string);

  MultiVersionStruct(
      int32_t f_int32,
      ::mojo::test::RectPtr f_rect,
      const base::Optional<std::string>& f_string,
      const base::Optional<std::vector<int8_t>>& f_array);

  MultiVersionStruct(
      int32_t f_int32,
      ::mojo::test::RectPtr f_rect,
      const base::Optional<std::string>& f_string,
      const base::Optional<std::vector<int8_t>>& f_array,
      mojo::ScopedMessagePipeHandle f_message_pipe,
      bool f_bool);

  MultiVersionStruct(
      int32_t f_int32,
      ::mojo::test::RectPtr f_rect,
      const base::Optional<std::string>& f_string,
      const base::Optional<std::vector<int8_t>>& f_array,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MultiVersionStruct::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  
  ::mojo::test::RectPtr f_rect;
  
  base::Optional<std::string> f_string;
  
  base::Optional<std::vector<int8_t>> f_array;
  
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
      ::mojo::test::RectPtr f_rect);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MultiVersionStructV1::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  
  ::mojo::test::RectPtr f_rect;

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
      ::mojo::test::RectPtr f_rect);

  MultiVersionStructV3(
      int32_t f_int32,
      ::mojo::test::RectPtr f_rect,
      const base::Optional<std::string>& f_string);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MultiVersionStructV3::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  
  ::mojo::test::RectPtr f_rect;
  
  base::Optional<std::string> f_string;

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
      ::mojo::test::RectPtr f_rect);

  MultiVersionStructV5(
      int32_t f_int32,
      ::mojo::test::RectPtr f_rect,
      const base::Optional<std::string>& f_string);

  MultiVersionStructV5(
      int32_t f_int32,
      ::mojo::test::RectPtr f_rect,
      const base::Optional<std::string>& f_string,
      const base::Optional<std::vector<int8_t>>& f_array);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MultiVersionStructV5::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  
  ::mojo::test::RectPtr f_rect;
  
  base::Optional<std::string> f_string;
  
  base::Optional<std::vector<int8_t>> f_array;

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
      ::mojo::test::RectPtr f_rect);

  MultiVersionStructV7(
      int32_t f_int32,
      ::mojo::test::RectPtr f_rect,
      const base::Optional<std::string>& f_string);

  MultiVersionStructV7(
      int32_t f_int32,
      ::mojo::test::RectPtr f_rect,
      const base::Optional<std::string>& f_string,
      const base::Optional<std::vector<int8_t>>& f_array);

  MultiVersionStructV7(
      int32_t f_int32,
      ::mojo::test::RectPtr f_rect,
      const base::Optional<std::string>& f_string,
      const base::Optional<std::vector<int8_t>>& f_array,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MultiVersionStructV7::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  
  ::mojo::test::RectPtr f_rect;
  
  base::Optional<std::string> f_string;
  
  base::Optional<std::vector<int8_t>> f_array;
  
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ContainsInterface::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ContainsInterfaceRequest::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
      const mojo::test::RectChromium& rect);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ContainsHashable::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  mojo::test::RectChromium rect;

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SimpleNestedStruct::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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


}  // namespace test
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::test::NamedRegion::DataView,
                                         ::mojo::test::NamedRegionPtr> {
  static bool IsNull(const ::mojo::test::NamedRegionPtr& input) { return !input; }
  static void SetToNull(::mojo::test::NamedRegionPtr* output) { output->reset(); }

  static const decltype(::mojo::test::NamedRegion::name)& name(
      const ::mojo::test::NamedRegionPtr& input) {
    return input->name;
  }

  static const decltype(::mojo::test::NamedRegion::rects)& rects(
      const ::mojo::test::NamedRegionPtr& input) {
    return input->rects;
  }

  static bool Read(::mojo::test::NamedRegion::DataView input, ::mojo::test::NamedRegionPtr* output);
};


template <>
struct  StructTraits<::mojo::test::RectPair::DataView,
                                         ::mojo::test::RectPairPtr> {
  static bool IsNull(const ::mojo::test::RectPairPtr& input) { return !input; }
  static void SetToNull(::mojo::test::RectPairPtr* output) { output->reset(); }

  static const decltype(::mojo::test::RectPair::first)& first(
      const ::mojo::test::RectPairPtr& input) {
    return input->first;
  }

  static const decltype(::mojo::test::RectPair::second)& second(
      const ::mojo::test::RectPairPtr& input) {
    return input->second;
  }

  static bool Read(::mojo::test::RectPair::DataView input, ::mojo::test::RectPairPtr* output);
};


template <>
struct  StructTraits<::mojo::test::EmptyStruct::DataView,
                                         ::mojo::test::EmptyStructPtr> {
  static bool IsNull(const ::mojo::test::EmptyStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::EmptyStructPtr* output) { output->reset(); }

  static bool Read(::mojo::test::EmptyStruct::DataView input, ::mojo::test::EmptyStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::NoDefaultFieldValues::DataView,
                                         ::mojo::test::NoDefaultFieldValuesPtr> {
  static bool IsNull(const ::mojo::test::NoDefaultFieldValuesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::NoDefaultFieldValuesPtr* output) { output->reset(); }

  static decltype(::mojo::test::NoDefaultFieldValues::f0) f0(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f0;
  }

  static decltype(::mojo::test::NoDefaultFieldValues::f1) f1(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f1;
  }

  static decltype(::mojo::test::NoDefaultFieldValues::f2) f2(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f2;
  }

  static decltype(::mojo::test::NoDefaultFieldValues::f3) f3(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f3;
  }

  static decltype(::mojo::test::NoDefaultFieldValues::f4) f4(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f4;
  }

  static decltype(::mojo::test::NoDefaultFieldValues::f5) f5(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f5;
  }

  static decltype(::mojo::test::NoDefaultFieldValues::f6) f6(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f6;
  }

  static decltype(::mojo::test::NoDefaultFieldValues::f7) f7(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f7;
  }

  static decltype(::mojo::test::NoDefaultFieldValues::f8) f8(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f8;
  }

  static decltype(::mojo::test::NoDefaultFieldValues::f9) f9(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f9;
  }

  static decltype(::mojo::test::NoDefaultFieldValues::f10) f10(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f10;
  }

  static const decltype(::mojo::test::NoDefaultFieldValues::f11)& f11(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f11;
  }

  static const decltype(::mojo::test::NoDefaultFieldValues::f12)& f12(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f12;
  }

  static  decltype(::mojo::test::NoDefaultFieldValues::f13)& f13(
       ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f13;
  }

  static  decltype(::mojo::test::NoDefaultFieldValues::f14)& f14(
       ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f14;
  }

  static  decltype(::mojo::test::NoDefaultFieldValues::f15)& f15(
       ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f15;
  }

  static  decltype(::mojo::test::NoDefaultFieldValues::f16)& f16(
       ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f16;
  }

  static  decltype(::mojo::test::NoDefaultFieldValues::f17)& f17(
       ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f17;
  }

  static  decltype(::mojo::test::NoDefaultFieldValues::f18)& f18(
       ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f18;
  }

  static  decltype(::mojo::test::NoDefaultFieldValues::f19)& f19(
       ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f19;
  }

  static  decltype(::mojo::test::NoDefaultFieldValues::f20)& f20(
       ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f20;
  }

  static  decltype(::mojo::test::NoDefaultFieldValues::f21)& f21(
       ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f21;
  }

  static  decltype(::mojo::test::NoDefaultFieldValues::f22)& f22(
       ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f22;
  }

  static const decltype(::mojo::test::NoDefaultFieldValues::f23)& f23(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f23;
  }

  static const decltype(::mojo::test::NoDefaultFieldValues::f24)& f24(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f24;
  }

  static const decltype(::mojo::test::NoDefaultFieldValues::f25)& f25(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f25;
  }

  static const decltype(::mojo::test::NoDefaultFieldValues::f26)& f26(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f26;
  }

  static const decltype(::mojo::test::NoDefaultFieldValues::f27)& f27(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f27;
  }

  static const decltype(::mojo::test::NoDefaultFieldValues::f28)& f28(
      const ::mojo::test::NoDefaultFieldValuesPtr& input) {
    return input->f28;
  }

  static bool Read(::mojo::test::NoDefaultFieldValues::DataView input, ::mojo::test::NoDefaultFieldValuesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::DefaultFieldValues::DataView,
                                         ::mojo::test::DefaultFieldValuesPtr> {
  static bool IsNull(const ::mojo::test::DefaultFieldValuesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::DefaultFieldValuesPtr* output) { output->reset(); }

  static decltype(::mojo::test::DefaultFieldValues::f0) f0(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f0;
  }

  static decltype(::mojo::test::DefaultFieldValues::f1) f1(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f1;
  }

  static decltype(::mojo::test::DefaultFieldValues::f2) f2(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f2;
  }

  static decltype(::mojo::test::DefaultFieldValues::f3) f3(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f3;
  }

  static decltype(::mojo::test::DefaultFieldValues::f4) f4(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f4;
  }

  static decltype(::mojo::test::DefaultFieldValues::f5) f5(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f5;
  }

  static decltype(::mojo::test::DefaultFieldValues::f6) f6(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f6;
  }

  static decltype(::mojo::test::DefaultFieldValues::f7) f7(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f7;
  }

  static decltype(::mojo::test::DefaultFieldValues::f8) f8(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f8;
  }

  static decltype(::mojo::test::DefaultFieldValues::f9) f9(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f9;
  }

  static decltype(::mojo::test::DefaultFieldValues::f10) f10(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f10;
  }

  static decltype(::mojo::test::DefaultFieldValues::f11) f11(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f11;
  }

  static decltype(::mojo::test::DefaultFieldValues::f12) f12(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f12;
  }

  static const decltype(::mojo::test::DefaultFieldValues::f13)& f13(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f13;
  }

  static const decltype(::mojo::test::DefaultFieldValues::f14)& f14(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f14;
  }

  static const decltype(::mojo::test::DefaultFieldValues::f15)& f15(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f15;
  }

  static const decltype(::mojo::test::DefaultFieldValues::f16)& f16(
      const ::mojo::test::DefaultFieldValuesPtr& input) {
    return input->f16;
  }

  static bool Read(::mojo::test::DefaultFieldValues::DataView input, ::mojo::test::DefaultFieldValuesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::ScopedConstants::DataView,
                                         ::mojo::test::ScopedConstantsPtr> {
  static bool IsNull(const ::mojo::test::ScopedConstantsPtr& input) { return !input; }
  static void SetToNull(::mojo::test::ScopedConstantsPtr* output) { output->reset(); }

  static decltype(::mojo::test::ScopedConstants::f0) f0(
      const ::mojo::test::ScopedConstantsPtr& input) {
    return input->f0;
  }

  static decltype(::mojo::test::ScopedConstants::f1) f1(
      const ::mojo::test::ScopedConstantsPtr& input) {
    return input->f1;
  }

  static decltype(::mojo::test::ScopedConstants::f2) f2(
      const ::mojo::test::ScopedConstantsPtr& input) {
    return input->f2;
  }

  static decltype(::mojo::test::ScopedConstants::f3) f3(
      const ::mojo::test::ScopedConstantsPtr& input) {
    return input->f3;
  }

  static decltype(::mojo::test::ScopedConstants::f4) f4(
      const ::mojo::test::ScopedConstantsPtr& input) {
    return input->f4;
  }

  static decltype(::mojo::test::ScopedConstants::f5) f5(
      const ::mojo::test::ScopedConstantsPtr& input) {
    return input->f5;
  }

  static decltype(::mojo::test::ScopedConstants::f6) f6(
      const ::mojo::test::ScopedConstantsPtr& input) {
    return input->f6;
  }

  static bool Read(::mojo::test::ScopedConstants::DataView input, ::mojo::test::ScopedConstantsPtr* output);
};


template <>
struct  StructTraits<::mojo::test::MapKeyTypes::DataView,
                                         ::mojo::test::MapKeyTypesPtr> {
  static bool IsNull(const ::mojo::test::MapKeyTypesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::MapKeyTypesPtr* output) { output->reset(); }

  static const decltype(::mojo::test::MapKeyTypes::f1)& f1(
      const ::mojo::test::MapKeyTypesPtr& input) {
    return input->f1;
  }

  static const decltype(::mojo::test::MapKeyTypes::f2)& f2(
      const ::mojo::test::MapKeyTypesPtr& input) {
    return input->f2;
  }

  static const decltype(::mojo::test::MapKeyTypes::f3)& f3(
      const ::mojo::test::MapKeyTypesPtr& input) {
    return input->f3;
  }

  static const decltype(::mojo::test::MapKeyTypes::f4)& f4(
      const ::mojo::test::MapKeyTypesPtr& input) {
    return input->f4;
  }

  static const decltype(::mojo::test::MapKeyTypes::f5)& f5(
      const ::mojo::test::MapKeyTypesPtr& input) {
    return input->f5;
  }

  static const decltype(::mojo::test::MapKeyTypes::f6)& f6(
      const ::mojo::test::MapKeyTypesPtr& input) {
    return input->f6;
  }

  static const decltype(::mojo::test::MapKeyTypes::f7)& f7(
      const ::mojo::test::MapKeyTypesPtr& input) {
    return input->f7;
  }

  static const decltype(::mojo::test::MapKeyTypes::f8)& f8(
      const ::mojo::test::MapKeyTypesPtr& input) {
    return input->f8;
  }

  static const decltype(::mojo::test::MapKeyTypes::f9)& f9(
      const ::mojo::test::MapKeyTypesPtr& input) {
    return input->f9;
  }

  static const decltype(::mojo::test::MapKeyTypes::f10)& f10(
      const ::mojo::test::MapKeyTypesPtr& input) {
    return input->f10;
  }

  static const decltype(::mojo::test::MapKeyTypes::f11)& f11(
      const ::mojo::test::MapKeyTypesPtr& input) {
    return input->f11;
  }

  static bool Read(::mojo::test::MapKeyTypes::DataView input, ::mojo::test::MapKeyTypesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::MapValueTypes::DataView,
                                         ::mojo::test::MapValueTypesPtr> {
  static bool IsNull(const ::mojo::test::MapValueTypesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::MapValueTypesPtr* output) { output->reset(); }

  static const decltype(::mojo::test::MapValueTypes::f0)& f0(
      const ::mojo::test::MapValueTypesPtr& input) {
    return input->f0;
  }

  static const decltype(::mojo::test::MapValueTypes::f1)& f1(
      const ::mojo::test::MapValueTypesPtr& input) {
    return input->f1;
  }

  static const decltype(::mojo::test::MapValueTypes::f2)& f2(
      const ::mojo::test::MapValueTypesPtr& input) {
    return input->f2;
  }

  static const decltype(::mojo::test::MapValueTypes::f3)& f3(
      const ::mojo::test::MapValueTypesPtr& input) {
    return input->f3;
  }

  static const decltype(::mojo::test::MapValueTypes::f4)& f4(
      const ::mojo::test::MapValueTypesPtr& input) {
    return input->f4;
  }

  static const decltype(::mojo::test::MapValueTypes::f5)& f5(
      const ::mojo::test::MapValueTypesPtr& input) {
    return input->f5;
  }

  static const decltype(::mojo::test::MapValueTypes::f6)& f6(
      const ::mojo::test::MapValueTypesPtr& input) {
    return input->f6;
  }

  static const decltype(::mojo::test::MapValueTypes::f7)& f7(
      const ::mojo::test::MapValueTypesPtr& input) {
    return input->f7;
  }

  static const decltype(::mojo::test::MapValueTypes::f8)& f8(
      const ::mojo::test::MapValueTypesPtr& input) {
    return input->f8;
  }

  static  decltype(::mojo::test::MapValueTypes::f9)& f9(
       ::mojo::test::MapValueTypesPtr& input) {
    return input->f9;
  }

  static  decltype(::mojo::test::MapValueTypes::f10)& f10(
       ::mojo::test::MapValueTypesPtr& input) {
    return input->f10;
  }

  static  decltype(::mojo::test::MapValueTypes::f11)& f11(
       ::mojo::test::MapValueTypesPtr& input) {
    return input->f11;
  }

  static bool Read(::mojo::test::MapValueTypes::DataView input, ::mojo::test::MapValueTypesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::ArrayValueTypes::DataView,
                                         ::mojo::test::ArrayValueTypesPtr> {
  static bool IsNull(const ::mojo::test::ArrayValueTypesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::ArrayValueTypesPtr* output) { output->reset(); }

  static const decltype(::mojo::test::ArrayValueTypes::f0)& f0(
      const ::mojo::test::ArrayValueTypesPtr& input) {
    return input->f0;
  }

  static const decltype(::mojo::test::ArrayValueTypes::f1)& f1(
      const ::mojo::test::ArrayValueTypesPtr& input) {
    return input->f1;
  }

  static const decltype(::mojo::test::ArrayValueTypes::f2)& f2(
      const ::mojo::test::ArrayValueTypesPtr& input) {
    return input->f2;
  }

  static const decltype(::mojo::test::ArrayValueTypes::f3)& f3(
      const ::mojo::test::ArrayValueTypesPtr& input) {
    return input->f3;
  }

  static const decltype(::mojo::test::ArrayValueTypes::f4)& f4(
      const ::mojo::test::ArrayValueTypesPtr& input) {
    return input->f4;
  }

  static const decltype(::mojo::test::ArrayValueTypes::f5)& f5(
      const ::mojo::test::ArrayValueTypesPtr& input) {
    return input->f5;
  }

  static  decltype(::mojo::test::ArrayValueTypes::f6)& f6(
       ::mojo::test::ArrayValueTypesPtr& input) {
    return input->f6;
  }

  static  decltype(::mojo::test::ArrayValueTypes::f7)& f7(
       ::mojo::test::ArrayValueTypesPtr& input) {
    return input->f7;
  }

  static bool Read(::mojo::test::ArrayValueTypes::DataView input, ::mojo::test::ArrayValueTypesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::FloatNumberValues::DataView,
                                         ::mojo::test::FloatNumberValuesPtr> {
  static bool IsNull(const ::mojo::test::FloatNumberValuesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::FloatNumberValuesPtr* output) { output->reset(); }

  static decltype(::mojo::test::FloatNumberValues::f0) f0(
      const ::mojo::test::FloatNumberValuesPtr& input) {
    return input->f0;
  }

  static decltype(::mojo::test::FloatNumberValues::f1) f1(
      const ::mojo::test::FloatNumberValuesPtr& input) {
    return input->f1;
  }

  static decltype(::mojo::test::FloatNumberValues::f2) f2(
      const ::mojo::test::FloatNumberValuesPtr& input) {
    return input->f2;
  }

  static decltype(::mojo::test::FloatNumberValues::f3) f3(
      const ::mojo::test::FloatNumberValuesPtr& input) {
    return input->f3;
  }

  static decltype(::mojo::test::FloatNumberValues::f4) f4(
      const ::mojo::test::FloatNumberValuesPtr& input) {
    return input->f4;
  }

  static decltype(::mojo::test::FloatNumberValues::f5) f5(
      const ::mojo::test::FloatNumberValuesPtr& input) {
    return input->f5;
  }

  static decltype(::mojo::test::FloatNumberValues::f6) f6(
      const ::mojo::test::FloatNumberValuesPtr& input) {
    return input->f6;
  }

  static decltype(::mojo::test::FloatNumberValues::f7) f7(
      const ::mojo::test::FloatNumberValuesPtr& input) {
    return input->f7;
  }

  static decltype(::mojo::test::FloatNumberValues::f8) f8(
      const ::mojo::test::FloatNumberValuesPtr& input) {
    return input->f8;
  }

  static decltype(::mojo::test::FloatNumberValues::f9) f9(
      const ::mojo::test::FloatNumberValuesPtr& input) {
    return input->f9;
  }

  static bool Read(::mojo::test::FloatNumberValues::DataView input, ::mojo::test::FloatNumberValuesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::IntegerNumberValues::DataView,
                                         ::mojo::test::IntegerNumberValuesPtr> {
  static bool IsNull(const ::mojo::test::IntegerNumberValuesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::IntegerNumberValuesPtr* output) { output->reset(); }

  static decltype(::mojo::test::IntegerNumberValues::f0) f0(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f0;
  }

  static decltype(::mojo::test::IntegerNumberValues::f1) f1(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f1;
  }

  static decltype(::mojo::test::IntegerNumberValues::f2) f2(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f2;
  }

  static decltype(::mojo::test::IntegerNumberValues::f3) f3(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f3;
  }

  static decltype(::mojo::test::IntegerNumberValues::f4) f4(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f4;
  }

  static decltype(::mojo::test::IntegerNumberValues::f5) f5(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f5;
  }

  static decltype(::mojo::test::IntegerNumberValues::f6) f6(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f6;
  }

  static decltype(::mojo::test::IntegerNumberValues::f7) f7(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f7;
  }

  static decltype(::mojo::test::IntegerNumberValues::f8) f8(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f8;
  }

  static decltype(::mojo::test::IntegerNumberValues::f9) f9(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f9;
  }

  static decltype(::mojo::test::IntegerNumberValues::f10) f10(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f10;
  }

  static decltype(::mojo::test::IntegerNumberValues::f11) f11(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f11;
  }

  static decltype(::mojo::test::IntegerNumberValues::f12) f12(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f12;
  }

  static decltype(::mojo::test::IntegerNumberValues::f13) f13(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f13;
  }

  static decltype(::mojo::test::IntegerNumberValues::f14) f14(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f14;
  }

  static decltype(::mojo::test::IntegerNumberValues::f15) f15(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f15;
  }

  static decltype(::mojo::test::IntegerNumberValues::f16) f16(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f16;
  }

  static decltype(::mojo::test::IntegerNumberValues::f17) f17(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f17;
  }

  static decltype(::mojo::test::IntegerNumberValues::f18) f18(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f18;
  }

  static decltype(::mojo::test::IntegerNumberValues::f19) f19(
      const ::mojo::test::IntegerNumberValuesPtr& input) {
    return input->f19;
  }

  static bool Read(::mojo::test::IntegerNumberValues::DataView input, ::mojo::test::IntegerNumberValuesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::UnsignedNumberValues::DataView,
                                         ::mojo::test::UnsignedNumberValuesPtr> {
  static bool IsNull(const ::mojo::test::UnsignedNumberValuesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::UnsignedNumberValuesPtr* output) { output->reset(); }

  static decltype(::mojo::test::UnsignedNumberValues::f0) f0(
      const ::mojo::test::UnsignedNumberValuesPtr& input) {
    return input->f0;
  }

  static decltype(::mojo::test::UnsignedNumberValues::f1) f1(
      const ::mojo::test::UnsignedNumberValuesPtr& input) {
    return input->f1;
  }

  static decltype(::mojo::test::UnsignedNumberValues::f2) f2(
      const ::mojo::test::UnsignedNumberValuesPtr& input) {
    return input->f2;
  }

  static decltype(::mojo::test::UnsignedNumberValues::f3) f3(
      const ::mojo::test::UnsignedNumberValuesPtr& input) {
    return input->f3;
  }

  static decltype(::mojo::test::UnsignedNumberValues::f4) f4(
      const ::mojo::test::UnsignedNumberValuesPtr& input) {
    return input->f4;
  }

  static decltype(::mojo::test::UnsignedNumberValues::f5) f5(
      const ::mojo::test::UnsignedNumberValuesPtr& input) {
    return input->f5;
  }

  static decltype(::mojo::test::UnsignedNumberValues::f6) f6(
      const ::mojo::test::UnsignedNumberValuesPtr& input) {
    return input->f6;
  }

  static decltype(::mojo::test::UnsignedNumberValues::f7) f7(
      const ::mojo::test::UnsignedNumberValuesPtr& input) {
    return input->f7;
  }

  static decltype(::mojo::test::UnsignedNumberValues::f8) f8(
      const ::mojo::test::UnsignedNumberValuesPtr& input) {
    return input->f8;
  }

  static decltype(::mojo::test::UnsignedNumberValues::f9) f9(
      const ::mojo::test::UnsignedNumberValuesPtr& input) {
    return input->f9;
  }

  static decltype(::mojo::test::UnsignedNumberValues::f10) f10(
      const ::mojo::test::UnsignedNumberValuesPtr& input) {
    return input->f10;
  }

  static decltype(::mojo::test::UnsignedNumberValues::f11) f11(
      const ::mojo::test::UnsignedNumberValuesPtr& input) {
    return input->f11;
  }

  static bool Read(::mojo::test::UnsignedNumberValues::DataView input, ::mojo::test::UnsignedNumberValuesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::BitArrayValues::DataView,
                                         ::mojo::test::BitArrayValuesPtr> {
  static bool IsNull(const ::mojo::test::BitArrayValuesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::BitArrayValuesPtr* output) { output->reset(); }

  static const decltype(::mojo::test::BitArrayValues::f0)& f0(
      const ::mojo::test::BitArrayValuesPtr& input) {
    return input->f0;
  }

  static const decltype(::mojo::test::BitArrayValues::f1)& f1(
      const ::mojo::test::BitArrayValuesPtr& input) {
    return input->f1;
  }

  static const decltype(::mojo::test::BitArrayValues::f2)& f2(
      const ::mojo::test::BitArrayValuesPtr& input) {
    return input->f2;
  }

  static const decltype(::mojo::test::BitArrayValues::f3)& f3(
      const ::mojo::test::BitArrayValuesPtr& input) {
    return input->f3;
  }

  static const decltype(::mojo::test::BitArrayValues::f4)& f4(
      const ::mojo::test::BitArrayValuesPtr& input) {
    return input->f4;
  }

  static const decltype(::mojo::test::BitArrayValues::f5)& f5(
      const ::mojo::test::BitArrayValuesPtr& input) {
    return input->f5;
  }

  static const decltype(::mojo::test::BitArrayValues::f6)& f6(
      const ::mojo::test::BitArrayValuesPtr& input) {
    return input->f6;
  }

  static bool Read(::mojo::test::BitArrayValues::DataView input, ::mojo::test::BitArrayValuesPtr* output);
};


template <>
struct  StructTraits<::mojo::test::MultiVersionStruct::DataView,
                                         ::mojo::test::MultiVersionStructPtr> {
  static bool IsNull(const ::mojo::test::MultiVersionStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::MultiVersionStructPtr* output) { output->reset(); }

  static decltype(::mojo::test::MultiVersionStruct::f_int32) f_int32(
      const ::mojo::test::MultiVersionStructPtr& input) {
    return input->f_int32;
  }

  static const decltype(::mojo::test::MultiVersionStruct::f_rect)& f_rect(
      const ::mojo::test::MultiVersionStructPtr& input) {
    return input->f_rect;
  }

  static const decltype(::mojo::test::MultiVersionStruct::f_string)& f_string(
      const ::mojo::test::MultiVersionStructPtr& input) {
    return input->f_string;
  }

  static const decltype(::mojo::test::MultiVersionStruct::f_array)& f_array(
      const ::mojo::test::MultiVersionStructPtr& input) {
    return input->f_array;
  }

  static  decltype(::mojo::test::MultiVersionStruct::f_message_pipe)& f_message_pipe(
       ::mojo::test::MultiVersionStructPtr& input) {
    return input->f_message_pipe;
  }

  static decltype(::mojo::test::MultiVersionStruct::f_bool) f_bool(
      const ::mojo::test::MultiVersionStructPtr& input) {
    return input->f_bool;
  }

  static decltype(::mojo::test::MultiVersionStruct::f_int16) f_int16(
      const ::mojo::test::MultiVersionStructPtr& input) {
    return input->f_int16;
  }

  static bool Read(::mojo::test::MultiVersionStruct::DataView input, ::mojo::test::MultiVersionStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::MultiVersionStructV0::DataView,
                                         ::mojo::test::MultiVersionStructV0Ptr> {
  static bool IsNull(const ::mojo::test::MultiVersionStructV0Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::MultiVersionStructV0Ptr* output) { output->reset(); }

  static decltype(::mojo::test::MultiVersionStructV0::f_int32) f_int32(
      const ::mojo::test::MultiVersionStructV0Ptr& input) {
    return input->f_int32;
  }

  static bool Read(::mojo::test::MultiVersionStructV0::DataView input, ::mojo::test::MultiVersionStructV0Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::MultiVersionStructV1::DataView,
                                         ::mojo::test::MultiVersionStructV1Ptr> {
  static bool IsNull(const ::mojo::test::MultiVersionStructV1Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::MultiVersionStructV1Ptr* output) { output->reset(); }

  static decltype(::mojo::test::MultiVersionStructV1::f_int32) f_int32(
      const ::mojo::test::MultiVersionStructV1Ptr& input) {
    return input->f_int32;
  }

  static const decltype(::mojo::test::MultiVersionStructV1::f_rect)& f_rect(
      const ::mojo::test::MultiVersionStructV1Ptr& input) {
    return input->f_rect;
  }

  static bool Read(::mojo::test::MultiVersionStructV1::DataView input, ::mojo::test::MultiVersionStructV1Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::MultiVersionStructV3::DataView,
                                         ::mojo::test::MultiVersionStructV3Ptr> {
  static bool IsNull(const ::mojo::test::MultiVersionStructV3Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::MultiVersionStructV3Ptr* output) { output->reset(); }

  static decltype(::mojo::test::MultiVersionStructV3::f_int32) f_int32(
      const ::mojo::test::MultiVersionStructV3Ptr& input) {
    return input->f_int32;
  }

  static const decltype(::mojo::test::MultiVersionStructV3::f_rect)& f_rect(
      const ::mojo::test::MultiVersionStructV3Ptr& input) {
    return input->f_rect;
  }

  static const decltype(::mojo::test::MultiVersionStructV3::f_string)& f_string(
      const ::mojo::test::MultiVersionStructV3Ptr& input) {
    return input->f_string;
  }

  static bool Read(::mojo::test::MultiVersionStructV3::DataView input, ::mojo::test::MultiVersionStructV3Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::MultiVersionStructV5::DataView,
                                         ::mojo::test::MultiVersionStructV5Ptr> {
  static bool IsNull(const ::mojo::test::MultiVersionStructV5Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::MultiVersionStructV5Ptr* output) { output->reset(); }

  static decltype(::mojo::test::MultiVersionStructV5::f_int32) f_int32(
      const ::mojo::test::MultiVersionStructV5Ptr& input) {
    return input->f_int32;
  }

  static const decltype(::mojo::test::MultiVersionStructV5::f_rect)& f_rect(
      const ::mojo::test::MultiVersionStructV5Ptr& input) {
    return input->f_rect;
  }

  static const decltype(::mojo::test::MultiVersionStructV5::f_string)& f_string(
      const ::mojo::test::MultiVersionStructV5Ptr& input) {
    return input->f_string;
  }

  static const decltype(::mojo::test::MultiVersionStructV5::f_array)& f_array(
      const ::mojo::test::MultiVersionStructV5Ptr& input) {
    return input->f_array;
  }

  static bool Read(::mojo::test::MultiVersionStructV5::DataView input, ::mojo::test::MultiVersionStructV5Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::MultiVersionStructV7::DataView,
                                         ::mojo::test::MultiVersionStructV7Ptr> {
  static bool IsNull(const ::mojo::test::MultiVersionStructV7Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::MultiVersionStructV7Ptr* output) { output->reset(); }

  static decltype(::mojo::test::MultiVersionStructV7::f_int32) f_int32(
      const ::mojo::test::MultiVersionStructV7Ptr& input) {
    return input->f_int32;
  }

  static const decltype(::mojo::test::MultiVersionStructV7::f_rect)& f_rect(
      const ::mojo::test::MultiVersionStructV7Ptr& input) {
    return input->f_rect;
  }

  static const decltype(::mojo::test::MultiVersionStructV7::f_string)& f_string(
      const ::mojo::test::MultiVersionStructV7Ptr& input) {
    return input->f_string;
  }

  static const decltype(::mojo::test::MultiVersionStructV7::f_array)& f_array(
      const ::mojo::test::MultiVersionStructV7Ptr& input) {
    return input->f_array;
  }

  static  decltype(::mojo::test::MultiVersionStructV7::f_message_pipe)& f_message_pipe(
       ::mojo::test::MultiVersionStructV7Ptr& input) {
    return input->f_message_pipe;
  }

  static decltype(::mojo::test::MultiVersionStructV7::f_bool) f_bool(
      const ::mojo::test::MultiVersionStructV7Ptr& input) {
    return input->f_bool;
  }

  static bool Read(::mojo::test::MultiVersionStructV7::DataView input, ::mojo::test::MultiVersionStructV7Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::ReorderedStruct::DataView,
                                         ::mojo::test::ReorderedStructPtr> {
  static bool IsNull(const ::mojo::test::ReorderedStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::ReorderedStructPtr* output) { output->reset(); }

  static decltype(::mojo::test::ReorderedStruct::a) a(
      const ::mojo::test::ReorderedStructPtr& input) {
    return input->a;
  }

  static decltype(::mojo::test::ReorderedStruct::b) b(
      const ::mojo::test::ReorderedStructPtr& input) {
    return input->b;
  }

  static decltype(::mojo::test::ReorderedStruct::c) c(
      const ::mojo::test::ReorderedStructPtr& input) {
    return input->c;
  }

  static bool Read(::mojo::test::ReorderedStruct::DataView input, ::mojo::test::ReorderedStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::ContainsInterface::DataView,
                                         ::mojo::test::ContainsInterfacePtr> {
  static bool IsNull(const ::mojo::test::ContainsInterfacePtr& input) { return !input; }
  static void SetToNull(::mojo::test::ContainsInterfacePtr* output) { output->reset(); }

  static  decltype(::mojo::test::ContainsInterface::some_interface)& some_interface(
       ::mojo::test::ContainsInterfacePtr& input) {
    return input->some_interface;
  }

  static bool Read(::mojo::test::ContainsInterface::DataView input, ::mojo::test::ContainsInterfacePtr* output);
};


template <>
struct  StructTraits<::mojo::test::ContainsOther::DataView,
                                         ::mojo::test::ContainsOtherPtr> {
  static bool IsNull(const ::mojo::test::ContainsOtherPtr& input) { return !input; }
  static void SetToNull(::mojo::test::ContainsOtherPtr* output) { output->reset(); }

  static decltype(::mojo::test::ContainsOther::other) other(
      const ::mojo::test::ContainsOtherPtr& input) {
    return input->other;
  }

  static bool Read(::mojo::test::ContainsOther::DataView input, ::mojo::test::ContainsOtherPtr* output);
};


template <>
struct  StructTraits<::mojo::test::ContainsInterfaceRequest::DataView,
                                         ::mojo::test::ContainsInterfaceRequestPtr> {
  static bool IsNull(const ::mojo::test::ContainsInterfaceRequestPtr& input) { return !input; }
  static void SetToNull(::mojo::test::ContainsInterfaceRequestPtr* output) { output->reset(); }

  static  decltype(::mojo::test::ContainsInterfaceRequest::request)& request(
       ::mojo::test::ContainsInterfaceRequestPtr& input) {
    return input->request;
  }

  static bool Read(::mojo::test::ContainsInterfaceRequest::DataView input, ::mojo::test::ContainsInterfaceRequestPtr* output);
};


template <>
struct  StructTraits<::mojo::test::SingleBoolStruct::DataView,
                                         ::mojo::test::SingleBoolStructPtr> {
  static bool IsNull(const ::mojo::test::SingleBoolStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::SingleBoolStructPtr* output) { output->reset(); }

  static decltype(::mojo::test::SingleBoolStruct::value) value(
      const ::mojo::test::SingleBoolStructPtr& input) {
    return input->value;
  }

  static bool Read(::mojo::test::SingleBoolStruct::DataView input, ::mojo::test::SingleBoolStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::ContainsHashable::DataView,
                                         ::mojo::test::ContainsHashablePtr> {
  static bool IsNull(const ::mojo::test::ContainsHashablePtr& input) { return !input; }
  static void SetToNull(::mojo::test::ContainsHashablePtr* output) { output->reset(); }

  static const decltype(::mojo::test::ContainsHashable::rect)& rect(
      const ::mojo::test::ContainsHashablePtr& input) {
    return input->rect;
  }

  static bool Read(::mojo::test::ContainsHashable::DataView input, ::mojo::test::ContainsHashablePtr* output);
};


template <>
struct  StructTraits<::mojo::test::SimpleNestedStruct::DataView,
                                         ::mojo::test::SimpleNestedStructPtr> {
  static bool IsNull(const ::mojo::test::SimpleNestedStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::SimpleNestedStructPtr* output) { output->reset(); }

  static const decltype(::mojo::test::SimpleNestedStruct::nested)& nested(
      const ::mojo::test::SimpleNestedStructPtr& input) {
    return input->nested;
  }

  static bool Read(::mojo::test::SimpleNestedStruct::DataView input, ::mojo::test::SimpleNestedStructPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_H_