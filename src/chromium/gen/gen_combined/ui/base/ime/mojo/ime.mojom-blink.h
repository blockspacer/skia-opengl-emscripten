// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_MOJOM_BLINK_H_
#define UI_BASE_IME_MOJO_IME_MOJOM_BLINK_H_

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
#include "ui/base/ime/mojo/ime.mojom-shared.h"
#include "ui/base/ime/mojo/ime.mojom-blink-forward.h"
#include "ui/base/ime/mojo/ime_types.mojom-blink-forward.h"
#include "ui/events/mojo/event.mojom-blink-forward.h"
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




namespace ime {
namespace mojom {
namespace blink {

class ImeEngineProxy;

template <typename ImplRefTraits>
class ImeEngineStub;

class ImeEngineRequestValidator;
class ImeEngineResponseValidator;


class  ImeEngine
    : public ImeEngineInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ImeEngineInterfaceBase;
  using Proxy_ = ImeEngineProxy;

  template <typename ImplRefTraits>
  using Stub_ = ImeEngineStub<ImplRefTraits>;

  using RequestValidator_ = ImeEngineRequestValidator;
  using ResponseValidator_ = ImeEngineResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartInputMinVersion = 0,
    kFinishInputMinVersion = 0,
    kCancelInputMinVersion = 0,
    kProcessKeyEventMinVersion = 0,
    kUpdateSurroundingInfoMinVersion = 0,
    kUpdateCompositionBoundsMinVersion = 0,
  };
  virtual ~ImeEngine() {}

  
  virtual void StartInput(EditorInfoPtr info) = 0;

  
  virtual void FinishInput() = 0;

  
  virtual void CancelInput() = 0;


  using ProcessKeyEventCallback = base::OnceCallback<void(bool)>;
  
  virtual void ProcessKeyEvent(::ui::mojom::blink::EventPtr key_event, ProcessKeyEventCallback callback) = 0;

  
  virtual void UpdateSurroundingInfo(const WTF::String& text, int32_t cursor, int32_t anchor, int32_t offset) = 0;

  
  virtual void UpdateCompositionBounds(const WTF::Vector<::blink::WebRect>& bounds) = 0;
};

class ImeEngineClientProxy;

template <typename ImplRefTraits>
class ImeEngineClientStub;

class ImeEngineClientRequestValidator;


class  ImeEngineClient
    : public ImeEngineClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ImeEngineClientInterfaceBase;
  using Proxy_ = ImeEngineClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ImeEngineClientStub<ImplRefTraits>;

  using RequestValidator_ = ImeEngineClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCommitTextMinVersion = 0,
    kUpdateCompositionTextMinVersion = 0,
    kDeleteSurroundingTextMinVersion = 0,
    kSendKeyEventMinVersion = 0,
    kReconnectMinVersion = 0,
  };
  virtual ~ImeEngineClient() {}

  
  virtual void CommitText(const WTF::String& text) = 0;

  
  virtual void UpdateCompositionText(::ui::mojom::blink::CompositionTextPtr composition_text, uint32_t cursor_pos, bool visible) = 0;

  
  virtual void DeleteSurroundingText(int32_t offset, uint32_t length) = 0;

  
  virtual void SendKeyEvent(::ui::mojom::blink::EventPtr key_event) = 0;

  
  virtual void Reconnect() = 0;
};

class ImeEngineFactoryProxy;

template <typename ImplRefTraits>
class ImeEngineFactoryStub;

class ImeEngineFactoryRequestValidator;


class  ImeEngineFactory
    : public ImeEngineFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ImeEngineFactoryInterfaceBase;
  using Proxy_ = ImeEngineFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = ImeEngineFactoryStub<ImplRefTraits>;

  using RequestValidator_ = ImeEngineFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateEngineMinVersion = 0,
  };
  virtual ~ImeEngineFactory() {}

  
  virtual void CreateEngine(ImeEngineRequest engine_request, ImeEngineClientPtr client) = 0;
};

