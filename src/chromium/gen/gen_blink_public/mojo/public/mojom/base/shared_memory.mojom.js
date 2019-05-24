// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'mojo/public/mojom/base/shared_memory.mojom';
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



  function ReadOnlySharedMemoryRegion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ReadOnlySharedMemoryRegion.prototype.initDefaults_ = function() {
    this.buffer = null;
  };
  ReadOnlySharedMemoryRegion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ReadOnlySharedMemoryRegion.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReadOnlySharedMemoryRegion.buffer
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ReadOnlySharedMemoryRegion.encodedSize = codec.kStructHeaderSize + 8;

  ReadOnlySharedMemoryRegion.decode = function(decoder) {
    var packed;
    var val = new ReadOnlySharedMemoryRegion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ReadOnlySharedMemoryRegion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ReadOnlySharedMemoryRegion.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WritableSharedMemoryRegion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WritableSharedMemoryRegion.prototype.initDefaults_ = function() {
    this.buffer = null;
  };
  WritableSharedMemoryRegion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WritableSharedMemoryRegion.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WritableSharedMemoryRegion.buffer
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WritableSharedMemoryRegion.encodedSize = codec.kStructHeaderSize + 8;

  WritableSharedMemoryRegion.decode = function(decoder) {
    var packed;
    var val = new WritableSharedMemoryRegion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WritableSharedMemoryRegion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WritableSharedMemoryRegion.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UnsafeSharedMemoryRegion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UnsafeSharedMemoryRegion.prototype.initDefaults_ = function() {
    this.buffer = null;
  };
  UnsafeSharedMemoryRegion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UnsafeSharedMemoryRegion.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UnsafeSharedMemoryRegion.buffer
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UnsafeSharedMemoryRegion.encodedSize = codec.kStructHeaderSize + 8;

  UnsafeSharedMemoryRegion.decode = function(decoder) {
    var packed;
    var val = new UnsafeSharedMemoryRegion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UnsafeSharedMemoryRegion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UnsafeSharedMemoryRegion.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.ReadOnlySharedMemoryRegion = ReadOnlySharedMemoryRegion;
  exports.WritableSharedMemoryRegion = WritableSharedMemoryRegion;
  exports.UnsafeSharedMemoryRegion = UnsafeSharedMemoryRegion;
})();