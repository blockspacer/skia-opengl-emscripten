// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');







goog.provide('url.mojom.UrlSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
url.mojom.UrlSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    url.mojom.UrlSpec.$,
    'Url',
    8,
    [
      mojo.internal.StructField(
        'url', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ]);

goog.provide('url.mojom.Url');


/**
 * @typedef { {
 *   url: !string,
 * } }
 */

url.mojom.Url;

