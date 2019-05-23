// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/pipe_control_messages.mojom-shared.h"
#include "mojo/public/interfaces/bindings/pipe_control_messages.mojom-forward.h"
#include <string>
#include <vector>




#include "base/component_export.h"




namespace mojo {
namespace pipe_control {






class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) DisconnectReason {
 public:
  using DataView = DisconnectReasonDataView;
  using Data_ = internal::DisconnectReason_Data;

  template <typename... Args>
  static DisconnectReasonPtr New(Args&&... args) {
    return DisconnectReasonPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DisconnectReasonPtr From(const U& u) {
    return mojo::TypeConverter<DisconnectReasonPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DisconnectReason>::Convert(*this);
  }


  DisconnectReason();

  DisconnectReason(
      uint32_t custom_reason,
      const std::string& description);

  ~DisconnectReason();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DisconnectReasonPtr>
  DisconnectReasonPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DisconnectReason>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DisconnectReason::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DisconnectReason::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DisconnectReason_UnserializedMessageContext<
            UserType, DisconnectReason::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DisconnectReason::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DisconnectReason::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DisconnectReason_UnserializedMessageContext<
            UserType, DisconnectReason::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DisconnectReason::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t custom_reason;
  
  std::string description;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) RunOrClosePipeInput {
 public:
  using DataView = RunOrClosePipeInputDataView;
  using Data_ = internal::RunOrClosePipeInput_Data;
  using Tag = Data_::RunOrClosePipeInput_Tag;

  static RunOrClosePipeInputPtr New() {
    return RunOrClosePipeInputPtr(base::in_place);
  }
  // Construct an instance holding |peer_associated_endpoint_closed_event|.
  static RunOrClosePipeInputPtr
  NewPeerAssociatedEndpointClosedEvent(
      PeerAssociatedEndpointClosedEventPtr peer_associated_endpoint_closed_event) {
    auto result = RunOrClosePipeInputPtr(base::in_place);
    result->set_peer_associated_endpoint_closed_event(std::move(peer_associated_endpoint_closed_event));
    return result;
  }

  template <typename U>
  static RunOrClosePipeInputPtr From(const U& u) {
    return mojo::TypeConverter<RunOrClosePipeInputPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunOrClosePipeInput>::Convert(*this);
  }

  RunOrClosePipeInput();
  ~RunOrClosePipeInput();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = RunOrClosePipeInputPtr>
  RunOrClosePipeInputPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunOrClosePipeInput>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_peer_associated_endpoint_closed_event() const { return tag_ == Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT; }

  
  PeerAssociatedEndpointClosedEventPtr& get_peer_associated_endpoint_closed_event() const {
    DCHECK(tag_ == Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT);
    return *(data_.peer_associated_endpoint_closed_event);
  }

  
  void set_peer_associated_endpoint_closed_event(
      PeerAssociatedEndpointClosedEventPtr peer_associated_endpoint_closed_event);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RunOrClosePipeInput::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<RunOrClosePipeInput::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    PeerAssociatedEndpointClosedEventPtr* peer_associated_endpoint_closed_event;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) RunOrClosePipeMessageParams {
 public:
  using DataView = RunOrClosePipeMessageParamsDataView;
  using Data_ = internal::RunOrClosePipeMessageParams_Data;

  template <typename... Args>
  static RunOrClosePipeMessageParamsPtr New(Args&&... args) {
    return RunOrClosePipeMessageParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RunOrClosePipeMessageParamsPtr From(const U& u) {
    return mojo::TypeConverter<RunOrClosePipeMessageParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunOrClosePipeMessageParams>::Convert(*this);
  }


  RunOrClosePipeMessageParams();

  explicit RunOrClosePipeMessageParams(
      RunOrClosePipeInputPtr input);

  ~RunOrClosePipeMessageParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RunOrClosePipeMessageParamsPtr>
  RunOrClosePipeMessageParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RunOrClosePipeMessageParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RunOrClosePipeMessageParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RunOrClosePipeMessageParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RunOrClosePipeMessageParams_UnserializedMessageContext<
            UserType, RunOrClosePipeMessageParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RunOrClosePipeMessageParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RunOrClosePipeMessageParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RunOrClosePipeMessageParams_UnserializedMessageContext<
            UserType, RunOrClosePipeMessageParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RunOrClosePipeMessageParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  RunOrClosePipeInputPtr input;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RunOrClosePipeMessageParams);
};






class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) PeerAssociatedEndpointClosedEvent {
 public:
  using DataView = PeerAssociatedEndpointClosedEventDataView;
  using Data_ = internal::PeerAssociatedEndpointClosedEvent_Data;

