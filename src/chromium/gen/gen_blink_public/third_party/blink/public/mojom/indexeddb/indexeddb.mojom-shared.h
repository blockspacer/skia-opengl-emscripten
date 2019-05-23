// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/indexeddb/indexeddb.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class IDBKeyDataView;

class IDBKeyPathDataView;

class IDBKeyRangeDataView;

class IDBIndexMetadataDataView;

class IDBObjectStoreMetadataDataView;

class IDBDatabaseMetadataDataView;

class IDBNameAndVersionDataView;

class IDBIndexKeysDataView;

class IDBFileInfoDataView;

class IDBBlobInfoDataView;

class IDBValueDataView;

class IDBReturnValueDataView;

class IDBObservationDataView;

class IDBObserverTransactionDataView;

class IDBObserverChangesDataView;

class IDBErrorDataView;

class IDBCursorValueDataView;

class IDBKeyDataDataView;
class IDBKeyPathDataDataView;


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::IDBKeyDataView> {
  using Data = ::blink::mojom::internal::IDBKey_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBKeyPathDataView> {
  using Data = ::blink::mojom::internal::IDBKeyPath_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBKeyRangeDataView> {
  using Data = ::blink::mojom::internal::IDBKeyRange_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBIndexMetadataDataView> {
  using Data = ::blink::mojom::internal::IDBIndexMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBObjectStoreMetadataDataView> {
  using Data = ::blink::mojom::internal::IDBObjectStoreMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBDatabaseMetadataDataView> {
  using Data = ::blink::mojom::internal::IDBDatabaseMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBNameAndVersionDataView> {
  using Data = ::blink::mojom::internal::IDBNameAndVersion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBIndexKeysDataView> {
  using Data = ::blink::mojom::internal::IDBIndexKeys_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBFileInfoDataView> {
  using Data = ::blink::mojom::internal::IDBFileInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBBlobInfoDataView> {
  using Data = ::blink::mojom::internal::IDBBlobInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBValueDataView> {
  using Data = ::blink::mojom::internal::IDBValue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBReturnValueDataView> {
  using Data = ::blink::mojom::internal::IDBReturnValue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBObservationDataView> {
  using Data = ::blink::mojom::internal::IDBObservation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBObserverTransactionDataView> {
  using Data = ::blink::mojom::internal::IDBObserverTransaction_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBObserverChangesDataView> {
  using Data = ::blink::mojom::internal::IDBObserverChanges_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBErrorDataView> {
  using Data = ::blink::mojom::internal::IDBError_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBCursorValueDataView> {
  using Data = ::blink::mojom::internal::IDBCursorValue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBKeyDataDataView> {
  using Data = ::blink::mojom::internal::IDBKeyData_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::blink::mojom::IDBKeyPathDataDataView> {
  using Data = ::blink::mojom::internal::IDBKeyPathData_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class IDBCursorDirection : int32_t {
  
  Next,
  
  NextNoDuplicate,
  
  Prev,
  
  PrevNoDuplicate,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, IDBCursorDirection value);
inline bool IsKnownEnumValue(IDBCursorDirection value) {
  return internal::IDBCursorDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class IDBDataLoss : int32_t {
  
  None,
  
  Total,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, IDBDataLoss value);
inline bool IsKnownEnumValue(IDBDataLoss value) {
  return internal::IDBDataLoss_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class IDBKeyType : int32_t {
  
  Invalid,
  
  Array,
  
  Binary,
  
  String,
  
  Date,
  
  Number,
  
  Null,
  
  Min,
  kMinValue = 0,
  kMaxValue = 7,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, IDBKeyType value);
inline bool IsKnownEnumValue(IDBKeyType value) {
  return internal::IDBKeyType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class IDBKeyPathType : int32_t {
  
  Null,
  
  String,
  
  Array,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, IDBKeyPathType value);
inline bool IsKnownEnumValue(IDBKeyPathType value) {
  return internal::IDBKeyPathType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class IDBOperationType : int32_t {
  
  Add,
  
  Put,
  
  Delete,
  
  Clear,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, IDBOperationType value);
inline bool IsKnownEnumValue(IDBOperationType value) {
  return internal::IDBOperationType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class IDBPutMode : int32_t {
  
  AddOrUpdate,
  
  AddOnly,
  
  CursorUpdate,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, IDBPutMode value);
inline bool IsKnownEnumValue(IDBPutMode value) {
  return internal::IDBPutMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class IDBTaskType : int32_t {
  
  Normal,
  
  Preemptive,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, IDBTaskType value);
inline bool IsKnownEnumValue(IDBTaskType value) {
  return internal::IDBTaskType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class IDBTransactionMode : int32_t {
  
  ReadOnly,
  
  ReadWrite,
  
  VersionChange,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, IDBTransactionMode value);
inline bool IsKnownEnumValue(IDBTransactionMode value) {
  return internal::IDBTransactionMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class IDBStatus : int32_t {
  
  OK,
  
  NotFound,
  
  Corruption,
  
  NotSupported,
  
  InvalidArgument,
  
  IOError,
  kMinValue = 0,
  kMaxValue = 5,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, IDBStatus value);
inline bool IsKnownEnumValue(IDBStatus value) {
  return internal::IDBStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class IDBCallbacksInterfaceBase {};

using IDBCallbacksPtrDataView =
    mojo::InterfacePtrDataView<IDBCallbacksInterfaceBase>;
using IDBCallbacksRequestDataView =
    mojo::InterfaceRequestDataView<IDBCallbacksInterfaceBase>;
using IDBCallbacksAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IDBCallbacksInterfaceBase>;
using IDBCallbacksAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IDBCallbacksInterfaceBase>;
class IDBDatabaseCallbacksInterfaceBase {};

using IDBDatabaseCallbacksPtrDataView =
    mojo::InterfacePtrDataView<IDBDatabaseCallbacksInterfaceBase>;
using IDBDatabaseCallbacksRequestDataView =
    mojo::InterfaceRequestDataView<IDBDatabaseCallbacksInterfaceBase>;
using IDBDatabaseCallbacksAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IDBDatabaseCallbacksInterfaceBase>;
using IDBDatabaseCallbacksAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IDBDatabaseCallbacksInterfaceBase>;
class IDBCursorInterfaceBase {};

using IDBCursorPtrDataView =
    mojo::InterfacePtrDataView<IDBCursorInterfaceBase>;
using IDBCursorRequestDataView =
    mojo::InterfaceRequestDataView<IDBCursorInterfaceBase>;
using IDBCursorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IDBCursorInterfaceBase>;
using IDBCursorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IDBCursorInterfaceBase>;
class IDBTransactionInterfaceBase {};

using IDBTransactionPtrDataView =
    mojo::InterfacePtrDataView<IDBTransactionInterfaceBase>;
using IDBTransactionRequestDataView =
    mojo::InterfaceRequestDataView<IDBTransactionInterfaceBase>;
using IDBTransactionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IDBTransactionInterfaceBase>;
using IDBTransactionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IDBTransactionInterfaceBase>;
class IDBDatabaseInterfaceBase {};

using IDBDatabasePtrDataView =
    mojo::InterfacePtrDataView<IDBDatabaseInterfaceBase>;
using IDBDatabaseRequestDataView =
    mojo::InterfaceRequestDataView<IDBDatabaseInterfaceBase>;
using IDBDatabaseAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IDBDatabaseInterfaceBase>;
using IDBDatabaseAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IDBDatabaseInterfaceBase>;
class IDBFactoryInterfaceBase {};

using IDBFactoryPtrDataView =
    mojo::InterfacePtrDataView<IDBFactoryInterfaceBase>;
using IDBFactoryRequestDataView =
    mojo::InterfaceRequestDataView<IDBFactoryInterfaceBase>;
using IDBFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IDBFactoryInterfaceBase>;
using IDBFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IDBFactoryInterfaceBase>;
class IDBKeyDataView {
 public:
  IDBKeyDataView() {}

  IDBKeyDataView(
      internal::IDBKey_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      IDBKeyDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBKey_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBKeyPathDataView {
 public:
  IDBKeyPathDataView() {}

  IDBKeyPathDataView(
      internal::IDBKeyPath_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      IDBKeyPathDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyPathDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBKeyPath_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBKeyRangeDataView {
 public:
  IDBKeyRangeDataView() {}

  IDBKeyRangeDataView(
      internal::IDBKeyRange_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLowerDataView(
      IDBKeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLower(UserType* output) {
    auto* pointer = data_->lower.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyDataView>(
        pointer, output, context_);
  }
  inline void GetUpperDataView(
      IDBKeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpper(UserType* output) {
    auto* pointer = data_->upper.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyDataView>(
        pointer, output, context_);
  }
  bool lower_open() const {
    return data_->lower_open;
  }
  bool upper_open() const {
    return data_->upper_open;
  }
 private:
  internal::IDBKeyRange_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBIndexMetadataDataView {
 public:
  IDBIndexMetadataDataView() {}

  IDBIndexMetadataDataView(
      internal::IDBIndexMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t id() const {
    return data_->id;
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetKeyPathDataView(
      IDBKeyPathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyPath(UserType* output) {
    auto* pointer = data_->key_path.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyPathDataView>(
        pointer, output, context_);
  }
  bool unique() const {
    return data_->unique;
  }
  bool multi_entry() const {
    return data_->multi_entry;
  }
 private:
  internal::IDBIndexMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBObjectStoreMetadataDataView {
 public:
  IDBObjectStoreMetadataDataView() {}

  IDBObjectStoreMetadataDataView(
      internal::IDBObjectStoreMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t id() const {
    return data_->id;
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetKeyPathDataView(
      IDBKeyPathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyPath(UserType* output) {
    auto* pointer = data_->key_path.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyPathDataView>(
        pointer, output, context_);
  }
  bool auto_increment() const {
    return data_->auto_increment;
  }
  int64_t max_index_id() const {
    return data_->max_index_id;
  }
  inline void GetIndexesDataView(
      mojo::MapDataView<int64_t, IDBIndexMetadataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIndexes(UserType* output) {
    auto* pointer = data_->indexes.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int64_t, ::blink::mojom::IDBIndexMetadataDataView>>(
        pointer, output, context_);
  }
 private:
  internal::IDBObjectStoreMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBDatabaseMetadataDataView {
 public:
  IDBDatabaseMetadataDataView() {}

  IDBDatabaseMetadataDataView(
      internal::IDBDatabaseMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t id() const {
    return data_->id;
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t version() const {
    return data_->version;
  }
  int64_t max_object_store_id() const {
    return data_->max_object_store_id;
  }
  inline void GetObjectStoresDataView(
      mojo::MapDataView<int64_t, IDBObjectStoreMetadataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObjectStores(UserType* output) {
    auto* pointer = data_->object_stores.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int64_t, ::blink::mojom::IDBObjectStoreMetadataDataView>>(
        pointer, output, context_);
  }
 private:
  internal::IDBDatabaseMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBNameAndVersionDataView {
 public:
  IDBNameAndVersionDataView() {}

  IDBNameAndVersionDataView(
      internal::IDBNameAndVersion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t version() const {
    return data_->version;
  }
 private:
  internal::IDBNameAndVersion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBIndexKeysDataView {
 public:
  IDBIndexKeysDataView() {}

  IDBIndexKeysDataView(
      internal::IDBIndexKeys_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetIndexKeysDataView(
      mojo::ArrayDataView<IDBKeyDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIndexKeys(UserType* output) {
    auto* pointer = data_->index_keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::IDBKeyDataView>>(
        pointer, output, context_);
  }
 private:
  internal::IDBIndexKeys_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBFileInfoDataView {
 public:
  IDBFileInfoDataView() {}

  IDBFileInfoDataView(
      internal::IDBFileInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetLastModifiedDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastModified(UserType* output) {
    auto* pointer = data_->last_modified.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBFileInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBBlobInfoDataView {
 public:
  IDBBlobInfoDataView() {}

  IDBBlobInfoDataView(
      internal::IDBBlobInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobPtrDataView>(
            &data_->blob, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMimeTypeDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMimeType(UserType* output) {
    auto* pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t size() const {
    return data_->size;
  }
  inline void GetFileDataView(
      IDBFileInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFile(UserType* output) {
    auto* pointer = data_->file.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBFileInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBBlobInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBValueDataView {
 public:
  IDBValueDataView() {}

  IDBValueDataView(
      internal::IDBValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBitsDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBits(UserType* output) {
    auto* pointer = data_->bits.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetBlobOrFileInfoDataView(
      mojo::ArrayDataView<IDBBlobInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlobOrFileInfo(UserType* output) {
    auto* pointer = data_->blob_or_file_info.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::IDBBlobInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::IDBValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBReturnValueDataView {
 public:
  IDBReturnValueDataView() {}

  IDBReturnValueDataView(
      internal::IDBReturnValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      IDBValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBValueDataView>(
        pointer, output, context_);
  }
  inline void GetPrimaryKeyDataView(
      IDBKeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryKey(UserType* output) {
    auto* pointer = data_->primary_key.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyDataView>(
        pointer, output, context_);
  }
  inline void GetKeyPathDataView(
      IDBKeyPathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyPath(UserType* output) {
    auto* pointer = data_->key_path.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyPathDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBReturnValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBObservationDataView {
 public:
  IDBObservationDataView() {}

  IDBObservationDataView(
      internal::IDBObservation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::IDBOperationType>(
        data_value, output);
  }

  IDBOperationType type() const {
    return static_cast<IDBOperationType>(data_->type);
  }
  inline void GetKeyRangeDataView(
      IDBKeyRangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyRange(UserType* output) {
    auto* pointer = data_->key_range.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBKeyRangeDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      IDBValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::blink::mojom::IDBValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBObservation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBObserverTransactionDataView {
 public:
  IDBObserverTransactionDataView() {}

  IDBObserverTransactionDataView(
      internal::IDBObserverTransaction_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t id() const {
    return data_->id;
  }
  inline void GetScopeDataView(
      mojo::ArrayDataView<int64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScope(UserType* output) {
    auto* pointer = data_->scope.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int64_t>>(
        pointer, output, context_);
  }
 private:
  internal::IDBObserverTransaction_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBObserverChangesDataView {
 public:
  IDBObserverChangesDataView() {}

  IDBObserverChangesDataView(
      internal::IDBObserverChanges_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetObservationIndexMapDataView(
      mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObservationIndexMap(UserType* output) {
    auto* pointer = data_->observation_index_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>>(
        pointer, output, context_);
  }
  inline void GetTransactionMapDataView(
      mojo::MapDataView<int32_t, IDBObserverTransactionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransactionMap(UserType* output) {
    auto* pointer = data_->transaction_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int32_t, ::blink::mojom::IDBObserverTransactionDataView>>(
        pointer, output, context_);
  }
  inline void GetObservationsDataView(
      mojo::ArrayDataView<IDBObservationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObservations(UserType* output) {
    auto* pointer = data_->observations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::IDBObservationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::IDBObserverChanges_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBErrorDataView {
 public:
  IDBErrorDataView() {}

  IDBErrorDataView(
      internal::IDBError_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t error_code() const {
    return data_->error_code;
  }
  inline void GetErrorMessageDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMessage(UserType* output) {
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::IDBError_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBCursorValueDataView {
 public:
  IDBCursorValueDataView() {}

  IDBCursorValueDataView(
      internal::IDBCursorValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<IDBKeyDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeys(UserType* output) {
    auto* pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::IDBKeyDataView>>(
        pointer, output, context_);
  }
  inline void GetPrimaryKeysDataView(
      mojo::ArrayDataView<IDBKeyDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryKeys(UserType* output) {
    auto* pointer = data_->primary_keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::IDBKeyDataView>>(
        pointer, output, context_);
  }
  inline void GetValuesDataView(
      mojo::ArrayDataView<IDBValueDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValues(UserType* output) {
    auto* pointer = data_->values.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::IDBValueDataView>>(
        pointer, output, context_);
  }
 private:
  internal::IDBCursorValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBKeyDataDataView {
 public:
  using Tag = internal::IDBKeyData_Data::IDBKeyData_Tag;

  IDBKeyDataDataView() {}

  IDBKeyDataDataView(
      internal::IDBKeyData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_key_array() const { return data_->tag == Tag::KEY_ARRAY; }
  inline void GetKeyArrayDataView(
      mojo::ArrayDataView<IDBKeyDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyArray(UserType* output) {
    DCHECK(is_key_array());
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::IDBKeyDataView>>(
        data_->data.f_key_array.Get(), output, context_);
  }
  bool is_binary() const { return data_->tag == Tag::BINARY; }
  inline void GetBinaryDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBinary(UserType* output) {
    DCHECK(is_binary());
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        data_->data.f_binary.Get(), output, context_);
  }
  bool is_string() const { return data_->tag == Tag::STRING; }
  inline void GetStringDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadString(UserType* output) {
    DCHECK(is_string());
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        data_->data.f_string.Get(), output, context_);
  }
  bool is_date() const { return data_->tag == Tag::DATE; }
  double date() const {
    DCHECK(is_date());
    return data_->data.f_date;
  }
  bool is_number() const { return data_->tag == Tag::NUMBER; }
  double number() const {
    DCHECK(is_number());
    return data_->data.f_number;
  }
  bool is_other_invalid() const { return data_->tag == Tag::OTHER_INVALID; }
  bool other_invalid() const {
    DCHECK(is_other_invalid());
    return data_->data.f_other_invalid;
  }
  bool is_other_null() const { return data_->tag == Tag::OTHER_NULL; }
  bool other_null() const {
    DCHECK(is_other_null());
    return data_->data.f_other_null;
  }

 private:
  internal::IDBKeyData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IDBKeyPathDataDataView {
 public:
  using Tag = internal::IDBKeyPathData_Data::IDBKeyPathData_Tag;

  IDBKeyPathDataDataView() {}

  IDBKeyPathDataDataView(
      internal::IDBKeyPathData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_string() const { return data_->tag == Tag::STRING; }
  inline void GetStringDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadString(UserType* output) {
    DCHECK(is_string());
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        data_->data.f_string.Get(), output, context_);
  }
  bool is_string_array() const { return data_->tag == Tag::STRING_ARRAY; }
  inline void GetStringArrayDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringArray(UserType* output) {
    DCHECK(is_string_array());
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        data_->data.f_string_array.Get(), output, context_);
  }

 private:
  internal::IDBKeyPathData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::IDBCursorDirection>
    : public mojo::internal::EnumHashImpl<::blink::mojom::IDBCursorDirection> {};

template <>
struct hash<::blink::mojom::IDBDataLoss>
    : public mojo::internal::EnumHashImpl<::blink::mojom::IDBDataLoss> {};

template <>
struct hash<::blink::mojom::IDBKeyType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::IDBKeyType> {};

template <>
struct hash<::blink::mojom::IDBKeyPathType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::IDBKeyPathType> {};

template <>
struct hash<::blink::mojom::IDBOperationType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::IDBOperationType> {};

template <>
struct hash<::blink::mojom::IDBPutMode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::IDBPutMode> {};

template <>
struct hash<::blink::mojom::IDBTaskType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::IDBTaskType> {};

template <>
struct hash<::blink::mojom::IDBTransactionMode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::IDBTransactionMode> {};

template <>
struct hash<::blink::mojom::IDBStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::IDBStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::IDBCursorDirection, ::blink::mojom::IDBCursorDirection> {
  static ::blink::mojom::IDBCursorDirection ToMojom(::blink::mojom::IDBCursorDirection input) { return input; }
  static bool FromMojom(::blink::mojom::IDBCursorDirection input, ::blink::mojom::IDBCursorDirection* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBCursorDirection, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::IDBCursorDirection, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::IDBCursorDirection>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::IDBDataLoss, ::blink::mojom::IDBDataLoss> {
  static ::blink::mojom::IDBDataLoss ToMojom(::blink::mojom::IDBDataLoss input) { return input; }
  static bool FromMojom(::blink::mojom::IDBDataLoss input, ::blink::mojom::IDBDataLoss* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBDataLoss, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::IDBDataLoss, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::IDBDataLoss>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::IDBKeyType, ::blink::mojom::IDBKeyType> {
  static ::blink::mojom::IDBKeyType ToMojom(::blink::mojom::IDBKeyType input) { return input; }
  static bool FromMojom(::blink::mojom::IDBKeyType input, ::blink::mojom::IDBKeyType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBKeyType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::IDBKeyType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::IDBKeyType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::IDBKeyPathType, ::blink::mojom::IDBKeyPathType> {
  static ::blink::mojom::IDBKeyPathType ToMojom(::blink::mojom::IDBKeyPathType input) { return input; }
  static bool FromMojom(::blink::mojom::IDBKeyPathType input, ::blink::mojom::IDBKeyPathType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBKeyPathType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::IDBKeyPathType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::IDBKeyPathType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::IDBOperationType, ::blink::mojom::IDBOperationType> {
  static ::blink::mojom::IDBOperationType ToMojom(::blink::mojom::IDBOperationType input) { return input; }
  static bool FromMojom(::blink::mojom::IDBOperationType input, ::blink::mojom::IDBOperationType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBOperationType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::IDBOperationType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::IDBOperationType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::IDBPutMode, ::blink::mojom::IDBPutMode> {
  static ::blink::mojom::IDBPutMode ToMojom(::blink::mojom::IDBPutMode input) { return input; }
  static bool FromMojom(::blink::mojom::IDBPutMode input, ::blink::mojom::IDBPutMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBPutMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::IDBPutMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::IDBPutMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::IDBTaskType, ::blink::mojom::IDBTaskType> {
  static ::blink::mojom::IDBTaskType ToMojom(::blink::mojom::IDBTaskType input) { return input; }
  static bool FromMojom(::blink::mojom::IDBTaskType input, ::blink::mojom::IDBTaskType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBTaskType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::IDBTaskType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::IDBTaskType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::IDBTransactionMode, ::blink::mojom::IDBTransactionMode> {
  static ::blink::mojom::IDBTransactionMode ToMojom(::blink::mojom::IDBTransactionMode input) { return input; }
  static bool FromMojom(::blink::mojom::IDBTransactionMode input, ::blink::mojom::IDBTransactionMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBTransactionMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::IDBTransactionMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::IDBTransactionMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::IDBStatus, ::blink::mojom::IDBStatus> {
  static ::blink::mojom::IDBStatus ToMojom(::blink::mojom::IDBStatus input) { return input; }
  static bool FromMojom(::blink::mojom::IDBStatus input, ::blink::mojom::IDBStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::IDBStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::IDBStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBKeyDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBKeyDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBKey_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::data(input)) in_data = Traits::data(input);
    typename decltype((*output)->data)::BufferWriter data_writer;
    data_writer.AllocateInline(buffer, &(*output)->data);
    mojo::internal::Serialize<::blink::mojom::IDBKeyDataDataView>(
        in_data, buffer, &data_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in IDBKey struct");
  }

  static bool Deserialize(::blink::mojom::internal::IDBKey_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBKeyDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBKeyPathDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBKeyPathDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBKeyPath_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::data(input)) in_data = Traits::data(input);
    typename decltype((*output)->data)::BufferWriter data_writer;
    data_writer.AllocateInline(buffer, &(*output)->data);
    mojo::internal::Serialize<::blink::mojom::IDBKeyPathDataDataView>(
        in_data, buffer, &data_writer, true, context);
  }

  static bool Deserialize(::blink::mojom::internal::IDBKeyPath_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBKeyPathDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBKeyRangeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBKeyRangeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBKeyRange_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::lower(input)) in_lower = Traits::lower(input);
    typename decltype((*output)->lower)::BaseType::BufferWriter
        lower_writer;
    mojo::internal::Serialize<::blink::mojom::IDBKeyDataView>(
        in_lower, buffer, &lower_writer, context);
    (*output)->lower.Set(
        lower_writer.is_null() ? nullptr : lower_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->lower.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null lower in IDBKeyRange struct");
    decltype(Traits::upper(input)) in_upper = Traits::upper(input);
    typename decltype((*output)->upper)::BaseType::BufferWriter
        upper_writer;
    mojo::internal::Serialize<::blink::mojom::IDBKeyDataView>(
        in_upper, buffer, &upper_writer, context);
    (*output)->upper.Set(
        upper_writer.is_null() ? nullptr : upper_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->upper.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null upper in IDBKeyRange struct");
    (*output)->lower_open = Traits::lower_open(input);
    (*output)->upper_open = Traits::upper_open(input);
  }

  static bool Deserialize(::blink::mojom::internal::IDBKeyRange_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBKeyRangeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBIndexMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBIndexMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBIndexMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->id = Traits::id(input);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in IDBIndexMetadata struct");
    decltype(Traits::key_path(input)) in_key_path = Traits::key_path(input);
    typename decltype((*output)->key_path)::BaseType::BufferWriter
        key_path_writer;
    mojo::internal::Serialize<::blink::mojom::IDBKeyPathDataView>(
        in_key_path, buffer, &key_path_writer, context);
    (*output)->key_path.Set(
        key_path_writer.is_null() ? nullptr : key_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_path in IDBIndexMetadata struct");
    (*output)->unique = Traits::unique(input);
    (*output)->multi_entry = Traits::multi_entry(input);
  }

  static bool Deserialize(::blink::mojom::internal::IDBIndexMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBIndexMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBObjectStoreMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBObjectStoreMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBObjectStoreMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->id = Traits::id(input);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in IDBObjectStoreMetadata struct");
    decltype(Traits::key_path(input)) in_key_path = Traits::key_path(input);
    typename decltype((*output)->key_path)::BaseType::BufferWriter
        key_path_writer;
    mojo::internal::Serialize<::blink::mojom::IDBKeyPathDataView>(
        in_key_path, buffer, &key_path_writer, context);
    (*output)->key_path.Set(
        key_path_writer.is_null() ? nullptr : key_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_path in IDBObjectStoreMetadata struct");
    (*output)->auto_increment = Traits::auto_increment(input);
    (*output)->max_index_id = Traits::max_index_id(input);
    decltype(Traits::indexes(input)) in_indexes = Traits::indexes(input);
    typename decltype((*output)->indexes)::BaseType::BufferWriter
        indexes_writer;
    const mojo::internal::ContainerValidateParams indexes_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<int64_t, ::blink::mojom::IDBIndexMetadataDataView>>(
        in_indexes, buffer, &indexes_writer, &indexes_validate_params,
        context);
    (*output)->indexes.Set(
        indexes_writer.is_null() ? nullptr : indexes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->indexes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null indexes in IDBObjectStoreMetadata struct");
  }

  static bool Deserialize(::blink::mojom::internal::IDBObjectStoreMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBObjectStoreMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBDatabaseMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBDatabaseMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBDatabaseMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->id = Traits::id(input);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in IDBDatabaseMetadata struct");
    (*output)->version = Traits::version(input);
    (*output)->max_object_store_id = Traits::max_object_store_id(input);
    decltype(Traits::object_stores(input)) in_object_stores = Traits::object_stores(input);
    typename decltype((*output)->object_stores)::BaseType::BufferWriter
        object_stores_writer;
    const mojo::internal::ContainerValidateParams object_stores_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<int64_t, ::blink::mojom::IDBObjectStoreMetadataDataView>>(
        in_object_stores, buffer, &object_stores_writer, &object_stores_validate_params,
        context);
    (*output)->object_stores.Set(
        object_stores_writer.is_null() ? nullptr : object_stores_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->object_stores.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null object_stores in IDBDatabaseMetadata struct");
  }

  static bool Deserialize(::blink::mojom::internal::IDBDatabaseMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBDatabaseMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBNameAndVersionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBNameAndVersionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBNameAndVersion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in IDBNameAndVersion struct");
    (*output)->version = Traits::version(input);
  }

  static bool Deserialize(::blink::mojom::internal::IDBNameAndVersion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBNameAndVersionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBIndexKeysDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBIndexKeysDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBIndexKeys_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->index_id = Traits::index_id(input);
    decltype(Traits::index_keys(input)) in_index_keys = Traits::index_keys(input);
    typename decltype((*output)->index_keys)::BaseType::BufferWriter
        index_keys_writer;
    const mojo::internal::ContainerValidateParams index_keys_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::IDBKeyDataView>>(
        in_index_keys, buffer, &index_keys_writer, &index_keys_validate_params,
        context);
    (*output)->index_keys.Set(
        index_keys_writer.is_null() ? nullptr : index_keys_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->index_keys.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null index_keys in IDBIndexKeys struct");
  }

  static bool Deserialize(::blink::mojom::internal::IDBIndexKeys_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBIndexKeysDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBFileInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBFileInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBFileInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::path(input)) in_path = Traits::path(input);
    typename decltype((*output)->path)::BaseType::BufferWriter
        path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_path, buffer, &path_writer, context);
    (*output)->path.Set(
        path_writer.is_null() ? nullptr : path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in IDBFileInfo struct");
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in IDBFileInfo struct");
    decltype(Traits::last_modified(input)) in_last_modified = Traits::last_modified(input);
    typename decltype((*output)->last_modified)::BaseType::BufferWriter
        last_modified_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_last_modified, buffer, &last_modified_writer, context);
    (*output)->last_modified.Set(
        last_modified_writer.is_null() ? nullptr : last_modified_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->last_modified.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null last_modified in IDBFileInfo struct");
  }

  static bool Deserialize(::blink::mojom::internal::IDBFileInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBFileInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBBlobInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBBlobInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBBlobInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::blob(input)) in_blob = Traits::blob(input);
    mojo::internal::Serialize<::blink::mojom::BlobPtrDataView>(
        in_blob, &(*output)->blob, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->blob),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid blob in IDBBlobInfo struct");
    decltype(Traits::uuid(input)) in_uuid = Traits::uuid(input);
    typename decltype((*output)->uuid)::BaseType::BufferWriter
        uuid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_uuid, buffer, &uuid_writer, context);
    (*output)->uuid.Set(
        uuid_writer.is_null() ? nullptr : uuid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uuid in IDBBlobInfo struct");
    decltype(Traits::mime_type(input)) in_mime_type = Traits::mime_type(input);
    typename decltype((*output)->mime_type)::BaseType::BufferWriter
        mime_type_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_mime_type, buffer, &mime_type_writer, context);
    (*output)->mime_type.Set(
        mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mime_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mime_type in IDBBlobInfo struct");
    (*output)->size = Traits::size(input);
    decltype(Traits::file(input)) in_file = Traits::file(input);
    typename decltype((*output)->file)::BaseType::BufferWriter
        file_writer;
    mojo::internal::Serialize<::blink::mojom::IDBFileInfoDataView>(
        in_file, buffer, &file_writer, context);
    (*output)->file.Set(
        file_writer.is_null() ? nullptr : file_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::IDBBlobInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBBlobInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBValue_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::bits(input)) in_bits = Traits::bits(input);
    typename decltype((*output)->bits)::BaseType::BufferWriter
        bits_writer;
    const mojo::internal::ContainerValidateParams bits_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_bits, buffer, &bits_writer, &bits_validate_params,
        context);
    (*output)->bits.Set(
        bits_writer.is_null() ? nullptr : bits_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->bits.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null bits in IDBValue struct");
    decltype(Traits::blob_or_file_info(input)) in_blob_or_file_info = Traits::blob_or_file_info(input);
    typename decltype((*output)->blob_or_file_info)::BaseType::BufferWriter
        blob_or_file_info_writer;
    const mojo::internal::ContainerValidateParams blob_or_file_info_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::IDBBlobInfoDataView>>(
        in_blob_or_file_info, buffer, &blob_or_file_info_writer, &blob_or_file_info_validate_params,
        context);
    (*output)->blob_or_file_info.Set(
        blob_or_file_info_writer.is_null() ? nullptr : blob_or_file_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->blob_or_file_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null blob_or_file_info in IDBValue struct");
  }

  static bool Deserialize(::blink::mojom::internal::IDBValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBReturnValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBReturnValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBReturnValue_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::value(input)) in_value = Traits::value(input);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<::blink::mojom::IDBValueDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in IDBReturnValue struct");
    decltype(Traits::primary_key(input)) in_primary_key = Traits::primary_key(input);
    typename decltype((*output)->primary_key)::BaseType::BufferWriter
        primary_key_writer;
    mojo::internal::Serialize<::blink::mojom::IDBKeyDataView>(
        in_primary_key, buffer, &primary_key_writer, context);
    (*output)->primary_key.Set(
        primary_key_writer.is_null() ? nullptr : primary_key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->primary_key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null primary_key in IDBReturnValue struct");
    decltype(Traits::key_path(input)) in_key_path = Traits::key_path(input);
    typename decltype((*output)->key_path)::BaseType::BufferWriter
        key_path_writer;
    mojo::internal::Serialize<::blink::mojom::IDBKeyPathDataView>(
        in_key_path, buffer, &key_path_writer, context);
    (*output)->key_path.Set(
        key_path_writer.is_null() ? nullptr : key_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_path in IDBReturnValue struct");
  }

  static bool Deserialize(::blink::mojom::internal::IDBReturnValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBReturnValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBObservationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBObservationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBObservation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->object_store_id = Traits::object_store_id(input);
    mojo::internal::Serialize<::blink::mojom::IDBOperationType>(
        Traits::type(input), &(*output)->type);
    decltype(Traits::key_range(input)) in_key_range = Traits::key_range(input);
    typename decltype((*output)->key_range)::BaseType::BufferWriter
        key_range_writer;
    mojo::internal::Serialize<::blink::mojom::IDBKeyRangeDataView>(
        in_key_range, buffer, &key_range_writer, context);
    (*output)->key_range.Set(
        key_range_writer.is_null() ? nullptr : key_range_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_range.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_range in IDBObservation struct");
    decltype(Traits::value(input)) in_value = Traits::value(input);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<::blink::mojom::IDBValueDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::IDBObservation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBObservationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBObserverTransactionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBObserverTransactionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBObserverTransaction_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->id = Traits::id(input);
    decltype(Traits::scope(input)) in_scope = Traits::scope(input);
    typename decltype((*output)->scope)::BaseType::BufferWriter
        scope_writer;
    const mojo::internal::ContainerValidateParams scope_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int64_t>>(
        in_scope, buffer, &scope_writer, &scope_validate_params,
        context);
    (*output)->scope.Set(
        scope_writer.is_null() ? nullptr : scope_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scope.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scope in IDBObserverTransaction struct");
  }

  static bool Deserialize(::blink::mojom::internal::IDBObserverTransaction_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBObserverTransactionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBObserverChangesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBObserverChangesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBObserverChanges_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::observation_index_map(input)) in_observation_index_map = Traits::observation_index_map(input);
    typename decltype((*output)->observation_index_map)::BaseType::BufferWriter
        observation_index_map_writer;
    const mojo::internal::ContainerValidateParams observation_index_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>>(
        in_observation_index_map, buffer, &observation_index_map_writer, &observation_index_map_validate_params,
        context);
    (*output)->observation_index_map.Set(
        observation_index_map_writer.is_null() ? nullptr : observation_index_map_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->observation_index_map.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null observation_index_map in IDBObserverChanges struct");
    decltype(Traits::transaction_map(input)) in_transaction_map = Traits::transaction_map(input);
    typename decltype((*output)->transaction_map)::BaseType::BufferWriter
        transaction_map_writer;
    const mojo::internal::ContainerValidateParams transaction_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<int32_t, ::blink::mojom::IDBObserverTransactionDataView>>(
        in_transaction_map, buffer, &transaction_map_writer, &transaction_map_validate_params,
        context);
    (*output)->transaction_map.Set(
        transaction_map_writer.is_null() ? nullptr : transaction_map_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->transaction_map.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null transaction_map in IDBObserverChanges struct");
    decltype(Traits::observations(input)) in_observations = Traits::observations(input);
    typename decltype((*output)->observations)::BaseType::BufferWriter
        observations_writer;
    const mojo::internal::ContainerValidateParams observations_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::IDBObservationDataView>>(
        in_observations, buffer, &observations_writer, &observations_validate_params,
        context);
    (*output)->observations.Set(
        observations_writer.is_null() ? nullptr : observations_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->observations.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null observations in IDBObserverChanges struct");
  }

  static bool Deserialize(::blink::mojom::internal::IDBObserverChanges_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBObserverChangesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBErrorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBErrorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBError_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->error_code = Traits::error_code(input);
    decltype(Traits::error_message(input)) in_error_message = Traits::error_message(input);
    typename decltype((*output)->error_message)::BaseType::BufferWriter
        error_message_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_error_message, buffer, &error_message_writer, context);
    (*output)->error_message.Set(
        error_message_writer.is_null() ? nullptr : error_message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->error_message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null error_message in IDBError struct");
  }

  static bool Deserialize(::blink::mojom::internal::IDBError_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBErrorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBCursorValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IDBCursorValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBCursorValue_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::keys(input)) in_keys = Traits::keys(input);
    typename decltype((*output)->keys)::BaseType::BufferWriter
        keys_writer;
    const mojo::internal::ContainerValidateParams keys_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::IDBKeyDataView>>(
        in_keys, buffer, &keys_writer, &keys_validate_params,
        context);
    (*output)->keys.Set(
        keys_writer.is_null() ? nullptr : keys_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->keys.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null keys in IDBCursorValue struct");
    decltype(Traits::primary_keys(input)) in_primary_keys = Traits::primary_keys(input);
    typename decltype((*output)->primary_keys)::BaseType::BufferWriter
        primary_keys_writer;
    const mojo::internal::ContainerValidateParams primary_keys_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::IDBKeyDataView>>(
        in_primary_keys, buffer, &primary_keys_writer, &primary_keys_validate_params,
        context);
    (*output)->primary_keys.Set(
        primary_keys_writer.is_null() ? nullptr : primary_keys_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->primary_keys.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null primary_keys in IDBCursorValue struct");
    decltype(Traits::values(input)) in_values = Traits::values(input);
    typename decltype((*output)->values)::BaseType::BufferWriter
        values_writer;
    const mojo::internal::ContainerValidateParams values_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::IDBValueDataView>>(
        in_values, buffer, &values_writer, &values_validate_params,
        context);
    (*output)->values.Set(
        values_writer.is_null() ? nullptr : values_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->values.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null values in IDBCursorValue struct");
  }

  static bool Deserialize(::blink::mojom::internal::IDBCursorValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBCursorValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBKeyDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::IDBKeyDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBKeyData_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::IDBKeyData_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::IDBKeyDataDataView::Tag::KEY_ARRAY: {
        decltype(Traits::key_array(input))
            in_key_array = Traits::key_array(input);
        typename decltype(result->data.f_key_array)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams key_array_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::IDBKeyDataView>>(
            in_key_array, buffer, &value_writer, &key_array_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null key_array in IDBKeyData union");
        result->data.f_key_array.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::IDBKeyDataDataView::Tag::BINARY: {
        decltype(Traits::binary(input))
            in_binary = Traits::binary(input);
        typename decltype(result->data.f_binary)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams binary_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
            in_binary, buffer, &value_writer, &binary_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null binary in IDBKeyData union");
        result->data.f_binary.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::IDBKeyDataDataView::Tag::STRING: {
        decltype(Traits::string(input))
            in_string = Traits::string(input);
        typename decltype(result->data.f_string)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
            in_string, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null string in IDBKeyData union");
        result->data.f_string.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::IDBKeyDataDataView::Tag::DATE: {
        decltype(Traits::date(input))
            in_date = Traits::date(input);
        result->data.f_date = in_date;
        break;
      }
      case ::blink::mojom::IDBKeyDataDataView::Tag::NUMBER: {
        decltype(Traits::number(input))
            in_number = Traits::number(input);
        result->data.f_number = in_number;
        break;
      }
      case ::blink::mojom::IDBKeyDataDataView::Tag::OTHER_INVALID: {
        decltype(Traits::other_invalid(input))
            in_other_invalid = Traits::other_invalid(input);
        result->data.f_other_invalid = in_other_invalid;
        break;
      }
      case ::blink::mojom::IDBKeyDataDataView::Tag::OTHER_NULL: {
        decltype(Traits::other_null(input))
            in_other_null = Traits::other_null(input);
        result->data.f_other_null = in_other_null;
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::IDBKeyData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBKeyDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IDBKeyPathDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::IDBKeyPathDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IDBKeyPathData_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::IDBKeyPathData_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::IDBKeyPathDataDataView::Tag::STRING: {
        decltype(Traits::string(input))
            in_string = Traits::string(input);
        typename decltype(result->data.f_string)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
            in_string, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null string in IDBKeyPathData union");
        result->data.f_string.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::IDBKeyPathDataDataView::Tag::STRING_ARRAY: {
        decltype(Traits::string_array(input))
            in_string_array = Traits::string_array(input);
        typename decltype(result->data.f_string_array)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams string_array_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
            in_string_array, buffer, &value_writer, &string_array_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null string_array in IDBKeyPathData union");
        result->data.f_string_array.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::IDBKeyPathData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IDBKeyPathDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void IDBKeyDataView::GetDataDataView(
    IDBKeyDataDataView* output) {
  auto pointer = &data_->data;
  *output = IDBKeyDataDataView(pointer, context_);
}


inline void IDBKeyPathDataView::GetDataDataView(
    IDBKeyPathDataDataView* output) {
  auto pointer = &data_->data;
  *output = IDBKeyPathDataDataView(pointer, context_);
}


inline void IDBKeyRangeDataView::GetLowerDataView(
    IDBKeyDataView* output) {
  auto pointer = data_->lower.Get();
  *output = IDBKeyDataView(pointer, context_);
}
inline void IDBKeyRangeDataView::GetUpperDataView(
    IDBKeyDataView* output) {
  auto pointer = data_->upper.Get();
  *output = IDBKeyDataView(pointer, context_);
}


inline void IDBIndexMetadataDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void IDBIndexMetadataDataView::GetKeyPathDataView(
    IDBKeyPathDataView* output) {
  auto pointer = data_->key_path.Get();
  *output = IDBKeyPathDataView(pointer, context_);
}


inline void IDBObjectStoreMetadataDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void IDBObjectStoreMetadataDataView::GetKeyPathDataView(
    IDBKeyPathDataView* output) {
  auto pointer = data_->key_path.Get();
  *output = IDBKeyPathDataView(pointer, context_);
}
inline void IDBObjectStoreMetadataDataView::GetIndexesDataView(
    mojo::MapDataView<int64_t, IDBIndexMetadataDataView>* output) {
  auto pointer = data_->indexes.Get();
  *output = mojo::MapDataView<int64_t, IDBIndexMetadataDataView>(pointer, context_);
}


inline void IDBDatabaseMetadataDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void IDBDatabaseMetadataDataView::GetObjectStoresDataView(
    mojo::MapDataView<int64_t, IDBObjectStoreMetadataDataView>* output) {
  auto pointer = data_->object_stores.Get();
  *output = mojo::MapDataView<int64_t, IDBObjectStoreMetadataDataView>(pointer, context_);
}


inline void IDBNameAndVersionDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void IDBIndexKeysDataView::GetIndexKeysDataView(
    mojo::ArrayDataView<IDBKeyDataView>* output) {
  auto pointer = data_->index_keys.Get();
  *output = mojo::ArrayDataView<IDBKeyDataView>(pointer, context_);
}


inline void IDBFileInfoDataView::GetPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void IDBFileInfoDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void IDBFileInfoDataView::GetLastModifiedDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->last_modified.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void IDBBlobInfoDataView::GetUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IDBBlobInfoDataView::GetMimeTypeDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void IDBBlobInfoDataView::GetFileDataView(
    IDBFileInfoDataView* output) {
  auto pointer = data_->file.Get();
  *output = IDBFileInfoDataView(pointer, context_);
}


inline void IDBValueDataView::GetBitsDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->bits.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void IDBValueDataView::GetBlobOrFileInfoDataView(
    mojo::ArrayDataView<IDBBlobInfoDataView>* output) {
  auto pointer = data_->blob_or_file_info.Get();
  *output = mojo::ArrayDataView<IDBBlobInfoDataView>(pointer, context_);
}


inline void IDBReturnValueDataView::GetValueDataView(
    IDBValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = IDBValueDataView(pointer, context_);
}
inline void IDBReturnValueDataView::GetPrimaryKeyDataView(
    IDBKeyDataView* output) {
  auto pointer = data_->primary_key.Get();
  *output = IDBKeyDataView(pointer, context_);
}
inline void IDBReturnValueDataView::GetKeyPathDataView(
    IDBKeyPathDataView* output) {
  auto pointer = data_->key_path.Get();
  *output = IDBKeyPathDataView(pointer, context_);
}


inline void IDBObservationDataView::GetKeyRangeDataView(
    IDBKeyRangeDataView* output) {
  auto pointer = data_->key_range.Get();
  *output = IDBKeyRangeDataView(pointer, context_);
}
inline void IDBObservationDataView::GetValueDataView(
    IDBValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = IDBValueDataView(pointer, context_);
}


inline void IDBObserverTransactionDataView::GetScopeDataView(
    mojo::ArrayDataView<int64_t>* output) {
  auto pointer = data_->scope.Get();
  *output = mojo::ArrayDataView<int64_t>(pointer, context_);
}


inline void IDBObserverChangesDataView::GetObservationIndexMapDataView(
    mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>* output) {
  auto pointer = data_->observation_index_map.Get();
  *output = mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>(pointer, context_);
}
inline void IDBObserverChangesDataView::GetTransactionMapDataView(
    mojo::MapDataView<int32_t, IDBObserverTransactionDataView>* output) {
  auto pointer = data_->transaction_map.Get();
  *output = mojo::MapDataView<int32_t, IDBObserverTransactionDataView>(pointer, context_);
}
inline void IDBObserverChangesDataView::GetObservationsDataView(
    mojo::ArrayDataView<IDBObservationDataView>* output) {
  auto pointer = data_->observations.Get();
  *output = mojo::ArrayDataView<IDBObservationDataView>(pointer, context_);
}


inline void IDBErrorDataView::GetErrorMessageDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->error_message.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void IDBCursorValueDataView::GetKeysDataView(
    mojo::ArrayDataView<IDBKeyDataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<IDBKeyDataView>(pointer, context_);
}
inline void IDBCursorValueDataView::GetPrimaryKeysDataView(
    mojo::ArrayDataView<IDBKeyDataView>* output) {
  auto pointer = data_->primary_keys.Get();
  *output = mojo::ArrayDataView<IDBKeyDataView>(pointer, context_);
}
inline void IDBCursorValueDataView::GetValuesDataView(
    mojo::ArrayDataView<IDBValueDataView>* output) {
  auto pointer = data_->values.Get();
  *output = mojo::ArrayDataView<IDBValueDataView>(pointer, context_);
}


inline void IDBKeyDataDataView::GetKeyArrayDataView(
    mojo::ArrayDataView<IDBKeyDataView>* output) {
  DCHECK(is_key_array());
  *output = mojo::ArrayDataView<IDBKeyDataView>(data_->data.f_key_array.Get(), context_);
}
inline void IDBKeyDataDataView::GetBinaryDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  DCHECK(is_binary());
  *output = mojo::ArrayDataView<uint8_t>(data_->data.f_binary.Get(), context_);
}
inline void IDBKeyDataDataView::GetStringDataView(
    ::mojo_base::mojom::String16DataView* output) {
  DCHECK(is_string());
  *output = ::mojo_base::mojom::String16DataView(data_->data.f_string.Get(), context_);
}

inline void IDBKeyPathDataDataView::GetStringDataView(
    ::mojo_base::mojom::String16DataView* output) {
  DCHECK(is_string());
  *output = ::mojo_base::mojom::String16DataView(data_->data.f_string.Get(), context_);
}
inline void IDBKeyPathDataDataView::GetStringArrayDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  DCHECK(is_string_array());
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(data_->data.f_string_array.Get(), context_);
}


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_SHARED_H_