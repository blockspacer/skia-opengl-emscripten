// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_BEGIN_FRAME_ARGS_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_BEGIN_FRAME_ARGS_MOJOM_BLINK_H_

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
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"

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
#include "components/viz/common/frame_sinks/begin_frame_args.h"




namespace WTF {
struct viz_mojom_internal_BeginFrameArgsType_DataHashFn {
  static unsigned GetHash(const ::viz::mojom::BeginFrameArgsType& value) {
    using utype = std::underlying_type<::viz::mojom::BeginFrameArgsType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::viz::mojom::BeginFrameArgsType& left, const ::viz::mojom::BeginFrameArgsType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::viz::mojom::BeginFrameArgsType>
    : public GenericHashTraits<::viz::mojom::BeginFrameArgsType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::viz::mojom::BeginFrameArgsType& value) {
    return value == static_cast<::viz::mojom::BeginFrameArgsType>(-1000000);
  }
  static void ConstructDeletedValue(::viz::mojom::BeginFrameArgsType& slot, bool) {
    slot = static_cast<::viz::mojom::BeginFrameArgsType>(-1000001);
  }
  static bool IsDeletedValue(const ::viz::mojom::BeginFrameArgsType& value) {
    return value == static_cast<::viz::mojom::BeginFrameArgsType>(-1000001);
  }
};
}  // namespace WTF


namespace viz {
namespace mojom {
namespace blink {






class  BeginFrameAck {
 public:
  using DataView = BeginFrameAckDataView;
  using Data_ = internal::BeginFrameAck_Data;

