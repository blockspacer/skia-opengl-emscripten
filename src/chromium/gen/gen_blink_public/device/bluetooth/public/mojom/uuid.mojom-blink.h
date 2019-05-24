// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_MOJOM_UUID_MOJOM_BLINK_H_
#define DEVICE_BLUETOOTH_PUBLIC_MOJOM_UUID_MOJOM_BLINK_H_

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
#include "device/bluetooth/public/mojom/uuid.mojom-shared.h"
#include "device/bluetooth/public/mojom/uuid.mojom-blink-forward.h"

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




namespace bluetooth {
namespace mojom {
namespace blink {





class  UUID {
 public:
  using DataView = UUIDDataView;
  using Data_ = internal::UUID_Data;

  template <typename... Args>
  static UUIDPtr New(Args&&... args) {
    return UUIDPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UUIDPtr From(const U& u) {
    return mojo::TypeConverter<UUIDPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UUID>::Convert(*this);
  }


  UUID();

  explicit UUID(
      const WTF::String& uuid);

  ~UUID();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UUIDPtr>
  UUIDPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UUID>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UUID::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UUID::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UUID_UnserializedMessageContext<
            UserType, UUID::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UUID::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return UUID::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UUID_UnserializedMessageContext<
            UserType, UUID::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UUID::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String uuid;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
UUIDPtr UUID::Clone() const {
  return New(
      mojo::Clone(uuid)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UUID>::value>::type*>
bool UUID::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->uuid, other_struct.uuid))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace bluetooth

namespace mojo {


template <>
struct  StructTraits<::bluetooth::mojom::blink::UUID::DataView,
                                         ::bluetooth::mojom::blink::UUIDPtr> {
  static bool IsNull(const ::bluetooth::mojom::blink::UUIDPtr& input) { return !input; }
  static void SetToNull(::bluetooth::mojom::blink::UUIDPtr* output) { output->reset(); }

  static const decltype(::bluetooth::mojom::blink::UUID::uuid)& uuid(
      const ::bluetooth::mojom::blink::UUIDPtr& input) {
    return input->uuid;
  }

  static bool Read(::bluetooth::mojom::blink::UUID::DataView input, ::bluetooth::mojom::blink::UUIDPtr* output);
};

}  // namespace mojo

#endif  // DEVICE_BLUETOOTH_PUBLIC_MOJOM_UUID_MOJOM_BLINK_H_