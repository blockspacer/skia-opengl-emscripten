// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_BLINK_H_
#define UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_BLINK_H_

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
#include "ui/latency/mojo/latency_info.mojom-shared.h"
#include "ui/latency/mojo/latency_info.mojom-blink-forward.h"
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




namespace WTF {
struct ui_mojom_internal_LatencyComponentType_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::LatencyComponentType& value) {
    using utype = std::underlying_type<::ui::mojom::LatencyComponentType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::LatencyComponentType& left, const ::ui::mojom::LatencyComponentType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::LatencyComponentType>
    : public GenericHashTraits<::ui::mojom::LatencyComponentType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::LatencyComponentType& value) {
    return value == static_cast<::ui::mojom::LatencyComponentType>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::LatencyComponentType& slot, bool) {
    slot = static_cast<::ui::mojom::LatencyComponentType>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::LatencyComponentType& value) {
    return value == static_cast<::ui::mojom::LatencyComponentType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ui_mojom_internal_SourceEventType_DataHashFn {
  static unsigned GetHash(const ::ui::mojom::SourceEventType& value) {
    using utype = std::underlying_type<::ui::mojom::SourceEventType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ui::mojom::SourceEventType& left, const ::ui::mojom::SourceEventType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ui::mojom::SourceEventType>
    : public GenericHashTraits<::ui::mojom::SourceEventType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ui::mojom::SourceEventType& value) {
    return value == static_cast<::ui::mojom::SourceEventType>(-1000000);
  }
  static void ConstructDeletedValue(::ui::mojom::SourceEventType& slot, bool) {
    slot = static_cast<::ui::mojom::SourceEventType>(-1000001);
  }
  static bool IsDeletedValue(const ::ui::mojom::SourceEventType& value) {
    return value == static_cast<::ui::mojom::SourceEventType>(-1000001);
  }
};
}  // namespace WTF


namespace ui {
namespace mojom {
namespace blink {








class  LatencyInfo {
 public:
  using DataView = LatencyInfoDataView;
  using Data_ = internal::LatencyInfo_Data;

  template <typename... Args>
  static LatencyInfoPtr New(Args&&... args) {
    return LatencyInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LatencyInfoPtr From(const U& u) {
    return mojo::TypeConverter<LatencyInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LatencyInfo>::Convert(*this);
  }


  LatencyInfo();

  LatencyInfo(
      const WTF::String& trace_name,
      const WTF::HashMap<LatencyComponentType, base::TimeTicks>& latency_components,
      int64_t trace_id,
      int64_t ukm_source_id,
      bool coalesced,
      bool began,
      bool terminated,
      SourceEventType source_event_type,
      float scroll_update_delta,
      float predicted_scroll_update_delta);

  ~LatencyInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LatencyInfoPtr>
  LatencyInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LatencyInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LatencyInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LatencyInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LatencyInfo_UnserializedMessageContext<
            UserType, LatencyInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LatencyInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return LatencyInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LatencyInfo_UnserializedMessageContext<
            UserType, LatencyInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LatencyInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String trace_name;
  
  WTF::HashMap<LatencyComponentType, base::TimeTicks> latency_components;
  
  int64_t trace_id;
  
  int64_t ukm_source_id;
  
  bool coalesced;
  
  bool began;
  
  bool terminated;
  
  SourceEventType source_event_type;
  
  float scroll_update_delta;
  
  float predicted_scroll_update_delta;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
LatencyInfoPtr LatencyInfo::Clone() const {
  return New(
      mojo::Clone(trace_name),
      mojo::Clone(latency_components),
      mojo::Clone(trace_id),
      mojo::Clone(ukm_source_id),
      mojo::Clone(coalesced),
      mojo::Clone(began),
      mojo::Clone(terminated),
      mojo::Clone(source_event_type),
      mojo::Clone(scroll_update_delta),
      mojo::Clone(predicted_scroll_update_delta)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LatencyInfo>::value>::type*>
bool LatencyInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->trace_name, other_struct.trace_name))
    return false;
  if (!mojo::Equals(this->latency_components, other_struct.latency_components))
    return false;
  if (!mojo::Equals(this->trace_id, other_struct.trace_id))
    return false;
  if (!mojo::Equals(this->ukm_source_id, other_struct.ukm_source_id))
    return false;
  if (!mojo::Equals(this->coalesced, other_struct.coalesced))
    return false;
  if (!mojo::Equals(this->began, other_struct.began))
    return false;
  if (!mojo::Equals(this->terminated, other_struct.terminated))
    return false;
  if (!mojo::Equals(this->source_event_type, other_struct.source_event_type))
    return false;
  if (!mojo::Equals(this->scroll_update_delta, other_struct.scroll_update_delta))
    return false;
  if (!mojo::Equals(this->predicted_scroll_update_delta, other_struct.predicted_scroll_update_delta))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::blink::LatencyInfo::DataView,
                                         ::ui::mojom::blink::LatencyInfoPtr> {
  static bool IsNull(const ::ui::mojom::blink::LatencyInfoPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::blink::LatencyInfoPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::blink::LatencyInfo::trace_name)& trace_name(
      const ::ui::mojom::blink::LatencyInfoPtr& input) {
    return input->trace_name;
  }

  static const decltype(::ui::mojom::blink::LatencyInfo::latency_components)& latency_components(
      const ::ui::mojom::blink::LatencyInfoPtr& input) {
    return input->latency_components;
  }

  static decltype(::ui::mojom::blink::LatencyInfo::trace_id) trace_id(
      const ::ui::mojom::blink::LatencyInfoPtr& input) {
    return input->trace_id;
  }

  static decltype(::ui::mojom::blink::LatencyInfo::ukm_source_id) ukm_source_id(
      const ::ui::mojom::blink::LatencyInfoPtr& input) {
    return input->ukm_source_id;
  }

  static decltype(::ui::mojom::blink::LatencyInfo::coalesced) coalesced(
      const ::ui::mojom::blink::LatencyInfoPtr& input) {
    return input->coalesced;
  }

  static decltype(::ui::mojom::blink::LatencyInfo::began) began(
      const ::ui::mojom::blink::LatencyInfoPtr& input) {
    return input->began;
  }

  static decltype(::ui::mojom::blink::LatencyInfo::terminated) terminated(
      const ::ui::mojom::blink::LatencyInfoPtr& input) {
    return input->terminated;
  }

  static decltype(::ui::mojom::blink::LatencyInfo::source_event_type) source_event_type(
      const ::ui::mojom::blink::LatencyInfoPtr& input) {
    return input->source_event_type;
  }

  static decltype(::ui::mojom::blink::LatencyInfo::scroll_update_delta) scroll_update_delta(
      const ::ui::mojom::blink::LatencyInfoPtr& input) {
    return input->scroll_update_delta;
  }

  static decltype(::ui::mojom::blink::LatencyInfo::predicted_scroll_update_delta) predicted_scroll_update_delta(
      const ::ui::mojom::blink::LatencyInfoPtr& input) {
    return input->predicted_scroll_update_delta;
  }

  static bool Read(::ui::mojom::blink::LatencyInfo::DataView input, ::ui::mojom::blink::LatencyInfoPtr* output);
};

}  // namespace mojo

#endif  // UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_BLINK_H_