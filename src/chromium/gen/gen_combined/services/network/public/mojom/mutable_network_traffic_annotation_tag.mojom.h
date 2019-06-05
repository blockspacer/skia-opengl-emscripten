// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_H_

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
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-forward.h"
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
#if defined(ENABLE_GNET)
#include "net/traffic_annotation/network_traffic_annotation.h"
#endif



namespace network {
namespace mojom {





class  MutableNetworkTrafficAnnotationTag {
 public:
  using DataView = MutableNetworkTrafficAnnotationTagDataView;
  using Data_ = internal::MutableNetworkTrafficAnnotationTag_Data;

  template <typename... Args>
  static MutableNetworkTrafficAnnotationTagPtr New(Args&&... args) {
    return MutableNetworkTrafficAnnotationTagPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MutableNetworkTrafficAnnotationTagPtr From(const U& u) {
    return mojo::TypeConverter<MutableNetworkTrafficAnnotationTagPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MutableNetworkTrafficAnnotationTag>::Convert(*this);
  }


  MutableNetworkTrafficAnnotationTag();

  explicit MutableNetworkTrafficAnnotationTag(
      uint32_t unique_id_hash_code);

  ~MutableNetworkTrafficAnnotationTag();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MutableNetworkTrafficAnnotationTagPtr>
  MutableNetworkTrafficAnnotationTagPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MutableNetworkTrafficAnnotationTag>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MutableNetworkTrafficAnnotationTag::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MutableNetworkTrafficAnnotationTag::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MutableNetworkTrafficAnnotationTag_UnserializedMessageContext<
            UserType, MutableNetworkTrafficAnnotationTag::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MutableNetworkTrafficAnnotationTag::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MutableNetworkTrafficAnnotationTag::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MutableNetworkTrafficAnnotationTag_UnserializedMessageContext<
            UserType, MutableNetworkTrafficAnnotationTag::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MutableNetworkTrafficAnnotationTag::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t unique_id_hash_code;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
MutableNetworkTrafficAnnotationTagPtr MutableNetworkTrafficAnnotationTag::Clone() const {
  return New(
      mojo::Clone(unique_id_hash_code)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MutableNetworkTrafficAnnotationTag>::value>::type*>
bool MutableNetworkTrafficAnnotationTag::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->unique_id_hash_code, other_struct.unique_id_hash_code))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::MutableNetworkTrafficAnnotationTag::DataView,
                                         ::network::mojom::MutableNetworkTrafficAnnotationTagPtr> {
  static bool IsNull(const ::network::mojom::MutableNetworkTrafficAnnotationTagPtr& input) { return !input; }
  static void SetToNull(::network::mojom::MutableNetworkTrafficAnnotationTagPtr* output) { output->reset(); }

  static decltype(::network::mojom::MutableNetworkTrafficAnnotationTag::unique_id_hash_code) unique_id_hash_code(
      const ::network::mojom::MutableNetworkTrafficAnnotationTagPtr& input) {
    return input->unique_id_hash_code;
  }

  static bool Read(::network::mojom::MutableNetworkTrafficAnnotationTag::DataView input, ::network::mojom::MutableNetworkTrafficAnnotationTagPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_H_
