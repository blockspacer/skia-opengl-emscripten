// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/webauthn/virtual_authenticator.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace test {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT VirtualAuthenticatorInterceptorForTesting : public VirtualAuthenticator {
  virtual VirtualAuthenticator* GetForwardingInterface() = 0;
  void GetUniqueId(GetUniqueIdCallback callback) override;
  void AddRegistration(RegisteredKeyPtr key, AddRegistrationCallback callback) override;
  void GetRegistrations(GetRegistrationsCallback callback) override;
  void ClearRegistrations(ClearRegistrationsCallback callback) override;
  void SetUserPresence(bool present, SetUserPresenceCallback callback) override;
  void GetUserPresence(GetUserPresenceCallback callback) override;
};
class PLATFORM_EXPORT VirtualAuthenticatorAsyncWaiter {
 public:
  explicit VirtualAuthenticatorAsyncWaiter(VirtualAuthenticator* proxy);
  ~VirtualAuthenticatorAsyncWaiter();
  void GetUniqueId(
      WTF::String* out_id);
  void AddRegistration(
      RegisteredKeyPtr key, bool* out_added);
  void GetRegistrations(
      WTF::Vector<RegisteredKeyPtr>* out_keys);
  void ClearRegistrations(
      );
  void SetUserPresence(
      bool present);
  void GetUserPresence(
      bool* out_present);

 private:
  VirtualAuthenticator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticatorAsyncWaiter);
};


class PLATFORM_EXPORT VirtualAuthenticatorManagerInterceptorForTesting : public VirtualAuthenticatorManager {
  virtual VirtualAuthenticatorManager* GetForwardingInterface() = 0;
  void CreateAuthenticator(VirtualAuthenticatorOptionsPtr options, CreateAuthenticatorCallback callback) override;
  void GetAuthenticators(GetAuthenticatorsCallback callback) override;
  void RemoveAuthenticator(const WTF::String& id, RemoveAuthenticatorCallback callback) override;
  void ClearAuthenticators(ClearAuthenticatorsCallback callback) override;
};
class PLATFORM_EXPORT VirtualAuthenticatorManagerAsyncWaiter {
 public:
  explicit VirtualAuthenticatorManagerAsyncWaiter(VirtualAuthenticatorManager* proxy);
  ~VirtualAuthenticatorManagerAsyncWaiter();
  void CreateAuthenticator(
      VirtualAuthenticatorOptionsPtr options, VirtualAuthenticatorPtr* out_authenticator);
  void GetAuthenticators(
      WTF::Vector<VirtualAuthenticatorPtrInfo>* out_authenticators);
  void RemoveAuthenticator(
      const WTF::String& id, bool* out_removed);
  void ClearAuthenticators(
      );

 private:
  VirtualAuthenticatorManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VirtualAuthenticatorManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace test
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_BLINK_TEST_UTILS_H_