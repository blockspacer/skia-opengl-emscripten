// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/credentialmanager/credential_manager.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT CredentialManagerInterceptorForTesting : public CredentialManager {
  virtual CredentialManager* GetForwardingInterface() = 0;
  void Store(const password_manager::CredentialInfo& credential, StoreCallback callback) override;
  void PreventSilentAccess(PreventSilentAccessCallback callback) override;
  void Get(password_manager::CredentialMediationRequirement mediation, bool include_passwords, const std::vector<GURL>& federations, GetCallback callback) override;
};
class BLINK_COMMON_EXPORT CredentialManagerAsyncWaiter {
 public:
  explicit CredentialManagerAsyncWaiter(CredentialManager* proxy);
  ~CredentialManagerAsyncWaiter();
  void Store(
      const password_manager::CredentialInfo& credential);
  void PreventSilentAccess(
      );
  void Get(
      password_manager::CredentialMediationRequirement mediation, bool include_passwords, const std::vector<GURL>& federations, password_manager::CredentialManagerError* out_error, base::Optional<password_manager::CredentialInfo>* out_credential);

 private:
  CredentialManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CredentialManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_TEST_UTILS_H_