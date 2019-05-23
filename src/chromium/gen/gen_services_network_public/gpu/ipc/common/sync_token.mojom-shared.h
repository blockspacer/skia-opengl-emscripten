// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_SHARED_H_
#define GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_SHARED_H_

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
#include "gpu/ipc/common/sync_token.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gpu {
namespace mojom {
class SyncTokenDataView;



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gpu::mojom::SyncTokenDataView> {
  using Data = ::gpu::mojom::internal::SyncToken_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gpu {
namespace mojom {


enum class CommandBufferNamespace : int32_t {
  
  INVALID = -1,
  
  GPU_IO,
  
  IN_PROCESS,
  
  MOJO,
  
  MOJO_LOCAL,
  
  NUM_COMMAND_BUFFER_NAMESPACES,
  kMinValue = -1,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, CommandBufferNamespace value);
inline bool IsKnownEnumValue(CommandBufferNamespace value) {
  return internal::CommandBufferNamespace_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class SyncTokenDataView {
 public:
  SyncTokenDataView() {}

  SyncTokenDataView(
      internal::SyncToken_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool verified_flush() const {
    return data_->verified_flush;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNamespaceId(UserType* output) const {
    auto data_value = data_->namespace_id;
    return mojo::internal::Deserialize<::gpu::mojom::CommandBufferNamespace>(
        data_value, output);
  }

  CommandBufferNamespace namespace_id() const {
    return static_cast<CommandBufferNamespace>(data_->namespace_id);
  }
  uint64_t command_buffer_id() const {
    return data_->command_buffer_id;
  }
  uint64_t release_count() const {
    return data_->release_count;
  }
 private:
  internal::SyncToken_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace std {

template <>
struct hash<::gpu::mojom::CommandBufferNamespace>
    : public mojo::internal::EnumHashImpl<::gpu::mojom::CommandBufferNamespace> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gpu::mojom::CommandBufferNamespace, ::gpu::mojom::CommandBufferNamespace> {
  static ::gpu::mojom::CommandBufferNamespace ToMojom(::gpu::mojom::CommandBufferNamespace input) { return input; }
  static bool FromMojom(::gpu::mojom::CommandBufferNamespace input, ::gpu::mojom::CommandBufferNamespace* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::CommandBufferNamespace, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gpu::mojom::CommandBufferNamespace, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gpu::mojom::CommandBufferNamespace>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::SyncTokenDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::SyncTokenDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::SyncToken_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->verified_flush = Traits::verified_flush(input);
    mojo::internal::Serialize<::gpu::mojom::CommandBufferNamespace>(
        Traits::namespace_id(input), &(*output)->namespace_id);
    (*output)->command_buffer_id = Traits::command_buffer_id(input);
    (*output)->release_count = Traits::release_count(input);
  }

  static bool Deserialize(::gpu::mojom::internal::SyncToken_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::SyncTokenDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gpu {
namespace mojom {




}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_SHARED_H_