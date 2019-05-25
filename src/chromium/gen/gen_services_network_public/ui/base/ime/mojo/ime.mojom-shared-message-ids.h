// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_MOJOM_SHARED_MESSAGE_IDS_H_
#define UI_BASE_IME_MOJO_IME_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ime {
namespace mojom {

namespace internal {


// The 624906317 value is based on sha256(salt + "ImeEngine1").
constexpr uint32_t kImeEngine_StartInput_Name = 624906317;
// The 2015885762 value is based on sha256(salt + "ImeEngine2").
constexpr uint32_t kImeEngine_FinishInput_Name = 2015885762;
// The 194311658 value is based on sha256(salt + "ImeEngine3").
constexpr uint32_t kImeEngine_CancelInput_Name = 194311658;
// The 1045652883 value is based on sha256(salt + "ImeEngine4").
constexpr uint32_t kImeEngine_ProcessKeyEvent_Name = 1045652883;
// The 1361609934 value is based on sha256(salt + "ImeEngine5").
constexpr uint32_t kImeEngine_UpdateSurroundingInfo_Name = 1361609934;
// The 69919686 value is based on sha256(salt + "ImeEngine6").
constexpr uint32_t kImeEngine_UpdateCompositionBounds_Name = 69919686;
// The 52262503 value is based on sha256(salt + "ImeEngineClient1").
constexpr uint32_t kImeEngineClient_CommitText_Name = 52262503;
// The 333725833 value is based on sha256(salt + "ImeEngineClient2").
constexpr uint32_t kImeEngineClient_UpdateCompositionText_Name = 333725833;
// The 1264099915 value is based on sha256(salt + "ImeEngineClient3").
constexpr uint32_t kImeEngineClient_DeleteSurroundingText_Name = 1264099915;
// The 1762645786 value is based on sha256(salt + "ImeEngineClient4").
constexpr uint32_t kImeEngineClient_SendKeyEvent_Name = 1762645786;
// The 1287182091 value is based on sha256(salt + "ImeEngineClient5").
constexpr uint32_t kImeEngineClient_Reconnect_Name = 1287182091;
// The 238642609 value is based on sha256(salt + "ImeEngineFactory1").
constexpr uint32_t kImeEngineFactory_CreateEngine_Name = 238642609;

}  // namespace internal
}  // namespace mojom
}  // namespace ime

#endif  // UI_BASE_IME_MOJO_IME_MOJOM_SHARED_MESSAGE_IDS_H_