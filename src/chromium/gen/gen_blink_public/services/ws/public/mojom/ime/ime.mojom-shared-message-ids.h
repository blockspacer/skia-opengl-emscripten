// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ws {
namespace mojom {

namespace internal {


// The 1399417427 value is based on sha256(salt + "IMEDriver1").
constexpr uint32_t kIMEDriver_StartSession_Name = 1399417427;
// The 1704747596 value is based on sha256(salt + "IMERegistrar1").
constexpr uint32_t kIMERegistrar_RegisterDriver_Name = 1704747596;
// The 476842730 value is based on sha256(salt + "InputMethod1").
constexpr uint32_t kInputMethod_OnTextInputStateChanged_Name = 476842730;
// The 1725431334 value is based on sha256(salt + "InputMethod2").
constexpr uint32_t kInputMethod_OnCaretBoundsChanged_Name = 1725431334;
// The 388236709 value is based on sha256(salt + "InputMethod3").
constexpr uint32_t kInputMethod_OnTextInputClientDataChanged_Name = 388236709;
// The 597495725 value is based on sha256(salt + "InputMethod4").
constexpr uint32_t kInputMethod_ProcessKeyEvent_Name = 597495725;
// The 998469119 value is based on sha256(salt + "InputMethod5").
constexpr uint32_t kInputMethod_CancelComposition_Name = 998469119;
// The 2145665491 value is based on sha256(salt + "InputMethod6").
constexpr uint32_t kInputMethod_ShowVirtualKeyboardIfEnabled_Name = 2145665491;
// The 1630980452 value is based on sha256(salt + "TextInputClient1").
constexpr uint32_t kTextInputClient_SetCompositionText_Name = 1630980452;
// The 838862135 value is based on sha256(salt + "TextInputClient2").
constexpr uint32_t kTextInputClient_ConfirmCompositionText_Name = 838862135;
// The 12704865 value is based on sha256(salt + "TextInputClient3").
constexpr uint32_t kTextInputClient_ClearCompositionText_Name = 12704865;
// The 1205533132 value is based on sha256(salt + "TextInputClient4").
constexpr uint32_t kTextInputClient_InsertText_Name = 1205533132;
// The 2005384881 value is based on sha256(salt + "TextInputClient5").
constexpr uint32_t kTextInputClient_InsertChar_Name = 2005384881;
// The 1516592790 value is based on sha256(salt + "TextInputClient6").
constexpr uint32_t kTextInputClient_DispatchKeyEventPostIME_Name = 1516592790;
// The 590395030 value is based on sha256(salt + "TextInputClient7").
constexpr uint32_t kTextInputClient_EnsureCaretNotInRect_Name = 590395030;
// The 1009953009 value is based on sha256(salt + "TextInputClient8").
constexpr uint32_t kTextInputClient_SetEditableSelectionRange_Name = 1009953009;
// The 952479038 value is based on sha256(salt + "TextInputClient9").
constexpr uint32_t kTextInputClient_DeleteRange_Name = 952479038;
// The 1833082118 value is based on sha256(salt + "TextInputClient10").
constexpr uint32_t kTextInputClient_OnInputMethodChanged_Name = 1833082118;
// The 1392671981 value is based on sha256(salt + "TextInputClient11").
constexpr uint32_t kTextInputClient_ChangeTextDirectionAndLayoutAlignment_Name = 1392671981;
// The 750961490 value is based on sha256(salt + "TextInputClient12").
constexpr uint32_t kTextInputClient_ExtendSelectionAndDelete_Name = 750961490;

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_SHARED_MESSAGE_IDS_H_