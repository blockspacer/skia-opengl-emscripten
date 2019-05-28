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


#include "ui/base/ime/mojo/ime.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ui/base/ime/mojo/ime_types.mojom-blink.h"
#include "ui/events/mojo/event.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"


#ifndef UI_BASE_IME_MOJO_IME_MOJOM_BLINK_JUMBO_H_
#define UI_BASE_IME_MOJO_IME_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace ime {
namespace mojom {
namespace blink {


void ImeEngineInterceptorForTesting::StartInput(EditorInfoPtr info) {
  GetForwardingInterface()->StartInput(std::move(info));
}
void ImeEngineInterceptorForTesting::FinishInput() {
  GetForwardingInterface()->FinishInput();
}
void ImeEngineInterceptorForTesting::CancelInput() {
  GetForwardingInterface()->CancelInput();
}
void ImeEngineInterceptorForTesting::ProcessKeyEvent(::ui::mojom::blink::EventPtr key_event, ProcessKeyEventCallback callback) {
  GetForwardingInterface()->ProcessKeyEvent(std::move(key_event), std::move(callback));
}
void ImeEngineInterceptorForTesting::UpdateSurroundingInfo(const WTF::String& text, int32_t cursor, int32_t anchor, int32_t offset) {
  GetForwardingInterface()->UpdateSurroundingInfo(std::move(text), std::move(cursor), std::move(anchor), std::move(offset));
}
void ImeEngineInterceptorForTesting::UpdateCompositionBounds(const WTF::Vector<::blink::WebRect>& bounds) {
  GetForwardingInterface()->UpdateCompositionBounds(std::move(bounds));
}
ImeEngineAsyncWaiter::ImeEngineAsyncWaiter(
    ImeEngine* proxy) : proxy_(proxy) {}

ImeEngineAsyncWaiter::~ImeEngineAsyncWaiter() = default;

void ImeEngineAsyncWaiter::ProcessKeyEvent(
    ::ui::mojom::blink::EventPtr key_event, bool* out_handled) {
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



void ImeEngineClientInterceptorForTesting::CommitText(const WTF::String& text) {
  GetForwardingInterface()->CommitText(std::move(text));
}
void ImeEngineClientInterceptorForTesting::UpdateCompositionText(::ui::mojom::blink::CompositionTextPtr composition_text, uint32_t cursor_pos, bool visible) {
  GetForwardingInterface()->UpdateCompositionText(std::move(composition_text), std::move(cursor_pos), std::move(visible));
}
void ImeEngineClientInterceptorForTesting::DeleteSurroundingText(int32_t offset, uint32_t length) {
  GetForwardingInterface()->DeleteSurroundingText(std::move(offset), std::move(length));
}
void ImeEngineClientInterceptorForTesting::SendKeyEvent(::ui::mojom::blink::EventPtr key_event) {
  GetForwardingInterface()->SendKeyEvent(std::move(key_event));
}
void ImeEngineClientInterceptorForTesting::Reconnect() {
  GetForwardingInterface()->Reconnect();
}
ImeEngineClientAsyncWaiter::ImeEngineClientAsyncWaiter(
    ImeEngineClient* proxy) : proxy_(proxy) {}

ImeEngineClientAsyncWaiter::~ImeEngineClientAsyncWaiter() = default;




void ImeEngineFactoryInterceptorForTesting::CreateEngine(ImeEngineRequest engine_request, ImeEngineClientPtr client) {
  GetForwardingInterface()->CreateEngine(std::move(engine_request), std::move(client));
}
ImeEngineFactoryAsyncWaiter::ImeEngineFactoryAsyncWaiter(
    ImeEngineFactory* proxy) : proxy_(proxy) {}

ImeEngineFactoryAsyncWaiter::~ImeEngineFactoryAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace ime

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif