// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.



goog.provide('mojoBase.mojom.RefCountedMemory');

mojoBase.mojom.RefCountedMemory = class {
  constructor() {
    /** @type { !Object } */
    this.data;
  }
};