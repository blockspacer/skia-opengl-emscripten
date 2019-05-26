// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/content_decryption_module.mojom-shared-internal.h"
#include "media/mojo/interfaces/decryptor.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {
using CdmConfigDataView = mojo::native::NativeStructDataView;

class CdmPromiseResultDataView;

class CdmKeyInformationDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::CdmPromiseResultDataView> {
  using Data = ::media::mojom::internal::CdmPromiseResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::CdmKeyInformationDataView> {
  using Data = ::media::mojom::internal::CdmKeyInformation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
using EmeInitDataType = mojo::NativeEnum;
using CdmSessionType = mojo::NativeEnum;
using CdmMessageType = mojo::NativeEnum;


enum class CdmKeyStatus : int32_t {
  
  USABLE,
  
  INTERNAL_ERROR,
  
  EXPIRED,
  
  OUTPUT_RESTRICTED,
  
  OUTPUT_DOWNSCALED,
  
  KEY_STATUS_PENDING,
  
  RELEASED,
  kMinValue = 0,
  kMaxValue = 6,
};

 std::ostream& operator<<(std::ostream& os, CdmKeyStatus value);
inline bool IsKnownEnumValue(CdmKeyStatus value) {
  return internal::CdmKeyStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
using HdcpVersion = mojo::NativeEnum;
using CdmPromiseResult_Exception = mojo::NativeEnum;
// Interface base classes. They are used for type safety check.
class ContentDecryptionModuleInterfaceBase {};

using ContentDecryptionModulePtrDataView =
    mojo::InterfacePtrDataView<ContentDecryptionModuleInterfaceBase>;
using ContentDecryptionModuleRequestDataView =
    mojo::InterfaceRequestDataView<ContentDecryptionModuleInterfaceBase>;
using ContentDecryptionModuleAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ContentDecryptionModuleInterfaceBase>;
using ContentDecryptionModuleAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ContentDecryptionModuleInterfaceBase>;
class ContentDecryptionModuleClientInterfaceBase {};

using ContentDecryptionModuleClientPtrDataView =
    mojo::InterfacePtrDataView<ContentDecryptionModuleClientInterfaceBase>;
using ContentDecryptionModuleClientRequestDataView =
    mojo::InterfaceRequestDataView<ContentDecryptionModuleClientInterfaceBase>;
using ContentDecryptionModuleClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ContentDecryptionModuleClientInterfaceBase>;
using ContentDecryptionModuleClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ContentDecryptionModuleClientInterfaceBase>;
class CdmFactoryInterfaceBase {};

using CdmFactoryPtrDataView =
    mojo::InterfacePtrDataView<CdmFactoryInterfaceBase>;
using CdmFactoryRequestDataView =
    mojo::InterfaceRequestDataView<CdmFactoryInterfaceBase>;
using CdmFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CdmFactoryInterfaceBase>;
using CdmFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CdmFactoryInterfaceBase>;
class CdmPromiseResultDataView {
 public:
  CdmPromiseResultDataView() {}

  CdmPromiseResultDataView(
      internal::CdmPromiseResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadException(UserType* output) const {
    auto data_value = data_->exception;
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResult_Exception>(
        data_value, output);
  }

  CdmPromiseResult_Exception exception() const {
    return static_cast<CdmPromiseResult_Exception>(data_->exception);
  }
  uint32_t system_code() const {
    return data_->system_code;
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMessage(UserType* output) {
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::CdmPromiseResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmKeyInformationDataView {
 public:
  CdmKeyInformationDataView() {}

  CdmKeyInformationDataView(
      internal::CdmKeyInformation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyId(UserType* output) {
    auto* pointer = data_->key_id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::CdmKeyStatus>(
        data_value, output);
  }

  CdmKeyStatus status() const {
    return static_cast<CdmKeyStatus>(data_->status);
  }
  uint32_t system_code() const {
    return data_->system_code;
  }
 private:
  internal::CdmKeyInformation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::CdmKeyStatus>
    : public mojo::internal::EnumHashImpl<::media::mojom::CdmKeyStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::CdmKeyStatus, ::media::mojom::CdmKeyStatus> {
  static ::media::mojom::CdmKeyStatus ToMojom(::media::mojom::CdmKeyStatus input) { return input; }
  static bool FromMojom(::media::mojom::CdmKeyStatus input, ::media::mojom::CdmKeyStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CdmKeyStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::CdmKeyStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::CdmKeyStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CdmPromiseResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::CdmPromiseResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::CdmPromiseResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->success = Traits::success(input);
    mojo::internal::Serialize<::media::mojom::CdmPromiseResult_Exception>(
        Traits::exception(input), &(*output)->exception);
    (*output)->system_code = Traits::system_code(input);
    decltype(Traits::error_message(input)) in_error_message = Traits::error_message(input);
    typename decltype((*output)->error_message)::BaseType::BufferWriter
        error_message_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_error_message, buffer, &error_message_writer, context);
    (*output)->error_message.Set(
        error_message_writer.is_null() ? nullptr : error_message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->error_message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null error_message in CdmPromiseResult struct");
  }

  static bool Deserialize(::media::mojom::internal::CdmPromiseResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::CdmPromiseResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CdmKeyInformationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::CdmKeyInformationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::CdmKeyInformation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::key_id(input)) in_key_id = Traits::key_id(input);
    typename decltype((*output)->key_id)::BaseType::BufferWriter
        key_id_writer;
    const mojo::internal::ContainerValidateParams key_id_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_key_id, buffer, &key_id_writer, &key_id_validate_params,
        context);
    (*output)->key_id.Set(
        key_id_writer.is_null() ? nullptr : key_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_id in CdmKeyInformation struct");
    mojo::internal::Serialize<::media::mojom::CdmKeyStatus>(
        Traits::status(input), &(*output)->status);
    (*output)->system_code = Traits::system_code(input);
  }

  static bool Deserialize(::media::mojom::internal::CdmKeyInformation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::CdmKeyInformationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void CdmPromiseResultDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void CdmKeyInformationDataView::GetKeyIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_H_