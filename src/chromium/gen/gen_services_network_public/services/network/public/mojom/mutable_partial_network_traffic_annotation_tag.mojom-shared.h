// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_PARTIAL_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_PARTIAL_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/mutable_partial_network_traffic_annotation_tag.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class MutablePartialNetworkTrafficAnnotationTagDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::MutablePartialNetworkTrafficAnnotationTagDataView> {
  using Data = ::network::mojom::internal::MutablePartialNetworkTrafficAnnotationTag_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
class MutablePartialNetworkTrafficAnnotationTagDataView {
 public:
  MutablePartialNetworkTrafficAnnotationTagDataView() {}

  MutablePartialNetworkTrafficAnnotationTagDataView(
      internal::MutablePartialNetworkTrafficAnnotationTag_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t unique_id_hash_code() const {
    return data_->unique_id_hash_code;
  }
  uint32_t completing_id_hash_code() const {
    return data_->completing_id_hash_code;
  }
 private:
  internal::MutablePartialNetworkTrafficAnnotationTag_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::MutablePartialNetworkTrafficAnnotationTagDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::MutablePartialNetworkTrafficAnnotationTagDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::MutablePartialNetworkTrafficAnnotationTag_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->unique_id_hash_code = Traits::unique_id_hash_code(input);
    (*output)->completing_id_hash_code = Traits::completing_id_hash_code(input);
  }

  static bool Deserialize(::network::mojom::internal::MutablePartialNetworkTrafficAnnotationTag_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::MutablePartialNetworkTrafficAnnotationTagDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_PARTIAL_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_SHARED_H_