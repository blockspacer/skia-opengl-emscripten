// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ws {
namespace mojom {

namespace internal {


// The 1065482919 value is based on sha256(salt + "WindowTree1").
constexpr uint32_t kWindowTree_NewWindow_Name = 1065482919;
// The 970794024 value is based on sha256(salt + "WindowTree2").
constexpr uint32_t kWindowTree_NewTopLevelWindow_Name = 970794024;
// The 791644574 value is based on sha256(salt + "WindowTree3").
constexpr uint32_t kWindowTree_DeleteWindow_Name = 791644574;
// The 1039561298 value is based on sha256(salt + "WindowTree4").
constexpr uint32_t kWindowTree_SetCapture_Name = 1039561298;
// The 1320874382 value is based on sha256(salt + "WindowTree5").
constexpr uint32_t kWindowTree_ReleaseCapture_Name = 1320874382;
// The 77504027 value is based on sha256(salt + "WindowTree6").
constexpr uint32_t kWindowTree_ObserveEventTypes_Name = 77504027;
// The 1750939753 value is based on sha256(salt + "WindowTree7").
constexpr uint32_t kWindowTree_SetWindowBounds_Name = 1750939753;
// The 497701195 value is based on sha256(salt + "WindowTree8").
constexpr uint32_t kWindowTree_UpdateLocalSurfaceIdFromChild_Name = 497701195;
// The 1588353372 value is based on sha256(salt + "WindowTree9").
constexpr uint32_t kWindowTree_AllocateLocalSurfaceId_Name = 1588353372;
// The 483715622 value is based on sha256(salt + "WindowTree10").
constexpr uint32_t kWindowTree_SetWindowTransform_Name = 483715622;
// The 996149592 value is based on sha256(salt + "WindowTree11").
constexpr uint32_t kWindowTree_SetClientArea_Name = 996149592;
// The 317394056 value is based on sha256(salt + "WindowTree12").
constexpr uint32_t kWindowTree_SetHitTestInsets_Name = 317394056;
// The 801722189 value is based on sha256(salt + "WindowTree13").
constexpr uint32_t kWindowTree_SetShape_Name = 801722189;
// The 777506998 value is based on sha256(salt + "WindowTree14").
constexpr uint32_t kWindowTree_SetCanAcceptDrops_Name = 777506998;
// The 544172624 value is based on sha256(salt + "WindowTree15").
constexpr uint32_t kWindowTree_SetWindowVisibility_Name = 544172624;
// The 689935505 value is based on sha256(salt + "WindowTree16").
constexpr uint32_t kWindowTree_SetWindowProperty_Name = 689935505;
// The 1478677777 value is based on sha256(salt + "WindowTree17").
constexpr uint32_t kWindowTree_SetWindowOpacity_Name = 1478677777;
// The 2111561414 value is based on sha256(salt + "WindowTree18").
constexpr uint32_t kWindowTree_SetWindowTransparent_Name = 2111561414;
// The 1250975233 value is based on sha256(salt + "WindowTree19").
constexpr uint32_t kWindowTree_AttachCompositorFrameSink_Name = 1250975233;
// The 1939063243 value is based on sha256(salt + "WindowTree20").
constexpr uint32_t kWindowTree_AddWindow_Name = 1939063243;
// The 1563243436 value is based on sha256(salt + "WindowTree21").
constexpr uint32_t kWindowTree_RemoveWindowFromParent_Name = 1563243436;
// The 81232049 value is based on sha256(salt + "WindowTree22").
constexpr uint32_t kWindowTree_AddTransientWindow_Name = 81232049;
// The 722465338 value is based on sha256(salt + "WindowTree23").
constexpr uint32_t kWindowTree_RemoveTransientWindowFromParent_Name = 722465338;
// The 1014552843 value is based on sha256(salt + "WindowTree24").
constexpr uint32_t kWindowTree_SetModalType_Name = 1014552843;
// The 2053729447 value is based on sha256(salt + "WindowTree25").
constexpr uint32_t kWindowTree_ReorderWindow_Name = 2053729447;
// The 246111212 value is based on sha256(salt + "WindowTree26").
constexpr uint32_t kWindowTree_GetWindowTree_Name = 246111212;
// The 2053286648 value is based on sha256(salt + "WindowTree27").
constexpr uint32_t kWindowTree_Embed_Name = 2053286648;
// The 40692878 value is based on sha256(salt + "WindowTree28").
constexpr uint32_t kWindowTree_ScheduleEmbed_Name = 40692878;
// The 680942839 value is based on sha256(salt + "WindowTree29").
constexpr uint32_t kWindowTree_ScheduleEmbedForExistingClient_Name = 680942839;
// The 449615243 value is based on sha256(salt + "WindowTree30").
constexpr uint32_t kWindowTree_EmbedUsingToken_Name = 449615243;
// The 1492065294 value is based on sha256(salt + "WindowTree31").
constexpr uint32_t kWindowTree_AttachFrameSinkId_Name = 1492065294;
// The 1245007567 value is based on sha256(salt + "WindowTree32").
constexpr uint32_t kWindowTree_UnattachFrameSinkId_Name = 1245007567;
// The 2091971154 value is based on sha256(salt + "WindowTree33").
constexpr uint32_t kWindowTree_SetFocus_Name = 2091971154;
// The 1281183796 value is based on sha256(salt + "WindowTree34").
constexpr uint32_t kWindowTree_SetCanFocus_Name = 1281183796;
// The 903401950 value is based on sha256(salt + "WindowTree35").
constexpr uint32_t kWindowTree_SetCursor_Name = 903401950;
// The 1611365631 value is based on sha256(salt + "WindowTree36").
constexpr uint32_t kWindowTree_SetWindowTextInputState_Name = 1611365631;
// The 929848428 value is based on sha256(salt + "WindowTree37").
constexpr uint32_t kWindowTree_SetImeVisibility_Name = 929848428;
// The 987061509 value is based on sha256(salt + "WindowTree38").
constexpr uint32_t kWindowTree_SetEventTargetingPolicy_Name = 987061509;
// The 282805363 value is based on sha256(salt + "WindowTree39").
constexpr uint32_t kWindowTree_OnWindowInputEventAck_Name = 282805363;
// The 1665620021 value is based on sha256(salt + "WindowTree40").
constexpr uint32_t kWindowTree_DeactivateWindow_Name = 1665620021;
// The 291399162 value is based on sha256(salt + "WindowTree41").
constexpr uint32_t kWindowTree_StackAbove_Name = 291399162;
// The 471487948 value is based on sha256(salt + "WindowTree42").
constexpr uint32_t kWindowTree_StackAtTop_Name = 471487948;
// The 1218848158 value is based on sha256(salt + "WindowTree43").
constexpr uint32_t kWindowTree_BindWindowManagerInterface_Name = 1218848158;
// The 1834246024 value is based on sha256(salt + "WindowTree44").
constexpr uint32_t kWindowTree_GetCursorLocationMemory_Name = 1834246024;
// The 1984926256 value is based on sha256(salt + "WindowTree45").
constexpr uint32_t kWindowTree_PerformWindowMove_Name = 1984926256;
// The 647826382 value is based on sha256(salt + "WindowTree46").
constexpr uint32_t kWindowTree_CancelWindowMove_Name = 647826382;
// The 1705650803 value is based on sha256(salt + "WindowTree47").
constexpr uint32_t kWindowTree_PerformDragDrop_Name = 1705650803;
// The 132722777 value is based on sha256(salt + "WindowTree48").
constexpr uint32_t kWindowTree_CancelDragDrop_Name = 132722777;
// The 375278813 value is based on sha256(salt + "WindowTree49").
constexpr uint32_t kWindowTree_ObserveTopmostWindow_Name = 375278813;
// The 249018724 value is based on sha256(salt + "WindowTree50").
constexpr uint32_t kWindowTree_StopObservingTopmostWindow_Name = 249018724;
// The 1263390340 value is based on sha256(salt + "WindowTree51").
constexpr uint32_t kWindowTree_SetWindowResizeShadow_Name = 1263390340;
// The 2121864161 value is based on sha256(salt + "WindowTree52").
constexpr uint32_t kWindowTree_CancelActiveTouchesExcept_Name = 2121864161;
// The 1297383912 value is based on sha256(salt + "WindowTree53").
constexpr uint32_t kWindowTree_CancelActiveTouches_Name = 1297383912;
// The 290363261 value is based on sha256(salt + "WindowTree54").
constexpr uint32_t kWindowTree_TransferGestureEventsTo_Name = 290363261;
// The 666407219 value is based on sha256(salt + "WindowTree55").
constexpr uint32_t kWindowTree_TrackOcclusionState_Name = 666407219;
// The 1560270916 value is based on sha256(salt + "WindowTree56").
constexpr uint32_t kWindowTree_PauseWindowOcclusionTracking_Name = 1560270916;
// The 714023412 value is based on sha256(salt + "WindowTree57").
constexpr uint32_t kWindowTree_UnpauseWindowOcclusionTracking_Name = 714023412;
// The 1110488087 value is based on sha256(salt + "WindowTree58").
constexpr uint32_t kWindowTree_ConnectToImeEngine_Name = 1110488087;
// The 29742117 value is based on sha256(salt + "WindowTreeClient1").
constexpr uint32_t kWindowTreeClient_OnClientId_Name = 29742117;
// The 1283590019 value is based on sha256(salt + "WindowTreeClient2").
constexpr uint32_t kWindowTreeClient_OnEmbed_Name = 1283590019;
// The 995048063 value is based on sha256(salt + "WindowTreeClient3").
constexpr uint32_t kWindowTreeClient_OnEmbedFromToken_Name = 995048063;
// The 1141721070 value is based on sha256(salt + "WindowTreeClient4").
constexpr uint32_t kWindowTreeClient_OnEmbeddedAppDisconnected_Name = 1141721070;
// The 1694514701 value is based on sha256(salt + "WindowTreeClient5").
constexpr uint32_t kWindowTreeClient_OnUnembed_Name = 1694514701;
// The 100801000 value is based on sha256(salt + "WindowTreeClient6").
constexpr uint32_t kWindowTreeClient_OnCaptureChanged_Name = 100801000;
// The 632961863 value is based on sha256(salt + "WindowTreeClient7").
constexpr uint32_t kWindowTreeClient_OnFrameSinkIdAllocated_Name = 632961863;
// The 383637755 value is based on sha256(salt + "WindowTreeClient8").
constexpr uint32_t kWindowTreeClient_OnTopLevelCreated_Name = 383637755;
// The 332006071 value is based on sha256(salt + "WindowTreeClient9").
constexpr uint32_t kWindowTreeClient_OnWindowBoundsChanged_Name = 332006071;
// The 1425492942 value is based on sha256(salt + "WindowTreeClient10").
constexpr uint32_t kWindowTreeClient_OnWindowTransformChanged_Name = 1425492942;
// The 1840700407 value is based on sha256(salt + "WindowTreeClient11").
constexpr uint32_t kWindowTreeClient_OnTransientWindowAdded_Name = 1840700407;
// The 1784149438 value is based on sha256(salt + "WindowTreeClient12").
constexpr uint32_t kWindowTreeClient_OnTransientWindowRemoved_Name = 1784149438;
// The 69067952 value is based on sha256(salt + "WindowTreeClient13").
constexpr uint32_t kWindowTreeClient_OnWindowHierarchyChanged_Name = 69067952;
// The 1267405445 value is based on sha256(salt + "WindowTreeClient14").
constexpr uint32_t kWindowTreeClient_OnWindowReordered_Name = 1267405445;
// The 895515251 value is based on sha256(salt + "WindowTreeClient15").
constexpr uint32_t kWindowTreeClient_OnWindowDeleted_Name = 895515251;
// The 2072216964 value is based on sha256(salt + "WindowTreeClient16").
constexpr uint32_t kWindowTreeClient_OnWindowVisibilityChanged_Name = 2072216964;
// The 659745454 value is based on sha256(salt + "WindowTreeClient17").
constexpr uint32_t kWindowTreeClient_OnWindowDisplayChanged_Name = 659745454;
// The 2010078646 value is based on sha256(salt + "WindowTreeClient18").
constexpr uint32_t kWindowTreeClient_OnWindowParentDrawnStateChanged_Name = 2010078646;
// The 638443494 value is based on sha256(salt + "WindowTreeClient19").
constexpr uint32_t kWindowTreeClient_OnWindowSharedPropertyChanged_Name = 638443494;
// The 46118468 value is based on sha256(salt + "WindowTreeClient20").
constexpr uint32_t kWindowTreeClient_OnWindowInputEvent_Name = 46118468;
// The 286433650 value is based on sha256(salt + "WindowTreeClient21").
constexpr uint32_t kWindowTreeClient_OnObservedInputEvent_Name = 286433650;
// The 1212162150 value is based on sha256(salt + "WindowTreeClient22").
constexpr uint32_t kWindowTreeClient_OnWindowFocused_Name = 1212162150;
// The 480376732 value is based on sha256(salt + "WindowTreeClient23").
constexpr uint32_t kWindowTreeClient_OnWindowCursorChanged_Name = 480376732;
// The 2137599238 value is based on sha256(salt + "WindowTreeClient24").
constexpr uint32_t kWindowTreeClient_OnDragDropStart_Name = 2137599238;
// The 467387393 value is based on sha256(salt + "WindowTreeClient25").
constexpr uint32_t kWindowTreeClient_OnDragEnter_Name = 467387393;
// The 1376005678 value is based on sha256(salt + "WindowTreeClient26").
constexpr uint32_t kWindowTreeClient_OnDragOver_Name = 1376005678;
// The 966350146 value is based on sha256(salt + "WindowTreeClient27").
constexpr uint32_t kWindowTreeClient_OnDragLeave_Name = 966350146;
// The 1222882442 value is based on sha256(salt + "WindowTreeClient28").
constexpr uint32_t kWindowTreeClient_OnCompleteDrop_Name = 1222882442;
// The 531403974 value is based on sha256(salt + "WindowTreeClient29").
constexpr uint32_t kWindowTreeClient_OnPerformDragDropCompleted_Name = 531403974;
// The 495099606 value is based on sha256(salt + "WindowTreeClient30").
constexpr uint32_t kWindowTreeClient_OnDragDropDone_Name = 495099606;
// The 1717077396 value is based on sha256(salt + "WindowTreeClient31").
constexpr uint32_t kWindowTreeClient_OnTopmostWindowChanged_Name = 1717077396;
// The 652926108 value is based on sha256(salt + "WindowTreeClient32").
constexpr uint32_t kWindowTreeClient_OnChangeCompleted_Name = 652926108;
// The 2117914726 value is based on sha256(salt + "WindowTreeClient33").
constexpr uint32_t kWindowTreeClient_RequestClose_Name = 2117914726;
// The 550714069 value is based on sha256(salt + "WindowTreeClient34").
constexpr uint32_t kWindowTreeClient_GetScreenProviderObserver_Name = 550714069;
// The 1374181020 value is based on sha256(salt + "WindowTreeClient35").
constexpr uint32_t kWindowTreeClient_OnOcclusionStatesChanged_Name = 1374181020;
// The 347881143 value is based on sha256(salt + "WindowTreeClient36").
constexpr uint32_t kWindowTreeClient_CleanupGestureState_Name = 347881143;
// The 116785800 value is based on sha256(salt + "WindowTreeClient37").
constexpr uint32_t kWindowTreeClient_OnWindowResizeLoopStarted_Name = 116785800;
// The 2024454172 value is based on sha256(salt + "WindowTreeClient38").
constexpr uint32_t kWindowTreeClient_OnWindowResizeLoopEnded_Name = 2024454172;
// The 1697698727 value is based on sha256(salt + "WindowTreeFactory1").
constexpr uint32_t kWindowTreeFactory_CreateWindowTree_Name = 1697698727;

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_SHARED_MESSAGE_IDS_H_