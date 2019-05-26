// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_ARRAY_BUFFER_ARRAY_BUFFER_CONTENTS_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_ARRAY_BUFFER_ARRAY_BUFFER_CONTENTS_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/array_buffer/array_buffer_contents.mojom-shared.h"
#include "third_party/blink/public/mojom/array_buffer/array_buffer_contents.mojom-blink-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink.h"

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
#include "third_party/blink/renderer/platform/platform_export.h"




namespace blink {
namespace mojom {
namespace blink {








class PLATFORM_EXPORT SerializedArrayBufferContents {
 public:
  using DataView = SerializedArrayBufferContentsDataView;
  using Data_ = internal::SerializedArrayBufferContents_Data;

  template <typename... Args>
  static SerializedArrayBufferContentsPtr New(Args&&... args) {
    return SerializedArrayBufferContentsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerializedArrayBufferContentsPtr From(const U& u) {
    return mojo::TypeConverter<SerializedArrayBufferContentsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerializedArrayBufferContents>::Convert(*this);
  }


  SerializedArrayBufferContents();

  explicit SerializedArrayBufferContents(
      mojo_base::BigBuffer contents);

  ~SerializedArrayBufferContents();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerializedArrayBufferContentsPtr>
  SerializedArrayBufferContentsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerializedArrayBufferContents>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerializedArrayBufferContents::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerializedArrayBufferContents::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerializedArrayBufferContents_UnserializedMessageContext<
            UserType, SerializedArrayBufferContents::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerializedArrayBufferContents::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SerializedArrayBufferContents::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerializedArrayBufferContents_UnserializedMessageContext<
            UserType, SerializedArrayBufferContents::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerializedArrayBufferContents::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo_base::BigBuffer contents;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SerializedArrayBufferContents);
};

template <typename StructPtrType>
SerializedArrayBufferContentsPtr SerializedArrayBufferContents::Clone() const {
  return New(
      mojo::Clone(contents)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerializedArrayBufferContents>::value>::type*>
bool SerializedArrayBufferContents::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->contents, other_struct.contents))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SerializedArrayBufferContents::DataView,
                                         ::blink::mojom::blink::SerializedArrayBufferContentsPtr> {
  static bool IsNull(const ::blink::mojom::blink::SerializedArrayBufferContentsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SerializedArrayBufferContentsPtr* output) { output->reset(); }

  static  decltype(::blink::mojom::blink::SerializedArrayBufferContents::contents)& contents(
       ::blink::mojom::blink::SerializedArrayBufferContentsPtr& input) {
    return input->contents;
  }

  static bool Read(::blink::mojom::blink::SerializedArrayBufferContents::DataView input, ::blink::mojom::blink::SerializedArrayBufferContentsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_ARRAY_BUFFER_ARRAY_BUFFER_CONTENTS_MOJOM_BLINK_H_