  template <typename... Args>
  static PeerAssociatedEndpointClosedEventPtr New(Args&&... args) {
    return PeerAssociatedEndpointClosedEventPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PeerAssociatedEndpointClosedEventPtr From(const U& u) {
    return mojo::TypeConverter<PeerAssociatedEndpointClosedEventPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PeerAssociatedEndpointClosedEvent>::Convert(*this);
  }


  PeerAssociatedEndpointClosedEvent();

  PeerAssociatedEndpointClosedEvent(
      uint32_t id,
      DisconnectReasonPtr disconnect_reason);

  ~PeerAssociatedEndpointClosedEvent();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PeerAssociatedEndpointClosedEventPtr>
  PeerAssociatedEndpointClosedEventPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PeerAssociatedEndpointClosedEvent>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PeerAssociatedEndpointClosedEvent::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PeerAssociatedEndpointClosedEvent::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PeerAssociatedEndpointClosedEvent_UnserializedMessageContext<
            UserType, PeerAssociatedEndpointClosedEvent::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PeerAssociatedEndpointClosedEvent::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PeerAssociatedEndpointClosedEvent::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PeerAssociatedEndpointClosedEvent_UnserializedMessageContext<
            UserType, PeerAssociatedEndpointClosedEvent::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PeerAssociatedEndpointClosedEvent::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t id;
  
  DisconnectReasonPtr disconnect_reason;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PeerAssociatedEndpointClosedEvent);
};

template <typename UnionPtrType>
RunOrClosePipeInputPtr RunOrClosePipeInput::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT:
      rv->set_peer_associated_endpoint_closed_event(mojo::Clone(*data_.peer_associated_endpoint_closed_event));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunOrClosePipeInput>::value>::type*>
bool RunOrClosePipeInput::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT:
      return mojo::Equals(*(data_.peer_associated_endpoint_closed_event), *(other.data_.peer_associated_endpoint_closed_event));
  }

  return false;
}
template <typename StructPtrType>
RunOrClosePipeMessageParamsPtr RunOrClosePipeMessageParams::Clone() const {
  return New(
      mojo::Clone(input)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RunOrClosePipeMessageParams>::value>::type*>
bool RunOrClosePipeMessageParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->input, other_struct.input))
    return false;
  return true;
}
template <typename StructPtrType>
DisconnectReasonPtr DisconnectReason::Clone() const {
  return New(
      mojo::Clone(custom_reason),
      mojo::Clone(description)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DisconnectReason>::value>::type*>
bool DisconnectReason::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->custom_reason, other_struct.custom_reason))
    return false;
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  return true;
}
template <typename StructPtrType>
PeerAssociatedEndpointClosedEventPtr PeerAssociatedEndpointClosedEvent::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(disconnect_reason)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PeerAssociatedEndpointClosedEvent>::value>::type*>
bool PeerAssociatedEndpointClosedEvent::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->disconnect_reason, other_struct.disconnect_reason))
    return false;
  return true;
}


}  // namespace pipe_control
}  // namespace mojo

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) StructTraits<::mojo::pipe_control::RunOrClosePipeMessageParams::DataView,
                                         ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr> {
  static bool IsNull(const ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr& input) { return !input; }
  static void SetToNull(::mojo::pipe_control::RunOrClosePipeMessageParamsPtr* output) { output->reset(); }

  static const decltype(::mojo::pipe_control::RunOrClosePipeMessageParams::input)& input(
      const ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr& input) {
    return input->input;
  }

  static bool Read(::mojo::pipe_control::RunOrClosePipeMessageParams::DataView input, ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) StructTraits<::mojo::pipe_control::DisconnectReason::DataView,
                                         ::mojo::pipe_control::DisconnectReasonPtr> {
  static bool IsNull(const ::mojo::pipe_control::DisconnectReasonPtr& input) { return !input; }
  static void SetToNull(::mojo::pipe_control::DisconnectReasonPtr* output) { output->reset(); }

  static decltype(::mojo::pipe_control::DisconnectReason::custom_reason) custom_reason(
      const ::mojo::pipe_control::DisconnectReasonPtr& input) {
    return input->custom_reason;
  }

  static const decltype(::mojo::pipe_control::DisconnectReason::description)& description(
      const ::mojo::pipe_control::DisconnectReasonPtr& input) {
    return input->description;
  }

  static bool Read(::mojo::pipe_control::DisconnectReason::DataView input, ::mojo::pipe_control::DisconnectReasonPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) StructTraits<::mojo::pipe_control::PeerAssociatedEndpointClosedEvent::DataView,
                                         ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr> {
  static bool IsNull(const ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr& input) { return !input; }
  static void SetToNull(::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr* output) { output->reset(); }

  static decltype(::mojo::pipe_control::PeerAssociatedEndpointClosedEvent::id) id(
      const ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr& input) {
    return input->id;
  }

  static const decltype(::mojo::pipe_control::PeerAssociatedEndpointClosedEvent::disconnect_reason)& disconnect_reason(
      const ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr& input) {
    return input->disconnect_reason;
  }

  static bool Read(::mojo::pipe_control::PeerAssociatedEndpointClosedEvent::DataView input, ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) UnionTraits<::mojo::pipe_control::RunOrClosePipeInput::DataView,
                                        ::mojo::pipe_control::RunOrClosePipeInputPtr> {
  static bool IsNull(const ::mojo::pipe_control::RunOrClosePipeInputPtr& input) { return !input; }
  static void SetToNull(::mojo::pipe_control::RunOrClosePipeInputPtr* output) { output->reset(); }

  static ::mojo::pipe_control::RunOrClosePipeInput::Tag GetTag(const ::mojo::pipe_control::RunOrClosePipeInputPtr& input) {
    return input->which();
  }

  static const ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr& peer_associated_endpoint_closed_event(const ::mojo::pipe_control::RunOrClosePipeInputPtr& input) {
    return input->get_peer_associated_endpoint_closed_event();
  }

  static bool Read(::mojo::pipe_control::RunOrClosePipeInput::DataView input, ::mojo::pipe_control::RunOrClosePipeInputPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_H_