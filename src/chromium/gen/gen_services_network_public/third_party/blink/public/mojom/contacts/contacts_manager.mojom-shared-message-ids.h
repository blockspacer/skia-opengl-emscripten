// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1880961442 value is based on sha256(salt + "ContactsManager1").
constexpr uint32_t kContactsManager_Select_Name = 1880961442;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_