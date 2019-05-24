// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_BLINK_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_BLINK_H_

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
#include "services/service_manager/public/mojom/service.mojom-shared.h"
#include "services/service_manager/public/mojom/service.mojom-blink-forward.h"
#include "mojo/public/mojom/base/process_id.mojom-blink.h"
#include "services/service_manager/public/mojom/connector.mojom-blink.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-blink.h"
#include "services/service_manager/public/mojom/interface_provider_spec.mojom-blink.h"
#include "services/service_manager/public/mojom/service_control.mojom-blink.h"

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




namespace service_manager {
namespace mojom {
namespace blink {

class ServiceProxy;

template <typename ImplRefTraits>
class ServiceStub;

class ServiceRequestValidator;
class ServiceResponseValidator;


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) Service
    : public ServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceInterfaceBase;
  using Proxy_ = ServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceStub<ImplRefTraits>;

  using RequestValidator_ = ServiceRequestValidator;
  using ResponseValidator_ = ServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnStartMinVersion = 0,
    kOnBindInterfaceMinVersion = 0,
    kCreatePackagedServiceInstanceMinVersion = 0,
  };
  virtual ~Service() {}


  using OnStartCallback = base::OnceCallback<void(::service_manager::mojom::blink::ConnectorRequest, ::service_manager::mojom::blink::ServiceControlAssociatedRequest)>;
  
  virtual void OnStart(::service_manager::mojom::blink::IdentityPtr identity, OnStartCallback callback) = 0;


  using OnBindInterfaceCallback = base::OnceCallback<void()>;
  
  virtual void OnBindInterface(BindSourceInfoPtr source, const WTF::String& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, OnBindInterfaceCallback callback) = 0;

  
  virtual void CreatePackagedServiceInstance(::service_manager::mojom::blink::IdentityPtr identity, mojo::PendingReceiver<Service> receiver, mojo::PendingRemote<::service_manager::mojom::blink::ProcessMetadata> metadata) = 0;
};

class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceProxy
    : public Service {
 public:
  using InterfaceType = Service;

  explicit ServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnStart(::service_manager::mojom::blink::IdentityPtr identity, OnStartCallback callback) final;
  void OnBindInterface(BindSourceInfoPtr source, const WTF::String& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, OnBindInterfaceCallback callback) final;
  void CreatePackagedServiceInstance(::service_manager::mojom::blink::IdentityPtr identity, mojo::PendingReceiver<Service> receiver, mojo::PendingRemote<::service_manager::mojom::blink::ProcessMetadata> metadata) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceStubDispatch {
 public:
  static bool Accept(Service* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Service* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Service>>
class ServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceStub() {}
  ~ServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) ServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) BindSourceInfo {
 public:
  using DataView = BindSourceInfoDataView;
  using Data_ = internal::BindSourceInfo_Data;

  template <typename... Args>
  static BindSourceInfoPtr New(Args&&... args) {
    return BindSourceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BindSourceInfoPtr From(const U& u) {
    return mojo::TypeConverter<BindSourceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BindSourceInfo>::Convert(*this);
  }


  BindSourceInfo();

  BindSourceInfo(
      ::service_manager::mojom::blink::IdentityPtr identity,
      ::service_manager::mojom::blink::CapabilitySetPtr required_capabilities);

  ~BindSourceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BindSourceInfoPtr>
  BindSourceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BindSourceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BindSourceInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BindSourceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BindSourceInfo_UnserializedMessageContext<
            UserType, BindSourceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BindSourceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BindSourceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BindSourceInfo_UnserializedMessageContext<
            UserType, BindSourceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BindSourceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::service_manager::mojom::blink::IdentityPtr identity;
  
  ::service_manager::mojom::blink::CapabilitySetPtr required_capabilities;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(BindSourceInfo);
};

template <typename StructPtrType>
BindSourceInfoPtr BindSourceInfo::Clone() const {
  return New(
      mojo::Clone(identity),
      mojo::Clone(required_capabilities)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BindSourceInfo>::value>::type*>
bool BindSourceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->identity, other_struct.identity))
    return false;
  if (!mojo::Equals(this->required_capabilities, other_struct.required_capabilities))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

namespace mojo {


template <>
struct COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_BLINK) StructTraits<::service_manager::mojom::blink::BindSourceInfo::DataView,
                                         ::service_manager::mojom::blink::BindSourceInfoPtr> {
  static bool IsNull(const ::service_manager::mojom::blink::BindSourceInfoPtr& input) { return !input; }
  static void SetToNull(::service_manager::mojom::blink::BindSourceInfoPtr* output) { output->reset(); }

  static const decltype(::service_manager::mojom::blink::BindSourceInfo::identity)& identity(
      const ::service_manager::mojom::blink::BindSourceInfoPtr& input) {
    return input->identity;
  }

  static const decltype(::service_manager::mojom::blink::BindSourceInfo::required_capabilities)& required_capabilities(
      const ::service_manager::mojom::blink::BindSourceInfoPtr& input) {
    return input->required_capabilities;
  }

  static bool Read(::service_manager::mojom::blink::BindSourceInfo::DataView input, ::service_manager::mojom::blink::BindSourceInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_BLINK_H_