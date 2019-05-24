// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_BLINK_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_BLINK_H_

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
#include "mojo/public/interfaces/bindings/tests/validation_test_interfaces.mojom-blink-forward.h"

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
struct mojo_test_internal_EnumA_DataHashFn {
  static unsigned GetHash(const ::mojo::test::EnumA& value) {
    using utype = std::underlying_type<::mojo::test::EnumA>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::mojo::test::EnumA& left, const ::mojo::test::EnumA& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::mojo::test::EnumA>
    : public GenericHashTraits<::mojo::test::EnumA> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::mojo::test::EnumA& value) {
    return value == static_cast<::mojo::test::EnumA>(-1000000);
  }
  static void ConstructDeletedValue(::mojo::test::EnumA& slot, bool) {
    slot = static_cast<::mojo::test::EnumA>(-1000001);
  }
  static bool IsDeletedValue(const ::mojo::test::EnumA& value) {
    return value == static_cast<::mojo::test::EnumA>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct mojo_test_internal_EnumB_DataHashFn {
  static unsigned GetHash(const ::mojo::test::EnumB& value) {
    using utype = std::underlying_type<::mojo::test::EnumB>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::mojo::test::EnumB& left, const ::mojo::test::EnumB& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::mojo::test::EnumB>
    : public GenericHashTraits<::mojo::test::EnumB> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::mojo::test::EnumB& value) {
    return value == static_cast<::mojo::test::EnumB>(-1000000);
  }
  static void ConstructDeletedValue(::mojo::test::EnumB& slot, bool) {
    slot = static_cast<::mojo::test::EnumB>(-1000001);
  }
  static bool IsDeletedValue(const ::mojo::test::EnumB& value) {
    return value == static_cast<::mojo::test::EnumB>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct mojo_test_internal_EmptyEnum_DataHashFn {
  static unsigned GetHash(const ::mojo::test::EmptyEnum& value) {
    using utype = std::underlying_type<::mojo::test::EmptyEnum>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::mojo::test::EmptyEnum& left, const ::mojo::test::EmptyEnum& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::mojo::test::EmptyEnum>
    : public GenericHashTraits<::mojo::test::EmptyEnum> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::mojo::test::EmptyEnum& value) {
    return value == static_cast<::mojo::test::EmptyEnum>(-1000000);
  }
  static void ConstructDeletedValue(::mojo::test::EmptyEnum& slot, bool) {
    slot = static_cast<::mojo::test::EmptyEnum>(-1000001);
  }
  static bool IsDeletedValue(const ::mojo::test::EmptyEnum& value) {
    return value == static_cast<::mojo::test::EmptyEnum>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct mojo_test_internal_ExtensibleEmptyEnum_DataHashFn {
  static unsigned GetHash(const ::mojo::test::ExtensibleEmptyEnum& value) {
    using utype = std::underlying_type<::mojo::test::ExtensibleEmptyEnum>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::mojo::test::ExtensibleEmptyEnum& left, const ::mojo::test::ExtensibleEmptyEnum& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::mojo::test::ExtensibleEmptyEnum>
    : public GenericHashTraits<::mojo::test::ExtensibleEmptyEnum> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::mojo::test::ExtensibleEmptyEnum& value) {
    return value == static_cast<::mojo::test::ExtensibleEmptyEnum>(-1000000);
  }
  static void ConstructDeletedValue(::mojo::test::ExtensibleEmptyEnum& slot, bool) {
    slot = static_cast<::mojo::test::ExtensibleEmptyEnum>(-1000001);
  }
  static bool IsDeletedValue(const ::mojo::test::ExtensibleEmptyEnum& value) {
    return value == static_cast<::mojo::test::ExtensibleEmptyEnum>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct mojo_test_internal_BasicEnum_DataHashFn {
  static unsigned GetHash(const ::mojo::test::BasicEnum& value) {
    using utype = std::underlying_type<::mojo::test::BasicEnum>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::mojo::test::BasicEnum& left, const ::mojo::test::BasicEnum& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::mojo::test::BasicEnum>
    : public GenericHashTraits<::mojo::test::BasicEnum> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::mojo::test::BasicEnum& value) {
    return value == static_cast<::mojo::test::BasicEnum>(-1000000);
  }
  static void ConstructDeletedValue(::mojo::test::BasicEnum& slot, bool) {
    slot = static_cast<::mojo::test::BasicEnum>(-1000001);
  }
  static bool IsDeletedValue(const ::mojo::test::BasicEnum& value) {
    return value == static_cast<::mojo::test::BasicEnum>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct mojo_test_internal_StructWithEnum_EnumWithin_DataHashFn {
  static unsigned GetHash(const ::mojo::test::StructWithEnum_EnumWithin& value) {
    using utype = std::underlying_type<::mojo::test::StructWithEnum_EnumWithin>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::mojo::test::StructWithEnum_EnumWithin& left, const ::mojo::test::StructWithEnum_EnumWithin& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::mojo::test::StructWithEnum_EnumWithin>
    : public GenericHashTraits<::mojo::test::StructWithEnum_EnumWithin> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::mojo::test::StructWithEnum_EnumWithin& value) {
    return value == static_cast<::mojo::test::StructWithEnum_EnumWithin>(-1000000);
  }
  static void ConstructDeletedValue(::mojo::test::StructWithEnum_EnumWithin& slot, bool) {
    slot = static_cast<::mojo::test::StructWithEnum_EnumWithin>(-1000001);
  }
  static bool IsDeletedValue(const ::mojo::test::StructWithEnum_EnumWithin& value) {
    return value == static_cast<::mojo::test::StructWithEnum_EnumWithin>(-1000001);
  }
};
}  // namespace WTF


namespace mojo {
namespace test {
namespace blink {

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

  
  virtual void Method3(const WTF::Vector<bool>& param0) = 0;

  
  virtual void Method4(StructCPtr param0, const WTF::Vector<uint8_t>& param1) = 0;

  
  virtual void Method5(StructEPtr param0, mojo::ScopedDataPipeProducerHandle param1) = 0;

  
  virtual void Method6(const WTF::Vector<WTF::Vector<uint8_t>>& param0) = 0;

  
  virtual void Method7(StructFPtr param0, const WTF::Vector<base::Optional<WTF::Vector<uint8_t>>>& param1) = 0;

  
  virtual void Method8(const WTF::Vector<base::Optional<WTF::Vector<WTF::String>>>& param0) = 0;

  
  virtual void Method9(base::Optional<WTF::Vector<WTF::Vector<mojo::ScopedHandle>>> param0) = 0;

  
  virtual void Method10(const WTF::HashMap<WTF::String, uint8_t>& param0) = 0;

  
  virtual void Method11(StructGPtr param0) = 0;


  using Method12Callback = base::OnceCallback<void(float)>;
  
  virtual void Method12(float param0, Method12Callback callback) = 0;

  
  virtual void Method13(InterfaceAPtr param0, uint32_t param1, InterfaceAPtr param2) = 0;

  
  virtual void Method14(EnumA param0, EnumB param1) = 0;

  
  virtual void Method15(const base::Optional<WTF::Vector<EnumA>>& param0, const base::Optional<WTF::Vector<EnumB>>& param1) = 0;

  
  virtual void Method16(const base::Optional<WTF::HashMap<EnumA, EnumA>>& param0) = 0;

  
  virtual void Method17(WTF::Vector<mojo::PendingRemote<InterfaceA>> param0) = 0;

  
  virtual void Method18(UnionAPtr param0) = 0;

  
  virtual void Method19(RecursivePtr recursive) = 0;

  
  virtual void Method20(WTF::HashMap<StructBPtr, uint8_t> param0) = 0;

  
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


  using Method0Callback = base::OnceCallback<void(const WTF::Vector<uint8_t>&)>;
  
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
  void Method3(const WTF::Vector<bool>& param0) final;
  void Method4(StructCPtr param0, const WTF::Vector<uint8_t>& param1) final;
  void Method5(StructEPtr param0, mojo::ScopedDataPipeProducerHandle param1) final;
  void Method6(const WTF::Vector<WTF::Vector<uint8_t>>& param0) final;
  void Method7(StructFPtr param0, const WTF::Vector<base::Optional<WTF::Vector<uint8_t>>>& param1) final;
  void Method8(const WTF::Vector<base::Optional<WTF::Vector<WTF::String>>>& param0) final;
  void Method9(base::Optional<WTF::Vector<WTF::Vector<mojo::ScopedHandle>>> param0) final;
  void Method10(const WTF::HashMap<WTF::String, uint8_t>& param0) final;
  void Method11(StructGPtr param0) final;
  void Method12(float param0, Method12Callback callback) final;
  void Method13(InterfaceAPtr param0, uint32_t param1, InterfaceAPtr param2) final;
  void Method14(EnumA param0, EnumB param1) final;
  void Method15(const base::Optional<WTF::Vector<EnumA>>& param0, const base::Optional<WTF::Vector<EnumB>>& param1) final;
  void Method16(const base::Optional<WTF::HashMap<EnumA, EnumA>>& param0) final;
  void Method17(WTF::Vector<mojo::PendingRemote<InterfaceA>> param0) final;
  void Method18(UnionAPtr param0) final;
  void Method19(RecursivePtr recursive) final;
  void Method20(WTF::HashMap<StructBPtr, uint8_t> param0) final;
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructA::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BasicStruct::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructWithEnum::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructB::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
      const WTF::Vector<uint8_t>& data);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructC::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::Vector<uint8_t> data;

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
      WTF::Vector<mojo::ScopedMessagePipeHandle> message_pipes);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructD::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::Vector<mojo::ScopedMessagePipeHandle> message_pipes;

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructE::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
      const WTF::Vector<uint8_t>& fixed_size_array);

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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructF::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::Vector<uint8_t> fixed_size_array;

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
      const WTF::String& str,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructG::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
  
  WTF::String str;
  
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Recursive::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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


}  // namespace blink
}  // namespace test
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::test::blink::StructA::DataView,
                                         ::mojo::test::blink::StructAPtr> {
  static bool IsNull(const ::mojo::test::blink::StructAPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::StructAPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::StructA::i) i(
      const ::mojo::test::blink::StructAPtr& input) {
    return input->i;
  }

  static bool Read(::mojo::test::blink::StructA::DataView input, ::mojo::test::blink::StructAPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::StructB::DataView,
                                         ::mojo::test::blink::StructBPtr> {
  static bool IsNull(const ::mojo::test::blink::StructBPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::StructBPtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::StructB::struct_a)& struct_a(
      const ::mojo::test::blink::StructBPtr& input) {
    return input->struct_a;
  }

  static bool Read(::mojo::test::blink::StructB::DataView input, ::mojo::test::blink::StructBPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::StructC::DataView,
                                         ::mojo::test::blink::StructCPtr> {
  static bool IsNull(const ::mojo::test::blink::StructCPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::StructCPtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::StructC::data)& data(
      const ::mojo::test::blink::StructCPtr& input) {
    return input->data;
  }

  static bool Read(::mojo::test::blink::StructC::DataView input, ::mojo::test::blink::StructCPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::StructD::DataView,
                                         ::mojo::test::blink::StructDPtr> {
  static bool IsNull(const ::mojo::test::blink::StructDPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::StructDPtr* output) { output->reset(); }

  static  decltype(::mojo::test::blink::StructD::message_pipes)& message_pipes(
       ::mojo::test::blink::StructDPtr& input) {
    return input->message_pipes;
  }

  static bool Read(::mojo::test::blink::StructD::DataView input, ::mojo::test::blink::StructDPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::StructE::DataView,
                                         ::mojo::test::blink::StructEPtr> {
  static bool IsNull(const ::mojo::test::blink::StructEPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::StructEPtr* output) { output->reset(); }

  static  decltype(::mojo::test::blink::StructE::struct_d)& struct_d(
       ::mojo::test::blink::StructEPtr& input) {
    return input->struct_d;
  }

  static  decltype(::mojo::test::blink::StructE::data_pipe_consumer)& data_pipe_consumer(
       ::mojo::test::blink::StructEPtr& input) {
    return input->data_pipe_consumer;
  }

  static bool Read(::mojo::test::blink::StructE::DataView input, ::mojo::test::blink::StructEPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::StructF::DataView,
                                         ::mojo::test::blink::StructFPtr> {
  static bool IsNull(const ::mojo::test::blink::StructFPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::StructFPtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::StructF::fixed_size_array)& fixed_size_array(
      const ::mojo::test::blink::StructFPtr& input) {
    return input->fixed_size_array;
  }

  static bool Read(::mojo::test::blink::StructF::DataView input, ::mojo::test::blink::StructFPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::StructG::DataView,
                                         ::mojo::test::blink::StructGPtr> {
  static bool IsNull(const ::mojo::test::blink::StructGPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::StructGPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::StructG::i) i(
      const ::mojo::test::blink::StructGPtr& input) {
    return input->i;
  }

  static const decltype(::mojo::test::blink::StructG::struct_a)& struct_a(
      const ::mojo::test::blink::StructGPtr& input) {
    return input->struct_a;
  }

  static const decltype(::mojo::test::blink::StructG::str)& str(
      const ::mojo::test::blink::StructGPtr& input) {
    return input->str;
  }

  static decltype(::mojo::test::blink::StructG::b) b(
      const ::mojo::test::blink::StructGPtr& input) {
    return input->b;
  }

  static bool Read(::mojo::test::blink::StructG::DataView input, ::mojo::test::blink::StructGPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::BasicStruct::DataView,
                                         ::mojo::test::blink::BasicStructPtr> {
  static bool IsNull(const ::mojo::test::blink::BasicStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::BasicStructPtr* output) { output->reset(); }

  static decltype(::mojo::test::blink::BasicStruct::a) a(
      const ::mojo::test::blink::BasicStructPtr& input) {
    return input->a;
  }

  static bool Read(::mojo::test::blink::BasicStruct::DataView input, ::mojo::test::blink::BasicStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::StructWithEnum::DataView,
                                         ::mojo::test::blink::StructWithEnumPtr> {
  static bool IsNull(const ::mojo::test::blink::StructWithEnumPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::StructWithEnumPtr* output) { output->reset(); }

  static bool Read(::mojo::test::blink::StructWithEnum::DataView input, ::mojo::test::blink::StructWithEnumPtr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::Recursive::DataView,
                                         ::mojo::test::blink::RecursivePtr> {
  static bool IsNull(const ::mojo::test::blink::RecursivePtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::RecursivePtr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::Recursive::recursive)& recursive(
      const ::mojo::test::blink::RecursivePtr& input) {
    return input->recursive;
  }

  static bool Read(::mojo::test::blink::Recursive::DataView input, ::mojo::test::blink::RecursivePtr* output);
};


template <>
struct  UnionTraits<::mojo::test::blink::UnionA::DataView,
                                        ::mojo::test::blink::UnionAPtr> {
  static bool IsNull(const ::mojo::test::blink::UnionAPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::UnionAPtr* output) { output->reset(); }

  static ::mojo::test::blink::UnionA::Tag GetTag(const ::mojo::test::blink::UnionAPtr& input) {
    return input->which();
  }

  static const ::mojo::test::blink::StructAPtr& struct_a(const ::mojo::test::blink::UnionAPtr& input) {
    return input->get_struct_a();
  }

  static  bool b(const ::mojo::test::blink::UnionAPtr& input) {
    return input->get_b();
  }

  static bool Read(::mojo::test::blink::UnionA::DataView input, ::mojo::test::blink::UnionAPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_BLINK_H_