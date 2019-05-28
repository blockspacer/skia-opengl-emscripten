// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_H_

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
#include "components/services/leveldb/public/interfaces/leveldb.mojom-shared-internal.h"
#include "components/services/filesystem/public/interfaces/directory.mojom-shared.h"
#include "mojo/public/mojom/base/memory_allocator_dump_cross_process_uid.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace leveldb {
namespace mojom {
class BatchedOperationDataView;

class KeyValueDataView;

class OpenOptionsDataView;



}  // namespace mojom
}  // namespace leveldb

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::leveldb::mojom::BatchedOperationDataView> {
  using Data = ::leveldb::mojom::internal::BatchedOperation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::leveldb::mojom::KeyValueDataView> {
  using Data = ::leveldb::mojom::internal::KeyValue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::leveldb::mojom::OpenOptionsDataView> {
  using Data = ::leveldb::mojom::internal::OpenOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace leveldb {
namespace mojom {


enum class DatabaseError : int32_t {
  
  OK,
  
  NOT_FOUND,
  
  CORRUPTION,
  
  NOT_SUPPORTED,
  
  INVALID_ARGUMENT,
  
  IO_ERROR,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, DatabaseError value);
inline bool IsKnownEnumValue(DatabaseError value) {
  return internal::DatabaseError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BatchOperationType : int32_t {
  
  PUT_KEY,
  
  DELETE_KEY,
  
  DELETE_PREFIXED_KEY,
  
  COPY_PREFIXED_KEY,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, BatchOperationType value);
inline bool IsKnownEnumValue(BatchOperationType value) {
  return internal::BatchOperationType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SharedReadCache : int32_t {
  
  Default,
  
  Web,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, SharedReadCache value);
inline bool IsKnownEnumValue(SharedReadCache value) {
  return internal::SharedReadCache_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class LevelDBServiceInterfaceBase {};

using LevelDBServicePtrDataView =
    mojo::InterfacePtrDataView<LevelDBServiceInterfaceBase>;
using LevelDBServiceRequestDataView =
    mojo::InterfaceRequestDataView<LevelDBServiceInterfaceBase>;
using LevelDBServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<LevelDBServiceInterfaceBase>;
using LevelDBServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<LevelDBServiceInterfaceBase>;
class LevelDBDatabaseInterfaceBase {};

using LevelDBDatabasePtrDataView =
    mojo::InterfacePtrDataView<LevelDBDatabaseInterfaceBase>;
using LevelDBDatabaseRequestDataView =
    mojo::InterfaceRequestDataView<LevelDBDatabaseInterfaceBase>;
using LevelDBDatabaseAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<LevelDBDatabaseInterfaceBase>;
using LevelDBDatabaseAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<LevelDBDatabaseInterfaceBase>;
class BatchedOperationDataView {
 public:
  BatchedOperationDataView() {}

  BatchedOperationDataView(
      internal::BatchedOperation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::leveldb::mojom::BatchOperationType>(
        data_value, output);
  }

  BatchOperationType type() const {
    return static_cast<BatchOperationType>(data_->type);
  }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::BatchedOperation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class KeyValueDataView {
 public:
  KeyValueDataView() {}

  KeyValueDataView(
      internal::KeyValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::KeyValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class OpenOptionsDataView {
 public:
  OpenOptionsDataView() {}

  OpenOptionsDataView(
      internal::OpenOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool create_if_missing() const {
    return data_->create_if_missing;
  }
  bool error_if_exists() const {
    return data_->error_if_exists;
  }
  bool paranoid_checks() const {
    return data_->paranoid_checks;
  }
  uint64_t write_buffer_size() const {
    return data_->write_buffer_size;
  }
  int32_t max_open_files() const {
    return data_->max_open_files;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSharedBlockReadCache(UserType* output) const {
    auto data_value = data_->shared_block_read_cache;
    return mojo::internal::Deserialize<::leveldb::mojom::SharedReadCache>(
        data_value, output);
  }

  SharedReadCache shared_block_read_cache() const {
    return static_cast<SharedReadCache>(data_->shared_block_read_cache);
  }
 private:
  internal::OpenOptions_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace leveldb

namespace std {

template <>
struct hash<::leveldb::mojom::DatabaseError>
    : public mojo::internal::EnumHashImpl<::leveldb::mojom::DatabaseError> {};

template <>
struct hash<::leveldb::mojom::BatchOperationType>
    : public mojo::internal::EnumHashImpl<::leveldb::mojom::BatchOperationType> {};

template <>
struct hash<::leveldb::mojom::SharedReadCache>
    : public mojo::internal::EnumHashImpl<::leveldb::mojom::SharedReadCache> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::leveldb::mojom::DatabaseError, ::leveldb::mojom::DatabaseError> {
  static ::leveldb::mojom::DatabaseError ToMojom(::leveldb::mojom::DatabaseError input) { return input; }
  static bool FromMojom(::leveldb::mojom::DatabaseError input, ::leveldb::mojom::DatabaseError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::leveldb::mojom::DatabaseError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::leveldb::mojom::DatabaseError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::leveldb::mojom::DatabaseError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::leveldb::mojom::BatchOperationType, ::leveldb::mojom::BatchOperationType> {
  static ::leveldb::mojom::BatchOperationType ToMojom(::leveldb::mojom::BatchOperationType input) { return input; }
  static bool FromMojom(::leveldb::mojom::BatchOperationType input, ::leveldb::mojom::BatchOperationType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::leveldb::mojom::BatchOperationType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::leveldb::mojom::BatchOperationType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::leveldb::mojom::BatchOperationType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::leveldb::mojom::SharedReadCache, ::leveldb::mojom::SharedReadCache> {
  static ::leveldb::mojom::SharedReadCache ToMojom(::leveldb::mojom::SharedReadCache input) { return input; }
  static bool FromMojom(::leveldb::mojom::SharedReadCache input, ::leveldb::mojom::SharedReadCache* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::leveldb::mojom::SharedReadCache, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::leveldb::mojom::SharedReadCache, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::leveldb::mojom::SharedReadCache>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::leveldb::mojom::BatchedOperationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::leveldb::mojom::BatchedOperationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::leveldb::mojom::internal::BatchedOperation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::leveldb::mojom::BatchOperationType>(
        Traits::type(input), &(*output)->type);
    decltype(Traits::key(input)) in_key = Traits::key(input);
    typename decltype((*output)->key)::BaseType::BufferWriter
        key_writer;
    const mojo::internal::ContainerValidateParams key_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_key, buffer, &key_writer, &key_validate_params,
        context);
    (*output)->key.Set(
        key_writer.is_null() ? nullptr : key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key in BatchedOperation struct");
    decltype(Traits::value(input)) in_value = Traits::value(input);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    const mojo::internal::ContainerValidateParams value_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_value, buffer, &value_writer, &value_validate_params,
        context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
  }

  static bool Deserialize(::leveldb::mojom::internal::BatchedOperation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::leveldb::mojom::BatchedOperationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::leveldb::mojom::KeyValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::leveldb::mojom::KeyValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::leveldb::mojom::internal::KeyValue_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::key(input)) in_key = Traits::key(input);
    typename decltype((*output)->key)::BaseType::BufferWriter
        key_writer;
    const mojo::internal::ContainerValidateParams key_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_key, buffer, &key_writer, &key_validate_params,
        context);
    (*output)->key.Set(
        key_writer.is_null() ? nullptr : key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key in KeyValue struct");
    decltype(Traits::value(input)) in_value = Traits::value(input);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    const mojo::internal::ContainerValidateParams value_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_value, buffer, &value_writer, &value_validate_params,
        context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in KeyValue struct");
  }

  static bool Deserialize(::leveldb::mojom::internal::KeyValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::leveldb::mojom::KeyValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::leveldb::mojom::OpenOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::leveldb::mojom::OpenOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::leveldb::mojom::internal::OpenOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->create_if_missing = Traits::create_if_missing(input);
    (*output)->error_if_exists = Traits::error_if_exists(input);
    (*output)->paranoid_checks = Traits::paranoid_checks(input);
    (*output)->write_buffer_size = Traits::write_buffer_size(input);
    (*output)->max_open_files = Traits::max_open_files(input);
    mojo::internal::Serialize<::leveldb::mojom::SharedReadCache>(
        Traits::shared_block_read_cache(input), &(*output)->shared_block_read_cache);
  }

  static bool Deserialize(::leveldb::mojom::internal::OpenOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::leveldb::mojom::OpenOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace leveldb {
namespace mojom {

inline void BatchedOperationDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void BatchedOperationDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void KeyValueDataView::GetKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void KeyValueDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}





}  // namespace mojom
}  // namespace leveldb

#endif  // COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_H_