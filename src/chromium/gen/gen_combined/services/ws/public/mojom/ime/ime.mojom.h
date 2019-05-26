// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_H_
#define SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_H_

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
#include "services/ws/public/mojom/ime/ime.mojom-shared.h"
#include "services/ws/public/mojom/ime/ime.mojom-forward.h"
#include "mojo/public/mojom/base/text_direction.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "ui/base/ime/mojo/ime_types.mojom.h"
#include "ui/events/mojo/event.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/range/mojo/range.mojom.h"
#include "ui/platform_window/mojo/text_input_state.mojom.h"
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
#include "ui/base/ime/candidate_window.h"




namespace ws {
namespace mojom {

class IMEDriverProxy;

template <typename ImplRefTraits>
class IMEDriverStub;

class IMEDriverRequestValidator;


class  IMEDriver
    : public IMEDriverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IMEDriverInterfaceBase;
  using Proxy_ = IMEDriverProxy;

  template <typename ImplRefTraits>
  using Stub_ = IMEDriverStub<ImplRefTraits>;

  using RequestValidator_ = IMEDriverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartSessionMinVersion = 0,
  };
  virtual ~IMEDriver() {}

  
  virtual void StartSession(InputMethodRequest input_method_request, TextInputClientPtr client, SessionDetailsPtr details) = 0;
};

class IMERegistrarProxy;

template <typename ImplRefTraits>
class IMERegistrarStub;

class IMERegistrarRequestValidator;


class  IMERegistrar
    : public IMERegistrarInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IMERegistrarInterfaceBase;
  using Proxy_ = IMERegistrarProxy;

  template <typename ImplRefTraits>
  using Stub_ = IMERegistrarStub<ImplRefTraits>;

  using RequestValidator_ = IMERegistrarRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRegisterDriverMinVersion = 0,
  };
  virtual ~IMERegistrar() {}

  
  virtual void RegisterDriver(IMEDriverPtr driver) = 0;
};

class InputMethodProxy;

template <typename ImplRefTraits>
class InputMethodStub;

class InputMethodRequestValidator;
class InputMethodResponseValidator;


class  InputMethod
    : public InputMethodInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = InputMethodInterfaceBase;
  using Proxy_ = InputMethodProxy;

  template <typename ImplRefTraits>
  using Stub_ = InputMethodStub<ImplRefTraits>;

  using RequestValidator_ = InputMethodRequestValidator;
  using ResponseValidator_ = InputMethodResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnTextInputStateChangedMinVersion = 0,
    kOnCaretBoundsChangedMinVersion = 0,
    kOnTextInputClientDataChangedMinVersion = 0,
    kProcessKeyEventMinVersion = 0,
    kCancelCompositionMinVersion = 0,
    kShowVirtualKeyboardIfEnabledMinVersion = 0,
  };
  virtual ~InputMethod() {}

  
  virtual void OnTextInputStateChanged(TextInputStatePtr text_input_state) = 0;

  
  virtual void OnCaretBoundsChanged(const gfx::Rect& caret_bounds) = 0;

  
  virtual void OnTextInputClientDataChanged(TextInputClientDataPtr data) = 0;


  using ProcessKeyEventCallback = base::OnceCallback<void(bool)>;
  
  virtual void ProcessKeyEvent(std::unique_ptr<ui::Event> key_event, ProcessKeyEventCallback callback) = 0;

  
  virtual void CancelComposition() = 0;

  
  virtual void ShowVirtualKeyboardIfEnabled() = 0;
};

class TextInputClientProxy;

template <typename ImplRefTraits>
class TextInputClientStub;

class TextInputClientRequestValidator;
class TextInputClientResponseValidator;


