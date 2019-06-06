// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_MAIN_SCRIPT_LOAD_PARAMS_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_MAIN_SCRIPT_LOAD_PARAMS_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-shared-internal.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#endif // ENABLE_GNET

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class WorkerMainScriptLoadParamsDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::WorkerMainScriptLoadParamsDataView> {
  using Data = ::blink::mojom::internal::WorkerMainScriptLoadParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
class WorkerMainScriptLoadParamsDataView {
 public:
  WorkerMainScriptLoadParamsDataView() {}

  WorkerMainScriptLoadParamsDataView(
      internal::WorkerMainScriptLoadParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseHeadDataView(
      ::network::mojom::URLResponseHeadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponseHead(UserType* output) {
    auto* pointer = data_->response_head.Get();
    return mojo::internal::Deserialize<::network::mojom::URLResponseHeadDataView>(
        pointer, output, context_);
  }
  inline void GetUrlLoaderClientEndpointsDataView(
      ::network::mojom::URLLoaderClientEndpointsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrlLoaderClientEndpoints(UserType* output) {
    auto* pointer = data_->url_loader_client_endpoints.Get();
    return mojo::internal::Deserialize<::network::mojom::URLLoaderClientEndpointsDataView>(
        pointer, output, context_);
  }
  inline void GetRedirectInfosDataView(
      mojo::ArrayDataView<::network::mojom::URLRequestRedirectInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRedirectInfos(UserType* output) {
    auto* pointer = data_->redirect_infos.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::URLRequestRedirectInfoDataView>>(
        pointer, output, context_);
  }
  inline void GetRedirectResponseHeadsDataView(
      mojo::ArrayDataView<::network::mojom::URLResponseHeadDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRedirectResponseHeads(UserType* output) {
    auto* pointer = data_->redirect_response_heads.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::URLResponseHeadDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WorkerMainScriptLoadParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WorkerMainScriptLoadParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WorkerMainScriptLoadParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WorkerMainScriptLoadParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::response_head(input)) in_response_head = Traits::response_head(input);
    typename decltype((*output)->response_head)::BaseType::BufferWriter
        response_head_writer;
    mojo::internal::Serialize<::network::mojom::URLResponseHeadDataView>(
        in_response_head, buffer, &response_head_writer, context);
    (*output)->response_head.Set(
        response_head_writer.is_null() ? nullptr : response_head_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->response_head.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null response_head in WorkerMainScriptLoadParams struct");
    decltype(Traits::url_loader_client_endpoints(input)) in_url_loader_client_endpoints = Traits::url_loader_client_endpoints(input);
    typename decltype((*output)->url_loader_client_endpoints)::BaseType::BufferWriter
        url_loader_client_endpoints_writer;
    mojo::internal::Serialize<::network::mojom::URLLoaderClientEndpointsDataView>(
        in_url_loader_client_endpoints, buffer, &url_loader_client_endpoints_writer, context);
    (*output)->url_loader_client_endpoints.Set(
        url_loader_client_endpoints_writer.is_null() ? nullptr : url_loader_client_endpoints_writer.data());
    decltype(Traits::redirect_infos(input)) in_redirect_infos = Traits::redirect_infos(input);
    typename decltype((*output)->redirect_infos)::BaseType::BufferWriter
        redirect_infos_writer;
    const mojo::internal::ContainerValidateParams redirect_infos_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::URLRequestRedirectInfoDataView>>(
        in_redirect_infos, buffer, &redirect_infos_writer, &redirect_infos_validate_params,
        context);
    (*output)->redirect_infos.Set(
        redirect_infos_writer.is_null() ? nullptr : redirect_infos_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->redirect_infos.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null redirect_infos in WorkerMainScriptLoadParams struct");
    decltype(Traits::redirect_response_heads(input)) in_redirect_response_heads = Traits::redirect_response_heads(input);
    typename decltype((*output)->redirect_response_heads)::BaseType::BufferWriter
        redirect_response_heads_writer;
    const mojo::internal::ContainerValidateParams redirect_response_heads_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::URLResponseHeadDataView>>(
        in_redirect_response_heads, buffer, &redirect_response_heads_writer, &redirect_response_heads_validate_params,
        context);
    (*output)->redirect_response_heads.Set(
        redirect_response_heads_writer.is_null() ? nullptr : redirect_response_heads_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->redirect_response_heads.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null redirect_response_heads in WorkerMainScriptLoadParams struct");
  }

  static bool Deserialize(::blink::mojom::internal::WorkerMainScriptLoadParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WorkerMainScriptLoadParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void WorkerMainScriptLoadParamsDataView::GetResponseHeadDataView(
    ::network::mojom::URLResponseHeadDataView* output) {
  auto pointer = data_->response_head.Get();
  *output = ::network::mojom::URLResponseHeadDataView(pointer, context_);
}
inline void WorkerMainScriptLoadParamsDataView::GetUrlLoaderClientEndpointsDataView(
    ::network::mojom::URLLoaderClientEndpointsDataView* output) {
  auto pointer = data_->url_loader_client_endpoints.Get();
  *output = ::network::mojom::URLLoaderClientEndpointsDataView(pointer, context_);
}
inline void WorkerMainScriptLoadParamsDataView::GetRedirectInfosDataView(
    mojo::ArrayDataView<::network::mojom::URLRequestRedirectInfoDataView>* output) {
  auto pointer = data_->redirect_infos.Get();
  *output = mojo::ArrayDataView<::network::mojom::URLRequestRedirectInfoDataView>(pointer, context_);
}
inline void WorkerMainScriptLoadParamsDataView::GetRedirectResponseHeadsDataView(
    mojo::ArrayDataView<::network::mojom::URLResponseHeadDataView>* output) {
  auto pointer = data_->redirect_response_heads.Get();
  *output = mojo::ArrayDataView<::network::mojom::URLResponseHeadDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_MAIN_SCRIPT_LOAD_PARAMS_MOJOM_SHARED_H_
