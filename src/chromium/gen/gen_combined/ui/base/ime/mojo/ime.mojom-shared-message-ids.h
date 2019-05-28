// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_MOJOM_SHARED_MESSAGE_IDS_H_
#define UI_BASE_IME_MOJO_IME_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ime {
namespace mojom {

namespace internal {


// The 826634808 value is based on sha256(salt + "ImeEngine1").
constexpr uint32_t kImeEngine_StartInput_Name = 826634808;
// The 218618603 value is based on sha256(salt + "ImeEngine2").
constexpr uint32_t kImeEngine_FinishInput_Name = 218618603;
// The 1665914165 value is based on sha256(salt + "ImeEngine3").
constexpr uint32_t kImeEngine_CancelInput_Name = 1665914165;
// The 792559446 value is based on sha256(salt + "ImeEngine4").
constexpr uint32_t kImeEngine_ProcessKeyEvent_Name = 792559446;
// The 518563007 value is based on sha256(salt + "ImeEngine5").
constexpr uint32_t kImeEngine_UpdateSurroundingInfo_Name = 518563007;
// The 1635720045 value is based on sha256(salt + "ImeEngine6").
constexpr uint32_t kImeEngine_UpdateCompositionBounds_Name = 1635720045;
// The 703004792 value is based on sha256(salt + "ImeEngineClient1").
constexpr uint32_t kImeEngineClient_CommitText_Name = 703004792;
// The 1834273380 value is based on sha256(salt + "ImeEngineClient2").
constexpr uint32_t kImeEngineClient_UpdateCompositionText_Name = 1834273380;
// The 75545033 value is based on sha256(salt + "ImeEngineClient3").
constexpr uint32_t kImeEngineClient_DeleteSurroundingText_Name = 75545033;
// The 1143861006 value is based on sha256(salt + "ImeEngineClient4").
constexpr uint32_t kImeEngineClient_SendKeyEvent_Name = 1143861006;
// The 1625297712 value is based on sha256(salt + "ImeEngineClient5").
constexpr uint32_t kImeEngineClient_Reconnect_Name = 1625297712;
// The 401965828 value is based on sha256(salt + "ImeEngineFactory1").
constexpr uint32_t kImeEngineFactory_CreateEngine_Name = 401965828;

}  // namespace internal
}  // namespace mojom
}  // namespace ime

#endif  // UI_BASE_IME_MOJO_IME_MOJOM_SHARED_MESSAGE_IDS_H_