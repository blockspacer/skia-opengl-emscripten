// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_H_

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
#include "services/service_manager/public/mojom/connector.mojom-shared.h"
#include "services/service_manager/public/mojom/connector.mojom-forward.h"
#include "mojo/public/mojom/base/process_id.mojom.h"
#include "mojo/public/mojom/base/token.mojom.h"
#include "services/service_manager/public/mojom/constants.mojom.h"
#include "services/service_manager/public/mojom/interface_provider.mojom.h"
#include "services/service_manager/public/mojom/service_filter.mojom.h"
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
#include "services/service_manager/public/cpp/identity.h"
#include "base/component_export.h"




namespace service_manager {
namespace mojom {

class ProcessMetadataProxy;

template <typename ImplRefTraits>
class ProcessMetadataStub;

class ProcessMetadataRequestValidator;


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ProcessMetadata
    : public ProcessMetadataInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProcessMetadataInterfaceBase;
  using Proxy_ = ProcessMetadataProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProcessMetadataStub<ImplRefTraits>;

  using RequestValidator_ = ProcessMetadataRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetPIDMinVersion = 0,
  };
  virtual ~ProcessMetadata() {}

  
  virtual void SetPID(base::ProcessId pid) = 0;
};

class ConnectorProxy;

template <typename ImplRefTraits>
class ConnectorStub;

class ConnectorRequestValidator;
class ConnectorResponseValidator;


class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) Connector
    : public ConnectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ConnectorInterfaceBase;
  using Proxy_ = ConnectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = ConnectorStub<ImplRefTraits>;

  using RequestValidator_ = ConnectorRequestValidator;
  using ResponseValidator_ = ConnectorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kBindInterfaceMinVersion = 0,
    kQueryServiceMinVersion = 0,
    kWarmServiceMinVersion = 0,
    kRegisterServiceInstanceMinVersion = 0,
    kCloneMinVersion = 0,
    kFilterInterfacesMinVersion = 0,
  };
  virtual ~Connector() {}


  using BindInterfaceCallback = base::OnceCallback<void(ConnectResult, const base::Optional<::service_manager::Identity>&)>;
  
  virtual void BindInterface(const ::service_manager::ServiceFilter& filter, const std::string& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, BindInterfacePriority priority, BindInterfaceCallback callback) = 0;


  using QueryServiceCallback = base::OnceCallback<void(ServiceInfoPtr)>;
  
  virtual void QueryService(const std::string& service_name, QueryServiceCallback callback) = 0;


  using WarmServiceCallback = base::OnceCallback<void(ConnectResult, const base::Optional<::service_manager::Identity>&)>;
  
  virtual void WarmService(const ::service_manager::ServiceFilter& filter, WarmServiceCallback callback) = 0;


  using RegisterServiceInstanceCallback = base::OnceCallback<void(ConnectResult)>;
  
  virtual void RegisterServiceInstance(const ::service_manager::Identity& identity, mojo::ScopedMessagePipeHandle service, mojo::PendingReceiver<ProcessMetadata> metadata_receiver, RegisterServiceInstanceCallback callback) = 0;

  
  virtual void Clone(ConnectorRequest request) = 0;

  
  virtual void FilterInterfaces(const std::string& spec, const ::service_manager::Identity& source, ::service_manager::mojom::InterfaceProviderRequest source_request, ::service_manager::mojom::InterfaceProviderPtr target) = 0;
};

