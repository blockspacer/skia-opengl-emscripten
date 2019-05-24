// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');





goog.provide('mojoBase.mojom.ThreadPriority');
goog.provide('mojoBase.mojom.ThreadPrioritySpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
mojoBase.mojom.ThreadPrioritySpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
mojoBase.mojom.ThreadPriority = {
  
  BACKGROUND: 0,
  NORMAL: 0,
  DISPLAY: 0,
  REALTIME_AUDIO: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};

/** @suppress {checkTypes} */
mojoBase.mojom.ThreadPriority.BACKGROUND = 0;

/** @suppress {checkTypes} */
mojoBase.mojom.ThreadPriority.NORMAL = mojoBase.mojom.ThreadPriority.BACKGROUND + 1;

/** @suppress {checkTypes} */
mojoBase.mojom.ThreadPriority.DISPLAY = mojoBase.mojom.ThreadPriority.NORMAL + 1;

/** @suppress {checkTypes} */
mojoBase.mojom.ThreadPriority.REALTIME_AUDIO = mojoBase.mojom.ThreadPriority.DISPLAY + 1;




