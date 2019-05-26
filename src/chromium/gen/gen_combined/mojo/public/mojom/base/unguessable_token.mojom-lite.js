// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('mojoBase.mojom');







/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.UnguessableTokenSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojoBase.mojom.UnguessableTokenSpec.$,
    'UnguessableToken',
    16,
    [
      mojo.internal.StructField(
        'high', 0,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'low', 8,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
    ]);



