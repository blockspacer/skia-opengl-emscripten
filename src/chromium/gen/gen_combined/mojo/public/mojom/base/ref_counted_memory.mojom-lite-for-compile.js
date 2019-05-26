// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('mojoBase.mojom.BigBuffer');






goog.provide('mojoBase.mojom.RefCountedMemorySpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.RefCountedMemorySpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojoBase.mojom.RefCountedMemorySpec.$,
    'RefCountedMemory',
    16,
    [
      mojo.internal.StructField(
        'data', 0,
        0,
        mojoBase.mojom.BigBufferSpec.$,
        null,
        false /* nullable */),
    ]);

goog.provide('mojoBase.mojom.RefCountedMemory');


/**
 * @typedef { {
 *   data: !mojoBase.mojom.BigBuffer,
 * } }
 */

mojoBase.mojom.RefCountedMemory;

