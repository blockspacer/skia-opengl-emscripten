// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom-blink-forward.h"
#include "mojo/public/mojom/base/string16.mojom-blink-forward.h"
#include "url/mojom/origin.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/platform/platform_export.h"




namespace blink {
namespace mojom {
namespace blink {

class WorkerContentSettingsProxyProxy;

template <typename ImplRefTraits>
class WorkerContentSettingsProxyStub;

class WorkerContentSettingsProxyRequestValidator;
class WorkerContentSettingsProxyResponseValidator;


class PLATFORM_EXPORT WorkerContentSettingsProxy
    : public WorkerContentSettingsProxyInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = WorkerContentSettingsProxyInterfaceBase;
  using Proxy_ = WorkerContentSettingsProxyProxy;

  template <typename ImplRefTraits>
  using Stub_ = WorkerContentSettingsProxyStub<ImplRefTraits>;

  using RequestValidator_ = WorkerContentSettingsProxyRequestValidator;
  using ResponseValidator_ = WorkerContentSettingsProxyResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAllowIndexedDBMinVersion = 0,
    kAllowCacheStorageMinVersion = 0,
    kRequestFileSystemAccessSyncMinVersion = 0,
  };
  virtual ~WorkerContentSettingsProxy() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool AllowIndexedDB(bool* out_result);

  using AllowIndexedDBCallback = base::OnceCallback<void(bool)>;
  
  virtual void AllowIndexedDB(AllowIndexedDBCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool AllowCacheStorage(bool* out_result);

  using AllowCacheStorageCallback = base::OnceCallback<void(bool)>;
  
  virtual void AllowCacheStorage(AllowCacheStorageCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool RequestFileSystemAccessSync(bool* out_result);

  using RequestFileSystemAccessSyncCallback = base::OnceCallback<void(bool)>;
  
  virtual void RequestFileSystemAccessSync(RequestFileSystemAccessSyncCallback callback) = 0;
};

class PLATFORM_EXPORT WorkerContentSettingsProxyProxy
    : public WorkerContentSettingsProxy {
 public:
  using InterfaceType = WorkerContentSettingsProxy;

  explicit WorkerContentSettingsProxyProxy(mojo::MessageReceiverWithResponder* receiver);
  bool AllowIndexedDB(bool* out_result) final;
  void AllowIndexedDB(AllowIndexedDBCallback callback) final;
  bool AllowCacheStorage(bool* out_result) final;
  void AllowCacheStorage(AllowCacheStorageCallback callback) final;
  bool RequestFileSystemAccessSync(bool* out_result) final;
  void RequestFileSystemAccessSync(RequestFileSystemAccessSyncCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT WorkerContentSettingsProxyStubDispatch {
 public:
  static bool Accept(WorkerContentSettingsProxy* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WorkerContentSettingsProxy* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WorkerContentSettingsProxy>>
class WorkerContentSettingsProxyStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WorkerContentSettingsProxyStub() {}
  ~WorkerContentSettingsProxyStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WorkerContentSettingsProxyStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WorkerContentSettingsProxyStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT WorkerContentSettingsProxyRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT WorkerContentSettingsProxyResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_BLINK_H_