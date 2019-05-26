// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/mojom/indexeddb/indexeddb.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/indexeddb/indexeddb.mojom-params-data.h"
#include "third_party/blink/public/mojom/indexeddb/indexeddb.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/indexeddb/indexeddb.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/bindings/array_traits_wtf_vector.h"
#include "third_party/blink/renderer/modules/indexeddb/indexed_db_blink_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
IDBKey::IDBKey()
    : data() {}

IDBKey::IDBKey(
    IDBKeyDataPtr data_in)
    : data(std::move(data_in)) {}

IDBKey::~IDBKey() = default;

bool IDBKey::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBKeyPath::IDBKeyPath()
    : data() {}

IDBKeyPath::IDBKeyPath(
    IDBKeyPathDataPtr data_in)
    : data(std::move(data_in)) {}

IDBKeyPath::~IDBKeyPath() = default;

bool IDBKeyPath::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBKeyRange::IDBKeyRange()
    : lower(),
      upper(),
      lower_open(),
      upper_open() {}

IDBKeyRange::IDBKeyRange(
    std::unique_ptr<::blink::IDBKey> lower_in,
    std::unique_ptr<::blink::IDBKey> upper_in,
    bool lower_open_in,
    bool upper_open_in)
    : lower(std::move(lower_in)),
      upper(std::move(upper_in)),
      lower_open(std::move(lower_open_in)),
      upper_open(std::move(upper_open_in)) {}

IDBKeyRange::~IDBKeyRange() = default;

bool IDBKeyRange::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBIndexMetadata::IDBIndexMetadata()
    : id(),
      name(),
      key_path(),
      unique(),
      multi_entry() {}

IDBIndexMetadata::IDBIndexMetadata(
    int64_t id_in,
    const WTF::String& name_in,
    const ::blink::IDBKeyPath& key_path_in,
    bool unique_in,
    bool multi_entry_in)
    : id(std::move(id_in)),
      name(std::move(name_in)),
      key_path(std::move(key_path_in)),
      unique(std::move(unique_in)),
      multi_entry(std::move(multi_entry_in)) {}

IDBIndexMetadata::~IDBIndexMetadata() = default;

bool IDBIndexMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBObjectStoreMetadata::IDBObjectStoreMetadata()
    : id(),
      name(),
      key_path(),
      auto_increment(),
      max_index_id(),
      indexes() {}

IDBObjectStoreMetadata::IDBObjectStoreMetadata(
    int64_t id_in,
    const WTF::String& name_in,
    const ::blink::IDBKeyPath& key_path_in,
    bool auto_increment_in,
    int64_t max_index_id_in,
    const WTF::HashMap<int64_t, scoped_refptr<::blink::IDBIndexMetadata>>& indexes_in)
    : id(std::move(id_in)),
      name(std::move(name_in)),
      key_path(std::move(key_path_in)),
      auto_increment(std::move(auto_increment_in)),
      max_index_id(std::move(max_index_id_in)),
      indexes(std::move(indexes_in)) {}

IDBObjectStoreMetadata::~IDBObjectStoreMetadata() = default;

bool IDBObjectStoreMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBDatabaseMetadata::IDBDatabaseMetadata()
    : id(),
      name(),
      version(),
      max_object_store_id(),
      object_stores() {}

IDBDatabaseMetadata::IDBDatabaseMetadata(
    int64_t id_in,
    const WTF::String& name_in,
    int64_t version_in,
    int64_t max_object_store_id_in,
    const WTF::HashMap<int64_t, scoped_refptr<::blink::IDBObjectStoreMetadata>>& object_stores_in)
    : id(std::move(id_in)),
      name(std::move(name_in)),
      version(std::move(version_in)),
      max_object_store_id(std::move(max_object_store_id_in)),
      object_stores(std::move(object_stores_in)) {}

IDBDatabaseMetadata::~IDBDatabaseMetadata() = default;

bool IDBDatabaseMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBNameAndVersion::IDBNameAndVersion()
    : name(),
      version() {}

IDBNameAndVersion::IDBNameAndVersion(
    const WTF::String& name_in,
    int64_t version_in)
    : name(std::move(name_in)),
      version(std::move(version_in)) {}

IDBNameAndVersion::~IDBNameAndVersion() = default;

bool IDBNameAndVersion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBIndexKeys::IDBIndexKeys()
    : index_id(),
      index_keys() {}

IDBIndexKeys::IDBIndexKeys(
    int64_t index_id_in,
    WTF::Vector<std::unique_ptr<::blink::IDBKey>> index_keys_in)
    : index_id(std::move(index_id_in)),
      index_keys(std::move(index_keys_in)) {}

IDBIndexKeys::~IDBIndexKeys() = default;

bool IDBIndexKeys::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBFileInfo::IDBFileInfo()
    : path(),
      name(),
      last_modified() {}

IDBFileInfo::IDBFileInfo(
    const base::FilePath& path_in,
    const WTF::String& name_in,
    base::Time last_modified_in)
    : path(std::move(path_in)),
      name(std::move(name_in)),
      last_modified(std::move(last_modified_in)) {}

IDBFileInfo::~IDBFileInfo() = default;

bool IDBFileInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBBlobInfo::IDBBlobInfo()
    : blob(),
      uuid(),
      mime_type(),
      size(),
      file() {}

IDBBlobInfo::IDBBlobInfo(
    ::blink::mojom::blink::BlobPtrInfo blob_in,
    const WTF::String& uuid_in,
    const WTF::String& mime_type_in,
    int64_t size_in,
    IDBFileInfoPtr file_in)
    : blob(std::move(blob_in)),
      uuid(std::move(uuid_in)),
      mime_type(std::move(mime_type_in)),
      size(std::move(size_in)),
      file(std::move(file_in)) {}

IDBBlobInfo::~IDBBlobInfo() = default;

bool IDBBlobInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBValue::IDBValue()
    : bits(),
      blob_or_file_info() {}

IDBValue::IDBValue(
    const WTF::Vector<uint8_t>& bits_in,
    WTF::Vector<IDBBlobInfoPtr> blob_or_file_info_in)
    : bits(std::move(bits_in)),
      blob_or_file_info(std::move(blob_or_file_info_in)) {}

IDBValue::~IDBValue() = default;

bool IDBValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBReturnValue::IDBReturnValue()
    : value(),
      primary_key(),
      key_path() {}

IDBReturnValue::IDBReturnValue(
    std::unique_ptr<::blink::IDBValue> value_in,
    std::unique_ptr<::blink::IDBKey> primary_key_in,
    const ::blink::IDBKeyPath& key_path_in)
    : value(std::move(value_in)),
      primary_key(std::move(primary_key_in)),
      key_path(std::move(key_path_in)) {}

IDBReturnValue::~IDBReturnValue() = default;

bool IDBReturnValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBObservation::IDBObservation()
    : object_store_id(),
      type(),
      key_range(),
      value() {}

IDBObservation::IDBObservation(
    int64_t object_store_id_in,
    IDBOperationType type_in,
    IDBKeyRangePtr key_range_in,
    base::Optional<std::unique_ptr<::blink::IDBValue>> value_in)
    : object_store_id(std::move(object_store_id_in)),
      type(std::move(type_in)),
      key_range(std::move(key_range_in)),
      value(std::move(value_in)) {}

IDBObservation::~IDBObservation() = default;

bool IDBObservation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBObserverTransaction::IDBObserverTransaction()
    : id(),
      scope() {}

IDBObserverTransaction::IDBObserverTransaction(
    int64_t id_in,
    const WTF::Vector<int64_t>& scope_in)
    : id(std::move(id_in)),
      scope(std::move(scope_in)) {}

IDBObserverTransaction::~IDBObserverTransaction() = default;

bool IDBObserverTransaction::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBObserverChanges::IDBObserverChanges()
    : observation_index_map(),
      transaction_map(),
      observations() {}

IDBObserverChanges::IDBObserverChanges(
    const WTF::HashMap<int32_t, WTF::Vector<int32_t>>& observation_index_map_in,
    WTF::HashMap<int32_t, IDBObserverTransactionPtr> transaction_map_in,
    WTF::Vector<IDBObservationPtr> observations_in)
    : observation_index_map(std::move(observation_index_map_in)),
      transaction_map(std::move(transaction_map_in)),
      observations(std::move(observations_in)) {}

IDBObserverChanges::~IDBObserverChanges() = default;

bool IDBObserverChanges::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBError::IDBError()
    : error_code(),
      error_message() {}

IDBError::IDBError(
    int32_t error_code_in,
    const WTF::String& error_message_in)
    : error_code(std::move(error_code_in)),
      error_message(std::move(error_message_in)) {}

IDBError::~IDBError() = default;

bool IDBError::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBCursorValue::IDBCursorValue()
    : keys(),
      primary_keys(),
      values() {}

IDBCursorValue::IDBCursorValue(
    WTF::Vector<std::unique_ptr<::blink::IDBKey>> keys_in,
    WTF::Vector<std::unique_ptr<::blink::IDBKey>> primary_keys_in,
    WTF::Vector<std::unique_ptr<::blink::IDBValue>> values_in)
    : keys(std::move(keys_in)),
      primary_keys(std::move(primary_keys_in)),
      values(std::move(values_in)) {}

IDBCursorValue::~IDBCursorValue() = default;

bool IDBCursorValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IDBKeyData::IDBKeyData() : tag_(Tag::KEY_ARRAY) {
  data_.key_array = new WTF::Vector<std::unique_ptr<::blink::IDBKey>>;
}

IDBKeyData::~IDBKeyData() {
  DestroyActive();
}


void IDBKeyData::set_key_array(
    WTF::Vector<std::unique_ptr<::blink::IDBKey>> key_array) {
  if (tag_ == Tag::KEY_ARRAY) {
    *(data_.key_array) = std::move(key_array);
  } else {
    DestroyActive();
    tag_ = Tag::KEY_ARRAY;
    data_.key_array = new WTF::Vector<std::unique_ptr<::blink::IDBKey>>(
        std::move(key_array));
  }
}
void IDBKeyData::set_binary(
    const WTF::Vector<uint8_t>& binary) {
  if (tag_ == Tag::BINARY) {
    *(data_.binary) = std::move(binary);
  } else {
    DestroyActive();
    tag_ = Tag::BINARY;
    data_.binary = new WTF::Vector<uint8_t>(
        std::move(binary));
  }
}
void IDBKeyData::set_string(
    const WTF::String& string) {
  if (tag_ == Tag::STRING) {
    *(data_.string) = std::move(string);
  } else {
    DestroyActive();
    tag_ = Tag::STRING;
    data_.string = new WTF::String(
        std::move(string));
  }
}
void IDBKeyData::set_date(
    double date) {
  if (tag_ != Tag::DATE) {
    DestroyActive();
    tag_ = Tag::DATE;
  }
  data_.date = date;
}
void IDBKeyData::set_number(
    double number) {
  if (tag_ != Tag::NUMBER) {
    DestroyActive();
    tag_ = Tag::NUMBER;
  }
  data_.number = number;
}
void IDBKeyData::set_other_invalid(
    bool other_invalid) {
  if (tag_ != Tag::OTHER_INVALID) {
    DestroyActive();
    tag_ = Tag::OTHER_INVALID;
  }
  data_.other_invalid = other_invalid;
}
void IDBKeyData::set_other_null(
    bool other_null) {
  if (tag_ != Tag::OTHER_NULL) {
    DestroyActive();
    tag_ = Tag::OTHER_NULL;
  }
  data_.other_null = other_null;
}

