// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_BLINK_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_BLINK_H_

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
#include "services/service_manager/public/mojom/service_manager.mojom-shared.h"
#include "services/service_manager/public/mojom/service_manager.mojom-blink-forward.h"
#include "services/service_manager/public/mojom/connector.mojom-blink.h"

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
#include "base/component_export.h"




namespace WTF {
struct service_manager_mojom_internal_InstanceState_DataHashFn {
  static unsigned GetHash(const ::service_manager::mojom::InstanceState& value) {
    using utype = std::underlying_type<::service_manager::mojom::InstanceState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::service_manager::mojom::InstanceState& left, const ::service_manager::mojom::InstanceState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::service_manager::mojom::InstanceState>
    : public GenericHashTraits<::service_manager::mojom::InstanceState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::service_manager::mojom::InstanceState& value) {
    return value == static_cast<::service_manager::mojom::InstanceState>(-1000000);
  }
  static void ConstructDeletedValue(::service_manager::mojom::InstanceState& slot, bool) {
    slot = static_cast<::service_manager::mojom::InstanceState>(-1000001);
  }
  static bool IsDeletedValue(const ::service_manager::mojom::InstanceState& value) {
    return value == static_cast<::service_manager::mojom::InstanceState>(-1000001);
  }
};
}  // namespace WTF


namespace service_manager {
namespace mojom {
namespace blink {

class ServiceManagerListenerProxy;

template <typename ImplRefTraits>
class ServiceManagerListenerStub;

class ServiceManagerListenerRequestValidator;


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceManagerListener
    : public ServiceManagerListenerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceManagerListenerInterfaceBase;
  using Proxy_ = ServiceManagerListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceManagerListenerStub<ImplRefTraits>;

  using RequestValidator_ = ServiceManagerListenerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnInitMinVersion = 0,
    kOnServiceCreatedMinVersion = 0,
    kOnServiceStartedMinVersion = 0,
    kOnServicePIDReceivedMinVersion = 0,
    kOnServiceFailedToStartMinVersion = 0,
    kOnServiceStoppedMinVersion = 0,
  };
  virtual ~ServiceManagerListener() {}

  
  virtual void OnInit(WTF::Vector<RunningServiceInfoPtr> running_services) = 0;

  
  virtual void OnServiceCreated(RunningServiceInfoPtr service) = 0;

  
  virtual void OnServiceStarted(::service_manager::mojom::blink::IdentityPtr identity, uint32_t pid_deprecated) = 0;

  
  virtual void OnServicePIDReceived(::service_manager::mojom::blink::IdentityPtr identity, uint32_t pid) = 0;

  
  virtual void OnServiceFailedToStart(::service_manager::mojom::blink::IdentityPtr identity) = 0;

  
  virtual void OnServiceStopped(::service_manager::mojom::blink::IdentityPtr identity) = 0;
};

class ServiceManagerProxy;

template <typename ImplRefTraits>
class ServiceManagerStub;

class ServiceManagerRequestValidator;


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceManager
    : public ServiceManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceManagerInterfaceBase;
  using Proxy_ = ServiceManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceManagerStub<ImplRefTraits>;

  using RequestValidator_ = ServiceManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddListenerMinVersion = 0,
  };
  virtual ~ServiceManager() {}

  
  virtual void AddListener(ServiceManagerListenerPtr listener) = 0;
};

class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceManagerListenerProxy
    : public ServiceManagerListener {
 public:
  using InterfaceType = ServiceManagerListener;

  explicit ServiceManagerListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnInit(WTF::Vector<RunningServiceInfoPtr> running_services) final;
  void OnServiceCreated(RunningServiceInfoPtr service) final;
  void OnServiceStarted(::service_manager::mojom::blink::IdentityPtr identity, uint32_t pid_deprecated) final;
  void OnServicePIDReceived(::service_manager::mojom::blink::IdentityPtr identity, uint32_t pid) final;
  void OnServiceFailedToStart(::service_manager::mojom::blink::IdentityPtr identity) final;
  void OnServiceStopped(::service_manager::mojom::blink::IdentityPtr identity) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceManagerProxy
    : public ServiceManager {
 public:
  using InterfaceType = ServiceManager;

  explicit ServiceManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddListener(ServiceManagerListenerPtr listener) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceManagerListenerStubDispatch {
 public:
  static bool Accept(ServiceManagerListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceManagerListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceManagerListener>>
class ServiceManagerListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceManagerListenerStub() {}
  ~ServiceManagerListenerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceManagerListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceManagerListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceManagerStubDispatch {
 public:
  static bool Accept(ServiceManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceManager>>
class ServiceManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceManagerStub() {}
  ~ServiceManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceManagerListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) RunningServiceInfo {
 public:
  using DataView = RunningServiceInfoDataView;
  using Data_ = internal::RunningServiceInfo_Data;

  template <typename... Args>
  static RunningServiceInfoPtr New(Args&&... args) {
    return RunningServiceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RunningServiceInfoPtr From(const U& u) {
    return mojo::TypeConverter<RunningServiceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunningServiceInfo>::Convert(*this);
  }


  RunningServiceInfo();

  RunningServiceInfo(
      ::service_manager::mojom::blink::IdentityPtr identity,
      uint32_t pid,
      InstanceState state);

  ~RunningServiceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RunningServiceInfoPtr>
  RunningServiceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunningServiceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RunningServiceInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RunningServiceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RunningServiceInfo_UnserializedMessageContext<
            UserType, RunningServiceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RunningServiceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return RunningServiceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RunningServiceInfo_UnserializedMessageContext<
            UserType, RunningServiceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RunningServiceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::service_manager::mojom::blink::IdentityPtr identity;
  
  uint32_t pid;
  
  InstanceState state;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RunningServiceInfo);
};

template <typename StructPtrType>
RunningServiceInfoPtr RunningServiceInfo::Clone() const {
  return New(
      mojo::Clone(identity),
      mojo::Clone(pid),
      mojo::Clone(state)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunningServiceInfo>::value>::type*>
bool RunningServiceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->identity, other_struct.identity))
    return false;
  if (!mojo::Equals(this->pid, other_struct.pid))
    return false;
  if (!mojo::Equals(this->state, other_struct.state))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

namespace mojo {


template <>
struct COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) StructTraits<::service_manager::mojom::blink::RunningServiceInfo::DataView,
                                         ::service_manager::mojom::blink::RunningServiceInfoPtr> {
  static bool IsNull(const ::service_manager::mojom::blink::RunningServiceInfoPtr& input) { return !input; }
  static void SetToNull(::service_manager::mojom::blink::RunningServiceInfoPtr* output) { output->reset(); }

  static const decltype(::service_manager::mojom::blink::RunningServiceInfo::identity)& identity(
      const ::service_manager::mojom::blink::RunningServiceInfoPtr& input) {
    return input->identity;
  }

  static decltype(::service_manager::mojom::blink::RunningServiceInfo::pid) pid(
      const ::service_manager::mojom::blink::RunningServiceInfoPtr& input) {
    return input->pid;
  }

  static decltype(::service_manager::mojom::blink::RunningServiceInfo::state) state(
      const ::service_manager::mojom::blink::RunningServiceInfoPtr& input) {
    return input->state;
  }

  static bool Read(::service_manager::mojom::blink::RunningServiceInfo::DataView input, ::service_manager::mojom::blink::RunningServiceInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_BLINK_H_