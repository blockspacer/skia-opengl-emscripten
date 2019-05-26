// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/dom_storage/storage_partition_service.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT StoragePartitionServiceInterceptorForTesting : public StoragePartitionService {
  virtual StoragePartitionService* GetForwardingInterface() = 0;
  void OpenLocalStorage(const url::Origin& origin, ::blink::mojom::StorageAreaRequest area) override;
  void OpenSessionStorage(const std::string& namespace_id, ::blink::mojom::SessionStorageNamespaceRequest session_namespace) override;
};
class BLINK_COMMON_EXPORT StoragePartitionServiceAsyncWaiter {
 public:
  explicit StoragePartitionServiceAsyncWaiter(StoragePartitionService* proxy);
  ~StoragePartitionServiceAsyncWaiter();

 private:
  StoragePartitionService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(StoragePartitionServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_TEST_UTILS_H_