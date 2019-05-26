// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_TEST_UTILS_H_
#define SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_TEST_UTILS_H_

#include "services/ws/public/mojom/ime/ime.mojom.h"


namespace ws {
namespace mojom {


class  IMEDriverInterceptorForTesting : public IMEDriver {
  virtual IMEDriver* GetForwardingInterface() = 0;
  void StartSession(InputMethodRequest input_method_request, TextInputClientPtr client, SessionDetailsPtr details) override;
};
class  IMEDriverAsyncWaiter {
 public:
  explicit IMEDriverAsyncWaiter(IMEDriver* proxy);
  ~IMEDriverAsyncWaiter();

 private:
  IMEDriver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IMEDriverAsyncWaiter);
};


class  IMERegistrarInterceptorForTesting : public IMERegistrar {
  virtual IMERegistrar* GetForwardingInterface() = 0;
  void RegisterDriver(IMEDriverPtr driver) override;
};
class  IMERegistrarAsyncWaiter {
 public:
  explicit IMERegistrarAsyncWaiter(IMERegistrar* proxy);
  ~IMERegistrarAsyncWaiter();

 private:
  IMERegistrar* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IMERegistrarAsyncWaiter);
};


class  InputMethodInterceptorForTesting : public InputMethod {
  virtual InputMethod* GetForwardingInterface() = 0;
  void OnTextInputStateChanged(TextInputStatePtr text_input_state) override;
  void OnCaretBoundsChanged(const gfx::Rect& caret_bounds) override;
  void OnTextInputClientDataChanged(TextInputClientDataPtr data) override;
  void ProcessKeyEvent(std::unique_ptr<ui::Event> key_event, ProcessKeyEventCallback callback) override;
  void CancelComposition() override;
  void ShowVirtualKeyboardIfEnabled() override;
};
class  InputMethodAsyncWaiter {
 public:
  explicit InputMethodAsyncWaiter(InputMethod* proxy);
  ~InputMethodAsyncWaiter();
  void ProcessKeyEvent(
      std::unique_ptr<ui::Event> key_event, bool* out_handled);

 private:
  InputMethod* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InputMethodAsyncWaiter);
};


class  TextInputClientInterceptorForTesting : public TextInputClient {
  virtual TextInputClient* GetForwardingInterface() = 0;
  void SetCompositionText(const ui::CompositionText& composition) override;
  void ConfirmCompositionText() override;
  void ClearCompositionText() override;
  void InsertText(const base::string16& text) override;
  void InsertChar(std::unique_ptr<ui::Event> event) override;
  void DispatchKeyEventPostIME(std::unique_ptr<ui::Event> event, DispatchKeyEventPostIMECallback callback) override;
  void EnsureCaretNotInRect(const gfx::Rect& rect) override;
  void SetEditableSelectionRange(const gfx::Range& range) override;
  void DeleteRange(const gfx::Range& range) override;
  void OnInputMethodChanged() override;
  void ChangeTextDirectionAndLayoutAlignment(base::i18n::TextDirection direction) override;
  void ExtendSelectionAndDelete(uint32_t before, uint32_t after) override;
};
class  TextInputClientAsyncWaiter {
 public:
  explicit TextInputClientAsyncWaiter(TextInputClient* proxy);
  ~TextInputClientAsyncWaiter();
  void DispatchKeyEventPostIME(
      std::unique_ptr<ui::Event> event, bool* out_handled, bool* out_stopped_propagation);

 private:
  TextInputClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TextInputClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_TEST_UTILS_H_