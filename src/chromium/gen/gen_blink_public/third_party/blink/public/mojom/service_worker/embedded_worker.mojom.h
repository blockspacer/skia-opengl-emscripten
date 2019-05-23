// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_H_

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
#include "third_party/blink/public/mojom/service_worker/embedded_worker.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/embedded_worker.mojom-forward.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
#include "third_party/blink/public/mojom/devtools/console_message.mojom.h"
#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom.h"
#include "third_party/blink/public/mojom/renderer_preference_watcher.mojom.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom.h"
#include "third_party/blink/public/mojom/script/script_type.mojom.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom.h"
#include "third_party/blink/public/mojom/v8_cache_options.mojom.h"
#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom.h"
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

class EmbeddedWorkerInstanceClientProxy;

template <typename ImplRefTraits>
class EmbeddedWorkerInstanceClientStub;

class EmbeddedWorkerInstanceClientRequestValidator;


class BLINK_COMMON_EXPORT EmbeddedWorkerInstanceClient
    : public EmbeddedWorkerInstanceClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = EmbeddedWorkerInstanceClientInterfaceBase;
  using Proxy_ = EmbeddedWorkerInstanceClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = EmbeddedWorkerInstanceClientStub<ImplRefTraits>;

  using RequestValidator_ = EmbeddedWorkerInstanceClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartWorkerMinVersion = 0,
    kStopWorkerMinVersion = 0,
    kResumeAfterDownloadMinVersion = 0,
    kAddMessageToConsoleMinVersion = 0,
    kBindDevToolsAgentMinVersion = 0,
    kUpdateSubresourceLoaderFactoriesMinVersion = 0,
  };
  virtual ~EmbeddedWorkerInstanceClient() {}

  
  virtual void StartWorker(EmbeddedWorkerStartParamsPtr params) = 0;

  
  virtual void StopWorker() = 0;

  
  virtual void ResumeAfterDownload() = 0;

  
  virtual void AddMessageToConsole(::blink::mojom::ConsoleMessageLevel level, const std::string& message) = 0;

  
  virtual void BindDevToolsAgent(::blink::mojom::DevToolsAgentHostAssociatedPtrInfo agent_host, ::blink::mojom::DevToolsAgentAssociatedRequest agent) = 0;

  
  virtual void UpdateSubresourceLoaderFactories(std::unique_ptr<blink::URLLoaderFactoryBundleInfo> subresource_loader_factories) = 0;
};

class EmbeddedWorkerInstanceHostProxy;

template <typename ImplRefTraits>
class EmbeddedWorkerInstanceHostStub;

class EmbeddedWorkerInstanceHostRequestValidator;
class EmbeddedWorkerInstanceHostResponseValidator;


class BLINK_COMMON_EXPORT EmbeddedWorkerInstanceHost
    : public EmbeddedWorkerInstanceHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = EmbeddedWorkerInstanceHostInterfaceBase;
  using Proxy_ = EmbeddedWorkerInstanceHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = EmbeddedWorkerInstanceHostStub<ImplRefTraits>;

  using RequestValidator_ = EmbeddedWorkerInstanceHostRequestValidator;
  using ResponseValidator_ = EmbeddedWorkerInstanceHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestTerminationMinVersion = 0,
    kCountFeatureMinVersion = 0,
    kOnReadyForInspectionMinVersion = 0,
    kOnScriptLoadedMinVersion = 0,
    kOnScriptEvaluationStartMinVersion = 0,
    kOnStartedMinVersion = 0,
    kOnReportExceptionMinVersion = 0,
    kOnReportConsoleMessageMinVersion = 0,
    kOnStoppedMinVersion = 0,
  };
  virtual ~EmbeddedWorkerInstanceHost() {}


  using RequestTerminationCallback = base::OnceCallback<void(bool)>;
  
  virtual void RequestTermination(RequestTerminationCallback callback) = 0;

  
  virtual void CountFeature(::blink::mojom::WebFeature feature) = 0;

  
  virtual void OnReadyForInspection() = 0;

  
  virtual void OnScriptLoaded() = 0;

  
  virtual void OnScriptEvaluationStart() = 0;

  
  virtual void OnStarted(::blink::mojom::ServiceWorkerStartStatus status, int32_t thread_id, EmbeddedWorkerStartTimingPtr start_timing) = 0;

  
  virtual void OnReportException(const base::string16& error_message, int32_t line_number, int32_t column_number, const GURL& source_url) = 0;

  
  virtual void OnReportConsoleMessage(::blink::mojom::ConsoleMessageSource source, ::blink::mojom::ConsoleMessageLevel message_level, const base::string16& message, int32_t line_number, const GURL& source_url) = 0;

  
  virtual void OnStopped() = 0;
};

