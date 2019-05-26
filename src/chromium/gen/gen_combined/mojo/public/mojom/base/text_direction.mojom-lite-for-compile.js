// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');





goog.provide('mojoBase.mojom.TextDirection');
goog.provide('mojoBase.mojom.TextDirectionSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
mojoBase.mojom.TextDirectionSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
mojoBase.mojom.TextDirection = {
  
  UNKNOWN_DIRECTION: 0,
  RIGHT_TO_LEFT: 0,
  LEFT_TO_RIGHT: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

/** @suppress {checkTypes} */
mojoBase.mojom.TextDirection.UNKNOWN_DIRECTION = 0;

/** @suppress {checkTypes} */
mojoBase.mojom.TextDirection.RIGHT_TO_LEFT = mojoBase.mojom.TextDirection.UNKNOWN_DIRECTION + 1;

/** @suppress {checkTypes} */
mojoBase.mojom.TextDirection.LEFT_TO_RIGHT = mojoBase.mojom.TextDirection.RIGHT_TO_LEFT + 1;




