// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');




goog.provide('mojo.pipeControl.kRunOrClosePipeMessageId');
/**
 * @const { !number }
 * @export
 */
mojo.pipeControl.kRunOrClosePipeMessageId =
    0xFFFFFFFE;



goog.provide('mojo.pipeControl.RunOrClosePipeMessageParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.pipeControl.RunOrClosePipeMessageParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('mojo.pipeControl.DisconnectReasonSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.pipeControl.DisconnectReasonSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('mojo.pipeControl.PeerAssociatedEndpointClosedEventSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.pipeControl.PeerAssociatedEndpointClosedEventSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('mojo.pipeControl.RunOrClosePipeInputSpec');
/**
 * @const { {$:!mojo.internal.MojomType} }
 * @export
 */
mojo.pipeControl.RunOrClosePipeInputSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojo.pipeControl.RunOrClosePipeMessageParamsSpec.$,
    'RunOrClosePipeMessageParams',
    16,
    [
      mojo.internal.StructField(
        'input', 0,
        0,
        mojo.pipeControl.RunOrClosePipeInputSpec.$,
        null,
        false /* nullable */),
    ]);

goog.provide('mojo.pipeControl.RunOrClosePipeMessageParams');


/**
 * @typedef { {
 *   input: !mojo.pipeControl.RunOrClosePipeInput,
 * } }
 */

mojo.pipeControl.RunOrClosePipeMessageParams;



mojo.internal.Struct(
    mojo.pipeControl.DisconnectReasonSpec.$,
    'DisconnectReason',
    16,
    [
      mojo.internal.StructField(
        'customReason', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'description', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ]);

goog.provide('mojo.pipeControl.DisconnectReason');


/**
 * @typedef { {
 *   customReason: !number,
 *   description: !string,
 * } }
 */

mojo.pipeControl.DisconnectReason;



mojo.internal.Struct(
    mojo.pipeControl.PeerAssociatedEndpointClosedEventSpec.$,
    'PeerAssociatedEndpointClosedEvent',
    16,
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'disconnectReason', 8,
        0,
        mojo.pipeControl.DisconnectReasonSpec.$,
        null,
        true /* nullable */),
    ]);

goog.provide('mojo.pipeControl.PeerAssociatedEndpointClosedEvent');


/**
 * @typedef { {
 *   id: !number,
 *   disconnectReason: (mojo.pipeControl.DisconnectReason|undefined),
 * } }
 */

mojo.pipeControl.PeerAssociatedEndpointClosedEvent;

goog.provide('mojo.pipeControl.RunOrClosePipeInput');


mojo.internal.Union(
    mojo.pipeControl.RunOrClosePipeInputSpec.$, 'RunOrClosePipeInput',
    {
      'peerAssociatedEndpointClosedEvent': {
        'ordinal': 0,
        'type': mojo.pipeControl.PeerAssociatedEndpointClosedEventSpec.$,
      },
    });

/**
 * @typedef { {
 *   peerAssociatedEndpointClosedEvent: (!mojo.pipeControl.PeerAssociatedEndpointClosedEvent|undefined),
 * } }
 */
mojo.pipeControl.RunOrClosePipeInput;
