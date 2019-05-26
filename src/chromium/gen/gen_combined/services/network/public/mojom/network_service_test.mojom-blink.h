// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/network_service_test.mojom-shared.h"
#include "services/network/public/mojom/network_service_test.mojom-blink-forward.h"
#include "mojo/public/mojom/base/memory_pressure_level.mojom-blink.h"
#include "services/network/public/mojom/network_change_manager.mojom-blink.h"
#include "services/network/public/mojom/network_param.mojom-blink.h"
#include "services/network/public/mojom/network_types.mojom-blink.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct network_mojom_internal_ResolverType_DataHashFn {
  static unsigned GetHash(const ::network::mojom::ResolverType& value) {
    using utype = std::underlying_type<::network::mojom::ResolverType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::ResolverType& left, const ::network::mojom::ResolverType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::ResolverType>
    : public GenericHashTraits<::network::mojom::ResolverType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::ResolverType& value) {
    return value == static_cast<::network::mojom::ResolverType>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::ResolverType& slot, bool) {
    slot = static_cast<::network::mojom::ResolverType>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::ResolverType& value) {
    return value == static_cast<::network::mojom::ResolverType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct network_mojom_internal_NetworkServiceTest_ShouldRequireCT_DataHashFn {
  static unsigned GetHash(const ::network::mojom::NetworkServiceTest_ShouldRequireCT& value) {
    using utype = std::underlying_type<::network::mojom::NetworkServiceTest_ShouldRequireCT>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::NetworkServiceTest_ShouldRequireCT& left, const ::network::mojom::NetworkServiceTest_ShouldRequireCT& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::NetworkServiceTest_ShouldRequireCT>
    : public GenericHashTraits<::network::mojom::NetworkServiceTest_ShouldRequireCT> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::NetworkServiceTest_ShouldRequireCT& value) {
    return value == static_cast<::network::mojom::NetworkServiceTest_ShouldRequireCT>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::NetworkServiceTest_ShouldRequireCT& slot, bool) {
    slot = static_cast<::network::mojom::NetworkServiceTest_ShouldRequireCT>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::NetworkServiceTest_ShouldRequireCT& value) {
    return value == static_cast<::network::mojom::NetworkServiceTest_ShouldRequireCT>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {

class NetworkServiceTestProxy;

template <typename ImplRefTraits>
class NetworkServiceTestStub;

class NetworkServiceTestRequestValidator;
class NetworkServiceTestResponseValidator;


class BLINK_PLATFORM_EXPORT NetworkServiceTest
    : public NetworkServiceTestInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = NetworkServiceTestInterfaceBase;
  using Proxy_ = NetworkServiceTestProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkServiceTestStub<ImplRefTraits>;

  using RequestValidator_ = NetworkServiceTestRequestValidator;
  using ResponseValidator_ = NetworkServiceTestResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAddRulesMinVersion = 0,
    kSimulateNetworkChangeMinVersion = 0,
    kSimulateNetworkQualityChangeMinVersion = 0,
    kSimulateCrashMinVersion = 0,
    kMockCertVerifierSetDefaultResultMinVersion = 0,
    kMockCertVerifierAddResultForCertAndHostMinVersion = 0,
    kSetShouldRequireCTMinVersion = 0,
    kSetTransportSecurityStateSourceMinVersion = 0,
    kCrashOnResolveHostMinVersion = 0,
    kCrashOnGetCookieListMinVersion = 0,
    kGetLatestMemoryPressureLevelMinVersion = 0,
    kGetEnvironmentVariableValueMinVersion = 0,
  };
  
  using ShouldRequireCT = NetworkServiceTest_ShouldRequireCT;
  virtual ~NetworkServiceTest() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool AddRules(WTF::Vector<RulePtr> rules);

  using AddRulesCallback = base::OnceCallback<void()>;
  
  virtual void AddRules(WTF::Vector<RulePtr> rules, AddRulesCallback callback) = 0;


  using SimulateNetworkChangeCallback = base::OnceCallback<void()>;
  
  virtual void SimulateNetworkChange(::network::mojom::blink::ConnectionType type, SimulateNetworkChangeCallback callback) = 0;


  using SimulateNetworkQualityChangeCallback = base::OnceCallback<void()>;
  
  virtual void SimulateNetworkQualityChange(::network::mojom::blink::EffectiveConnectionType type, SimulateNetworkQualityChangeCallback callback) = 0;

  
  virtual void SimulateCrash() = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool MockCertVerifierSetDefaultResult(int32_t default_result);

  using MockCertVerifierSetDefaultResultCallback = base::OnceCallback<void()>;
  
  virtual void MockCertVerifierSetDefaultResult(int32_t default_result, MockCertVerifierSetDefaultResultCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool MockCertVerifierAddResultForCertAndHost(::network::mojom::blink::X509CertificatePtr cert, const WTF::String& host_pattern, ::network::mojom::blink::CertVerifyResultPtr verify_result, int32_t rv);

  using MockCertVerifierAddResultForCertAndHostCallback = base::OnceCallback<void()>;
  
  virtual void MockCertVerifierAddResultForCertAndHost(::network::mojom::blink::X509CertificatePtr cert, const WTF::String& host_pattern, ::network::mojom::blink::CertVerifyResultPtr verify_result, int32_t rv, MockCertVerifierAddResultForCertAndHostCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool SetShouldRequireCT(NetworkServiceTest::ShouldRequireCT required);

  using SetShouldRequireCTCallback = base::OnceCallback<void()>;
  
  virtual void SetShouldRequireCT(NetworkServiceTest::ShouldRequireCT required, SetShouldRequireCTCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool SetTransportSecurityStateSource(uint16_t reporting_port);

  using SetTransportSecurityStateSourceCallback = base::OnceCallback<void()>;
  
  virtual void SetTransportSecurityStateSource(uint16_t reporting_port, SetTransportSecurityStateSourceCallback callback) = 0;

  
  virtual void CrashOnResolveHost(const WTF::String& host) = 0;

  
  virtual void CrashOnGetCookieList() = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetLatestMemoryPressureLevel(::mojo_base::mojom::blink::MemoryPressureLevel* out_memory_pressure_level);

  using GetLatestMemoryPressureLevelCallback = base::OnceCallback<void(::mojo_base::mojom::blink::MemoryPressureLevel)>;
  
  virtual void GetLatestMemoryPressureLevel(GetLatestMemoryPressureLevelCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetEnvironmentVariableValue(const WTF::String& name, WTF::String* out_value);

  using GetEnvironmentVariableValueCallback = base::OnceCallback<void(const WTF::String&)>;
  
  virtual void GetEnvironmentVariableValue(const WTF::String& name, GetEnvironmentVariableValueCallback callback) = 0;
};

class BLINK_PLATFORM_EXPORT NetworkServiceTestProxy
    : public NetworkServiceTest {
 public:
  using InterfaceType = NetworkServiceTest;

  explicit NetworkServiceTestProxy(mojo::MessageReceiverWithResponder* receiver);
  bool AddRules(WTF::Vector<RulePtr> rules) final;
  void AddRules(WTF::Vector<RulePtr> rules, AddRulesCallback callback) final;
  void SimulateNetworkChange(::network::mojom::blink::ConnectionType type, SimulateNetworkChangeCallback callback) final;
  void SimulateNetworkQualityChange(::network::mojom::blink::EffectiveConnectionType type, SimulateNetworkQualityChangeCallback callback) final;
  void SimulateCrash() final;
  bool MockCertVerifierSetDefaultResult(int32_t default_result) final;
  void MockCertVerifierSetDefaultResult(int32_t default_result, MockCertVerifierSetDefaultResultCallback callback) final;
  bool MockCertVerifierAddResultForCertAndHost(::network::mojom::blink::X509CertificatePtr cert, const WTF::String& host_pattern, ::network::mojom::blink::CertVerifyResultPtr verify_result, int32_t rv) final;
  void MockCertVerifierAddResultForCertAndHost(::network::mojom::blink::X509CertificatePtr cert, const WTF::String& host_pattern, ::network::mojom::blink::CertVerifyResultPtr verify_result, int32_t rv, MockCertVerifierAddResultForCertAndHostCallback callback) final;
  bool SetShouldRequireCT(NetworkServiceTest::ShouldRequireCT required) final;
  void SetShouldRequireCT(NetworkServiceTest::ShouldRequireCT required, SetShouldRequireCTCallback callback) final;
  bool SetTransportSecurityStateSource(uint16_t reporting_port) final;
  void SetTransportSecurityStateSource(uint16_t reporting_port, SetTransportSecurityStateSourceCallback callback) final;
  void CrashOnResolveHost(const WTF::String& host) final;
  void CrashOnGetCookieList() final;
  bool GetLatestMemoryPressureLevel(::mojo_base::mojom::blink::MemoryPressureLevel* out_memory_pressure_level) final;
  void GetLatestMemoryPressureLevel(GetLatestMemoryPressureLevelCallback callback) final;
  bool GetEnvironmentVariableValue(const WTF::String& name, WTF::String* out_value) final;
  void GetEnvironmentVariableValue(const WTF::String& name, GetEnvironmentVariableValueCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT NetworkServiceTestStubDispatch {
 public:
  static bool Accept(NetworkServiceTest* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkServiceTest* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkServiceTest>>
class NetworkServiceTestStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkServiceTestStub() {}
  ~NetworkServiceTestStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkServiceTestStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkServiceTestStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT NetworkServiceTestRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceTestResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class BLINK_PLATFORM_EXPORT Rule {
 public:
  using DataView = RuleDataView;
  using Data_ = internal::Rule_Data;

  template <typename... Args>
  static RulePtr New(Args&&... args) {
    return RulePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RulePtr From(const U& u) {
    return mojo::TypeConverter<RulePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Rule>::Convert(*this);
  }


  Rule();

  Rule(
      ResolverType resolver_type,
      const WTF::String& host_pattern,
      const WTF::String& replacement);

  ~Rule();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RulePtr>
  RulePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Rule>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Rule::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Rule::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Rule_UnserializedMessageContext<
            UserType, Rule::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Rule::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Rule::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Rule_UnserializedMessageContext<
            UserType, Rule::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Rule::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ResolverType resolver_type;
  
  WTF::String host_pattern;
  
  WTF::String replacement;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
RulePtr Rule::Clone() const {
  return New(
      mojo::Clone(resolver_type),
      mojo::Clone(host_pattern),
      mojo::Clone(replacement)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Rule>::value>::type*>
bool Rule::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->resolver_type, other_struct.resolver_type))
    return false;
  if (!mojo::Equals(this->host_pattern, other_struct.host_pattern))
    return false;
  if (!mojo::Equals(this->replacement, other_struct.replacement))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::Rule::DataView,
                                         ::network::mojom::blink::RulePtr> {
  static bool IsNull(const ::network::mojom::blink::RulePtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::RulePtr* output) { output->reset(); }

  static decltype(::network::mojom::blink::Rule::resolver_type) resolver_type(
      const ::network::mojom::blink::RulePtr& input) {
    return input->resolver_type;
  }

  static const decltype(::network::mojom::blink::Rule::host_pattern)& host_pattern(
      const ::network::mojom::blink::RulePtr& input) {
    return input->host_pattern;
  }

  static const decltype(::network::mojom::blink::Rule::replacement)& replacement(
      const ::network::mojom::blink::RulePtr& input) {
    return input->replacement;
  }

  static bool Read(::network::mojom::blink::Rule::DataView input, ::network::mojom::blink::RulePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_BLINK_H_