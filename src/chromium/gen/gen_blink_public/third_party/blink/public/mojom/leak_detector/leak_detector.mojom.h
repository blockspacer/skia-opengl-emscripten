// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_H_

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
#include "third_party/blink/public/mojom/leak_detector/leak_detector.mojom-shared.h"
#include "third_party/blink/public/mojom/leak_detector/leak_detector.mojom-forward.h"
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

class LeakDetectorProxy;

template <typename ImplRefTraits>
class LeakDetectorStub;

class LeakDetectorRequestValidator;
class LeakDetectorResponseValidator;


class BLINK_COMMON_EXPORT LeakDetector
    : public LeakDetectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = LeakDetectorInterfaceBase;
  using Proxy_ = LeakDetectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = LeakDetectorStub<ImplRefTraits>;

  using RequestValidator_ = LeakDetectorRequestValidator;
  using ResponseValidator_ = LeakDetectorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPerformLeakDetectionMinVersion = 0,
  };
  virtual ~LeakDetector() {}


  using PerformLeakDetectionCallback = base::OnceCallback<void(LeakDetectionResultPtr)>;
  
  virtual void PerformLeakDetection(PerformLeakDetectionCallback callback) = 0;
};

class BLINK_COMMON_EXPORT LeakDetectorProxy
    : public LeakDetector {
 public:
  using InterfaceType = LeakDetector;

  explicit LeakDetectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void PerformLeakDetection(PerformLeakDetectionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT LeakDetectorStubDispatch {
 public:
  static bool Accept(LeakDetector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LeakDetector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LeakDetector>>
class LeakDetectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LeakDetectorStub() {}
  ~LeakDetectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LeakDetectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LeakDetectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT LeakDetectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT LeakDetectorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT LeakDetectionResult {
 public:
  using DataView = LeakDetectionResultDataView;
  using Data_ = internal::LeakDetectionResult_Data;

  template <typename... Args>
  static LeakDetectionResultPtr New(Args&&... args) {
    return LeakDetectionResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LeakDetectionResultPtr From(const U& u) {
    return mojo::TypeConverter<LeakDetectionResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LeakDetectionResult>::Convert(*this);
  }


  LeakDetectionResult();

  LeakDetectionResult(
      uint32_t number_of_live_audio_nodes,
      uint32_t number_of_live_documents,
      uint32_t number_of_live_nodes,
      uint32_t number_of_live_layout_objects,
      uint32_t number_of_live_resources,
      uint32_t number_of_live_context_lifecycle_state_observers,
      uint32_t number_of_live_script_promises,
      uint32_t number_of_live_frames,
      uint32_t number_of_live_v8_per_context_data,
      uint32_t number_of_worker_global_scopes,
      uint32_t number_of_live_ua_css_resources,
      uint32_t number_of_live_resource_fetchers);

  ~LeakDetectionResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LeakDetectionResultPtr>
  LeakDetectionResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LeakDetectionResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LeakDetectionResult::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LeakDetectionResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LeakDetectionResult_UnserializedMessageContext<
            UserType, LeakDetectionResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LeakDetectionResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LeakDetectionResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LeakDetectionResult_UnserializedMessageContext<
            UserType, LeakDetectionResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LeakDetectionResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t number_of_live_audio_nodes;
  
  uint32_t number_of_live_documents;
  
  uint32_t number_of_live_nodes;
  
  uint32_t number_of_live_layout_objects;
  
  uint32_t number_of_live_resources;
  
  uint32_t number_of_live_context_lifecycle_state_observers;
  
  uint32_t number_of_live_script_promises;
  
  uint32_t number_of_live_frames;
  
  uint32_t number_of_live_v8_per_context_data;
  
  uint32_t number_of_worker_global_scopes;
  
  uint32_t number_of_live_ua_css_resources;
  
  uint32_t number_of_live_resource_fetchers;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
LeakDetectionResultPtr LeakDetectionResult::Clone() const {
  return New(
      mojo::Clone(number_of_live_audio_nodes),
      mojo::Clone(number_of_live_documents),
      mojo::Clone(number_of_live_nodes),
      mojo::Clone(number_of_live_layout_objects),
      mojo::Clone(number_of_live_resources),
      mojo::Clone(number_of_live_context_lifecycle_state_observers),
      mojo::Clone(number_of_live_script_promises),
      mojo::Clone(number_of_live_frames),
      mojo::Clone(number_of_live_v8_per_context_data),
      mojo::Clone(number_of_worker_global_scopes),
      mojo::Clone(number_of_live_ua_css_resources),
      mojo::Clone(number_of_live_resource_fetchers)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LeakDetectionResult>::value>::type*>
bool LeakDetectionResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->number_of_live_audio_nodes, other_struct.number_of_live_audio_nodes))
    return false;
  if (!mojo::Equals(this->number_of_live_documents, other_struct.number_of_live_documents))
    return false;
  if (!mojo::Equals(this->number_of_live_nodes, other_struct.number_of_live_nodes))
    return false;
  if (!mojo::Equals(this->number_of_live_layout_objects, other_struct.number_of_live_layout_objects))
    return false;
  if (!mojo::Equals(this->number_of_live_resources, other_struct.number_of_live_resources))
    return false;
  if (!mojo::Equals(this->number_of_live_context_lifecycle_state_observers, other_struct.number_of_live_context_lifecycle_state_observers))
    return false;
  if (!mojo::Equals(this->number_of_live_script_promises, other_struct.number_of_live_script_promises))
    return false;
  if (!mojo::Equals(this->number_of_live_frames, other_struct.number_of_live_frames))
    return false;
  if (!mojo::Equals(this->number_of_live_v8_per_context_data, other_struct.number_of_live_v8_per_context_data))
    return false;
  if (!mojo::Equals(this->number_of_worker_global_scopes, other_struct.number_of_worker_global_scopes))
    return false;
  if (!mojo::Equals(this->number_of_live_ua_css_resources, other_struct.number_of_live_ua_css_resources))
    return false;
  if (!mojo::Equals(this->number_of_live_resource_fetchers, other_struct.number_of_live_resource_fetchers))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::LeakDetectionResult::DataView,
                                         ::blink::mojom::LeakDetectionResultPtr> {
  static bool IsNull(const ::blink::mojom::LeakDetectionResultPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::LeakDetectionResultPtr* output) { output->reset(); }

  static decltype(::blink::mojom::LeakDetectionResult::number_of_live_audio_nodes) number_of_live_audio_nodes(
      const ::blink::mojom::LeakDetectionResultPtr& input) {
    return input->number_of_live_audio_nodes;
  }

  static decltype(::blink::mojom::LeakDetectionResult::number_of_live_documents) number_of_live_documents(
      const ::blink::mojom::LeakDetectionResultPtr& input) {
    return input->number_of_live_documents;
  }

  static decltype(::blink::mojom::LeakDetectionResult::number_of_live_nodes) number_of_live_nodes(
      const ::blink::mojom::LeakDetectionResultPtr& input) {
    return input->number_of_live_nodes;
  }

  static decltype(::blink::mojom::LeakDetectionResult::number_of_live_layout_objects) number_of_live_layout_objects(
      const ::blink::mojom::LeakDetectionResultPtr& input) {
    return input->number_of_live_layout_objects;
  }

  static decltype(::blink::mojom::LeakDetectionResult::number_of_live_resources) number_of_live_resources(
      const ::blink::mojom::LeakDetectionResultPtr& input) {
    return input->number_of_live_resources;
  }

  static decltype(::blink::mojom::LeakDetectionResult::number_of_live_context_lifecycle_state_observers) number_of_live_context_lifecycle_state_observers(
      const ::blink::mojom::LeakDetectionResultPtr& input) {
    return input->number_of_live_context_lifecycle_state_observers;
  }

  static decltype(::blink::mojom::LeakDetectionResult::number_of_live_script_promises) number_of_live_script_promises(
      const ::blink::mojom::LeakDetectionResultPtr& input) {
    return input->number_of_live_script_promises;
  }

  static decltype(::blink::mojom::LeakDetectionResult::number_of_live_frames) number_of_live_frames(
      const ::blink::mojom::LeakDetectionResultPtr& input) {
    return input->number_of_live_frames;
  }

  static decltype(::blink::mojom::LeakDetectionResult::number_of_live_v8_per_context_data) number_of_live_v8_per_context_data(
      const ::blink::mojom::LeakDetectionResultPtr& input) {
    return input->number_of_live_v8_per_context_data;
  }

  static decltype(::blink::mojom::LeakDetectionResult::number_of_worker_global_scopes) number_of_worker_global_scopes(
      const ::blink::mojom::LeakDetectionResultPtr& input) {
    return input->number_of_worker_global_scopes;
  }

  static decltype(::blink::mojom::LeakDetectionResult::number_of_live_ua_css_resources) number_of_live_ua_css_resources(
      const ::blink::mojom::LeakDetectionResultPtr& input) {
    return input->number_of_live_ua_css_resources;
  }

  static decltype(::blink::mojom::LeakDetectionResult::number_of_live_resource_fetchers) number_of_live_resource_fetchers(
      const ::blink::mojom::LeakDetectionResultPtr& input) {
    return input->number_of_live_resource_fetchers;
  }

  static bool Read(::blink::mojom::LeakDetectionResult::DataView input, ::blink::mojom::LeakDetectionResultPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_H_