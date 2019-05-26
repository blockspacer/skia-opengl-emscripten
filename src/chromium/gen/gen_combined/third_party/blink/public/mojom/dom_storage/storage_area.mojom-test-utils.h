// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT StorageAreaObserverInterceptorForTesting : public StorageAreaObserver {
  virtual StorageAreaObserver* GetForwardingInterface() = 0;
  void KeyAdded(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const std::string& source) override;
  void KeyChanged(const std::vector<uint8_t>& key, const std::vector<uint8_t>& new_value, const std::vector<uint8_t>& old_value, const std::string& source) override;
  void KeyDeleted(const std::vector<uint8_t>& key, const std::vector<uint8_t>& old_value, const std::string& source) override;
  void AllDeleted(const std::string& source) override;
  void ShouldSendOldValueOnMutations(bool value) override;
};
class BLINK_COMMON_EXPORT StorageAreaObserverAsyncWaiter {
 public:
  explicit StorageAreaObserverAsyncWaiter(StorageAreaObserver* proxy);
  ~StorageAreaObserverAsyncWaiter();

 private:
  StorageAreaObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(StorageAreaObserverAsyncWaiter);
};


class BLINK_COMMON_EXPORT StorageAreaGetAllCallbackInterceptorForTesting : public StorageAreaGetAllCallback {
  virtual StorageAreaGetAllCallback* GetForwardingInterface() = 0;
  void Complete(bool success) override;
};
class BLINK_COMMON_EXPORT StorageAreaGetAllCallbackAsyncWaiter {
 public:
  explicit StorageAreaGetAllCallbackAsyncWaiter(StorageAreaGetAllCallback* proxy);
  ~StorageAreaGetAllCallbackAsyncWaiter();

 private:
  StorageAreaGetAllCallback* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(StorageAreaGetAllCallbackAsyncWaiter);
};


class BLINK_COMMON_EXPORT StorageAreaInterceptorForTesting : public StorageArea {
  virtual StorageArea* GetForwardingInterface() = 0;
  void AddObserver(StorageAreaObserverAssociatedPtrInfo observer) override;
  void Put(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, PutCallback callback) override;
  void Delete(const std::vector<uint8_t>& key, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, DeleteCallback callback) override;
  void DeleteAll(const std::string& source, DeleteAllCallback callback) override;
  void Get(const std::vector<uint8_t>& key, GetCallback callback) override;
  void GetAll(StorageAreaGetAllCallbackAssociatedPtrInfo complete_callback, GetAllCallback callback) override;
};
class BLINK_COMMON_EXPORT StorageAreaAsyncWaiter {
 public:
  explicit StorageAreaAsyncWaiter(StorageArea* proxy);
  ~StorageAreaAsyncWaiter();
  void Put(
      const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, bool* out_success);
  void Delete(
      const std::vector<uint8_t>& key, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, bool* out_success);
  void DeleteAll(
      const std::string& source, bool* out_success);
  void Get(
      const std::vector<uint8_t>& key, bool* out_success, std::vector<uint8_t>* out_value);
  void GetAll(
      StorageAreaGetAllCallbackAssociatedPtrInfo complete_callback, bool* out_success, std::vector<KeyValuePtr>* out_data);

 private:
  StorageArea* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(StorageAreaAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_TEST_UTILS_H_