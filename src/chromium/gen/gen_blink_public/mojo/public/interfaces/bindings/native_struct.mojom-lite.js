// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('mojo.native');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
mojo.native.SerializedHandleTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
mojo.native.SerializedHandleType = {
  
  MOJO_HANDLE: 0,
  PLATFORM_FILE: 0,
  WIN_HANDLE: 0,
  MACH_PORT: 0,
  FUCHSIA_HANDLE: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 4,
};

/** @suppress {checkTypes} */
mojo.native.SerializedHandleType.MOJO_HANDLE = 0;

/** @suppress {checkTypes} */
mojo.native.SerializedHandleType.PLATFORM_FILE = mojo.native.SerializedHandleType.MOJO_HANDLE + 1;

/** @suppress {checkTypes} */
mojo.native.SerializedHandleType.WIN_HANDLE = mojo.native.SerializedHandleType.PLATFORM_FILE + 1;

/** @suppress {checkTypes} */
mojo.native.SerializedHandleType.MACH_PORT = mojo.native.SerializedHandleType.WIN_HANDLE + 1;

/** @suppress {checkTypes} */
mojo.native.SerializedHandleType.FUCHSIA_HANDLE = mojo.native.SerializedHandleType.MACH_PORT + 1;




/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.native.SerializedHandleSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.native.NativeStructSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojo.native.SerializedHandleSpec.$,
    'SerializedHandle',
    8,
    [
      mojo.internal.StructField(
        'theHandle', 0,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'type', 4,
        0,
        mojo.native.SerializedHandleTypeSpec.$,
        0,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    mojo.native.NativeStructSpec.$,
    'NativeStruct',
    16,
    [
      mojo.internal.StructField(
        'data', 0,
        0,
        mojo.internal.Array(mojo.internal.Uint8, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'handles', 8,
        0,
        mojo.internal.Array(mojo.native.SerializedHandleSpec.$, false),
        null,
        true /* nullable */),
    ]);



