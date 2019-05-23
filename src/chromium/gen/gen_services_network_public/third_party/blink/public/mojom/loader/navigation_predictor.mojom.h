// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_H_

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
#include "third_party/blink/public/mojom/loader/navigation_predictor.mojom-shared.h"
#include "third_party/blink/public/mojom/loader/navigation_predictor.mojom-forward.h"
#include "url/mojom/url.mojom.h"
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

class AnchorElementMetricsHostProxy;

template <typename ImplRefTraits>
class AnchorElementMetricsHostStub;

class AnchorElementMetricsHostRequestValidator;


class BLINK_COMMON_EXPORT AnchorElementMetricsHost
    : public AnchorElementMetricsHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AnchorElementMetricsHostInterfaceBase;
  using Proxy_ = AnchorElementMetricsHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = AnchorElementMetricsHostStub<ImplRefTraits>;

  using RequestValidator_ = AnchorElementMetricsHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kReportAnchorElementMetricsOnClickMinVersion = 0,
    kReportAnchorElementMetricsOnLoadMinVersion = 0,
  };
  virtual ~AnchorElementMetricsHost() {}

  
  virtual void ReportAnchorElementMetricsOnClick(AnchorElementMetricsPtr metrics) = 0;

  
  virtual void ReportAnchorElementMetricsOnLoad(std::vector<AnchorElementMetricsPtr> metrics) = 0;
};