void IDBKeyData::DestroyActive() {
  switch (tag_) {

    case Tag::KEY_ARRAY:

      delete data_.key_array;
      break;
    case Tag::BINARY:

      delete data_.binary;
      break;
    case Tag::STRING:

      delete data_.string;
      break;
    case Tag::DATE:

      break;
    case Tag::NUMBER:

      break;
    case Tag::OTHER_INVALID:

      break;
    case Tag::OTHER_NULL:

      break;
  }
}

bool IDBKeyData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
IDBKeyPathData::IDBKeyPathData() : tag_(Tag::STRING) {
  data_.string = new WTF::String;
}

IDBKeyPathData::~IDBKeyPathData() {
  DestroyActive();
}


void IDBKeyPathData::set_string(
    const WTF::String& string) {
  if (tag_ == Tag::STRING) {
    *(data_.string) = std::move(string);
  } else {
    DestroyActive();
    tag_ = Tag::STRING;
    data_.string = new WTF::String(
        std::move(string));
  }
}
void IDBKeyPathData::set_string_array(
    const WTF::Vector<WTF::String>& string_array) {
  if (tag_ == Tag::STRING_ARRAY) {
    *(data_.string_array) = std::move(string_array);
  } else {
    DestroyActive();
    tag_ = Tag::STRING_ARRAY;
    data_.string_array = new WTF::Vector<WTF::String>(
        std::move(string_array));
  }
}

void IDBKeyPathData::DestroyActive() {
  switch (tag_) {

    case Tag::STRING:

      delete data_.string;
      break;
    case Tag::STRING_ARRAY:

      delete data_.string_array;
      break;
  }
}

bool IDBKeyPathData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char IDBCallbacks::Name_[] = "blink.mojom.IDBCallbacks";

IDBCallbacksProxy::IDBCallbacksProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IDBCallbacksProxy::Error(
    int32_t in_code, const WTF::String& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCallbacks::Error");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCallbacks_Error_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCallbacks_Error_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->code = in_code;
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in IDBCallbacks.Error request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCallbacks::Name_);
  message.set_method_name("Error");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBCallbacksProxy::SuccessNamesAndVersionsList(
    WTF::Vector<IDBNameAndVersionPtr> in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessNamesAndVersionsList");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCallbacks_SuccessNamesAndVersionsList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCallbacks_SuccessNamesAndVersionsList_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::IDBNameAndVersionDataView>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in IDBCallbacks.SuccessNamesAndVersionsList request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCallbacks::Name_);
  message.set_method_name("SuccessNamesAndVersionsList");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBCallbacksProxy::SuccessStringList(
    const WTF::Vector<WTF::String>& in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessStringList");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCallbacks_SuccessStringList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCallbacks_SuccessStringList_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in IDBCallbacks.SuccessStringList request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCallbacks::Name_);
  message.set_method_name("SuccessStringList");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBCallbacksProxy::Blocked(
    int64_t in_existing_version) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCallbacks::Blocked");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCallbacks_Blocked_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCallbacks_Blocked_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->existing_version = in_existing_version;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCallbacks::Name_);
  message.set_method_name("Blocked");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBCallbacksProxy::UpgradeNeeded(
    IDBDatabaseAssociatedPtrInfo in_database, int64_t in_old_version, IDBDataLoss in_data_loss, const WTF::String& in_data_loss_message, const ::blink::IDBDatabaseMetadata& in_db_metadata) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCallbacks::UpgradeNeeded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCallbacks_UpgradeNeeded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCallbacks_UpgradeNeeded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::IDBDatabaseAssociatedPtrInfoDataView>(
      in_database, &params->database, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->database),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid database in IDBCallbacks.UpgradeNeeded request");
  params->old_version = in_old_version;
  mojo::internal::Serialize<::blink::mojom::IDBDataLoss>(
      in_data_loss, &params->data_loss);
  typename decltype(params->data_loss_message)::BaseType::BufferWriter
      data_loss_message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_data_loss_message, buffer, &data_loss_message_writer, &serialization_context);
  params->data_loss_message.Set(
      data_loss_message_writer.is_null() ? nullptr : data_loss_message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data_loss_message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data_loss_message in IDBCallbacks.UpgradeNeeded request");
  typename decltype(params->db_metadata)::BaseType::BufferWriter
      db_metadata_writer;
  mojo::internal::Serialize<::blink::mojom::IDBDatabaseMetadataDataView>(
      in_db_metadata, buffer, &db_metadata_writer, &serialization_context);
  params->db_metadata.Set(
      db_metadata_writer.is_null() ? nullptr : db_metadata_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->db_metadata.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null db_metadata in IDBCallbacks.UpgradeNeeded request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCallbacks::Name_);
  message.set_method_name("UpgradeNeeded");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBCallbacksProxy::SuccessDatabase(
    IDBDatabaseAssociatedPtrInfo in_database, const ::blink::IDBDatabaseMetadata& in_metadata) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessDatabase");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCallbacks_SuccessDatabase_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCallbacks_SuccessDatabase_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::IDBDatabaseAssociatedPtrInfoDataView>(
      in_database, &params->database, &serialization_context);
  typename decltype(params->metadata)::BaseType::BufferWriter
      metadata_writer;
  mojo::internal::Serialize<::blink::mojom::IDBDatabaseMetadataDataView>(
      in_metadata, buffer, &metadata_writer, &serialization_context);
  params->metadata.Set(
      metadata_writer.is_null() ? nullptr : metadata_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metadata.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metadata in IDBCallbacks.SuccessDatabase request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCallbacks::Name_);
  message.set_method_name("SuccessDatabase");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBCallbacksProxy::SuccessCursor(
    IDBCursorAssociatedPtrInfo in_cursor, std::unique_ptr<::blink::IDBKey> in_key, std::unique_ptr<::blink::IDBKey> in_primary_key, base::Optional<std::unique_ptr<::blink::IDBValue>> in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessCursor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCallbacks_SuccessCursor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCallbacks_SuccessCursor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::IDBCursorAssociatedPtrInfoDataView>(
      in_cursor, &params->cursor, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->cursor),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid cursor in IDBCallbacks.SuccessCursor request");
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyDataView>(
      in_key, buffer, &key_writer, &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in IDBCallbacks.SuccessCursor request");
  typename decltype(params->primary_key)::BaseType::BufferWriter
      primary_key_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyDataView>(
      in_primary_key, buffer, &primary_key_writer, &serialization_context);
  params->primary_key.Set(
      primary_key_writer.is_null() ? nullptr : primary_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->primary_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null primary_key in IDBCallbacks.SuccessCursor request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::blink::mojom::IDBValueDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCallbacks::Name_);
  message.set_method_name("SuccessCursor");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBCallbacksProxy::SuccessValue(
    IDBReturnValuePtr in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessValue");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCallbacks_SuccessValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCallbacks_SuccessValue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::blink::mojom::IDBReturnValueDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCallbacks::Name_);
  message.set_method_name("SuccessValue");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBCallbacksProxy::SuccessArray(
    WTF::Vector<IDBReturnValuePtr> in_values) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessArray");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCallbacks_SuccessArray_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCallbacks_SuccessArray_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->values)::BaseType::BufferWriter
      values_writer;
  const mojo::internal::ContainerValidateParams values_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::IDBReturnValueDataView>>(
      in_values, buffer, &values_writer, &values_validate_params,
      &serialization_context);
  params->values.Set(
      values_writer.is_null() ? nullptr : values_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->values.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null values in IDBCallbacks.SuccessArray request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCallbacks::Name_);
  message.set_method_name("SuccessArray");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBCallbacksProxy::SuccessKey(
    std::unique_ptr<::blink::IDBKey> in_key) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessKey");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCallbacks_SuccessKey_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCallbacks_SuccessKey_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyDataView>(
      in_key, buffer, &key_writer, &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in IDBCallbacks.SuccessKey request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCallbacks::Name_);
  message.set_method_name("SuccessKey");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBCallbacksProxy::SuccessInteger(
    int64_t in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessInteger");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCallbacks_SuccessInteger_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCallbacks_SuccessInteger_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = in_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCallbacks::Name_);
  message.set_method_name("SuccessInteger");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBCallbacksProxy::Success(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCallbacks::Success");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCallbacks_Success_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCallbacks_Success_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCallbacks::Name_);
  message.set_method_name("Success");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool IDBCallbacksStubDispatch::Accept(
    IDBCallbacks* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIDBCallbacks_Error_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCallbacks::Error",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBCallbacks_Error_Params_Data* params =
          reinterpret_cast<internal::IDBCallbacks_Error_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_code{};
      WTF::String p_message{};
      IDBCallbacks_Error_ParamsDataView input_data_view(params, &serialization_context);
      
      p_code = input_data_view.code();
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCallbacks::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Error(
std::move(p_code), 
std::move(p_message));
      return true;
    }
    case internal::kIDBCallbacks_SuccessNamesAndVersionsList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessNamesAndVersionsList",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBCallbacks_SuccessNamesAndVersionsList_Params_Data* params =
          reinterpret_cast<internal::IDBCallbacks_SuccessNamesAndVersionsList_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<IDBNameAndVersionPtr> p_value{};
      IDBCallbacks_SuccessNamesAndVersionsList_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCallbacks::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SuccessNamesAndVersionsList(
std::move(p_value));
      return true;
    }
    case internal::kIDBCallbacks_SuccessStringList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessStringList",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBCallbacks_SuccessStringList_Params_Data* params =
          reinterpret_cast<internal::IDBCallbacks_SuccessStringList_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<WTF::String> p_value{};
      IDBCallbacks_SuccessStringList_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCallbacks::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SuccessStringList(
std::move(p_value));
      return true;
    }
    case internal::kIDBCallbacks_Blocked_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCallbacks::Blocked",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBCallbacks_Blocked_Params_Data* params =
          reinterpret_cast<internal::IDBCallbacks_Blocked_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_existing_version{};
      IDBCallbacks_Blocked_ParamsDataView input_data_view(params, &serialization_context);
      
      p_existing_version = input_data_view.existing_version();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCallbacks::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Blocked(
std::move(p_existing_version));
      return true;
    }
    case internal::kIDBCallbacks_UpgradeNeeded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCallbacks::UpgradeNeeded",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBCallbacks_UpgradeNeeded_Params_Data* params =
          reinterpret_cast<internal::IDBCallbacks_UpgradeNeeded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBDatabaseAssociatedPtrInfo p_database{};
      int64_t p_old_version{};
      IDBDataLoss p_data_loss{};
      WTF::String p_data_loss_message{};
      ::blink::IDBDatabaseMetadata p_db_metadata{};
      IDBCallbacks_UpgradeNeeded_ParamsDataView input_data_view(params, &serialization_context);
      
      p_database =
          input_data_view.TakeDatabase<decltype(p_database)>();
      p_old_version = input_data_view.old_version();
      if (!input_data_view.ReadDataLoss(&p_data_loss))
        success = false;
      if (!input_data_view.ReadDataLossMessage(&p_data_loss_message))
        success = false;
      if (!input_data_view.ReadDbMetadata(&p_db_metadata))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCallbacks::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpgradeNeeded(
std::move(p_database), 
std::move(p_old_version), 
std::move(p_data_loss), 
std::move(p_data_loss_message), 
std::move(p_db_metadata));
      return true;
    }
    case internal::kIDBCallbacks_SuccessDatabase_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessDatabase",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBCallbacks_SuccessDatabase_Params_Data* params =
          reinterpret_cast<internal::IDBCallbacks_SuccessDatabase_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBDatabaseAssociatedPtrInfo p_database{};
      ::blink::IDBDatabaseMetadata p_metadata{};
      IDBCallbacks_SuccessDatabase_ParamsDataView input_data_view(params, &serialization_context);
      
      p_database =
          input_data_view.TakeDatabase<decltype(p_database)>();
      if (!input_data_view.ReadMetadata(&p_metadata))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCallbacks::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SuccessDatabase(
std::move(p_database), 
std::move(p_metadata));
      return true;
    }
    case internal::kIDBCallbacks_SuccessCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessCursor",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBCallbacks_SuccessCursor_Params_Data* params =
          reinterpret_cast<internal::IDBCallbacks_SuccessCursor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBCursorAssociatedPtrInfo p_cursor{};
      std::unique_ptr<::blink::IDBKey> p_key{};
      std::unique_ptr<::blink::IDBKey> p_primary_key{};
      base::Optional<std::unique_ptr<::blink::IDBValue>> p_value{};
      IDBCallbacks_SuccessCursor_ParamsDataView input_data_view(params, &serialization_context);
      
      p_cursor =
          input_data_view.TakeCursor<decltype(p_cursor)>();
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadPrimaryKey(&p_primary_key))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCallbacks::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SuccessCursor(
std::move(p_cursor), 
std::move(p_key), 
std::move(p_primary_key), 
std::move(p_value));
      return true;
    }
    case internal::kIDBCallbacks_SuccessValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessValue",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBCallbacks_SuccessValue_Params_Data* params =
          reinterpret_cast<internal::IDBCallbacks_SuccessValue_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBReturnValuePtr p_value{};
      IDBCallbacks_SuccessValue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCallbacks::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SuccessValue(
std::move(p_value));
      return true;
    }
    case internal::kIDBCallbacks_SuccessArray_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessArray",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBCallbacks_SuccessArray_Params_Data* params =
          reinterpret_cast<internal::IDBCallbacks_SuccessArray_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<IDBReturnValuePtr> p_values{};
      IDBCallbacks_SuccessArray_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValues(&p_values))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCallbacks::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SuccessArray(
std::move(p_values));
      return true;
    }
    case internal::kIDBCallbacks_SuccessKey_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessKey",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBCallbacks_SuccessKey_Params_Data* params =
          reinterpret_cast<internal::IDBCallbacks_SuccessKey_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<::blink::IDBKey> p_key{};
      IDBCallbacks_SuccessKey_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCallbacks::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SuccessKey(
std::move(p_key));
      return true;
    }
    case internal::kIDBCallbacks_SuccessInteger_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCallbacks::SuccessInteger",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBCallbacks_SuccessInteger_Params_Data* params =
          reinterpret_cast<internal::IDBCallbacks_SuccessInteger_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_value{};
      IDBCallbacks_SuccessInteger_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCallbacks::Name_, 10, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SuccessInteger(
std::move(p_value));
      return true;
    }
    case internal::kIDBCallbacks_Success_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCallbacks::Success",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBCallbacks_Success_Params_Data* params =
          reinterpret_cast<internal::IDBCallbacks_Success_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBCallbacks_Success_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCallbacks::Name_, 11, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Success();
      return true;
    }
  }
  return false;
}

