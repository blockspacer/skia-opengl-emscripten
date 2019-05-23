// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_CLONEABLE_MESSAGE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_CLONEABLE_MESSAGE_MOJOM_H_

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
#include "third_party/blink/public/mojom/messaging/cloneable_message.mojom-shared.h"
#include "third_party/blink/public/mojom/messaging/cloneable_message.mojom-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom.h"
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
#include "third_party/blink/public/common/messaging/cloneable_message.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {








class BLINK_COMMON_EXPORT CloneableMessage {
 public:
  using DataView = CloneableMessageDataView;
  using Data_ = internal::CloneableMessage_Data;

  template <typename... Args>
  static CloneableMessagePtr New(Args&&... args) {
    return CloneableMessagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CloneableMessagePtr From(const U& u) {
    return mojo::TypeConverter<CloneableMessagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CloneableMessage>::Convert(*this);
  }


  CloneableMessage();

  CloneableMessage(
      mojo_base::BigBuffer encoded_message,
      std::vector<::blink::mojom::SerializedBlobPtr> blobs,
      uint64_t stack_trace_id,
      int64_t stack_trace_debugger_id_first,
      int64_t stack_trace_debugger_id_second,
      const base::Optional<base::UnguessableToken>& locked_agent_cluster_id);

  ~CloneableMessage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CloneableMessagePtr>
  CloneableMessagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CloneableMessage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CloneableMessage::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CloneableMessage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CloneableMessage_UnserializedMessageContext<
            UserType, CloneableMessage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CloneableMessage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CloneableMessage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CloneableMessage_UnserializedMessageContext<
            UserType, CloneableMessage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CloneableMessage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo_base::BigBuffer encoded_message;
  
  std::vector<::blink::mojom::SerializedBlobPtr> blobs;
  
  uint64_t stack_trace_id;
  
  int64_t stack_trace_debugger_id_first;
  
  int64_t stack_trace_debugger_id_second;
  
  base::Optional<base::UnguessableToken> locked_agent_cluster_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CloneableMessage);
};

template <typename StructPtrType>
CloneableMessagePtr CloneableMessage::Clone() const {
  return New(
      mojo::Clone(encoded_message),
      mojo::Clone(blobs),
      mojo::Clone(stack_trace_id),
      mojo::Clone(stack_trace_debugger_id_first),
      mojo::Clone(stack_trace_debugger_id_second),
      mojo::Clone(locked_agent_cluster_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CloneableMessage>::value>::type*>
bool CloneableMessage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->encoded_message, other_struct.encoded_message))
    return false;
  if (!mojo::Equals(this->blobs, other_struct.blobs))
    return false;
  if (!mojo::Equals(this->stack_trace_id, other_struct.stack_trace_id))
    return false;
  if (!mojo::Equals(this->stack_trace_debugger_id_first, other_struct.stack_trace_debugger_id_first))
    return false;
  if (!mojo::Equals(this->stack_trace_debugger_id_second, other_struct.stack_trace_debugger_id_second))
    return false;
  if (!mojo::Equals(this->locked_agent_cluster_id, other_struct.locked_agent_cluster_id))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::CloneableMessage::DataView,
                                         ::blink::mojom::CloneableMessagePtr> {
  static bool IsNull(const ::blink::mojom::CloneableMessagePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::CloneableMessagePtr* output) { output->reset(); }

  static  decltype(::blink::mojom::CloneableMessage::encoded_message)& encoded_message(
       ::blink::mojom::CloneableMessagePtr& input) {
    return input->encoded_message;
  }

  static  decltype(::blink::mojom::CloneableMessage::blobs)& blobs(
       ::blink::mojom::CloneableMessagePtr& input) {
    return input->blobs;
  }

  static decltype(::blink::mojom::CloneableMessage::stack_trace_id) stack_trace_id(
      const ::blink::mojom::CloneableMessagePtr& input) {
    return input->stack_trace_id;
  }

  static decltype(::blink::mojom::CloneableMessage::stack_trace_debugger_id_first) stack_trace_debugger_id_first(
      const ::blink::mojom::CloneableMessagePtr& input) {
    return input->stack_trace_debugger_id_first;
  }

  static decltype(::blink::mojom::CloneableMessage::stack_trace_debugger_id_second) stack_trace_debugger_id_second(
      const ::blink::mojom::CloneableMessagePtr& input) {
    return input->stack_trace_debugger_id_second;
  }

  static const decltype(::blink::mojom::CloneableMessage::locked_agent_cluster_id)& locked_agent_cluster_id(
      const ::blink::mojom::CloneableMessagePtr& input) {
    return input->locked_agent_cluster_id;
  }

  static bool Read(::blink::mojom::CloneableMessage::DataView input, ::blink::mojom::CloneableMessagePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_CLONEABLE_MESSAGE_MOJOM_H_