class BLINK_COMMON_EXPORT AnchorElementMetricsHostProxy
    : public AnchorElementMetricsHost {
 public:
  using InterfaceType = AnchorElementMetricsHost;

  explicit AnchorElementMetricsHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void ReportAnchorElementMetricsOnClick(AnchorElementMetricsPtr metrics) final;
  void ReportAnchorElementMetricsOnLoad(std::vector<AnchorElementMetricsPtr> metrics) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT AnchorElementMetricsHostStubDispatch {
 public:
  static bool Accept(AnchorElementMetricsHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AnchorElementMetricsHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AnchorElementMetricsHost>>
class AnchorElementMetricsHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AnchorElementMetricsHostStub() {}
  ~AnchorElementMetricsHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AnchorElementMetricsHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AnchorElementMetricsHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT AnchorElementMetricsHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT AnchorElementMetrics {
 public:
  using DataView = AnchorElementMetricsDataView;
  using Data_ = internal::AnchorElementMetrics_Data;

  template <typename... Args>
  static AnchorElementMetricsPtr New(Args&&... args) {
    return AnchorElementMetricsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AnchorElementMetricsPtr From(const U& u) {
    return mojo::TypeConverter<AnchorElementMetricsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AnchorElementMetrics>::Convert(*this);
  }


  AnchorElementMetrics();

  AnchorElementMetrics(
      float ratio_area,
      float ratio_visible_area,
      float ratio_distance_top_to_visible_top,
      float ratio_distance_center_to_visible_top,
      float ratio_distance_root_top,
      float ratio_distance_root_bottom,
      bool is_in_iframe,
      bool contains_image,
      bool is_same_host,
      bool is_url_incremented_by_one,
      const GURL& source_url,
      const GURL& target_url);

  ~AnchorElementMetrics();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AnchorElementMetricsPtr>
  AnchorElementMetricsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AnchorElementMetrics>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AnchorElementMetrics::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AnchorElementMetrics::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AnchorElementMetrics_UnserializedMessageContext<
            UserType, AnchorElementMetrics::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AnchorElementMetrics::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AnchorElementMetrics::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AnchorElementMetrics_UnserializedMessageContext<
            UserType, AnchorElementMetrics::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AnchorElementMetrics::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float ratio_area;
  
  float ratio_visible_area;
  
  float ratio_distance_top_to_visible_top;
  
  float ratio_distance_center_to_visible_top;
  
  float ratio_distance_root_top;
  
  float ratio_distance_root_bottom;
  
  bool is_in_iframe;
  
  bool contains_image;
  
  bool is_same_host;
  
  bool is_url_incremented_by_one;
  
  GURL source_url;
  
  GURL target_url;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
AnchorElementMetricsPtr AnchorElementMetrics::Clone() const {
  return New(
      mojo::Clone(ratio_area),
      mojo::Clone(ratio_visible_area),
      mojo::Clone(ratio_distance_top_to_visible_top),
      mojo::Clone(ratio_distance_center_to_visible_top),
      mojo::Clone(ratio_distance_root_top),
      mojo::Clone(ratio_distance_root_bottom),
      mojo::Clone(is_in_iframe),
      mojo::Clone(contains_image),
      mojo::Clone(is_same_host),
      mojo::Clone(is_url_incremented_by_one),
      mojo::Clone(source_url),
      mojo::Clone(target_url)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AnchorElementMetrics>::value>::type*>
bool AnchorElementMetrics::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->ratio_area, other_struct.ratio_area))
    return false;
  if (!mojo::Equals(this->ratio_visible_area, other_struct.ratio_visible_area))
    return false;
  if (!mojo::Equals(this->ratio_distance_top_to_visible_top, other_struct.ratio_distance_top_to_visible_top))
    return false;
  if (!mojo::Equals(this->ratio_distance_center_to_visible_top, other_struct.ratio_distance_center_to_visible_top))
    return false;
  if (!mojo::Equals(this->ratio_distance_root_top, other_struct.ratio_distance_root_top))
    return false;
  if (!mojo::Equals(this->ratio_distance_root_bottom, other_struct.ratio_distance_root_bottom))
    return false;
  if (!mojo::Equals(this->is_in_iframe, other_struct.is_in_iframe))
    return false;
  if (!mojo::Equals(this->contains_image, other_struct.contains_image))
    return false;
  if (!mojo::Equals(this->is_same_host, other_struct.is_same_host))
    return false;
  if (!mojo::Equals(this->is_url_incremented_by_one, other_struct.is_url_incremented_by_one))
    return false;
  if (!mojo::Equals(this->source_url, other_struct.source_url))
    return false;
  if (!mojo::Equals(this->target_url, other_struct.target_url))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::AnchorElementMetrics::DataView,
                                         ::blink::mojom::AnchorElementMetricsPtr> {
  static bool IsNull(const ::blink::mojom::AnchorElementMetricsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::AnchorElementMetricsPtr* output) { output->reset(); }

  static decltype(::blink::mojom::AnchorElementMetrics::ratio_area) ratio_area(
      const ::blink::mojom::AnchorElementMetricsPtr& input) {
    return input->ratio_area;
  }

  static decltype(::blink::mojom::AnchorElementMetrics::ratio_visible_area) ratio_visible_area(
      const ::blink::mojom::AnchorElementMetricsPtr& input) {
    return input->ratio_visible_area;
  }

  static decltype(::blink::mojom::AnchorElementMetrics::ratio_distance_top_to_visible_top) ratio_distance_top_to_visible_top(
      const ::blink::mojom::AnchorElementMetricsPtr& input) {
    return input->ratio_distance_top_to_visible_top;
  }

  static decltype(::blink::mojom::AnchorElementMetrics::ratio_distance_center_to_visible_top) ratio_distance_center_to_visible_top(
      const ::blink::mojom::AnchorElementMetricsPtr& input) {
    return input->ratio_distance_center_to_visible_top;
  }

  static decltype(::blink::mojom::AnchorElementMetrics::ratio_distance_root_top) ratio_distance_root_top(
      const ::blink::mojom::AnchorElementMetricsPtr& input) {
    return input->ratio_distance_root_top;
  }

  static decltype(::blink::mojom::AnchorElementMetrics::ratio_distance_root_bottom) ratio_distance_root_bottom(
      const ::blink::mojom::AnchorElementMetricsPtr& input) {
    return input->ratio_distance_root_bottom;
  }

  static decltype(::blink::mojom::AnchorElementMetrics::is_in_iframe) is_in_iframe(
      const ::blink::mojom::AnchorElementMetricsPtr& input) {
    return input->is_in_iframe;
  }

  static decltype(::blink::mojom::AnchorElementMetrics::contains_image) contains_image(
      const ::blink::mojom::AnchorElementMetricsPtr& input) {
    return input->contains_image;
  }

  static decltype(::blink::mojom::AnchorElementMetrics::is_same_host) is_same_host(
      const ::blink::mojom::AnchorElementMetricsPtr& input) {
    return input->is_same_host;
  }

  static decltype(::blink::mojom::AnchorElementMetrics::is_url_incremented_by_one) is_url_incremented_by_one(
      const ::blink::mojom::AnchorElementMetricsPtr& input) {
    return input->is_url_incremented_by_one;
  }

  static const decltype(::blink::mojom::AnchorElementMetrics::source_url)& source_url(
      const ::blink::mojom::AnchorElementMetricsPtr& input) {
    return input->source_url;
  }

  static const decltype(::blink::mojom::AnchorElementMetrics::target_url)& target_url(
      const ::blink::mojom::AnchorElementMetricsPtr& input) {
    return input->target_url;
  }

  static bool Read(::blink::mojom::AnchorElementMetrics::DataView input, ::blink::mojom::AnchorElementMetricsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_H_