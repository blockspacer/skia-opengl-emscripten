// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('mojoBase.mojom');







/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.ProcessIdSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojoBase.mojom.ProcessIdSpec.$,
    'ProcessId',
    8,
    [
      mojo.internal.StructField(
        'pid', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ]);



