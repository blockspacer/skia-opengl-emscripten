// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-shared-internal.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#endif // ENABLE_GNET
#include "url/mojom/origin.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class URLLoaderFactoryBundleDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::URLLoaderFactoryBundleDataView> {
  using Data = ::blink::mojom::internal::URLLoaderFactoryBundle_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
class URLLoaderFactoryBundleDataView {
 public:
  URLLoaderFactoryBundleDataView() {}

  URLLoaderFactoryBundleDataView(
      internal::URLLoaderFactoryBundle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDefaultFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryPtrDataView>(
            &data_->default_factory, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetSchemeSpecificFactoriesDataView(
      mojo::MapDataView<mojo::StringDataView, ::network::mojom::URLLoaderFactoryPtrDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSchemeSpecificFactories(UserType* output) {
    auto* pointer = data_->scheme_specific_factories.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, ::network::mojom::URLLoaderFactoryPtrDataView>>(
        pointer, output, context_);
  }
  inline void GetInitiatorSpecificFactoriesDataView(
      mojo::MapDataView<::url::mojom::OriginDataView, ::network::mojom::URLLoaderFactoryPtrDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitiatorSpecificFactories(UserType* output) {
    auto* pointer = data_->initiator_specific_factories.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::url::mojom::OriginDataView, ::network::mojom::URLLoaderFactoryPtrDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeAppcacheFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryPtrDataView>(
            &data_->appcache_factory, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool bypass_redirect_checks() const {
    return data_->bypass_redirect_checks;
  }
 private:
  internal::URLLoaderFactoryBundle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::URLLoaderFactoryBundleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::URLLoaderFactoryBundleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::URLLoaderFactoryBundle_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::default_factory(input)) in_default_factory = Traits::default_factory(input);
    mojo::internal::Serialize<::network::mojom::URLLoaderFactoryPtrDataView>(
        in_default_factory, &(*output)->default_factory, context);
    decltype(Traits::scheme_specific_factories(input)) in_scheme_specific_factories = Traits::scheme_specific_factories(input);
    typename decltype((*output)->scheme_specific_factories)::BaseType::BufferWriter
        scheme_specific_factories_writer;
    const mojo::internal::ContainerValidateParams scheme_specific_factories_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, ::network::mojom::URLLoaderFactoryPtrDataView>>(
        in_scheme_specific_factories, buffer, &scheme_specific_factories_writer, &scheme_specific_factories_validate_params,
        context);
    (*output)->scheme_specific_factories.Set(
        scheme_specific_factories_writer.is_null() ? nullptr : scheme_specific_factories_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scheme_specific_factories.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scheme_specific_factories in URLLoaderFactoryBundle struct");
    decltype(Traits::initiator_specific_factories(input)) in_initiator_specific_factories = Traits::initiator_specific_factories(input);
    typename decltype((*output)->initiator_specific_factories)::BaseType::BufferWriter
        initiator_specific_factories_writer;
    const mojo::internal::ContainerValidateParams initiator_specific_factories_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<::url::mojom::OriginDataView, ::network::mojom::URLLoaderFactoryPtrDataView>>(
        in_initiator_specific_factories, buffer, &initiator_specific_factories_writer, &initiator_specific_factories_validate_params,
        context);
    (*output)->initiator_specific_factories.Set(
        initiator_specific_factories_writer.is_null() ? nullptr : initiator_specific_factories_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->initiator_specific_factories.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null initiator_specific_factories in URLLoaderFactoryBundle struct");
    decltype(Traits::appcache_factory(input)) in_appcache_factory = Traits::appcache_factory(input);
    mojo::internal::Serialize<::network::mojom::URLLoaderFactoryPtrDataView>(
        in_appcache_factory, &(*output)->appcache_factory, context);
    (*output)->bypass_redirect_checks = Traits::bypass_redirect_checks(input);
  }

  static bool Deserialize(::blink::mojom::internal::URLLoaderFactoryBundle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::URLLoaderFactoryBundleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void URLLoaderFactoryBundleDataView::GetSchemeSpecificFactoriesDataView(
    mojo::MapDataView<mojo::StringDataView, ::network::mojom::URLLoaderFactoryPtrDataView>* output) {
  auto pointer = data_->scheme_specific_factories.Get();
  *output = mojo::MapDataView<mojo::StringDataView, ::network::mojom::URLLoaderFactoryPtrDataView>(pointer, context_);
}
inline void URLLoaderFactoryBundleDataView::GetInitiatorSpecificFactoriesDataView(
    mojo::MapDataView<::url::mojom::OriginDataView, ::network::mojom::URLLoaderFactoryPtrDataView>* output) {
  auto pointer = data_->initiator_specific_factories.Get();
  *output = mojo::MapDataView<::url::mojom::OriginDataView, ::network::mojom::URLLoaderFactoryPtrDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_SHARED_H_