// static
bool IDBCallbacksStubDispatch::AcceptWithResponder(
    IDBCallbacks* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIDBCallbacks_Error_Name: {
      break;
    }
    case internal::kIDBCallbacks_SuccessNamesAndVersionsList_Name: {
      break;
    }
    case internal::kIDBCallbacks_SuccessStringList_Name: {
      break;
    }
    case internal::kIDBCallbacks_Blocked_Name: {
      break;
    }
    case internal::kIDBCallbacks_UpgradeNeeded_Name: {
      break;
    }
    case internal::kIDBCallbacks_SuccessDatabase_Name: {
      break;
    }
    case internal::kIDBCallbacks_SuccessCursor_Name: {
      break;
    }
    case internal::kIDBCallbacks_SuccessValue_Name: {
      break;
    }
    case internal::kIDBCallbacks_SuccessArray_Name: {
      break;
    }
    case internal::kIDBCallbacks_SuccessKey_Name: {
      break;
    }
    case internal::kIDBCallbacks_SuccessInteger_Name: {
      break;
    }
    case internal::kIDBCallbacks_Success_Name: {
      break;
    }
  }
  return false;
}

bool IDBCallbacksRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IDBCallbacks RequestValidator");

  switch (message->header()->name) {
    case internal::kIDBCallbacks_Error_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCallbacks_Error_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCallbacks_SuccessNamesAndVersionsList_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCallbacks_SuccessNamesAndVersionsList_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCallbacks_SuccessStringList_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCallbacks_SuccessStringList_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCallbacks_Blocked_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCallbacks_Blocked_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCallbacks_UpgradeNeeded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCallbacks_UpgradeNeeded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCallbacks_SuccessDatabase_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCallbacks_SuccessDatabase_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCallbacks_SuccessCursor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCallbacks_SuccessCursor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCallbacks_SuccessValue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCallbacks_SuccessValue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCallbacks_SuccessArray_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCallbacks_SuccessArray_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCallbacks_SuccessKey_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCallbacks_SuccessKey_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCallbacks_SuccessInteger_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCallbacks_SuccessInteger_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCallbacks_Success_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCallbacks_Success_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char IDBDatabaseCallbacks::Name_[] = "blink.mojom.IDBDatabaseCallbacks";

IDBDatabaseCallbacksProxy::IDBDatabaseCallbacksProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IDBDatabaseCallbacksProxy::ForcedClose(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabaseCallbacks::ForcedClose");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabaseCallbacks_ForcedClose_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabaseCallbacks_ForcedClose_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabaseCallbacks::Name_);
  message.set_method_name("ForcedClose");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseCallbacksProxy::VersionChange(
    int64_t in_old_version, int64_t in_new_version) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabaseCallbacks::VersionChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabaseCallbacks_VersionChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabaseCallbacks_VersionChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->old_version = in_old_version;
  params->new_version = in_new_version;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabaseCallbacks::Name_);
  message.set_method_name("VersionChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseCallbacksProxy::Abort(
    int64_t in_transaction_id, int32_t in_code, const WTF::String& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabaseCallbacks::Abort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabaseCallbacks_Abort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabaseCallbacks_Abort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->code = in_code;
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in IDBDatabaseCallbacks.Abort request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabaseCallbacks::Name_);
  message.set_method_name("Abort");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseCallbacksProxy::Complete(
    int64_t in_transaction_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabaseCallbacks::Complete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabaseCallbacks_Complete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabaseCallbacks_Complete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabaseCallbacks::Name_);
  message.set_method_name("Complete");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseCallbacksProxy::Changes(
    IDBObserverChangesPtr in_changes) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabaseCallbacks::Changes");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabaseCallbacks_Changes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabaseCallbacks_Changes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->changes)::BaseType::BufferWriter
      changes_writer;
  mojo::internal::Serialize<::blink::mojom::IDBObserverChangesDataView>(
      in_changes, buffer, &changes_writer, &serialization_context);
  params->changes.Set(
      changes_writer.is_null() ? nullptr : changes_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->changes.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null changes in IDBDatabaseCallbacks.Changes request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabaseCallbacks::Name_);
  message.set_method_name("Changes");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool IDBDatabaseCallbacksStubDispatch::Accept(
    IDBDatabaseCallbacks* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIDBDatabaseCallbacks_ForcedClose_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabaseCallbacks::ForcedClose",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabaseCallbacks_ForcedClose_Params_Data* params =
          reinterpret_cast<internal::IDBDatabaseCallbacks_ForcedClose_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBDatabaseCallbacks_ForcedClose_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabaseCallbacks::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ForcedClose();
      return true;
    }
    case internal::kIDBDatabaseCallbacks_VersionChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabaseCallbacks::VersionChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabaseCallbacks_VersionChange_Params_Data* params =
          reinterpret_cast<internal::IDBDatabaseCallbacks_VersionChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_old_version{};
      int64_t p_new_version{};
      IDBDatabaseCallbacks_VersionChange_ParamsDataView input_data_view(params, &serialization_context);
      
      p_old_version = input_data_view.old_version();
      p_new_version = input_data_view.new_version();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabaseCallbacks::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->VersionChange(
std::move(p_old_version), 
std::move(p_new_version));
      return true;
    }
    case internal::kIDBDatabaseCallbacks_Abort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabaseCallbacks::Abort",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabaseCallbacks_Abort_Params_Data* params =
          reinterpret_cast<internal::IDBDatabaseCallbacks_Abort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int32_t p_code{};
      WTF::String p_message{};
      IDBDatabaseCallbacks_Abort_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_code = input_data_view.code();
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabaseCallbacks::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Abort(
std::move(p_transaction_id), 
std::move(p_code), 
std::move(p_message));
      return true;
    }
    case internal::kIDBDatabaseCallbacks_Complete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabaseCallbacks::Complete",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabaseCallbacks_Complete_Params_Data* params =
          reinterpret_cast<internal::IDBDatabaseCallbacks_Complete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      IDBDatabaseCallbacks_Complete_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabaseCallbacks::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Complete(
std::move(p_transaction_id));
      return true;
    }
    case internal::kIDBDatabaseCallbacks_Changes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabaseCallbacks::Changes",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabaseCallbacks_Changes_Params_Data* params =
          reinterpret_cast<internal::IDBDatabaseCallbacks_Changes_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBObserverChangesPtr p_changes{};
      IDBDatabaseCallbacks_Changes_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadChanges(&p_changes))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabaseCallbacks::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Changes(
std::move(p_changes));
      return true;
    }
  }
  return false;
}

// static
bool IDBDatabaseCallbacksStubDispatch::AcceptWithResponder(
    IDBDatabaseCallbacks* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIDBDatabaseCallbacks_ForcedClose_Name: {
      break;
    }
    case internal::kIDBDatabaseCallbacks_VersionChange_Name: {
      break;
    }
    case internal::kIDBDatabaseCallbacks_Abort_Name: {
      break;
    }
    case internal::kIDBDatabaseCallbacks_Complete_Name: {
      break;
    }
    case internal::kIDBDatabaseCallbacks_Changes_Name: {
      break;
    }
  }
  return false;
}

bool IDBDatabaseCallbacksRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IDBDatabaseCallbacks RequestValidator");

  switch (message->header()->name) {
    case internal::kIDBDatabaseCallbacks_ForcedClose_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabaseCallbacks_ForcedClose_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabaseCallbacks_VersionChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabaseCallbacks_VersionChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabaseCallbacks_Abort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabaseCallbacks_Abort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabaseCallbacks_Complete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabaseCallbacks_Complete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabaseCallbacks_Changes_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabaseCallbacks_Changes_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char IDBCursor::Name_[] = "blink.mojom.IDBCursor";

class IDBCursor_Advance_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  IDBCursor_Advance_ForwardToCallback(
      IDBCursor::AdvanceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  IDBCursor::AdvanceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(IDBCursor_Advance_ForwardToCallback);
};

class IDBCursor_CursorContinue_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  IDBCursor_CursorContinue_ForwardToCallback(
      IDBCursor::CursorContinueCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  IDBCursor::CursorContinueCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(IDBCursor_CursorContinue_ForwardToCallback);
};

class IDBCursor_Prefetch_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  IDBCursor_Prefetch_ForwardToCallback(
      IDBCursor::PrefetchCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  IDBCursor::PrefetchCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(IDBCursor_Prefetch_ForwardToCallback);
};

IDBCursorProxy::IDBCursorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IDBCursorProxy::Advance(
    uint32_t in_count, AdvanceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCursor::Advance");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCursor_Advance_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCursor_Advance_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->count = in_count;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCursor::Name_);
  message.set_method_name("Advance");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new IDBCursor_Advance_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void IDBCursorProxy::CursorContinue(
    std::unique_ptr<::blink::IDBKey> in_key, std::unique_ptr<::blink::IDBKey> in_primary_key, CursorContinueCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCursor::CursorContinue");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCursor_CursorContinue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCursor_CursorContinue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyDataView>(
      in_key, buffer, &key_writer, &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in IDBCursor.CursorContinue request");
  typename decltype(params->primary_key)::BaseType::BufferWriter
      primary_key_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyDataView>(
      in_primary_key, buffer, &primary_key_writer, &serialization_context);
  params->primary_key.Set(
      primary_key_writer.is_null() ? nullptr : primary_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->primary_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null primary_key in IDBCursor.CursorContinue request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCursor::Name_);
  message.set_method_name("CursorContinue");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new IDBCursor_CursorContinue_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void IDBCursorProxy::Prefetch(
    int32_t in_count, PrefetchCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCursor::Prefetch");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCursor_Prefetch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCursor_Prefetch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->count = in_count;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCursor::Name_);
  message.set_method_name("Prefetch");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new IDBCursor_Prefetch_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void IDBCursorProxy::PrefetchReset(
    int32_t in_used_prefetches, int32_t in_unused_prefetches) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBCursor::PrefetchReset");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCursor_PrefetchReset_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCursor_PrefetchReset_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->used_prefetches = in_used_prefetches;
  params->unused_prefetches = in_unused_prefetches;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCursor::Name_);
  message.set_method_name("PrefetchReset");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class IDBCursor_Advance_ProxyToResponder {
 public:
  static IDBCursor::AdvanceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<IDBCursor_Advance_ProxyToResponder> proxy(
        new IDBCursor_Advance_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&IDBCursor_Advance_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~IDBCursor_Advance_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  IDBCursor_Advance_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "IDBCursor::AdvanceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      IDBErrorPtr in_error, IDBCursorValuePtr in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(IDBCursor_Advance_ProxyToResponder);
};

bool IDBCursor_Advance_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::IDBCursor::AdvanceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::IDBCursor_Advance_ResponseParams_Data* params =
      reinterpret_cast<
          internal::IDBCursor_Advance_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  IDBErrorPtr p_error{};
  IDBCursorValuePtr p_value{};
  IDBCursor_Advance_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        IDBCursor::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_value));
  return true;
}

void IDBCursor_Advance_ProxyToResponder::Run(
    IDBErrorPtr in_error, IDBCursorValuePtr in_value) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCursor_Advance_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCursor_Advance_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<::blink::mojom::IDBErrorDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::blink::mojom::IDBCursorValueDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::IDBCursor::AdvanceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCursor::Name_);
  message.set_method_name("Advance");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class IDBCursor_CursorContinue_ProxyToResponder {
 public:
  static IDBCursor::CursorContinueCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<IDBCursor_CursorContinue_ProxyToResponder> proxy(
        new IDBCursor_CursorContinue_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&IDBCursor_CursorContinue_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~IDBCursor_CursorContinue_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  IDBCursor_CursorContinue_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "IDBCursor::CursorContinueCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      IDBErrorPtr in_error, IDBCursorValuePtr in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(IDBCursor_CursorContinue_ProxyToResponder);
};

bool IDBCursor_CursorContinue_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::IDBCursor::CursorContinueCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::IDBCursor_CursorContinue_ResponseParams_Data* params =
      reinterpret_cast<
          internal::IDBCursor_CursorContinue_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  IDBErrorPtr p_error{};
  IDBCursorValuePtr p_value{};
  IDBCursor_CursorContinue_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        IDBCursor::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_value));
  return true;
}

void IDBCursor_CursorContinue_ProxyToResponder::Run(
    IDBErrorPtr in_error, IDBCursorValuePtr in_value) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCursor_CursorContinue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCursor_CursorContinue_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<::blink::mojom::IDBErrorDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::blink::mojom::IDBCursorValueDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::IDBCursor::CursorContinueCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCursor::Name_);
  message.set_method_name("CursorContinue");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class IDBCursor_Prefetch_ProxyToResponder {
 public:
  static IDBCursor::PrefetchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<IDBCursor_Prefetch_ProxyToResponder> proxy(
        new IDBCursor_Prefetch_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&IDBCursor_Prefetch_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~IDBCursor_Prefetch_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  IDBCursor_Prefetch_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "IDBCursor::PrefetchCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      IDBErrorPtr in_error, IDBCursorValuePtr in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(IDBCursor_Prefetch_ProxyToResponder);
};

bool IDBCursor_Prefetch_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::IDBCursor::PrefetchCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::IDBCursor_Prefetch_ResponseParams_Data* params =
      reinterpret_cast<
          internal::IDBCursor_Prefetch_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  IDBErrorPtr p_error{};
  IDBCursorValuePtr p_value{};
  IDBCursor_Prefetch_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        IDBCursor::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_value));
  return true;
}

void IDBCursor_Prefetch_ProxyToResponder::Run(
    IDBErrorPtr in_error, IDBCursorValuePtr in_value) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBCursor_Prefetch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBCursor_Prefetch_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<::blink::mojom::IDBErrorDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::blink::mojom::IDBCursorValueDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::IDBCursor::PrefetchCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBCursor::Name_);
  message.set_method_name("Prefetch");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool IDBCursorStubDispatch::Accept(
    IDBCursor* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIDBCursor_Advance_Name: {
      break;
    }
    case internal::kIDBCursor_CursorContinue_Name: {
      break;
    }
    case internal::kIDBCursor_Prefetch_Name: {
      break;
    }
    case internal::kIDBCursor_PrefetchReset_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCursor::PrefetchReset",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBCursor_PrefetchReset_Params_Data* params =
          reinterpret_cast<internal::IDBCursor_PrefetchReset_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_used_prefetches{};
      int32_t p_unused_prefetches{};
      IDBCursor_PrefetchReset_ParamsDataView input_data_view(params, &serialization_context);
      
      p_used_prefetches = input_data_view.used_prefetches();
      p_unused_prefetches = input_data_view.unused_prefetches();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCursor::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PrefetchReset(
std::move(p_used_prefetches), 
std::move(p_unused_prefetches));
      return true;
    }
  }
  return false;
}

// static
bool IDBCursorStubDispatch::AcceptWithResponder(
    IDBCursor* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIDBCursor_Advance_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCursor::Advance",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::IDBCursor_Advance_Params_Data* params =
          reinterpret_cast<
              internal::IDBCursor_Advance_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_count{};
      IDBCursor_Advance_ParamsDataView input_data_view(params, &serialization_context);
      
      p_count = input_data_view.count();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCursor::Name_, 0, false);
        return false;
      }
      IDBCursor::AdvanceCallback callback =
          IDBCursor_Advance_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Advance(
std::move(p_count), std::move(callback));
      return true;
    }
    case internal::kIDBCursor_CursorContinue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCursor::CursorContinue",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::IDBCursor_CursorContinue_Params_Data* params =
          reinterpret_cast<
              internal::IDBCursor_CursorContinue_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<::blink::IDBKey> p_key{};
      std::unique_ptr<::blink::IDBKey> p_primary_key{};
      IDBCursor_CursorContinue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadPrimaryKey(&p_primary_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCursor::Name_, 1, false);
        return false;
      }
      IDBCursor::CursorContinueCallback callback =
          IDBCursor_CursorContinue_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CursorContinue(
std::move(p_key), 
std::move(p_primary_key), std::move(callback));
      return true;
    }
    case internal::kIDBCursor_Prefetch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBCursor::Prefetch",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::IDBCursor_Prefetch_Params_Data* params =
          reinterpret_cast<
              internal::IDBCursor_Prefetch_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_count{};
      IDBCursor_Prefetch_ParamsDataView input_data_view(params, &serialization_context);
      
      p_count = input_data_view.count();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBCursor::Name_, 2, false);
        return false;
      }
      IDBCursor::PrefetchCallback callback =
          IDBCursor_Prefetch_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Prefetch(
std::move(p_count), std::move(callback));
      return true;
    }
    case internal::kIDBCursor_PrefetchReset_Name: {
      break;
    }
  }
  return false;
}

bool IDBCursorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IDBCursor RequestValidator");

  switch (message->header()->name) {
    case internal::kIDBCursor_Advance_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCursor_Advance_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCursor_CursorContinue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCursor_CursorContinue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCursor_Prefetch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCursor_Prefetch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCursor_PrefetchReset_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCursor_PrefetchReset_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool IDBCursorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IDBCursor ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kIDBCursor_Advance_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCursor_Advance_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCursor_CursorContinue_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCursor_CursorContinue_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBCursor_Prefetch_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBCursor_Prefetch_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char IDBTransaction::Name_[] = "blink.mojom.IDBTransaction";

IDBTransactionProxy::IDBTransactionProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IDBTransactionProxy::CreateObjectStore(
    int64_t in_object_store_id, const WTF::String& in_name, const ::blink::IDBKeyPath& in_key_path, bool in_auto_increment) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBTransaction::CreateObjectStore");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBTransaction_CreateObjectStore_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBTransaction_CreateObjectStore_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->object_store_id = in_object_store_id;
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in IDBTransaction.CreateObjectStore request");
  typename decltype(params->key_path)::BaseType::BufferWriter
      key_path_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyPathDataView>(
      in_key_path, buffer, &key_path_writer, &serialization_context);
  params->key_path.Set(
      key_path_writer.is_null() ? nullptr : key_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_path in IDBTransaction.CreateObjectStore request");
  params->auto_increment = in_auto_increment;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBTransaction::Name_);
  message.set_method_name("CreateObjectStore");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBTransactionProxy::DeleteObjectStore(
    int64_t in_object_store_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBTransaction::DeleteObjectStore");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBTransaction_DeleteObjectStore_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBTransaction_DeleteObjectStore_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->object_store_id = in_object_store_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBTransaction::Name_);
  message.set_method_name("DeleteObjectStore");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBTransactionProxy::Put(
    int64_t in_object_store_id, std::unique_ptr<::blink::IDBValue> in_value, std::unique_ptr<::blink::IDBKey> in_key, IDBPutMode in_mode, WTF::Vector<::blink::IDBIndexKeys> in_index_keys, IDBCallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBTransaction::Put");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBTransaction_Put_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBTransaction_Put_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->object_store_id = in_object_store_id;
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::blink::mojom::IDBValueDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in IDBTransaction.Put request");
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyDataView>(
      in_key, buffer, &key_writer, &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in IDBTransaction.Put request");
  mojo::internal::Serialize<::blink::mojom::IDBPutMode>(
      in_mode, &params->mode);
  typename decltype(params->index_keys)::BaseType::BufferWriter
      index_keys_writer;
  const mojo::internal::ContainerValidateParams index_keys_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::IDBIndexKeysDataView>>(
      in_index_keys, buffer, &index_keys_writer, &index_keys_validate_params,
      &serialization_context);
  params->index_keys.Set(
      index_keys_writer.is_null() ? nullptr : index_keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->index_keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null index_keys in IDBTransaction.Put request");
  mojo::internal::Serialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in IDBTransaction.Put request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBTransaction::Name_);
  message.set_method_name("Put");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBTransactionProxy::Commit(
    int64_t in_num_errors_handled) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBTransaction::Commit");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBTransaction_Commit_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBTransaction_Commit_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->num_errors_handled = in_num_errors_handled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBTransaction::Name_);
  message.set_method_name("Commit");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool IDBTransactionStubDispatch::Accept(
    IDBTransaction* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIDBTransaction_CreateObjectStore_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBTransaction::CreateObjectStore",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBTransaction_CreateObjectStore_Params_Data* params =
          reinterpret_cast<internal::IDBTransaction_CreateObjectStore_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_object_store_id{};
      WTF::String p_name{};
      ::blink::IDBKeyPath p_key_path{};
      bool p_auto_increment{};
      IDBTransaction_CreateObjectStore_ParamsDataView input_data_view(params, &serialization_context);
      
      p_object_store_id = input_data_view.object_store_id();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadKeyPath(&p_key_path))
        success = false;
      p_auto_increment = input_data_view.auto_increment();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBTransaction::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateObjectStore(
std::move(p_object_store_id), 
std::move(p_name), 
std::move(p_key_path), 
std::move(p_auto_increment));
      return true;
    }
    case internal::kIDBTransaction_DeleteObjectStore_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBTransaction::DeleteObjectStore",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBTransaction_DeleteObjectStore_Params_Data* params =
          reinterpret_cast<internal::IDBTransaction_DeleteObjectStore_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_object_store_id{};
      IDBTransaction_DeleteObjectStore_ParamsDataView input_data_view(params, &serialization_context);
      
      p_object_store_id = input_data_view.object_store_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBTransaction::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeleteObjectStore(
std::move(p_object_store_id));
      return true;
    }
    case internal::kIDBTransaction_Put_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBTransaction::Put",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBTransaction_Put_Params_Data* params =
          reinterpret_cast<internal::IDBTransaction_Put_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_object_store_id{};
      std::unique_ptr<::blink::IDBValue> p_value{};
      std::unique_ptr<::blink::IDBKey> p_key{};
      IDBPutMode p_mode{};
      WTF::Vector<::blink::IDBIndexKeys> p_index_keys{};
      IDBCallbacksAssociatedPtrInfo p_callbacks{};
      IDBTransaction_Put_ParamsDataView input_data_view(params, &serialization_context);
      
      p_object_store_id = input_data_view.object_store_id();
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadMode(&p_mode))
        success = false;
      if (!input_data_view.ReadIndexKeys(&p_index_keys))
        success = false;
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBTransaction::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Put(
std::move(p_object_store_id), 
std::move(p_value), 
std::move(p_key), 
std::move(p_mode), 
std::move(p_index_keys), 
std::move(p_callbacks));
      return true;
    }
    case internal::kIDBTransaction_Commit_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBTransaction::Commit",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBTransaction_Commit_Params_Data* params =
          reinterpret_cast<internal::IDBTransaction_Commit_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_num_errors_handled{};
      IDBTransaction_Commit_ParamsDataView input_data_view(params, &serialization_context);
      
      p_num_errors_handled = input_data_view.num_errors_handled();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBTransaction::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Commit(
std::move(p_num_errors_handled));
      return true;
    }
  }
  return false;
}

