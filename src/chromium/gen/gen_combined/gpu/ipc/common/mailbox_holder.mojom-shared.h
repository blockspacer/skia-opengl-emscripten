// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_SHARED_H_
#define GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared-internal.h"
#include "gpu/ipc/common/mailbox.mojom-shared.h"
#include "gpu/ipc/common/sync_token.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gpu {
namespace mojom {
class MailboxHolderDataView;



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gpu::mojom::MailboxHolderDataView> {
  using Data = ::gpu::mojom::internal::MailboxHolder_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gpu {
namespace mojom {
class MailboxHolderDataView {
 public:
  MailboxHolderDataView() {}

  MailboxHolderDataView(
      internal::MailboxHolder_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMailboxDataView(
      ::gpu::mojom::MailboxDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMailbox(UserType* output) {
    auto* pointer = data_->mailbox.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxDataView>(
        pointer, output, context_);
  }
  inline void GetSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSyncToken(UserType* output) {
    auto* pointer = data_->sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenDataView>(
        pointer, output, context_);
  }
  uint32_t texture_target() const {
    return data_->texture_target;
  }
 private:
  internal::MailboxHolder_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::MailboxHolderDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::MailboxHolderDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::MailboxHolder_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::mailbox(input)) in_mailbox = Traits::mailbox(input);
    typename decltype((*output)->mailbox)::BaseType::BufferWriter
        mailbox_writer;
    mojo::internal::Serialize<::gpu::mojom::MailboxDataView>(
        in_mailbox, buffer, &mailbox_writer, context);
    (*output)->mailbox.Set(
        mailbox_writer.is_null() ? nullptr : mailbox_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mailbox.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mailbox in MailboxHolder struct");
    decltype(Traits::sync_token(input)) in_sync_token = Traits::sync_token(input);
    typename decltype((*output)->sync_token)::BaseType::BufferWriter
        sync_token_writer;
    mojo::internal::Serialize<::gpu::mojom::SyncTokenDataView>(
        in_sync_token, buffer, &sync_token_writer, context);
    (*output)->sync_token.Set(
        sync_token_writer.is_null() ? nullptr : sync_token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sync_token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sync_token in MailboxHolder struct");
    (*output)->texture_target = Traits::texture_target(input);
  }

  static bool Deserialize(::gpu::mojom::internal::MailboxHolder_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::MailboxHolderDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gpu {
namespace mojom {

inline void MailboxHolderDataView::GetMailboxDataView(
    ::gpu::mojom::MailboxDataView* output) {
  auto pointer = data_->mailbox.Get();
  *output = ::gpu::mojom::MailboxDataView(pointer, context_);
}
inline void MailboxHolderDataView::GetSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_SHARED_H_