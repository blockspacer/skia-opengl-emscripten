// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-forward.h"
#include "url/mojom/url.mojom.h"
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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class ServiceWorkerInstalledScriptsManagerHostProxy;

template <typename ImplRefTraits>
class ServiceWorkerInstalledScriptsManagerHostStub;

class ServiceWorkerInstalledScriptsManagerHostRequestValidator;


class BLINK_COMMON_EXPORT ServiceWorkerInstalledScriptsManagerHost
    : public ServiceWorkerInstalledScriptsManagerHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceWorkerInstalledScriptsManagerHostInterfaceBase;
  using Proxy_ = ServiceWorkerInstalledScriptsManagerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerInstalledScriptsManagerHostStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerInstalledScriptsManagerHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRequestInstalledScriptMinVersion = 0,
  };
  virtual ~ServiceWorkerInstalledScriptsManagerHost() {}

  
  virtual void RequestInstalledScript(const GURL& script_url) = 0;
};

class ServiceWorkerInstalledScriptsManagerProxy;

template <typename ImplRefTraits>
class ServiceWorkerInstalledScriptsManagerStub;

class ServiceWorkerInstalledScriptsManagerRequestValidator;


class BLINK_COMMON_EXPORT ServiceWorkerInstalledScriptsManager
    : public ServiceWorkerInstalledScriptsManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceWorkerInstalledScriptsManagerInterfaceBase;
  using Proxy_ = ServiceWorkerInstalledScriptsManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerInstalledScriptsManagerStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerInstalledScriptsManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kTransferInstalledScriptMinVersion = 0,
  };
  virtual ~ServiceWorkerInstalledScriptsManager() {}

  
  virtual void TransferInstalledScript(ServiceWorkerScriptInfoPtr script_info) = 0;
};

