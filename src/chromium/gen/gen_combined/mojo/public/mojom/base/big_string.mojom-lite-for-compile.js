// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('mojoBase.mojom.BigBuffer');






goog.provide('mojoBase.mojom.BigStringSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.BigStringSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojoBase.mojom.BigStringSpec.$,
    'BigString',
    16,
    [
      mojo.internal.StructField(
        'data', 0,
        0,
        mojoBase.mojom.BigBufferSpec.$,
        null,
        false /* nullable */),
    ]);

goog.provide('mojoBase.mojom.BigString');


/**
 * @typedef { {
 *   data: !mojoBase.mojom.BigBuffer,
 * } }
 */

mojoBase.mojom.BigString;

