// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.



goog.provide('mojoBase.mojom.DictionaryValue');

mojoBase.mojom.DictionaryValue = class {
  constructor() {
    /** @type { !Map<string, Object> } */
    this.storage;
  }
};

goog.provide('mojoBase.mojom.ListValue');

mojoBase.mojom.ListValue = class {
  constructor() {
    /** @type { !Array<Object> } */
    this.storage;
  }
};
