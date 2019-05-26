// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_USER_AGENT_USER_AGENT_METADATA_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_USER_AGENT_USER_AGENT_METADATA_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class UserAgentMetadataDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::UserAgentMetadataDataView> {
  using Data = ::blink::mojom::internal::UserAgentMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
class UserAgentMetadataDataView {
 public:
  UserAgentMetadataDataView() {}

  UserAgentMetadataDataView(
      internal::UserAgentMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBrandDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBrand(UserType* output) {
    auto* pointer = data_->brand.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFullVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFullVersion(UserType* output) {
    auto* pointer = data_->full_version.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMajorVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMajorVersion(UserType* output) {
    auto* pointer = data_->major_version.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPlatformDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlatform(UserType* output) {
    auto* pointer = data_->platform.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetArchitectureDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArchitecture(UserType* output) {
    auto* pointer = data_->architecture.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetModelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModel(UserType* output) {
    auto* pointer = data_->model.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::UserAgentMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::UserAgentMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::UserAgentMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::UserAgentMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::brand(input)) in_brand = Traits::brand(input);
    typename decltype((*output)->brand)::BaseType::BufferWriter
        brand_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_brand, buffer, &brand_writer, context);
    (*output)->brand.Set(
        brand_writer.is_null() ? nullptr : brand_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->brand.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null brand in UserAgentMetadata struct");
    decltype(Traits::full_version(input)) in_full_version = Traits::full_version(input);
    typename decltype((*output)->full_version)::BaseType::BufferWriter
        full_version_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_full_version, buffer, &full_version_writer, context);
    (*output)->full_version.Set(
        full_version_writer.is_null() ? nullptr : full_version_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->full_version.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null full_version in UserAgentMetadata struct");
    decltype(Traits::major_version(input)) in_major_version = Traits::major_version(input);
    typename decltype((*output)->major_version)::BaseType::BufferWriter
        major_version_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_major_version, buffer, &major_version_writer, context);
    (*output)->major_version.Set(
        major_version_writer.is_null() ? nullptr : major_version_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->major_version.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null major_version in UserAgentMetadata struct");
    decltype(Traits::platform(input)) in_platform = Traits::platform(input);
    typename decltype((*output)->platform)::BaseType::BufferWriter
        platform_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_platform, buffer, &platform_writer, context);
    (*output)->platform.Set(
        platform_writer.is_null() ? nullptr : platform_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->platform.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null platform in UserAgentMetadata struct");
    decltype(Traits::architecture(input)) in_architecture = Traits::architecture(input);
    typename decltype((*output)->architecture)::BaseType::BufferWriter
        architecture_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_architecture, buffer, &architecture_writer, context);
    (*output)->architecture.Set(
        architecture_writer.is_null() ? nullptr : architecture_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->architecture.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null architecture in UserAgentMetadata struct");
    decltype(Traits::model(input)) in_model = Traits::model(input);
    typename decltype((*output)->model)::BaseType::BufferWriter
        model_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_model, buffer, &model_writer, context);
    (*output)->model.Set(
        model_writer.is_null() ? nullptr : model_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->model.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null model in UserAgentMetadata struct");
  }

  static bool Deserialize(::blink::mojom::internal::UserAgentMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::UserAgentMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void UserAgentMetadataDataView::GetBrandDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->brand.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UserAgentMetadataDataView::GetFullVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->full_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UserAgentMetadataDataView::GetMajorVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->major_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UserAgentMetadataDataView::GetPlatformDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->platform.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UserAgentMetadataDataView::GetArchitectureDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->architecture.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UserAgentMetadataDataView::GetModelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->model.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_USER_AGENT_USER_AGENT_METADATA_MOJOM_SHARED_H_