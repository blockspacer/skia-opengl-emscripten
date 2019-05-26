// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_H_

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
#include "third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom-shared.h"
#include "third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom-forward.h"
#include "mojo/public/mojom/base/shared_memory.mojom-forward.h"
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

class OomInterventionHostProxy;

template <typename ImplRefTraits>
class OomInterventionHostStub;

class OomInterventionHostRequestValidator;


class BLINK_COMMON_EXPORT OomInterventionHost
    : public OomInterventionHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = OomInterventionHostInterfaceBase;
  using Proxy_ = OomInterventionHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = OomInterventionHostStub<ImplRefTraits>;

  using RequestValidator_ = OomInterventionHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnHighMemoryUsageMinVersion = 0,
  };
  virtual ~OomInterventionHost() {}

  
  virtual void OnHighMemoryUsage() = 0;
};

class OomInterventionProxy;

template <typename ImplRefTraits>
class OomInterventionStub;

class OomInterventionRequestValidator;


class BLINK_COMMON_EXPORT OomIntervention
    : public OomInterventionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = OomInterventionInterfaceBase;
  using Proxy_ = OomInterventionProxy;

  template <typename ImplRefTraits>
  using Stub_ = OomInterventionStub<ImplRefTraits>;

  using RequestValidator_ = OomInterventionRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartDetectionMinVersion = 0,
  };
  virtual ~OomIntervention() {}

  
  virtual void StartDetection(OomInterventionHostPtr host, DetectionArgsPtr detection_args, bool renderer_pause_enabled, bool navigate_ads_enabled, bool purge_v8_memory_enabled) = 0;
};

class BLINK_COMMON_EXPORT OomInterventionHostProxy
    : public OomInterventionHost {
 public:
  using InterfaceType = OomInterventionHost;

  explicit OomInterventionHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnHighMemoryUsage() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT OomInterventionProxy
    : public OomIntervention {
 public:
  using InterfaceType = OomIntervention;

  explicit OomInterventionProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartDetection(OomInterventionHostPtr host, DetectionArgsPtr detection_args, bool renderer_pause_enabled, bool navigate_ads_enabled, bool purge_v8_memory_enabled) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT OomInterventionHostStubDispatch {
 public:
  static bool Accept(OomInterventionHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      OomInterventionHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<OomInterventionHost>>
class OomInterventionHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  OomInterventionHostStub() {}
  ~OomInterventionHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OomInterventionHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OomInterventionHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT OomInterventionStubDispatch {
 public:
  static bool Accept(OomIntervention* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      OomIntervention* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<OomIntervention>>
class OomInterventionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  OomInterventionStub() {}
  ~OomInterventionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OomInterventionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OomInterventionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT OomInterventionHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT OomInterventionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class BLINK_COMMON_EXPORT DetectionArgs {
 public:
  using DataView = DetectionArgsDataView;
  using Data_ = internal::DetectionArgs_Data;

  template <typename... Args>
  static DetectionArgsPtr New(Args&&... args) {
    return DetectionArgsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DetectionArgsPtr From(const U& u) {
    return mojo::TypeConverter<DetectionArgsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DetectionArgs>::Convert(*this);
  }


  DetectionArgs();

  DetectionArgs(
      uint64_t blink_workload_threshold,
      uint64_t private_footprint_threshold,
      uint64_t swap_threshold,
      uint64_t virtual_memory_thresold);

  ~DetectionArgs();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DetectionArgsPtr>
  DetectionArgsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DetectionArgs>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DetectionArgs::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DetectionArgs::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DetectionArgs_UnserializedMessageContext<
            UserType, DetectionArgs::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DetectionArgs::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DetectionArgs::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DetectionArgs_UnserializedMessageContext<
            UserType, DetectionArgs::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DetectionArgs::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t blink_workload_threshold;
  
  uint64_t private_footprint_threshold;
  
  uint64_t swap_threshold;
  
  uint64_t virtual_memory_thresold;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
DetectionArgsPtr DetectionArgs::Clone() const {
  return New(
      mojo::Clone(blink_workload_threshold),
      mojo::Clone(private_footprint_threshold),
      mojo::Clone(swap_threshold),
      mojo::Clone(virtual_memory_thresold)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DetectionArgs>::value>::type*>
bool DetectionArgs::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->blink_workload_threshold, other_struct.blink_workload_threshold))
    return false;
  if (!mojo::Equals(this->private_footprint_threshold, other_struct.private_footprint_threshold))
    return false;
  if (!mojo::Equals(this->swap_threshold, other_struct.swap_threshold))
    return false;
  if (!mojo::Equals(this->virtual_memory_thresold, other_struct.virtual_memory_thresold))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::DetectionArgs::DataView,
                                         ::blink::mojom::DetectionArgsPtr> {
  static bool IsNull(const ::blink::mojom::DetectionArgsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::DetectionArgsPtr* output) { output->reset(); }

  static decltype(::blink::mojom::DetectionArgs::blink_workload_threshold) blink_workload_threshold(
      const ::blink::mojom::DetectionArgsPtr& input) {
    return input->blink_workload_threshold;
  }

  static decltype(::blink::mojom::DetectionArgs::private_footprint_threshold) private_footprint_threshold(
      const ::blink::mojom::DetectionArgsPtr& input) {
    return input->private_footprint_threshold;
  }

  static decltype(::blink::mojom::DetectionArgs::swap_threshold) swap_threshold(
      const ::blink::mojom::DetectionArgsPtr& input) {
    return input->swap_threshold;
  }

  static decltype(::blink::mojom::DetectionArgs::virtual_memory_thresold) virtual_memory_thresold(
      const ::blink::mojom::DetectionArgsPtr& input) {
    return input->virtual_memory_thresold;
  }

  static bool Read(::blink::mojom::DetectionArgs::DataView input, ::blink::mojom::DetectionArgsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_H_