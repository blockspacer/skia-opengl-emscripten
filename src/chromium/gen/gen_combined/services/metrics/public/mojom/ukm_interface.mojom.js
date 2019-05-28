// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/metrics/public/mojom/ukm_interface.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ukm.mojom');
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../url/mojom/url.mojom.js');
  }



  function UkmEntry(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UkmEntry.prototype.initDefaults_ = function() {
    this.sourceId = 0;
    this.eventHash = 0;
    this.metrics = null;
  };
  UkmEntry.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UkmEntry.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 32}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;




    // validate UkmEntry.metrics
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 16, false, codec.Uint64, codec.Int64, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UkmEntry.encodedSize = codec.kStructHeaderSize + 24;

  UkmEntry.decode = function(decoder) {
    var packed;
    var val = new UkmEntry();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sourceId = decoder.decodeStruct(codec.Int64);
    val.eventHash = decoder.decodeStruct(codec.Uint64);
    val.metrics = decoder.decodeMapPointer(codec.Uint64, codec.Int64);
    return val;
  };

  UkmEntry.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UkmEntry.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.sourceId);
    encoder.encodeStruct(codec.Uint64, val.eventHash);
    encoder.encodeMapPointer(codec.Uint64, codec.Int64, val.metrics);
  };
  function UkmRecorderInterface_AddEntry_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UkmRecorderInterface_AddEntry_Params.prototype.initDefaults_ = function() {
    this.entry = null;
  };
  UkmRecorderInterface_AddEntry_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UkmRecorderInterface_AddEntry_Params.validate = function(messageValidator, offset) {
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


    // validate UkmRecorderInterface_AddEntry_Params.entry
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, UkmEntry, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UkmRecorderInterface_AddEntry_Params.encodedSize = codec.kStructHeaderSize + 8;

  UkmRecorderInterface_AddEntry_Params.decode = function(decoder) {
    var packed;
    var val = new UkmRecorderInterface_AddEntry_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.entry = decoder.decodeStructPointer(UkmEntry);
    return val;
  };

  UkmRecorderInterface_AddEntry_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UkmRecorderInterface_AddEntry_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(UkmEntry, val.entry);
  };
  function UkmRecorderInterface_UpdateSourceURL_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UkmRecorderInterface_UpdateSourceURL_Params.prototype.initDefaults_ = function() {
    this.sourceId = 0;
    this.url = null;
  };
  UkmRecorderInterface_UpdateSourceURL_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UkmRecorderInterface_UpdateSourceURL_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate UkmRecorderInterface_UpdateSourceURL_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UkmRecorderInterface_UpdateSourceURL_Params.encodedSize = codec.kStructHeaderSize + 16;

  UkmRecorderInterface_UpdateSourceURL_Params.decode = function(decoder) {
    var packed;
    var val = new UkmRecorderInterface_UpdateSourceURL_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sourceId = decoder.decodeStruct(codec.Int64);
    val.url = decoder.decodeStruct(codec.String);
    return val;
  };

  UkmRecorderInterface_UpdateSourceURL_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UkmRecorderInterface_UpdateSourceURL_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.sourceId);
    encoder.encodeStruct(codec.String, val.url);
  };
  var kUkmRecorderInterface_AddEntry_Name = 963731108;
  var kUkmRecorderInterface_UpdateSourceURL_Name = 153816209;

  function UkmRecorderInterfacePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(UkmRecorderInterface,
                                                   handleOrPtrInfo);
  }

  function UkmRecorderInterfaceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        UkmRecorderInterface, associatedInterfacePtrInfo);
  }

  UkmRecorderInterfaceAssociatedPtr.prototype =
      Object.create(UkmRecorderInterfacePtr.prototype);
  UkmRecorderInterfaceAssociatedPtr.prototype.constructor =
      UkmRecorderInterfaceAssociatedPtr;

  function UkmRecorderInterfaceProxy(receiver) {
    this.receiver_ = receiver;
  }
  UkmRecorderInterfacePtr.prototype.addEntry = function() {
    return UkmRecorderInterfaceProxy.prototype.addEntry
        .apply(this.ptr.getProxy(), arguments);
  };

  UkmRecorderInterfaceProxy.prototype.addEntry = function(entry) {
    var params_ = new UkmRecorderInterface_AddEntry_Params();
    params_.entry = entry;
    var builder = new codec.MessageV0Builder(
        kUkmRecorderInterface_AddEntry_Name,
        codec.align(UkmRecorderInterface_AddEntry_Params.encodedSize));
    builder.encodeStruct(UkmRecorderInterface_AddEntry_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  UkmRecorderInterfacePtr.prototype.updateSourceURL = function() {
    return UkmRecorderInterfaceProxy.prototype.updateSourceURL
        .apply(this.ptr.getProxy(), arguments);
  };

  UkmRecorderInterfaceProxy.prototype.updateSourceURL = function(sourceId, url) {
    var params_ = new UkmRecorderInterface_UpdateSourceURL_Params();
    params_.sourceId = sourceId;
    params_.url = url;
    var builder = new codec.MessageV0Builder(
        kUkmRecorderInterface_UpdateSourceURL_Name,
        codec.align(UkmRecorderInterface_UpdateSourceURL_Params.encodedSize));
    builder.encodeStruct(UkmRecorderInterface_UpdateSourceURL_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function UkmRecorderInterfaceStub(delegate) {
    this.delegate_ = delegate;
  }
  UkmRecorderInterfaceStub.prototype.addEntry = function(entry) {
    return this.delegate_ && this.delegate_.addEntry && this.delegate_.addEntry(entry);
  }
  UkmRecorderInterfaceStub.prototype.updateSourceURL = function(sourceId, url) {
    return this.delegate_ && this.delegate_.updateSourceURL && this.delegate_.updateSourceURL(sourceId, url);
  }

  UkmRecorderInterfaceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUkmRecorderInterface_AddEntry_Name:
      var params = reader.decodeStruct(UkmRecorderInterface_AddEntry_Params);
      this.addEntry(params.entry);
      return true;
    case kUkmRecorderInterface_UpdateSourceURL_Name:
      var params = reader.decodeStruct(UkmRecorderInterface_UpdateSourceURL_Params);
      this.updateSourceURL(params.sourceId, params.url);
      return true;
    default:
      return false;
    }
  };

  UkmRecorderInterfaceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateUkmRecorderInterfaceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUkmRecorderInterface_AddEntry_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UkmRecorderInterface_AddEntry_Params;
      break;
      case kUkmRecorderInterface_UpdateSourceURL_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UkmRecorderInterface_UpdateSourceURL_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUkmRecorderInterfaceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var UkmRecorderInterface = {
    name: 'ukm.mojom.UkmRecorderInterface',
    kVersion: 0,
    ptrClass: UkmRecorderInterfacePtr,
    proxyClass: UkmRecorderInterfaceProxy,
    stubClass: UkmRecorderInterfaceStub,
    validateRequest: validateUkmRecorderInterfaceRequest,
    validateResponse: null,
  };
  UkmRecorderInterfaceStub.prototype.validator = validateUkmRecorderInterfaceRequest;
  UkmRecorderInterfaceProxy.prototype.validator = null;
  exports.UkmEntry = UkmEntry;
  exports.UkmRecorderInterface = UkmRecorderInterface;
  exports.UkmRecorderInterfacePtr = UkmRecorderInterfacePtr;
  exports.UkmRecorderInterfaceAssociatedPtr = UkmRecorderInterfaceAssociatedPtr;
})();