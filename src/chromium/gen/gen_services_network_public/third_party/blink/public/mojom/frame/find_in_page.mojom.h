// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_H_

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
#include "third_party/blink/public/mojom/frame/find_in_page.mojom-shared.h"
#include "third_party/blink/public/mojom/frame/find_in_page.mojom-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-forward.h"
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

class FindInPageProxy;

template <typename ImplRefTraits>
class FindInPageStub;

class FindInPageRequestValidator;
class FindInPageResponseValidator;


class BLINK_COMMON_EXPORT FindInPage
    : public FindInPageInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = FindInPageInterfaceBase;
  using Proxy_ = FindInPageProxy;

  template <typename ImplRefTraits>
  using Stub_ = FindInPageStub<ImplRefTraits>;

  using RequestValidator_ = FindInPageRequestValidator;
  using ResponseValidator_ = FindInPageResponseValidator;
  enum MethodMinVersions : uint32_t {
    kFindMinVersion = 0,
    kStopFindingMinVersion = 0,
    kClearActiveFindMatchMinVersion = 0,
    kGetNearestFindResultMinVersion = 0,
    kActivateNearestFindResultMinVersion = 0,
    kSetClientMinVersion = 0,
    kFindMatchRectsMinVersion = 0,
  };
  virtual ~FindInPage() {}

  
  virtual void Find(int32_t request_id, const std::string& search_text, FindOptionsPtr options) = 0;

  
  virtual void StopFinding(StopFindAction action) = 0;

  
  virtual void ClearActiveFindMatch() = 0;


  using GetNearestFindResultCallback = base::OnceCallback<void(float)>;
  
  virtual void GetNearestFindResult(const gfx::PointF& point, GetNearestFindResultCallback callback) = 0;

  
  virtual void ActivateNearestFindResult(int32_t request_id, const gfx::PointF& point) = 0;

  
  virtual void SetClient(FindInPageClientPtr client) = 0;


  using FindMatchRectsCallback = base::OnceCallback<void(int32_t, const std::vector<gfx::RectF>&, const gfx::RectF&)>;
  
  virtual void FindMatchRects(int32_t current_version, FindMatchRectsCallback callback) = 0;
};

class FindInPageClientProxy;

template <typename ImplRefTraits>
class FindInPageClientStub;

class FindInPageClientRequestValidator;


class BLINK_COMMON_EXPORT FindInPageClient
    : public FindInPageClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = FindInPageClientInterfaceBase;
  using Proxy_ = FindInPageClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = FindInPageClientStub<ImplRefTraits>;

  using RequestValidator_ = FindInPageClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetNumberOfMatchesMinVersion = 0,
    kSetActiveMatchMinVersion = 0,
  };
  virtual ~FindInPageClient() {}

  
  virtual void SetNumberOfMatches(int32_t request_id, uint32_t number_of_matches, FindMatchUpdateType update_type) = 0;

  
  virtual void SetActiveMatch(int32_t request_id, const gfx::Rect& active_match_rect, int32_t active_match_ordinal, FindMatchUpdateType update_type) = 0;
};

class BLINK_COMMON_EXPORT FindInPageProxy
    : public FindInPage {
 public:
  using InterfaceType = FindInPage;

  explicit FindInPageProxy(mojo::MessageReceiverWithResponder* receiver);
  void Find(int32_t request_id, const std::string& search_text, FindOptionsPtr options) final;
  void StopFinding(StopFindAction action) final;
  void ClearActiveFindMatch() final;
  void GetNearestFindResult(const gfx::PointF& point, GetNearestFindResultCallback callback) final;
  void ActivateNearestFindResult(int32_t request_id, const gfx::PointF& point) final;
  void SetClient(FindInPageClientPtr client) final;
  void FindMatchRects(int32_t current_version, FindMatchRectsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT FindInPageClientProxy
    : public FindInPageClient {
 public:
  using InterfaceType = FindInPageClient;

  explicit FindInPageClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetNumberOfMatches(int32_t request_id, uint32_t number_of_matches, FindMatchUpdateType update_type) final;
  void SetActiveMatch(int32_t request_id, const gfx::Rect& active_match_rect, int32_t active_match_ordinal, FindMatchUpdateType update_type) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT FindInPageStubDispatch {
 public:
  static bool Accept(FindInPage* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FindInPage* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FindInPage>>
class FindInPageStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FindInPageStub() {}
  ~FindInPageStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FindInPageStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FindInPageStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT FindInPageClientStubDispatch {
 public:
  static bool Accept(FindInPageClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FindInPageClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FindInPageClient>>
class FindInPageClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FindInPageClientStub() {}
  ~FindInPageClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FindInPageClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FindInPageClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT FindInPageRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT FindInPageClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT FindInPageResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT FindOptions {
 public:
  using DataView = FindOptionsDataView;
  using Data_ = internal::FindOptions_Data;

  template <typename... Args>
  static FindOptionsPtr New(Args&&... args) {
    return FindOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FindOptionsPtr From(const U& u) {
    return mojo::TypeConverter<FindOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FindOptions>::Convert(*this);
  }


  FindOptions();

  FindOptions(
      bool forward,
      bool match_case,
      bool find_next,
      bool force,
      bool run_synchronously_for_testing);

  ~FindOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FindOptionsPtr>
  FindOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FindOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FindOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FindOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FindOptions_UnserializedMessageContext<
            UserType, FindOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FindOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FindOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FindOptions_UnserializedMessageContext<
            UserType, FindOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FindOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool forward;
  
  bool match_case;
  
  bool find_next;
  
  bool force;
  
  bool run_synchronously_for_testing;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
FindOptionsPtr FindOptions::Clone() const {
  return New(
      mojo::Clone(forward),
      mojo::Clone(match_case),
      mojo::Clone(find_next),
      mojo::Clone(force),
      mojo::Clone(run_synchronously_for_testing)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FindOptions>::value>::type*>
bool FindOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->forward, other_struct.forward))
    return false;
  if (!mojo::Equals(this->match_case, other_struct.match_case))
    return false;
  if (!mojo::Equals(this->find_next, other_struct.find_next))
    return false;
  if (!mojo::Equals(this->force, other_struct.force))
    return false;
  if (!mojo::Equals(this->run_synchronously_for_testing, other_struct.run_synchronously_for_testing))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::FindOptions::DataView,
                                         ::blink::mojom::FindOptionsPtr> {
  static bool IsNull(const ::blink::mojom::FindOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::FindOptionsPtr* output) { output->reset(); }

  static decltype(::blink::mojom::FindOptions::forward) forward(
      const ::blink::mojom::FindOptionsPtr& input) {
    return input->forward;
  }

  static decltype(::blink::mojom::FindOptions::match_case) match_case(
      const ::blink::mojom::FindOptionsPtr& input) {
    return input->match_case;
  }

  static decltype(::blink::mojom::FindOptions::find_next) find_next(
      const ::blink::mojom::FindOptionsPtr& input) {
    return input->find_next;
  }

  static decltype(::blink::mojom::FindOptions::force) force(
      const ::blink::mojom::FindOptionsPtr& input) {
    return input->force;
  }

  static decltype(::blink::mojom::FindOptions::run_synchronously_for_testing) run_synchronously_for_testing(
      const ::blink::mojom::FindOptionsPtr& input) {
    return input->run_synchronously_for_testing;
  }

  static bool Read(::blink::mojom::FindOptions::DataView input, ::blink::mojom::FindOptionsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_H_