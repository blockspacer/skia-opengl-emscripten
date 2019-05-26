// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATIONS_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATIONS_MOJOM_H_

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
#include "services/viz/public/interfaces/compositing/filter_operations.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/filter_operations.mojom-forward.h"
#include "services/viz/public/interfaces/compositing/filter_operation.mojom.h"
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
#include "cc/paint/filter_operations.h"




namespace viz {
namespace mojom {








class  FilterOperations {
 public:
  using DataView = FilterOperationsDataView;
  using Data_ = internal::FilterOperations_Data;

  template <typename... Args>
  static FilterOperationsPtr New(Args&&... args) {
    return FilterOperationsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FilterOperationsPtr From(const U& u) {
    return mojo::TypeConverter<FilterOperationsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FilterOperations>::Convert(*this);
  }


  FilterOperations();

  explicit FilterOperations(
      const std::vector<cc::FilterOperation>& operations);

  ~FilterOperations();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FilterOperationsPtr>
  FilterOperationsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FilterOperations>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FilterOperations::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FilterOperations::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FilterOperations_UnserializedMessageContext<
            UserType, FilterOperations::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FilterOperations::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FilterOperations::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FilterOperations_UnserializedMessageContext<
            UserType, FilterOperations::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FilterOperations::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<cc::FilterOperation> operations;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
FilterOperationsPtr FilterOperations::Clone() const {
  return New(
      mojo::Clone(operations)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FilterOperations>::value>::type*>
bool FilterOperations::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->operations, other_struct.operations))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::FilterOperations::DataView,
                                         ::viz::mojom::FilterOperationsPtr> {
  static bool IsNull(const ::viz::mojom::FilterOperationsPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::FilterOperationsPtr* output) { output->reset(); }

  static const decltype(::viz::mojom::FilterOperations::operations)& operations(
      const ::viz::mojom::FilterOperationsPtr& input) {
    return input->operations;
  }

  static bool Read(::viz::mojom::FilterOperations::DataView input, ::viz::mojom::FilterOperationsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATIONS_MOJOM_H_