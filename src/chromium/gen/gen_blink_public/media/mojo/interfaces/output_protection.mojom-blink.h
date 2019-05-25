// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/output_protection.mojom-shared.h"
#include "media/mojo/interfaces/output_protection.mojom-blink-forward.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct media_mojom_internal_OutputProtection_ProtectionType_DataHashFn {
  static unsigned GetHash(const ::media::mojom::OutputProtection_ProtectionType& value) {
    using utype = std::underlying_type<::media::mojom::OutputProtection_ProtectionType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::OutputProtection_ProtectionType& left, const ::media::mojom::OutputProtection_ProtectionType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media::mojom::OutputProtection_ProtectionType>
    : public GenericHashTraits<::media::mojom::OutputProtection_ProtectionType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::OutputProtection_ProtectionType& value) {
    return value == static_cast<::media::mojom::OutputProtection_ProtectionType>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::OutputProtection_ProtectionType& slot, bool) {
    slot = static_cast<::media::mojom::OutputProtection_ProtectionType>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::OutputProtection_ProtectionType& value) {
    return value == static_cast<::media::mojom::OutputProtection_ProtectionType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct media_mojom_internal_OutputProtection_LinkType_DataHashFn {
  static unsigned GetHash(const ::media::mojom::OutputProtection_LinkType& value) {
    using utype = std::underlying_type<::media::mojom::OutputProtection_LinkType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::OutputProtection_LinkType& left, const ::media::mojom::OutputProtection_LinkType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media::mojom::OutputProtection_LinkType>
    : public GenericHashTraits<::media::mojom::OutputProtection_LinkType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::OutputProtection_LinkType& value) {
    return value == static_cast<::media::mojom::OutputProtection_LinkType>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::OutputProtection_LinkType& slot, bool) {
    slot = static_cast<::media::mojom::OutputProtection_LinkType>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::OutputProtection_LinkType& value) {
    return value == static_cast<::media::mojom::OutputProtection_LinkType>(-1000001);
  }
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {

class OutputProtectionProxy;

template <typename ImplRefTraits>
class OutputProtectionStub;

class OutputProtectionRequestValidator;
class OutputProtectionResponseValidator;


class BLINK_PLATFORM_EXPORT OutputProtection
    : public OutputProtectionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = OutputProtectionInterfaceBase;
  using Proxy_ = OutputProtectionProxy;

  template <typename ImplRefTraits>
  using Stub_ = OutputProtectionStub<ImplRefTraits>;

  using RequestValidator_ = OutputProtectionRequestValidator;
  using ResponseValidator_ = OutputProtectionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kQueryStatusMinVersion = 0,
    kEnableProtectionMinVersion = 0,
  };
  
  using ProtectionType = OutputProtection_ProtectionType;
  
  using LinkType = OutputProtection_LinkType;
  virtual ~OutputProtection() {}


  using QueryStatusCallback = base::OnceCallback<void(bool, uint32_t, uint32_t)>;
  
  virtual void QueryStatus(QueryStatusCallback callback) = 0;


  using EnableProtectionCallback = base::OnceCallback<void(bool)>;
  
  virtual void EnableProtection(uint32_t desired_protection_mask, EnableProtectionCallback callback) = 0;
};

class BLINK_PLATFORM_EXPORT OutputProtectionProxy
    : public OutputProtection {
 public:
  using InterfaceType = OutputProtection;

  explicit OutputProtectionProxy(mojo::MessageReceiverWithResponder* receiver);
  void QueryStatus(QueryStatusCallback callback) final;
  void EnableProtection(uint32_t desired_protection_mask, EnableProtectionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT OutputProtectionStubDispatch {
 public:
  static bool Accept(OutputProtection* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      OutputProtection* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<OutputProtection>>
class OutputProtectionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  OutputProtectionStub() {}
  ~OutputProtectionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OutputProtectionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OutputProtectionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT OutputProtectionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT OutputProtectionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_BLINK_H_