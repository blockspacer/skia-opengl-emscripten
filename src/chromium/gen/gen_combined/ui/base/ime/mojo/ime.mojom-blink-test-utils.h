// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_MOJOM_BLINK_TEST_UTILS_H_
#define UI_BASE_IME_MOJO_IME_MOJOM_BLINK_TEST_UTILS_H_

#include "ui/base/ime/mojo/ime.mojom-blink.h"


namespace ime {
namespace mojom {
namespace blink {


class  ImeEngineInterceptorForTesting : public ImeEngine {
  virtual ImeEngine* GetForwardingInterface() = 0;
  void StartInput(EditorInfoPtr info) override;
  void FinishInput() override;
  void CancelInput() override;
  void ProcessKeyEvent(::ui::mojom::blink::EventPtr key_event, ProcessKeyEventCallback callback) override;
  void UpdateSurroundingInfo(const WTF::String& text, int32_t cursor, int32_t anchor, int32_t offset) override;
  void UpdateCompositionBounds(const WTF::Vector<::blink::WebRect>& bounds) override;
};
class  ImeEngineAsyncWaiter {
 public:
  explicit ImeEngineAsyncWaiter(ImeEngine* proxy);
  ~ImeEngineAsyncWaiter();
  void ProcessKeyEvent(
      ::ui::mojom::blink::EventPtr key_event, bool* out_handled);

 private:
  ImeEngine* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ImeEngineAsyncWaiter);
};


class  ImeEngineClientInterceptorForTesting : public ImeEngineClient {
  virtual ImeEngineClient* GetForwardingInterface() = 0;
  void CommitText(const WTF::String& text) override;
  void UpdateCompositionText(::ui::mojom::blink::CompositionTextPtr composition_text, uint32_t cursor_pos, bool visible) override;
  void DeleteSurroundingText(int32_t offset, uint32_t length) override;
  void SendKeyEvent(::ui::mojom::blink::EventPtr key_event) override;
  void Reconnect() override;
};
class  ImeEngineClientAsyncWaiter {
 public:
  explicit ImeEngineClientAsyncWaiter(ImeEngineClient* proxy);
  ~ImeEngineClientAsyncWaiter();

 private:
  ImeEngineClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ImeEngineClientAsyncWaiter);
};


class  ImeEngineFactoryInterceptorForTesting : public ImeEngineFactory {
  virtual ImeEngineFactory* GetForwardingInterface() = 0;
  void CreateEngine(ImeEngineRequest engine_request, ImeEngineClientPtr client) override;
};
class  ImeEngineFactoryAsyncWaiter {
 public:
  explicit ImeEngineFactoryAsyncWaiter(ImeEngineFactory* proxy);
  ~ImeEngineFactoryAsyncWaiter();

 private:
  ImeEngineFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ImeEngineFactoryAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace ime

#endif  // UI_BASE_IME_MOJO_IME_MOJOM_BLINK_TEST_UTILS_H_