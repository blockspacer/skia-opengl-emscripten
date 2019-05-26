// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.



goog.provide('mojoBase.mojom.Token');

mojoBase.mojom.Token = class {
  constructor() {
    /** @type { !number } */
    this.high;
    /** @type { !number } */
    this.low;
  }
};
