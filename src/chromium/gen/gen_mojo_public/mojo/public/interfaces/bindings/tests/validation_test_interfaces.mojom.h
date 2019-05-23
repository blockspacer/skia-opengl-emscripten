// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/validation_test_interfaces.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/validation_test_interfaces.mojom-forward.h"
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

class InterfaceAProxy;

template <typename ImplRefTraits>
class InterfaceAStub;

class InterfaceARequestValidator;


class  InterfaceA
    : public InterfaceAInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = InterfaceAInterfaceBase;
  using Proxy_ = InterfaceAProxy;

  template <typename ImplRefTraits>
  using Stub_ = InterfaceAStub<ImplRefTraits>;

  using RequestValidator_ = InterfaceARequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~InterfaceA() {}
};

class BoundsCheckTestInterfaceProxy;

template <typename ImplRefTraits>
class BoundsCheckTestInterfaceStub;

class BoundsCheckTestInterfaceRequestValidator;
class BoundsCheckTestInterfaceResponseValidator;


class  BoundsCheckTestInterface
    : public BoundsCheckTestInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BoundsCheckTestInterfaceInterfaceBase;
  using Proxy_ = BoundsCheckTestInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = BoundsCheckTestInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = BoundsCheckTestInterfaceRequestValidator;
  using ResponseValidator_ = BoundsCheckTestInterfaceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kMethod0MinVersion = 0,
    kMethod1MinVersion = 0,
  };
  virtual ~BoundsCheckTestInterface() {}


  using Method0Callback = base::OnceCallback<void(uint8_t)>;
  
  virtual void Method0(uint8_t param0, Method0Callback callback) = 0;

  
  virtual void Method1(uint8_t param0) = 0;
};

class ConformanceTestInterfaceProxy;

template <typename ImplRefTraits>
class ConformanceTestInterfaceStub;

class ConformanceTestInterfaceRequestValidator;
class ConformanceTestInterfaceResponseValidator;


class  ConformanceTestInterface
    : public ConformanceTestInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ConformanceTestInterfaceInterfaceBase;
  using Proxy_ = ConformanceTestInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = ConformanceTestInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = ConformanceTestInterfaceRequestValidator;
  using ResponseValidator_ = ConformanceTestInterfaceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kMethod0MinVersion = 0,
    kMethod1MinVersion = 0,
    kMethod2MinVersion = 0,
    kMethod3MinVersion = 0,
    kMethod4MinVersion = 0,
    kMethod5MinVersion = 0,
    kMethod6MinVersion = 0,
    kMethod7MinVersion = 0,
    kMethod8MinVersion = 0,
    kMethod9MinVersion = 0,
    kMethod10MinVersion = 0,
    kMethod11MinVersion = 0,
    kMethod12MinVersion = 0,
    kMethod13MinVersion = 0,
    kMethod14MinVersion = 0,
    kMethod15MinVersion = 0,
    kMethod16MinVersion = 0,
    kMethod17MinVersion = 0,
    kMethod18MinVersion = 0,
    kMethod19MinVersion = 0,
    kMethod20MinVersion = 0,
    kMethod21MinVersion = 0,
    kMethod22MinVersion = 0,
  };
  virtual ~ConformanceTestInterface() {}

  
  virtual void Method0(float param0) = 0;

  
  virtual void Method1(StructAPtr param0) = 0;

  
  virtual void Method2(StructBPtr param0, StructAPtr param1) = 0;

  
  virtual void Method3(const std::vector<bool>& param0) = 0;

  
  virtual void Method4(StructCPtr param0, const std::vector<uint8_t>& param1) = 0;

  
  virtual void Method5(StructEPtr param0, mojo::ScopedDataPipeProducerHandle param1) = 0;

  
  virtual void Method6(const std::vector<std::vector<uint8_t>>& param0) = 0;

  
  virtual void Method7(StructFPtr param0, const std::vector<base::Optional<std::vector<uint8_t>>>& param1) = 0;

  
  virtual void Method8(const std::vector<base::Optional<std::vector<std::string>>>& param0) = 0;

  
  virtual void Method9(base::Optional<std::vector<std::vector<mojo::ScopedHandle>>> param0) = 0;

  
  virtual void Method10(const base::flat_map<std::string, uint8_t>& param0) = 0;

  
  virtual void Method11(StructGPtr param0) = 0;


  using Method12Callback = base::OnceCallback<void(float)>;
  
  virtual void Method12(float param0, Method12Callback callback) = 0;

  
  virtual void Method13(InterfaceAPtr param0, uint32_t param1, InterfaceAPtr param2) = 0;

  
  virtual void Method14(EnumA param0, EnumB param1) = 0;

  
  virtual void Method15(const base::Optional<std::vector<EnumA>>& param0, const base::Optional<std::vector<EnumB>>& param1) = 0;

  
  virtual void Method16(const base::Optional<base::flat_map<EnumA, EnumA>>& param0) = 0;

  
  virtual void Method17(std::vector<mojo::PendingRemote<InterfaceA>> param0) = 0;

  
  virtual void Method18(UnionAPtr param0) = 0;

  
  virtual void Method19(RecursivePtr recursive) = 0;

  
  virtual void Method20(base::flat_map<StructBPtr, uint8_t> param0) = 0;

  
  virtual void Method21(ExtensibleEmptyEnum param0) = 0;

  
  virtual void Method22(EmptyEnum param0) = 0;
};

