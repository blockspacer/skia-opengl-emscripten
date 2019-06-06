// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_MAIN_SCRIPT_LOAD_PARAMS_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_MAIN_SCRIPT_LOAD_PARAMS_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-blink-forward.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/url_loader.mojom-blink.h"
#endif // ENABLE_GNET

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
#include "third_party/blink/renderer/platform/platform_export.h"




namespace blink {
namespace mojom {
namespace blink {








class PLATFORM_EXPORT WorkerMainScriptLoadParams {
 public:
  using DataView = WorkerMainScriptLoadParamsDataView;
  using Data_ = internal::WorkerMainScriptLoadParams_Data;

  template <typename... Args>
  static WorkerMainScriptLoadParamsPtr New(Args&&... args) {
    return WorkerMainScriptLoadParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WorkerMainScriptLoadParamsPtr From(const U& u) {
    return mojo::TypeConverter<WorkerMainScriptLoadParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WorkerMainScriptLoadParams>::Convert(*this);
  }


  WorkerMainScriptLoadParams();

  WorkerMainScriptLoadParams(
      ::network::mojom::blink::URLResponseHeadPtr response_head,
      ::network::mojom::blink::URLLoaderClientEndpointsPtr url_loader_client_endpoints,
      WTF::Vector<::network::mojom::blink::URLRequestRedirectInfoPtr> redirect_infos,
      WTF::Vector<::network::mojom::blink::URLResponseHeadPtr> redirect_response_heads);

  ~WorkerMainScriptLoadParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WorkerMainScriptLoadParamsPtr>
  WorkerMainScriptLoadParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WorkerMainScriptLoadParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WorkerMainScriptLoadParams::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WorkerMainScriptLoadParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WorkerMainScriptLoadParams_UnserializedMessageContext<
            UserType, WorkerMainScriptLoadParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WorkerMainScriptLoadParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return WorkerMainScriptLoadParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WorkerMainScriptLoadParams_UnserializedMessageContext<
            UserType, WorkerMainScriptLoadParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WorkerMainScriptLoadParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::network::mojom::blink::URLResponseHeadPtr response_head;
  
  ::network::mojom::blink::URLLoaderClientEndpointsPtr url_loader_client_endpoints;
  
  WTF::Vector<::network::mojom::blink::URLRequestRedirectInfoPtr> redirect_infos;
  
  WTF::Vector<::network::mojom::blink::URLResponseHeadPtr> redirect_response_heads;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WorkerMainScriptLoadParams);
};

template <typename StructPtrType>
WorkerMainScriptLoadParamsPtr WorkerMainScriptLoadParams::Clone() const {
  return New(
      mojo::Clone(response_head),
      mojo::Clone(url_loader_client_endpoints),
      mojo::Clone(redirect_infos),
      mojo::Clone(redirect_response_heads)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WorkerMainScriptLoadParams>::value>::type*>
bool WorkerMainScriptLoadParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->response_head, other_struct.response_head))
    return false;
  if (!mojo::Equals(this->url_loader_client_endpoints, other_struct.url_loader_client_endpoints))
    return false;
  if (!mojo::Equals(this->redirect_infos, other_struct.redirect_infos))
    return false;
  if (!mojo::Equals(this->redirect_response_heads, other_struct.redirect_response_heads))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::WorkerMainScriptLoadParams::DataView,
                                         ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr> {
  static bool IsNull(const ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::WorkerMainScriptLoadParamsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::WorkerMainScriptLoadParams::response_head)& response_head(
      const ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr& input) {
    return input->response_head;
  }

  static  decltype(::blink::mojom::blink::WorkerMainScriptLoadParams::url_loader_client_endpoints)& url_loader_client_endpoints(
       ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr& input) {
    return input->url_loader_client_endpoints;
  }

  static const decltype(::blink::mojom::blink::WorkerMainScriptLoadParams::redirect_infos)& redirect_infos(
      const ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr& input) {
    return input->redirect_infos;
  }

  static const decltype(::blink::mojom::blink::WorkerMainScriptLoadParams::redirect_response_heads)& redirect_response_heads(
      const ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr& input) {
    return input->redirect_response_heads;
  }

  static bool Read(::blink::mojom::blink::WorkerMainScriptLoadParams::DataView input, ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_MAIN_SCRIPT_LOAD_PARAMS_MOJOM_BLINK_H_
