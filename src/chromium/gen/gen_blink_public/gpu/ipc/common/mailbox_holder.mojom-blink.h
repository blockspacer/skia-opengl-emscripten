// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_BLINK_H_
#define GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_BLINK_H_

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
#include "gpu/ipc/common/mailbox_holder.mojom-shared.h"
#include "gpu/ipc/common/mailbox_holder.mojom-blink-forward.h"
#include "gpu/ipc/common/mailbox.mojom-blink.h"
#include "gpu/ipc/common/sync_token.mojom-blink.h"

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
#include "gpu/command_buffer/common/mailbox_holder.h"




namespace gpu {
namespace mojom {
namespace blink {








class  MailboxHolder {
 public:
  using DataView = MailboxHolderDataView;
  using Data_ = internal::MailboxHolder_Data;

  template <typename... Args>
  static MailboxHolderPtr New(Args&&... args) {
    return MailboxHolderPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MailboxHolderPtr From(const U& u) {
    return mojo::TypeConverter<MailboxHolderPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MailboxHolder>::Convert(*this);
  }


  MailboxHolder();

  MailboxHolder(
      ::gpu::mojom::blink::MailboxPtr mailbox,
      const ::gpu::SyncToken& sync_token,
      uint32_t texture_target);

  ~MailboxHolder();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MailboxHolderPtr>
  MailboxHolderPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MailboxHolder>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MailboxHolder::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MailboxHolder::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MailboxHolder_UnserializedMessageContext<
            UserType, MailboxHolder::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MailboxHolder::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MailboxHolder::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MailboxHolder_UnserializedMessageContext<
            UserType, MailboxHolder::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MailboxHolder::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::gpu::mojom::blink::MailboxPtr mailbox;
  
  ::gpu::SyncToken sync_token;
  
  uint32_t texture_target;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MailboxHolder);
};

template <typename StructPtrType>
MailboxHolderPtr MailboxHolder::Clone() const {
  return New(
      mojo::Clone(mailbox),
      mojo::Clone(sync_token),
      mojo::Clone(texture_target)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MailboxHolder>::value>::type*>
bool MailboxHolder::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mailbox, other_struct.mailbox))
    return false;
  if (!mojo::Equals(this->sync_token, other_struct.sync_token))
    return false;
  if (!mojo::Equals(this->texture_target, other_struct.texture_target))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::blink::MailboxHolder::DataView,
                                         ::gpu::mojom::blink::MailboxHolderPtr> {
  static bool IsNull(const ::gpu::mojom::blink::MailboxHolderPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::MailboxHolderPtr* output) { output->reset(); }

  static const decltype(::gpu::mojom::blink::MailboxHolder::mailbox)& mailbox(
      const ::gpu::mojom::blink::MailboxHolderPtr& input) {
    return input->mailbox;
  }

  static const decltype(::gpu::mojom::blink::MailboxHolder::sync_token)& sync_token(
      const ::gpu::mojom::blink::MailboxHolderPtr& input) {
    return input->sync_token;
  }

  static decltype(::gpu::mojom::blink::MailboxHolder::texture_target) texture_target(
      const ::gpu::mojom::blink::MailboxHolderPtr& input) {
    return input->texture_target;
  }

  static bool Read(::gpu::mojom::blink::MailboxHolder::DataView input, ::gpu::mojom::blink::MailboxHolderPtr* output);
};

}  // namespace mojo

#endif  // GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_BLINK_H_