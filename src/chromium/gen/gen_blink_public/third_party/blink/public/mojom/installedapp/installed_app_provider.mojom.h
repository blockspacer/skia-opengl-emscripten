// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_H_

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
#include "third_party/blink/public/mojom/installedapp/installed_app_provider.mojom-shared.h"
#include "third_party/blink/public/mojom/installedapp/installed_app_provider.mojom-forward.h"
#include "third_party/blink/public/mojom/installedapp/related_application.mojom-forward.h"
#include <string>
#include <vector>

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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class InstalledAppProviderProxy;

template <typename ImplRefTraits>
class InstalledAppProviderStub;

class InstalledAppProviderRequestValidator;
class InstalledAppProviderResponseValidator;


class BLINK_COMMON_EXPORT InstalledAppProvider
    : public InstalledAppProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = InstalledAppProviderInterfaceBase;
  using Proxy_ = InstalledAppProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = InstalledAppProviderStub<ImplRefTraits>;

  using RequestValidator_ = InstalledAppProviderRequestValidator;
  using ResponseValidator_ = InstalledAppProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kFilterInstalledAppsMinVersion = 0,
  };
  virtual ~InstalledAppProvider() {}


  using FilterInstalledAppsCallback = base::OnceCallback<void(std::vector<::blink::mojom::RelatedApplicationPtr>)>;
  
  virtual void FilterInstalledApps(std::vector<::blink::mojom::RelatedApplicationPtr> related_apps, FilterInstalledAppsCallback callback) = 0;
};

class BLINK_COMMON_EXPORT InstalledAppProviderProxy
    : public InstalledAppProvider {
 public:
  using InterfaceType = InstalledAppProvider;

  explicit InstalledAppProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void FilterInstalledApps(std::vector<::blink::mojom::RelatedApplicationPtr> related_apps, FilterInstalledAppsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT InstalledAppProviderStubDispatch {
 public:
  static bool Accept(InstalledAppProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InstalledAppProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InstalledAppProvider>>
class InstalledAppProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InstalledAppProviderStub() {}
  ~InstalledAppProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InstalledAppProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InstalledAppProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT InstalledAppProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT InstalledAppProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_H_