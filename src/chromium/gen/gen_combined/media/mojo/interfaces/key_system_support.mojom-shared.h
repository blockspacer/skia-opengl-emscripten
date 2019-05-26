// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/key_system_support.mojom-shared-internal.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {
class KeySystemCapabilityDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::KeySystemCapabilityDataView> {
  using Data = ::media::mojom::internal::KeySystemCapability_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
// Interface base classes. They are used for type safety check.
class KeySystemSupportInterfaceBase {};

using KeySystemSupportPtrDataView =
    mojo::InterfacePtrDataView<KeySystemSupportInterfaceBase>;
using KeySystemSupportRequestDataView =
    mojo::InterfaceRequestDataView<KeySystemSupportInterfaceBase>;
using KeySystemSupportAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<KeySystemSupportInterfaceBase>;
using KeySystemSupportAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<KeySystemSupportInterfaceBase>;
class KeySystemCapabilityDataView {
 public:
  KeySystemCapabilityDataView() {}

  KeySystemCapabilityDataView(
      internal::KeySystemCapability_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVideoCodecsDataView(
      mojo::ArrayDataView<::media::mojom::VideoCodec>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVideoCodecs(UserType* output) {
    auto* pointer = data_->video_codecs.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::VideoCodec>>(
        pointer, output, context_);
  }
  bool supports_vp9_profile2() const {
    return data_->supports_vp9_profile2;
  }
  inline void GetEncryptionSchemesDataView(
      mojo::ArrayDataView<::media::mojom::EncryptionMode>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncryptionSchemes(UserType* output) {
    auto* pointer = data_->encryption_schemes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::EncryptionMode>>(
        pointer, output, context_);
  }
  inline void GetHwSecureVideoCodecsDataView(
      mojo::ArrayDataView<::media::mojom::VideoCodec>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHwSecureVideoCodecs(UserType* output) {
    auto* pointer = data_->hw_secure_video_codecs.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::VideoCodec>>(
        pointer, output, context_);
  }
  inline void GetHwSecureEncryptionSchemesDataView(
      mojo::ArrayDataView<::media::mojom::EncryptionMode>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHwSecureEncryptionSchemes(UserType* output) {
    auto* pointer = data_->hw_secure_encryption_schemes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::EncryptionMode>>(
        pointer, output, context_);
  }
  inline void GetSessionTypesDataView(
      mojo::ArrayDataView<::media::mojom::CdmSessionType>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionTypes(UserType* output) {
    auto* pointer = data_->session_types.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::CdmSessionType>>(
        pointer, output, context_);
  }
 private:
  internal::KeySystemCapability_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::KeySystemCapabilityDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::KeySystemCapabilityDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::KeySystemCapability_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::video_codecs(input)) in_video_codecs = Traits::video_codecs(input);
    typename decltype((*output)->video_codecs)::BaseType::BufferWriter
        video_codecs_writer;
    const mojo::internal::ContainerValidateParams video_codecs_validate_params(
        0, ::media::mojom::internal::VideoCodec_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::VideoCodec>>(
        in_video_codecs, buffer, &video_codecs_writer, &video_codecs_validate_params,
        context);
    (*output)->video_codecs.Set(
        video_codecs_writer.is_null() ? nullptr : video_codecs_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->video_codecs.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null video_codecs in KeySystemCapability struct");
    (*output)->supports_vp9_profile2 = Traits::supports_vp9_profile2(input);
    decltype(Traits::encryption_schemes(input)) in_encryption_schemes = Traits::encryption_schemes(input);
    typename decltype((*output)->encryption_schemes)::BaseType::BufferWriter
        encryption_schemes_writer;
    const mojo::internal::ContainerValidateParams encryption_schemes_validate_params(
        0, ::media::mojom::internal::EncryptionMode_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::EncryptionMode>>(
        in_encryption_schemes, buffer, &encryption_schemes_writer, &encryption_schemes_validate_params,
        context);
    (*output)->encryption_schemes.Set(
        encryption_schemes_writer.is_null() ? nullptr : encryption_schemes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->encryption_schemes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null encryption_schemes in KeySystemCapability struct");
    decltype(Traits::hw_secure_video_codecs(input)) in_hw_secure_video_codecs = Traits::hw_secure_video_codecs(input);
    typename decltype((*output)->hw_secure_video_codecs)::BaseType::BufferWriter
        hw_secure_video_codecs_writer;
    const mojo::internal::ContainerValidateParams hw_secure_video_codecs_validate_params(
        0, ::media::mojom::internal::VideoCodec_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::VideoCodec>>(
        in_hw_secure_video_codecs, buffer, &hw_secure_video_codecs_writer, &hw_secure_video_codecs_validate_params,
        context);
    (*output)->hw_secure_video_codecs.Set(
        hw_secure_video_codecs_writer.is_null() ? nullptr : hw_secure_video_codecs_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->hw_secure_video_codecs.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null hw_secure_video_codecs in KeySystemCapability struct");
    decltype(Traits::hw_secure_encryption_schemes(input)) in_hw_secure_encryption_schemes = Traits::hw_secure_encryption_schemes(input);
    typename decltype((*output)->hw_secure_encryption_schemes)::BaseType::BufferWriter
        hw_secure_encryption_schemes_writer;
    const mojo::internal::ContainerValidateParams hw_secure_encryption_schemes_validate_params(
        0, ::media::mojom::internal::EncryptionMode_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::EncryptionMode>>(
        in_hw_secure_encryption_schemes, buffer, &hw_secure_encryption_schemes_writer, &hw_secure_encryption_schemes_validate_params,
        context);
    (*output)->hw_secure_encryption_schemes.Set(
        hw_secure_encryption_schemes_writer.is_null() ? nullptr : hw_secure_encryption_schemes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->hw_secure_encryption_schemes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null hw_secure_encryption_schemes in KeySystemCapability struct");
    decltype(Traits::session_types(input)) in_session_types = Traits::session_types(input);
    typename decltype((*output)->session_types)::BaseType::BufferWriter
        session_types_writer;
    const mojo::internal::ContainerValidateParams session_types_validate_params(
        0, ::media::mojom::internal::CdmSessionType_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::CdmSessionType>>(
        in_session_types, buffer, &session_types_writer, &session_types_validate_params,
        context);
    (*output)->session_types.Set(
        session_types_writer.is_null() ? nullptr : session_types_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->session_types.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null session_types in KeySystemCapability struct");
  }

  static bool Deserialize(::media::mojom::internal::KeySystemCapability_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::KeySystemCapabilityDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void KeySystemCapabilityDataView::GetVideoCodecsDataView(
    mojo::ArrayDataView<::media::mojom::VideoCodec>* output) {
  auto pointer = data_->video_codecs.Get();
  *output = mojo::ArrayDataView<::media::mojom::VideoCodec>(pointer, context_);
}
inline void KeySystemCapabilityDataView::GetEncryptionSchemesDataView(
    mojo::ArrayDataView<::media::mojom::EncryptionMode>* output) {
  auto pointer = data_->encryption_schemes.Get();
  *output = mojo::ArrayDataView<::media::mojom::EncryptionMode>(pointer, context_);
}
inline void KeySystemCapabilityDataView::GetHwSecureVideoCodecsDataView(
    mojo::ArrayDataView<::media::mojom::VideoCodec>* output) {
  auto pointer = data_->hw_secure_video_codecs.Get();
  *output = mojo::ArrayDataView<::media::mojom::VideoCodec>(pointer, context_);
}
inline void KeySystemCapabilityDataView::GetHwSecureEncryptionSchemesDataView(
    mojo::ArrayDataView<::media::mojom::EncryptionMode>* output) {
  auto pointer = data_->hw_secure_encryption_schemes.Get();
  *output = mojo::ArrayDataView<::media::mojom::EncryptionMode>(pointer, context_);
}
inline void KeySystemCapabilityDataView::GetSessionTypesDataView(
    mojo::ArrayDataView<::media::mojom::CdmSessionType>* output) {
  auto pointer = data_->session_types.Get();
  *output = mojo::ArrayDataView<::media::mojom::CdmSessionType>(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_SHARED_H_