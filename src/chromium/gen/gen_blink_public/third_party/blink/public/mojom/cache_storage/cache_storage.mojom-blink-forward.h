// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_BLINK_FORWARD_H_

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
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class CacheStorageError : int32_t;

enum class OperationType : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_CacheStorageError_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::CacheStorageError> {
  using Hash = blink_mojom_internal_CacheStorageError_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_OperationType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::OperationType> {
  using Hash = blink_mojom_internal_OperationType_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using CacheStorageError = CacheStorageError;  // Alias for definition in the parent namespace.
using OperationType = OperationType;  // Alias for definition in the parent namespace.
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




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_BLINK_FORWARD_H_