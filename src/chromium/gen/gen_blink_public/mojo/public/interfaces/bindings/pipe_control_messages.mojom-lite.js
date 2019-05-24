// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('mojo.pipeControl');




/**
 * @const { !number }
 * @export
 */
mojo.pipeControl.kRunOrClosePipeMessageId =
    0xFFFFFFFE;




/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.pipeControl.RunOrClosePipeMessageParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.pipeControl.DisconnectReasonSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojo.pipeControl.PeerAssociatedEndpointClosedEventSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


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
