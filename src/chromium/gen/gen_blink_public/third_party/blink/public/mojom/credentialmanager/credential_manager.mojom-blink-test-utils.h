// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/credentialmanager/credential_manager.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT CredentialManagerInterceptorForTesting : public CredentialManager {
  virtual CredentialManager* GetForwardingInterface() = 0;
  void Store(CredentialInfoPtr credential, StoreCallback callback) override;
  void PreventSilentAccess(PreventSilentAccessCallback callback) override;
  void Get(CredentialMediationRequirement mediation, bool include_passwords, const WTF::Vector<::blink::KURL>& federations, GetCallback callback) override;
};
class PLATFORM_EXPORT CredentialManagerAsyncWaiter {
 public:
  explicit CredentialManagerAsyncWaiter(CredentialManager* proxy);
  ~CredentialManagerAsyncWaiter();
  void Store(
      CredentialInfoPtr credential);
  void PreventSilentAccess(
      );
  void Get(
      CredentialMediationRequirement mediation, bool include_passwords, const WTF::Vector<::blink::KURL>& federations, CredentialManagerError* out_error, CredentialInfoPtr* out_credential);

 private:
  CredentialManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CredentialManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_BLINK_TEST_UTILS_H_