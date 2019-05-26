// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "services/ws/public/mojom/ime/ime.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/text_direction.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "ui/base/ime/mojo/ime_types.mojom.h"
#include "ui/events/mojo/event.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/range/mojo/range.mojom.h"
#include "ui/platform_window/mojo/text_input_state.mojom.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/text_direction_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/base/ime/mojo/ime_types_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/range/mojo/range_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
#endif


namespace ws {
namespace mojom {


void IMEDriverInterceptorForTesting::StartSession(InputMethodRequest input_method_request, TextInputClientPtr client, SessionDetailsPtr details) {
  GetForwardingInterface()->StartSession(std::move(input_method_request), std::move(client), std::move(details));
}
IMEDriverAsyncWaiter::IMEDriverAsyncWaiter(
    IMEDriver* proxy) : proxy_(proxy) {}

IMEDriverAsyncWaiter::~IMEDriverAsyncWaiter() = default;




void IMERegistrarInterceptorForTesting::RegisterDriver(IMEDriverPtr driver) {
  GetForwardingInterface()->RegisterDriver(std::move(driver));
}
IMERegistrarAsyncWaiter::IMERegistrarAsyncWaiter(
    IMERegistrar* proxy) : proxy_(proxy) {}

IMERegistrarAsyncWaiter::~IMERegistrarAsyncWaiter() = default;




void InputMethodInterceptorForTesting::OnTextInputStateChanged(TextInputStatePtr text_input_state) {
  GetForwardingInterface()->OnTextInputStateChanged(std::move(text_input_state));
}
void InputMethodInterceptorForTesting::OnCaretBoundsChanged(const gfx::Rect& caret_bounds) {
  GetForwardingInterface()->OnCaretBoundsChanged(std::move(caret_bounds));
}
void InputMethodInterceptorForTesting::OnTextInputClientDataChanged(TextInputClientDataPtr data) {
  GetForwardingInterface()->OnTextInputClientDataChanged(std::move(data));
}
void InputMethodInterceptorForTesting::ProcessKeyEvent(std::unique_ptr<ui::Event> key_event, ProcessKeyEventCallback callback) {
  GetForwardingInterface()->ProcessKeyEvent(std::move(key_event), std::move(callback));
}
void InputMethodInterceptorForTesting::CancelComposition() {
  GetForwardingInterface()->CancelComposition();
}
void InputMethodInterceptorForTesting::ShowVirtualKeyboardIfEnabled() {
  GetForwardingInterface()->ShowVirtualKeyboardIfEnabled();
}
InputMethodAsyncWaiter::InputMethodAsyncWaiter(
    InputMethod* proxy) : proxy_(proxy) {}

InputMethodAsyncWaiter::~InputMethodAsyncWaiter() = default;

void InputMethodAsyncWaiter::ProcessKeyEvent(
    std::unique_ptr<ui::Event> key_event, bool* out_handled) {
  base::RunLoop loop;
  proxy_->ProcessKeyEvent(std::move(key_event),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_handled
,
             bool handled) {*out_handled = std::move(handled);
            loop->Quit();
          },
          &loop,
          out_handled));
  loop.Run();
}



void TextInputClientInterceptorForTesting::SetCompositionText(const ui::CompositionText& composition) {
  GetForwardingInterface()->SetCompositionText(std::move(composition));
}
void TextInputClientInterceptorForTesting::ConfirmCompositionText() {
  GetForwardingInterface()->ConfirmCompositionText();
}
void TextInputClientInterceptorForTesting::ClearCompositionText() {
  GetForwardingInterface()->ClearCompositionText();
}
void TextInputClientInterceptorForTesting::InsertText(const base::string16& text) {
  GetForwardingInterface()->InsertText(std::move(text));
}
void TextInputClientInterceptorForTesting::InsertChar(std::unique_ptr<ui::Event> event) {
  GetForwardingInterface()->InsertChar(std::move(event));
}
void TextInputClientInterceptorForTesting::DispatchKeyEventPostIME(std::unique_ptr<ui::Event> event, DispatchKeyEventPostIMECallback callback) {
  GetForwardingInterface()->DispatchKeyEventPostIME(std::move(event), std::move(callback));
}
void TextInputClientInterceptorForTesting::EnsureCaretNotInRect(const gfx::Rect& rect) {
  GetForwardingInterface()->EnsureCaretNotInRect(std::move(rect));
}
void TextInputClientInterceptorForTesting::SetEditableSelectionRange(const gfx::Range& range) {
  GetForwardingInterface()->SetEditableSelectionRange(std::move(range));
}
void TextInputClientInterceptorForTesting::DeleteRange(const gfx::Range& range) {
  GetForwardingInterface()->DeleteRange(std::move(range));
}
void TextInputClientInterceptorForTesting::OnInputMethodChanged() {
  GetForwardingInterface()->OnInputMethodChanged();
}
void TextInputClientInterceptorForTesting::ChangeTextDirectionAndLayoutAlignment(base::i18n::TextDirection direction) {
  GetForwardingInterface()->ChangeTextDirectionAndLayoutAlignment(std::move(direction));
}
void TextInputClientInterceptorForTesting::ExtendSelectionAndDelete(uint32_t before, uint32_t after) {
  GetForwardingInterface()->ExtendSelectionAndDelete(std::move(before), std::move(after));
}
TextInputClientAsyncWaiter::TextInputClientAsyncWaiter(
    TextInputClient* proxy) : proxy_(proxy) {}

TextInputClientAsyncWaiter::~TextInputClientAsyncWaiter() = default;

void TextInputClientAsyncWaiter::DispatchKeyEventPostIME(
    std::unique_ptr<ui::Event> event, bool* out_handled, bool* out_stopped_propagation) {
  base::RunLoop loop;
  proxy_->DispatchKeyEventPostIME(std::move(event),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_handled
,
             bool* out_stopped_propagation
,
             bool handled,
             bool stopped_propagation) {*out_handled = std::move(handled);*out_stopped_propagation = std::move(stopped_propagation);
            loop->Quit();
          },
          &loop,
          out_handled,
          out_stopped_propagation));
  loop.Run();
}





}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif