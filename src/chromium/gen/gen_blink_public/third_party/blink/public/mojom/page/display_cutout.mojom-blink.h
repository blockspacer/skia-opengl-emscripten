// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/page/display_cutout.mojom-shared.h"
#include "third_party/blink/public/mojom/page/display_cutout.mojom-blink-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink-forward.h"

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
struct blink_mojom_internal_ViewportFit_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ViewportFit& value) {
    using utype = std::underlying_type<::blink::mojom::ViewportFit>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ViewportFit& left, const ::blink::mojom::ViewportFit& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ViewportFit>
    : public GenericHashTraits<::blink::mojom::ViewportFit> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ViewportFit& value) {
    return value == static_cast<::blink::mojom::ViewportFit>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ViewportFit& slot, bool) {
    slot = static_cast<::blink::mojom::ViewportFit>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ViewportFit& value) {
    return value == static_cast<::blink::mojom::ViewportFit>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class DisplayCutoutHostProxy;

template <typename ImplRefTraits>
class DisplayCutoutHostStub;

class DisplayCutoutHostRequestValidator;


class PLATFORM_EXPORT DisplayCutoutHost
    : public DisplayCutoutHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DisplayCutoutHostInterfaceBase;
  using Proxy_ = DisplayCutoutHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = DisplayCutoutHostStub<ImplRefTraits>;

  using RequestValidator_ = DisplayCutoutHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kNotifyViewportFitChangedMinVersion = 0,
  };
  virtual ~DisplayCutoutHost() {}

  
  virtual void NotifyViewportFitChanged(ViewportFit value) = 0;
};

class DisplayCutoutClientProxy;

template <typename ImplRefTraits>
class DisplayCutoutClientStub;

class DisplayCutoutClientRequestValidator;


class PLATFORM_EXPORT DisplayCutoutClient
    : public DisplayCutoutClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DisplayCutoutClientInterfaceBase;
  using Proxy_ = DisplayCutoutClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = DisplayCutoutClientStub<ImplRefTraits>;

  using RequestValidator_ = DisplayCutoutClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetSafeAreaMinVersion = 0,
  };
  virtual ~DisplayCutoutClient() {}

  
  virtual void SetSafeArea(DisplayCutoutSafeAreaPtr safe_area) = 0;
};

class PLATFORM_EXPORT DisplayCutoutHostProxy
    : public DisplayCutoutHost {
 public:
  using InterfaceType = DisplayCutoutHost;

  explicit DisplayCutoutHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void NotifyViewportFitChanged(ViewportFit value) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT DisplayCutoutClientProxy
    : public DisplayCutoutClient {
 public:
  using InterfaceType = DisplayCutoutClient;

  explicit DisplayCutoutClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetSafeArea(DisplayCutoutSafeAreaPtr safe_area) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT DisplayCutoutHostStubDispatch {
 public:
  static bool Accept(DisplayCutoutHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DisplayCutoutHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DisplayCutoutHost>>
class DisplayCutoutHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DisplayCutoutHostStub() {}
  ~DisplayCutoutHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DisplayCutoutHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DisplayCutoutHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT DisplayCutoutClientStubDispatch {
 public:
  static bool Accept(DisplayCutoutClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DisplayCutoutClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DisplayCutoutClient>>
class DisplayCutoutClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DisplayCutoutClientStub() {}
  ~DisplayCutoutClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DisplayCutoutClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DisplayCutoutClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT DisplayCutoutHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT DisplayCutoutClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class PLATFORM_EXPORT DisplayCutoutSafeArea {
 public:
  using DataView = DisplayCutoutSafeAreaDataView;
  using Data_ = internal::DisplayCutoutSafeArea_Data;

  template <typename... Args>
  static DisplayCutoutSafeAreaPtr New(Args&&... args) {
    return DisplayCutoutSafeAreaPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DisplayCutoutSafeAreaPtr From(const U& u) {
    return mojo::TypeConverter<DisplayCutoutSafeAreaPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DisplayCutoutSafeArea>::Convert(*this);
  }


  DisplayCutoutSafeArea();

  DisplayCutoutSafeArea(
      int32_t top,
      int32_t left,
      int32_t bottom,
      int32_t right);

  ~DisplayCutoutSafeArea();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DisplayCutoutSafeAreaPtr>
  DisplayCutoutSafeAreaPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DisplayCutoutSafeArea>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DisplayCutoutSafeArea::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DisplayCutoutSafeArea::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DisplayCutoutSafeArea_UnserializedMessageContext<
            UserType, DisplayCutoutSafeArea::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DisplayCutoutSafeArea::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DisplayCutoutSafeArea::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DisplayCutoutSafeArea_UnserializedMessageContext<
            UserType, DisplayCutoutSafeArea::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DisplayCutoutSafeArea::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t top;
  
  int32_t left;
  
  int32_t bottom;
  
  int32_t right;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
DisplayCutoutSafeAreaPtr DisplayCutoutSafeArea::Clone() const {
  return New(
      mojo::Clone(top),
      mojo::Clone(left),
      mojo::Clone(bottom),
      mojo::Clone(right)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DisplayCutoutSafeArea>::value>::type*>
bool DisplayCutoutSafeArea::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->top, other_struct.top))
    return false;
  if (!mojo::Equals(this->left, other_struct.left))
    return false;
  if (!mojo::Equals(this->bottom, other_struct.bottom))
    return false;
  if (!mojo::Equals(this->right, other_struct.right))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::DisplayCutoutSafeArea::DataView,
                                         ::blink::mojom::blink::DisplayCutoutSafeAreaPtr> {
  static bool IsNull(const ::blink::mojom::blink::DisplayCutoutSafeAreaPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::DisplayCutoutSafeAreaPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::DisplayCutoutSafeArea::top) top(
      const ::blink::mojom::blink::DisplayCutoutSafeAreaPtr& input) {
    return input->top;
  }

  static decltype(::blink::mojom::blink::DisplayCutoutSafeArea::left) left(
      const ::blink::mojom::blink::DisplayCutoutSafeAreaPtr& input) {
    return input->left;
  }

  static decltype(::blink::mojom::blink::DisplayCutoutSafeArea::bottom) bottom(
      const ::blink::mojom::blink::DisplayCutoutSafeAreaPtr& input) {
    return input->bottom;
  }

  static decltype(::blink::mojom::blink::DisplayCutoutSafeArea::right) right(
      const ::blink::mojom::blink::DisplayCutoutSafeAreaPtr& input) {
    return input->right;
  }

  static bool Read(::blink::mojom::blink::DisplayCutoutSafeArea::DataView input, ::blink::mojom::blink::DisplayCutoutSafeAreaPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_BLINK_H_