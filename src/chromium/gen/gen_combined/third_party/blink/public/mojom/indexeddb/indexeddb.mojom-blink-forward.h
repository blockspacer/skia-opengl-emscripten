// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/modules/modules_export.h"


namespace blink {
namespace mojom {

enum class IDBCursorDirection : int32_t;

enum class IDBDataLoss : int32_t;

enum class IDBKeyType : int32_t;

enum class IDBKeyPathType : int32_t;

enum class IDBOperationType : int32_t;

enum class IDBPutMode : int32_t;

enum class IDBTaskType : int32_t;

enum class IDBTransactionMode : int32_t;

enum class IDBStatus : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_IDBCursorDirection_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::IDBCursorDirection> {
  using Hash = blink_mojom_internal_IDBCursorDirection_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_IDBDataLoss_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::IDBDataLoss> {
  using Hash = blink_mojom_internal_IDBDataLoss_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_IDBKeyType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::IDBKeyType> {
  using Hash = blink_mojom_internal_IDBKeyType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_IDBKeyPathType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::IDBKeyPathType> {
  using Hash = blink_mojom_internal_IDBKeyPathType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_IDBOperationType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::IDBOperationType> {
  using Hash = blink_mojom_internal_IDBOperationType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_IDBPutMode_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::IDBPutMode> {
  using Hash = blink_mojom_internal_IDBPutMode_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_IDBTaskType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::IDBTaskType> {
  using Hash = blink_mojom_internal_IDBTaskType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_IDBTransactionMode_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::IDBTransactionMode> {
  using Hash = blink_mojom_internal_IDBTransactionMode_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_IDBStatus_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::IDBStatus> {
  using Hash = blink_mojom_internal_IDBStatus_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using IDBCursorDirection = IDBCursorDirection;  // Alias for definition in the parent namespace.
using IDBDataLoss = IDBDataLoss;  // Alias for definition in the parent namespace.
using IDBKeyType = IDBKeyType;  // Alias for definition in the parent namespace.
using IDBKeyPathType = IDBKeyPathType;  // Alias for definition in the parent namespace.
using IDBOperationType = IDBOperationType;  // Alias for definition in the parent namespace.
using IDBPutMode = IDBPutMode;  // Alias for definition in the parent namespace.
using IDBTaskType = IDBTaskType;  // Alias for definition in the parent namespace.
using IDBTransactionMode = IDBTransactionMode;  // Alias for definition in the parent namespace.
using IDBStatus = IDBStatus;  // Alias for definition in the parent namespace.

constexpr int32_t kIDBMaxMessageSize = 134217728;

constexpr int32_t kIDBMaxMessageOverhead = 1048576;
class IDBKey;
using IDBKeyPtr = mojo::StructPtr<IDBKey>;

class IDBKeyPath;
using IDBKeyPathPtr = mojo::StructPtr<IDBKeyPath>;

class IDBKeyRange;
using IDBKeyRangePtr = mojo::StructPtr<IDBKeyRange>;

class IDBIndexMetadata;
using IDBIndexMetadataPtr = mojo::StructPtr<IDBIndexMetadata>;

class IDBObjectStoreMetadata;
using IDBObjectStoreMetadataPtr = mojo::StructPtr<IDBObjectStoreMetadata>;

class IDBDatabaseMetadata;
using IDBDatabaseMetadataPtr = mojo::StructPtr<IDBDatabaseMetadata>;

class IDBNameAndVersion;
using IDBNameAndVersionPtr = mojo::StructPtr<IDBNameAndVersion>;

class IDBIndexKeys;
using IDBIndexKeysPtr = mojo::StructPtr<IDBIndexKeys>;

class IDBFileInfo;
using IDBFileInfoPtr = mojo::StructPtr<IDBFileInfo>;

class IDBBlobInfo;
using IDBBlobInfoPtr = mojo::StructPtr<IDBBlobInfo>;

class IDBValue;
using IDBValuePtr = mojo::StructPtr<IDBValue>;

class IDBReturnValue;
using IDBReturnValuePtr = mojo::StructPtr<IDBReturnValue>;

class IDBObservation;
using IDBObservationPtr = mojo::StructPtr<IDBObservation>;

class IDBObserverTransaction;
using IDBObserverTransactionPtr = mojo::StructPtr<IDBObserverTransaction>;

class IDBObserverChanges;
using IDBObserverChangesPtr = mojo::StructPtr<IDBObserverChanges>;

class IDBError;
using IDBErrorPtr = mojo::StructPtr<IDBError>;

class IDBCursorValue;
using IDBCursorValuePtr = mojo::StructPtr<IDBCursorValue>;

class IDBKeyData;

typedef mojo::StructPtr<IDBKeyData> IDBKeyDataPtr;

class IDBKeyPathData;

typedef mojo::StructPtr<IDBKeyPathData> IDBKeyPathDataPtr;

class IDBCallbacks;
using IDBCallbacksPtr = mojo::InterfacePtr<IDBCallbacks>;
using IDBCallbacksPtrInfo = mojo::InterfacePtrInfo<IDBCallbacks>;
using ThreadSafeIDBCallbacksPtr =
    mojo::ThreadSafeInterfacePtr<IDBCallbacks>;
using IDBCallbacksRequest = mojo::InterfaceRequest<IDBCallbacks>;
using IDBCallbacksAssociatedPtr =
    mojo::AssociatedInterfacePtr<IDBCallbacks>;
using ThreadSafeIDBCallbacksAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IDBCallbacks>;
using IDBCallbacksAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IDBCallbacks>;
using IDBCallbacksAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IDBCallbacks>;

class IDBDatabaseCallbacks;
using IDBDatabaseCallbacksPtr = mojo::InterfacePtr<IDBDatabaseCallbacks>;
using IDBDatabaseCallbacksPtrInfo = mojo::InterfacePtrInfo<IDBDatabaseCallbacks>;
using ThreadSafeIDBDatabaseCallbacksPtr =
    mojo::ThreadSafeInterfacePtr<IDBDatabaseCallbacks>;
using IDBDatabaseCallbacksRequest = mojo::InterfaceRequest<IDBDatabaseCallbacks>;
using IDBDatabaseCallbacksAssociatedPtr =
    mojo::AssociatedInterfacePtr<IDBDatabaseCallbacks>;
using ThreadSafeIDBDatabaseCallbacksAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IDBDatabaseCallbacks>;
using IDBDatabaseCallbacksAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IDBDatabaseCallbacks>;
using IDBDatabaseCallbacksAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IDBDatabaseCallbacks>;

class IDBCursor;
using IDBCursorPtr = mojo::InterfacePtr<IDBCursor>;
using IDBCursorPtrInfo = mojo::InterfacePtrInfo<IDBCursor>;
using ThreadSafeIDBCursorPtr =
    mojo::ThreadSafeInterfacePtr<IDBCursor>;
using IDBCursorRequest = mojo::InterfaceRequest<IDBCursor>;
using IDBCursorAssociatedPtr =
    mojo::AssociatedInterfacePtr<IDBCursor>;
using ThreadSafeIDBCursorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IDBCursor>;
using IDBCursorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IDBCursor>;
using IDBCursorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IDBCursor>;

class IDBTransaction;
using IDBTransactionPtr = mojo::InterfacePtr<IDBTransaction>;
using IDBTransactionPtrInfo = mojo::InterfacePtrInfo<IDBTransaction>;
using ThreadSafeIDBTransactionPtr =
    mojo::ThreadSafeInterfacePtr<IDBTransaction>;
using IDBTransactionRequest = mojo::InterfaceRequest<IDBTransaction>;
using IDBTransactionAssociatedPtr =
    mojo::AssociatedInterfacePtr<IDBTransaction>;
using ThreadSafeIDBTransactionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IDBTransaction>;
using IDBTransactionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IDBTransaction>;
using IDBTransactionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IDBTransaction>;

class IDBDatabase;
using IDBDatabasePtr = mojo::InterfacePtr<IDBDatabase>;
using IDBDatabasePtrInfo = mojo::InterfacePtrInfo<IDBDatabase>;
using ThreadSafeIDBDatabasePtr =
    mojo::ThreadSafeInterfacePtr<IDBDatabase>;
using IDBDatabaseRequest = mojo::InterfaceRequest<IDBDatabase>;
using IDBDatabaseAssociatedPtr =
    mojo::AssociatedInterfacePtr<IDBDatabase>;
using ThreadSafeIDBDatabaseAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IDBDatabase>;
using IDBDatabaseAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IDBDatabase>;
using IDBDatabaseAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IDBDatabase>;

class IDBFactory;
using IDBFactoryPtr = mojo::InterfacePtr<IDBFactory>;
using IDBFactoryPtrInfo = mojo::InterfacePtrInfo<IDBFactory>;
using ThreadSafeIDBFactoryPtr =
    mojo::ThreadSafeInterfacePtr<IDBFactory>;
using IDBFactoryRequest = mojo::InterfaceRequest<IDBFactory>;
using IDBFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<IDBFactory>;
using ThreadSafeIDBFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IDBFactory>;
using IDBFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IDBFactory>;
using IDBFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IDBFactory>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink
#include "third_party/blink/public/common/indexeddb/web_idb_types.h"
#include "third_party/blink/renderer/modules/indexeddb/idb_key_path.h"
#include "third_party/blink/renderer/modules/indexeddb/idb_key_range.h"
#include "third_party/blink/renderer/modules/indexeddb/idb_metadata.h"
#include "third_party/blink/renderer/modules/indexeddb/idb_name_and_version.h"
#include "third_party/blink/renderer/modules/indexeddb/idb_value.h"

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_BLINK_FORWARD_H_