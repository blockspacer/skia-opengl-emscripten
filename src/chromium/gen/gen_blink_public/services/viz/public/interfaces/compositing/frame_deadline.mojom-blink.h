// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FRAME_DEADLINE_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FRAME_DEADLINE_MOJOM_BLINK_H_

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
#include "services/viz/public/interfaces/compositing/frame_deadline.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/frame_deadline.mojom-blink-forward.h"
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




namespace viz {
namespace mojom {
namespace blink {








class  FrameDeadline {
 public:
  using DataView = FrameDeadlineDataView;
  using Data_ = internal::FrameDeadline_Data;

  template <typename... Args>
  static FrameDeadlinePtr New(Args&&... args) {
    return FrameDeadlinePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FrameDeadlinePtr From(const U& u) {
    return mojo::TypeConverter<FrameDeadlinePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FrameDeadline>::Convert(*this);
  }


  FrameDeadline();

  FrameDeadline(
      base::TimeTicks frame_start_time,
      uint32_t deadline_in_frames,
      base::TimeDelta frame_interval,
      bool use_default_lower_bound_deadline);

  ~FrameDeadline();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FrameDeadlinePtr>
  FrameDeadlinePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FrameDeadline>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FrameDeadline::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FrameDeadline::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FrameDeadline_UnserializedMessageContext<
            UserType, FrameDeadline::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FrameDeadline::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FrameDeadline::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FrameDeadline_UnserializedMessageContext<
            UserType, FrameDeadline::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FrameDeadline::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::TimeTicks frame_start_time;
  
  uint32_t deadline_in_frames;
  
  base::TimeDelta frame_interval;
  
  bool use_default_lower_bound_deadline;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
FrameDeadlinePtr FrameDeadline::Clone() const {
  return New(
      mojo::Clone(frame_start_time),
      mojo::Clone(deadline_in_frames),
      mojo::Clone(frame_interval),
      mojo::Clone(use_default_lower_bound_deadline)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FrameDeadline>::value>::type*>
bool FrameDeadline::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->frame_start_time, other_struct.frame_start_time))
    return false;
  if (!mojo::Equals(this->deadline_in_frames, other_struct.deadline_in_frames))
    return false;
  if (!mojo::Equals(this->frame_interval, other_struct.frame_interval))
    return false;
  if (!mojo::Equals(this->use_default_lower_bound_deadline, other_struct.use_default_lower_bound_deadline))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::blink::FrameDeadline::DataView,
                                         ::viz::mojom::blink::FrameDeadlinePtr> {
  static bool IsNull(const ::viz::mojom::blink::FrameDeadlinePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::FrameDeadlinePtr* output) { output->reset(); }

  static const decltype(::viz::mojom::blink::FrameDeadline::frame_start_time)& frame_start_time(
      const ::viz::mojom::blink::FrameDeadlinePtr& input) {
    return input->frame_start_time;
  }

  static decltype(::viz::mojom::blink::FrameDeadline::deadline_in_frames) deadline_in_frames(
      const ::viz::mojom::blink::FrameDeadlinePtr& input) {
    return input->deadline_in_frames;
  }

  static const decltype(::viz::mojom::blink::FrameDeadline::frame_interval)& frame_interval(
      const ::viz::mojom::blink::FrameDeadlinePtr& input) {
    return input->frame_interval;
  }

  static decltype(::viz::mojom::blink::FrameDeadline::use_default_lower_bound_deadline) use_default_lower_bound_deadline(
      const ::viz::mojom::blink::FrameDeadlinePtr& input) {
    return input->use_default_lower_bound_deadline;
  }

  static bool Read(::viz::mojom::blink::FrameDeadline::DataView input, ::viz::mojom::blink::FrameDeadlinePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FRAME_DEADLINE_MOJOM_BLINK_H_