  template <typename... Args>
  static BeginFrameAckPtr New(Args&&... args) {
    return BeginFrameAckPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BeginFrameAckPtr From(const U& u) {
    return mojo::TypeConverter<BeginFrameAckPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BeginFrameAck>::Convert(*this);
  }


  BeginFrameAck();

  BeginFrameAck(
      uint64_t source_id,
      uint64_t sequence_number,
      int64_t trace_id,
      bool has_damage);

  ~BeginFrameAck();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BeginFrameAckPtr>
  BeginFrameAckPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BeginFrameAck>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BeginFrameAck::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BeginFrameAck::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BeginFrameAck_UnserializedMessageContext<
            UserType, BeginFrameAck::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BeginFrameAck::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BeginFrameAck::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BeginFrameAck_UnserializedMessageContext<
            UserType, BeginFrameAck::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BeginFrameAck::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t source_id;
  
  uint64_t sequence_number;
  
  int64_t trace_id;
  
  bool has_damage;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class  BeginFrameArgs {
 public:
  using DataView = BeginFrameArgsDataView;
  using Data_ = internal::BeginFrameArgs_Data;

  template <typename... Args>
  static BeginFrameArgsPtr New(Args&&... args) {
    return BeginFrameArgsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BeginFrameArgsPtr From(const U& u) {
    return mojo::TypeConverter<BeginFrameArgsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BeginFrameArgs>::Convert(*this);
  }


  BeginFrameArgs();

  BeginFrameArgs(
      base::TimeTicks frame_time,
      base::TimeTicks deadline,
      base::TimeDelta interval,
      uint64_t source_id,
      uint64_t sequence_number,
      int64_t trace_id,
      BeginFrameArgsType type,
      bool on_critical_path,
      bool animate_only);

  ~BeginFrameArgs();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BeginFrameArgsPtr>
  BeginFrameArgsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BeginFrameArgs>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BeginFrameArgs::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BeginFrameArgs::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BeginFrameArgs_UnserializedMessageContext<
            UserType, BeginFrameArgs::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BeginFrameArgs::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BeginFrameArgs::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BeginFrameArgs_UnserializedMessageContext<
            UserType, BeginFrameArgs::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BeginFrameArgs::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::TimeTicks frame_time;
  
  base::TimeTicks deadline;
  
  base::TimeDelta interval;
  
  uint64_t source_id;
  
  uint64_t sequence_number;
  
  int64_t trace_id;
  
  BeginFrameArgsType type;
  
  bool on_critical_path;
  
  bool animate_only;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


template <typename StructPtrType>
BeginFrameArgsPtr BeginFrameArgs::Clone() const {
  return New(
      mojo::Clone(frame_time),
      mojo::Clone(deadline),
      mojo::Clone(interval),
      mojo::Clone(source_id),
      mojo::Clone(sequence_number),
      mojo::Clone(trace_id),
      mojo::Clone(type),
      mojo::Clone(on_critical_path),
      mojo::Clone(animate_only)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BeginFrameArgs>::value>::type*>
bool BeginFrameArgs::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->frame_time, other_struct.frame_time))
    return false;
  if (!mojo::Equals(this->deadline, other_struct.deadline))
    return false;
  if (!mojo::Equals(this->interval, other_struct.interval))
    return false;
  if (!mojo::Equals(this->source_id, other_struct.source_id))
    return false;
  if (!mojo::Equals(this->sequence_number, other_struct.sequence_number))
    return false;
  if (!mojo::Equals(this->trace_id, other_struct.trace_id))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->on_critical_path, other_struct.on_critical_path))
    return false;
  if (!mojo::Equals(this->animate_only, other_struct.animate_only))
    return false;
  return true;
}
template <typename StructPtrType>
BeginFrameAckPtr BeginFrameAck::Clone() const {
  return New(
      mojo::Clone(source_id),
      mojo::Clone(sequence_number),
      mojo::Clone(trace_id),
      mojo::Clone(has_damage)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BeginFrameAck>::value>::type*>
bool BeginFrameAck::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->source_id, other_struct.source_id))
    return false;
  if (!mojo::Equals(this->sequence_number, other_struct.sequence_number))
    return false;
  if (!mojo::Equals(this->trace_id, other_struct.trace_id))
    return false;
  if (!mojo::Equals(this->has_damage, other_struct.has_damage))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::blink::BeginFrameArgs::DataView,
                                         ::viz::mojom::blink::BeginFrameArgsPtr> {
  static bool IsNull(const ::viz::mojom::blink::BeginFrameArgsPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::BeginFrameArgsPtr* output) { output->reset(); }

  static const decltype(::viz::mojom::blink::BeginFrameArgs::frame_time)& frame_time(
      const ::viz::mojom::blink::BeginFrameArgsPtr& input) {
    return input->frame_time;
  }

  static const decltype(::viz::mojom::blink::BeginFrameArgs::deadline)& deadline(
      const ::viz::mojom::blink::BeginFrameArgsPtr& input) {
    return input->deadline;
  }

  static const decltype(::viz::mojom::blink::BeginFrameArgs::interval)& interval(
      const ::viz::mojom::blink::BeginFrameArgsPtr& input) {
    return input->interval;
  }

  static decltype(::viz::mojom::blink::BeginFrameArgs::source_id) source_id(
      const ::viz::mojom::blink::BeginFrameArgsPtr& input) {
    return input->source_id;
  }

  static decltype(::viz::mojom::blink::BeginFrameArgs::sequence_number) sequence_number(
      const ::viz::mojom::blink::BeginFrameArgsPtr& input) {
    return input->sequence_number;
  }

  static decltype(::viz::mojom::blink::BeginFrameArgs::trace_id) trace_id(
      const ::viz::mojom::blink::BeginFrameArgsPtr& input) {
    return input->trace_id;
  }

  static decltype(::viz::mojom::blink::BeginFrameArgs::type) type(
      const ::viz::mojom::blink::BeginFrameArgsPtr& input) {
    return input->type;
  }

  static decltype(::viz::mojom::blink::BeginFrameArgs::on_critical_path) on_critical_path(
      const ::viz::mojom::blink::BeginFrameArgsPtr& input) {
    return input->on_critical_path;
  }

  static decltype(::viz::mojom::blink::BeginFrameArgs::animate_only) animate_only(
      const ::viz::mojom::blink::BeginFrameArgsPtr& input) {
    return input->animate_only;
  }

  static bool Read(::viz::mojom::blink::BeginFrameArgs::DataView input, ::viz::mojom::blink::BeginFrameArgsPtr* output);
};


template <>
struct  StructTraits<::viz::mojom::blink::BeginFrameAck::DataView,
                                         ::viz::mojom::blink::BeginFrameAckPtr> {
  static bool IsNull(const ::viz::mojom::blink::BeginFrameAckPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::BeginFrameAckPtr* output) { output->reset(); }

  static decltype(::viz::mojom::blink::BeginFrameAck::source_id) source_id(
      const ::viz::mojom::blink::BeginFrameAckPtr& input) {
    return input->source_id;
  }

  static decltype(::viz::mojom::blink::BeginFrameAck::sequence_number) sequence_number(
      const ::viz::mojom::blink::BeginFrameAckPtr& input) {
    return input->sequence_number;
  }

  static decltype(::viz::mojom::blink::BeginFrameAck::trace_id) trace_id(
      const ::viz::mojom::blink::BeginFrameAckPtr& input) {
    return input->trace_id;
  }

  static decltype(::viz::mojom::blink::BeginFrameAck::has_damage) has_damage(
      const ::viz::mojom::blink::BeginFrameAckPtr& input) {
    return input->has_damage;
  }

  static bool Read(::viz::mojom::blink::BeginFrameAck::DataView input, ::viz::mojom::blink::BeginFrameAckPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_BEGIN_FRAME_ARGS_MOJOM_BLINK_H_