// static
bool IDBTransactionStubDispatch::AcceptWithResponder(
    IDBTransaction* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIDBTransaction_CreateObjectStore_Name: {
      break;
    }
    case internal::kIDBTransaction_DeleteObjectStore_Name: {
      break;
    }
    case internal::kIDBTransaction_Put_Name: {
      break;
    }
    case internal::kIDBTransaction_Commit_Name: {
      break;
    }
  }
  return false;
}

bool IDBTransactionRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IDBTransaction RequestValidator");

  switch (message->header()->name) {
    case internal::kIDBTransaction_CreateObjectStore_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBTransaction_CreateObjectStore_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBTransaction_DeleteObjectStore_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBTransaction_DeleteObjectStore_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBTransaction_Put_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBTransaction_Put_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBTransaction_Commit_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBTransaction_Commit_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char IDBDatabase::Name_[] = "blink.mojom.IDBDatabase";

IDBDatabaseProxy::IDBDatabaseProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IDBDatabaseProxy::RenameObjectStore(
    int64_t in_transaction_id, int64_t in_object_store_id, const WTF::String& in_new_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::RenameObjectStore");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_RenameObjectStore_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_RenameObjectStore_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  typename decltype(params->new_name)::BaseType::BufferWriter
      new_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_new_name, buffer, &new_name_writer, &serialization_context);
  params->new_name.Set(
      new_name_writer.is_null() ? nullptr : new_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_name in IDBDatabase.RenameObjectStore request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("RenameObjectStore");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::CreateTransaction(
    IDBTransactionAssociatedRequest in_transaction_request, int64_t in_transaction_id, const WTF::Vector<int64_t>& in_object_store_ids, IDBTransactionMode in_mode) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::CreateTransaction");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_CreateTransaction_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_CreateTransaction_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::IDBTransactionAssociatedRequestDataView>(
      in_transaction_request, &params->transaction_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->transaction_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid transaction_request in IDBDatabase.CreateTransaction request");
  params->transaction_id = in_transaction_id;
  typename decltype(params->object_store_ids)::BaseType::BufferWriter
      object_store_ids_writer;
  const mojo::internal::ContainerValidateParams object_store_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<int64_t>>(
      in_object_store_ids, buffer, &object_store_ids_writer, &object_store_ids_validate_params,
      &serialization_context);
  params->object_store_ids.Set(
      object_store_ids_writer.is_null() ? nullptr : object_store_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->object_store_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null object_store_ids in IDBDatabase.CreateTransaction request");
  mojo::internal::Serialize<::blink::mojom::IDBTransactionMode>(
      in_mode, &params->mode);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("CreateTransaction");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::Close(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::Close");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_Close_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_Close_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("Close");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::VersionChangeIgnored(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::VersionChangeIgnored");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_VersionChangeIgnored_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_VersionChangeIgnored_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("VersionChangeIgnored");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::AddObserver(
    int64_t in_transaction_id, int32_t in_observer_id, bool in_include_transaction, bool in_no_records, bool in_values, uint32_t in_operation_types) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::AddObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_AddObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_AddObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->observer_id = in_observer_id;
  params->include_transaction = in_include_transaction;
  params->no_records = in_no_records;
  params->values = in_values;
  params->operation_types = in_operation_types;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("AddObserver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::RemoveObservers(
    const WTF::Vector<int32_t>& in_observers) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::RemoveObservers");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_RemoveObservers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_RemoveObservers_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->observers)::BaseType::BufferWriter
      observers_writer;
  const mojo::internal::ContainerValidateParams observers_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
      in_observers, buffer, &observers_writer, &observers_validate_params,
      &serialization_context);
  params->observers.Set(
      observers_writer.is_null() ? nullptr : observers_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->observers.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null observers in IDBDatabase.RemoveObservers request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("RemoveObservers");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::Get(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id, IDBKeyRangePtr in_key_range, bool in_key_only, IDBCallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::Get");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_Get_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_Get_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  typename decltype(params->key_range)::BaseType::BufferWriter
      key_range_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyRangeDataView>(
      in_key_range, buffer, &key_range_writer, &serialization_context);
  params->key_range.Set(
      key_range_writer.is_null() ? nullptr : key_range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_range in IDBDatabase.Get request");
  params->key_only = in_key_only;
  mojo::internal::Serialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in IDBDatabase.Get request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("Get");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::GetAll(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id, IDBKeyRangePtr in_key_range, bool in_key_only, int64_t in_max_count, IDBCallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::GetAll");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_GetAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_GetAll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  typename decltype(params->key_range)::BaseType::BufferWriter
      key_range_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyRangeDataView>(
      in_key_range, buffer, &key_range_writer, &serialization_context);
  params->key_range.Set(
      key_range_writer.is_null() ? nullptr : key_range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_range in IDBDatabase.GetAll request");
  params->key_only = in_key_only;
  params->max_count = in_max_count;
  mojo::internal::Serialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in IDBDatabase.GetAll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("GetAll");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::SetIndexKeys(
    int64_t in_transaction_id, int64_t in_object_store_id, std::unique_ptr<::blink::IDBKey> in_primary_key, WTF::Vector<::blink::IDBIndexKeys> in_index_keys) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::SetIndexKeys");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_SetIndexKeys_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_SetIndexKeys_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  typename decltype(params->primary_key)::BaseType::BufferWriter
      primary_key_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyDataView>(
      in_primary_key, buffer, &primary_key_writer, &serialization_context);
  params->primary_key.Set(
      primary_key_writer.is_null() ? nullptr : primary_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->primary_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null primary_key in IDBDatabase.SetIndexKeys request");
  typename decltype(params->index_keys)::BaseType::BufferWriter
      index_keys_writer;
  const mojo::internal::ContainerValidateParams index_keys_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::IDBIndexKeysDataView>>(
      in_index_keys, buffer, &index_keys_writer, &index_keys_validate_params,
      &serialization_context);
  params->index_keys.Set(
      index_keys_writer.is_null() ? nullptr : index_keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->index_keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null index_keys in IDBDatabase.SetIndexKeys request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("SetIndexKeys");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::SetIndexesReady(
    int64_t in_transaction_id, int64_t in_object_store_id, const WTF::Vector<int64_t>& in_index_ids) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::SetIndexesReady");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_SetIndexesReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_SetIndexesReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  typename decltype(params->index_ids)::BaseType::BufferWriter
      index_ids_writer;
  const mojo::internal::ContainerValidateParams index_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<int64_t>>(
      in_index_ids, buffer, &index_ids_writer, &index_ids_validate_params,
      &serialization_context);
  params->index_ids.Set(
      index_ids_writer.is_null() ? nullptr : index_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->index_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null index_ids in IDBDatabase.SetIndexesReady request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("SetIndexesReady");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::OpenCursor(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id, IDBKeyRangePtr in_key_range, IDBCursorDirection in_direction, bool in_key_only, IDBTaskType in_task_type, IDBCallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::OpenCursor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_OpenCursor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_OpenCursor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  typename decltype(params->key_range)::BaseType::BufferWriter
      key_range_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyRangeDataView>(
      in_key_range, buffer, &key_range_writer, &serialization_context);
  params->key_range.Set(
      key_range_writer.is_null() ? nullptr : key_range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_range in IDBDatabase.OpenCursor request");
  mojo::internal::Serialize<::blink::mojom::IDBCursorDirection>(
      in_direction, &params->direction);
  params->key_only = in_key_only;
  mojo::internal::Serialize<::blink::mojom::IDBTaskType>(
      in_task_type, &params->task_type);
  mojo::internal::Serialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in IDBDatabase.OpenCursor request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("OpenCursor");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::Count(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id, IDBKeyRangePtr in_key_range, IDBCallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::Count");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_Count_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_Count_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  typename decltype(params->key_range)::BaseType::BufferWriter
      key_range_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyRangeDataView>(
      in_key_range, buffer, &key_range_writer, &serialization_context);
  params->key_range.Set(
      key_range_writer.is_null() ? nullptr : key_range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_range in IDBDatabase.Count request");
  mojo::internal::Serialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in IDBDatabase.Count request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("Count");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::DeleteRange(
    int64_t in_transaction_id, int64_t in_object_store_id, IDBKeyRangePtr in_key_range, IDBCallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::DeleteRange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_DeleteRange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_DeleteRange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  typename decltype(params->key_range)::BaseType::BufferWriter
      key_range_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyRangeDataView>(
      in_key_range, buffer, &key_range_writer, &serialization_context);
  params->key_range.Set(
      key_range_writer.is_null() ? nullptr : key_range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_range in IDBDatabase.DeleteRange request");
  mojo::internal::Serialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in IDBDatabase.DeleteRange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("DeleteRange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::GetKeyGeneratorCurrentNumber(
    int64_t in_transaction_id, int64_t in_object_store_id, IDBCallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::GetKeyGeneratorCurrentNumber");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_GetKeyGeneratorCurrentNumber_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  mojo::internal::Serialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in IDBDatabase.GetKeyGeneratorCurrentNumber request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("GetKeyGeneratorCurrentNumber");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::Clear(
    int64_t in_transaction_id, int64_t in_object_store_id, IDBCallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::Clear");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_Clear_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_Clear_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  mojo::internal::Serialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in IDBDatabase.Clear request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("Clear");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::CreateIndex(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id, const WTF::String& in_name, const ::blink::IDBKeyPath& in_key_path, bool in_unique, bool in_multi_entry) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::CreateIndex");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_CreateIndex_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_CreateIndex_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in IDBDatabase.CreateIndex request");
  typename decltype(params->key_path)::BaseType::BufferWriter
      key_path_writer;
  mojo::internal::Serialize<::blink::mojom::IDBKeyPathDataView>(
      in_key_path, buffer, &key_path_writer, &serialization_context);
  params->key_path.Set(
      key_path_writer.is_null() ? nullptr : key_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_path in IDBDatabase.CreateIndex request");
  params->unique = in_unique;
  params->multi_entry = in_multi_entry;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("CreateIndex");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::DeleteIndex(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::DeleteIndex");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_DeleteIndex_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_DeleteIndex_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("DeleteIndex");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::RenameIndex(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id, const WTF::String& in_new_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::RenameIndex");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_RenameIndex_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_RenameIndex_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  typename decltype(params->new_name)::BaseType::BufferWriter
      new_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_new_name, buffer, &new_name_writer, &serialization_context);
  params->new_name.Set(
      new_name_writer.is_null() ? nullptr : new_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_name in IDBDatabase.RenameIndex request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("RenameIndex");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBDatabaseProxy::Abort(
    int64_t in_transaction_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBDatabase::Abort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBDatabase_Abort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBDatabase_Abort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBDatabase::Name_);
  message.set_method_name("Abort");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool IDBDatabaseStubDispatch::Accept(
    IDBDatabase* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIDBDatabase_RenameObjectStore_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::RenameObjectStore",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_RenameObjectStore_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_RenameObjectStore_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      WTF::String p_new_name{};
      IDBDatabase_RenameObjectStore_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      if (!input_data_view.ReadNewName(&p_new_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RenameObjectStore(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_new_name));
      return true;
    }
    case internal::kIDBDatabase_CreateTransaction_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::CreateTransaction",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_CreateTransaction_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_CreateTransaction_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBTransactionAssociatedRequest p_transaction_request{};
      int64_t p_transaction_id{};
      WTF::Vector<int64_t> p_object_store_ids{};
      IDBTransactionMode p_mode{};
      IDBDatabase_CreateTransaction_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_request =
          input_data_view.TakeTransactionRequest<decltype(p_transaction_request)>();
      p_transaction_id = input_data_view.transaction_id();
      if (!input_data_view.ReadObjectStoreIds(&p_object_store_ids))
        success = false;
      if (!input_data_view.ReadMode(&p_mode))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateTransaction(
std::move(p_transaction_request), 
std::move(p_transaction_id), 
std::move(p_object_store_ids), 
std::move(p_mode));
      return true;
    }
    case internal::kIDBDatabase_Close_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::Close",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_Close_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_Close_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBDatabase_Close_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Close();
      return true;
    }
    case internal::kIDBDatabase_VersionChangeIgnored_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::VersionChangeIgnored",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_VersionChangeIgnored_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_VersionChangeIgnored_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBDatabase_VersionChangeIgnored_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->VersionChangeIgnored();
      return true;
    }
    case internal::kIDBDatabase_AddObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::AddObserver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_AddObserver_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_AddObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int32_t p_observer_id{};
      bool p_include_transaction{};
      bool p_no_records{};
      bool p_values{};
      uint32_t p_operation_types{};
      IDBDatabase_AddObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_observer_id = input_data_view.observer_id();
      p_include_transaction = input_data_view.include_transaction();
      p_no_records = input_data_view.no_records();
      p_values = input_data_view.values();
      p_operation_types = input_data_view.operation_types();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddObserver(
std::move(p_transaction_id), 
std::move(p_observer_id), 
std::move(p_include_transaction), 
std::move(p_no_records), 
std::move(p_values), 
std::move(p_operation_types));
      return true;
    }
    case internal::kIDBDatabase_RemoveObservers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::RemoveObservers",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_RemoveObservers_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_RemoveObservers_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<int32_t> p_observers{};
      IDBDatabase_RemoveObservers_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadObservers(&p_observers))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RemoveObservers(
std::move(p_observers));
      return true;
    }
    case internal::kIDBDatabase_Get_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::Get",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_Get_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_Get_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      IDBKeyRangePtr p_key_range{};
      bool p_key_only{};
      IDBCallbacksAssociatedPtrInfo p_callbacks{};
      IDBDatabase_Get_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!input_data_view.ReadKeyRange(&p_key_range))
        success = false;
      p_key_only = input_data_view.key_only();
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Get(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id), 
std::move(p_key_range), 
std::move(p_key_only), 
std::move(p_callbacks));
      return true;
    }
    case internal::kIDBDatabase_GetAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::GetAll",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_GetAll_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_GetAll_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      IDBKeyRangePtr p_key_range{};
      bool p_key_only{};
      int64_t p_max_count{};
      IDBCallbacksAssociatedPtrInfo p_callbacks{};
      IDBDatabase_GetAll_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!input_data_view.ReadKeyRange(&p_key_range))
        success = false;
      p_key_only = input_data_view.key_only();
      p_max_count = input_data_view.max_count();
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetAll(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id), 
std::move(p_key_range), 
std::move(p_key_only), 
std::move(p_max_count), 
std::move(p_callbacks));
      return true;
    }
    case internal::kIDBDatabase_SetIndexKeys_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::SetIndexKeys",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_SetIndexKeys_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_SetIndexKeys_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      std::unique_ptr<::blink::IDBKey> p_primary_key{};
      WTF::Vector<::blink::IDBIndexKeys> p_index_keys{};
      IDBDatabase_SetIndexKeys_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      if (!input_data_view.ReadPrimaryKey(&p_primary_key))
        success = false;
      if (!input_data_view.ReadIndexKeys(&p_index_keys))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetIndexKeys(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_primary_key), 
std::move(p_index_keys));
      return true;
    }
    case internal::kIDBDatabase_SetIndexesReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::SetIndexesReady",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_SetIndexesReady_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_SetIndexesReady_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      WTF::Vector<int64_t> p_index_ids{};
      IDBDatabase_SetIndexesReady_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      if (!input_data_view.ReadIndexIds(&p_index_ids))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetIndexesReady(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_ids));
      return true;
    }
    case internal::kIDBDatabase_OpenCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::OpenCursor",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_OpenCursor_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_OpenCursor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      IDBKeyRangePtr p_key_range{};
      IDBCursorDirection p_direction{};
      bool p_key_only{};
      IDBTaskType p_task_type{};
      IDBCallbacksAssociatedPtrInfo p_callbacks{};
      IDBDatabase_OpenCursor_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!input_data_view.ReadKeyRange(&p_key_range))
        success = false;
      if (!input_data_view.ReadDirection(&p_direction))
        success = false;
      p_key_only = input_data_view.key_only();
      if (!input_data_view.ReadTaskType(&p_task_type))
        success = false;
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 10, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenCursor(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id), 
std::move(p_key_range), 
std::move(p_direction), 
std::move(p_key_only), 
std::move(p_task_type), 
std::move(p_callbacks));
      return true;
    }
    case internal::kIDBDatabase_Count_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::Count",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_Count_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_Count_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      IDBKeyRangePtr p_key_range{};
      IDBCallbacksAssociatedPtrInfo p_callbacks{};
      IDBDatabase_Count_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!input_data_view.ReadKeyRange(&p_key_range))
        success = false;
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 11, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Count(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id), 
std::move(p_key_range), 
std::move(p_callbacks));
      return true;
    }
    case internal::kIDBDatabase_DeleteRange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::DeleteRange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_DeleteRange_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_DeleteRange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      IDBKeyRangePtr p_key_range{};
      IDBCallbacksAssociatedPtrInfo p_callbacks{};
      IDBDatabase_DeleteRange_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      if (!input_data_view.ReadKeyRange(&p_key_range))
        success = false;
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 12, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeleteRange(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_key_range), 
std::move(p_callbacks));
      return true;
    }
    case internal::kIDBDatabase_GetKeyGeneratorCurrentNumber_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::GetKeyGeneratorCurrentNumber",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      IDBCallbacksAssociatedPtrInfo p_callbacks{};
      IDBDatabase_GetKeyGeneratorCurrentNumber_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 13, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetKeyGeneratorCurrentNumber(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_callbacks));
      return true;
    }
    case internal::kIDBDatabase_Clear_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::Clear",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_Clear_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_Clear_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      IDBCallbacksAssociatedPtrInfo p_callbacks{};
      IDBDatabase_Clear_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 14, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Clear(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_callbacks));
      return true;
    }
    case internal::kIDBDatabase_CreateIndex_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::CreateIndex",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_CreateIndex_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_CreateIndex_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      WTF::String p_name{};
      ::blink::IDBKeyPath p_key_path{};
      bool p_unique{};
      bool p_multi_entry{};
      IDBDatabase_CreateIndex_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadKeyPath(&p_key_path))
        success = false;
      p_unique = input_data_view.unique();
      p_multi_entry = input_data_view.multi_entry();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 15, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateIndex(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id), 
