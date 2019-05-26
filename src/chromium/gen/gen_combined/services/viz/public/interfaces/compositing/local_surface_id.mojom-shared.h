// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class LocalSurfaceIdDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::LocalSurfaceIdDataView> {
  using Data = ::viz::mojom::internal::LocalSurfaceId_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class LocalSurfaceIdDataView {
 public:
  LocalSurfaceIdDataView() {}

  LocalSurfaceIdDataView(
      internal::LocalSurfaceId_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t parent_sequence_number() const {
    return data_->parent_sequence_number;
  }
  uint32_t child_sequence_number() const {
    return data_->child_sequence_number;
  }
  inline void GetEmbedTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEmbedToken(UserType* output) {
    auto* pointer = data_->embed_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::LocalSurfaceId_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::LocalSurfaceIdDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::LocalSurfaceIdDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::LocalSurfaceId_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->parent_sequence_number = Traits::parent_sequence_number(input);
    (*output)->child_sequence_number = Traits::child_sequence_number(input);
    decltype(Traits::embed_token(input)) in_embed_token = Traits::embed_token(input);
    typename decltype((*output)->embed_token)::BaseType::BufferWriter
        embed_token_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_embed_token, buffer, &embed_token_writer, context);
    (*output)->embed_token.Set(
        embed_token_writer.is_null() ? nullptr : embed_token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->embed_token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null embed_token in LocalSurfaceId struct");
  }

  static bool Deserialize(::viz::mojom::internal::LocalSurfaceId_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::LocalSurfaceIdDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void LocalSurfaceIdDataView::GetEmbedTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->embed_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_MOJOM_SHARED_H_