class IntegrationTestInterfaceProxy;

template <typename ImplRefTraits>
class IntegrationTestInterfaceStub;

class IntegrationTestInterfaceRequestValidator;
class IntegrationTestInterfaceResponseValidator;


class  IntegrationTestInterface
    : public IntegrationTestInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IntegrationTestInterfaceInterfaceBase;
  using Proxy_ = IntegrationTestInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = IntegrationTestInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = IntegrationTestInterfaceRequestValidator;
  using ResponseValidator_ = IntegrationTestInterfaceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kMethod0MinVersion = 0,
  };
  virtual ~IntegrationTestInterface() {}


  using Method0Callback = base::OnceCallback<void(const std::vector<uint8_t>&)>;
  
  virtual void Method0(BasicStructPtr param0, Method0Callback callback) = 0;
};

class  InterfaceAProxy
    : public InterfaceA {
 public:
  using InterfaceType = InterfaceA;

  explicit InterfaceAProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  BoundsCheckTestInterfaceProxy
    : public BoundsCheckTestInterface {
 public:
  using InterfaceType = BoundsCheckTestInterface;

  explicit BoundsCheckTestInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Method0(uint8_t param0, Method0Callback callback) final;
  void Method1(uint8_t param0) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ConformanceTestInterfaceProxy
    : public ConformanceTestInterface {
 public:
  using InterfaceType = ConformanceTestInterface;

  explicit ConformanceTestInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Method0(float param0) final;
  void Method1(StructAPtr param0) final;
  void Method2(StructBPtr param0, StructAPtr param1) final;
  void Method3(const std::vector<bool>& param0) final;
  void Method4(StructCPtr param0, const std::vector<uint8_t>& param1) final;
  void Method5(StructEPtr param0, mojo::ScopedDataPipeProducerHandle param1) final;
  void Method6(const std::vector<std::vector<uint8_t>>& param0) final;
  void Method7(StructFPtr param0, const std::vector<base::Optional<std::vector<uint8_t>>>& param1) final;
  void Method8(const std::vector<base::Optional<std::vector<std::string>>>& param0) final;
  void Method9(base::Optional<std::vector<std::vector<mojo::ScopedHandle>>> param0) final;
  void Method10(const base::flat_map<std::string, uint8_t>& param0) final;
  void Method11(StructGPtr param0) final;
  void Method12(float param0, Method12Callback callback) final;
  void Method13(InterfaceAPtr param0, uint32_t param1, InterfaceAPtr param2) final;
  void Method14(EnumA param0, EnumB param1) final;
  void Method15(const base::Optional<std::vector<EnumA>>& param0, const base::Optional<std::vector<EnumB>>& param1) final;
  void Method16(const base::Optional<base::flat_map<EnumA, EnumA>>& param0) final;
  void Method17(std::vector<mojo::PendingRemote<InterfaceA>> param0) final;
  void Method18(UnionAPtr param0) final;
  void Method19(RecursivePtr recursive) final;
  void Method20(base::flat_map<StructBPtr, uint8_t> param0) final;
  void Method21(ExtensibleEmptyEnum param0) final;
  void Method22(EmptyEnum param0) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  IntegrationTestInterfaceProxy
    : public IntegrationTestInterface {
 public:
  using InterfaceType = IntegrationTestInterface;

  explicit IntegrationTestInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Method0(BasicStructPtr param0, Method0Callback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  InterfaceAStubDispatch {
 public:
  static bool Accept(InterfaceA* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InterfaceA* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InterfaceA>>
class InterfaceAStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InterfaceAStub() {}
  ~InterfaceAStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterfaceAStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterfaceAStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  BoundsCheckTestInterfaceStubDispatch {
 public:
  static bool Accept(BoundsCheckTestInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BoundsCheckTestInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BoundsCheckTestInterface>>
class BoundsCheckTestInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BoundsCheckTestInterfaceStub() {}
  ~BoundsCheckTestInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BoundsCheckTestInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BoundsCheckTestInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ConformanceTestInterfaceStubDispatch {
 public:
  static bool Accept(ConformanceTestInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ConformanceTestInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ConformanceTestInterface>>
class ConformanceTestInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ConformanceTestInterfaceStub() {}
  ~ConformanceTestInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ConformanceTestInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ConformanceTestInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  IntegrationTestInterfaceStubDispatch {
 public:
  static bool Accept(IntegrationTestInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IntegrationTestInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IntegrationTestInterface>>
class IntegrationTestInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IntegrationTestInterfaceStub() {}
  ~IntegrationTestInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IntegrationTestInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IntegrationTestInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InterfaceARequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  BoundsCheckTestInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ConformanceTestInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  IntegrationTestInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  BoundsCheckTestInterfaceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ConformanceTestInterfaceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  IntegrationTestInterfaceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  StructA {
 public:
  using DataView = StructADataView;
  using Data_ = internal::StructA_Data;

  template <typename... Args>
  static StructAPtr New(Args&&... args) {
    return StructAPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StructAPtr From(const U& u) {
    return mojo::TypeConverter<StructAPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructA>::Convert(*this);
  }


  StructA();

  explicit StructA(
      uint64_t i);

  ~StructA();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StructAPtr>
  StructAPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StructA>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructA::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StructA::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StructA_UnserializedMessageContext<
            UserType, StructA::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StructA::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StructA::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StructA_UnserializedMessageContext<
            UserType, StructA::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StructA::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t i;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};











class  BasicStruct {
 public:
  using DataView = BasicStructDataView;
  using Data_ = internal::BasicStruct_Data;

  template <typename... Args>
  static BasicStructPtr New(Args&&... args) {
    return BasicStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BasicStructPtr From(const U& u) {
    return mojo::TypeConverter<BasicStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BasicStruct>::Convert(*this);
  }


  BasicStruct();

  explicit BasicStruct(
      int32_t a);

  ~BasicStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BasicStructPtr>
  BasicStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BasicStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BasicStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BasicStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BasicStruct_UnserializedMessageContext<
            UserType, BasicStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BasicStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BasicStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BasicStruct_UnserializedMessageContext<
            UserType, BasicStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BasicStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t a;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  StructWithEnum {
 public:
  using DataView = StructWithEnumDataView;
  using Data_ = internal::StructWithEnum_Data;
  using EnumWithin = StructWithEnum_EnumWithin;

  template <typename... Args>
  static StructWithEnumPtr New(Args&&... args) {
    return StructWithEnumPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StructWithEnumPtr From(const U& u) {
    return mojo::TypeConverter<StructWithEnumPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithEnum>::Convert(*this);
  }


  StructWithEnum();

  ~StructWithEnum();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StructWithEnumPtr>
  StructWithEnumPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StructWithEnum>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructWithEnum::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StructWithEnum::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StructWithEnum_UnserializedMessageContext<
            UserType, StructWithEnum::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StructWithEnum::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StructWithEnum::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StructWithEnum_UnserializedMessageContext<
            UserType, StructWithEnum::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StructWithEnum::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }


 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  UnionA {
 public:
  using DataView = UnionADataView;
  using Data_ = internal::UnionA_Data;
  using Tag = Data_::UnionA_Tag;

  static UnionAPtr New() {
    return UnionAPtr(base::in_place);
  }
  // Construct an instance holding |struct_a|.
  static UnionAPtr
  NewStructA(
      StructAPtr struct_a) {
    auto result = UnionAPtr(base::in_place);
    result->set_struct_a(std::move(struct_a));
    return result;
  }
  // Construct an instance holding |b|.
  static UnionAPtr
  NewB(
      bool b) {
    auto result = UnionAPtr(base::in_place);
    result->set_b(std::move(b));
    return result;
  }

  template <typename U>
  static UnionAPtr From(const U& u) {
    return mojo::TypeConverter<UnionAPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UnionA>::Convert(*this);
  }

  UnionA();
  ~UnionA();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = UnionAPtr>
  UnionAPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UnionA>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_struct_a() const { return tag_ == Tag::STRUCT_A; }

  
  StructAPtr& get_struct_a() const {
    DCHECK(tag_ == Tag::STRUCT_A);
    return *(data_.struct_a);
  }

  
  void set_struct_a(
      StructAPtr struct_a);
  
  bool is_b() const { return tag_ == Tag::B; }

  
  bool get_b() const {
    DCHECK(tag_ == Tag::B);
    return data_.b;
  }

  
  void set_b(
      bool b);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UnionA::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<UnionA::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    StructAPtr* struct_a;
    bool b;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};






class  StructB {
 public:
  using DataView = StructBDataView;
  using Data_ = internal::StructB_Data;

  template <typename... Args>
  static StructBPtr New(Args&&... args) {
    return StructBPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StructBPtr From(const U& u) {
    return mojo::TypeConverter<StructBPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructB>::Convert(*this);
  }


  StructB();

  explicit StructB(
      StructAPtr struct_a);

  ~StructB();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StructBPtr>
  StructBPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StructB>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructB::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StructB::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StructB_UnserializedMessageContext<
            UserType, StructB::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StructB::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StructB::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StructB_UnserializedMessageContext<
            UserType, StructB::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StructB::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  StructAPtr struct_a;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(StructB);
};





class  StructC {
 public:
  using DataView = StructCDataView;
  using Data_ = internal::StructC_Data;

  template <typename... Args>
  static StructCPtr New(Args&&... args) {
    return StructCPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StructCPtr From(const U& u) {
    return mojo::TypeConverter<StructCPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructC>::Convert(*this);
  }


  StructC();

  explicit StructC(
      const std::vector<uint8_t>& data);

  ~StructC();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StructCPtr>
  StructCPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StructC>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructC::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StructC::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StructC_UnserializedMessageContext<
            UserType, StructC::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StructC::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StructC::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StructC_UnserializedMessageContext<
            UserType, StructC::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StructC::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<uint8_t> data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  StructD {
 public:
  using DataView = StructDDataView;
  using Data_ = internal::StructD_Data;

  template <typename... Args>
  static StructDPtr New(Args&&... args) {
    return StructDPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StructDPtr From(const U& u) {
    return mojo::TypeConverter<StructDPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructD>::Convert(*this);
  }


  StructD();

  explicit StructD(
      std::vector<mojo::ScopedMessagePipeHandle> message_pipes);

  ~StructD();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StructDPtr>
  StructDPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StructD>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructD::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StructD::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StructD_UnserializedMessageContext<
            UserType, StructD::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StructD::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StructD::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StructD_UnserializedMessageContext<
            UserType, StructD::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StructD::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<mojo::ScopedMessagePipeHandle> message_pipes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(StructD);
};





class  StructE {
 public:
  using DataView = StructEDataView;
  using Data_ = internal::StructE_Data;

  template <typename... Args>
  static StructEPtr New(Args&&... args) {
    return StructEPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StructEPtr From(const U& u) {
    return mojo::TypeConverter<StructEPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructE>::Convert(*this);
  }


  StructE();

  StructE(
      StructDPtr struct_d,
      mojo::ScopedDataPipeConsumerHandle data_pipe_consumer);

  ~StructE();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StructEPtr>
  StructEPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StructE>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructE::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StructE::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StructE_UnserializedMessageContext<
            UserType, StructE::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StructE::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StructE::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StructE_UnserializedMessageContext<
            UserType, StructE::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StructE::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  StructDPtr struct_d;
  
  mojo::ScopedDataPipeConsumerHandle data_pipe_consumer;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(StructE);
};





class  StructF {
 public:
  using DataView = StructFDataView;
  using Data_ = internal::StructF_Data;

  template <typename... Args>
  static StructFPtr New(Args&&... args) {
    return StructFPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StructFPtr From(const U& u) {
    return mojo::TypeConverter<StructFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructF>::Convert(*this);
  }


  StructF();

  explicit StructF(
      const std::vector<uint8_t>& fixed_size_array);

  ~StructF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StructFPtr>
  StructFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StructF>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructF::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StructF::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StructF_UnserializedMessageContext<
            UserType, StructF::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StructF::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StructF::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StructF_UnserializedMessageContext<
            UserType, StructF::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StructF::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<uint8_t> fixed_size_array;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  StructG {
 public:
  using DataView = StructGDataView;
  using Data_ = internal::StructG_Data;

  template <typename... Args>
  static StructGPtr New(Args&&... args) {
    return StructGPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StructGPtr From(const U& u) {
    return mojo::TypeConverter<StructGPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructG>::Convert(*this);
  }


  StructG();

  explicit StructG(
      int32_t i);

  StructG(
      int32_t i,
      StructAPtr struct_a);

  StructG(
      int32_t i,
      StructAPtr struct_a,
      const base::Optional<std::string>& str,
      bool b);

  ~StructG();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StructGPtr>
  StructGPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StructG>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructG::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StructG::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StructG_UnserializedMessageContext<
            UserType, StructG::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StructG::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StructG::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StructG_UnserializedMessageContext<
            UserType, StructG::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StructG::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t i;
  
  StructAPtr struct_a;
  
  base::Optional<std::string> str;
  
  bool b;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(StructG);
};







class  Recursive {
 public:
  using DataView = RecursiveDataView;
  using Data_ = internal::Recursive_Data;

  template <typename... Args>
  static RecursivePtr New(Args&&... args) {
    return RecursivePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RecursivePtr From(const U& u) {
    return mojo::TypeConverter<RecursivePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Recursive>::Convert(*this);
  }


  Recursive();

  explicit Recursive(
      RecursivePtr recursive);

  ~Recursive();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RecursivePtr>
  RecursivePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Recursive>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Recursive::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Recursive::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Recursive_UnserializedMessageContext<
            UserType, Recursive::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Recursive::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Recursive::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Recursive_UnserializedMessageContext<
            UserType, Recursive::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Recursive::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  RecursivePtr recursive;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Recursive);
};

template <typename UnionPtrType>
UnionAPtr UnionA::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::STRUCT_A:
      rv->set_struct_a(mojo::Clone(*data_.struct_a));
      break;
    case Tag::B:
      rv->set_b(mojo::Clone(data_.b));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UnionA>::value>::type*>
bool UnionA::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::STRUCT_A:
      return mojo::Equals(*(data_.struct_a), *(other.data_.struct_a));
    case Tag::B:
      return mojo::Equals(data_.b, other.data_.b);
  }

  return false;
}
template <typename StructPtrType>
StructAPtr StructA::Clone() const {
  return New(
      mojo::Clone(i)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StructA>::value>::type*>
bool StructA::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->i, other_struct.i))
    return false;
  return true;
}
template <typename StructPtrType>
StructBPtr StructB::Clone() const {
  return New(
      mojo::Clone(struct_a)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StructB>::value>::type*>
bool StructB::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->struct_a, other_struct.struct_a))
    return false;
  return true;
}
template <typename StructPtrType>
StructCPtr StructC::Clone() const {
  return New(
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StructC>::value>::type*>
bool StructC::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
StructDPtr StructD::Clone() const {
  return New(
      mojo::Clone(message_pipes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StructD>::value>::type*>
bool StructD::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->message_pipes, other_struct.message_pipes))
    return false;
  return true;
}
template <typename StructPtrType>
StructEPtr StructE::Clone() const {
  return New(
      mojo::Clone(struct_d),
      mojo::Clone(data_pipe_consumer)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StructE>::value>::type*>
bool StructE::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->struct_d, other_struct.struct_d))
    return false;
  if (!mojo::Equals(this->data_pipe_consumer, other_struct.data_pipe_consumer))
    return false;
  return true;
}
template <typename StructPtrType>
StructFPtr StructF::Clone() const {
  return New(
      mojo::Clone(fixed_size_array)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StructF>::value>::type*>
bool StructF::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->fixed_size_array, other_struct.fixed_size_array))
    return false;
  return true;
}
template <typename StructPtrType>
StructGPtr StructG::Clone() const {
  return New(
      mojo::Clone(i),
      mojo::Clone(struct_a),
      mojo::Clone(str),
      mojo::Clone(b)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StructG>::value>::type*>
bool StructG::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->i, other_struct.i))
    return false;
  if (!mojo::Equals(this->struct_a, other_struct.struct_a))
    return false;
  if (!mojo::Equals(this->str, other_struct.str))
    return false;
  if (!mojo::Equals(this->b, other_struct.b))
    return false;
  return true;
}
template <typename StructPtrType>
BasicStructPtr BasicStruct::Clone() const {
  return New(
      mojo::Clone(a)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BasicStruct>::value>::type*>
bool BasicStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->a, other_struct.a))
    return false;
  return true;
}
template <typename StructPtrType>
StructWithEnumPtr StructWithEnum::Clone() const {
  return New(
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StructWithEnum>::value>::type*>
bool StructWithEnum::Equals(const T& other_struct) const {
  return true;
}
template <typename StructPtrType>
RecursivePtr Recursive::Clone() const {
  return New(
      mojo::Clone(recursive)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Recursive>::value>::type*>
bool Recursive::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->recursive, other_struct.recursive))
    return false;
  return true;
}


}  // namespace test
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::test::StructA::DataView,
                                         ::mojo::test::StructAPtr> {
  static bool IsNull(const ::mojo::test::StructAPtr& input) { return !input; }
  static void SetToNull(::mojo::test::StructAPtr* output) { output->reset(); }

  static decltype(::mojo::test::StructA::i) i(
      const ::mojo::test::StructAPtr& input) {
    return input->i;
  }

  static bool Read(::mojo::test::StructA::DataView input, ::mojo::test::StructAPtr* output);
};


template <>
struct  StructTraits<::mojo::test::StructB::DataView,
                                         ::mojo::test::StructBPtr> {
  static bool IsNull(const ::mojo::test::StructBPtr& input) { return !input; }
  static void SetToNull(::mojo::test::StructBPtr* output) { output->reset(); }

  static const decltype(::mojo::test::StructB::struct_a)& struct_a(
      const ::mojo::test::StructBPtr& input) {
    return input->struct_a;
  }

  static bool Read(::mojo::test::StructB::DataView input, ::mojo::test::StructBPtr* output);
};


template <>
struct  StructTraits<::mojo::test::StructC::DataView,
                                         ::mojo::test::StructCPtr> {
  static bool IsNull(const ::mojo::test::StructCPtr& input) { return !input; }
  static void SetToNull(::mojo::test::StructCPtr* output) { output->reset(); }

  static const decltype(::mojo::test::StructC::data)& data(
      const ::mojo::test::StructCPtr& input) {
    return input->data;
  }

  static bool Read(::mojo::test::StructC::DataView input, ::mojo::test::StructCPtr* output);
};


template <>
struct  StructTraits<::mojo::test::StructD::DataView,
                                         ::mojo::test::StructDPtr> {
  static bool IsNull(const ::mojo::test::StructDPtr& input) { return !input; }
  static void SetToNull(::mojo::test::StructDPtr* output) { output->reset(); }

  static  decltype(::mojo::test::StructD::message_pipes)& message_pipes(
       ::mojo::test::StructDPtr& input) {
    return input->message_pipes;
  }

  static bool Read(::mojo::test::StructD::DataView input, ::mojo::test::StructDPtr* output);
};


template <>
struct  StructTraits<::mojo::test::StructE::DataView,
                                         ::mojo::test::StructEPtr> {
  static bool IsNull(const ::mojo::test::StructEPtr& input) { return !input; }
  static void SetToNull(::mojo::test::StructEPtr* output) { output->reset(); }

  static  decltype(::mojo::test::StructE::struct_d)& struct_d(
       ::mojo::test::StructEPtr& input) {
    return input->struct_d;
  }

  static  decltype(::mojo::test::StructE::data_pipe_consumer)& data_pipe_consumer(
       ::mojo::test::StructEPtr& input) {
    return input->data_pipe_consumer;
  }

  static bool Read(::mojo::test::StructE::DataView input, ::mojo::test::StructEPtr* output);
};


template <>
struct  StructTraits<::mojo::test::StructF::DataView,
                                         ::mojo::test::StructFPtr> {
  static bool IsNull(const ::mojo::test::StructFPtr& input) { return !input; }
  static void SetToNull(::mojo::test::StructFPtr* output) { output->reset(); }

  static const decltype(::mojo::test::StructF::fixed_size_array)& fixed_size_array(
      const ::mojo::test::StructFPtr& input) {
    return input->fixed_size_array;
  }

  static bool Read(::mojo::test::StructF::DataView input, ::mojo::test::StructFPtr* output);
};


template <>
struct  StructTraits<::mojo::test::StructG::DataView,
                                         ::mojo::test::StructGPtr> {
  static bool IsNull(const ::mojo::test::StructGPtr& input) { return !input; }
  static void SetToNull(::mojo::test::StructGPtr* output) { output->reset(); }

  static decltype(::mojo::test::StructG::i) i(
      const ::mojo::test::StructGPtr& input) {
    return input->i;
  }

  static const decltype(::mojo::test::StructG::struct_a)& struct_a(
      const ::mojo::test::StructGPtr& input) {
    return input->struct_a;
  }

  static const decltype(::mojo::test::StructG::str)& str(
      const ::mojo::test::StructGPtr& input) {
    return input->str;
  }

  static decltype(::mojo::test::StructG::b) b(
      const ::mojo::test::StructGPtr& input) {
    return input->b;
  }

  static bool Read(::mojo::test::StructG::DataView input, ::mojo::test::StructGPtr* output);
};


template <>
struct  StructTraits<::mojo::test::BasicStruct::DataView,
                                         ::mojo::test::BasicStructPtr> {
  static bool IsNull(const ::mojo::test::BasicStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::BasicStructPtr* output) { output->reset(); }

  static decltype(::mojo::test::BasicStruct::a) a(
      const ::mojo::test::BasicStructPtr& input) {
    return input->a;
  }

  static bool Read(::mojo::test::BasicStruct::DataView input, ::mojo::test::BasicStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::StructWithEnum::DataView,
                                         ::mojo::test::StructWithEnumPtr> {
  static bool IsNull(const ::mojo::test::StructWithEnumPtr& input) { return !input; }
  static void SetToNull(::mojo::test::StructWithEnumPtr* output) { output->reset(); }

  static bool Read(::mojo::test::StructWithEnum::DataView input, ::mojo::test::StructWithEnumPtr* output);
};


template <>
struct  StructTraits<::mojo::test::Recursive::DataView,
                                         ::mojo::test::RecursivePtr> {
  static bool IsNull(const ::mojo::test::RecursivePtr& input) { return !input; }
  static void SetToNull(::mojo::test::RecursivePtr* output) { output->reset(); }

  static const decltype(::mojo::test::Recursive::recursive)& recursive(
      const ::mojo::test::RecursivePtr& input) {
    return input->recursive;
  }

  static bool Read(::mojo::test::Recursive::DataView input, ::mojo::test::RecursivePtr* output);
};


template <>
struct  UnionTraits<::mojo::test::UnionA::DataView,
                                        ::mojo::test::UnionAPtr> {
  static bool IsNull(const ::mojo::test::UnionAPtr& input) { return !input; }
  static void SetToNull(::mojo::test::UnionAPtr* output) { output->reset(); }

  static ::mojo::test::UnionA::Tag GetTag(const ::mojo::test::UnionAPtr& input) {
    return input->which();
  }

  static const ::mojo::test::StructAPtr& struct_a(const ::mojo::test::UnionAPtr& input) {
    return input->get_struct_a();
  }

  static  bool b(const ::mojo::test::UnionAPtr& input) {
    return input->get_b();
  }

  static bool Read(::mojo::test::UnionA::DataView input, ::mojo::test::UnionAPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_H_