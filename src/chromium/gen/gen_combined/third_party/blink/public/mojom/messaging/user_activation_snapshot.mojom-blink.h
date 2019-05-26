// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_USER_ACTIVATION_SNAPSHOT_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_USER_ACTIVATION_SNAPSHOT_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/messaging/user_activation_snapshot.mojom-shared.h"
#include "third_party/blink/public/mojom/messaging/user_activation_snapshot.mojom-blink-forward.h"

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
#include "third_party/blink/renderer/core/core_export.h"




namespace blink {
namespace mojom {
namespace blink {





class CORE_EXPORT UserActivationSnapshot {
 public:
  using DataView = UserActivationSnapshotDataView;
  using Data_ = internal::UserActivationSnapshot_Data;

  template <typename... Args>
  static UserActivationSnapshotPtr New(Args&&... args) {
    return UserActivationSnapshotPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UserActivationSnapshotPtr From(const U& u) {
    return mojo::TypeConverter<UserActivationSnapshotPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UserActivationSnapshot>::Convert(*this);
  }


  UserActivationSnapshot();

  UserActivationSnapshot(
      bool has_been_active,
      bool was_active);

  ~UserActivationSnapshot();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UserActivationSnapshotPtr>
  UserActivationSnapshotPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UserActivationSnapshot>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UserActivationSnapshot::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UserActivationSnapshot::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UserActivationSnapshot_UnserializedMessageContext<
            UserType, UserActivationSnapshot::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UserActivationSnapshot::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return UserActivationSnapshot::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UserActivationSnapshot_UnserializedMessageContext<
            UserType, UserActivationSnapshot::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UserActivationSnapshot::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool has_been_active;
  
  bool was_active;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
UserActivationSnapshotPtr UserActivationSnapshot::Clone() const {
  return New(
      mojo::Clone(has_been_active),
      mojo::Clone(was_active)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UserActivationSnapshot>::value>::type*>
bool UserActivationSnapshot::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->has_been_active, other_struct.has_been_active))
    return false;
  if (!mojo::Equals(this->was_active, other_struct.was_active))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::UserActivationSnapshot::DataView,
                                         ::blink::mojom::blink::UserActivationSnapshotPtr> {
  static bool IsNull(const ::blink::mojom::blink::UserActivationSnapshotPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::UserActivationSnapshotPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::UserActivationSnapshot::has_been_active) has_been_active(
      const ::blink::mojom::blink::UserActivationSnapshotPtr& input) {
    return input->has_been_active;
  }

  static decltype(::blink::mojom::blink::UserActivationSnapshot::was_active) was_active(
      const ::blink::mojom::blink::UserActivationSnapshotPtr& input) {
    return input->was_active;
  }

  static bool Read(::blink::mojom::blink::UserActivationSnapshot::DataView input, ::blink::mojom::blink::UserActivationSnapshotPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_USER_ACTIVATION_SNAPSHOT_MOJOM_BLINK_H_