class  TextInputClient
    : public TextInputClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TextInputClientInterfaceBase;
  using Proxy_ = TextInputClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = TextInputClientStub<ImplRefTraits>;

  using RequestValidator_ = TextInputClientRequestValidator;
  using ResponseValidator_ = TextInputClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetCompositionTextMinVersion = 0,
    kConfirmCompositionTextMinVersion = 0,
    kClearCompositionTextMinVersion = 0,
    kInsertTextMinVersion = 0,
    kInsertCharMinVersion = 0,
    kDispatchKeyEventPostIMEMinVersion = 0,
    kEnsureCaretNotInRectMinVersion = 0,
    kSetEditableSelectionRangeMinVersion = 0,
    kDeleteRangeMinVersion = 0,
    kOnInputMethodChangedMinVersion = 0,
    kChangeTextDirectionAndLayoutAlignmentMinVersion = 0,
    kExtendSelectionAndDeleteMinVersion = 0,
  };
  virtual ~TextInputClient() {}

  
  virtual void SetCompositionText(const ui::CompositionText& composition) = 0;

  
  virtual void ConfirmCompositionText() = 0;

  
  virtual void ClearCompositionText() = 0;

  
  virtual void InsertText(const base::string16& text) = 0;

  
  virtual void InsertChar(std::unique_ptr<ui::Event> event) = 0;


  using DispatchKeyEventPostIMECallback = base::OnceCallback<void(bool, bool)>;
  
  virtual void DispatchKeyEventPostIME(std::unique_ptr<ui::Event> event, DispatchKeyEventPostIMECallback callback) = 0;

  
  virtual void EnsureCaretNotInRect(const gfx::Rect& rect) = 0;

  
  virtual void SetEditableSelectionRange(const gfx::Range& range) = 0;

  
  virtual void DeleteRange(const gfx::Range& range) = 0;

  
  virtual void OnInputMethodChanged() = 0;

  
  virtual void ChangeTextDirectionAndLayoutAlignment(base::i18n::TextDirection direction) = 0;

  
  virtual void ExtendSelectionAndDelete(uint32_t before, uint32_t after) = 0;
};

