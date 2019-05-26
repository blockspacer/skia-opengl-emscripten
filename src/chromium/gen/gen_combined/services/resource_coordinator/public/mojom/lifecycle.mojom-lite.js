// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('resourceCoordinator.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
resourceCoordinator.mojom.LifecycleStateSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
resourceCoordinator.mojom.LifecycleState = {
  
  kRunning: 0,
  kFrozen: 0,
  kDiscarded: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

/** @suppress {checkTypes} */
resourceCoordinator.mojom.LifecycleState.kRunning = 0;

/** @suppress {checkTypes} */
resourceCoordinator.mojom.LifecycleState.kFrozen = resourceCoordinator.mojom.LifecycleState.kRunning + 1;

/** @suppress {checkTypes} */
resourceCoordinator.mojom.LifecycleState.kDiscarded = resourceCoordinator.mojom.LifecycleState.kFrozen + 1;




