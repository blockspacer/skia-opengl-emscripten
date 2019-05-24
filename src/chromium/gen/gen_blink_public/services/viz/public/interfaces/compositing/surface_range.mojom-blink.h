// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_RANGE_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_RANGE_MOJOM_BLINK_H_

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
#include "services/viz/public/interfaces/compositing/surface_range.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/surface_range.mojom-blink-forward.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-blink.h"

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








class  SurfaceRange {
 public:
  using DataView = SurfaceRangeDataView;
  using Data_ = internal::SurfaceRange_Data;

  template <typename... Args>
  static SurfaceRangePtr New(Args&&... args) {
    return SurfaceRangePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SurfaceRangePtr From(const U& u) {
    return mojo::TypeConverter<SurfaceRangePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SurfaceRange>::Convert(*this);
  }


  SurfaceRange();

  SurfaceRange(
      const base::Optional<viz::SurfaceId>& start,
      const viz::SurfaceId& end);

  ~SurfaceRange();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SurfaceRangePtr>
  SurfaceRangePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SurfaceRange>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SurfaceRange::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SurfaceRange::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SurfaceRange_UnserializedMessageContext<
            UserType, SurfaceRange::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SurfaceRange::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SurfaceRange::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SurfaceRange_UnserializedMessageContext<
            UserType, SurfaceRange::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SurfaceRange::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::Optional<viz::SurfaceId> start;
  
  viz::SurfaceId end;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SurfaceRangePtr SurfaceRange::Clone() const {
  return New(
      mojo::Clone(start),
      mojo::Clone(end)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SurfaceRange>::value>::type*>
bool SurfaceRange::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->start, other_struct.start))
    return false;
  if (!mojo::Equals(this->end, other_struct.end))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::blink::SurfaceRange::DataView,
                                         ::viz::mojom::blink::SurfaceRangePtr> {
  static bool IsNull(const ::viz::mojom::blink::SurfaceRangePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::SurfaceRangePtr* output) { output->reset(); }

  static const decltype(::viz::mojom::blink::SurfaceRange::start)& start(
      const ::viz::mojom::blink::SurfaceRangePtr& input) {
    return input->start;
  }

  static const decltype(::viz::mojom::blink::SurfaceRange::end)& end(
      const ::viz::mojom::blink::SurfaceRangePtr& input) {
    return input->end;
  }

  static bool Read(::viz::mojom::blink::SurfaceRange::DataView input, ::viz::mojom::blink::SurfaceRangePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_RANGE_MOJOM_BLINK_H_