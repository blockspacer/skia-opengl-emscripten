// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_PRESENTATION_FEEDBACK_MOJOM_H_
#define UI_GFX_MOJO_PRESENTATION_FEEDBACK_MOJOM_H_

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
#include "ui/gfx/mojo/presentation_feedback.mojom-shared.h"
#include "ui/gfx/mojo/presentation_feedback.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
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
#include "ui/gfx/presentation_feedback.h"




namespace gfx {
namespace mojom {








class  PresentationFeedback {
 public:
  using DataView = PresentationFeedbackDataView;
  using Data_ = internal::PresentationFeedback_Data;

  template <typename... Args>
  static PresentationFeedbackPtr New(Args&&... args) {
    return PresentationFeedbackPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PresentationFeedbackPtr From(const U& u) {
    return mojo::TypeConverter<PresentationFeedbackPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PresentationFeedback>::Convert(*this);
  }


  PresentationFeedback();

  PresentationFeedback(
      base::TimeTicks timestamp,
      base::TimeDelta interval,
      uint32_t flags);

  ~PresentationFeedback();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PresentationFeedbackPtr>
  PresentationFeedbackPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PresentationFeedback>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PresentationFeedback::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PresentationFeedback::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PresentationFeedback_UnserializedMessageContext<
            UserType, PresentationFeedback::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PresentationFeedback::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PresentationFeedback::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PresentationFeedback_UnserializedMessageContext<
            UserType, PresentationFeedback::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PresentationFeedback::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::TimeTicks timestamp;
  
  base::TimeDelta interval;
  
  uint32_t flags;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
PresentationFeedbackPtr PresentationFeedback::Clone() const {
  return New(
      mojo::Clone(timestamp),
      mojo::Clone(interval),
      mojo::Clone(flags)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PresentationFeedback>::value>::type*>
bool PresentationFeedback::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  if (!mojo::Equals(this->interval, other_struct.interval))
    return false;
  if (!mojo::Equals(this->flags, other_struct.flags))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::PresentationFeedback::DataView,
                                         ::gfx::mojom::PresentationFeedbackPtr> {
  static bool IsNull(const ::gfx::mojom::PresentationFeedbackPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::PresentationFeedbackPtr* output) { output->reset(); }

  static const decltype(::gfx::mojom::PresentationFeedback::timestamp)& timestamp(
      const ::gfx::mojom::PresentationFeedbackPtr& input) {
    return input->timestamp;
  }

  static const decltype(::gfx::mojom::PresentationFeedback::interval)& interval(
      const ::gfx::mojom::PresentationFeedbackPtr& input) {
    return input->interval;
  }

  static decltype(::gfx::mojom::PresentationFeedback::flags) flags(
      const ::gfx::mojom::PresentationFeedbackPtr& input) {
    return input->flags;
  }

  static bool Read(::gfx::mojom::PresentationFeedback::DataView input, ::gfx::mojom::PresentationFeedbackPtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_MOJO_PRESENTATION_FEEDBACK_MOJOM_H_