class  ImeEngineProxy
    : public ImeEngine {
 public:
  using InterfaceType = ImeEngine;

  explicit ImeEngineProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartInput(EditorInfoPtr info) final;
  void FinishInput() final;
  void CancelInput() final;
  void ProcessKeyEvent(::ui::mojom::blink::EventPtr key_event, ProcessKeyEventCallback callback) final;
  void UpdateSurroundingInfo(const WTF::String& text, int32_t cursor, int32_t anchor, int32_t offset) final;
  void UpdateCompositionBounds(const WTF::Vector<::blink::WebRect>& bounds) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ImeEngineClientProxy
    : public ImeEngineClient {
 public:
  using InterfaceType = ImeEngineClient;

  explicit ImeEngineClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void CommitText(const WTF::String& text) final;
  void UpdateCompositionText(::ui::mojom::blink::CompositionTextPtr composition_text, uint32_t cursor_pos, bool visible) final;
  void DeleteSurroundingText(int32_t offset, uint32_t length) final;
  void SendKeyEvent(::ui::mojom::blink::EventPtr key_event) final;
  void Reconnect() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ImeEngineFactoryProxy
    : public ImeEngineFactory {
 public:
  using InterfaceType = ImeEngineFactory;

  explicit ImeEngineFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateEngine(ImeEngineRequest engine_request, ImeEngineClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ImeEngineStubDispatch {
 public:
  static bool Accept(ImeEngine* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ImeEngine* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ImeEngine>>
class ImeEngineStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ImeEngineStub() {}
  ~ImeEngineStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImeEngineStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImeEngineStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ImeEngineClientStubDispatch {
 public:
  static bool Accept(ImeEngineClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ImeEngineClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ImeEngineClient>>
class ImeEngineClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ImeEngineClientStub() {}
  ~ImeEngineClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImeEngineClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImeEngineClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ImeEngineFactoryStubDispatch {
 public:
  static bool Accept(ImeEngineFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ImeEngineFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ImeEngineFactory>>
class ImeEngineFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ImeEngineFactoryStub() {}
  ~ImeEngineFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImeEngineFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImeEngineFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ImeEngineRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ImeEngineClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ImeEngineFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ImeEngineResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  EditorInfo {
 public:
  using DataView = EditorInfoDataView;
  using Data_ = internal::EditorInfo_Data;

  template <typename... Args>
  static EditorInfoPtr New(Args&&... args) {
    return EditorInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EditorInfoPtr From(const U& u) {
    return mojo::TypeConverter<EditorInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EditorInfo>::Convert(*this);
  }


  EditorInfo();

  EditorInfo(
      ::ui::mojom::blink::TextInputType type,
      ::ui::mojom::blink::TextInputMode mode,
      int32_t flags,
      ::ui::mojom::blink::FocusReason focus_reason,
      bool should_do_learning);

  ~EditorInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EditorInfoPtr>
  EditorInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EditorInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EditorInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        EditorInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::EditorInfo_UnserializedMessageContext<
            UserType, EditorInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<EditorInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return EditorInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::EditorInfo_UnserializedMessageContext<
            UserType, EditorInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<EditorInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::ui::mojom::blink::TextInputType type;
  
  ::ui::mojom::blink::TextInputMode mode;
  
  int32_t flags;
  
  ::ui::mojom::blink::FocusReason focus_reason;
  
  bool should_do_learning;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
EditorInfoPtr EditorInfo::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(mode),
      mojo::Clone(flags),
      mojo::Clone(focus_reason),
      mojo::Clone(should_do_learning)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EditorInfo>::value>::type*>
bool EditorInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->mode, other_struct.mode))
    return false;
  if (!mojo::Equals(this->flags, other_struct.flags))
    return false;
  if (!mojo::Equals(this->focus_reason, other_struct.focus_reason))
    return false;
  if (!mojo::Equals(this->should_do_learning, other_struct.should_do_learning))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace ime

namespace mojo {


template <>
struct  StructTraits<::ime::mojom::blink::EditorInfo::DataView,
                                         ::ime::mojom::blink::EditorInfoPtr> {
  static bool IsNull(const ::ime::mojom::blink::EditorInfoPtr& input) { return !input; }
  static void SetToNull(::ime::mojom::blink::EditorInfoPtr* output) { output->reset(); }

  static decltype(::ime::mojom::blink::EditorInfo::type) type(
      const ::ime::mojom::blink::EditorInfoPtr& input) {
    return input->type;
  }

  static decltype(::ime::mojom::blink::EditorInfo::mode) mode(
      const ::ime::mojom::blink::EditorInfoPtr& input) {
    return input->mode;
  }

  static decltype(::ime::mojom::blink::EditorInfo::flags) flags(
      const ::ime::mojom::blink::EditorInfoPtr& input) {
    return input->flags;
  }

  static decltype(::ime::mojom::blink::EditorInfo::focus_reason) focus_reason(
      const ::ime::mojom::blink::EditorInfoPtr& input) {
    return input->focus_reason;
  }

  static decltype(::ime::mojom::blink::EditorInfo::should_do_learning) should_do_learning(
      const ::ime::mojom::blink::EditorInfoPtr& input) {
    return input->should_do_learning;
  }

  static bool Read(::ime::mojom::blink::EditorInfo::DataView input, ::ime::mojom::blink::EditorInfoPtr* output);
};

}  // namespace mojo

#endif  // UI_BASE_IME_MOJO_IME_MOJOM_BLINK_H_