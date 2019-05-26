// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_H_

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
#include "third_party/blink/public/mojom/reporting/reporting.mojom-shared.h"
#include "third_party/blink/public/mojom/reporting/reporting.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom-forward.h"
#include "url/mojom/url.mojom-forward.h"
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

class ReportingServiceProxyProxy;

template <typename ImplRefTraits>
class ReportingServiceProxyStub;

class ReportingServiceProxyRequestValidator;


class BLINK_COMMON_EXPORT ReportingServiceProxy
    : public ReportingServiceProxyInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ReportingServiceProxyInterfaceBase;
  using Proxy_ = ReportingServiceProxyProxy;

  template <typename ImplRefTraits>
  using Stub_ = ReportingServiceProxyStub<ImplRefTraits>;

  using RequestValidator_ = ReportingServiceProxyRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kQueueInterventionReportMinVersion = 0,
    kQueueDeprecationReportMinVersion = 0,
    kQueueCspViolationReportMinVersion = 0,
    kQueueFeaturePolicyViolationReportMinVersion = 0,
  };
  virtual ~ReportingServiceProxy() {}

  
  virtual void QueueInterventionReport(const GURL& url, const std::string& id, const std::string& message, const base::Optional<std::string>& source_file, int32_t line_number, int32_t column_number) = 0;

  
  virtual void QueueDeprecationReport(const GURL& url, const std::string& id, base::Optional<base::Time> anticipatedRemoval, const std::string& message, const base::Optional<std::string>& source_file, int32_t line_number, int32_t column_number) = 0;

  
  virtual void QueueCspViolationReport(const GURL& url, const std::string& group, const std::string& document_url, const base::Optional<std::string>& referrer, const base::Optional<std::string>& blocked_url, const std::string& effective_directive, const std::string& original_policy, const base::Optional<std::string>& source_file, const base::Optional<std::string>& script_sample, const std::string& disposition, uint16_t status_code, int32_t line_number, int32_t column_number) = 0;

  
  virtual void QueueFeaturePolicyViolationReport(const GURL& url, const std::string& policy_id, const std::string& disposition, const base::Optional<std::string>& message, const base::Optional<std::string>& source_file, int32_t line_number, int32_t column_number) = 0;
};

class BLINK_COMMON_EXPORT ReportingServiceProxyProxy
    : public ReportingServiceProxy {
 public:
  using InterfaceType = ReportingServiceProxy;

  explicit ReportingServiceProxyProxy(mojo::MessageReceiverWithResponder* receiver);
  void QueueInterventionReport(const GURL& url, const std::string& id, const std::string& message, const base::Optional<std::string>& source_file, int32_t line_number, int32_t column_number) final;
  void QueueDeprecationReport(const GURL& url, const std::string& id, base::Optional<base::Time> anticipatedRemoval, const std::string& message, const base::Optional<std::string>& source_file, int32_t line_number, int32_t column_number) final;
  void QueueCspViolationReport(const GURL& url, const std::string& group, const std::string& document_url, const base::Optional<std::string>& referrer, const base::Optional<std::string>& blocked_url, const std::string& effective_directive, const std::string& original_policy, const base::Optional<std::string>& source_file, const base::Optional<std::string>& script_sample, const std::string& disposition, uint16_t status_code, int32_t line_number, int32_t column_number) final;
  void QueueFeaturePolicyViolationReport(const GURL& url, const std::string& policy_id, const std::string& disposition, const base::Optional<std::string>& message, const base::Optional<std::string>& source_file, int32_t line_number, int32_t column_number) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT ReportingServiceProxyStubDispatch {
 public:
  static bool Accept(ReportingServiceProxy* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ReportingServiceProxy* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ReportingServiceProxy>>
class ReportingServiceProxyStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ReportingServiceProxyStub() {}
  ~ReportingServiceProxyStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ReportingServiceProxyStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ReportingServiceProxyStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT ReportingServiceProxyRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_H_