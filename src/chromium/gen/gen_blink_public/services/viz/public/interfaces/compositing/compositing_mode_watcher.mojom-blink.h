// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_BLINK_H_

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
#include "services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom-blink-forward.h"

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




namespace viz {
namespace mojom {
namespace blink {

class CompositingModeWatcherProxy;

template <typename ImplRefTraits>
class CompositingModeWatcherStub;

class CompositingModeWatcherRequestValidator;


class  CompositingModeWatcher
    : public CompositingModeWatcherInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CompositingModeWatcherInterfaceBase;
  using Proxy_ = CompositingModeWatcherProxy;

  template <typename ImplRefTraits>
  using Stub_ = CompositingModeWatcherStub<ImplRefTraits>;

  using RequestValidator_ = CompositingModeWatcherRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCompositingModeFallbackToSoftwareMinVersion = 0,
  };
  virtual ~CompositingModeWatcher() {}

  
  virtual void CompositingModeFallbackToSoftware() = 0;
};

class CompositingModeReporterProxy;

template <typename ImplRefTraits>
class CompositingModeReporterStub;

class CompositingModeReporterRequestValidator;


class  CompositingModeReporter
    : public CompositingModeReporterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CompositingModeReporterInterfaceBase;
  using Proxy_ = CompositingModeReporterProxy;

  template <typename ImplRefTraits>
  using Stub_ = CompositingModeReporterStub<ImplRefTraits>;

  using RequestValidator_ = CompositingModeReporterRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddCompositingModeWatcherMinVersion = 0,
  };
  virtual ~CompositingModeReporter() {}

  
  virtual void AddCompositingModeWatcher(CompositingModeWatcherPtr watcher) = 0;
};

class  CompositingModeWatcherProxy
    : public CompositingModeWatcher {
 public:
  using InterfaceType = CompositingModeWatcher;

  explicit CompositingModeWatcherProxy(mojo::MessageReceiverWithResponder* receiver);
  void CompositingModeFallbackToSoftware() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  CompositingModeReporterProxy
    : public CompositingModeReporter {
 public:
  using InterfaceType = CompositingModeReporter;

  explicit CompositingModeReporterProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddCompositingModeWatcher(CompositingModeWatcherPtr watcher) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CompositingModeWatcherStubDispatch {
 public:
  static bool Accept(CompositingModeWatcher* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CompositingModeWatcher* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CompositingModeWatcher>>
class CompositingModeWatcherStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CompositingModeWatcherStub() {}
  ~CompositingModeWatcherStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CompositingModeWatcherStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CompositingModeWatcherStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CompositingModeReporterStubDispatch {
 public:
  static bool Accept(CompositingModeReporter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CompositingModeReporter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CompositingModeReporter>>
class CompositingModeReporterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CompositingModeReporterStub() {}
  ~CompositingModeReporterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CompositingModeReporterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CompositingModeReporterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CompositingModeWatcherRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CompositingModeReporterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_BLINK_H_