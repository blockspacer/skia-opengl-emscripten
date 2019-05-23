// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FILTER_MOJOM_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FILTER_MOJOM_H_

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
#include "services/service_manager/public/mojom/service_filter.mojom-shared.h"
#include "services/service_manager/public/mojom/service_filter.mojom-forward.h"
#include "mojo/public/mojom/base/token.mojom.h"
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
#include "services/service_manager/public/cpp/service_filter.h"
#include "base/component_export.h"




namespace service_manager {
namespace mojom {








class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) ServiceFilter {
 public:
  using DataView = ServiceFilterDataView;
  using Data_ = internal::ServiceFilter_Data;

  template <typename... Args>
  static ServiceFilterPtr New(Args&&... args) {
    return ServiceFilterPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceFilterPtr From(const U& u) {
    return mojo::TypeConverter<ServiceFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceFilter>::Convert(*this);
  }


  ServiceFilter();

  ServiceFilter(
      const std::string& service_name,
      const base::Optional<base::Token>& instance_group,
      const base::Optional<base::Token>& instance_id,
      const base::Optional<base::Token>& globally_unique_id);

  ~ServiceFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceFilterPtr>
  ServiceFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceFilter::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceFilter::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceFilter_UnserializedMessageContext<
            UserType, ServiceFilter::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceFilter::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ServiceFilter::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceFilter_UnserializedMessageContext<
            UserType, ServiceFilter::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceFilter::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string service_name;
  
  base::Optional<base::Token> instance_group;
  
  base::Optional<base::Token> instance_id;
  
  base::Optional<base::Token> globally_unique_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ServiceFilterPtr ServiceFilter::Clone() const {
  return New(
      mojo::Clone(service_name),
      mojo::Clone(instance_group),
      mojo::Clone(instance_id),
      mojo::Clone(globally_unique_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceFilter>::value>::type*>
bool ServiceFilter::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->service_name, other_struct.service_name))
    return false;
  if (!mojo::Equals(this->instance_group, other_struct.instance_group))
    return false;
  if (!mojo::Equals(this->instance_id, other_struct.instance_id))
    return false;
  if (!mojo::Equals(this->globally_unique_id, other_struct.globally_unique_id))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace service_manager

namespace mojo {


template <>
struct COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM) StructTraits<::service_manager::mojom::ServiceFilter::DataView,
                                         ::service_manager::mojom::ServiceFilterPtr> {
  static bool IsNull(const ::service_manager::mojom::ServiceFilterPtr& input) { return !input; }
  static void SetToNull(::service_manager::mojom::ServiceFilterPtr* output) { output->reset(); }

  static const decltype(::service_manager::mojom::ServiceFilter::service_name)& service_name(
      const ::service_manager::mojom::ServiceFilterPtr& input) {
    return input->service_name;
  }

  static const decltype(::service_manager::mojom::ServiceFilter::instance_group)& instance_group(
      const ::service_manager::mojom::ServiceFilterPtr& input) {
    return input->instance_group;
  }

  static const decltype(::service_manager::mojom::ServiceFilter::instance_id)& instance_id(
      const ::service_manager::mojom::ServiceFilterPtr& input) {
    return input->instance_id;
  }

  static const decltype(::service_manager::mojom::ServiceFilter::globally_unique_id)& globally_unique_id(
      const ::service_manager::mojom::ServiceFilterPtr& input) {
    return input->globally_unique_id;
  }

  static bool Read(::service_manager::mojom::ServiceFilter::DataView input, ::service_manager::mojom::ServiceFilterPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FILTER_MOJOM_H_