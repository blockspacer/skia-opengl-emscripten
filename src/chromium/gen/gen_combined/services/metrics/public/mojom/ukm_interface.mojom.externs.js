// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.



goog.provide('ukm.mojom.UkmRecorderInterface');
goog.provide('ukm.mojom.UkmRecorderInterfaceImpl');
goog.provide('ukm.mojom.UkmRecorderInterfacePtr');



/**
 * @const
 * @type { !mojo.Interface };
 */
ukm.mojom.UkmRecorderInterface;

/** @interface */
ukm.mojom.UkmRecorderInterfaceImpl = class {
  /**
   * @param { !ukm.mojom.UkmEntry } entry
   */
  addEntry(entry) {}
  /**
   * @param { !number } sourceId
   * @param { !string } url
   */
  updateSourceURL(sourceId, url) {}
};

/**
 * @implements { mojo.InterfacePtr }
 * @implements { ukm.mojom.UkmRecorderInterfaceImpl }
 */
ukm.mojom.UkmRecorderInterfacePtr = class {
  /**
   * @param { !ukm.mojom.UkmEntry } entry
   */
  addEntry(entry) {}
  /**
   * @param { !number } sourceId
   * @param { !string } url
   */
  updateSourceURL(sourceId, url) {}
};

goog.provide('ukm.mojom.UkmEntry');

ukm.mojom.UkmEntry = class {
  constructor() {
    /** @type { !number } */
    this.sourceId;
    /** @type { !number } */
    this.eventHash;
    /** @type { !Map<number, number> } */
    this.metrics;
  }
};

goog.provide('ukm.mojom.UkmRecorderInterface_AddEntry_Params');

ukm.mojom.UkmRecorderInterface_AddEntry_Params = class {
  constructor() {
    /** @type { !ukm.mojom.UkmEntry } */
    this.entry;
  }
};

goog.provide('ukm.mojom.UkmRecorderInterface_UpdateSourceURL_Params');

ukm.mojom.UkmRecorderInterface_UpdateSourceURL_Params = class {
  constructor() {
    /** @type { !number } */
    this.sourceId;
    /** @type { !string } */
    this.url;
  }
};