std::move(p_name), 
std::move(p_key_path), 
std::move(p_unique), 
std::move(p_multi_entry));
      return true;
    }
    case internal::kIDBDatabase_DeleteIndex_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::DeleteIndex",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_DeleteIndex_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_DeleteIndex_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      IDBDatabase_DeleteIndex_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 16, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeleteIndex(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id));
      return true;
    }
    case internal::kIDBDatabase_RenameIndex_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::RenameIndex",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_RenameIndex_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_RenameIndex_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      WTF::String p_new_name{};
      IDBDatabase_RenameIndex_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!input_data_view.ReadNewName(&p_new_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 17, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RenameIndex(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id), 
std::move(p_new_name));
      return true;
    }
    case internal::kIDBDatabase_Abort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBDatabase::Abort",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBDatabase_Abort_Params_Data* params =
          reinterpret_cast<internal::IDBDatabase_Abort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      IDBDatabase_Abort_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBDatabase::Name_, 18, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Abort(
std::move(p_transaction_id));
      return true;
    }
  }
  return false;
}

// static
bool IDBDatabaseStubDispatch::AcceptWithResponder(
    IDBDatabase* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIDBDatabase_RenameObjectStore_Name: {
      break;
    }
    case internal::kIDBDatabase_CreateTransaction_Name: {
      break;
    }
    case internal::kIDBDatabase_Close_Name: {
      break;
    }
    case internal::kIDBDatabase_VersionChangeIgnored_Name: {
      break;
    }
    case internal::kIDBDatabase_AddObserver_Name: {
      break;
    }
    case internal::kIDBDatabase_RemoveObservers_Name: {
      break;
    }
    case internal::kIDBDatabase_Get_Name: {
      break;
    }
    case internal::kIDBDatabase_GetAll_Name: {
      break;
    }
    case internal::kIDBDatabase_SetIndexKeys_Name: {
      break;
    }
    case internal::kIDBDatabase_SetIndexesReady_Name: {
      break;
    }
    case internal::kIDBDatabase_OpenCursor_Name: {
      break;
    }
    case internal::kIDBDatabase_Count_Name: {
      break;
    }
    case internal::kIDBDatabase_DeleteRange_Name: {
      break;
    }
    case internal::kIDBDatabase_GetKeyGeneratorCurrentNumber_Name: {
      break;
    }
    case internal::kIDBDatabase_Clear_Name: {
      break;
    }
    case internal::kIDBDatabase_CreateIndex_Name: {
      break;
    }
    case internal::kIDBDatabase_DeleteIndex_Name: {
      break;
    }
    case internal::kIDBDatabase_RenameIndex_Name: {
      break;
    }
    case internal::kIDBDatabase_Abort_Name: {
      break;
    }
  }
  return false;
}

