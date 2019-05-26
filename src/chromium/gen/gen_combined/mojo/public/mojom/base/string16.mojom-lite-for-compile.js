// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('mojoBase.mojom.BigBuffer');






goog.provide('mojoBase.mojom.String16Spec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.String16Spec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('mojoBase.mojom.BigString16Spec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.BigString16Spec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojoBase.mojom.String16Spec.$,
    'String16',
    8,
    [
      mojo.internal.StructField(
        'data', 0,
        0,
        mojo.internal.Array(mojo.internal.Uint16, false),
        null,
        false /* nullable */),
    ]);

goog.provide('mojoBase.mojom.String16');


/**
 * @typedef { {
 *   data: !Array<!number>,
 * } }
 */

mojoBase.mojom.String16;



mojo.internal.Struct(
    mojoBase.mojom.BigString16Spec.$,
    'BigString16',
    16,
    [
      mojo.internal.StructField(
        'data', 0,
        0,
        mojoBase.mojom.BigBufferSpec.$,
        null,
        false /* nullable */),
    ]);

goog.provide('mojoBase.mojom.BigString16');


/**
 * @typedef { {
 *   data: !mojoBase.mojom.BigBuffer,
 * } }
 */

mojoBase.mojom.BigString16;

