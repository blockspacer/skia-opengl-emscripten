// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_RANGE_MOJO_RANGE_MOJOM_BLINK_H_
#define UI_GFX_RANGE_MOJO_RANGE_MOJOM_BLINK_H_

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
#include "ui/gfx/range/mojo/range.mojom-shared.h"
#include "ui/gfx/range/mojo/range.mojom-blink-forward.h"

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




namespace gfx {
namespace mojom {
namespace blink {





class  Range {
 public:
  using DataView = RangeDataView;
  using Data_ = internal::Range_Data;

  template <typename... Args>
  static RangePtr New(Args&&... args) {
    return RangePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RangePtr From(const U& u) {
    return mojo::TypeConverter<RangePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Range>::Convert(*this);
  }


  Range();

  Range(
      uint32_t start,
      uint32_t end);

  ~Range();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RangePtr>
  RangePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Range>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Range::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Range::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Range_UnserializedMessageContext<
            UserType, Range::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Range::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Range::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Range_UnserializedMessageContext<
            UserType, Range::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Range::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t start;
  
  uint32_t end;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  RangeF {
 public:
  using DataView = RangeFDataView;
  using Data_ = internal::RangeF_Data;

  template <typename... Args>
  static RangeFPtr New(Args&&... args) {
    return RangeFPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RangeFPtr From(const U& u) {
    return mojo::TypeConverter<RangeFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RangeF>::Convert(*this);
  }


  RangeF();

  RangeF(
      float start,
      float end);

  ~RangeF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RangeFPtr>
  RangeFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RangeF>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RangeF::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RangeF::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RangeF_UnserializedMessageContext<
            UserType, RangeF::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RangeF::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return RangeF::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RangeF_UnserializedMessageContext<
            UserType, RangeF::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RangeF::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float start;
  
  float end;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





template <typename StructPtrType>
RangePtr Range::Clone() const {
  return New(
      mojo::Clone(start),
      mojo::Clone(end)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Range>::value>::type*>
bool Range::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->start, other_struct.start))
    return false;
  if (!mojo::Equals(this->end, other_struct.end))
    return false;
  return true;
}
template <typename StructPtrType>
RangeFPtr RangeF::Clone() const {
  return New(
      mojo::Clone(start),
      mojo::Clone(end)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RangeF>::value>::type*>
bool RangeF::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->start, other_struct.start))
    return false;
  if (!mojo::Equals(this->end, other_struct.end))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::blink::Range::DataView,
                                         ::gfx::mojom::blink::RangePtr> {
  static bool IsNull(const ::gfx::mojom::blink::RangePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::blink::RangePtr* output) { output->reset(); }

  static decltype(::gfx::mojom::blink::Range::start) start(
      const ::gfx::mojom::blink::RangePtr& input) {
    return input->start;
  }

  static decltype(::gfx::mojom::blink::Range::end) end(
      const ::gfx::mojom::blink::RangePtr& input) {
    return input->end;
  }

  static bool Read(::gfx::mojom::blink::Range::DataView input, ::gfx::mojom::blink::RangePtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::blink::RangeF::DataView,
                                         ::gfx::mojom::blink::RangeFPtr> {
  static bool IsNull(const ::gfx::mojom::blink::RangeFPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::blink::RangeFPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::blink::RangeF::start) start(
      const ::gfx::mojom::blink::RangeFPtr& input) {
    return input->start;
  }

  static decltype(::gfx::mojom::blink::RangeF::end) end(
      const ::gfx::mojom::blink::RangeFPtr& input) {
    return input->end;
  }

  static bool Read(::gfx::mojom::blink::RangeF::DataView input, ::gfx::mojom::blink::RangeFPtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_RANGE_MOJO_RANGE_MOJOM_BLINK_H_