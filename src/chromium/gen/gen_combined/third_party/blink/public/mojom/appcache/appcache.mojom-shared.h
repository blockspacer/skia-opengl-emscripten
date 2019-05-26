// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/appcache/appcache.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/appcache/appcache_info.mojom-shared.h"
#include "third_party/blink/public/mojom/devtools/console_message.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class AppCacheResourceInfoDataView;

class AppCacheErrorDetailsDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::AppCacheResourceInfoDataView> {
  using Data = ::blink::mojom::internal::AppCacheResourceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::AppCacheErrorDetailsDataView> {
  using Data = ::blink::mojom::internal::AppCacheErrorDetails_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class AppCacheEventID : int32_t {
  
  APPCACHE_CHECKING_EVENT = 0,
  
  APPCACHE_ERROR_EVENT,
  
  APPCACHE_NO_UPDATE_EVENT,
  
  APPCACHE_DOWNLOADING_EVENT,
  
  APPCACHE_PROGRESS_EVENT,
  
  APPCACHE_UPDATE_READY_EVENT,
  
  APPCACHE_CACHED_EVENT,
  
  APPCACHE_OBSOLETE_EVENT,
  kMinValue = 0,
  kMaxValue = 7,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, AppCacheEventID value);
inline bool IsKnownEnumValue(AppCacheEventID value) {
  return internal::AppCacheEventID_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AppCacheErrorReason : int32_t {
  
  APPCACHE_MANIFEST_ERROR,
  
  APPCACHE_SIGNATURE_ERROR,
  
  APPCACHE_RESOURCE_ERROR,
  
  APPCACHE_CHANGED_ERROR,
  
  APPCACHE_ABORT_ERROR,
  
  APPCACHE_QUOTA_ERROR,
  
  APPCACHE_POLICY_ERROR,
  
  APPCACHE_UNKNOWN_ERROR,
  kMinValue = 0,
  kMaxValue = 7,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, AppCacheErrorReason value);
inline bool IsKnownEnumValue(AppCacheErrorReason value) {
  return internal::AppCacheErrorReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class AppCacheBackendInterfaceBase {};

using AppCacheBackendPtrDataView =
    mojo::InterfacePtrDataView<AppCacheBackendInterfaceBase>;
using AppCacheBackendRequestDataView =
    mojo::InterfaceRequestDataView<AppCacheBackendInterfaceBase>;
using AppCacheBackendAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AppCacheBackendInterfaceBase>;
using AppCacheBackendAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AppCacheBackendInterfaceBase>;
class AppCacheHostInterfaceBase {};

using AppCacheHostPtrDataView =
    mojo::InterfacePtrDataView<AppCacheHostInterfaceBase>;
using AppCacheHostRequestDataView =
    mojo::InterfaceRequestDataView<AppCacheHostInterfaceBase>;
using AppCacheHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AppCacheHostInterfaceBase>;
using AppCacheHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AppCacheHostInterfaceBase>;
class AppCacheFrontendInterfaceBase {};

using AppCacheFrontendPtrDataView =
    mojo::InterfacePtrDataView<AppCacheFrontendInterfaceBase>;
using AppCacheFrontendRequestDataView =
    mojo::InterfaceRequestDataView<AppCacheFrontendInterfaceBase>;
using AppCacheFrontendAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AppCacheFrontendInterfaceBase>;
using AppCacheFrontendAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AppCacheFrontendInterfaceBase>;
class AppCacheResourceInfoDataView {
 public:
  AppCacheResourceInfoDataView() {}

  AppCacheResourceInfoDataView(
      internal::AppCacheResourceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int64_t response_size() const {
    return data_->response_size;
  }
  int64_t padding_size() const {
    return data_->padding_size;
  }
  bool is_master() const {
    return data_->is_master;
  }
  bool is_manifest() const {
    return data_->is_manifest;
  }
  bool is_intercept() const {
    return data_->is_intercept;
  }
  bool is_fallback() const {
    return data_->is_fallback;
  }
  bool is_foreign() const {
    return data_->is_foreign;
  }
  bool is_explicit() const {
    return data_->is_explicit;
  }
  int64_t response_id() const {
    return data_->response_id;
  }
 private:
  internal::AppCacheResourceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheErrorDetailsDataView {
 public:
  AppCacheErrorDetailsDataView() {}

  AppCacheErrorDetailsDataView(
      internal::AppCacheErrorDetails_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::blink::mojom::AppCacheErrorReason>(
        data_value, output);
  }

  AppCacheErrorReason reason() const {
    return static_cast<AppCacheErrorReason>(data_->reason);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int32_t status() const {
    return data_->status;
  }
  bool is_cross_origin() const {
    return data_->is_cross_origin;
  }
 private:
  internal::AppCacheErrorDetails_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::AppCacheEventID>
    : public mojo::internal::EnumHashImpl<::blink::mojom::AppCacheEventID> {};

template <>
struct hash<::blink::mojom::AppCacheErrorReason>
    : public mojo::internal::EnumHashImpl<::blink::mojom::AppCacheErrorReason> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::AppCacheEventID, ::blink::mojom::AppCacheEventID> {
  static ::blink::mojom::AppCacheEventID ToMojom(::blink::mojom::AppCacheEventID input) { return input; }
  static bool FromMojom(::blink::mojom::AppCacheEventID input, ::blink::mojom::AppCacheEventID* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::AppCacheEventID, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::AppCacheEventID, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::AppCacheEventID>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::AppCacheErrorReason, ::blink::mojom::AppCacheErrorReason> {
  static ::blink::mojom::AppCacheErrorReason ToMojom(::blink::mojom::AppCacheErrorReason input) { return input; }
  static bool FromMojom(::blink::mojom::AppCacheErrorReason input, ::blink::mojom::AppCacheErrorReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::AppCacheErrorReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::AppCacheErrorReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::AppCacheErrorReason>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::AppCacheResourceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::AppCacheResourceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::AppCacheResourceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::url(input)) in_url = Traits::url(input);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in AppCacheResourceInfo struct");
    (*output)->response_size = Traits::response_size(input);
    (*output)->padding_size = Traits::padding_size(input);
    (*output)->is_master = Traits::is_master(input);
    (*output)->is_manifest = Traits::is_manifest(input);
    (*output)->is_intercept = Traits::is_intercept(input);
    (*output)->is_fallback = Traits::is_fallback(input);
    (*output)->is_foreign = Traits::is_foreign(input);
    (*output)->is_explicit = Traits::is_explicit(input);
    (*output)->response_id = Traits::response_id(input);
  }

  static bool Deserialize(::blink::mojom::internal::AppCacheResourceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::AppCacheResourceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::AppCacheErrorDetailsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::AppCacheErrorDetailsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::AppCacheErrorDetails_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::message(input)) in_message = Traits::message(input);
    typename decltype((*output)->message)::BaseType::BufferWriter
        message_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_message, buffer, &message_writer, context);
    (*output)->message.Set(
        message_writer.is_null() ? nullptr : message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null message in AppCacheErrorDetails struct");
    mojo::internal::Serialize<::blink::mojom::AppCacheErrorReason>(
        Traits::reason(input), &(*output)->reason);
    decltype(Traits::url(input)) in_url = Traits::url(input);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in AppCacheErrorDetails struct");
    (*output)->status = Traits::status(input);
    (*output)->is_cross_origin = Traits::is_cross_origin(input);
  }

  static bool Deserialize(::blink::mojom::internal::AppCacheErrorDetails_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::AppCacheErrorDetailsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void AppCacheResourceInfoDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void AppCacheErrorDetailsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AppCacheErrorDetailsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_SHARED_H_