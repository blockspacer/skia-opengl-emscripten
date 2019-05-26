// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_CLONEABLE_MESSAGE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_CLONEABLE_MESSAGE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/messaging/cloneable_message.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class CloneableMessageDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::CloneableMessageDataView> {
  using Data = ::blink::mojom::internal::CloneableMessage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
class CloneableMessageDataView {
 public:
  CloneableMessageDataView() {}

  CloneableMessageDataView(
      internal::CloneableMessage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEncodedMessageDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncodedMessage(UserType* output) {
    auto* pointer = !data_->encoded_message.is_null() ? &data_->encoded_message : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, context_);
  }
  inline void GetBlobsDataView(
      mojo::ArrayDataView<::blink::mojom::SerializedBlobDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlobs(UserType* output) {
    auto* pointer = data_->blobs.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SerializedBlobDataView>>(
        pointer, output, context_);
  }
  uint64_t stack_trace_id() const {
    return data_->stack_trace_id;
  }
  int64_t stack_trace_debugger_id_first() const {
    return data_->stack_trace_debugger_id_first;
  }
  int64_t stack_trace_debugger_id_second() const {
    return data_->stack_trace_debugger_id_second;
  }
  inline void GetLockedAgentClusterIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLockedAgentClusterId(UserType* output) {
    auto* pointer = data_->locked_agent_cluster_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::CloneableMessage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CloneableMessageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::CloneableMessageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::CloneableMessage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::encoded_message(input)) in_encoded_message = Traits::encoded_message(input);
    typename decltype((*output)->encoded_message)::BufferWriter encoded_message_writer;
    encoded_message_writer.AllocateInline(buffer, &(*output)->encoded_message);
    mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
        in_encoded_message, buffer, &encoded_message_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->encoded_message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null encoded_message in CloneableMessage struct");
    decltype(Traits::blobs(input)) in_blobs = Traits::blobs(input);
    typename decltype((*output)->blobs)::BaseType::BufferWriter
        blobs_writer;
    const mojo::internal::ContainerValidateParams blobs_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SerializedBlobDataView>>(
        in_blobs, buffer, &blobs_writer, &blobs_validate_params,
        context);
    (*output)->blobs.Set(
        blobs_writer.is_null() ? nullptr : blobs_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->blobs.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null blobs in CloneableMessage struct");
    (*output)->stack_trace_id = Traits::stack_trace_id(input);
    (*output)->stack_trace_debugger_id_first = Traits::stack_trace_debugger_id_first(input);
    (*output)->stack_trace_debugger_id_second = Traits::stack_trace_debugger_id_second(input);
    decltype(Traits::locked_agent_cluster_id(input)) in_locked_agent_cluster_id = Traits::locked_agent_cluster_id(input);
    typename decltype((*output)->locked_agent_cluster_id)::BaseType::BufferWriter
        locked_agent_cluster_id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_locked_agent_cluster_id, buffer, &locked_agent_cluster_id_writer, context);
    (*output)->locked_agent_cluster_id.Set(
        locked_agent_cluster_id_writer.is_null() ? nullptr : locked_agent_cluster_id_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::CloneableMessage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::CloneableMessageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void CloneableMessageDataView::GetEncodedMessageDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->encoded_message;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, context_);
}
inline void CloneableMessageDataView::GetBlobsDataView(
    mojo::ArrayDataView<::blink::mojom::SerializedBlobDataView>* output) {
  auto pointer = data_->blobs.Get();
  *output = mojo::ArrayDataView<::blink::mojom::SerializedBlobDataView>(pointer, context_);
}
inline void CloneableMessageDataView::GetLockedAgentClusterIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->locked_agent_cluster_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_CLONEABLE_MESSAGE_MOJOM_SHARED_H_