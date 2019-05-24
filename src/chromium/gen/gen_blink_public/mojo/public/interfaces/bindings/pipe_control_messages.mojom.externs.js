// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/** @type { !number } */
goog.provide('mojo.pipeControl.kRunOrClosePipeMessageId');

goog.provide('mojo.pipeControl.RunOrClosePipeMessageParams');

mojo.pipeControl.RunOrClosePipeMessageParams = class {
  constructor() {
    /** @type { !Object } */
    this.input;
  }
};

goog.provide('mojo.pipeControl.DisconnectReason');

mojo.pipeControl.DisconnectReason = class {
  constructor() {
    /** @type { !number } */
    this.customReason;
    /** @type { !string } */
    this.description;
  }
};

goog.provide('mojo.pipeControl.PeerAssociatedEndpointClosedEvent');

mojo.pipeControl.PeerAssociatedEndpointClosedEvent = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { mojo.pipeControl.DisconnectReason } */
    this.disconnectReason;
  }
};
