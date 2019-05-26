// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_H_

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
#include "services/service_manager/public/mojom/constants.mojom-shared.h"
#include "services/service_manager/public/mojom/constants.mojom-forward.h"
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
#include "base/component_export.h"




namespace service_manager {
namespace mojom {





class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_CONSTANTS) Constants_UnusedStruct_Internal {
 public:
  using DataView = Constants_UnusedStruct_InternalDataView;
  using Data_ = internal::Constants_UnusedStruct_Internal_Data;

  template <typename... Args>
  static Constants_UnusedStruct_InternalPtr New(Args&&... args) {
    return Constants_UnusedStruct_InternalPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static Constants_UnusedStruct_InternalPtr From(const U& u) {
    return mojo::TypeConverter<Constants_UnusedStruct_InternalPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Constants_UnusedStruct_Internal>::Convert(*this);
  }


  Constants_UnusedStruct_Internal();

  ~Constants_UnusedStruct_Internal();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Constants_UnusedStruct_InternalPtr>
  Constants_UnusedStruct_InternalPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Constants_UnusedStruct_Internal>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Constants_UnusedStruct_Internal::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Constants_UnusedStruct_Internal::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Constants_UnusedStruct_Internal_UnserializedMessageContext<
            UserType, Constants_UnusedStruct_Internal::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Constants_UnusedStruct_Internal::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Constants_UnusedStruct_Internal::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Constants_UnusedStruct_Internal_UnserializedMessageContext<
            UserType, Constants_UnusedStruct_Internal::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Constants_UnusedStruct_Internal::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }


 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
Constants_UnusedStruct_InternalPtr Constants_UnusedStruct_Internal::Clone() const {
  return New(
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Constants_UnusedStruct_Internal>::value>::type*>
bool Constants_UnusedStruct_Internal::Equals(const T& other_struct) const {
  return true;
}


}  // namespace mojom
}  // namespace service_manager

namespace mojo {


template <>
struct COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_CONSTANTS) StructTraits<::service_manager::mojom::Constants_UnusedStruct_Internal::DataView,
                                         ::service_manager::mojom::Constants_UnusedStruct_InternalPtr> {
  static bool IsNull(const ::service_manager::mojom::Constants_UnusedStruct_InternalPtr& input) { return !input; }
  static void SetToNull(::service_manager::mojom::Constants_UnusedStruct_InternalPtr* output) { output->reset(); }

  static bool Read(::service_manager::mojom::Constants_UnusedStruct_Internal::DataView input, ::service_manager::mojom::Constants_UnusedStruct_InternalPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_H_