bool IDBDatabaseRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IDBDatabase RequestValidator");

  switch (message->header()->name) {
    case internal::kIDBDatabase_RenameObjectStore_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_RenameObjectStore_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_CreateTransaction_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_CreateTransaction_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_Close_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_Close_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_VersionChangeIgnored_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_VersionChangeIgnored_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_AddObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_AddObserver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_RemoveObservers_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_RemoveObservers_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_Get_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_Get_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_GetAll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_GetAll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_SetIndexKeys_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_SetIndexKeys_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_SetIndexesReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_SetIndexesReady_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_OpenCursor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_OpenCursor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_Count_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_Count_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_DeleteRange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_DeleteRange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_GetKeyGeneratorCurrentNumber_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_GetKeyGeneratorCurrentNumber_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_Clear_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_Clear_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_CreateIndex_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_CreateIndex_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_DeleteIndex_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_DeleteIndex_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_RenameIndex_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_RenameIndex_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBDatabase_Abort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBDatabase_Abort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char IDBFactory::Name_[] = "blink.mojom.IDBFactory";

class IDBFactory_AbortTransactionsAndCompactDatabase_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  IDBFactory_AbortTransactionsAndCompactDatabase_ForwardToCallback(
      IDBFactory::AbortTransactionsAndCompactDatabaseCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  IDBFactory::AbortTransactionsAndCompactDatabaseCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(IDBFactory_AbortTransactionsAndCompactDatabase_ForwardToCallback);
};

class IDBFactory_AbortTransactionsForDatabase_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  IDBFactory_AbortTransactionsForDatabase_ForwardToCallback(
      IDBFactory::AbortTransactionsForDatabaseCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  IDBFactory::AbortTransactionsForDatabaseCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(IDBFactory_AbortTransactionsForDatabase_ForwardToCallback);
};

IDBFactoryProxy::IDBFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void IDBFactoryProxy::GetDatabaseInfo(
    IDBCallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBFactory::GetDatabaseInfo");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBFactory_GetDatabaseInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBFactory_GetDatabaseInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in IDBFactory.GetDatabaseInfo request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBFactory::Name_);
  message.set_method_name("GetDatabaseInfo");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBFactoryProxy::GetDatabaseNames(
    IDBCallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBFactory::GetDatabaseNames");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBFactory_GetDatabaseNames_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBFactory_GetDatabaseNames_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in IDBFactory.GetDatabaseNames request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBFactory::Name_);
  message.set_method_name("GetDatabaseNames");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBFactoryProxy::Open(
    IDBCallbacksAssociatedPtrInfo in_callbacks, IDBDatabaseCallbacksAssociatedPtrInfo in_database_callbacks, const WTF::String& in_name, int64_t in_version, IDBTransactionAssociatedRequest in_version_change_transaction_request, int64_t in_transaction_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBFactory::Open");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBFactory_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBFactory_Open_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in IDBFactory.Open request");
  mojo::internal::Serialize<::blink::mojom::IDBDatabaseCallbacksAssociatedPtrInfoDataView>(
      in_database_callbacks, &params->database_callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->database_callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid database_callbacks in IDBFactory.Open request");
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in IDBFactory.Open request");
  params->version = in_version;
  mojo::internal::Serialize<::blink::mojom::IDBTransactionAssociatedRequestDataView>(
      in_version_change_transaction_request, &params->version_change_transaction_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->version_change_transaction_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid version_change_transaction_request in IDBFactory.Open request");
  params->transaction_id = in_transaction_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBFactory::Name_);
  message.set_method_name("Open");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBFactoryProxy::DeleteDatabase(
    IDBCallbacksAssociatedPtrInfo in_callbacks, const WTF::String& in_name, bool in_force_close) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBFactory::DeleteDatabase");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBFactory_DeleteDatabase_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBFactory_DeleteDatabase_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::IDBCallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in IDBFactory.DeleteDatabase request");
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in IDBFactory.DeleteDatabase request");
  params->force_close = in_force_close;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBFactory::Name_);
  message.set_method_name("DeleteDatabase");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void IDBFactoryProxy::AbortTransactionsAndCompactDatabase(
    AbortTransactionsAndCompactDatabaseCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBFactory::AbortTransactionsAndCompactDatabase");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBFactory_AbortTransactionsAndCompactDatabase_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBFactory::Name_);
  message.set_method_name("AbortTransactionsAndCompactDatabase");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new IDBFactory_AbortTransactionsAndCompactDatabase_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void IDBFactoryProxy::AbortTransactionsForDatabase(
    AbortTransactionsForDatabaseCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IDBFactory::AbortTransactionsForDatabase");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBFactory_AbortTransactionsForDatabase_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBFactory_AbortTransactionsForDatabase_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBFactory::Name_);
  message.set_method_name("AbortTransactionsForDatabase");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new IDBFactory_AbortTransactionsForDatabase_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class IDBFactory_AbortTransactionsAndCompactDatabase_ProxyToResponder {
 public:
  static IDBFactory::AbortTransactionsAndCompactDatabaseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<IDBFactory_AbortTransactionsAndCompactDatabase_ProxyToResponder> proxy(
        new IDBFactory_AbortTransactionsAndCompactDatabase_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&IDBFactory_AbortTransactionsAndCompactDatabase_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~IDBFactory_AbortTransactionsAndCompactDatabase_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  IDBFactory_AbortTransactionsAndCompactDatabase_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "IDBFactory::AbortTransactionsAndCompactDatabaseCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      IDBStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(IDBFactory_AbortTransactionsAndCompactDatabase_ProxyToResponder);
};

bool IDBFactory_AbortTransactionsAndCompactDatabase_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::IDBFactory::AbortTransactionsAndCompactDatabaseCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data* params =
      reinterpret_cast<
          internal::IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  IDBStatus p_status{};
  IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        IDBFactory::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void IDBFactory_AbortTransactionsAndCompactDatabase_ProxyToResponder::Run(
    IDBStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBFactory_AbortTransactionsAndCompactDatabase_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::IDBStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::IDBFactory::AbortTransactionsAndCompactDatabaseCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBFactory::Name_);
  message.set_method_name("AbortTransactionsAndCompactDatabase");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class IDBFactory_AbortTransactionsForDatabase_ProxyToResponder {
 public:
  static IDBFactory::AbortTransactionsForDatabaseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<IDBFactory_AbortTransactionsForDatabase_ProxyToResponder> proxy(
        new IDBFactory_AbortTransactionsForDatabase_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&IDBFactory_AbortTransactionsForDatabase_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~IDBFactory_AbortTransactionsForDatabase_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  IDBFactory_AbortTransactionsForDatabase_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "IDBFactory::AbortTransactionsForDatabaseCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      IDBStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(IDBFactory_AbortTransactionsForDatabase_ProxyToResponder);
};

bool IDBFactory_AbortTransactionsForDatabase_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::IDBFactory::AbortTransactionsForDatabaseCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data* params =
      reinterpret_cast<
          internal::IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  IDBStatus p_status{};
  IDBFactory_AbortTransactionsForDatabase_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        IDBFactory::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void IDBFactory_AbortTransactionsForDatabase_ProxyToResponder::Run(
    IDBStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kIDBFactory_AbortTransactionsForDatabase_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::IDBStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::IDBFactory::AbortTransactionsForDatabaseCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IDBFactory::Name_);
  message.set_method_name("AbortTransactionsForDatabase");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool IDBFactoryStubDispatch::Accept(
    IDBFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIDBFactory_GetDatabaseInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBFactory::GetDatabaseInfo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBFactory_GetDatabaseInfo_Params_Data* params =
          reinterpret_cast<internal::IDBFactory_GetDatabaseInfo_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBCallbacksAssociatedPtrInfo p_callbacks{};
      IDBFactory_GetDatabaseInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDatabaseInfo(
std::move(p_callbacks));
      return true;
    }
    case internal::kIDBFactory_GetDatabaseNames_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBFactory::GetDatabaseNames",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBFactory_GetDatabaseNames_Params_Data* params =
          reinterpret_cast<internal::IDBFactory_GetDatabaseNames_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBCallbacksAssociatedPtrInfo p_callbacks{};
      IDBFactory_GetDatabaseNames_ParamsDataView input_data_view(params, &serialization_context);
      
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBFactory::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDatabaseNames(
std::move(p_callbacks));
      return true;
    }
    case internal::kIDBFactory_Open_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBFactory::Open",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBFactory_Open_Params_Data* params =
          reinterpret_cast<internal::IDBFactory_Open_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBCallbacksAssociatedPtrInfo p_callbacks{};
      IDBDatabaseCallbacksAssociatedPtrInfo p_database_callbacks{};
      WTF::String p_name{};
      int64_t p_version{};
      IDBTransactionAssociatedRequest p_version_change_transaction_request{};
      int64_t p_transaction_id{};
      IDBFactory_Open_ParamsDataView input_data_view(params, &serialization_context);
      
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      p_database_callbacks =
          input_data_view.TakeDatabaseCallbacks<decltype(p_database_callbacks)>();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_version = input_data_view.version();
      p_version_change_transaction_request =
          input_data_view.TakeVersionChangeTransactionRequest<decltype(p_version_change_transaction_request)>();
      p_transaction_id = input_data_view.transaction_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBFactory::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Open(
std::move(p_callbacks), 
std::move(p_database_callbacks), 
std::move(p_name), 
std::move(p_version), 
std::move(p_version_change_transaction_request), 
std::move(p_transaction_id));
      return true;
    }
    case internal::kIDBFactory_DeleteDatabase_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBFactory::DeleteDatabase",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::IDBFactory_DeleteDatabase_Params_Data* params =
          reinterpret_cast<internal::IDBFactory_DeleteDatabase_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBCallbacksAssociatedPtrInfo p_callbacks{};
      WTF::String p_name{};
      bool p_force_close{};
      IDBFactory_DeleteDatabase_ParamsDataView input_data_view(params, &serialization_context);
      
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_force_close = input_data_view.force_close();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBFactory::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeleteDatabase(
std::move(p_callbacks), 
std::move(p_name), 
std::move(p_force_close));
      return true;
    }
    case internal::kIDBFactory_AbortTransactionsAndCompactDatabase_Name: {
      break;
    }
    case internal::kIDBFactory_AbortTransactionsForDatabase_Name: {
      break;
    }
  }
  return false;
}

// static
bool IDBFactoryStubDispatch::AcceptWithResponder(
    IDBFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIDBFactory_GetDatabaseInfo_Name: {
      break;
    }
    case internal::kIDBFactory_GetDatabaseNames_Name: {
      break;
    }
    case internal::kIDBFactory_Open_Name: {
      break;
    }
    case internal::kIDBFactory_DeleteDatabase_Name: {
      break;
    }
    case internal::kIDBFactory_AbortTransactionsAndCompactDatabase_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBFactory::AbortTransactionsAndCompactDatabase",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data* params =
          reinterpret_cast<
              internal::IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBFactory_AbortTransactionsAndCompactDatabase_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBFactory::Name_, 4, false);
        return false;
      }
      IDBFactory::AbortTransactionsAndCompactDatabaseCallback callback =
          IDBFactory_AbortTransactionsAndCompactDatabase_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AbortTransactionsAndCompactDatabase(std::move(callback));
      return true;
    }
    case internal::kIDBFactory_AbortTransactionsForDatabase_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IDBFactory::AbortTransactionsForDatabase",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::IDBFactory_AbortTransactionsForDatabase_Params_Data* params =
          reinterpret_cast<
              internal::IDBFactory_AbortTransactionsForDatabase_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IDBFactory_AbortTransactionsForDatabase_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IDBFactory::Name_, 5, false);
        return false;
      }
      IDBFactory::AbortTransactionsForDatabaseCallback callback =
          IDBFactory_AbortTransactionsForDatabase_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AbortTransactionsForDatabase(std::move(callback));
      return true;
    }
  }
  return false;
}

