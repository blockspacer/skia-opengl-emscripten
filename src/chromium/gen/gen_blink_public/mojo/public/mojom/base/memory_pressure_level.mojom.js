// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'mojo/public/mojom/base/memory_pressure_level.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojoBase.mojom');


  var MemoryPressureLevel = {};
  MemoryPressureLevel.NONE = 0;
  MemoryPressureLevel.MODERATE = MemoryPressureLevel.NONE + 1;
  MemoryPressureLevel.CRITICAL = MemoryPressureLevel.MODERATE + 1;
  MemoryPressureLevel.MIN_VALUE = 0,
  MemoryPressureLevel.MAX_VALUE = 2,

  MemoryPressureLevel.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  MemoryPressureLevel.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.MemoryPressureLevel = MemoryPressureLevel;
})();