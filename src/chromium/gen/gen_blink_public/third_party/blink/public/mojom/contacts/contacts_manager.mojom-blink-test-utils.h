// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT ContactsManagerInterceptorForTesting : public ContactsManager {
  virtual ContactsManager* GetForwardingInterface() = 0;
  void Select(bool multiple, bool include_names, bool include_emails, bool include_tel, SelectCallback callback) override;
};
class PLATFORM_EXPORT ContactsManagerAsyncWaiter {
 public:
  explicit ContactsManagerAsyncWaiter(ContactsManager* proxy);
  ~ContactsManagerAsyncWaiter();
  void Select(
      bool multiple, bool include_names, bool include_emails, bool include_tel, base::Optional<WTF::Vector<ContactInfoPtr>>* out_contacts);

 private:
  ContactsManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ContactsManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_BLINK_TEST_UTILS_H_