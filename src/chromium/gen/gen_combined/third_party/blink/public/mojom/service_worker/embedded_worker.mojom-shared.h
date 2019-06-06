// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "third_party/blink/public/mojom/service_worker/embedded_worker.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#endif // ENABLE_GNET
#include "third_party/blink/public/mojom/devtools/console_message.mojom-shared.h"
#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom-shared.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-shared.h"
#include "third_party/blink/public/mojom/renderer_preference_watcher.mojom-shared.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom-shared.h"
#include "third_party/blink/public/mojom/script/script_type.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared.h"
#include "third_party/blink/public/mojom/v8_cache_options.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom-shared.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class EmbeddedWorkerStartParamsDataView;

class EmbeddedWorkerStartTimingDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::EmbeddedWorkerStartParamsDataView> {
  using Data = ::blink::mojom::internal::EmbeddedWorkerStartParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::EmbeddedWorkerStartTimingDataView> {
  using Data = ::blink::mojom::internal::EmbeddedWorkerStartTiming_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class EmbeddedWorkerInstanceClientInterfaceBase {};

using EmbeddedWorkerInstanceClientPtrDataView =
    mojo::InterfacePtrDataView<EmbeddedWorkerInstanceClientInterfaceBase>;
using EmbeddedWorkerInstanceClientRequestDataView =
    mojo::InterfaceRequestDataView<EmbeddedWorkerInstanceClientInterfaceBase>;
using EmbeddedWorkerInstanceClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EmbeddedWorkerInstanceClientInterfaceBase>;
using EmbeddedWorkerInstanceClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EmbeddedWorkerInstanceClientInterfaceBase>;
class EmbeddedWorkerInstanceHostInterfaceBase {};

using EmbeddedWorkerInstanceHostPtrDataView =
    mojo::InterfacePtrDataView<EmbeddedWorkerInstanceHostInterfaceBase>;
using EmbeddedWorkerInstanceHostRequestDataView =
    mojo::InterfaceRequestDataView<EmbeddedWorkerInstanceHostInterfaceBase>;
using EmbeddedWorkerInstanceHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<EmbeddedWorkerInstanceHostInterfaceBase>;
using EmbeddedWorkerInstanceHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<EmbeddedWorkerInstanceHostInterfaceBase>;
class EmbeddedWorkerStartParamsDataView {
 public:
  EmbeddedWorkerStartParamsDataView() {}

  EmbeddedWorkerStartParamsDataView(
      internal::EmbeddedWorkerStartParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_version_id() const {
    return data_->service_worker_version_id;
  }
  inline void GetScopeDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScope(UserType* output) {
    auto* pointer = data_->scope.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetScriptUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScriptUrl(UserType* output) {
    auto* pointer = data_->script_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScriptType(UserType* output) const {
    auto data_value = data_->script_type;
    return mojo::internal::Deserialize<::blink::mojom::ScriptType>(
        data_value, output);
  }

  ::blink::mojom::ScriptType script_type() const {
    return static_cast<::blink::mojom::ScriptType>(data_->script_type);
  }
  inline void GetUserAgentDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserAgent(UserType* output) {
    auto* pointer = data_->user_agent.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t worker_devtools_agent_route_id() const {
    return data_->worker_devtools_agent_route_id;
  }
  inline void GetDevtoolsWorkerTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevtoolsWorkerToken(UserType* output) {
    auto* pointer = data_->devtools_worker_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  bool pause_after_download() const {
    return data_->pause_after_download;
  }
  bool wait_for_debugger() const {
    return data_->wait_for_debugger;
  }
  bool is_installed() const {
    return data_->is_installed;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadV8CacheOptions(UserType* output) const {
    auto data_value = data_->v8_cache_options;
    return mojo::internal::Deserialize<::blink::mojom::V8CacheOptions>(
        data_value, output);
  }

  ::blink::mojom::V8CacheOptions v8_cache_options() const {
    return static_cast<::blink::mojom::V8CacheOptions>(data_->v8_cache_options);
  }
  inline void GetRendererPreferencesDataView(
      ::blink::mojom::RendererPreferencesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRendererPreferences(UserType* output) {
    auto* pointer = data_->renderer_preferences.Get();
    return mojo::internal::Deserialize<::blink::mojom::RendererPreferencesDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeServiceWorkerRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRequestDataView>(
            &data_->service_worker_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeControllerRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ControllerServiceWorkerRequestDataView>(
            &data_->controller_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetInstalledScriptsInfoDataView(
      ::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstalledScriptsInfo(UserType* output) {
    auto* pointer = data_->installed_scripts_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeInstanceHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::EmbeddedWorkerInstanceHostAssociatedPtrInfoDataView>(
            &data_->instance_host, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetProviderInfoDataView(
      ::blink::mojom::ServiceWorkerProviderInfoForStartWorkerDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProviderInfo(UserType* output) {
    auto* pointer = data_->provider_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerProviderInfoForStartWorkerDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeContentSettingsProxy() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::WorkerContentSettingsProxyPtrDataView>(
            &data_->content_settings_proxy, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakePreferenceWatcherRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::RendererPreferenceWatcherRequestDataView>(
            &data_->preference_watcher_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetSubresourceLoaderFactoriesDataView(
      ::blink::mojom::URLLoaderFactoryBundleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubresourceLoaderFactories(UserType* output) {
    auto* pointer = data_->subresource_loader_factories.Get();
    return mojo::internal::Deserialize<::blink::mojom::URLLoaderFactoryBundleDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedWorkerStartParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedWorkerStartTimingDataView {
 public:
  EmbeddedWorkerStartTimingDataView() {}

  EmbeddedWorkerStartTimingDataView(
      internal::EmbeddedWorkerStartTiming_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStartWorkerReceivedTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartWorkerReceivedTime(UserType* output) {
    auto* pointer = data_->start_worker_received_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetScriptEvaluationStartTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScriptEvaluationStartTime(UserType* output) {
    auto* pointer = data_->script_evaluation_start_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetScriptEvaluationEndTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScriptEvaluationEndTime(UserType* output) {
    auto* pointer = data_->script_evaluation_end_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedWorkerStartTiming_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::EmbeddedWorkerStartParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::EmbeddedWorkerStartParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::EmbeddedWorkerStartParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->service_worker_version_id = Traits::service_worker_version_id(input);
    decltype(Traits::scope(input)) in_scope = Traits::scope(input);
    typename decltype((*output)->scope)::BaseType::BufferWriter
        scope_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_scope, buffer, &scope_writer, context);
    (*output)->scope.Set(
        scope_writer.is_null() ? nullptr : scope_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scope.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scope in EmbeddedWorkerStartParams struct");
    decltype(Traits::script_url(input)) in_script_url = Traits::script_url(input);
    typename decltype((*output)->script_url)::BaseType::BufferWriter
        script_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_script_url, buffer, &script_url_writer, context);
    (*output)->script_url.Set(
        script_url_writer.is_null() ? nullptr : script_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->script_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null script_url in EmbeddedWorkerStartParams struct");
    mojo::internal::Serialize<::blink::mojom::ScriptType>(
        Traits::script_type(input), &(*output)->script_type);
    decltype(Traits::user_agent(input)) in_user_agent = Traits::user_agent(input);
    typename decltype((*output)->user_agent)::BaseType::BufferWriter
        user_agent_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_user_agent, buffer, &user_agent_writer, context);
    (*output)->user_agent.Set(
        user_agent_writer.is_null() ? nullptr : user_agent_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->user_agent.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null user_agent in EmbeddedWorkerStartParams struct");
    (*output)->worker_devtools_agent_route_id = Traits::worker_devtools_agent_route_id(input);
    decltype(Traits::devtools_worker_token(input)) in_devtools_worker_token = Traits::devtools_worker_token(input);
    typename decltype((*output)->devtools_worker_token)::BaseType::BufferWriter
        devtools_worker_token_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_devtools_worker_token, buffer, &devtools_worker_token_writer, context);
    (*output)->devtools_worker_token.Set(
        devtools_worker_token_writer.is_null() ? nullptr : devtools_worker_token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->devtools_worker_token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null devtools_worker_token in EmbeddedWorkerStartParams struct");
    (*output)->pause_after_download = Traits::pause_after_download(input);
    (*output)->wait_for_debugger = Traits::wait_for_debugger(input);
    (*output)->is_installed = Traits::is_installed(input);
    mojo::internal::Serialize<::blink::mojom::V8CacheOptions>(
        Traits::v8_cache_options(input), &(*output)->v8_cache_options);
    decltype(Traits::renderer_preferences(input)) in_renderer_preferences = Traits::renderer_preferences(input);
    typename decltype((*output)->renderer_preferences)::BaseType::BufferWriter
        renderer_preferences_writer;
    mojo::internal::Serialize<::blink::mojom::RendererPreferencesDataView>(
        in_renderer_preferences, buffer, &renderer_preferences_writer, context);
    (*output)->renderer_preferences.Set(
        renderer_preferences_writer.is_null() ? nullptr : renderer_preferences_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->renderer_preferences.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null renderer_preferences in EmbeddedWorkerStartParams struct");
    decltype(Traits::service_worker_request(input)) in_service_worker_request = Traits::service_worker_request(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerRequestDataView>(
        in_service_worker_request, &(*output)->service_worker_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->service_worker_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid service_worker_request in EmbeddedWorkerStartParams struct");
    decltype(Traits::controller_request(input)) in_controller_request = Traits::controller_request(input);
    mojo::internal::Serialize<::blink::mojom::ControllerServiceWorkerRequestDataView>(
        in_controller_request, &(*output)->controller_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->controller_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid controller_request in EmbeddedWorkerStartParams struct");
    decltype(Traits::installed_scripts_info(input)) in_installed_scripts_info = Traits::installed_scripts_info(input);
    typename decltype((*output)->installed_scripts_info)::BaseType::BufferWriter
        installed_scripts_info_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView>(
        in_installed_scripts_info, buffer, &installed_scripts_info_writer, context);
    (*output)->installed_scripts_info.Set(
        installed_scripts_info_writer.is_null() ? nullptr : installed_scripts_info_writer.data());
    decltype(Traits::instance_host(input)) in_instance_host = Traits::instance_host(input);
    mojo::internal::Serialize<::blink::mojom::EmbeddedWorkerInstanceHostAssociatedPtrInfoDataView>(
        in_instance_host, &(*output)->instance_host, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->instance_host),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid instance_host in EmbeddedWorkerStartParams struct");
    decltype(Traits::provider_info(input)) in_provider_info = Traits::provider_info(input);
    typename decltype((*output)->provider_info)::BaseType::BufferWriter
        provider_info_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerProviderInfoForStartWorkerDataView>(
        in_provider_info, buffer, &provider_info_writer, context);
    (*output)->provider_info.Set(
        provider_info_writer.is_null() ? nullptr : provider_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->provider_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null provider_info in EmbeddedWorkerStartParams struct");
    decltype(Traits::content_settings_proxy(input)) in_content_settings_proxy = Traits::content_settings_proxy(input);
    mojo::internal::Serialize<::blink::mojom::WorkerContentSettingsProxyPtrDataView>(
        in_content_settings_proxy, &(*output)->content_settings_proxy, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->content_settings_proxy),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid content_settings_proxy in EmbeddedWorkerStartParams struct");
    decltype(Traits::preference_watcher_request(input)) in_preference_watcher_request = Traits::preference_watcher_request(input);
    mojo::internal::Serialize<::blink::mojom::RendererPreferenceWatcherRequestDataView>(
        in_preference_watcher_request, &(*output)->preference_watcher_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->preference_watcher_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid preference_watcher_request in EmbeddedWorkerStartParams struct");
    decltype(Traits::subresource_loader_factories(input)) in_subresource_loader_factories = Traits::subresource_loader_factories(input);
    typename decltype((*output)->subresource_loader_factories)::BaseType::BufferWriter
        subresource_loader_factories_writer;
    mojo::internal::Serialize<::blink::mojom::URLLoaderFactoryBundleDataView>(
        in_subresource_loader_factories, buffer, &subresource_loader_factories_writer, context);
    (*output)->subresource_loader_factories.Set(
        subresource_loader_factories_writer.is_null() ? nullptr : subresource_loader_factories_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::EmbeddedWorkerStartParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::EmbeddedWorkerStartParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::EmbeddedWorkerStartTimingDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::EmbeddedWorkerStartTimingDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::EmbeddedWorkerStartTiming_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::start_worker_received_time(input)) in_start_worker_received_time = Traits::start_worker_received_time(input);
    typename decltype((*output)->start_worker_received_time)::BaseType::BufferWriter
        start_worker_received_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_start_worker_received_time, buffer, &start_worker_received_time_writer, context);
    (*output)->start_worker_received_time.Set(
        start_worker_received_time_writer.is_null() ? nullptr : start_worker_received_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->start_worker_received_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null start_worker_received_time in EmbeddedWorkerStartTiming struct");
    decltype(Traits::script_evaluation_start_time(input)) in_script_evaluation_start_time = Traits::script_evaluation_start_time(input);
    typename decltype((*output)->script_evaluation_start_time)::BaseType::BufferWriter
        script_evaluation_start_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_script_evaluation_start_time, buffer, &script_evaluation_start_time_writer, context);
    (*output)->script_evaluation_start_time.Set(
        script_evaluation_start_time_writer.is_null() ? nullptr : script_evaluation_start_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->script_evaluation_start_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null script_evaluation_start_time in EmbeddedWorkerStartTiming struct");
    decltype(Traits::script_evaluation_end_time(input)) in_script_evaluation_end_time = Traits::script_evaluation_end_time(input);
    typename decltype((*output)->script_evaluation_end_time)::BaseType::BufferWriter
        script_evaluation_end_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_script_evaluation_end_time, buffer, &script_evaluation_end_time_writer, context);
    (*output)->script_evaluation_end_time.Set(
        script_evaluation_end_time_writer.is_null() ? nullptr : script_evaluation_end_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->script_evaluation_end_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null script_evaluation_end_time in EmbeddedWorkerStartTiming struct");
  }

  static bool Deserialize(::blink::mojom::internal::EmbeddedWorkerStartTiming_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::EmbeddedWorkerStartTimingDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void EmbeddedWorkerStartParamsDataView::GetScopeDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->scope.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void EmbeddedWorkerStartParamsDataView::GetScriptUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->script_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void EmbeddedWorkerStartParamsDataView::GetUserAgentDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_agent.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void EmbeddedWorkerStartParamsDataView::GetDevtoolsWorkerTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->devtools_worker_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void EmbeddedWorkerStartParamsDataView::GetRendererPreferencesDataView(
    ::blink::mojom::RendererPreferencesDataView* output) {
  auto pointer = data_->renderer_preferences.Get();
  *output = ::blink::mojom::RendererPreferencesDataView(pointer, context_);
}
inline void EmbeddedWorkerStartParamsDataView::GetInstalledScriptsInfoDataView(
    ::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView* output) {
  auto pointer = data_->installed_scripts_info.Get();
  *output = ::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView(pointer, context_);
}
inline void EmbeddedWorkerStartParamsDataView::GetProviderInfoDataView(
    ::blink::mojom::ServiceWorkerProviderInfoForStartWorkerDataView* output) {
  auto pointer = data_->provider_info.Get();
  *output = ::blink::mojom::ServiceWorkerProviderInfoForStartWorkerDataView(pointer, context_);
}
inline void EmbeddedWorkerStartParamsDataView::GetSubresourceLoaderFactoriesDataView(
    ::blink::mojom::URLLoaderFactoryBundleDataView* output) {
  auto pointer = data_->subresource_loader_factories.Get();
  *output = ::blink::mojom::URLLoaderFactoryBundleDataView(pointer, context_);
}


inline void EmbeddedWorkerStartTimingDataView::GetStartWorkerReceivedTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->start_worker_received_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void EmbeddedWorkerStartTimingDataView::GetScriptEvaluationStartTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->script_evaluation_start_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void EmbeddedWorkerStartTimingDataView::GetScriptEvaluationEndTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->script_evaluation_end_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_H_
