// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_SERIALIZED_BLOB_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_SERIALIZED_BLOB_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-blink.h"

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
#include "third_party/blink/renderer/platform/blob/blob_data.h"
#include "third_party/blink/renderer/platform/platform_export.h"




namespace blink {
namespace mojom {
namespace blink {








class PLATFORM_EXPORT SerializedBlob {
 public:
  using DataView = SerializedBlobDataView;
  using Data_ = internal::SerializedBlob_Data;

  template <typename... Args>
  static SerializedBlobPtr New(Args&&... args) {
    return SerializedBlobPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerializedBlobPtr From(const U& u) {
    return mojo::TypeConverter<SerializedBlobPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerializedBlob>::Convert(*this);
  }


  SerializedBlob();

  SerializedBlob(
      const WTF::String& uuid,
      const WTF::String& content_type,
      uint64_t size,
      ::blink::mojom::blink::BlobPtrInfo blob);

  ~SerializedBlob();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerializedBlobPtr>
  SerializedBlobPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerializedBlob>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerializedBlob::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerializedBlob::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerializedBlob_UnserializedMessageContext<
            UserType, SerializedBlob::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerializedBlob::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SerializedBlob::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerializedBlob_UnserializedMessageContext<
            UserType, SerializedBlob::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerializedBlob::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String uuid;
  
  WTF::String content_type;
  
  uint64_t size;
  
  ::blink::mojom::blink::BlobPtrInfo blob;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SerializedBlob);
};

template <typename StructPtrType>
SerializedBlobPtr SerializedBlob::Clone() const {
  return New(
      mojo::Clone(uuid),
      mojo::Clone(content_type),
      mojo::Clone(size),
      mojo::Clone(blob)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerializedBlob>::value>::type*>
bool SerializedBlob::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->uuid, other_struct.uuid))
    return false;
  if (!mojo::Equals(this->content_type, other_struct.content_type))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->blob, other_struct.blob))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SerializedBlob::DataView,
                                         ::blink::mojom::blink::SerializedBlobPtr> {
  static bool IsNull(const ::blink::mojom::blink::SerializedBlobPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SerializedBlobPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::SerializedBlob::uuid)& uuid(
      const ::blink::mojom::blink::SerializedBlobPtr& input) {
    return input->uuid;
  }

  static const decltype(::blink::mojom::blink::SerializedBlob::content_type)& content_type(
      const ::blink::mojom::blink::SerializedBlobPtr& input) {
    return input->content_type;
  }

  static decltype(::blink::mojom::blink::SerializedBlob::size) size(
      const ::blink::mojom::blink::SerializedBlobPtr& input) {
    return input->size;
  }

  static  decltype(::blink::mojom::blink::SerializedBlob::blob)& blob(
       ::blink::mojom::blink::SerializedBlobPtr& input) {
    return input->blob;
  }

  static bool Read(::blink::mojom::blink::SerializedBlob::DataView input, ::blink::mojom::blink::SerializedBlobPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_SERIALIZED_BLOB_MOJOM_BLINK_H_