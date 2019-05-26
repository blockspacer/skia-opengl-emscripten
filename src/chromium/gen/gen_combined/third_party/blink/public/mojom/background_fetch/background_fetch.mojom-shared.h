// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom-shared-internal.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"
#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-shared.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-shared.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-shared.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class BackgroundFetchSettledFetchDataView;

class BackgroundFetchOptionsDataView;

class BackgroundFetchRegistrationDataDataView;

class BackgroundFetchRegistrationDataView;

class BackgroundFetchUkmDataDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::BackgroundFetchSettledFetchDataView> {
  using Data = ::blink::mojom::internal::BackgroundFetchSettledFetch_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::BackgroundFetchOptionsDataView> {
  using Data = ::blink::mojom::internal::BackgroundFetchOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::BackgroundFetchRegistrationDataDataView> {
  using Data = ::blink::mojom::internal::BackgroundFetchRegistrationData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::BackgroundFetchRegistrationDataView> {
  using Data = ::blink::mojom::internal::BackgroundFetchRegistration_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::BackgroundFetchUkmDataDataView> {
  using Data = ::blink::mojom::internal::BackgroundFetchUkmData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class BackgroundFetchError : int32_t {
  
  NONE,
  
  DUPLICATED_DEVELOPER_ID,
  
  INVALID_ARGUMENT,
  
  INVALID_ID,
  
  STORAGE_ERROR,
  
  SERVICE_WORKER_UNAVAILABLE,
  
  QUOTA_EXCEEDED,
  
  PERMISSION_DENIED,
  
  REGISTRATION_LIMIT_EXCEEDED,
  kMinValue = 0,
  kMaxValue = 8,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, BackgroundFetchError value);
inline bool IsKnownEnumValue(BackgroundFetchError value) {
  return internal::BackgroundFetchError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BackgroundFetchResult : int32_t {
  
  UNSET,
  
  FAILURE,
  
  SUCCESS,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, BackgroundFetchResult value);
inline bool IsKnownEnumValue(BackgroundFetchResult value) {
  return internal::BackgroundFetchResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BackgroundFetchFailureReason : int32_t {
  
  NONE = 0,
  
  CANCELLED_FROM_UI = 1,
  
  CANCELLED_BY_DEVELOPER = 2,
  
  BAD_STATUS = 3,
  
  FETCH_ERROR = 4,
  
  SERVICE_WORKER_UNAVAILABLE = 5,
  
  QUOTA_EXCEEDED = 6,
  
  DOWNLOAD_TOTAL_EXCEEDED = 7,
  kMinValue = 0,
  kMaxValue = 7,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, BackgroundFetchFailureReason value);
inline bool IsKnownEnumValue(BackgroundFetchFailureReason value) {
  return internal::BackgroundFetchFailureReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class BackgroundFetchRegistrationObserverInterfaceBase {};

using BackgroundFetchRegistrationObserverPtrDataView =
    mojo::InterfacePtrDataView<BackgroundFetchRegistrationObserverInterfaceBase>;
using BackgroundFetchRegistrationObserverRequestDataView =
    mojo::InterfaceRequestDataView<BackgroundFetchRegistrationObserverInterfaceBase>;
using BackgroundFetchRegistrationObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BackgroundFetchRegistrationObserverInterfaceBase>;
using BackgroundFetchRegistrationObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BackgroundFetchRegistrationObserverInterfaceBase>;
class BackgroundFetchServiceInterfaceBase {};

using BackgroundFetchServicePtrDataView =
    mojo::InterfacePtrDataView<BackgroundFetchServiceInterfaceBase>;
using BackgroundFetchServiceRequestDataView =
    mojo::InterfaceRequestDataView<BackgroundFetchServiceInterfaceBase>;
using BackgroundFetchServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BackgroundFetchServiceInterfaceBase>;
using BackgroundFetchServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BackgroundFetchServiceInterfaceBase>;
class BackgroundFetchRegistrationServiceInterfaceBase {};

using BackgroundFetchRegistrationServicePtrDataView =
    mojo::InterfacePtrDataView<BackgroundFetchRegistrationServiceInterfaceBase>;
using BackgroundFetchRegistrationServiceRequestDataView =
    mojo::InterfaceRequestDataView<BackgroundFetchRegistrationServiceInterfaceBase>;
using BackgroundFetchRegistrationServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BackgroundFetchRegistrationServiceInterfaceBase>;
using BackgroundFetchRegistrationServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BackgroundFetchRegistrationServiceInterfaceBase>;
class BackgroundFetchSettledFetchDataView {
 public:
  BackgroundFetchSettledFetchDataView() {}

  BackgroundFetchSettledFetchDataView(
      internal::BackgroundFetchSettledFetch_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ::blink::mojom::FetchAPIRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestDataView>(
        pointer, output, context_);
  }
  inline void GetResponseDataView(
      ::blink::mojom::FetchAPIResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIResponseDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchSettledFetch_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchOptionsDataView {
 public:
  BackgroundFetchOptionsDataView() {}

  BackgroundFetchOptionsDataView(
      internal::BackgroundFetchOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIconsDataView(
      mojo::ArrayDataView<::blink::mojom::ManifestImageResourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcons(UserType* output) {
    auto* pointer = data_->icons.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ManifestImageResourceDataView>>(
        pointer, output, context_);
  }
  uint64_t download_total() const {
    return data_->download_total;
  }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchRegistrationDataDataView {
 public:
  BackgroundFetchRegistrationDataDataView() {}

  BackgroundFetchRegistrationDataDataView(
      internal::BackgroundFetchRegistrationData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeveloperIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperId(UserType* output) {
    auto* pointer = data_->developer_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint64_t upload_total() const {
    return data_->upload_total;
  }
  uint64_t uploaded() const {
    return data_->uploaded;
  }
  uint64_t download_total() const {
    return data_->download_total;
  }
  uint64_t downloaded() const {
    return data_->downloaded;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchResult>(
        data_value, output);
  }

  BackgroundFetchResult result() const {
    return static_cast<BackgroundFetchResult>(data_->result);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFailureReason(UserType* output) const {
    auto data_value = data_->failure_reason;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchFailureReason>(
        data_value, output);
  }

  BackgroundFetchFailureReason failure_reason() const {
    return static_cast<BackgroundFetchFailureReason>(data_->failure_reason);
  }
 private:
  internal::BackgroundFetchRegistrationData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchRegistrationDataView {
 public:
  BackgroundFetchRegistrationDataView() {}

  BackgroundFetchRegistrationDataView(
      internal::BackgroundFetchRegistration_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRegistrationDataDataView(
      BackgroundFetchRegistrationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistrationData(UserType* output) {
    auto* pointer = data_->registration_data.Get();
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchRegistrationDataDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeRegistrationInterface() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BackgroundFetchRegistrationServicePtrDataView>(
            &data_->registration_interface, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BackgroundFetchRegistration_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchUkmDataDataView {
 public:
  BackgroundFetchUkmDataDataView() {}

  BackgroundFetchUkmDataDataView(
      internal::BackgroundFetchUkmData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t ideal_to_chosen_icon_size() const {
    return data_->ideal_to_chosen_icon_size;
  }
 private:
  internal::BackgroundFetchUkmData_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::BackgroundFetchError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::BackgroundFetchError> {};

template <>
struct hash<::blink::mojom::BackgroundFetchResult>
    : public mojo::internal::EnumHashImpl<::blink::mojom::BackgroundFetchResult> {};

template <>
struct hash<::blink::mojom::BackgroundFetchFailureReason>
    : public mojo::internal::EnumHashImpl<::blink::mojom::BackgroundFetchFailureReason> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::BackgroundFetchError, ::blink::mojom::BackgroundFetchError> {
  static ::blink::mojom::BackgroundFetchError ToMojom(::blink::mojom::BackgroundFetchError input) { return input; }
  static bool FromMojom(::blink::mojom::BackgroundFetchError input, ::blink::mojom::BackgroundFetchError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundFetchError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::BackgroundFetchError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::BackgroundFetchError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::BackgroundFetchResult, ::blink::mojom::BackgroundFetchResult> {
  static ::blink::mojom::BackgroundFetchResult ToMojom(::blink::mojom::BackgroundFetchResult input) { return input; }
  static bool FromMojom(::blink::mojom::BackgroundFetchResult input, ::blink::mojom::BackgroundFetchResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundFetchResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::BackgroundFetchResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::BackgroundFetchResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::BackgroundFetchFailureReason, ::blink::mojom::BackgroundFetchFailureReason> {
  static ::blink::mojom::BackgroundFetchFailureReason ToMojom(::blink::mojom::BackgroundFetchFailureReason input) { return input; }
  static bool FromMojom(::blink::mojom::BackgroundFetchFailureReason input, ::blink::mojom::BackgroundFetchFailureReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundFetchFailureReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::BackgroundFetchFailureReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::BackgroundFetchFailureReason>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundFetchSettledFetchDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::BackgroundFetchSettledFetchDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::BackgroundFetchSettledFetch_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::request(input)) in_request = Traits::request(input);
    typename decltype((*output)->request)::BaseType::BufferWriter
        request_writer;
    mojo::internal::Serialize<::blink::mojom::FetchAPIRequestDataView>(
        in_request, buffer, &request_writer, context);
    (*output)->request.Set(
        request_writer.is_null() ? nullptr : request_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->request.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null request in BackgroundFetchSettledFetch struct");
    decltype(Traits::response(input)) in_response = Traits::response(input);
    typename decltype((*output)->response)::BaseType::BufferWriter
        response_writer;
    mojo::internal::Serialize<::blink::mojom::FetchAPIResponseDataView>(
        in_response, buffer, &response_writer, context);
    (*output)->response.Set(
        response_writer.is_null() ? nullptr : response_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::BackgroundFetchSettledFetch_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::BackgroundFetchSettledFetchDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundFetchOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::BackgroundFetchOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::BackgroundFetchOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::icons(input)) in_icons = Traits::icons(input);
    typename decltype((*output)->icons)::BaseType::BufferWriter
        icons_writer;
    const mojo::internal::ContainerValidateParams icons_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ManifestImageResourceDataView>>(
        in_icons, buffer, &icons_writer, &icons_validate_params,
        context);
    (*output)->icons.Set(
        icons_writer.is_null() ? nullptr : icons_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->icons.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null icons in BackgroundFetchOptions struct");
    (*output)->download_total = Traits::download_total(input);
    decltype(Traits::title(input)) in_title = Traits::title(input);
    typename decltype((*output)->title)::BaseType::BufferWriter
        title_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_title, buffer, &title_writer, context);
    (*output)->title.Set(
        title_writer.is_null() ? nullptr : title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null title in BackgroundFetchOptions struct");
  }

  static bool Deserialize(::blink::mojom::internal::BackgroundFetchOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::BackgroundFetchOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundFetchRegistrationDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::BackgroundFetchRegistrationDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::BackgroundFetchRegistrationData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::developer_id(input)) in_developer_id = Traits::developer_id(input);
    typename decltype((*output)->developer_id)::BaseType::BufferWriter
        developer_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_developer_id, buffer, &developer_id_writer, context);
    (*output)->developer_id.Set(
        developer_id_writer.is_null() ? nullptr : developer_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->developer_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null developer_id in BackgroundFetchRegistrationData struct");
    (*output)->upload_total = Traits::upload_total(input);
    (*output)->uploaded = Traits::uploaded(input);
    (*output)->download_total = Traits::download_total(input);
    (*output)->downloaded = Traits::downloaded(input);
    mojo::internal::Serialize<::blink::mojom::BackgroundFetchResult>(
        Traits::result(input), &(*output)->result);
    mojo::internal::Serialize<::blink::mojom::BackgroundFetchFailureReason>(
        Traits::failure_reason(input), &(*output)->failure_reason);
  }

  static bool Deserialize(::blink::mojom::internal::BackgroundFetchRegistrationData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::BackgroundFetchRegistrationDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundFetchRegistrationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::BackgroundFetchRegistrationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::BackgroundFetchRegistration_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::registration_data(input)) in_registration_data = Traits::registration_data(input);
    typename decltype((*output)->registration_data)::BaseType::BufferWriter
        registration_data_writer;
    mojo::internal::Serialize<::blink::mojom::BackgroundFetchRegistrationDataDataView>(
        in_registration_data, buffer, &registration_data_writer, context);
    (*output)->registration_data.Set(
        registration_data_writer.is_null() ? nullptr : registration_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->registration_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null registration_data in BackgroundFetchRegistration struct");
    decltype(Traits::registration_interface(input)) in_registration_interface = Traits::registration_interface(input);
    mojo::internal::Serialize<::blink::mojom::BackgroundFetchRegistrationServicePtrDataView>(
        in_registration_interface, &(*output)->registration_interface, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->registration_interface),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid registration_interface in BackgroundFetchRegistration struct");
  }

  static bool Deserialize(::blink::mojom::internal::BackgroundFetchRegistration_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::BackgroundFetchRegistrationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundFetchUkmDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::BackgroundFetchUkmDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::BackgroundFetchUkmData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->ideal_to_chosen_icon_size = Traits::ideal_to_chosen_icon_size(input);
  }

  static bool Deserialize(::blink::mojom::internal::BackgroundFetchUkmData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::BackgroundFetchUkmDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void BackgroundFetchSettledFetchDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void BackgroundFetchSettledFetchDataView::GetResponseDataView(
    ::blink::mojom::FetchAPIResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = ::blink::mojom::FetchAPIResponseDataView(pointer, context_);
}


inline void BackgroundFetchOptionsDataView::GetIconsDataView(
    mojo::ArrayDataView<::blink::mojom::ManifestImageResourceDataView>* output) {
  auto pointer = data_->icons.Get();
  *output = mojo::ArrayDataView<::blink::mojom::ManifestImageResourceDataView>(pointer, context_);
}
inline void BackgroundFetchOptionsDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void BackgroundFetchRegistrationDataDataView::GetDeveloperIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->developer_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void BackgroundFetchRegistrationDataView::GetRegistrationDataDataView(
    BackgroundFetchRegistrationDataDataView* output) {
  auto pointer = data_->registration_data.Get();
  *output = BackgroundFetchRegistrationDataDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_H_