// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_FORWARD_H_
#define COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_FORWARD_H_

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




namespace leveldb {
namespace mojom {
class BatchedOperationDataView;

class KeyValueDataView;

class OpenOptionsDataView;


enum class DatabaseError : int32_t;

enum class BatchOperationType : int32_t;

enum class SharedReadCache : int32_t;
class BatchedOperation;
using BatchedOperationPtr = mojo::StructPtr<BatchedOperation>;

class KeyValue;
using KeyValuePtr = mojo::StructPtr<KeyValue>;

class OpenOptions;
using OpenOptionsPtr = mojo::StructPtr<OpenOptions>;

class LevelDBService;
using LevelDBServicePtr = mojo::InterfacePtr<LevelDBService>;
using LevelDBServicePtrInfo = mojo::InterfacePtrInfo<LevelDBService>;
using ThreadSafeLevelDBServicePtr =
    mojo::ThreadSafeInterfacePtr<LevelDBService>;
using LevelDBServiceRequest = mojo::InterfaceRequest<LevelDBService>;
using LevelDBServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<LevelDBService>;
using ThreadSafeLevelDBServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<LevelDBService>;
using LevelDBServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LevelDBService>;
using LevelDBServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LevelDBService>;

class LevelDBDatabase;
using LevelDBDatabasePtr = mojo::InterfacePtr<LevelDBDatabase>;
using LevelDBDatabasePtrInfo = mojo::InterfacePtrInfo<LevelDBDatabase>;
using ThreadSafeLevelDBDatabasePtr =
    mojo::ThreadSafeInterfacePtr<LevelDBDatabase>;
using LevelDBDatabaseRequest = mojo::InterfaceRequest<LevelDBDatabase>;
using LevelDBDatabaseAssociatedPtr =
    mojo::AssociatedInterfacePtr<LevelDBDatabase>;
using ThreadSafeLevelDBDatabaseAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<LevelDBDatabase>;
using LevelDBDatabaseAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LevelDBDatabase>;
using LevelDBDatabaseAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LevelDBDatabase>;




}  // namespace mojom
}  // namespace leveldb
#include "third_party/leveldatabase/env_chromium.h"

#endif  // COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_FORWARD_H_