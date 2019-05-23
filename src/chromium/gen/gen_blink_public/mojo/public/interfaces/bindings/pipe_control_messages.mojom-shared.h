// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/pipe_control_messages.mojom-shared-internal.h"




#include "base/component_export.h"




namespace mojo {
namespace pipe_control {
class RunOrClosePipeMessageParamsDataView;

class DisconnectReasonDataView;

class PeerAssociatedEndpointClosedEventDataView;

class RunOrClosePipeInputDataView;


}  // namespace pipe_control
}  // namespace mojo

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo::pipe_control::RunOrClosePipeMessageParamsDataView> {
  using Data = ::mojo::pipe_control::internal::RunOrClosePipeMessageParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::pipe_control::DisconnectReasonDataView> {
  using Data = ::mojo::pipe_control::internal::DisconnectReason_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::pipe_control::PeerAssociatedEndpointClosedEventDataView> {
  using Data = ::mojo::pipe_control::internal::PeerAssociatedEndpointClosedEvent_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::pipe_control::RunOrClosePipeInputDataView> {
  using Data = ::mojo::pipe_control::internal::RunOrClosePipeInput_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace mojo {
namespace pipe_control {
class RunOrClosePipeMessageParamsDataView {
 public:
  RunOrClosePipeMessageParamsDataView() {}

  RunOrClosePipeMessageParamsDataView(
      internal::RunOrClosePipeMessageParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputDataView(
      RunOrClosePipeInputDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInput(UserType* output) {
    auto* pointer = !data_->input.is_null() ? &data_->input : nullptr;
    return mojo::internal::Deserialize<::mojo::pipe_control::RunOrClosePipeInputDataView>(
        pointer, output, context_);
  }
 private:
  internal::RunOrClosePipeMessageParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DisconnectReasonDataView {
 public:
  DisconnectReasonDataView() {}

  DisconnectReasonDataView(
      internal::DisconnectReason_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t custom_reason() const {
    return data_->custom_reason;
  }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::DisconnectReason_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PeerAssociatedEndpointClosedEventDataView {
 public:
  PeerAssociatedEndpointClosedEventDataView() {}

  PeerAssociatedEndpointClosedEventDataView(
      internal::PeerAssociatedEndpointClosedEvent_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
  inline void GetDisconnectReasonDataView(
      DisconnectReasonDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisconnectReason(UserType* output) {
    auto* pointer = data_->disconnect_reason.Get();
    return mojo::internal::Deserialize<::mojo::pipe_control::DisconnectReasonDataView>(
        pointer, output, context_);
  }
 private:
  internal::PeerAssociatedEndpointClosedEvent_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RunOrClosePipeInputDataView {
 public:
  using Tag = internal::RunOrClosePipeInput_Data::RunOrClosePipeInput_Tag;

  RunOrClosePipeInputDataView() {}

  RunOrClosePipeInputDataView(
      internal::RunOrClosePipeInput_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_peer_associated_endpoint_closed_event() const { return data_->tag == Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT; }
  inline void GetPeerAssociatedEndpointClosedEventDataView(
      PeerAssociatedEndpointClosedEventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPeerAssociatedEndpointClosedEvent(UserType* output) {
    DCHECK(is_peer_associated_endpoint_closed_event());
    return mojo::internal::Deserialize<::mojo::pipe_control::PeerAssociatedEndpointClosedEventDataView>(
        data_->data.f_peer_associated_endpoint_closed_event.Get(), output, context_);
  }

 private:
  internal::RunOrClosePipeInput_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace pipe_control
}  // namespace mojo

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::pipe_control::RunOrClosePipeMessageParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::pipe_control::RunOrClosePipeMessageParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::pipe_control::internal::RunOrClosePipeMessageParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::input(input)) in_input = Traits::input(input);
    typename decltype((*output)->input)::BufferWriter input_writer;
    input_writer.AllocateInline(buffer, &(*output)->input);
    mojo::internal::Serialize<::mojo::pipe_control::RunOrClosePipeInputDataView>(
        in_input, buffer, &input_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->input.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null input in RunOrClosePipeMessageParams struct");
  }

  static bool Deserialize(::mojo::pipe_control::internal::RunOrClosePipeMessageParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::pipe_control::RunOrClosePipeMessageParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::pipe_control::DisconnectReasonDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::pipe_control::DisconnectReasonDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::pipe_control::internal::DisconnectReason_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->custom_reason = Traits::custom_reason(input);
    decltype(Traits::description(input)) in_description = Traits::description(input);
    typename decltype((*output)->description)::BaseType::BufferWriter
        description_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_description, buffer, &description_writer, context);
    (*output)->description.Set(
        description_writer.is_null() ? nullptr : description_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->description.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null description in DisconnectReason struct");
  }

  static bool Deserialize(::mojo::pipe_control::internal::DisconnectReason_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::pipe_control::DisconnectReasonDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::pipe_control::PeerAssociatedEndpointClosedEventDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::pipe_control::PeerAssociatedEndpointClosedEventDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::pipe_control::internal::PeerAssociatedEndpointClosedEvent_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->id = Traits::id(input);
    decltype(Traits::disconnect_reason(input)) in_disconnect_reason = Traits::disconnect_reason(input);
    typename decltype((*output)->disconnect_reason)::BaseType::BufferWriter
        disconnect_reason_writer;
    mojo::internal::Serialize<::mojo::pipe_control::DisconnectReasonDataView>(
        in_disconnect_reason, buffer, &disconnect_reason_writer, context);
    (*output)->disconnect_reason.Set(
        disconnect_reason_writer.is_null() ? nullptr : disconnect_reason_writer.data());
  }

  static bool Deserialize(::mojo::pipe_control::internal::PeerAssociatedEndpointClosedEvent_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::pipe_control::PeerAssociatedEndpointClosedEventDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::pipe_control::RunOrClosePipeInputDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::mojo::pipe_control::RunOrClosePipeInputDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::pipe_control::internal::RunOrClosePipeInput_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::mojo::pipe_control::internal::RunOrClosePipeInput_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::mojo::pipe_control::RunOrClosePipeInputDataView::Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT: {
        decltype(Traits::peer_associated_endpoint_closed_event(input))
            in_peer_associated_endpoint_closed_event = Traits::peer_associated_endpoint_closed_event(input);
        typename decltype(result->data.f_peer_associated_endpoint_closed_event)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo::pipe_control::PeerAssociatedEndpointClosedEventDataView>(
            in_peer_associated_endpoint_closed_event, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null peer_associated_endpoint_closed_event in RunOrClosePipeInput union");
        result->data.f_peer_associated_endpoint_closed_event.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::mojo::pipe_control::internal::RunOrClosePipeInput_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::pipe_control::RunOrClosePipeInputDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo {
namespace pipe_control {

inline void RunOrClosePipeMessageParamsDataView::GetInputDataView(
    RunOrClosePipeInputDataView* output) {
  auto pointer = &data_->input;
  *output = RunOrClosePipeInputDataView(pointer, context_);
}


inline void DisconnectReasonDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PeerAssociatedEndpointClosedEventDataView::GetDisconnectReasonDataView(
    DisconnectReasonDataView* output) {
  auto pointer = data_->disconnect_reason.Get();
  *output = DisconnectReasonDataView(pointer, context_);
}


inline void RunOrClosePipeInputDataView::GetPeerAssociatedEndpointClosedEventDataView(
    PeerAssociatedEndpointClosedEventDataView* output) {
  DCHECK(is_peer_associated_endpoint_closed_event());
  *output = PeerAssociatedEndpointClosedEventDataView(data_->data.f_peer_associated_endpoint_closed_event.Get(), context_);
}


}  // namespace pipe_control
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_SHARED_H_