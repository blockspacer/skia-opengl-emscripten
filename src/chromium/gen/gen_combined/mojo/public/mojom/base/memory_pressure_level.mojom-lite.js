// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('mojoBase.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
mojoBase.mojom.MemoryPressureLevelSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
mojoBase.mojom.MemoryPressureLevel = {
  
  NONE: 0,
  MODERATE: 0,
  CRITICAL: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

/** @suppress {checkTypes} */
mojoBase.mojom.MemoryPressureLevel.NONE = 0;

/** @suppress {checkTypes} */
mojoBase.mojom.MemoryPressureLevel.MODERATE = mojoBase.mojom.MemoryPressureLevel.NONE + 1;

/** @suppress {checkTypes} */
mojoBase.mojom.MemoryPressureLevel.CRITICAL = mojoBase.mojom.MemoryPressureLevel.MODERATE + 1;




