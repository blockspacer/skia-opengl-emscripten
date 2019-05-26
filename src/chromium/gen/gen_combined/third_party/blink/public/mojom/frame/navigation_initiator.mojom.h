// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_H_

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
#include "third_party/blink/public/mojom/frame/navigation_initiator.mojom-shared.h"
#include "third_party/blink/public/mojom/frame/navigation_initiator.mojom-forward.h"
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

class NavigationInitiatorProxy;

template <typename ImplRefTraits>
class NavigationInitiatorStub;

class NavigationInitiatorRequestValidator;


class BLINK_COMMON_EXPORT NavigationInitiator
    : public NavigationInitiatorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = NavigationInitiatorInterfaceBase;
  using Proxy_ = NavigationInitiatorProxy;

  template <typename ImplRefTraits>
  using Stub_ = NavigationInitiatorStub<ImplRefTraits>;

  using RequestValidator_ = NavigationInitiatorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSendViolationReportMinVersion = 0,
  };
  virtual ~NavigationInitiator() {}

  
  virtual void SendViolationReport(CSPViolationParamsPtr violation_params) = 0;
};

class BLINK_COMMON_EXPORT NavigationInitiatorProxy
    : public NavigationInitiator {
 public:
  using InterfaceType = NavigationInitiator;

  explicit NavigationInitiatorProxy(mojo::MessageReceiverWithResponder* receiver);
  void SendViolationReport(CSPViolationParamsPtr violation_params) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT NavigationInitiatorStubDispatch {
 public:
  static bool Accept(NavigationInitiator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NavigationInitiator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NavigationInitiator>>
class NavigationInitiatorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NavigationInitiatorStub() {}
  ~NavigationInitiatorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NavigationInitiatorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NavigationInitiatorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT NavigationInitiatorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class BLINK_COMMON_EXPORT SourceLocation {
 public:
  using DataView = SourceLocationDataView;
  using Data_ = internal::SourceLocation_Data;

  template <typename... Args>
  static SourceLocationPtr New(Args&&... args) {
    return SourceLocationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SourceLocationPtr From(const U& u) {
    return mojo::TypeConverter<SourceLocationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SourceLocation>::Convert(*this);
  }


  SourceLocation();

  SourceLocation(
      const std::string& url,
      uint32_t line_number,
      uint32_t column_number);

  ~SourceLocation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SourceLocationPtr>
  SourceLocationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SourceLocation>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SourceLocation::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SourceLocation::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SourceLocation_UnserializedMessageContext<
            UserType, SourceLocation::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SourceLocation::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SourceLocation::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SourceLocation_UnserializedMessageContext<
            UserType, SourceLocation::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SourceLocation::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string url;
  
  uint32_t line_number;
  
  uint32_t column_number;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class BLINK_COMMON_EXPORT CSPViolationParams {
 public:
  using DataView = CSPViolationParamsDataView;
  using Data_ = internal::CSPViolationParams_Data;

  template <typename... Args>
  static CSPViolationParamsPtr New(Args&&... args) {
    return CSPViolationParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CSPViolationParamsPtr From(const U& u) {
    return mojo::TypeConverter<CSPViolationParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CSPViolationParams>::Convert(*this);
  }


  CSPViolationParams();

  CSPViolationParams(
      const std::string& directive,
      const std::string& effective_directive,
      const std::string& console_message,
      const std::string& blocked_url,
      const std::vector<std::string>& report_endpoints,
      bool use_reporting_api,
      const std::string& header,
      WebContentSecurityPolicyType disposition,
      bool after_redirect,
      SourceLocationPtr source_location);

  ~CSPViolationParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CSPViolationParamsPtr>
  CSPViolationParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CSPViolationParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CSPViolationParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CSPViolationParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CSPViolationParams_UnserializedMessageContext<
            UserType, CSPViolationParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CSPViolationParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CSPViolationParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CSPViolationParams_UnserializedMessageContext<
            UserType, CSPViolationParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CSPViolationParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string directive;
  
  std::string effective_directive;
  
  std::string console_message;
  
  std::string blocked_url;
  
  std::vector<std::string> report_endpoints;
  
  bool use_reporting_api;
  
  std::string header;
  
  WebContentSecurityPolicyType disposition;
  
  bool after_redirect;
  
  SourceLocationPtr source_location;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CSPViolationParams);
};

template <typename StructPtrType>
SourceLocationPtr SourceLocation::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(line_number),
      mojo::Clone(column_number)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SourceLocation>::value>::type*>
bool SourceLocation::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->line_number, other_struct.line_number))
    return false;
  if (!mojo::Equals(this->column_number, other_struct.column_number))
    return false;
  return true;
}
template <typename StructPtrType>
CSPViolationParamsPtr CSPViolationParams::Clone() const {
  return New(
      mojo::Clone(directive),
      mojo::Clone(effective_directive),
      mojo::Clone(console_message),
      mojo::Clone(blocked_url),
      mojo::Clone(report_endpoints),
      mojo::Clone(use_reporting_api),
      mojo::Clone(header),
      mojo::Clone(disposition),
      mojo::Clone(after_redirect),
      mojo::Clone(source_location)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CSPViolationParams>::value>::type*>
bool CSPViolationParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->directive, other_struct.directive))
    return false;
  if (!mojo::Equals(this->effective_directive, other_struct.effective_directive))
    return false;
  if (!mojo::Equals(this->console_message, other_struct.console_message))
    return false;
  if (!mojo::Equals(this->blocked_url, other_struct.blocked_url))
    return false;
  if (!mojo::Equals(this->report_endpoints, other_struct.report_endpoints))
    return false;
  if (!mojo::Equals(this->use_reporting_api, other_struct.use_reporting_api))
    return false;
  if (!mojo::Equals(this->header, other_struct.header))
    return false;
  if (!mojo::Equals(this->disposition, other_struct.disposition))
    return false;
  if (!mojo::Equals(this->after_redirect, other_struct.after_redirect))
    return false;
  if (!mojo::Equals(this->source_location, other_struct.source_location))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::SourceLocation::DataView,
                                         ::blink::mojom::SourceLocationPtr> {
  static bool IsNull(const ::blink::mojom::SourceLocationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::SourceLocationPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::SourceLocation::url)& url(
      const ::blink::mojom::SourceLocationPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::SourceLocation::line_number) line_number(
      const ::blink::mojom::SourceLocationPtr& input) {
    return input->line_number;
  }

  static decltype(::blink::mojom::SourceLocation::column_number) column_number(
      const ::blink::mojom::SourceLocationPtr& input) {
    return input->column_number;
  }

  static bool Read(::blink::mojom::SourceLocation::DataView input, ::blink::mojom::SourceLocationPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::CSPViolationParams::DataView,
                                         ::blink::mojom::CSPViolationParamsPtr> {
  static bool IsNull(const ::blink::mojom::CSPViolationParamsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::CSPViolationParamsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::CSPViolationParams::directive)& directive(
      const ::blink::mojom::CSPViolationParamsPtr& input) {
    return input->directive;
  }

  static const decltype(::blink::mojom::CSPViolationParams::effective_directive)& effective_directive(
      const ::blink::mojom::CSPViolationParamsPtr& input) {
    return input->effective_directive;
  }

  static const decltype(::blink::mojom::CSPViolationParams::console_message)& console_message(
      const ::blink::mojom::CSPViolationParamsPtr& input) {
    return input->console_message;
  }

  static const decltype(::blink::mojom::CSPViolationParams::blocked_url)& blocked_url(
      const ::blink::mojom::CSPViolationParamsPtr& input) {
    return input->blocked_url;
  }

  static const decltype(::blink::mojom::CSPViolationParams::report_endpoints)& report_endpoints(
      const ::blink::mojom::CSPViolationParamsPtr& input) {
    return input->report_endpoints;
  }

  static decltype(::blink::mojom::CSPViolationParams::use_reporting_api) use_reporting_api(
      const ::blink::mojom::CSPViolationParamsPtr& input) {
    return input->use_reporting_api;
  }

  static const decltype(::blink::mojom::CSPViolationParams::header)& header(
      const ::blink::mojom::CSPViolationParamsPtr& input) {
    return input->header;
  }

  static decltype(::blink::mojom::CSPViolationParams::disposition) disposition(
      const ::blink::mojom::CSPViolationParamsPtr& input) {
    return input->disposition;
  }

  static decltype(::blink::mojom::CSPViolationParams::after_redirect) after_redirect(
      const ::blink::mojom::CSPViolationParamsPtr& input) {
    return input->after_redirect;
  }

  static const decltype(::blink::mojom::CSPViolationParams::source_location)& source_location(
      const ::blink::mojom::CSPViolationParamsPtr& input) {
    return input->source_location;
  }

  static bool Read(::blink::mojom::CSPViolationParams::DataView input, ::blink::mojom::CSPViolationParamsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_H_