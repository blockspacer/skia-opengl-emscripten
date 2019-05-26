// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_H_

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
#include "services/network/public/mojom/signed_tree_head.mojom-shared.h"
#include "services/network/public/mojom/signed_tree_head.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/network/public/mojom/digitally_signed.mojom.h"
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
#include "net/cert/signed_tree_head.h"




namespace network {
namespace mojom {








class  SignedTreeHead {
 public:
  using DataView = SignedTreeHeadDataView;
  using Data_ = internal::SignedTreeHead_Data;

  template <typename... Args>
  static SignedTreeHeadPtr New(Args&&... args) {
    return SignedTreeHeadPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SignedTreeHeadPtr From(const U& u) {
    return mojo::TypeConverter<SignedTreeHeadPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SignedTreeHead>::Convert(*this);
  }


  SignedTreeHead();

  SignedTreeHead(
      net::ct::SignedTreeHead::Version version,
      base::Time timestamp,
      uint64_t tree_size,
      const std::vector<uint8_t>& sha256_root_hash,
      const net::ct::DigitallySigned& signature,
      const std::string& log_id);

  ~SignedTreeHead();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SignedTreeHeadPtr>
  SignedTreeHeadPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SignedTreeHead>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SignedTreeHead::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SignedTreeHead::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SignedTreeHead_UnserializedMessageContext<
            UserType, SignedTreeHead::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SignedTreeHead::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SignedTreeHead::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SignedTreeHead_UnserializedMessageContext<
            UserType, SignedTreeHead::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SignedTreeHead::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  net::ct::SignedTreeHead::Version version;
  
  base::Time timestamp;
  
  uint64_t tree_size;
  
  std::vector<uint8_t> sha256_root_hash;
  
  net::ct::DigitallySigned signature;
  
  std::string log_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SignedTreeHeadPtr SignedTreeHead::Clone() const {
  return New(
      mojo::Clone(version),
      mojo::Clone(timestamp),
      mojo::Clone(tree_size),
      mojo::Clone(sha256_root_hash),
      mojo::Clone(signature),
      mojo::Clone(log_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SignedTreeHead>::value>::type*>
bool SignedTreeHead::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->version, other_struct.version))
    return false;
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  if (!mojo::Equals(this->tree_size, other_struct.tree_size))
    return false;
  if (!mojo::Equals(this->sha256_root_hash, other_struct.sha256_root_hash))
    return false;
  if (!mojo::Equals(this->signature, other_struct.signature))
    return false;
  if (!mojo::Equals(this->log_id, other_struct.log_id))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::SignedTreeHead::DataView,
                                         ::network::mojom::SignedTreeHeadPtr> {
  static bool IsNull(const ::network::mojom::SignedTreeHeadPtr& input) { return !input; }
  static void SetToNull(::network::mojom::SignedTreeHeadPtr* output) { output->reset(); }

  static decltype(::network::mojom::SignedTreeHead::version) version(
      const ::network::mojom::SignedTreeHeadPtr& input) {
    return input->version;
  }

  static const decltype(::network::mojom::SignedTreeHead::timestamp)& timestamp(
      const ::network::mojom::SignedTreeHeadPtr& input) {
    return input->timestamp;
  }

  static decltype(::network::mojom::SignedTreeHead::tree_size) tree_size(
      const ::network::mojom::SignedTreeHeadPtr& input) {
    return input->tree_size;
  }

  static const decltype(::network::mojom::SignedTreeHead::sha256_root_hash)& sha256_root_hash(
      const ::network::mojom::SignedTreeHeadPtr& input) {
    return input->sha256_root_hash;
  }

  static const decltype(::network::mojom::SignedTreeHead::signature)& signature(
      const ::network::mojom::SignedTreeHeadPtr& input) {
    return input->signature;
  }

  static const decltype(::network::mojom::SignedTreeHead::log_id)& log_id(
      const ::network::mojom::SignedTreeHeadPtr& input) {
    return input->log_id;
  }

  static bool Read(::network::mojom::SignedTreeHead::DataView input, ::network::mojom::SignedTreeHeadPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_H_