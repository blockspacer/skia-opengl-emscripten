// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ws {
namespace mojom {

namespace internal {


// The 472600748 value is based on sha256(salt + "IMEDriver1").
constexpr uint32_t kIMEDriver_StartSession_Name = 472600748;
// The 167775967 value is based on sha256(salt + "IMERegistrar1").
constexpr uint32_t kIMERegistrar_RegisterDriver_Name = 167775967;
// The 868130023 value is based on sha256(salt + "InputMethod1").
constexpr uint32_t kInputMethod_OnTextInputStateChanged_Name = 868130023;
// The 1690628774 value is based on sha256(salt + "InputMethod2").
constexpr uint32_t kInputMethod_OnCaretBoundsChanged_Name = 1690628774;
// The 113453287 value is based on sha256(salt + "InputMethod3").
constexpr uint32_t kInputMethod_OnTextInputClientDataChanged_Name = 113453287;
// The 501134222 value is based on sha256(salt + "InputMethod4").
constexpr uint32_t kInputMethod_ProcessKeyEvent_Name = 501134222;
// The 1707940745 value is based on sha256(salt + "InputMethod5").
constexpr uint32_t kInputMethod_CancelComposition_Name = 1707940745;
// The 1293332074 value is based on sha256(salt + "InputMethod6").
constexpr uint32_t kInputMethod_ShowVirtualKeyboardIfEnabled_Name = 1293332074;
// The 120427533 value is based on sha256(salt + "TextInputClient1").
constexpr uint32_t kTextInputClient_SetCompositionText_Name = 120427533;
// The 1710537897 value is based on sha256(salt + "TextInputClient2").
constexpr uint32_t kTextInputClient_ConfirmCompositionText_Name = 1710537897;
// The 1891909747 value is based on sha256(salt + "TextInputClient3").
constexpr uint32_t kTextInputClient_ClearCompositionText_Name = 1891909747;
// The 141798280 value is based on sha256(salt + "TextInputClient4").
constexpr uint32_t kTextInputClient_InsertText_Name = 141798280;
// The 1465386707 value is based on sha256(salt + "TextInputClient5").
constexpr uint32_t kTextInputClient_InsertChar_Name = 1465386707;
// The 456797210 value is based on sha256(salt + "TextInputClient6").
constexpr uint32_t kTextInputClient_DispatchKeyEventPostIME_Name = 456797210;
// The 831108072 value is based on sha256(salt + "TextInputClient7").
constexpr uint32_t kTextInputClient_EnsureCaretNotInRect_Name = 831108072;
// The 466982128 value is based on sha256(salt + "TextInputClient8").
constexpr uint32_t kTextInputClient_SetEditableSelectionRange_Name = 466982128;
// The 142856872 value is based on sha256(salt + "TextInputClient9").
constexpr uint32_t kTextInputClient_DeleteRange_Name = 142856872;
// The 1058982691 value is based on sha256(salt + "TextInputClient10").
constexpr uint32_t kTextInputClient_OnInputMethodChanged_Name = 1058982691;
// The 428285529 value is based on sha256(salt + "TextInputClient11").
constexpr uint32_t kTextInputClient_ChangeTextDirectionAndLayoutAlignment_Name = 428285529;
// The 1015423035 value is based on sha256(salt + "TextInputClient12").
constexpr uint32_t kTextInputClient_ExtendSelectionAndDelete_Name = 1015423035;

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_SHARED_MESSAGE_IDS_H_