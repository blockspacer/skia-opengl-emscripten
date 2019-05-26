// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/remote_objects/remote_objects.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT RemoteObjectHostInterceptorForTesting : public RemoteObjectHost {
  virtual RemoteObjectHost* GetForwardingInterface() = 0;
  void GetObject(int32_t object_id, RemoteObjectRequest request) override;
  void ReleaseObject(int32_t object_id) override;
};
class BLINK_COMMON_EXPORT RemoteObjectHostAsyncWaiter {
 public:
  explicit RemoteObjectHostAsyncWaiter(RemoteObjectHost* proxy);
  ~RemoteObjectHostAsyncWaiter();

 private:
  RemoteObjectHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RemoteObjectHostAsyncWaiter);
};


class BLINK_COMMON_EXPORT RemoteObjectInterceptorForTesting : public RemoteObject {
  virtual RemoteObject* GetForwardingInterface() = 0;
  void HasMethod(const std::string& name, HasMethodCallback callback) override;
  void GetMethods(GetMethodsCallback callback) override;
  void InvokeMethod(const std::string& name, std::vector<RemoteInvocationArgumentPtr> arguments, InvokeMethodCallback callback) override;
};
class BLINK_COMMON_EXPORT RemoteObjectAsyncWaiter {
 public:
  explicit RemoteObjectAsyncWaiter(RemoteObject* proxy);
  ~RemoteObjectAsyncWaiter();
  void HasMethod(
      const std::string& name, bool* out_method_exists);
  void GetMethods(
      std::vector<std::string>* out_method_names);
  void InvokeMethod(
      const std::string& name, std::vector<RemoteInvocationArgumentPtr> arguments, RemoteInvocationResultPtr* out_result);

 private:
  RemoteObject* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RemoteObjectAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_TEST_UTILS_H_