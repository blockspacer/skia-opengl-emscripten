// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-shared.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class CacheStorageVerboseErrorDataView;

class CacheQueryOptionsDataView;

class MultiCacheQueryOptionsDataView;

class BatchOperationDataView;

class OpenResultDataView;
class MatchResultDataView;
class MatchAllResultDataView;
class CacheKeysResultDataView;


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::CacheStorageVerboseErrorDataView> {
  using Data = ::blink::mojom::internal::CacheStorageVerboseError_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::CacheQueryOptionsDataView> {
  using Data = ::blink::mojom::internal::CacheQueryOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::MultiCacheQueryOptionsDataView> {
  using Data = ::blink::mojom::internal::MultiCacheQueryOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::BatchOperationDataView> {
  using Data = ::blink::mojom::internal::BatchOperation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::OpenResultDataView> {
  using Data = ::blink::mojom::internal::OpenResult_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::blink::mojom::MatchResultDataView> {
  using Data = ::blink::mojom::internal::MatchResult_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::blink::mojom::MatchAllResultDataView> {
  using Data = ::blink::mojom::internal::MatchAllResult_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::blink::mojom::CacheKeysResultDataView> {
  using Data = ::blink::mojom::internal::CacheKeysResult_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class CacheStorageError : int32_t {
  
  kSuccess = 0,
  
  kErrorExists = 1,
  
  kErrorStorage = 2,
  
  kErrorNotFound = 3,
  
  kErrorQuotaExceeded = 4,
  
  kErrorCacheNameNotFound = 5,
  
  kErrorQueryTooLarge = 6,
  
  kErrorNotImplemented = 7,
  
  kErrorDuplicateOperation = 8,
  kMinValue = 0,
  kMaxValue = 8,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, CacheStorageError value);
inline bool IsKnownEnumValue(CacheStorageError value) {
  return internal::CacheStorageError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class OperationType : int32_t {
  
  kUndefined,
  
  kPut,
  
  kDelete,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, OperationType value);
inline bool IsKnownEnumValue(OperationType value) {
  return internal::OperationType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class CacheStorageCacheInterfaceBase {};

using CacheStorageCachePtrDataView =
    mojo::InterfacePtrDataView<CacheStorageCacheInterfaceBase>;
using CacheStorageCacheRequestDataView =
    mojo::InterfaceRequestDataView<CacheStorageCacheInterfaceBase>;
using CacheStorageCacheAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CacheStorageCacheInterfaceBase>;
using CacheStorageCacheAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CacheStorageCacheInterfaceBase>;
class CacheStorageInterfaceBase {};

using CacheStoragePtrDataView =
    mojo::InterfacePtrDataView<CacheStorageInterfaceBase>;
using CacheStorageRequestDataView =
    mojo::InterfaceRequestDataView<CacheStorageInterfaceBase>;
using CacheStorageAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CacheStorageInterfaceBase>;
using CacheStorageAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CacheStorageInterfaceBase>;
class CacheStorageVerboseErrorDataView {
 public:
  CacheStorageVerboseErrorDataView() {}

  CacheStorageVerboseErrorDataView(
      internal::CacheStorageVerboseError_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) const {
    auto data_value = data_->value;
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_value, output);
  }

  CacheStorageError value() const {
    return static_cast<CacheStorageError>(data_->value);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorageVerboseError_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheQueryOptionsDataView {
 public:
  CacheQueryOptionsDataView() {}

  CacheQueryOptionsDataView(
      internal::CacheQueryOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool ignore_search() const {
    return data_->ignore_search;
  }
  bool ignore_method() const {
    return data_->ignore_method;
  }
  bool ignore_vary() const {
    return data_->ignore_vary;
  }
 private:
  internal::CacheQueryOptions_Data* data_ = nullptr;
};

class MultiCacheQueryOptionsDataView {
 public:
  MultiCacheQueryOptionsDataView() {}

  MultiCacheQueryOptionsDataView(
      internal::MultiCacheQueryOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetQueryOptionsDataView(
      CacheQueryOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQueryOptions(UserType* output) {
    auto* pointer = data_->query_options.Get();
    return mojo::internal::Deserialize<::blink::mojom::CacheQueryOptionsDataView>(
        pointer, output, context_);
  }
  inline void GetCacheNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheName(UserType* output) {
    auto* pointer = data_->cache_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::MultiCacheQueryOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BatchOperationDataView {
 public:
  BatchOperationDataView() {}

  BatchOperationDataView(
      internal::BatchOperation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOperationType(UserType* output) const {
    auto data_value = data_->operation_type;
    return mojo::internal::Deserialize<::blink::mojom::OperationType>(
        data_value, output);
  }

  OperationType operation_type() const {
    return static_cast<OperationType>(data_->operation_type);
  }
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
  inline void GetMatchOptionsDataView(
      CacheQueryOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatchOptions(UserType* output) {
    auto* pointer = data_->match_options.Get();
    return mojo::internal::Deserialize<::blink::mojom::CacheQueryOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::BatchOperation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class OpenResultDataView {
 public:
  using Tag = internal::OpenResult_Data::OpenResult_Tag;

  OpenResultDataView() {}

  OpenResultDataView(
      internal::OpenResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_status() const { return data_->tag == Tag::STATUS; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    DCHECK(is_status());
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_->data.f_status, output);
  }

  CacheStorageError status() const {
    DCHECK(is_status());
    return static_cast<CacheStorageError>(
        data_->data.f_status);
  }
  bool is_cache() const { return data_->tag == Tag::CACHE; }
  template <typename UserType>
  UserType TakeCache() {
    DCHECK(is_cache());
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::CacheStorageCacheAssociatedPtrInfoDataView>(
            &data_->data.f_cache, &result, context_);
    DCHECK(ret);
    return result;
  }

 private:
  internal::OpenResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MatchResultDataView {
 public:
  using Tag = internal::MatchResult_Data::MatchResult_Tag;

  MatchResultDataView() {}

  MatchResultDataView(
      internal::MatchResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_status() const { return data_->tag == Tag::STATUS; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    DCHECK(is_status());
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_->data.f_status, output);
  }

  CacheStorageError status() const {
    DCHECK(is_status());
    return static_cast<CacheStorageError>(
        data_->data.f_status);
  }
  bool is_response() const { return data_->tag == Tag::RESPONSE; }
  inline void GetResponseDataView(
      ::blink::mojom::FetchAPIResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    DCHECK(is_response());
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIResponseDataView>(
        data_->data.f_response.Get(), output, context_);
  }

 private:
  internal::MatchResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MatchAllResultDataView {
 public:
  using Tag = internal::MatchAllResult_Data::MatchAllResult_Tag;

  MatchAllResultDataView() {}

  MatchAllResultDataView(
      internal::MatchAllResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_status() const { return data_->tag == Tag::STATUS; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    DCHECK(is_status());
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_->data.f_status, output);
  }

  CacheStorageError status() const {
    DCHECK(is_status());
    return static_cast<CacheStorageError>(
        data_->data.f_status);
  }
  bool is_responses() const { return data_->tag == Tag::RESPONSES; }
  inline void GetResponsesDataView(
      mojo::ArrayDataView<::blink::mojom::FetchAPIResponseDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponses(UserType* output) {
    DCHECK(is_responses());
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::FetchAPIResponseDataView>>(
        data_->data.f_responses.Get(), output, context_);
  }

 private:
  internal::MatchAllResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheKeysResultDataView {
 public:
  using Tag = internal::CacheKeysResult_Data::CacheKeysResult_Tag;

  CacheKeysResultDataView() {}

  CacheKeysResultDataView(
      internal::CacheKeysResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_status() const { return data_->tag == Tag::STATUS; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    DCHECK(is_status());
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_->data.f_status, output);
  }

  CacheStorageError status() const {
    DCHECK(is_status());
    return static_cast<CacheStorageError>(
        data_->data.f_status);
  }
  bool is_keys() const { return data_->tag == Tag::KEYS; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeys(UserType* output) {
    DCHECK(is_keys());
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>>(
        data_->data.f_keys.Get(), output, context_);
  }

 private:
  internal::CacheKeysResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::CacheStorageError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::CacheStorageError> {};

template <>
struct hash<::blink::mojom::OperationType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::OperationType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::CacheStorageError, ::blink::mojom::CacheStorageError> {
  static ::blink::mojom::CacheStorageError ToMojom(::blink::mojom::CacheStorageError input) { return input; }
  static bool FromMojom(::blink::mojom::CacheStorageError input, ::blink::mojom::CacheStorageError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CacheStorageError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::CacheStorageError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::CacheStorageError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::OperationType, ::blink::mojom::OperationType> {
  static ::blink::mojom::OperationType ToMojom(::blink::mojom::OperationType input) { return input; }
  static bool FromMojom(::blink::mojom::OperationType input, ::blink::mojom::OperationType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::OperationType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::OperationType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::OperationType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CacheStorageVerboseErrorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::CacheStorageVerboseErrorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::CacheStorageVerboseError_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
        Traits::value(input), &(*output)->value);
    decltype(Traits::message(input)) in_message = Traits::message(input);
    typename decltype((*output)->message)::BaseType::BufferWriter
        message_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_message, buffer, &message_writer, context);
    (*output)->message.Set(
        message_writer.is_null() ? nullptr : message_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::CacheStorageVerboseError_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::CacheStorageVerboseErrorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CacheQueryOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::CacheQueryOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::CacheQueryOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->ignore_search = Traits::ignore_search(input);
    (*output)->ignore_method = Traits::ignore_method(input);
    (*output)->ignore_vary = Traits::ignore_vary(input);
  }

  static bool Deserialize(::blink::mojom::internal::CacheQueryOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::CacheQueryOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MultiCacheQueryOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::MultiCacheQueryOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::MultiCacheQueryOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::query_options(input)) in_query_options = Traits::query_options(input);
    typename decltype((*output)->query_options)::BaseType::BufferWriter
        query_options_writer;
    mojo::internal::Serialize<::blink::mojom::CacheQueryOptionsDataView>(
        in_query_options, buffer, &query_options_writer, context);
    (*output)->query_options.Set(
        query_options_writer.is_null() ? nullptr : query_options_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->query_options.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null query_options in MultiCacheQueryOptions struct");
    decltype(Traits::cache_name(input)) in_cache_name = Traits::cache_name(input);
    typename decltype((*output)->cache_name)::BaseType::BufferWriter
        cache_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_cache_name, buffer, &cache_name_writer, context);
    (*output)->cache_name.Set(
        cache_name_writer.is_null() ? nullptr : cache_name_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::MultiCacheQueryOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::MultiCacheQueryOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BatchOperationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::BatchOperationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::BatchOperation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::OperationType>(
        Traits::operation_type(input), &(*output)->operation_type);
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
        "null request in BatchOperation struct");
    decltype(Traits::response(input)) in_response = Traits::response(input);
    typename decltype((*output)->response)::BaseType::BufferWriter
        response_writer;
    mojo::internal::Serialize<::blink::mojom::FetchAPIResponseDataView>(
        in_response, buffer, &response_writer, context);
    (*output)->response.Set(
        response_writer.is_null() ? nullptr : response_writer.data());
    decltype(Traits::match_options(input)) in_match_options = Traits::match_options(input);
    typename decltype((*output)->match_options)::BaseType::BufferWriter
        match_options_writer;
    mojo::internal::Serialize<::blink::mojom::CacheQueryOptionsDataView>(
        in_match_options, buffer, &match_options_writer, context);
    (*output)->match_options.Set(
        match_options_writer.is_null() ? nullptr : match_options_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::BatchOperation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::BatchOperationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::OpenResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::OpenResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::OpenResult_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::OpenResult_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::OpenResultDataView::Tag::STATUS: {
        decltype(Traits::status(input))
            in_status = Traits::status(input);
        mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
            in_status, &result->data.f_status);
        break;
      }
      case ::blink::mojom::OpenResultDataView::Tag::CACHE: {
        decltype(Traits::cache(input))
            in_cache = Traits::cache(input);
        mojo::internal::Serialize<::blink::mojom::CacheStorageCacheAssociatedPtrInfoDataView>(
            in_cache, &result->data.f_cache, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_cache),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
            "invalid cache in OpenResult union");
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::OpenResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::OpenResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MatchResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::MatchResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::MatchResult_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::MatchResult_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::MatchResultDataView::Tag::STATUS: {
        decltype(Traits::status(input))
            in_status = Traits::status(input);
        mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
            in_status, &result->data.f_status);
        break;
      }
      case ::blink::mojom::MatchResultDataView::Tag::RESPONSE: {
        decltype(Traits::response(input))
            in_response = Traits::response(input);
        typename decltype(result->data.f_response)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::blink::mojom::FetchAPIResponseDataView>(
            in_response, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null response in MatchResult union");
        result->data.f_response.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::MatchResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::MatchResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MatchAllResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::MatchAllResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::MatchAllResult_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::MatchAllResult_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::MatchAllResultDataView::Tag::STATUS: {
        decltype(Traits::status(input))
            in_status = Traits::status(input);
        mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
            in_status, &result->data.f_status);
        break;
      }
      case ::blink::mojom::MatchAllResultDataView::Tag::RESPONSES: {
        decltype(Traits::responses(input))
            in_responses = Traits::responses(input);
        typename decltype(result->data.f_responses)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams responses_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::FetchAPIResponseDataView>>(
            in_responses, buffer, &value_writer, &responses_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null responses in MatchAllResult union");
        result->data.f_responses.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::MatchAllResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::MatchAllResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CacheKeysResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::CacheKeysResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::CacheKeysResult_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::CacheKeysResult_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::CacheKeysResultDataView::Tag::STATUS: {
        decltype(Traits::status(input))
            in_status = Traits::status(input);
        mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
            in_status, &result->data.f_status);
        break;
      }
      case ::blink::mojom::CacheKeysResultDataView::Tag::KEYS: {
        decltype(Traits::keys(input))
            in_keys = Traits::keys(input);
        typename decltype(result->data.f_keys)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams keys_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>>(
            in_keys, buffer, &value_writer, &keys_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null keys in CacheKeysResult union");
        result->data.f_keys.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::CacheKeysResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::CacheKeysResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void CacheStorageVerboseErrorDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void MultiCacheQueryOptionsDataView::GetQueryOptionsDataView(
    CacheQueryOptionsDataView* output) {
  auto pointer = data_->query_options.Get();
  *output = CacheQueryOptionsDataView(pointer, context_);
}
inline void MultiCacheQueryOptionsDataView::GetCacheNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->cache_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void BatchOperationDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void BatchOperationDataView::GetResponseDataView(
    ::blink::mojom::FetchAPIResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = ::blink::mojom::FetchAPIResponseDataView(pointer, context_);
}
inline void BatchOperationDataView::GetMatchOptionsDataView(
    CacheQueryOptionsDataView* output) {
  auto pointer = data_->match_options.Get();
  *output = CacheQueryOptionsDataView(pointer, context_);
}



inline void MatchResultDataView::GetResponseDataView(
    ::blink::mojom::FetchAPIResponseDataView* output) {
  DCHECK(is_response());
  *output = ::blink::mojom::FetchAPIResponseDataView(data_->data.f_response.Get(), context_);
}

inline void MatchAllResultDataView::GetResponsesDataView(
    mojo::ArrayDataView<::blink::mojom::FetchAPIResponseDataView>* output) {
  DCHECK(is_responses());
  *output = mojo::ArrayDataView<::blink::mojom::FetchAPIResponseDataView>(data_->data.f_responses.Get(), context_);
}

inline void CacheKeysResultDataView::GetKeysDataView(
    mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>* output) {
  DCHECK(is_keys());
  *output = mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>(data_->data.f_keys.Get(), context_);
}


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_H_