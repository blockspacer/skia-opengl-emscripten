// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'mojo/public/mojom/base/file_info.mojom';
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
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', 'time.mojom.js');
  }



  function FileInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FileInfo.prototype.initDefaults_ = function() {
    this.size = 0;
    this.isDirectory = false;
    this.isSymbolicLink = false;
    this.lastModified = null;
    this.lastAccessed = null;
    this.creationTime = null;
  };
  FileInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  FileInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;





    // validate FileInfo.lastModified
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FileInfo.lastAccessed
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FileInfo.creationTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FileInfo.encodedSize = codec.kStructHeaderSize + 40;

  FileInfo.decode = function(decoder) {
    var packed;
    var val = new FileInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.size = decoder.decodeStruct(codec.Int64);
    packed = decoder.readUint8();
    val.isDirectory = (packed >> 0) & 1 ? true : false;
    val.isSymbolicLink = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.lastModified = decoder.decodeStructPointer(time$.Time);
    val.lastAccessed = decoder.decodeStructPointer(time$.Time);
    val.creationTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  FileInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FileInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.size);
    packed = 0;
    packed |= (val.isDirectory & 1) << 0
    packed |= (val.isSymbolicLink & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.lastModified);
    encoder.encodeStructPointer(time$.Time, val.lastAccessed);
    encoder.encodeStructPointer(time$.Time, val.creationTime);
  };
  exports.FileInfo = FileInfo;
})();