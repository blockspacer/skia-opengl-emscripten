// Copyright 2019 The Chromium Authors. All rights reserved.
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


#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_JUMBO_H_
#endif


namespace blink {
namespace mojom {


void ContactsManagerInterceptorForTesting::Select(bool multiple, bool include_names, bool include_emails, bool include_tel, SelectCallback callback) {
  GetForwardingInterface()->Select(std::move(multiple), std::move(include_names), std::move(include_emails), std::move(include_tel), std::move(callback));
}
ContactsManagerAsyncWaiter::ContactsManagerAsyncWaiter(
    ContactsManager* proxy) : proxy_(proxy) {}

ContactsManagerAsyncWaiter::~ContactsManagerAsyncWaiter() = default;

void ContactsManagerAsyncWaiter::Select(
    bool multiple, bool include_names, bool include_emails, bool include_tel, base::Optional<std::vector<ContactInfoPtr>>* out_contacts) {
  base::RunLoop loop;
  proxy_->Select(std::move(multiple),std::move(include_names),std::move(include_emails),std::move(include_tel),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<std::vector<ContactInfoPtr>>* out_contacts
,
             base::Optional<std::vector<ContactInfoPtr>> contacts) {*out_contacts = std::move(contacts);
            loop->Quit();
          },
          &loop,
          out_contacts));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif