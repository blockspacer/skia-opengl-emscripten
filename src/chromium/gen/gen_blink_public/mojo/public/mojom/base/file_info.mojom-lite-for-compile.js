// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('mojoBase.mojom.Time');






goog.provide('mojoBase.mojom.FileInfoSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.FileInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojoBase.mojom.FileInfoSpec.$,
    'FileInfo',
    40,
    [
      mojo.internal.StructField(
        'size', 0,
        0,
        mojo.internal.Int64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'isDirectory', 8,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'isSymbolicLink', 8,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'lastModified', 16,
        0,
        mojoBase.mojom.TimeSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'lastAccessed', 24,
        0,
        mojoBase.mojom.TimeSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'creationTime', 32,
        0,
        mojoBase.mojom.TimeSpec.$,
        null,
        false /* nullable */),
    ]);

goog.provide('mojoBase.mojom.FileInfo');


/**
 * @typedef { {
 *   size: !number,
 *   isDirectory: !boolean,
 *   isSymbolicLink: !boolean,
 *   lastModified: !mojoBase.mojom.Time,
 *   lastAccessed: !mojoBase.mojom.Time,
 *   creationTime: !mojoBase.mojom.Time,
 * } }
 */

mojoBase.mojom.FileInfo;

