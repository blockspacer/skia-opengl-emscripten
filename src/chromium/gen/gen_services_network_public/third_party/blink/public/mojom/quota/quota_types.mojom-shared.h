// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/quota/quota_types.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class UsageBreakdownDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::UsageBreakdownDataView> {
  using Data = ::blink::mojom::internal::UsageBreakdown_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class StorageType : int32_t {
  
  kTemporary,
  
  kPersistent,
  
  kSyncable,
  
  kQuotaNotManaged,
  
  kUnknown,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, StorageType value);
inline bool IsKnownEnumValue(StorageType value) {
  return internal::StorageType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class QuotaStatusCode : int32_t {
  
  kOk = 0,
  
  kErrorNotSupported = 9,
  
  kErrorInvalidModification = 13,
  
  kErrorInvalidAccess = 15,
  
  kErrorAbort = 20,
  
  kUnknown = -1,
  kMinValue = -1,
  kMaxValue = 20,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, QuotaStatusCode value);
inline bool IsKnownEnumValue(QuotaStatusCode value) {
  return internal::QuotaStatusCode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class UsageBreakdownDataView {
 public:
  UsageBreakdownDataView() {}

  UsageBreakdownDataView(
      internal::UsageBreakdown_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t fileSystem() const {
    return data_->fileSystem;
  }
  int64_t webSql() const {
    return data_->webSql;
  }
  int64_t appcache() const {
    return data_->appcache;
  }
  int64_t indexedDatabase() const {
    return data_->indexedDatabase;
  }
  int64_t serviceWorkerCache() const {
    return data_->serviceWorkerCache;
  }
  int64_t serviceWorker() const {
    return data_->serviceWorker;
  }
  int64_t backgroundFetch() const {
    return data_->backgroundFetch;
  }
 private:
  internal::UsageBreakdown_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::StorageType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::StorageType> {};

template <>
struct hash<::blink::mojom::QuotaStatusCode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::QuotaStatusCode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::StorageType, ::blink::mojom::StorageType> {
  static ::blink::mojom::StorageType ToMojom(::blink::mojom::StorageType input) { return input; }
  static bool FromMojom(::blink::mojom::StorageType input, ::blink::mojom::StorageType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::StorageType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::StorageType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::StorageType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::QuotaStatusCode, ::blink::mojom::QuotaStatusCode> {
  static ::blink::mojom::QuotaStatusCode ToMojom(::blink::mojom::QuotaStatusCode input) { return input; }
  static bool FromMojom(::blink::mojom::QuotaStatusCode input, ::blink::mojom::QuotaStatusCode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::QuotaStatusCode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::QuotaStatusCode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::QuotaStatusCode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::UsageBreakdownDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::UsageBreakdownDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::UsageBreakdown_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->fileSystem = Traits::fileSystem(input);
    (*output)->webSql = Traits::webSql(input);
    (*output)->appcache = Traits::appcache(input);
    (*output)->indexedDatabase = Traits::indexedDatabase(input);
    (*output)->serviceWorkerCache = Traits::serviceWorkerCache(input);
    (*output)->serviceWorker = Traits::serviceWorker(input);
    (*output)->backgroundFetch = Traits::backgroundFetch(input);
  }

  static bool Deserialize(::blink::mojom::internal::UsageBreakdown_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::UsageBreakdownDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_SHARED_H_