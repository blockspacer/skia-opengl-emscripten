// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class SyncRegistrationOptionsDataView;

class BackgroundSyncRegistrationInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::SyncRegistrationOptionsDataView> {
  using Data = ::blink::mojom::internal::SyncRegistrationOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::BackgroundSyncRegistrationInfoDataView> {
  using Data = ::blink::mojom::internal::BackgroundSyncRegistrationInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class BackgroundSyncError : int32_t {
  
  NONE,
  
  STORAGE,
  
  NOT_FOUND,
  
  NO_SERVICE_WORKER,
  
  NOT_ALLOWED,
  
  PERMISSION_DENIED,
  
  MAX = BackgroundSyncError::PERMISSION_DENIED,
  kMinValue = 0,
  kMaxValue = 5,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, BackgroundSyncError value);
inline bool IsKnownEnumValue(BackgroundSyncError value) {
  return internal::BackgroundSyncError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BackgroundSyncState : int32_t {
  
  PENDING,
  
  FIRING,
  
  REREGISTERED_WHILE_FIRING,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, BackgroundSyncState value);
inline bool IsKnownEnumValue(BackgroundSyncState value) {
  return internal::BackgroundSyncState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BackgroundSyncEventLastChance : int32_t {
  
  IS_NOT_LAST_CHANCE,
  
  IS_LAST_CHANCE,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, BackgroundSyncEventLastChance value);
inline bool IsKnownEnumValue(BackgroundSyncEventLastChance value) {
  return internal::BackgroundSyncEventLastChance_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BackgroundSyncType : int32_t {
  
  ONE_SHOT,
  
  PERIODIC,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, BackgroundSyncType value);
inline bool IsKnownEnumValue(BackgroundSyncType value) {
  return internal::BackgroundSyncType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class BackgroundSyncServiceInterfaceBase {};

using BackgroundSyncServicePtrDataView =
    mojo::InterfacePtrDataView<BackgroundSyncServiceInterfaceBase>;
using BackgroundSyncServiceRequestDataView =
    mojo::InterfaceRequestDataView<BackgroundSyncServiceInterfaceBase>;
using BackgroundSyncServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BackgroundSyncServiceInterfaceBase>;
using BackgroundSyncServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BackgroundSyncServiceInterfaceBase>;
class SyncRegistrationOptionsDataView {
 public:
  SyncRegistrationOptionsDataView() {}

  SyncRegistrationOptionsDataView(
      internal::SyncRegistrationOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTagDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTag(UserType* output) {
    auto* pointer = data_->tag.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int64_t min_interval() const {
    return data_->min_interval;
  }
 private:
  internal::SyncRegistrationOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundSyncRegistrationInfoDataView {
 public:
  BackgroundSyncRegistrationInfoDataView() {}

  BackgroundSyncRegistrationInfoDataView(
      internal::BackgroundSyncRegistrationInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetTagDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTag(UserType* output) {
    auto* pointer = data_->tag.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSyncType(UserType* output) const {
    auto data_value = data_->sync_type;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundSyncType>(
        data_value, output);
  }

  BackgroundSyncType sync_type() const {
    return static_cast<BackgroundSyncType>(data_->sync_type);
  }
 private:
  internal::BackgroundSyncRegistrationInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::BackgroundSyncError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::BackgroundSyncError> {};

template <>
struct hash<::blink::mojom::BackgroundSyncState>
    : public mojo::internal::EnumHashImpl<::blink::mojom::BackgroundSyncState> {};

template <>
struct hash<::blink::mojom::BackgroundSyncEventLastChance>
    : public mojo::internal::EnumHashImpl<::blink::mojom::BackgroundSyncEventLastChance> {};

template <>
struct hash<::blink::mojom::BackgroundSyncType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::BackgroundSyncType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::BackgroundSyncError, ::blink::mojom::BackgroundSyncError> {
  static ::blink::mojom::BackgroundSyncError ToMojom(::blink::mojom::BackgroundSyncError input) { return input; }
  static bool FromMojom(::blink::mojom::BackgroundSyncError input, ::blink::mojom::BackgroundSyncError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundSyncError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::BackgroundSyncError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::BackgroundSyncError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::BackgroundSyncState, ::blink::mojom::BackgroundSyncState> {
  static ::blink::mojom::BackgroundSyncState ToMojom(::blink::mojom::BackgroundSyncState input) { return input; }
  static bool FromMojom(::blink::mojom::BackgroundSyncState input, ::blink::mojom::BackgroundSyncState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundSyncState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::BackgroundSyncState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::BackgroundSyncState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::BackgroundSyncEventLastChance, ::blink::mojom::BackgroundSyncEventLastChance> {
  static ::blink::mojom::BackgroundSyncEventLastChance ToMojom(::blink::mojom::BackgroundSyncEventLastChance input) { return input; }
  static bool FromMojom(::blink::mojom::BackgroundSyncEventLastChance input, ::blink::mojom::BackgroundSyncEventLastChance* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundSyncEventLastChance, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::BackgroundSyncEventLastChance, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::BackgroundSyncEventLastChance>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::BackgroundSyncType, ::blink::mojom::BackgroundSyncType> {
  static ::blink::mojom::BackgroundSyncType ToMojom(::blink::mojom::BackgroundSyncType input) { return input; }
  static bool FromMojom(::blink::mojom::BackgroundSyncType input, ::blink::mojom::BackgroundSyncType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundSyncType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::BackgroundSyncType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::BackgroundSyncType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SyncRegistrationOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SyncRegistrationOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SyncRegistrationOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::tag(input)) in_tag = Traits::tag(input);
    typename decltype((*output)->tag)::BaseType::BufferWriter
        tag_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_tag, buffer, &tag_writer, context);
    (*output)->tag.Set(
        tag_writer.is_null() ? nullptr : tag_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->tag.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null tag in SyncRegistrationOptions struct");
    (*output)->min_interval = Traits::min_interval(input);
  }

  static bool Deserialize(::blink::mojom::internal::SyncRegistrationOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SyncRegistrationOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BackgroundSyncRegistrationInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::BackgroundSyncRegistrationInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::BackgroundSyncRegistrationInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->service_worker_registration_id = Traits::service_worker_registration_id(input);
    decltype(Traits::tag(input)) in_tag = Traits::tag(input);
    typename decltype((*output)->tag)::BaseType::BufferWriter
        tag_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_tag, buffer, &tag_writer, context);
    (*output)->tag.Set(
        tag_writer.is_null() ? nullptr : tag_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->tag.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null tag in BackgroundSyncRegistrationInfo struct");
    mojo::internal::Serialize<::blink::mojom::BackgroundSyncType>(
        Traits::sync_type(input), &(*output)->sync_type);
  }

  static bool Deserialize(::blink::mojom::internal::BackgroundSyncRegistrationInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::BackgroundSyncRegistrationInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void SyncRegistrationOptionsDataView::GetTagDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->tag.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void BackgroundSyncRegistrationInfoDataView::GetTagDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->tag.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_SHARED_H_