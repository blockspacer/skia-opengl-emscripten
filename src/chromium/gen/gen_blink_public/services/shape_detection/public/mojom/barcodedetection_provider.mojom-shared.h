// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_SHARED_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_SHARED_H_

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
#include "services/shape_detection/public/mojom/barcodedetection_provider.mojom-shared-internal.h"
#include "services/shape_detection/public/mojom/barcodedetection.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace shape_detection {
namespace mojom {
class BarcodeDetectorOptionsDataView;



}  // namespace mojom
}  // namespace shape_detection

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::shape_detection::mojom::BarcodeDetectorOptionsDataView> {
  using Data = ::shape_detection::mojom::internal::BarcodeDetectorOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace shape_detection {
namespace mojom {
// Interface base classes. They are used for type safety check.
class BarcodeDetectionProviderInterfaceBase {};

using BarcodeDetectionProviderPtrDataView =
    mojo::InterfacePtrDataView<BarcodeDetectionProviderInterfaceBase>;
using BarcodeDetectionProviderRequestDataView =
    mojo::InterfaceRequestDataView<BarcodeDetectionProviderInterfaceBase>;
using BarcodeDetectionProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BarcodeDetectionProviderInterfaceBase>;
using BarcodeDetectionProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BarcodeDetectionProviderInterfaceBase>;
class BarcodeDetectorOptionsDataView {
 public:
  BarcodeDetectorOptionsDataView() {}

  BarcodeDetectorOptionsDataView(
      internal::BarcodeDetectorOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormatsDataView(
      mojo::ArrayDataView<::shape_detection::mojom::BarcodeFormat>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormats(UserType* output) {
    auto* pointer = data_->formats.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::shape_detection::mojom::BarcodeFormat>>(
        pointer, output, context_);
  }
 private:
  internal::BarcodeDetectorOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace shape_detection

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shape_detection::mojom::BarcodeDetectorOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::shape_detection::mojom::BarcodeDetectorOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::shape_detection::mojom::internal::BarcodeDetectorOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::formats(input)) in_formats = Traits::formats(input);
    typename decltype((*output)->formats)::BaseType::BufferWriter
        formats_writer;
    const mojo::internal::ContainerValidateParams formats_validate_params(
        0, ::shape_detection::mojom::internal::BarcodeFormat_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::shape_detection::mojom::BarcodeFormat>>(
        in_formats, buffer, &formats_writer, &formats_validate_params,
        context);
    (*output)->formats.Set(
        formats_writer.is_null() ? nullptr : formats_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->formats.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null formats in BarcodeDetectorOptions struct");
  }

  static bool Deserialize(::shape_detection::mojom::internal::BarcodeDetectorOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::shape_detection::mojom::BarcodeDetectorOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace shape_detection {
namespace mojom {

inline void BarcodeDetectorOptionsDataView::GetFormatsDataView(
    mojo::ArrayDataView<::shape_detection::mojom::BarcodeFormat>* output) {
  auto pointer = data_->formats.Get();
  *output = mojo::ArrayDataView<::shape_detection::mojom::BarcodeFormat>(pointer, context_);
}



}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_SHARED_H_