class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ProcessMetadataProxy
    : public ProcessMetadata {
 public:
  using InterfaceType = ProcessMetadata;

  explicit ProcessMetadataProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetPID(base::ProcessId pid) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ConnectorProxy
    : public Connector {
 public:
  using InterfaceType = Connector;

  explicit ConnectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void BindInterface(const ::service_manager::ServiceFilter& filter, const std::string& interface_name, mojo::ScopedMessagePipeHandle interface_pipe, BindInterfacePriority priority, BindInterfaceCallback callback) final;
  void QueryService(const std::string& service_name, QueryServiceCallback callback) final;
  void WarmService(const ::service_manager::ServiceFilter& filter, WarmServiceCallback callback) final;
  void RegisterServiceInstance(const ::service_manager::Identity& identity, mojo::ScopedMessagePipeHandle service, mojo::PendingReceiver<ProcessMetadata> metadata_receiver, RegisterServiceInstanceCallback callback) final;
  void Clone(ConnectorRequest request) final;
  void FilterInterfaces(const std::string& spec, const ::service_manager::Identity& source, ::service_manager::mojom::InterfaceProviderRequest source_request, ::service_manager::mojom::InterfaceProviderPtr target) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ProcessMetadataStubDispatch {
 public:
  static bool Accept(ProcessMetadata* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProcessMetadata* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProcessMetadata>>
class ProcessMetadataStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProcessMetadataStub() {}
  ~ProcessMetadataStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProcessMetadataStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProcessMetadataStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ConnectorStubDispatch {
 public:
  static bool Accept(Connector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Connector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Connector>>
class ConnectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ConnectorStub() {}
  ~ConnectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ConnectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ConnectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ProcessMetadataRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ConnectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ConnectorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ServiceInfo {
 public:
  using DataView = ServiceInfoDataView;
  using Data_ = internal::ServiceInfo_Data;

  template <typename... Args>
  static ServiceInfoPtr New(Args&&... args) {
    return ServiceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceInfoPtr From(const U& u) {
    return mojo::TypeConverter<ServiceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceInfo>::Convert(*this);
  }


  ServiceInfo();

  explicit ServiceInfo(
      const std::string& sandbox_type);

  ~ServiceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceInfoPtr>
  ServiceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceInfo_UnserializedMessageContext<
            UserType, ServiceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ServiceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceInfo_UnserializedMessageContext<
            UserType, ServiceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string sandbox_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) Identity {
 public:
  using DataView = IdentityDataView;
  using Data_ = internal::Identity_Data;

  template <typename... Args>
  static IdentityPtr New(Args&&... args) {
    return IdentityPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IdentityPtr From(const U& u) {
    return mojo::TypeConverter<IdentityPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Identity>::Convert(*this);
  }


  Identity();

  Identity(
      const std::string& name,
      const base::Token& instance_group,
      const base::Token& instance_id,
      const base::Token& globally_unique_id);

  ~Identity();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IdentityPtr>
  IdentityPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Identity>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Identity::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Identity::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Identity_UnserializedMessageContext<
            UserType, Identity::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Identity::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Identity::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Identity_UnserializedMessageContext<
            UserType, Identity::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Identity::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string name;
  
  base::Token instance_group;
  
  base::Token instance_id;
  
  base::Token globally_unique_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


template <typename StructPtrType>
IdentityPtr Identity::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(instance_group),
      mojo::Clone(instance_id),
      mojo::Clone(globally_unique_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Identity>::value>::type*>
bool Identity::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->instance_group, other_struct.instance_group))
    return false;
  if (!mojo::Equals(this->instance_id, other_struct.instance_id))
    return false;
  if (!mojo::Equals(this->globally_unique_id, other_struct.globally_unique_id))
    return false;
  return true;
}
template <typename StructPtrType>
ServiceInfoPtr ServiceInfo::Clone() const {
  return New(
      mojo::Clone(sandbox_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceInfo>::value>::type*>
bool ServiceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->sandbox_type, other_struct.sandbox_type))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace service_manager

namespace mojo {


template <>
struct COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) StructTraits<::service_manager::mojom::Identity::DataView,
                                         ::service_manager::mojom::IdentityPtr> {
  static bool IsNull(const ::service_manager::mojom::IdentityPtr& input) { return !input; }
  static void SetToNull(::service_manager::mojom::IdentityPtr* output) { output->reset(); }

  static const decltype(::service_manager::mojom::Identity::name)& name(
      const ::service_manager::mojom::IdentityPtr& input) {
    return input->name;
  }

  static const decltype(::service_manager::mojom::Identity::instance_group)& instance_group(
      const ::service_manager::mojom::IdentityPtr& input) {
    return input->instance_group;
  }

  static const decltype(::service_manager::mojom::Identity::instance_id)& instance_id(
      const ::service_manager::mojom::IdentityPtr& input) {
    return input->instance_id;
  }

  static const decltype(::service_manager::mojom::Identity::globally_unique_id)& globally_unique_id(
      const ::service_manager::mojom::IdentityPtr& input) {
    return input->globally_unique_id;
  }

  static bool Read(::service_manager::mojom::Identity::DataView input, ::service_manager::mojom::IdentityPtr* output);
};


template <>
struct COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) StructTraits<::service_manager::mojom::ServiceInfo::DataView,
                                         ::service_manager::mojom::ServiceInfoPtr> {
  static bool IsNull(const ::service_manager::mojom::ServiceInfoPtr& input) { return !input; }
  static void SetToNull(::service_manager::mojom::ServiceInfoPtr* output) { output->reset(); }

  static const decltype(::service_manager::mojom::ServiceInfo::sandbox_type)& sandbox_type(
      const ::service_manager::mojom::ServiceInfoPtr& input) {
    return input->sandbox_type;
  }

  static bool Read(::service_manager::mojom::ServiceInfo::DataView input, ::service_manager::mojom::ServiceInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_H_