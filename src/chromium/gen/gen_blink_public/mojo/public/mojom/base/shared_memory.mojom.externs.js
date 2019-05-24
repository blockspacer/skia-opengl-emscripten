// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.



goog.provide('mojoBase.mojom.ReadOnlySharedMemoryRegion');

mojoBase.mojom.ReadOnlySharedMemoryRegion = class {
  constructor() {
    /** @type { !MojoHandle } */
    this.buffer;
  }
};

goog.provide('mojoBase.mojom.WritableSharedMemoryRegion');

mojoBase.mojom.WritableSharedMemoryRegion = class {
  constructor() {
    /** @type { !MojoHandle } */
    this.buffer;
  }
};

goog.provide('mojoBase.mojom.UnsafeSharedMemoryRegion');

mojoBase.mojom.UnsafeSharedMemoryRegion = class {
  constructor() {
    /** @type { !MojoHandle } */
    this.buffer;
  }
};