bool IDBFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IDBFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kIDBFactory_GetDatabaseInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBFactory_GetDatabaseInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBFactory_GetDatabaseNames_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBFactory_GetDatabaseNames_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBFactory_Open_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBFactory_Open_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBFactory_DeleteDatabase_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBFactory_DeleteDatabase_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBFactory_AbortTransactionsAndCompactDatabase_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBFactory_AbortTransactionsAndCompactDatabase_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBFactory_AbortTransactionsForDatabase_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBFactory_AbortTransactionsForDatabase_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool IDBFactoryResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IDBFactory ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kIDBFactory_AbortTransactionsAndCompactDatabase_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBFactory_AbortTransactionsAndCompactDatabase_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIDBFactory_AbortTransactionsForDatabase_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::IDBFactory_AbortTransactionsForDatabase_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::IDBKey::DataView, ::blink::mojom::blink::IDBKeyPtr>::Read(
    ::blink::mojom::blink::IDBKey::DataView input,
    ::blink::mojom::blink::IDBKeyPtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBKeyPtr result(::blink::mojom::blink::IDBKey::New());
  
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBKeyPath::DataView, ::blink::mojom::blink::IDBKeyPathPtr>::Read(
    ::blink::mojom::blink::IDBKeyPath::DataView input,
    ::blink::mojom::blink::IDBKeyPathPtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBKeyPathPtr result(::blink::mojom::blink::IDBKeyPath::New());
  
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBKeyRange::DataView, ::blink::mojom::blink::IDBKeyRangePtr>::Read(
    ::blink::mojom::blink::IDBKeyRange::DataView input,
    ::blink::mojom::blink::IDBKeyRangePtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBKeyRangePtr result(::blink::mojom::blink::IDBKeyRange::New());
  
      if (!input.ReadLower(&result->lower))
        success = false;
      if (!input.ReadUpper(&result->upper))
        success = false;
      result->lower_open = input.lower_open();
      result->upper_open = input.upper_open();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBIndexMetadata::DataView, ::blink::mojom::blink::IDBIndexMetadataPtr>::Read(
    ::blink::mojom::blink::IDBIndexMetadata::DataView input,
    ::blink::mojom::blink::IDBIndexMetadataPtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBIndexMetadataPtr result(::blink::mojom::blink::IDBIndexMetadata::New());
  
      result->id = input.id();
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadKeyPath(&result->key_path))
        success = false;
      result->unique = input.unique();
      result->multi_entry = input.multi_entry();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBObjectStoreMetadata::DataView, ::blink::mojom::blink::IDBObjectStoreMetadataPtr>::Read(
    ::blink::mojom::blink::IDBObjectStoreMetadata::DataView input,
    ::blink::mojom::blink::IDBObjectStoreMetadataPtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBObjectStoreMetadataPtr result(::blink::mojom::blink::IDBObjectStoreMetadata::New());
  
      result->id = input.id();
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadKeyPath(&result->key_path))
        success = false;
      result->auto_increment = input.auto_increment();
      result->max_index_id = input.max_index_id();
      if (!input.ReadIndexes(&result->indexes))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBDatabaseMetadata::DataView, ::blink::mojom::blink::IDBDatabaseMetadataPtr>::Read(
    ::blink::mojom::blink::IDBDatabaseMetadata::DataView input,
    ::blink::mojom::blink::IDBDatabaseMetadataPtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBDatabaseMetadataPtr result(::blink::mojom::blink::IDBDatabaseMetadata::New());
  
      result->id = input.id();
      if (!input.ReadName(&result->name))
        success = false;
      result->version = input.version();
      result->max_object_store_id = input.max_object_store_id();
      if (!input.ReadObjectStores(&result->object_stores))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBNameAndVersion::DataView, ::blink::mojom::blink::IDBNameAndVersionPtr>::Read(
    ::blink::mojom::blink::IDBNameAndVersion::DataView input,
    ::blink::mojom::blink::IDBNameAndVersionPtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBNameAndVersionPtr result(::blink::mojom::blink::IDBNameAndVersion::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      result->version = input.version();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBIndexKeys::DataView, ::blink::mojom::blink::IDBIndexKeysPtr>::Read(
    ::blink::mojom::blink::IDBIndexKeys::DataView input,
    ::blink::mojom::blink::IDBIndexKeysPtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBIndexKeysPtr result(::blink::mojom::blink::IDBIndexKeys::New());
  
      result->index_id = input.index_id();
      if (!input.ReadIndexKeys(&result->index_keys))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBFileInfo::DataView, ::blink::mojom::blink::IDBFileInfoPtr>::Read(
    ::blink::mojom::blink::IDBFileInfo::DataView input,
    ::blink::mojom::blink::IDBFileInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBFileInfoPtr result(::blink::mojom::blink::IDBFileInfo::New());
  
      if (!input.ReadPath(&result->path))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadLastModified(&result->last_modified))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBBlobInfo::DataView, ::blink::mojom::blink::IDBBlobInfoPtr>::Read(
    ::blink::mojom::blink::IDBBlobInfo::DataView input,
    ::blink::mojom::blink::IDBBlobInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBBlobInfoPtr result(::blink::mojom::blink::IDBBlobInfo::New());
  
      result->blob =
          input.TakeBlob<decltype(result->blob)>();
      if (!input.ReadUuid(&result->uuid))
        success = false;
      if (!input.ReadMimeType(&result->mime_type))
        success = false;
      result->size = input.size();
      if (!input.ReadFile(&result->file))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBValue::DataView, ::blink::mojom::blink::IDBValuePtr>::Read(
    ::blink::mojom::blink::IDBValue::DataView input,
    ::blink::mojom::blink::IDBValuePtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBValuePtr result(::blink::mojom::blink::IDBValue::New());
  
      if (!input.ReadBits(&result->bits))
        success = false;
      if (!input.ReadBlobOrFileInfo(&result->blob_or_file_info))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBReturnValue::DataView, ::blink::mojom::blink::IDBReturnValuePtr>::Read(
    ::blink::mojom::blink::IDBReturnValue::DataView input,
    ::blink::mojom::blink::IDBReturnValuePtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBReturnValuePtr result(::blink::mojom::blink::IDBReturnValue::New());
  
      if (!input.ReadValue(&result->value))
        success = false;
      if (!input.ReadPrimaryKey(&result->primary_key))
        success = false;
      if (!input.ReadKeyPath(&result->key_path))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBObservation::DataView, ::blink::mojom::blink::IDBObservationPtr>::Read(
    ::blink::mojom::blink::IDBObservation::DataView input,
    ::blink::mojom::blink::IDBObservationPtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBObservationPtr result(::blink::mojom::blink::IDBObservation::New());
  
      result->object_store_id = input.object_store_id();
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadKeyRange(&result->key_range))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBObserverTransaction::DataView, ::blink::mojom::blink::IDBObserverTransactionPtr>::Read(
    ::blink::mojom::blink::IDBObserverTransaction::DataView input,
    ::blink::mojom::blink::IDBObserverTransactionPtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBObserverTransactionPtr result(::blink::mojom::blink::IDBObserverTransaction::New());
  
      result->id = input.id();
      if (!input.ReadScope(&result->scope))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBObserverChanges::DataView, ::blink::mojom::blink::IDBObserverChangesPtr>::Read(
    ::blink::mojom::blink::IDBObserverChanges::DataView input,
    ::blink::mojom::blink::IDBObserverChangesPtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBObserverChangesPtr result(::blink::mojom::blink::IDBObserverChanges::New());
  
      if (!input.ReadObservationIndexMap(&result->observation_index_map))
        success = false;
      if (!input.ReadTransactionMap(&result->transaction_map))
        success = false;
      if (!input.ReadObservations(&result->observations))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBError::DataView, ::blink::mojom::blink::IDBErrorPtr>::Read(
    ::blink::mojom::blink::IDBError::DataView input,
    ::blink::mojom::blink::IDBErrorPtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBErrorPtr result(::blink::mojom::blink::IDBError::New());
  
      result->error_code = input.error_code();
      if (!input.ReadErrorMessage(&result->error_message))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::IDBCursorValue::DataView, ::blink::mojom::blink::IDBCursorValuePtr>::Read(
    ::blink::mojom::blink::IDBCursorValue::DataView input,
    ::blink::mojom::blink::IDBCursorValuePtr* output) {
  bool success = true;
  ::blink::mojom::blink::IDBCursorValuePtr result(::blink::mojom::blink::IDBCursorValue::New());
  
      if (!input.ReadKeys(&result->keys))
        success = false;
      if (!input.ReadPrimaryKeys(&result->primary_keys))
        success = false;
      if (!input.ReadValues(&result->values))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::blink::mojom::blink::IDBKeyData::DataView, ::blink::mojom::blink::IDBKeyDataPtr>::Read(
    ::blink::mojom::blink::IDBKeyData::DataView input,
    ::blink::mojom::blink::IDBKeyDataPtr* output) {
  using UnionType = ::blink::mojom::blink::IDBKeyData;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::KEY_ARRAY: {
      WTF::Vector<std::unique_ptr<::blink::IDBKey>> result_key_array;
      if (!input.ReadKeyArray(&result_key_array))
        return false;

      *output = UnionType::NewKeyArray(
          std::move(result_key_array));
      break;
    }
    case Tag::BINARY: {
      WTF::Vector<uint8_t> result_binary;
      if (!input.ReadBinary(&result_binary))
        return false;

      *output = UnionType::NewBinary(
          std::move(result_binary));
      break;
    }
    case Tag::STRING: {
      WTF::String result_string;
      if (!input.ReadString(&result_string))
        return false;

      *output = UnionType::NewString(
          std::move(result_string));
      break;
    }
    case Tag::DATE: {
      *output = UnionType::NewDate(input.date());
      break;
    }
    case Tag::NUMBER: {
      *output = UnionType::NewNumber(input.number());
      break;
    }
    case Tag::OTHER_INVALID: {
      *output = UnionType::NewOtherInvalid(input.other_invalid());
      break;
    }
    case Tag::OTHER_NULL: {
      *output = UnionType::NewOtherNull(input.other_null());
      break;
    }
    default:
      return false;
  }
  return true;
}

// static
bool UnionTraits<::blink::mojom::blink::IDBKeyPathData::DataView, ::blink::mojom::blink::IDBKeyPathDataPtr>::Read(
    ::blink::mojom::blink::IDBKeyPathData::DataView input,
    ::blink::mojom::blink::IDBKeyPathDataPtr* output) {
  using UnionType = ::blink::mojom::blink::IDBKeyPathData;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::STRING: {
      WTF::String result_string;
      if (!input.ReadString(&result_string))
        return false;

      *output = UnionType::NewString(
          std::move(result_string));
      break;
    }
    case Tag::STRING_ARRAY: {
      WTF::Vector<WTF::String> result_string_array;
      if (!input.ReadStringArray(&result_string_array))
        return false;

      *output = UnionType::NewStringArray(
          std::move(result_string_array));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif