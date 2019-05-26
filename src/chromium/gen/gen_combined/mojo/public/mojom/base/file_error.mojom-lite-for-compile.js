// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');





goog.provide('mojoBase.mojom.FileError');
goog.provide('mojoBase.mojom.FileErrorSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
mojoBase.mojom.FileErrorSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
mojoBase.mojom.FileError = {
  
  OK: 0,
  FAILED: 0,
  IN_USE: 0,
  EXISTS: 0,
  NOT_FOUND: 0,
  ACCESS_DENIED: 0,
  TOO_MANY_OPENED: 0,
  NO_MEMORY: 0,
  NO_SPACE: 0,
  NOT_A_DIRECTORY: 0,
  INVALID_OPERATION: 0,
  SECURITY: 0,
  ABORT: 0,
  NOT_A_FILE: 0,
  NOT_EMPTY: 0,
  INVALID_URL: 0,
  IO: 0,
  MIN_VALUE: -16,
  MAX_VALUE: 0,
};

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.OK = 0;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.FAILED = -1;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.IN_USE = -2;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.EXISTS = -3;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.NOT_FOUND = -4;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.ACCESS_DENIED = -5;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.TOO_MANY_OPENED = -6;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.NO_MEMORY = -7;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.NO_SPACE = -8;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.NOT_A_DIRECTORY = -9;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.INVALID_OPERATION = -10;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.SECURITY = -11;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.ABORT = -12;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.NOT_A_FILE = -13;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.NOT_EMPTY = -14;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.INVALID_URL = -15;

/** @suppress {checkTypes} */
mojoBase.mojom.FileError.IO = -16;