class  IMEDriverProxy
    : public IMEDriver {
 public:
  using InterfaceType = IMEDriver;

  explicit IMEDriverProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartSession(InputMethodRequest input_method_request, TextInputClientPtr client, SessionDetailsPtr details) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  IMERegistrarProxy
    : public IMERegistrar {
 public:
  using InterfaceType = IMERegistrar;

  explicit IMERegistrarProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterDriver(IMEDriverPtr driver) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  InputMethodProxy
    : public InputMethod {
 public:
  using InterfaceType = InputMethod;

  explicit InputMethodProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnTextInputStateChanged(TextInputStatePtr text_input_state) final;
  void OnCaretBoundsChanged(const gfx::Rect& caret_bounds) final;
  void OnTextInputClientDataChanged(TextInputClientDataPtr data) final;
  void ProcessKeyEvent(std::unique_ptr<ui::Event> key_event, ProcessKeyEventCallback callback) final;
  void CancelComposition() final;
  void ShowVirtualKeyboardIfEnabled() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  TextInputClientProxy
    : public TextInputClient {
 public:
  using InterfaceType = TextInputClient;

  explicit TextInputClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetCompositionText(const ui::CompositionText& composition) final;
  void ConfirmCompositionText() final;
  void ClearCompositionText() final;
  void InsertText(const base::string16& text) final;
  void InsertChar(std::unique_ptr<ui::Event> event) final;
  void DispatchKeyEventPostIME(std::unique_ptr<ui::Event> event, DispatchKeyEventPostIMECallback callback) final;
  void EnsureCaretNotInRect(const gfx::Rect& rect) final;
  void SetEditableSelectionRange(const gfx::Range& range) final;
  void DeleteRange(const gfx::Range& range) final;
  void OnInputMethodChanged() final;
  void ChangeTextDirectionAndLayoutAlignment(base::i18n::TextDirection direction) final;
  void ExtendSelectionAndDelete(uint32_t before, uint32_t after) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  IMEDriverStubDispatch {
 public:
  static bool Accept(IMEDriver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IMEDriver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IMEDriver>>
class IMEDriverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IMEDriverStub() {}
  ~IMEDriverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IMEDriverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IMEDriverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  IMERegistrarStubDispatch {
 public:
  static bool Accept(IMERegistrar* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IMERegistrar* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IMERegistrar>>
class IMERegistrarStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IMERegistrarStub() {}
  ~IMERegistrarStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IMERegistrarStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IMERegistrarStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InputMethodStubDispatch {
 public:
  static bool Accept(InputMethod* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InputMethod* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InputMethod>>
class InputMethodStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InputMethodStub() {}
  ~InputMethodStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputMethodStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputMethodStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TextInputClientStubDispatch {
 public:
  static bool Accept(TextInputClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TextInputClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TextInputClient>>
class TextInputClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TextInputClientStub() {}
  ~TextInputClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextInputClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextInputClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  IMEDriverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  IMERegistrarRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  InputMethodRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TextInputClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  InputMethodResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TextInputClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};







class  TextInputState {
 public:
  using DataView = TextInputStateDataView;
  using Data_ = internal::TextInputState_Data;

  template <typename... Args>
  static TextInputStatePtr New(Args&&... args) {
    return TextInputStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TextInputStatePtr From(const U& u) {
    return mojo::TypeConverter<TextInputStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TextInputState>::Convert(*this);
  }


  TextInputState();

  TextInputState(
      ui::TextInputType text_input_type,
      ui::TextInputMode text_input_mode,
      base::i18n::TextDirection text_direction,
      int32_t text_input_flags);

  ~TextInputState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TextInputStatePtr>
  TextInputStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TextInputState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TextInputState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TextInputState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TextInputState_UnserializedMessageContext<
            UserType, TextInputState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TextInputState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TextInputState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TextInputState_UnserializedMessageContext<
            UserType, TextInputState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TextInputState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ui::TextInputType text_input_type;
  
  ui::TextInputMode text_input_mode;
  
  base::i18n::TextDirection text_direction;
  
  int32_t text_input_flags;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  CandidateWindowProperties {
 public:
  using DataView = CandidateWindowPropertiesDataView;
  using Data_ = internal::CandidateWindowProperties_Data;

  template <typename... Args>
  static CandidateWindowPropertiesPtr New(Args&&... args) {
    return CandidateWindowPropertiesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CandidateWindowPropertiesPtr From(const U& u) {
    return mojo::TypeConverter<CandidateWindowPropertiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CandidateWindowProperties>::Convert(*this);
  }


  CandidateWindowProperties();

  CandidateWindowProperties(
      int32_t page_size,
      bool vertical,
      const std::string& auxiliary_text,
      bool auxiliary_text_visible,
      int32_t cursor_position,
      bool cursor_visible,
      CandidateWindowPosition window_position);

  ~CandidateWindowProperties();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CandidateWindowPropertiesPtr>
  CandidateWindowPropertiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CandidateWindowProperties>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CandidateWindowProperties::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CandidateWindowProperties::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CandidateWindowProperties_UnserializedMessageContext<
            UserType, CandidateWindowProperties::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CandidateWindowProperties::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CandidateWindowProperties::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CandidateWindowProperties_UnserializedMessageContext<
            UserType, CandidateWindowProperties::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CandidateWindowProperties::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t page_size;
  
  bool vertical;
  
  std::string auxiliary_text;
  
  bool auxiliary_text_visible;
  
  int32_t cursor_position;
  
  bool cursor_visible;
  
  CandidateWindowPosition window_position;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  CandidateWindowEntry {
 public:
  using DataView = CandidateWindowEntryDataView;
  using Data_ = internal::CandidateWindowEntry_Data;

  template <typename... Args>
  static CandidateWindowEntryPtr New(Args&&... args) {
    return CandidateWindowEntryPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CandidateWindowEntryPtr From(const U& u) {
    return mojo::TypeConverter<CandidateWindowEntryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CandidateWindowEntry>::Convert(*this);
  }


  CandidateWindowEntry();

  CandidateWindowEntry(
      const base::string16& value,
      const base::string16& label,
      const base::string16& annotation,
      const base::string16& description_title,
      const base::string16& description_body);

  ~CandidateWindowEntry();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CandidateWindowEntryPtr>
  CandidateWindowEntryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CandidateWindowEntry>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CandidateWindowEntry::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CandidateWindowEntry::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CandidateWindowEntry_UnserializedMessageContext<
            UserType, CandidateWindowEntry::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CandidateWindowEntry::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CandidateWindowEntry::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CandidateWindowEntry_UnserializedMessageContext<
            UserType, CandidateWindowEntry::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CandidateWindowEntry::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::string16 value;
  
  base::string16 label;
  
  base::string16 annotation;
  
  base::string16 description_title;
  
  base::string16 description_body;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  TextInputClientData {
 public:
  using DataView = TextInputClientDataDataView;
  using Data_ = internal::TextInputClientData_Data;

  template <typename... Args>
  static TextInputClientDataPtr New(Args&&... args) {
    return TextInputClientDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TextInputClientDataPtr From(const U& u) {
    return mojo::TypeConverter<TextInputClientDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TextInputClientData>::Convert(*this);
  }


  TextInputClientData();

  TextInputClientData(
      const base::Optional<gfx::Range>& text_range,
      const base::Optional<base::string16>& text,
      bool has_composition_text,
      const base::Optional<gfx::Range>& composition_text_range,
      const base::Optional<gfx::Range>& editable_selection_range,
      const base::Optional<std::vector<bool>>& edit_command_enabled);

  ~TextInputClientData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TextInputClientDataPtr>
  TextInputClientDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TextInputClientData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TextInputClientData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TextInputClientData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TextInputClientData_UnserializedMessageContext<
            UserType, TextInputClientData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TextInputClientData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TextInputClientData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TextInputClientData_UnserializedMessageContext<
            UserType, TextInputClientData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TextInputClientData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::Optional<gfx::Range> text_range;
  
  base::Optional<base::string16> text;
  
  bool has_composition_text;
  
  base::Optional<gfx::Range> composition_text_range;
  
  base::Optional<gfx::Range> editable_selection_range;
  
  base::Optional<std::vector<bool>> edit_command_enabled;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  SessionDetails {
 public:
  using DataView = SessionDetailsDataView;
  using Data_ = internal::SessionDetails_Data;

  template <typename... Args>
  static SessionDetailsPtr New(Args&&... args) {
    return SessionDetailsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SessionDetailsPtr From(const U& u) {
    return mojo::TypeConverter<SessionDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SessionDetails>::Convert(*this);
  }


  SessionDetails();

  SessionDetails(
      TextInputStatePtr state,
      const gfx::Rect& caret_bounds,
      TextInputClientDataPtr data,
      ui::TextInputClient::FocusReason focus_reason,
      int64_t client_source_for_metrics,
      bool should_do_learning);

  ~SessionDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SessionDetailsPtr>
  SessionDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SessionDetails>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SessionDetails::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SessionDetails::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SessionDetails_UnserializedMessageContext<
            UserType, SessionDetails::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SessionDetails::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SessionDetails::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SessionDetails_UnserializedMessageContext<
            UserType, SessionDetails::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SessionDetails::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  TextInputStatePtr state;
  
  gfx::Rect caret_bounds;
  
  TextInputClientDataPtr data;
  
  ui::TextInputClient::FocusReason focus_reason;
  
  int64_t client_source_for_metrics;
  
  bool should_do_learning;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SessionDetails);
};

template <typename StructPtrType>
CandidateWindowPropertiesPtr CandidateWindowProperties::Clone() const {
  return New(
      mojo::Clone(page_size),
      mojo::Clone(vertical),
      mojo::Clone(auxiliary_text),
      mojo::Clone(auxiliary_text_visible),
      mojo::Clone(cursor_position),
      mojo::Clone(cursor_visible),
      mojo::Clone(window_position)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CandidateWindowProperties>::value>::type*>
bool CandidateWindowProperties::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->page_size, other_struct.page_size))
    return false;
  if (!mojo::Equals(this->vertical, other_struct.vertical))
    return false;
  if (!mojo::Equals(this->auxiliary_text, other_struct.auxiliary_text))
    return false;
  if (!mojo::Equals(this->auxiliary_text_visible, other_struct.auxiliary_text_visible))
    return false;
  if (!mojo::Equals(this->cursor_position, other_struct.cursor_position))
    return false;
  if (!mojo::Equals(this->cursor_visible, other_struct.cursor_visible))
    return false;
  if (!mojo::Equals(this->window_position, other_struct.window_position))
    return false;
  return true;
}
template <typename StructPtrType>
CandidateWindowEntryPtr CandidateWindowEntry::Clone() const {
  return New(
      mojo::Clone(value),
      mojo::Clone(label),
      mojo::Clone(annotation),
      mojo::Clone(description_title),
      mojo::Clone(description_body)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CandidateWindowEntry>::value>::type*>
bool CandidateWindowEntry::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  if (!mojo::Equals(this->label, other_struct.label))
    return false;
  if (!mojo::Equals(this->annotation, other_struct.annotation))
    return false;
  if (!mojo::Equals(this->description_title, other_struct.description_title))
    return false;
  if (!mojo::Equals(this->description_body, other_struct.description_body))
    return false;
  return true;
}
template <typename StructPtrType>
TextInputStatePtr TextInputState::Clone() const {
  return New(
      mojo::Clone(text_input_type),
      mojo::Clone(text_input_mode),
      mojo::Clone(text_direction),
      mojo::Clone(text_input_flags)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TextInputState>::value>::type*>
bool TextInputState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->text_input_type, other_struct.text_input_type))
    return false;
  if (!mojo::Equals(this->text_input_mode, other_struct.text_input_mode))
    return false;
  if (!mojo::Equals(this->text_direction, other_struct.text_direction))
    return false;
  if (!mojo::Equals(this->text_input_flags, other_struct.text_input_flags))
    return false;
  return true;
}
template <typename StructPtrType>
TextInputClientDataPtr TextInputClientData::Clone() const {
  return New(
      mojo::Clone(text_range),
      mojo::Clone(text),
      mojo::Clone(has_composition_text),
      mojo::Clone(composition_text_range),
      mojo::Clone(editable_selection_range),
      mojo::Clone(edit_command_enabled)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TextInputClientData>::value>::type*>
bool TextInputClientData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->text_range, other_struct.text_range))
    return false;
  if (!mojo::Equals(this->text, other_struct.text))
    return false;
  if (!mojo::Equals(this->has_composition_text, other_struct.has_composition_text))
    return false;
  if (!mojo::Equals(this->composition_text_range, other_struct.composition_text_range))
    return false;
  if (!mojo::Equals(this->editable_selection_range, other_struct.editable_selection_range))
    return false;
  if (!mojo::Equals(this->edit_command_enabled, other_struct.edit_command_enabled))
    return false;
  return true;
}
template <typename StructPtrType>
SessionDetailsPtr SessionDetails::Clone() const {
  return New(
      mojo::Clone(state),
      mojo::Clone(caret_bounds),
      mojo::Clone(data),
      mojo::Clone(focus_reason),
      mojo::Clone(client_source_for_metrics),
      mojo::Clone(should_do_learning)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SessionDetails>::value>::type*>
bool SessionDetails::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->state, other_struct.state))
    return false;
  if (!mojo::Equals(this->caret_bounds, other_struct.caret_bounds))
    return false;
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  if (!mojo::Equals(this->focus_reason, other_struct.focus_reason))
    return false;
  if (!mojo::Equals(this->client_source_for_metrics, other_struct.client_source_for_metrics))
    return false;
  if (!mojo::Equals(this->should_do_learning, other_struct.should_do_learning))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ws

namespace mojo {


template <>
struct  StructTraits<::ws::mojom::CandidateWindowProperties::DataView,
                                         ::ws::mojom::CandidateWindowPropertiesPtr> {
  static bool IsNull(const ::ws::mojom::CandidateWindowPropertiesPtr& input) { return !input; }
  static void SetToNull(::ws::mojom::CandidateWindowPropertiesPtr* output) { output->reset(); }

  static decltype(::ws::mojom::CandidateWindowProperties::page_size) page_size(
      const ::ws::mojom::CandidateWindowPropertiesPtr& input) {
    return input->page_size;
  }

  static decltype(::ws::mojom::CandidateWindowProperties::vertical) vertical(
      const ::ws::mojom::CandidateWindowPropertiesPtr& input) {
    return input->vertical;
  }

  static const decltype(::ws::mojom::CandidateWindowProperties::auxiliary_text)& auxiliary_text(
      const ::ws::mojom::CandidateWindowPropertiesPtr& input) {
    return input->auxiliary_text;
  }

  static decltype(::ws::mojom::CandidateWindowProperties::auxiliary_text_visible) auxiliary_text_visible(
      const ::ws::mojom::CandidateWindowPropertiesPtr& input) {
    return input->auxiliary_text_visible;
  }

  static decltype(::ws::mojom::CandidateWindowProperties::cursor_position) cursor_position(
      const ::ws::mojom::CandidateWindowPropertiesPtr& input) {
    return input->cursor_position;
  }

  static decltype(::ws::mojom::CandidateWindowProperties::cursor_visible) cursor_visible(
      const ::ws::mojom::CandidateWindowPropertiesPtr& input) {
    return input->cursor_visible;
  }

  static decltype(::ws::mojom::CandidateWindowProperties::window_position) window_position(
      const ::ws::mojom::CandidateWindowPropertiesPtr& input) {
    return input->window_position;
  }

  static bool Read(::ws::mojom::CandidateWindowProperties::DataView input, ::ws::mojom::CandidateWindowPropertiesPtr* output);
};


template <>
struct  StructTraits<::ws::mojom::CandidateWindowEntry::DataView,
                                         ::ws::mojom::CandidateWindowEntryPtr> {
  static bool IsNull(const ::ws::mojom::CandidateWindowEntryPtr& input) { return !input; }
  static void SetToNull(::ws::mojom::CandidateWindowEntryPtr* output) { output->reset(); }

  static const decltype(::ws::mojom::CandidateWindowEntry::value)& value(
      const ::ws::mojom::CandidateWindowEntryPtr& input) {
    return input->value;
  }

  static const decltype(::ws::mojom::CandidateWindowEntry::label)& label(
      const ::ws::mojom::CandidateWindowEntryPtr& input) {
    return input->label;
  }

  static const decltype(::ws::mojom::CandidateWindowEntry::annotation)& annotation(
      const ::ws::mojom::CandidateWindowEntryPtr& input) {
    return input->annotation;
  }

  static const decltype(::ws::mojom::CandidateWindowEntry::description_title)& description_title(
      const ::ws::mojom::CandidateWindowEntryPtr& input) {
    return input->description_title;
  }

  static const decltype(::ws::mojom::CandidateWindowEntry::description_body)& description_body(
      const ::ws::mojom::CandidateWindowEntryPtr& input) {
    return input->description_body;
  }

  static bool Read(::ws::mojom::CandidateWindowEntry::DataView input, ::ws::mojom::CandidateWindowEntryPtr* output);
};


template <>
struct  StructTraits<::ws::mojom::TextInputState::DataView,
                                         ::ws::mojom::TextInputStatePtr> {
  static bool IsNull(const ::ws::mojom::TextInputStatePtr& input) { return !input; }
  static void SetToNull(::ws::mojom::TextInputStatePtr* output) { output->reset(); }

  static decltype(::ws::mojom::TextInputState::text_input_type) text_input_type(
      const ::ws::mojom::TextInputStatePtr& input) {
    return input->text_input_type;
  }

  static decltype(::ws::mojom::TextInputState::text_input_mode) text_input_mode(
      const ::ws::mojom::TextInputStatePtr& input) {
    return input->text_input_mode;
  }

  static decltype(::ws::mojom::TextInputState::text_direction) text_direction(
      const ::ws::mojom::TextInputStatePtr& input) {
    return input->text_direction;
  }

  static decltype(::ws::mojom::TextInputState::text_input_flags) text_input_flags(
      const ::ws::mojom::TextInputStatePtr& input) {
    return input->text_input_flags;
  }

  static bool Read(::ws::mojom::TextInputState::DataView input, ::ws::mojom::TextInputStatePtr* output);
};


template <>
struct  StructTraits<::ws::mojom::TextInputClientData::DataView,
                                         ::ws::mojom::TextInputClientDataPtr> {
  static bool IsNull(const ::ws::mojom::TextInputClientDataPtr& input) { return !input; }
  static void SetToNull(::ws::mojom::TextInputClientDataPtr* output) { output->reset(); }

  static const decltype(::ws::mojom::TextInputClientData::text_range)& text_range(
      const ::ws::mojom::TextInputClientDataPtr& input) {
    return input->text_range;
  }

  static const decltype(::ws::mojom::TextInputClientData::text)& text(
      const ::ws::mojom::TextInputClientDataPtr& input) {
    return input->text;
  }

  static decltype(::ws::mojom::TextInputClientData::has_composition_text) has_composition_text(
      const ::ws::mojom::TextInputClientDataPtr& input) {
    return input->has_composition_text;
  }

  static const decltype(::ws::mojom::TextInputClientData::composition_text_range)& composition_text_range(
      const ::ws::mojom::TextInputClientDataPtr& input) {
    return input->composition_text_range;
  }

  static const decltype(::ws::mojom::TextInputClientData::editable_selection_range)& editable_selection_range(
      const ::ws::mojom::TextInputClientDataPtr& input) {
    return input->editable_selection_range;
  }

  static const decltype(::ws::mojom::TextInputClientData::edit_command_enabled)& edit_command_enabled(
      const ::ws::mojom::TextInputClientDataPtr& input) {
    return input->edit_command_enabled;
  }

  static bool Read(::ws::mojom::TextInputClientData::DataView input, ::ws::mojom::TextInputClientDataPtr* output);
};


template <>
struct  StructTraits<::ws::mojom::SessionDetails::DataView,
                                         ::ws::mojom::SessionDetailsPtr> {
  static bool IsNull(const ::ws::mojom::SessionDetailsPtr& input) { return !input; }
  static void SetToNull(::ws::mojom::SessionDetailsPtr* output) { output->reset(); }

  static const decltype(::ws::mojom::SessionDetails::state)& state(
      const ::ws::mojom::SessionDetailsPtr& input) {
    return input->state;
  }

  static const decltype(::ws::mojom::SessionDetails::caret_bounds)& caret_bounds(
      const ::ws::mojom::SessionDetailsPtr& input) {
    return input->caret_bounds;
  }

  static const decltype(::ws::mojom::SessionDetails::data)& data(
      const ::ws::mojom::SessionDetailsPtr& input) {
    return input->data;
  }

  static decltype(::ws::mojom::SessionDetails::focus_reason) focus_reason(
      const ::ws::mojom::SessionDetailsPtr& input) {
    return input->focus_reason;
  }

  static decltype(::ws::mojom::SessionDetails::client_source_for_metrics) client_source_for_metrics(
      const ::ws::mojom::SessionDetailsPtr& input) {
    return input->client_source_for_metrics;
  }

  static decltype(::ws::mojom::SessionDetails::should_do_learning) should_do_learning(
      const ::ws::mojom::SessionDetailsPtr& input) {
    return input->should_do_learning;
  }

  static bool Read(::ws::mojom::SessionDetails::DataView input, ::ws::mojom::SessionDetailsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_H_