class BLINK_COMMON_EXPORT EmbeddedWorkerInstanceClientProxy
    : public EmbeddedWorkerInstanceClient {
 public:
  using InterfaceType = EmbeddedWorkerInstanceClient;

  explicit EmbeddedWorkerInstanceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartWorker(EmbeddedWorkerStartParamsPtr params) final;
  void StopWorker() final;
  void ResumeAfterDownload() final;
  void AddMessageToConsole(::blink::mojom::ConsoleMessageLevel level, const std::string& message) final;
  void BindDevToolsAgent(::blink::mojom::DevToolsAgentHostAssociatedPtrInfo agent_host, ::blink::mojom::DevToolsAgentAssociatedRequest agent) final;
  void UpdateSubresourceLoaderFactories(std::unique_ptr<blink::URLLoaderFactoryBundleInfo> subresource_loader_factories) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT EmbeddedWorkerInstanceHostProxy
    : public EmbeddedWorkerInstanceHost {
 public:
  using InterfaceType = EmbeddedWorkerInstanceHost;

  explicit EmbeddedWorkerInstanceHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestTermination(RequestTerminationCallback callback) final;
  void CountFeature(::blink::mojom::WebFeature feature) final;
  void OnReadyForInspection() final;
  void OnScriptLoaded() final;
  void OnScriptEvaluationStart() final;
  void OnStarted(::blink::mojom::ServiceWorkerStartStatus status, int32_t thread_id, EmbeddedWorkerStartTimingPtr start_timing) final;
  void OnReportException(const base::string16& error_message, int32_t line_number, int32_t column_number, const GURL& source_url) final;
  void OnReportConsoleMessage(::blink::mojom::ConsoleMessageSource source, ::blink::mojom::ConsoleMessageLevel message_level, const base::string16& message, int32_t line_number, const GURL& source_url) final;
  void OnStopped() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT EmbeddedWorkerInstanceClientStubDispatch {
 public:
  static bool Accept(EmbeddedWorkerInstanceClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      EmbeddedWorkerInstanceClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<EmbeddedWorkerInstanceClient>>
class EmbeddedWorkerInstanceClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EmbeddedWorkerInstanceClientStub() {}
  ~EmbeddedWorkerInstanceClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedWorkerInstanceClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedWorkerInstanceClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT EmbeddedWorkerInstanceHostStubDispatch {
 public:
  static bool Accept(EmbeddedWorkerInstanceHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      EmbeddedWorkerInstanceHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<EmbeddedWorkerInstanceHost>>
class EmbeddedWorkerInstanceHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EmbeddedWorkerInstanceHostStub() {}
  ~EmbeddedWorkerInstanceHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedWorkerInstanceHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedWorkerInstanceHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT EmbeddedWorkerInstanceClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT EmbeddedWorkerInstanceHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT EmbeddedWorkerInstanceHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class BLINK_COMMON_EXPORT EmbeddedWorkerStartParams {
 public:
  using DataView = EmbeddedWorkerStartParamsDataView;
  using Data_ = internal::EmbeddedWorkerStartParams_Data;

  template <typename... Args>
  static EmbeddedWorkerStartParamsPtr New(Args&&... args) {
    return EmbeddedWorkerStartParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EmbeddedWorkerStartParamsPtr From(const U& u) {
    return mojo::TypeConverter<EmbeddedWorkerStartParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EmbeddedWorkerStartParams>::Convert(*this);
  }


  EmbeddedWorkerStartParams();

  EmbeddedWorkerStartParams(
      int64_t service_worker_version_id,
      const GURL& scope,
      const GURL& script_url,
      ::blink::mojom::ScriptType script_type,
      const std::string& user_agent,
      int32_t worker_devtools_agent_route_id,
      const base::UnguessableToken& devtools_worker_token,
      bool pause_after_download,
      bool wait_for_debugger,
      bool is_installed,
      ::blink::mojom::V8CacheOptions v8_cache_options,
      ::blink::mojom::RendererPreferencesPtr renderer_preferences,
      ::blink::mojom::ServiceWorkerRequest service_worker_request,
      ::blink::mojom::ControllerServiceWorkerRequest controller_request,
      ::blink::mojom::ServiceWorkerInstalledScriptsInfoPtr installed_scripts_info,
      EmbeddedWorkerInstanceHostAssociatedPtrInfo instance_host,
      ::blink::mojom::ServiceWorkerProviderInfoForStartWorkerPtr provider_info,
      ::blink::mojom::WorkerContentSettingsProxyPtrInfo content_settings_proxy,
      ::blink::mojom::RendererPreferenceWatcherRequest preference_watcher_request,
      std::unique_ptr<blink::URLLoaderFactoryBundleInfo> subresource_loader_factories);

  ~EmbeddedWorkerStartParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EmbeddedWorkerStartParamsPtr>
  EmbeddedWorkerStartParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EmbeddedWorkerStartParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EmbeddedWorkerStartParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        EmbeddedWorkerStartParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::EmbeddedWorkerStartParams_UnserializedMessageContext<
            UserType, EmbeddedWorkerStartParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<EmbeddedWorkerStartParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return EmbeddedWorkerStartParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::EmbeddedWorkerStartParams_UnserializedMessageContext<
            UserType, EmbeddedWorkerStartParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<EmbeddedWorkerStartParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t service_worker_version_id;
  
  GURL scope;
  
  GURL script_url;
  
  ::blink::mojom::ScriptType script_type;
  
  std::string user_agent;
  
  int32_t worker_devtools_agent_route_id;
  
  base::UnguessableToken devtools_worker_token;
  
  bool pause_after_download;
  
  bool wait_for_debugger;
  
  bool is_installed;
  
  ::blink::mojom::V8CacheOptions v8_cache_options;
  
  ::blink::mojom::RendererPreferencesPtr renderer_preferences;
  
  ::blink::mojom::ServiceWorkerRequest service_worker_request;
  
  ::blink::mojom::ControllerServiceWorkerRequest controller_request;
  
  ::blink::mojom::ServiceWorkerInstalledScriptsInfoPtr installed_scripts_info;
  
  EmbeddedWorkerInstanceHostAssociatedPtrInfo instance_host;
  
  ::blink::mojom::ServiceWorkerProviderInfoForStartWorkerPtr provider_info;
  
  ::blink::mojom::WorkerContentSettingsProxyPtrInfo content_settings_proxy;
  
  ::blink::mojom::RendererPreferenceWatcherRequest preference_watcher_request;
  
  std::unique_ptr<blink::URLLoaderFactoryBundleInfo> subresource_loader_factories;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(EmbeddedWorkerStartParams);
};





class BLINK_COMMON_EXPORT EmbeddedWorkerStartTiming {
 public:
  using DataView = EmbeddedWorkerStartTimingDataView;
  using Data_ = internal::EmbeddedWorkerStartTiming_Data;

  template <typename... Args>
  static EmbeddedWorkerStartTimingPtr New(Args&&... args) {
    return EmbeddedWorkerStartTimingPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EmbeddedWorkerStartTimingPtr From(const U& u) {
    return mojo::TypeConverter<EmbeddedWorkerStartTimingPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EmbeddedWorkerStartTiming>::Convert(*this);
  }


  EmbeddedWorkerStartTiming();

  EmbeddedWorkerStartTiming(
      base::TimeTicks start_worker_received_time,
      base::TimeTicks script_evaluation_start_time,
      base::TimeTicks script_evaluation_end_time);

  ~EmbeddedWorkerStartTiming();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EmbeddedWorkerStartTimingPtr>
  EmbeddedWorkerStartTimingPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EmbeddedWorkerStartTiming>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EmbeddedWorkerStartTiming::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        EmbeddedWorkerStartTiming::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::EmbeddedWorkerStartTiming_UnserializedMessageContext<
            UserType, EmbeddedWorkerStartTiming::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<EmbeddedWorkerStartTiming::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return EmbeddedWorkerStartTiming::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::EmbeddedWorkerStartTiming_UnserializedMessageContext<
            UserType, EmbeddedWorkerStartTiming::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<EmbeddedWorkerStartTiming::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::TimeTicks start_worker_received_time;
  
  base::TimeTicks script_evaluation_start_time;
  
  base::TimeTicks script_evaluation_end_time;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
EmbeddedWorkerStartParamsPtr EmbeddedWorkerStartParams::Clone() const {
  return New(
      mojo::Clone(service_worker_version_id),
      mojo::Clone(scope),
      mojo::Clone(script_url),
      mojo::Clone(script_type),
      mojo::Clone(user_agent),
      mojo::Clone(worker_devtools_agent_route_id),
      mojo::Clone(devtools_worker_token),
      mojo::Clone(pause_after_download),
      mojo::Clone(wait_for_debugger),
      mojo::Clone(is_installed),
      mojo::Clone(v8_cache_options),
      mojo::Clone(renderer_preferences),
      mojo::Clone(service_worker_request),
      mojo::Clone(controller_request),
      mojo::Clone(installed_scripts_info),
      mojo::Clone(instance_host),
      mojo::Clone(provider_info),
      mojo::Clone(content_settings_proxy),
      mojo::Clone(preference_watcher_request),
      mojo::Clone(subresource_loader_factories)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EmbeddedWorkerStartParams>::value>::type*>
bool EmbeddedWorkerStartParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->service_worker_version_id, other_struct.service_worker_version_id))
    return false;
  if (!mojo::Equals(this->scope, other_struct.scope))
    return false;
  if (!mojo::Equals(this->script_url, other_struct.script_url))
    return false;
  if (!mojo::Equals(this->script_type, other_struct.script_type))
    return false;
  if (!mojo::Equals(this->user_agent, other_struct.user_agent))
    return false;
  if (!mojo::Equals(this->worker_devtools_agent_route_id, other_struct.worker_devtools_agent_route_id))
    return false;
  if (!mojo::Equals(this->devtools_worker_token, other_struct.devtools_worker_token))
    return false;
  if (!mojo::Equals(this->pause_after_download, other_struct.pause_after_download))
    return false;
  if (!mojo::Equals(this->wait_for_debugger, other_struct.wait_for_debugger))
    return false;
  if (!mojo::Equals(this->is_installed, other_struct.is_installed))
    return false;
  if (!mojo::Equals(this->v8_cache_options, other_struct.v8_cache_options))
    return false;
  if (!mojo::Equals(this->renderer_preferences, other_struct.renderer_preferences))
    return false;
  if (!mojo::Equals(this->service_worker_request, other_struct.service_worker_request))
    return false;
  if (!mojo::Equals(this->controller_request, other_struct.controller_request))
    return false;
  if (!mojo::Equals(this->installed_scripts_info, other_struct.installed_scripts_info))
    return false;
  if (!mojo::Equals(this->instance_host, other_struct.instance_host))
    return false;
  if (!mojo::Equals(this->provider_info, other_struct.provider_info))
    return false;
  if (!mojo::Equals(this->content_settings_proxy, other_struct.content_settings_proxy))
    return false;
  if (!mojo::Equals(this->preference_watcher_request, other_struct.preference_watcher_request))
    return false;
  if (!mojo::Equals(this->subresource_loader_factories, other_struct.subresource_loader_factories))
    return false;
  return true;
}
template <typename StructPtrType>
EmbeddedWorkerStartTimingPtr EmbeddedWorkerStartTiming::Clone() const {
  return New(
      mojo::Clone(start_worker_received_time),
      mojo::Clone(script_evaluation_start_time),
      mojo::Clone(script_evaluation_end_time)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EmbeddedWorkerStartTiming>::value>::type*>
bool EmbeddedWorkerStartTiming::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->start_worker_received_time, other_struct.start_worker_received_time))
    return false;
  if (!mojo::Equals(this->script_evaluation_start_time, other_struct.script_evaluation_start_time))
    return false;
  if (!mojo::Equals(this->script_evaluation_end_time, other_struct.script_evaluation_end_time))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::EmbeddedWorkerStartParams::DataView,
                                         ::blink::mojom::EmbeddedWorkerStartParamsPtr> {
  static bool IsNull(const ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::EmbeddedWorkerStartParamsPtr* output) { output->reset(); }

  static decltype(::blink::mojom::EmbeddedWorkerStartParams::service_worker_version_id) service_worker_version_id(
      const ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->service_worker_version_id;
  }

  static const decltype(::blink::mojom::EmbeddedWorkerStartParams::scope)& scope(
      const ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->scope;
  }

  static const decltype(::blink::mojom::EmbeddedWorkerStartParams::script_url)& script_url(
      const ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->script_url;
  }

  static decltype(::blink::mojom::EmbeddedWorkerStartParams::script_type) script_type(
      const ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->script_type;
  }

  static const decltype(::blink::mojom::EmbeddedWorkerStartParams::user_agent)& user_agent(
      const ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->user_agent;
  }

  static decltype(::blink::mojom::EmbeddedWorkerStartParams::worker_devtools_agent_route_id) worker_devtools_agent_route_id(
      const ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->worker_devtools_agent_route_id;
  }

  static const decltype(::blink::mojom::EmbeddedWorkerStartParams::devtools_worker_token)& devtools_worker_token(
      const ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->devtools_worker_token;
  }

  static decltype(::blink::mojom::EmbeddedWorkerStartParams::pause_after_download) pause_after_download(
      const ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->pause_after_download;
  }

  static decltype(::blink::mojom::EmbeddedWorkerStartParams::wait_for_debugger) wait_for_debugger(
      const ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->wait_for_debugger;
  }

  static decltype(::blink::mojom::EmbeddedWorkerStartParams::is_installed) is_installed(
      const ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->is_installed;
  }

  static decltype(::blink::mojom::EmbeddedWorkerStartParams::v8_cache_options) v8_cache_options(
      const ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->v8_cache_options;
  }

  static const decltype(::blink::mojom::EmbeddedWorkerStartParams::renderer_preferences)& renderer_preferences(
      const ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->renderer_preferences;
  }

  static  decltype(::blink::mojom::EmbeddedWorkerStartParams::service_worker_request)& service_worker_request(
       ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->service_worker_request;
  }

  static  decltype(::blink::mojom::EmbeddedWorkerStartParams::controller_request)& controller_request(
       ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->controller_request;
  }

  static  decltype(::blink::mojom::EmbeddedWorkerStartParams::installed_scripts_info)& installed_scripts_info(
       ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->installed_scripts_info;
  }

  static  decltype(::blink::mojom::EmbeddedWorkerStartParams::instance_host)& instance_host(
       ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->instance_host;
  }

  static  decltype(::blink::mojom::EmbeddedWorkerStartParams::provider_info)& provider_info(
       ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->provider_info;
  }

  static  decltype(::blink::mojom::EmbeddedWorkerStartParams::content_settings_proxy)& content_settings_proxy(
       ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->content_settings_proxy;
  }

  static  decltype(::blink::mojom::EmbeddedWorkerStartParams::preference_watcher_request)& preference_watcher_request(
       ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->preference_watcher_request;
  }

  static  decltype(::blink::mojom::EmbeddedWorkerStartParams::subresource_loader_factories)& subresource_loader_factories(
       ::blink::mojom::EmbeddedWorkerStartParamsPtr& input) {
    return input->subresource_loader_factories;
  }

  static bool Read(::blink::mojom::EmbeddedWorkerStartParams::DataView input, ::blink::mojom::EmbeddedWorkerStartParamsPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::EmbeddedWorkerStartTiming::DataView,
                                         ::blink::mojom::EmbeddedWorkerStartTimingPtr> {
  static bool IsNull(const ::blink::mojom::EmbeddedWorkerStartTimingPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::EmbeddedWorkerStartTimingPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::EmbeddedWorkerStartTiming::start_worker_received_time)& start_worker_received_time(
      const ::blink::mojom::EmbeddedWorkerStartTimingPtr& input) {
    return input->start_worker_received_time;
  }

  static const decltype(::blink::mojom::EmbeddedWorkerStartTiming::script_evaluation_start_time)& script_evaluation_start_time(
      const ::blink::mojom::EmbeddedWorkerStartTimingPtr& input) {
    return input->script_evaluation_start_time;
  }

  static const decltype(::blink::mojom::EmbeddedWorkerStartTiming::script_evaluation_end_time)& script_evaluation_end_time(
      const ::blink::mojom::EmbeddedWorkerStartTimingPtr& input) {
    return input->script_evaluation_end_time;
  }

  static bool Read(::blink::mojom::EmbeddedWorkerStartTiming::DataView input, ::blink::mojom::EmbeddedWorkerStartTimingPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_H_