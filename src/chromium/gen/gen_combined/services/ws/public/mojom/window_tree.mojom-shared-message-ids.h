// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ws {
namespace mojom {

namespace internal {


// The 2056250794 value is based on sha256(salt + "WindowTree1").
constexpr uint32_t kWindowTree_NewWindow_Name = 2056250794;
// The 1917696224 value is based on sha256(salt + "WindowTree2").
constexpr uint32_t kWindowTree_NewTopLevelWindow_Name = 1917696224;
// The 489514224 value is based on sha256(salt + "WindowTree3").
constexpr uint32_t kWindowTree_DeleteWindow_Name = 489514224;
// The 1327311938 value is based on sha256(salt + "WindowTree4").
constexpr uint32_t kWindowTree_SetCapture_Name = 1327311938;
// The 1168402220 value is based on sha256(salt + "WindowTree5").
constexpr uint32_t kWindowTree_ReleaseCapture_Name = 1168402220;
// The 1027855407 value is based on sha256(salt + "WindowTree6").
constexpr uint32_t kWindowTree_ObserveEventTypes_Name = 1027855407;
// The 1328872890 value is based on sha256(salt + "WindowTree7").
constexpr uint32_t kWindowTree_SetWindowBounds_Name = 1328872890;
// The 2133066997 value is based on sha256(salt + "WindowTree8").
constexpr uint32_t kWindowTree_UpdateLocalSurfaceIdFromChild_Name = 2133066997;
// The 148539559 value is based on sha256(salt + "WindowTree9").
constexpr uint32_t kWindowTree_AllocateLocalSurfaceId_Name = 148539559;
// The 225226039 value is based on sha256(salt + "WindowTree10").
constexpr uint32_t kWindowTree_SetWindowTransform_Name = 225226039;
// The 1154633249 value is based on sha256(salt + "WindowTree11").
constexpr uint32_t kWindowTree_SetClientArea_Name = 1154633249;
// The 1388437252 value is based on sha256(salt + "WindowTree12").
constexpr uint32_t kWindowTree_SetHitTestInsets_Name = 1388437252;
// The 228129262 value is based on sha256(salt + "WindowTree13").
constexpr uint32_t kWindowTree_SetShape_Name = 228129262;
// The 431420023 value is based on sha256(salt + "WindowTree14").
constexpr uint32_t kWindowTree_SetCanAcceptDrops_Name = 431420023;
// The 1186768750 value is based on sha256(salt + "WindowTree15").
constexpr uint32_t kWindowTree_SetWindowVisibility_Name = 1186768750;
// The 238680681 value is based on sha256(salt + "WindowTree16").
constexpr uint32_t kWindowTree_SetWindowProperty_Name = 238680681;
// The 1112660653 value is based on sha256(salt + "WindowTree17").
constexpr uint32_t kWindowTree_SetWindowOpacity_Name = 1112660653;
// The 1252053396 value is based on sha256(salt + "WindowTree18").
constexpr uint32_t kWindowTree_SetWindowTransparent_Name = 1252053396;
// The 1909724327 value is based on sha256(salt + "WindowTree19").
constexpr uint32_t kWindowTree_AttachCompositorFrameSink_Name = 1909724327;
// The 1380251909 value is based on sha256(salt + "WindowTree20").
constexpr uint32_t kWindowTree_AddWindow_Name = 1380251909;
// The 1769407280 value is based on sha256(salt + "WindowTree21").
constexpr uint32_t kWindowTree_RemoveWindowFromParent_Name = 1769407280;
// The 812463405 value is based on sha256(salt + "WindowTree22").
constexpr uint32_t kWindowTree_AddTransientWindow_Name = 812463405;
// The 1196353410 value is based on sha256(salt + "WindowTree23").
constexpr uint32_t kWindowTree_RemoveTransientWindowFromParent_Name = 1196353410;
// The 519777507 value is based on sha256(salt + "WindowTree24").
constexpr uint32_t kWindowTree_SetModalType_Name = 519777507;
// The 2064998078 value is based on sha256(salt + "WindowTree25").
constexpr uint32_t kWindowTree_ReorderWindow_Name = 2064998078;
// The 706507315 value is based on sha256(salt + "WindowTree26").
constexpr uint32_t kWindowTree_GetWindowTree_Name = 706507315;
// The 499908391 value is based on sha256(salt + "WindowTree27").
constexpr uint32_t kWindowTree_Embed_Name = 499908391;
// The 1184478188 value is based on sha256(salt + "WindowTree28").
constexpr uint32_t kWindowTree_ScheduleEmbed_Name = 1184478188;
// The 339891012 value is based on sha256(salt + "WindowTree29").
constexpr uint32_t kWindowTree_ScheduleEmbedForExistingClient_Name = 339891012;
// The 453833710 value is based on sha256(salt + "WindowTree30").
constexpr uint32_t kWindowTree_EmbedUsingToken_Name = 453833710;
// The 1252394154 value is based on sha256(salt + "WindowTree31").
constexpr uint32_t kWindowTree_AttachFrameSinkId_Name = 1252394154;
// The 703576098 value is based on sha256(salt + "WindowTree32").
constexpr uint32_t kWindowTree_UnattachFrameSinkId_Name = 703576098;
// The 471531567 value is based on sha256(salt + "WindowTree33").
constexpr uint32_t kWindowTree_SetFocus_Name = 471531567;
// The 967226228 value is based on sha256(salt + "WindowTree34").
constexpr uint32_t kWindowTree_SetCanFocus_Name = 967226228;
// The 474494683 value is based on sha256(salt + "WindowTree35").
constexpr uint32_t kWindowTree_SetCursor_Name = 474494683;
// The 840092741 value is based on sha256(salt + "WindowTree36").
constexpr uint32_t kWindowTree_SetWindowTextInputState_Name = 840092741;
// The 186817481 value is based on sha256(salt + "WindowTree37").
constexpr uint32_t kWindowTree_SetImeVisibility_Name = 186817481;
// The 2091023606 value is based on sha256(salt + "WindowTree38").
constexpr uint32_t kWindowTree_SetEventTargetingPolicy_Name = 2091023606;
// The 2050876533 value is based on sha256(salt + "WindowTree39").
constexpr uint32_t kWindowTree_OnWindowInputEventAck_Name = 2050876533;
// The 382975891 value is based on sha256(salt + "WindowTree40").
constexpr uint32_t kWindowTree_DeactivateWindow_Name = 382975891;
// The 805890541 value is based on sha256(salt + "WindowTree41").
constexpr uint32_t kWindowTree_StackAbove_Name = 805890541;
// The 1035756206 value is based on sha256(salt + "WindowTree42").
constexpr uint32_t kWindowTree_StackAtTop_Name = 1035756206;
// The 720641279 value is based on sha256(salt + "WindowTree43").
constexpr uint32_t kWindowTree_BindWindowManagerInterface_Name = 720641279;
// The 1667964702 value is based on sha256(salt + "WindowTree44").
constexpr uint32_t kWindowTree_GetCursorLocationMemory_Name = 1667964702;
// The 386309570 value is based on sha256(salt + "WindowTree45").
constexpr uint32_t kWindowTree_PerformWindowMove_Name = 386309570;
// The 1753971335 value is based on sha256(salt + "WindowTree46").
constexpr uint32_t kWindowTree_CancelWindowMove_Name = 1753971335;
// The 931933728 value is based on sha256(salt + "WindowTree47").
constexpr uint32_t kWindowTree_PerformDragDrop_Name = 931933728;
// The 156374326 value is based on sha256(salt + "WindowTree48").
constexpr uint32_t kWindowTree_CancelDragDrop_Name = 156374326;
// The 593897119 value is based on sha256(salt + "WindowTree49").
constexpr uint32_t kWindowTree_ObserveTopmostWindow_Name = 593897119;
// The 964377395 value is based on sha256(salt + "WindowTree50").
constexpr uint32_t kWindowTree_StopObservingTopmostWindow_Name = 964377395;
// The 381190178 value is based on sha256(salt + "WindowTree51").
constexpr uint32_t kWindowTree_SetWindowResizeShadow_Name = 381190178;
// The 1405299611 value is based on sha256(salt + "WindowTree52").
constexpr uint32_t kWindowTree_CancelActiveTouchesExcept_Name = 1405299611;
// The 810724882 value is based on sha256(salt + "WindowTree53").
constexpr uint32_t kWindowTree_CancelActiveTouches_Name = 810724882;
// The 1073221808 value is based on sha256(salt + "WindowTree54").
constexpr uint32_t kWindowTree_TransferGestureEventsTo_Name = 1073221808;
// The 267908998 value is based on sha256(salt + "WindowTree55").
constexpr uint32_t kWindowTree_TrackOcclusionState_Name = 267908998;
// The 484572573 value is based on sha256(salt + "WindowTree56").
constexpr uint32_t kWindowTree_PauseWindowOcclusionTracking_Name = 484572573;
// The 669530501 value is based on sha256(salt + "WindowTree57").
constexpr uint32_t kWindowTree_UnpauseWindowOcclusionTracking_Name = 669530501;
// The 955786285 value is based on sha256(salt + "WindowTree58").
constexpr uint32_t kWindowTree_ConnectToImeEngine_Name = 955786285;
// The 1380393893 value is based on sha256(salt + "WindowTreeClient1").
constexpr uint32_t kWindowTreeClient_OnClientId_Name = 1380393893;
// The 1585131240 value is based on sha256(salt + "WindowTreeClient2").
constexpr uint32_t kWindowTreeClient_OnEmbed_Name = 1585131240;
// The 586115632 value is based on sha256(salt + "WindowTreeClient3").
constexpr uint32_t kWindowTreeClient_OnEmbedFromToken_Name = 586115632;
// The 1817591940 value is based on sha256(salt + "WindowTreeClient4").
constexpr uint32_t kWindowTreeClient_OnEmbeddedAppDisconnected_Name = 1817591940;
// The 57030990 value is based on sha256(salt + "WindowTreeClient5").
constexpr uint32_t kWindowTreeClient_OnUnembed_Name = 57030990;
// The 662884246 value is based on sha256(salt + "WindowTreeClient6").
constexpr uint32_t kWindowTreeClient_OnCaptureChanged_Name = 662884246;
// The 941911486 value is based on sha256(salt + "WindowTreeClient7").
constexpr uint32_t kWindowTreeClient_OnFrameSinkIdAllocated_Name = 941911486;
// The 1630944880 value is based on sha256(salt + "WindowTreeClient8").
constexpr uint32_t kWindowTreeClient_OnTopLevelCreated_Name = 1630944880;
// The 81911770 value is based on sha256(salt + "WindowTreeClient9").
constexpr uint32_t kWindowTreeClient_OnWindowBoundsChanged_Name = 81911770;
// The 1139405775 value is based on sha256(salt + "WindowTreeClient10").
constexpr uint32_t kWindowTreeClient_OnWindowTransformChanged_Name = 1139405775;
// The 1048093509 value is based on sha256(salt + "WindowTreeClient11").
constexpr uint32_t kWindowTreeClient_OnTransientWindowAdded_Name = 1048093509;
// The 1252190946 value is based on sha256(salt + "WindowTreeClient12").
constexpr uint32_t kWindowTreeClient_OnTransientWindowRemoved_Name = 1252190946;
// The 145706070 value is based on sha256(salt + "WindowTreeClient13").
constexpr uint32_t kWindowTreeClient_OnWindowHierarchyChanged_Name = 145706070;
// The 2118322388 value is based on sha256(salt + "WindowTreeClient14").
constexpr uint32_t kWindowTreeClient_OnWindowReordered_Name = 2118322388;
// The 2026234434 value is based on sha256(salt + "WindowTreeClient15").
constexpr uint32_t kWindowTreeClient_OnWindowDeleted_Name = 2026234434;
// The 381133551 value is based on sha256(salt + "WindowTreeClient16").
constexpr uint32_t kWindowTreeClient_OnWindowVisibilityChanged_Name = 381133551;
// The 1768974436 value is based on sha256(salt + "WindowTreeClient17").
constexpr uint32_t kWindowTreeClient_OnWindowDisplayChanged_Name = 1768974436;
// The 777883556 value is based on sha256(salt + "WindowTreeClient18").
constexpr uint32_t kWindowTreeClient_OnWindowParentDrawnStateChanged_Name = 777883556;
// The 87689118 value is based on sha256(salt + "WindowTreeClient19").
constexpr uint32_t kWindowTreeClient_OnWindowSharedPropertyChanged_Name = 87689118;
// The 837269006 value is based on sha256(salt + "WindowTreeClient20").
constexpr uint32_t kWindowTreeClient_OnWindowInputEvent_Name = 837269006;
// The 1626460288 value is based on sha256(salt + "WindowTreeClient21").
constexpr uint32_t kWindowTreeClient_OnObservedInputEvent_Name = 1626460288;
// The 857271127 value is based on sha256(salt + "WindowTreeClient22").
constexpr uint32_t kWindowTreeClient_OnWindowFocused_Name = 857271127;
// The 402324106 value is based on sha256(salt + "WindowTreeClient23").
constexpr uint32_t kWindowTreeClient_OnWindowCursorChanged_Name = 402324106;
// The 588245729 value is based on sha256(salt + "WindowTreeClient24").
constexpr uint32_t kWindowTreeClient_OnDragDropStart_Name = 588245729;
// The 1139773555 value is based on sha256(salt + "WindowTreeClient25").
constexpr uint32_t kWindowTreeClient_OnDragEnter_Name = 1139773555;
// The 1496292923 value is based on sha256(salt + "WindowTreeClient26").
constexpr uint32_t kWindowTreeClient_OnDragOver_Name = 1496292923;
// The 763968548 value is based on sha256(salt + "WindowTreeClient27").
constexpr uint32_t kWindowTreeClient_OnDragLeave_Name = 763968548;
// The 495409507 value is based on sha256(salt + "WindowTreeClient28").
constexpr uint32_t kWindowTreeClient_OnCompleteDrop_Name = 495409507;
// The 1159126701 value is based on sha256(salt + "WindowTreeClient29").
constexpr uint32_t kWindowTreeClient_OnPerformDragDropCompleted_Name = 1159126701;
// The 2030718484 value is based on sha256(salt + "WindowTreeClient30").
constexpr uint32_t kWindowTreeClient_OnDragDropDone_Name = 2030718484;
// The 912788581 value is based on sha256(salt + "WindowTreeClient31").
constexpr uint32_t kWindowTreeClient_OnTopmostWindowChanged_Name = 912788581;
// The 1581568216 value is based on sha256(salt + "WindowTreeClient32").
constexpr uint32_t kWindowTreeClient_OnChangeCompleted_Name = 1581568216;
// The 1621976766 value is based on sha256(salt + "WindowTreeClient33").
constexpr uint32_t kWindowTreeClient_RequestClose_Name = 1621976766;
// The 709417484 value is based on sha256(salt + "WindowTreeClient34").
constexpr uint32_t kWindowTreeClient_GetScreenProviderObserver_Name = 709417484;
// The 1359394204 value is based on sha256(salt + "WindowTreeClient35").
constexpr uint32_t kWindowTreeClient_OnOcclusionStatesChanged_Name = 1359394204;
// The 1140024803 value is based on sha256(salt + "WindowTreeClient36").
constexpr uint32_t kWindowTreeClient_CleanupGestureState_Name = 1140024803;
// The 1126144618 value is based on sha256(salt + "WindowTreeClient37").
constexpr uint32_t kWindowTreeClient_OnWindowResizeLoopStarted_Name = 1126144618;
// The 1810082432 value is based on sha256(salt + "WindowTreeClient38").
constexpr uint32_t kWindowTreeClient_OnWindowResizeLoopEnded_Name = 1810082432;
// The 882061680 value is based on sha256(salt + "WindowTreeFactory1").
constexpr uint32_t kWindowTreeFactory_CreateWindowTree_Name = 882061680;

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_SHARED_MESSAGE_IDS_H_