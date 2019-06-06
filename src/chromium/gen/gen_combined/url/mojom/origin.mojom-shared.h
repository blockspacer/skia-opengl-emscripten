// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef URL_MOJOM_ORIGIN_MOJOM_SHARED_H_
#define URL_MOJOM_ORIGIN_MOJOM_SHARED_H_

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
#include "url/mojom/origin.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace url {
namespace mojom {
class OriginDataView;



}  // namespace mojom
}  // namespace url

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::url::mojom::OriginDataView> {
  using Data = ::url::mojom::internal::Origin_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace url {
namespace mojom {
class OriginDataView {
 public:
  OriginDataView() {}

  OriginDataView(
      internal::Origin_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSchemeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScheme(UserType* output) {
    auto* pointer = data_->scheme.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint16_t port() const {
    return data_->port;
  }
  inline void GetNonceIfOpaqueDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNonceIfOpaque(UserType* output) {
    auto* pointer = data_->nonce_if_opaque.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::Origin_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace url

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

#if defined(ENABLE_GIPC)
template <typename MaybeConstUserType>
struct Serializer<::url::mojom::OriginDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::url::mojom::OriginDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::url::mojom::internal::Origin_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::scheme(input)) in_scheme = Traits::scheme(input);
    typename decltype((*output)->scheme)::BaseType::BufferWriter
        scheme_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_scheme, buffer, &scheme_writer, context);
    (*output)->scheme.Set(
        scheme_writer.is_null() ? nullptr : scheme_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scheme.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scheme in Origin struct");
    decltype(Traits::host(input)) in_host = Traits::host(input);
    typename decltype((*output)->host)::BaseType::BufferWriter
        host_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_host, buffer, &host_writer, context);
    (*output)->host.Set(
        host_writer.is_null() ? nullptr : host_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->host.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null host in Origin struct");
    (*output)->port = Traits::port(input);
    decltype(Traits::nonce_if_opaque(input)) in_nonce_if_opaque = Traits::nonce_if_opaque(input);
    typename decltype((*output)->nonce_if_opaque)::BaseType::BufferWriter
        nonce_if_opaque_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_nonce_if_opaque, buffer, &nonce_if_opaque_writer, context);
    (*output)->nonce_if_opaque.Set(
        nonce_if_opaque_writer.is_null() ? nullptr : nonce_if_opaque_writer.data());
  }

  static bool Deserialize(::url::mojom::internal::Origin_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::url::mojom::OriginDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};
#endif // ENABLE_GIPC

}  // namespace internal

}  // namespace mojo


namespace url {
namespace mojom {

inline void OriginDataView::GetSchemeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->scheme.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void OriginDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}

inline void OriginDataView::GetNonceIfOpaqueDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->nonce_if_opaque.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace url

#endif  // URL_MOJOM_ORIGIN_MOJOM_SHARED_H_
