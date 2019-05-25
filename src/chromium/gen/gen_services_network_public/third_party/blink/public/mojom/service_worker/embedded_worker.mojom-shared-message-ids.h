// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1096084093 value is based on sha256(salt + "EmbeddedWorkerInstanceClient1").
constexpr uint32_t kEmbeddedWorkerInstanceClient_StartWorker_Name = 1096084093;
// The 1046756627 value is based on sha256(salt + "EmbeddedWorkerInstanceClient2").
constexpr uint32_t kEmbeddedWorkerInstanceClient_StopWorker_Name = 1046756627;
// The 1894231181 value is based on sha256(salt + "EmbeddedWorkerInstanceClient3").
constexpr uint32_t kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name = 1894231181;
// The 1946057151 value is based on sha256(salt + "EmbeddedWorkerInstanceClient4").
constexpr uint32_t kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name = 1946057151;
// The 1645430795 value is based on sha256(salt + "EmbeddedWorkerInstanceClient5").
constexpr uint32_t kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name = 1645430795;
// The 795150210 value is based on sha256(salt + "EmbeddedWorkerInstanceClient6").
constexpr uint32_t kEmbeddedWorkerInstanceClient_UpdateSubresourceLoaderFactories_Name = 795150210;
// The 848370757 value is based on sha256(salt + "EmbeddedWorkerInstanceHost1").
constexpr uint32_t kEmbeddedWorkerInstanceHost_RequestTermination_Name = 848370757;
// The 275860763 value is based on sha256(salt + "EmbeddedWorkerInstanceHost2").
constexpr uint32_t kEmbeddedWorkerInstanceHost_CountFeature_Name = 275860763;
// The 2056188412 value is based on sha256(salt + "EmbeddedWorkerInstanceHost3").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name = 2056188412;
// The 1137683121 value is based on sha256(salt + "EmbeddedWorkerInstanceHost4").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name = 1137683121;
// The 1456286524 value is based on sha256(salt + "EmbeddedWorkerInstanceHost5").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnScriptEvaluationStart_Name = 1456286524;
// The 1789117381 value is based on sha256(salt + "EmbeddedWorkerInstanceHost6").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnStarted_Name = 1789117381;
// The 216198827 value is based on sha256(salt + "EmbeddedWorkerInstanceHost7").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnReportException_Name = 216198827;
// The 913435138 value is based on sha256(salt + "EmbeddedWorkerInstanceHost8").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name = 913435138;
// The 189083037 value is based on sha256(salt + "EmbeddedWorkerInstanceHost9").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnStopped_Name = 189083037;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_