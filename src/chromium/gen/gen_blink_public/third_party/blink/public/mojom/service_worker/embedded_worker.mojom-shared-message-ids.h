// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 898245378 value is based on sha256(salt + "EmbeddedWorkerInstanceClient1").
constexpr uint32_t kEmbeddedWorkerInstanceClient_StartWorker_Name = 898245378;
// The 850956001 value is based on sha256(salt + "EmbeddedWorkerInstanceClient2").
constexpr uint32_t kEmbeddedWorkerInstanceClient_StopWorker_Name = 850956001;
// The 1911205267 value is based on sha256(salt + "EmbeddedWorkerInstanceClient3").
constexpr uint32_t kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name = 1911205267;
// The 1164840688 value is based on sha256(salt + "EmbeddedWorkerInstanceClient4").
constexpr uint32_t kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name = 1164840688;
// The 653337928 value is based on sha256(salt + "EmbeddedWorkerInstanceClient5").
constexpr uint32_t kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name = 653337928;
// The 28273801 value is based on sha256(salt + "EmbeddedWorkerInstanceClient6").
constexpr uint32_t kEmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Name = 28273801;
// The 475482919 value is based on sha256(salt + "EmbeddedWorkerInstanceHost1").
constexpr uint32_t kEmbeddedWorkerInstanceHost_RequestTermination_Name = 475482919;
// The 321355636 value is based on sha256(salt + "EmbeddedWorkerInstanceHost2").
constexpr uint32_t kEmbeddedWorkerInstanceHost_CountFeature_Name = 321355636;
// The 1525668195 value is based on sha256(salt + "EmbeddedWorkerInstanceHost3").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name = 1525668195;
// The 2111994524 value is based on sha256(salt + "EmbeddedWorkerInstanceHost4").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name = 2111994524;
// The 1806862750 value is based on sha256(salt + "EmbeddedWorkerInstanceHost5").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Name = 1806862750;
// The 1765339413 value is based on sha256(salt + "EmbeddedWorkerInstanceHost6").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnStarted_Name = 1765339413;
// The 1201715259 value is based on sha256(salt + "EmbeddedWorkerInstanceHost7").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnReportException_Name = 1201715259;
// The 2114490046 value is based on sha256(salt + "EmbeddedWorkerInstanceHost8").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name = 2114490046;
// The 697471858 value is based on sha256(salt + "EmbeddedWorkerInstanceHost9").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnStopped_Name = 697471858;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_