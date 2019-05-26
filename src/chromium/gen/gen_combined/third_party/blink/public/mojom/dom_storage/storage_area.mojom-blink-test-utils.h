// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT StorageAreaObserverInterceptorForTesting : public StorageAreaObserver {
  virtual StorageAreaObserver* GetForwardingInterface() = 0;
  void KeyAdded(const WTF::Vector<uint8_t>& key, const WTF::Vector<uint8_t>& value, const WTF::String& source) override;
  void KeyChanged(const WTF::Vector<uint8_t>& key, const WTF::Vector<uint8_t>& new_value, const WTF::Vector<uint8_t>& old_value, const WTF::String& source) override;
  void KeyDeleted(const WTF::Vector<uint8_t>& key, const WTF::Vector<uint8_t>& old_value, const WTF::String& source) override;
  void AllDeleted(const WTF::String& source) override;
  void ShouldSendOldValueOnMutations(bool value) override;
};
class PLATFORM_EXPORT StorageAreaObserverAsyncWaiter {
 public:
  explicit StorageAreaObserverAsyncWaiter(StorageAreaObserver* proxy);
  ~StorageAreaObserverAsyncWaiter();

 private:
  StorageAreaObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(StorageAreaObserverAsyncWaiter);
};


class PLATFORM_EXPORT StorageAreaGetAllCallbackInterceptorForTesting : public StorageAreaGetAllCallback {
  virtual StorageAreaGetAllCallback* GetForwardingInterface() = 0;
  void Complete(bool success) override;
};
class PLATFORM_EXPORT StorageAreaGetAllCallbackAsyncWaiter {
 public:
  explicit StorageAreaGetAllCallbackAsyncWaiter(StorageAreaGetAllCallback* proxy);
  ~StorageAreaGetAllCallbackAsyncWaiter();

 private:
  StorageAreaGetAllCallback* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(StorageAreaGetAllCallbackAsyncWaiter);
};


class PLATFORM_EXPORT StorageAreaInterceptorForTesting : public StorageArea {
  virtual StorageArea* GetForwardingInterface() = 0;
  void AddObserver(StorageAreaObserverAssociatedPtrInfo observer) override;
  void Put(const WTF::Vector<uint8_t>& key, const WTF::Vector<uint8_t>& value, const base::Optional<WTF::Vector<uint8_t>>& client_old_value, const WTF::String& source, PutCallback callback) override;
  void Delete(const WTF::Vector<uint8_t>& key, const base::Optional<WTF::Vector<uint8_t>>& client_old_value, const WTF::String& source, DeleteCallback callback) override;
  void DeleteAll(const WTF::String& source, DeleteAllCallback callback) override;
  void Get(const WTF::Vector<uint8_t>& key, GetCallback callback) override;
  void GetAll(StorageAreaGetAllCallbackAssociatedPtrInfo complete_callback, GetAllCallback callback) override;
};
class PLATFORM_EXPORT StorageAreaAsyncWaiter {
 public:
  explicit StorageAreaAsyncWaiter(StorageArea* proxy);
  ~StorageAreaAsyncWaiter();
  void Put(
      const WTF::Vector<uint8_t>& key, const WTF::Vector<uint8_t>& value, const base::Optional<WTF::Vector<uint8_t>>& client_old_value, const WTF::String& source, bool* out_success);
  void Delete(
      const WTF::Vector<uint8_t>& key, const base::Optional<WTF::Vector<uint8_t>>& client_old_value, const WTF::String& source, bool* out_success);
  void DeleteAll(
      const WTF::String& source, bool* out_success);
  void Get(
      const WTF::Vector<uint8_t>& key, bool* out_success, WTF::Vector<uint8_t>* out_value);
  void GetAll(
      StorageAreaGetAllCallbackAssociatedPtrInfo complete_callback, bool* out_success, WTF::Vector<KeyValuePtr>* out_data);

 private:
  StorageArea* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(StorageAreaAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_BLINK_TEST_UTILS_H_