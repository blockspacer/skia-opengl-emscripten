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


#include "third_party/blink/public/mojom/remote_objects/remote_objects.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void RemoteObjectHostInterceptorForTesting::GetObject(int32_t object_id, RemoteObjectRequest request) {
  GetForwardingInterface()->GetObject(std::move(object_id), std::move(request));
}
void RemoteObjectHostInterceptorForTesting::ReleaseObject(int32_t object_id) {
  GetForwardingInterface()->ReleaseObject(std::move(object_id));
}
RemoteObjectHostAsyncWaiter::RemoteObjectHostAsyncWaiter(
    RemoteObjectHost* proxy) : proxy_(proxy) {}

RemoteObjectHostAsyncWaiter::~RemoteObjectHostAsyncWaiter() = default;




void RemoteObjectInterceptorForTesting::HasMethod(const WTF::String& name, HasMethodCallback callback) {
  GetForwardingInterface()->HasMethod(std::move(name), std::move(callback));
}
void RemoteObjectInterceptorForTesting::GetMethods(GetMethodsCallback callback) {
  GetForwardingInterface()->GetMethods(std::move(callback));
}
void RemoteObjectInterceptorForTesting::InvokeMethod(const WTF::String& name, WTF::Vector<RemoteInvocationArgumentPtr> arguments, InvokeMethodCallback callback) {
  GetForwardingInterface()->InvokeMethod(std::move(name), std::move(arguments), std::move(callback));
}
RemoteObjectAsyncWaiter::RemoteObjectAsyncWaiter(
    RemoteObject* proxy) : proxy_(proxy) {}

RemoteObjectAsyncWaiter::~RemoteObjectAsyncWaiter() = default;

void RemoteObjectAsyncWaiter::HasMethod(
    const WTF::String& name, bool* out_method_exists) {
  base::RunLoop loop;
  proxy_->HasMethod(std::move(name),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_method_exists
,
             bool method_exists) {*out_method_exists = std::move(method_exists);
            loop->Quit();
          },
          &loop,
          out_method_exists));
  loop.Run();
}
void RemoteObjectAsyncWaiter::GetMethods(
    WTF::Vector<WTF::String>* out_method_names) {
  base::RunLoop loop;
  proxy_->GetMethods(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<WTF::String>* out_method_names
,
             const WTF::Vector<WTF::String>& method_names) {*out_method_names = std::move(method_names);
            loop->Quit();
          },
          &loop,
          out_method_names));
  loop.Run();
}
void RemoteObjectAsyncWaiter::InvokeMethod(
    const WTF::String& name, WTF::Vector<RemoteInvocationArgumentPtr> arguments, RemoteInvocationResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->InvokeMethod(std::move(name),std::move(arguments),
      base::BindOnce(
          [](base::RunLoop* loop,
             RemoteInvocationResultPtr* out_result
,
             RemoteInvocationResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif