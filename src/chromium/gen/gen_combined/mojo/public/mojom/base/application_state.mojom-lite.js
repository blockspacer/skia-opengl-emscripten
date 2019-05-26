// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('mojoBase.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
mojoBase.mojom.ApplicationStateSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
mojoBase.mojom.ApplicationState = {
  
  UNKNOWN: 0,
  HAS_RUNNING_ACTIVITIES: 0,
  HAS_PAUSED_ACTIVITIES: 0,
  HAS_STOPPED_ACTIVITIES: 0,
  HAS_DESTROYED_ACTIVITIES: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 4,
};

/** @suppress {checkTypes} */
mojoBase.mojom.ApplicationState.UNKNOWN = 0;

/** @suppress {checkTypes} */
mojoBase.mojom.ApplicationState.HAS_RUNNING_ACTIVITIES = mojoBase.mojom.ApplicationState.UNKNOWN + 1;

/** @suppress {checkTypes} */
mojoBase.mojom.ApplicationState.HAS_PAUSED_ACTIVITIES = mojoBase.mojom.ApplicationState.HAS_RUNNING_ACTIVITIES + 1;

/** @suppress {checkTypes} */
mojoBase.mojom.ApplicationState.HAS_STOPPED_ACTIVITIES = mojoBase.mojom.ApplicationState.HAS_PAUSED_ACTIVITIES + 1;

/** @suppress {checkTypes} */
mojoBase.mojom.ApplicationState.HAS_DESTROYED_ACTIVITIES = mojoBase.mojom.ApplicationState.HAS_STOPPED_ACTIVITIES + 1;




