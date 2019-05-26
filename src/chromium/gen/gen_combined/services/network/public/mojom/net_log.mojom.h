// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_H_

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
#include "services/network/public/mojom/net_log.mojom-shared.h"
#include "services/network/public/mojom/net_log.mojom-forward.h"
#include "mojo/public/mojom/base/file.mojom-forward.h"
#include "mojo/public/mojom/base/values.mojom-forward.h"
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




namespace network {
namespace mojom {

class NetLogExporterProxy;

template <typename ImplRefTraits>
class NetLogExporterStub;

class NetLogExporterRequestValidator;
class NetLogExporterResponseValidator;


class  NetLogExporter
    : public NetLogExporterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = NetLogExporterInterfaceBase;
  using Proxy_ = NetLogExporterProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetLogExporterStub<ImplRefTraits>;

  using RequestValidator_ = NetLogExporterRequestValidator;
  using ResponseValidator_ = NetLogExporterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartMinVersion = 0,
    kStopMinVersion = 0,
  };
  
  static constexpr uint64_t kUnlimitedFileSize = 0xFFFFFFFFFFFFFFFFULL;
  virtual ~NetLogExporter() {}


  using StartCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void Start(base::File destination, base::Value extra_constants, NetLogCaptureMode capture_mode, uint64_t max_file_size, StartCallback callback) = 0;


  using StopCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void Stop(base::Value polled_values, StopCallback callback) = 0;
};

class  NetLogExporterProxy
    : public NetLogExporter {
 public:
  using InterfaceType = NetLogExporter;

  explicit NetLogExporterProxy(mojo::MessageReceiverWithResponder* receiver);
  void Start(base::File destination, base::Value extra_constants, NetLogCaptureMode capture_mode, uint64_t max_file_size, StartCallback callback) final;
  void Stop(base::Value polled_values, StopCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  NetLogExporterStubDispatch {
 public:
  static bool Accept(NetLogExporter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetLogExporter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetLogExporter>>
class NetLogExporterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetLogExporterStub() {}
  ~NetLogExporterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetLogExporterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetLogExporterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NetLogExporterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetLogExporterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_H_