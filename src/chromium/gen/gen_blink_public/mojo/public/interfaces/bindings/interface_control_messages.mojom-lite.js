// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('mojo.interfaceControl');




/**
 * @const { !number }
 * @export
 */
mojo.interfaceControl.kRunMessageId =
    0xFFFFFFFF;

/**
 * @const { !number }
 * @export
 */
mojo.interfaceControl.kRunOrClosePipeMessageId =
    0xFFFFFFFE;




/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.interfaceControl.RunMessageParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.interfaceControl.RunResponseMessageParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.interfaceControl.QueryVersionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.interfaceControl.QueryVersionResultSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.interfaceControl.FlushForTestingSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.interfaceControl.RunOrClosePipeMessageParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.interfaceControl.RequireVersionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType} }
 * @export
 */
mojo.interfaceControl.RunInputSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType} }
 * @export
 */
mojo.interfaceControl.RunOutputSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType} }
 * @export
 */
mojo.interfaceControl.RunOrClosePipeInputSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojo.interfaceControl.RunMessageParamsSpec.$,
    'RunMessageParams',
    16,
    [
      mojo.internal.StructField(
        'input', 0,
        0,
        mojo.interfaceControl.RunInputSpec.$,
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    mojo.interfaceControl.RunResponseMessageParamsSpec.$,
    'RunResponseMessageParams',
    16,
    [
      mojo.internal.StructField(
        'output', 0,
        0,
        mojo.interfaceControl.RunOutputSpec.$,
        null,
        true /* nullable */),
    ]);





mojo.internal.Struct(
    mojo.interfaceControl.QueryVersionSpec.$,
    'QueryVersion',
    0,
    [
    ]);





mojo.internal.Struct(
    mojo.interfaceControl.QueryVersionResultSpec.$,
    'QueryVersionResult',
    8,
    [
      mojo.internal.StructField(
        'version', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    mojo.interfaceControl.FlushForTestingSpec.$,
    'FlushForTesting',
    0,
    [
    ]);





mojo.internal.Struct(
    mojo.interfaceControl.RunOrClosePipeMessageParamsSpec.$,
    'RunOrClosePipeMessageParams',
    16,
    [
      mojo.internal.StructField(
        'input', 0,
        0,
        mojo.interfaceControl.RunOrClosePipeInputSpec.$,
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    mojo.interfaceControl.RequireVersionSpec.$,
    'RequireVersion',
    8,
    [
      mojo.internal.StructField(
        'version', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ]);





mojo.internal.Union(
    mojo.interfaceControl.RunInputSpec.$, 'RunInput',
    {
      'queryVersion': {
        'ordinal': 0,
        'type': mojo.interfaceControl.QueryVersionSpec.$,
      },
      'flushForTesting': {
        'ordinal': 1,
        'type': mojo.interfaceControl.FlushForTestingSpec.$,
      },
    });

/**
 * @typedef { {
 *   queryVersion: (!mojo.interfaceControl.QueryVersion|undefined),
 *   flushForTesting: (!mojo.interfaceControl.FlushForTesting|undefined),
 * } }
 */
mojo.interfaceControl.RunInput;


mojo.internal.Union(
    mojo.interfaceControl.RunOutputSpec.$, 'RunOutput',
    {
      'queryVersionResult': {
        'ordinal': 0,
        'type': mojo.interfaceControl.QueryVersionResultSpec.$,
      },
    });

/**
 * @typedef { {
 *   queryVersionResult: (!mojo.interfaceControl.QueryVersionResult|undefined),
 * } }
 */
mojo.interfaceControl.RunOutput;


mojo.internal.Union(
    mojo.interfaceControl.RunOrClosePipeInputSpec.$, 'RunOrClosePipeInput',
    {
      'requireVersion': {
        'ordinal': 0,
        'type': mojo.interfaceControl.RequireVersionSpec.$,
      },
    });

/**
 * @typedef { {
 *   requireVersion: (!mojo.interfaceControl.RequireVersion|undefined),
 * } }
 */
mojo.interfaceControl.RunOrClosePipeInput;
