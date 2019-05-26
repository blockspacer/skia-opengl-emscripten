// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_BLINK_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_BLINK_H_

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
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-shared.h"
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-blink-forward.h"
#include "mojo/public/mojom/base/process_id.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink-forward.h"
#include "services/resource_coordinator/public/mojom/lifecycle.mojom-blink-forward.h"

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
#include "base/component_export.h"




namespace WTF {
struct resource_coordinator_mojom_internal_CoordinationUnitType_DataHashFn {
  static unsigned GetHash(const ::resource_coordinator::mojom::CoordinationUnitType& value) {
    using utype = std::underlying_type<::resource_coordinator::mojom::CoordinationUnitType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::resource_coordinator::mojom::CoordinationUnitType& left, const ::resource_coordinator::mojom::CoordinationUnitType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::resource_coordinator::mojom::CoordinationUnitType>
    : public GenericHashTraits<::resource_coordinator::mojom::CoordinationUnitType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::resource_coordinator::mojom::CoordinationUnitType& value) {
    return value == static_cast<::resource_coordinator::mojom::CoordinationUnitType>(-1000000);
  }
  static void ConstructDeletedValue(::resource_coordinator::mojom::CoordinationUnitType& slot, bool) {
    slot = static_cast<::resource_coordinator::mojom::CoordinationUnitType>(-1000001);
  }
  static bool IsDeletedValue(const ::resource_coordinator::mojom::CoordinationUnitType& value) {
    return value == static_cast<::resource_coordinator::mojom::CoordinationUnitType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct resource_coordinator_mojom_internal_InterventionPolicy_DataHashFn {
  static unsigned GetHash(const ::resource_coordinator::mojom::InterventionPolicy& value) {
    using utype = std::underlying_type<::resource_coordinator::mojom::InterventionPolicy>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::resource_coordinator::mojom::InterventionPolicy& left, const ::resource_coordinator::mojom::InterventionPolicy& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::resource_coordinator::mojom::InterventionPolicy>
    : public GenericHashTraits<::resource_coordinator::mojom::InterventionPolicy> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::resource_coordinator::mojom::InterventionPolicy& value) {
    return value == static_cast<::resource_coordinator::mojom::InterventionPolicy>(-1000000);
  }
  static void ConstructDeletedValue(::resource_coordinator::mojom::InterventionPolicy& slot, bool) {
    slot = static_cast<::resource_coordinator::mojom::InterventionPolicy>(-1000001);
  }
  static bool IsDeletedValue(const ::resource_coordinator::mojom::InterventionPolicy& value) {
    return value == static_cast<::resource_coordinator::mojom::InterventionPolicy>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct resource_coordinator_mojom_internal_PolicyControlledIntervention_DataHashFn {
  static unsigned GetHash(const ::resource_coordinator::mojom::PolicyControlledIntervention& value) {
    using utype = std::underlying_type<::resource_coordinator::mojom::PolicyControlledIntervention>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::resource_coordinator::mojom::PolicyControlledIntervention& left, const ::resource_coordinator::mojom::PolicyControlledIntervention& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::resource_coordinator::mojom::PolicyControlledIntervention>
    : public GenericHashTraits<::resource_coordinator::mojom::PolicyControlledIntervention> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::resource_coordinator::mojom::PolicyControlledIntervention& value) {
    return value == static_cast<::resource_coordinator::mojom::PolicyControlledIntervention>(-1000000);
  }
  static void ConstructDeletedValue(::resource_coordinator::mojom::PolicyControlledIntervention& slot, bool) {
    slot = static_cast<::resource_coordinator::mojom::PolicyControlledIntervention>(-1000001);
  }
  static bool IsDeletedValue(const ::resource_coordinator::mojom::PolicyControlledIntervention& value) {
    return value == static_cast<::resource_coordinator::mojom::PolicyControlledIntervention>(-1000001);
  }
};
}  // namespace WTF


namespace resource_coordinator {
namespace mojom {
namespace blink {

class DocumentCoordinationUnitProxy;

template <typename ImplRefTraits>
class DocumentCoordinationUnitStub;

class DocumentCoordinationUnitRequestValidator;


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) DocumentCoordinationUnit
    : public DocumentCoordinationUnitInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DocumentCoordinationUnitInterfaceBase;
  using Proxy_ = DocumentCoordinationUnitProxy;

  template <typename ImplRefTraits>
  using Stub_ = DocumentCoordinationUnitStub<ImplRefTraits>;

  using RequestValidator_ = DocumentCoordinationUnitRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetNetworkAlmostIdleMinVersion = 0,
    kSetLifecycleStateMinVersion = 0,
    kSetHasNonEmptyBeforeUnloadMinVersion = 0,
    kSetInterventionPolicyMinVersion = 0,
    kSetIsAdFrameMinVersion = 0,
    kOnNonPersistentNotificationCreatedMinVersion = 0,
  };
  virtual ~DocumentCoordinationUnit() {}

  
  virtual void SetNetworkAlmostIdle() = 0;

  
  virtual void SetLifecycleState(::resource_coordinator::mojom::blink::LifecycleState state) = 0;

  
  virtual void SetHasNonEmptyBeforeUnload(bool has_nonempty_beforeunload) = 0;

  
  virtual void SetInterventionPolicy(PolicyControlledIntervention intervention, InterventionPolicy policy) = 0;

  
  virtual void SetIsAdFrame() = 0;

  
  virtual void OnNonPersistentNotificationCreated() = 0;
};

class ProcessCoordinationUnitProxy;

template <typename ImplRefTraits>
class ProcessCoordinationUnitStub;

class ProcessCoordinationUnitRequestValidator;


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ProcessCoordinationUnit
    : public ProcessCoordinationUnitInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProcessCoordinationUnitInterfaceBase;
  using Proxy_ = ProcessCoordinationUnitProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProcessCoordinationUnitStub<ImplRefTraits>;

  using RequestValidator_ = ProcessCoordinationUnitRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetExpectedTaskQueueingDurationMinVersion = 0,
    kSetMainThreadTaskLoadIsLowMinVersion = 0,
  };
  virtual ~ProcessCoordinationUnit() {}

  
  virtual void SetExpectedTaskQueueingDuration(base::TimeDelta duration) = 0;

  
  virtual void SetMainThreadTaskLoadIsLow(bool main_thread_task_load_is_low) = 0;
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) DocumentCoordinationUnitProxy
    : public DocumentCoordinationUnit {
 public:
  using InterfaceType = DocumentCoordinationUnit;

  explicit DocumentCoordinationUnitProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetNetworkAlmostIdle() final;
  void SetLifecycleState(::resource_coordinator::mojom::blink::LifecycleState state) final;
  void SetHasNonEmptyBeforeUnload(bool has_nonempty_beforeunload) final;
  void SetInterventionPolicy(PolicyControlledIntervention intervention, InterventionPolicy policy) final;
  void SetIsAdFrame() final;
  void OnNonPersistentNotificationCreated() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ProcessCoordinationUnitProxy
    : public ProcessCoordinationUnit {
 public:
  using InterfaceType = ProcessCoordinationUnit;

  explicit ProcessCoordinationUnitProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetExpectedTaskQueueingDuration(base::TimeDelta duration) final;
  void SetMainThreadTaskLoadIsLow(bool main_thread_task_load_is_low) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) DocumentCoordinationUnitStubDispatch {
 public:
  static bool Accept(DocumentCoordinationUnit* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DocumentCoordinationUnit* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DocumentCoordinationUnit>>
class DocumentCoordinationUnitStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DocumentCoordinationUnitStub() {}
  ~DocumentCoordinationUnitStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DocumentCoordinationUnitStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DocumentCoordinationUnitStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ProcessCoordinationUnitStubDispatch {
 public:
  static bool Accept(ProcessCoordinationUnit* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProcessCoordinationUnit* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProcessCoordinationUnit>>
class ProcessCoordinationUnitStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProcessCoordinationUnitStub() {}
  ~ProcessCoordinationUnitStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProcessCoordinationUnitStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProcessCoordinationUnitStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) DocumentCoordinationUnitRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ProcessCoordinationUnitRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_BLINK_H_