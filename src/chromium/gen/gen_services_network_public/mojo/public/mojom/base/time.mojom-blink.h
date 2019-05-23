// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_BLINK_H_
#define MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_BLINK_H_

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
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-blink-forward.h"

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
#include "base/time/time.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {
namespace blink {





class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) Time {
 public:
  using DataView = TimeDataView;
  using Data_ = internal::Time_Data;

  template <typename... Args>
  static TimePtr New(Args&&... args) {
    return TimePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TimePtr From(const U& u) {
    return mojo::TypeConverter<TimePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Time>::Convert(*this);
  }


  Time();

  explicit Time(
      int64_t internal_value);

  ~Time();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TimePtr>
  TimePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Time>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Time::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Time::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Time_UnserializedMessageContext<
            UserType, Time::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Time::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Time::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Time_UnserializedMessageContext<
            UserType, Time::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Time::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t internal_value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) TimeDelta {
 public:
  using DataView = TimeDeltaDataView;
  using Data_ = internal::TimeDelta_Data;

  template <typename... Args>
  static TimeDeltaPtr New(Args&&... args) {
    return TimeDeltaPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TimeDeltaPtr From(const U& u) {
    return mojo::TypeConverter<TimeDeltaPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TimeDelta>::Convert(*this);
  }


  TimeDelta();

  explicit TimeDelta(
      int64_t microseconds);

  ~TimeDelta();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TimeDeltaPtr>
  TimeDeltaPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TimeDelta>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TimeDelta::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TimeDelta::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TimeDelta_UnserializedMessageContext<
            UserType, TimeDelta::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TimeDelta::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TimeDelta::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TimeDelta_UnserializedMessageContext<
            UserType, TimeDelta::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TimeDelta::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t microseconds;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) TimeTicks {
 public:
  using DataView = TimeTicksDataView;
  using Data_ = internal::TimeTicks_Data;

  template <typename... Args>
  static TimeTicksPtr New(Args&&... args) {
    return TimeTicksPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TimeTicksPtr From(const U& u) {
    return mojo::TypeConverter<TimeTicksPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TimeTicks>::Convert(*this);
  }


  TimeTicks();

  explicit TimeTicks(
      int64_t internal_value);

  ~TimeTicks();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TimeTicksPtr>
  TimeTicksPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TimeTicks>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TimeTicks::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TimeTicks::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TimeTicks_UnserializedMessageContext<
            UserType, TimeTicks::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TimeTicks::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TimeTicks::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TimeTicks_UnserializedMessageContext<
            UserType, TimeTicks::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TimeTicks::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t internal_value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






template <typename StructPtrType>
TimePtr Time::Clone() const {
  return New(
      mojo::Clone(internal_value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Time>::value>::type*>
bool Time::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->internal_value, other_struct.internal_value))
    return false;
  return true;
}
template <typename StructPtrType>
TimeDeltaPtr TimeDelta::Clone() const {
  return New(
      mojo::Clone(microseconds)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TimeDelta>::value>::type*>
bool TimeDelta::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->microseconds, other_struct.microseconds))
    return false;
  return true;
}
template <typename StructPtrType>
TimeTicksPtr TimeTicks::Clone() const {
  return New(
      mojo::Clone(internal_value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TimeTicks>::value>::type*>
bool TimeTicks::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->internal_value, other_struct.internal_value))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) StructTraits<::mojo_base::mojom::blink::Time::DataView,
                                         ::mojo_base::mojom::blink::TimePtr> {
  static bool IsNull(const ::mojo_base::mojom::blink::TimePtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::blink::TimePtr* output) { output->reset(); }

  static decltype(::mojo_base::mojom::blink::Time::internal_value) internal_value(
      const ::mojo_base::mojom::blink::TimePtr& input) {
    return input->internal_value;
  }

  static bool Read(::mojo_base::mojom::blink::Time::DataView input, ::mojo_base::mojom::blink::TimePtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) StructTraits<::mojo_base::mojom::blink::TimeDelta::DataView,
                                         ::mojo_base::mojom::blink::TimeDeltaPtr> {
  static bool IsNull(const ::mojo_base::mojom::blink::TimeDeltaPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::blink::TimeDeltaPtr* output) { output->reset(); }

  static decltype(::mojo_base::mojom::blink::TimeDelta::microseconds) microseconds(
      const ::mojo_base::mojom::blink::TimeDeltaPtr& input) {
    return input->microseconds;
  }

  static bool Read(::mojo_base::mojom::blink::TimeDelta::DataView input, ::mojo_base::mojom::blink::TimeDeltaPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) StructTraits<::mojo_base::mojom::blink::TimeTicks::DataView,
                                         ::mojo_base::mojom::blink::TimeTicksPtr> {
  static bool IsNull(const ::mojo_base::mojom::blink::TimeTicksPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::blink::TimeTicksPtr* output) { output->reset(); }

  static decltype(::mojo_base::mojom::blink::TimeTicks::internal_value) internal_value(
      const ::mojo_base::mojom::blink::TimeTicksPtr& input) {
    return input->internal_value;
  }

  static bool Read(::mojo_base::mojom::blink::TimeTicks::DataView input, ::mojo_base::mojom::blink::TimeTicksPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_BLINK_H_