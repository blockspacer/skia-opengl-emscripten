// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/frame/navigation_initiator.mojom-blink-forward.h"

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




namespace WTF {
struct blink_mojom_internal_WebContentSecurityPolicyType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::WebContentSecurityPolicyType& value) {
    using utype = std::underlying_type<::blink::mojom::WebContentSecurityPolicyType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::WebContentSecurityPolicyType& left, const ::blink::mojom::WebContentSecurityPolicyType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::WebContentSecurityPolicyType>
    : public GenericHashTraits<::blink::mojom::WebContentSecurityPolicyType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::WebContentSecurityPolicyType& value) {
    return value == static_cast<::blink::mojom::WebContentSecurityPolicyType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::WebContentSecurityPolicyType& slot, bool) {
    slot = static_cast<::blink::mojom::WebContentSecurityPolicyType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::WebContentSecurityPolicyType& value) {
    return value == static_cast<::blink::mojom::WebContentSecurityPolicyType>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class NavigationInitiatorProxy;

template <typename ImplRefTraits>
class NavigationInitiatorStub;

class NavigationInitiatorRequestValidator;


class PLATFORM_EXPORT NavigationInitiator
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

class PLATFORM_EXPORT NavigationInitiatorProxy
    : public NavigationInitiator {
 public:
  using InterfaceType = NavigationInitiator;

  explicit NavigationInitiatorProxy(mojo::MessageReceiverWithResponder* receiver);
  void SendViolationReport(CSPViolationParamsPtr violation_params) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT NavigationInitiatorStubDispatch {
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
class PLATFORM_EXPORT NavigationInitiatorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class PLATFORM_EXPORT SourceLocation {
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
      const WTF::String& url,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SourceLocation::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::String url;
  
  uint32_t line_number;
  
  uint32_t column_number;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class PLATFORM_EXPORT CSPViolationParams {
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
      const WTF::String& directive,
      const WTF::String& effective_directive,
      const WTF::String& console_message,
      const WTF::String& blocked_url,
      const WTF::Vector<WTF::String>& report_endpoints,
      bool use_reporting_api,
      const WTF::String& header,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CSPViolationParams::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::String directive;
  
  WTF::String effective_directive;
  
  WTF::String console_message;
  
  WTF::String blocked_url;
  
  WTF::Vector<WTF::String> report_endpoints;
  
  bool use_reporting_api;
  
  WTF::String header;
  
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


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SourceLocation::DataView,
                                         ::blink::mojom::blink::SourceLocationPtr> {
  static bool IsNull(const ::blink::mojom::blink::SourceLocationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SourceLocationPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::SourceLocation::url)& url(
      const ::blink::mojom::blink::SourceLocationPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::blink::SourceLocation::line_number) line_number(
      const ::blink::mojom::blink::SourceLocationPtr& input) {
    return input->line_number;
  }

  static decltype(::blink::mojom::blink::SourceLocation::column_number) column_number(
      const ::blink::mojom::blink::SourceLocationPtr& input) {
    return input->column_number;
  }

  static bool Read(::blink::mojom::blink::SourceLocation::DataView input, ::blink::mojom::blink::SourceLocationPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::CSPViolationParams::DataView,
                                         ::blink::mojom::blink::CSPViolationParamsPtr> {
  static bool IsNull(const ::blink::mojom::blink::CSPViolationParamsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::CSPViolationParamsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::CSPViolationParams::directive)& directive(
      const ::blink::mojom::blink::CSPViolationParamsPtr& input) {
    return input->directive;
  }

  static const decltype(::blink::mojom::blink::CSPViolationParams::effective_directive)& effective_directive(
      const ::blink::mojom::blink::CSPViolationParamsPtr& input) {
    return input->effective_directive;
  }

  static const decltype(::blink::mojom::blink::CSPViolationParams::console_message)& console_message(
      const ::blink::mojom::blink::CSPViolationParamsPtr& input) {
    return input->console_message;
  }

  static const decltype(::blink::mojom::blink::CSPViolationParams::blocked_url)& blocked_url(
      const ::blink::mojom::blink::CSPViolationParamsPtr& input) {
    return input->blocked_url;
  }

  static const decltype(::blink::mojom::blink::CSPViolationParams::report_endpoints)& report_endpoints(
      const ::blink::mojom::blink::CSPViolationParamsPtr& input) {
    return input->report_endpoints;
  }

  static decltype(::blink::mojom::blink::CSPViolationParams::use_reporting_api) use_reporting_api(
      const ::blink::mojom::blink::CSPViolationParamsPtr& input) {
    return input->use_reporting_api;
  }

  static const decltype(::blink::mojom::blink::CSPViolationParams::header)& header(
      const ::blink::mojom::blink::CSPViolationParamsPtr& input) {
    return input->header;
  }

  static decltype(::blink::mojom::blink::CSPViolationParams::disposition) disposition(
      const ::blink::mojom::blink::CSPViolationParamsPtr& input) {
    return input->disposition;
  }

  static decltype(::blink::mojom::blink::CSPViolationParams::after_redirect) after_redirect(
      const ::blink::mojom::blink::CSPViolationParamsPtr& input) {
    return input->after_redirect;
  }

  static const decltype(::blink::mojom::blink::CSPViolationParams::source_location)& source_location(
      const ::blink::mojom::blink::CSPViolationParamsPtr& input) {
    return input->source_location;
  }

  static bool Read(::blink::mojom::blink::CSPViolationParams::DataView input, ::blink::mojom::blink::CSPViolationParamsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_BLINK_H_