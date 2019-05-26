// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_FORWARD_H_

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
#include "third_party/blink/public/common/common_export.h"




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

enum class CacheStorageError : int32_t;

enum class OperationType : int32_t;
class CacheStorageVerboseError;
using CacheStorageVerboseErrorPtr = mojo::InlinedStructPtr<CacheStorageVerboseError>;

class CacheQueryOptions;
using CacheQueryOptionsPtr = mojo::InlinedStructPtr<CacheQueryOptions>;

class MultiCacheQueryOptions;
using MultiCacheQueryOptionsPtr = mojo::StructPtr<MultiCacheQueryOptions>;

class BatchOperation;
using BatchOperationPtr = mojo::StructPtr<BatchOperation>;

class OpenResult;

typedef mojo::StructPtr<OpenResult> OpenResultPtr;

class MatchResult;

typedef mojo::StructPtr<MatchResult> MatchResultPtr;

class MatchAllResult;

typedef mojo::StructPtr<MatchAllResult> MatchAllResultPtr;

class CacheKeysResult;

typedef mojo::StructPtr<CacheKeysResult> CacheKeysResultPtr;

class CacheStorageCache;
using CacheStorageCachePtr = mojo::InterfacePtr<CacheStorageCache>;
using CacheStorageCachePtrInfo = mojo::InterfacePtrInfo<CacheStorageCache>;
using ThreadSafeCacheStorageCachePtr =
    mojo::ThreadSafeInterfacePtr<CacheStorageCache>;
using CacheStorageCacheRequest = mojo::InterfaceRequest<CacheStorageCache>;
using CacheStorageCacheAssociatedPtr =
    mojo::AssociatedInterfacePtr<CacheStorageCache>;
using ThreadSafeCacheStorageCacheAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CacheStorageCache>;
using CacheStorageCacheAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CacheStorageCache>;
using CacheStorageCacheAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CacheStorageCache>;

class CacheStorage;
using CacheStoragePtr = mojo::InterfacePtr<CacheStorage>;
using CacheStoragePtrInfo = mojo::InterfacePtrInfo<CacheStorage>;
using ThreadSafeCacheStoragePtr =
    mojo::ThreadSafeInterfacePtr<CacheStorage>;
using CacheStorageRequest = mojo::InterfaceRequest<CacheStorage>;
using CacheStorageAssociatedPtr =
    mojo::AssociatedInterfacePtr<CacheStorage>;
using ThreadSafeCacheStorageAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CacheStorage>;
using CacheStorageAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CacheStorage>;
using CacheStorageAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CacheStorage>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_FORWARD_H_