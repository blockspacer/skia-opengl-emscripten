// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ContactsManagerInterceptorForTesting : public ContactsManager {
  virtual ContactsManager* GetForwardingInterface() = 0;
  void Select(bool multiple, bool include_names, bool include_emails, bool include_tel, SelectCallback callback) override;
};
class BLINK_COMMON_EXPORT ContactsManagerAsyncWaiter {
 public:
  explicit ContactsManagerAsyncWaiter(ContactsManager* proxy);
  ~ContactsManagerAsyncWaiter();
  void Select(
      bool multiple, bool include_names, bool include_emails, bool include_tel, base::Optional<std::vector<ContactInfoPtr>>* out_contacts);

 private:
  ContactsManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ContactsManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_TEST_UTILS_H_