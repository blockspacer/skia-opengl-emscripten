// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');







goog.provide('mojoBase.mojom.ReadOnlySharedMemoryRegionSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.ReadOnlySharedMemoryRegionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('mojoBase.mojom.WritableSharedMemoryRegionSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.WritableSharedMemoryRegionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('mojoBase.mojom.UnsafeSharedMemoryRegionSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.UnsafeSharedMemoryRegionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojoBase.mojom.ReadOnlySharedMemoryRegionSpec.$,
    'ReadOnlySharedMemoryRegion',
    8,
    [
      mojo.internal.StructField(
        'buffer', 0,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */),
    ]);

goog.provide('mojoBase.mojom.ReadOnlySharedMemoryRegion');


/**
 * @typedef { {
 *   buffer: !MojoHandle,
 * } }
 */

mojoBase.mojom.ReadOnlySharedMemoryRegion;



mojo.internal.Struct(
    mojoBase.mojom.WritableSharedMemoryRegionSpec.$,
    'WritableSharedMemoryRegion',
    8,
    [
      mojo.internal.StructField(
        'buffer', 0,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */),
    ]);

goog.provide('mojoBase.mojom.WritableSharedMemoryRegion');


/**
 * @typedef { {
 *   buffer: !MojoHandle,
 * } }
 */

mojoBase.mojom.WritableSharedMemoryRegion;



mojo.internal.Struct(
    mojoBase.mojom.UnsafeSharedMemoryRegionSpec.$,
    'UnsafeSharedMemoryRegion',
    8,
    [
      mojo.internal.StructField(
        'buffer', 0,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */),
    ]);

goog.provide('mojoBase.mojom.UnsafeSharedMemoryRegion');


/**
 * @typedef { {
 *   buffer: !MojoHandle,
 * } }
 */

mojoBase.mojom.UnsafeSharedMemoryRegion;

