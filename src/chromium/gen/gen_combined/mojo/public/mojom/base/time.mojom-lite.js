// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('mojoBase.mojom');







/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.TimeSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.TimeDeltaSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.TimeTicksSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojoBase.mojom.TimeSpec.$,
    'Time',
    8,
    [
      mojo.internal.StructField(
        'internalValue', 0,
        0,
        mojo.internal.Int64,
        0,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    mojoBase.mojom.TimeDeltaSpec.$,
    'TimeDelta',
    8,
    [
      mojo.internal.StructField(
        'microseconds', 0,
        0,
        mojo.internal.Int64,
        0,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    mojoBase.mojom.TimeTicksSpec.$,
    'TimeTicks',
    8,
    [
      mojo.internal.StructField(
        'internalValue', 0,
        0,
        mojo.internal.Int64,
        0,
        false /* nullable */),
    ]);