class BLINK_COMMON_EXPORT ServiceWorkerInstalledScriptsManagerHostProxy
    : public ServiceWorkerInstalledScriptsManagerHost {
 public:
  using InterfaceType = ServiceWorkerInstalledScriptsManagerHost;

  explicit ServiceWorkerInstalledScriptsManagerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestInstalledScript(const GURL& script_url) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT ServiceWorkerInstalledScriptsManagerProxy
    : public ServiceWorkerInstalledScriptsManager {
 public:
  using InterfaceType = ServiceWorkerInstalledScriptsManager;

  explicit ServiceWorkerInstalledScriptsManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void TransferInstalledScript(ServiceWorkerScriptInfoPtr script_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT ServiceWorkerInstalledScriptsManagerHostStubDispatch {
 public:
  static bool Accept(ServiceWorkerInstalledScriptsManagerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerInstalledScriptsManagerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerInstalledScriptsManagerHost>>
class ServiceWorkerInstalledScriptsManagerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerInstalledScriptsManagerHostStub() {}
  ~ServiceWorkerInstalledScriptsManagerHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerInstalledScriptsManagerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerInstalledScriptsManagerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT ServiceWorkerInstalledScriptsManagerStubDispatch {
 public:
  static bool Accept(ServiceWorkerInstalledScriptsManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerInstalledScriptsManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerInstalledScriptsManager>>
class ServiceWorkerInstalledScriptsManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerInstalledScriptsManagerStub() {}
  ~ServiceWorkerInstalledScriptsManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerInstalledScriptsManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerInstalledScriptsManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT ServiceWorkerInstalledScriptsManagerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerInstalledScriptsManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class BLINK_COMMON_EXPORT ServiceWorkerInstalledScriptsInfo {
 public:
  using DataView = ServiceWorkerInstalledScriptsInfoDataView;
  using Data_ = internal::ServiceWorkerInstalledScriptsInfo_Data;

  template <typename... Args>
  static ServiceWorkerInstalledScriptsInfoPtr New(Args&&... args) {
    return ServiceWorkerInstalledScriptsInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceWorkerInstalledScriptsInfoPtr From(const U& u) {
    return mojo::TypeConverter<ServiceWorkerInstalledScriptsInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceWorkerInstalledScriptsInfo>::Convert(*this);
  }


  ServiceWorkerInstalledScriptsInfo();

  ServiceWorkerInstalledScriptsInfo(
      ServiceWorkerInstalledScriptsManagerRequest manager_request,
      ServiceWorkerInstalledScriptsManagerHostPtrInfo manager_host_ptr,
      const std::vector<GURL>& installed_urls);

  ~ServiceWorkerInstalledScriptsInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceWorkerInstalledScriptsInfoPtr>
  ServiceWorkerInstalledScriptsInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceWorkerInstalledScriptsInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerInstalledScriptsInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceWorkerInstalledScriptsInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceWorkerInstalledScriptsInfo_UnserializedMessageContext<
            UserType, ServiceWorkerInstalledScriptsInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceWorkerInstalledScriptsInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ServiceWorkerInstalledScriptsInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceWorkerInstalledScriptsInfo_UnserializedMessageContext<
            UserType, ServiceWorkerInstalledScriptsInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceWorkerInstalledScriptsInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ServiceWorkerInstalledScriptsManagerRequest manager_request;
  
  ServiceWorkerInstalledScriptsManagerHostPtrInfo manager_host_ptr;
  
  std::vector<GURL> installed_urls;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerInstalledScriptsInfo);
};





class BLINK_COMMON_EXPORT ServiceWorkerScriptInfo {
 public:
  using DataView = ServiceWorkerScriptInfoDataView;
  using Data_ = internal::ServiceWorkerScriptInfo_Data;

  template <typename... Args>
  static ServiceWorkerScriptInfoPtr New(Args&&... args) {
    return ServiceWorkerScriptInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceWorkerScriptInfoPtr From(const U& u) {
    return mojo::TypeConverter<ServiceWorkerScriptInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceWorkerScriptInfo>::Convert(*this);
  }


  ServiceWorkerScriptInfo();

  ServiceWorkerScriptInfo(
      const GURL& script_url,
      const std::string& encoding,
      const base::flat_map<std::string, std::string>& headers,
      mojo::ScopedDataPipeConsumerHandle body,
      uint64_t body_size,
      mojo::ScopedDataPipeConsumerHandle meta_data,
      uint64_t meta_data_size);

  ~ServiceWorkerScriptInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceWorkerScriptInfoPtr>
  ServiceWorkerScriptInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceWorkerScriptInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerScriptInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceWorkerScriptInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceWorkerScriptInfo_UnserializedMessageContext<
            UserType, ServiceWorkerScriptInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceWorkerScriptInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ServiceWorkerScriptInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceWorkerScriptInfo_UnserializedMessageContext<
            UserType, ServiceWorkerScriptInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceWorkerScriptInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  GURL script_url;
  
  std::string encoding;
  
  base::flat_map<std::string, std::string> headers;
  
  mojo::ScopedDataPipeConsumerHandle body;
  
  uint64_t body_size;
  
  mojo::ScopedDataPipeConsumerHandle meta_data;
  
  uint64_t meta_data_size;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerScriptInfo);
};

template <typename StructPtrType>
ServiceWorkerInstalledScriptsInfoPtr ServiceWorkerInstalledScriptsInfo::Clone() const {
  return New(
      mojo::Clone(manager_request),
      mojo::Clone(manager_host_ptr),
      mojo::Clone(installed_urls)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceWorkerInstalledScriptsInfo>::value>::type*>
bool ServiceWorkerInstalledScriptsInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->manager_request, other_struct.manager_request))
    return false;
  if (!mojo::Equals(this->manager_host_ptr, other_struct.manager_host_ptr))
    return false;
  if (!mojo::Equals(this->installed_urls, other_struct.installed_urls))
    return false;
  return true;
}
template <typename StructPtrType>
ServiceWorkerScriptInfoPtr ServiceWorkerScriptInfo::Clone() const {
  return New(
      mojo::Clone(script_url),
      mojo::Clone(encoding),
      mojo::Clone(headers),
      mojo::Clone(body),
      mojo::Clone(body_size),
      mojo::Clone(meta_data),
      mojo::Clone(meta_data_size)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceWorkerScriptInfo>::value>::type*>
bool ServiceWorkerScriptInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->script_url, other_struct.script_url))
    return false;
  if (!mojo::Equals(this->encoding, other_struct.encoding))
    return false;
  if (!mojo::Equals(this->headers, other_struct.headers))
    return false;
  if (!mojo::Equals(this->body, other_struct.body))
    return false;
  if (!mojo::Equals(this->body_size, other_struct.body_size))
    return false;
  if (!mojo::Equals(this->meta_data, other_struct.meta_data))
    return false;
  if (!mojo::Equals(this->meta_data_size, other_struct.meta_data_size))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ServiceWorkerInstalledScriptsInfo::DataView,
                                         ::blink::mojom::ServiceWorkerInstalledScriptsInfoPtr> {
  static bool IsNull(const ::blink::mojom::ServiceWorkerInstalledScriptsInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ServiceWorkerInstalledScriptsInfoPtr* output) { output->reset(); }

  static  decltype(::blink::mojom::ServiceWorkerInstalledScriptsInfo::manager_request)& manager_request(
       ::blink::mojom::ServiceWorkerInstalledScriptsInfoPtr& input) {
    return input->manager_request;
  }

  static  decltype(::blink::mojom::ServiceWorkerInstalledScriptsInfo::manager_host_ptr)& manager_host_ptr(
       ::blink::mojom::ServiceWorkerInstalledScriptsInfoPtr& input) {
    return input->manager_host_ptr;
  }

  static const decltype(::blink::mojom::ServiceWorkerInstalledScriptsInfo::installed_urls)& installed_urls(
      const ::blink::mojom::ServiceWorkerInstalledScriptsInfoPtr& input) {
    return input->installed_urls;
  }

  static bool Read(::blink::mojom::ServiceWorkerInstalledScriptsInfo::DataView input, ::blink::mojom::ServiceWorkerInstalledScriptsInfoPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ServiceWorkerScriptInfo::DataView,
                                         ::blink::mojom::ServiceWorkerScriptInfoPtr> {
  static bool IsNull(const ::blink::mojom::ServiceWorkerScriptInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ServiceWorkerScriptInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::ServiceWorkerScriptInfo::script_url)& script_url(
      const ::blink::mojom::ServiceWorkerScriptInfoPtr& input) {
    return input->script_url;
  }

  static const decltype(::blink::mojom::ServiceWorkerScriptInfo::encoding)& encoding(
      const ::blink::mojom::ServiceWorkerScriptInfoPtr& input) {
    return input->encoding;
  }

  static const decltype(::blink::mojom::ServiceWorkerScriptInfo::headers)& headers(
      const ::blink::mojom::ServiceWorkerScriptInfoPtr& input) {
    return input->headers;
  }

  static  decltype(::blink::mojom::ServiceWorkerScriptInfo::body)& body(
       ::blink::mojom::ServiceWorkerScriptInfoPtr& input) {
    return input->body;
  }

  static decltype(::blink::mojom::ServiceWorkerScriptInfo::body_size) body_size(
      const ::blink::mojom::ServiceWorkerScriptInfoPtr& input) {
    return input->body_size;
  }

  static  decltype(::blink::mojom::ServiceWorkerScriptInfo::meta_data)& meta_data(
       ::blink::mojom::ServiceWorkerScriptInfoPtr& input) {
    return input->meta_data;
  }

  static decltype(::blink::mojom::ServiceWorkerScriptInfo::meta_data_size) meta_data_size(
      const ::blink::mojom::ServiceWorkerScriptInfoPtr& input) {
    return input->meta_data_size;
  }

  static bool Read(::blink::mojom::ServiceWorkerScriptInfo::DataView input, ::blink::mojom::ServiceWorkerScriptInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_H_