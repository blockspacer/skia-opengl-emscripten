// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/** @type { !number } */
goog.provide('mojo.interfaceControl.kRunMessageId');
/** @type { !number } */
goog.provide('mojo.interfaceControl.kRunOrClosePipeMessageId');

goog.provide('mojo.interfaceControl.RunMessageParams');

mojo.interfaceControl.RunMessageParams = class {
  constructor() {
    /** @type { !Object } */
    this.input;
  }
};

goog.provide('mojo.interfaceControl.RunResponseMessageParams');

mojo.interfaceControl.RunResponseMessageParams = class {
  constructor() {
    /** @type { Object } */
    this.output;
  }
};

goog.provide('mojo.interfaceControl.QueryVersion');

mojo.interfaceControl.QueryVersion = class {
  constructor() {
  }
};

goog.provide('mojo.interfaceControl.QueryVersionResult');

mojo.interfaceControl.QueryVersionResult = class {
  constructor() {
    /** @type { !number } */
    this.version;
  }
};

goog.provide('mojo.interfaceControl.FlushForTesting');

mojo.interfaceControl.FlushForTesting = class {
  constructor() {
  }
};

goog.provide('mojo.interfaceControl.RunOrClosePipeMessageParams');

mojo.interfaceControl.RunOrClosePipeMessageParams = class {
  constructor() {
    /** @type { !Object } */
    this.input;
  }
};

goog.provide('mojo.interfaceControl.RequireVersion');

mojo.interfaceControl.RequireVersion = class {
  constructor() {
    /** @type { !number } */
    this.version;
  }
};
