// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_NAVIGATION_PRELOAD_STATE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_NAVIGATION_PRELOAD_STATE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/service_worker/navigation_preload_state.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/navigation_preload_state.mojom-blink-forward.h"

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





class PLATFORM_EXPORT NavigationPreloadState {
 public:
  using DataView = NavigationPreloadStateDataView;
  using Data_ = internal::NavigationPreloadState_Data;

  template <typename... Args>
  static NavigationPreloadStatePtr New(Args&&... args) {
    return NavigationPreloadStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NavigationPreloadStatePtr From(const U& u) {
    return mojo::TypeConverter<NavigationPreloadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NavigationPreloadState>::Convert(*this);
  }


  NavigationPreloadState();

  NavigationPreloadState(
      bool enabled,
      const WTF::String& header);

  ~NavigationPreloadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NavigationPreloadStatePtr>
  NavigationPreloadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NavigationPreloadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NavigationPreloadState::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NavigationPreloadState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NavigationPreloadState_UnserializedMessageContext<
            UserType, NavigationPreloadState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NavigationPreloadState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return NavigationPreloadState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NavigationPreloadState_UnserializedMessageContext<
            UserType, NavigationPreloadState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NavigationPreloadState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool enabled;
  
  WTF::String header;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
NavigationPreloadStatePtr NavigationPreloadState::Clone() const {
  return New(
      mojo::Clone(enabled),
      mojo::Clone(header)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NavigationPreloadState>::value>::type*>
bool NavigationPreloadState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->enabled, other_struct.enabled))
    return false;
  if (!mojo::Equals(this->header, other_struct.header))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::NavigationPreloadState::DataView,
                                         ::blink::mojom::blink::NavigationPreloadStatePtr> {
  static bool IsNull(const ::blink::mojom::blink::NavigationPreloadStatePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::NavigationPreloadStatePtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::NavigationPreloadState::enabled) enabled(
      const ::blink::mojom::blink::NavigationPreloadStatePtr& input) {
    return input->enabled;
  }

  static const decltype(::blink::mojom::blink::NavigationPreloadState::header)& header(
      const ::blink::mojom::blink::NavigationPreloadStatePtr& input) {
    return input->header;
  }

  static bool Read(::blink::mojom::blink::NavigationPreloadState::DataView input, ::blink::mojom::blink::NavigationPreloadStatePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_NAVIGATION_PRELOAD_STATE_MOJOM_BLINK_H_