// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/resource_coordinator/public/mojom/coordination_unit.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('resourceCoordinator.mojom');
  var process_id$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/process_id.mojom', '../../../../mojo/public/mojom/base/process_id.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var lifecycle$ =
      mojo.internal.exposeNamespace('resourceCoordinator.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/resource_coordinator/public/mojom/lifecycle.mojom', 'lifecycle.mojom.js');
  }


  var CoordinationUnitType = {};
  CoordinationUnitType.kFrame = 0;
  CoordinationUnitType.kPage = CoordinationUnitType.kFrame + 1;
  CoordinationUnitType.kProcess = CoordinationUnitType.kPage + 1;
  CoordinationUnitType.kSystem = CoordinationUnitType.kProcess + 1;
  CoordinationUnitType.MIN_VALUE = 0,
  CoordinationUnitType.MAX_VALUE = 3,

  CoordinationUnitType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  CoordinationUnitType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var InterventionPolicy = {};
  InterventionPolicy.kUnknown = 0;
  InterventionPolicy.kOptIn = InterventionPolicy.kUnknown + 1;
  InterventionPolicy.kOptOut = InterventionPolicy.kOptIn + 1;
  InterventionPolicy.kDefault = InterventionPolicy.kOptOut + 1;
  InterventionPolicy.MIN_VALUE = 0,
  InterventionPolicy.MAX_VALUE = 3,

  InterventionPolicy.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  InterventionPolicy.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PolicyControlledIntervention = {};
  PolicyControlledIntervention.kPageLifecycleTransitions = 0;
  PolicyControlledIntervention.MIN_VALUE = 0,
  PolicyControlledIntervention.MAX_VALUE = 0,

  PolicyControlledIntervention.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
      return true;
    }
    return false;
  };

  PolicyControlledIntervention.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function DocumentCoordinationUnit_SetNetworkAlmostIdle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DocumentCoordinationUnit_SetNetworkAlmostIdle_Params.prototype.initDefaults_ = function() {
  };
  DocumentCoordinationUnit_SetNetworkAlmostIdle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DocumentCoordinationUnit_SetNetworkAlmostIdle_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DocumentCoordinationUnit_SetNetworkAlmostIdle_Params.encodedSize = codec.kStructHeaderSize + 0;

  DocumentCoordinationUnit_SetNetworkAlmostIdle_Params.decode = function(decoder) {
    var packed;
    var val = new DocumentCoordinationUnit_SetNetworkAlmostIdle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DocumentCoordinationUnit_SetNetworkAlmostIdle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DocumentCoordinationUnit_SetNetworkAlmostIdle_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DocumentCoordinationUnit_SetLifecycleState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DocumentCoordinationUnit_SetLifecycleState_Params.prototype.initDefaults_ = function() {
    this.state = 0;
  };
  DocumentCoordinationUnit_SetLifecycleState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DocumentCoordinationUnit_SetLifecycleState_Params.validate = function(messageValidator, offset) {
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


    // validate DocumentCoordinationUnit_SetLifecycleState_Params.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, lifecycle$.LifecycleState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DocumentCoordinationUnit_SetLifecycleState_Params.encodedSize = codec.kStructHeaderSize + 8;

  DocumentCoordinationUnit_SetLifecycleState_Params.decode = function(decoder) {
    var packed;
    var val = new DocumentCoordinationUnit_SetLifecycleState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DocumentCoordinationUnit_SetLifecycleState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DocumentCoordinationUnit_SetLifecycleState_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params.prototype.initDefaults_ = function() {
    this.hasNonemptyBeforeunload = false;
  };
  DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params.validate = function(messageValidator, offset) {
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


    return validator.validationError.NONE;
  };

  DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params.encodedSize = codec.kStructHeaderSize + 8;

  DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params.decode = function(decoder) {
    var packed;
    var val = new DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.hasNonemptyBeforeunload = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.hasNonemptyBeforeunload & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DocumentCoordinationUnit_SetInterventionPolicy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DocumentCoordinationUnit_SetInterventionPolicy_Params.prototype.initDefaults_ = function() {
    this.intervention = 0;
    this.policy = 0;
  };
  DocumentCoordinationUnit_SetInterventionPolicy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DocumentCoordinationUnit_SetInterventionPolicy_Params.validate = function(messageValidator, offset) {
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


    // validate DocumentCoordinationUnit_SetInterventionPolicy_Params.intervention
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PolicyControlledIntervention);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DocumentCoordinationUnit_SetInterventionPolicy_Params.policy
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, InterventionPolicy);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DocumentCoordinationUnit_SetInterventionPolicy_Params.encodedSize = codec.kStructHeaderSize + 8;

  DocumentCoordinationUnit_SetInterventionPolicy_Params.decode = function(decoder) {
    var packed;
    var val = new DocumentCoordinationUnit_SetInterventionPolicy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.intervention = decoder.decodeStruct(codec.Int32);
    val.policy = decoder.decodeStruct(codec.Int32);
    return val;
  };

  DocumentCoordinationUnit_SetInterventionPolicy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DocumentCoordinationUnit_SetInterventionPolicy_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.intervention);
    encoder.encodeStruct(codec.Int32, val.policy);
  };
  function DocumentCoordinationUnit_SetIsAdFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DocumentCoordinationUnit_SetIsAdFrame_Params.prototype.initDefaults_ = function() {
  };
  DocumentCoordinationUnit_SetIsAdFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DocumentCoordinationUnit_SetIsAdFrame_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DocumentCoordinationUnit_SetIsAdFrame_Params.encodedSize = codec.kStructHeaderSize + 0;

  DocumentCoordinationUnit_SetIsAdFrame_Params.decode = function(decoder) {
    var packed;
    var val = new DocumentCoordinationUnit_SetIsAdFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DocumentCoordinationUnit_SetIsAdFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DocumentCoordinationUnit_SetIsAdFrame_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params.prototype.initDefaults_ = function() {
  };
  DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params.encodedSize = codec.kStructHeaderSize + 0;

  DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params.decode = function(decoder) {
    var packed;
    var val = new DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.prototype.initDefaults_ = function() {
    this.duration = null;
  };
  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.validate = function(messageValidator, offset) {
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


    // validate ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.duration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.duration = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.duration);
  };
  function ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.prototype.initDefaults_ = function() {
    this.mainThreadTaskLoadIsLow = false;
  };
  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.validate = function(messageValidator, offset) {
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


    return validator.validationError.NONE;
  };

  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.mainThreadTaskLoadIsLow = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.mainThreadTaskLoadIsLow & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kDocumentCoordinationUnit_SetNetworkAlmostIdle_Name = 779153566;
  var kDocumentCoordinationUnit_SetLifecycleState_Name = 900699292;
  var kDocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Name = 724434959;
  var kDocumentCoordinationUnit_SetInterventionPolicy_Name = 2027613163;
  var kDocumentCoordinationUnit_SetIsAdFrame_Name = 1397656912;
  var kDocumentCoordinationUnit_OnNonPersistentNotificationCreated_Name = 2053608518;

  function DocumentCoordinationUnitPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DocumentCoordinationUnit,
                                                   handleOrPtrInfo);
  }

  function DocumentCoordinationUnitAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DocumentCoordinationUnit, associatedInterfacePtrInfo);
  }

  DocumentCoordinationUnitAssociatedPtr.prototype =
      Object.create(DocumentCoordinationUnitPtr.prototype);
  DocumentCoordinationUnitAssociatedPtr.prototype.constructor =
      DocumentCoordinationUnitAssociatedPtr;

  function DocumentCoordinationUnitProxy(receiver) {
    this.receiver_ = receiver;
  }
  DocumentCoordinationUnitPtr.prototype.setNetworkAlmostIdle = function() {
    return DocumentCoordinationUnitProxy.prototype.setNetworkAlmostIdle
        .apply(this.ptr.getProxy(), arguments);
  };

  DocumentCoordinationUnitProxy.prototype.setNetworkAlmostIdle = function() {
    var params_ = new DocumentCoordinationUnit_SetNetworkAlmostIdle_Params();
    var builder = new codec.MessageV0Builder(
        kDocumentCoordinationUnit_SetNetworkAlmostIdle_Name,
        codec.align(DocumentCoordinationUnit_SetNetworkAlmostIdle_Params.encodedSize));
    builder.encodeStruct(DocumentCoordinationUnit_SetNetworkAlmostIdle_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DocumentCoordinationUnitPtr.prototype.setLifecycleState = function() {
    return DocumentCoordinationUnitProxy.prototype.setLifecycleState
        .apply(this.ptr.getProxy(), arguments);
  };

  DocumentCoordinationUnitProxy.prototype.setLifecycleState = function(state) {
    var params_ = new DocumentCoordinationUnit_SetLifecycleState_Params();
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kDocumentCoordinationUnit_SetLifecycleState_Name,
        codec.align(DocumentCoordinationUnit_SetLifecycleState_Params.encodedSize));
    builder.encodeStruct(DocumentCoordinationUnit_SetLifecycleState_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DocumentCoordinationUnitPtr.prototype.setHasNonEmptyBeforeUnload = function() {
    return DocumentCoordinationUnitProxy.prototype.setHasNonEmptyBeforeUnload
        .apply(this.ptr.getProxy(), arguments);
  };

  DocumentCoordinationUnitProxy.prototype.setHasNonEmptyBeforeUnload = function(hasNonemptyBeforeunload) {
    var params_ = new DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params();
    params_.hasNonemptyBeforeunload = hasNonemptyBeforeunload;
    var builder = new codec.MessageV0Builder(
        kDocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Name,
        codec.align(DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params.encodedSize));
    builder.encodeStruct(DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DocumentCoordinationUnitPtr.prototype.setInterventionPolicy = function() {
    return DocumentCoordinationUnitProxy.prototype.setInterventionPolicy
        .apply(this.ptr.getProxy(), arguments);
  };

  DocumentCoordinationUnitProxy.prototype.setInterventionPolicy = function(intervention, policy) {
    var params_ = new DocumentCoordinationUnit_SetInterventionPolicy_Params();
    params_.intervention = intervention;
    params_.policy = policy;
    var builder = new codec.MessageV0Builder(
        kDocumentCoordinationUnit_SetInterventionPolicy_Name,
        codec.align(DocumentCoordinationUnit_SetInterventionPolicy_Params.encodedSize));
    builder.encodeStruct(DocumentCoordinationUnit_SetInterventionPolicy_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DocumentCoordinationUnitPtr.prototype.setIsAdFrame = function() {
    return DocumentCoordinationUnitProxy.prototype.setIsAdFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  DocumentCoordinationUnitProxy.prototype.setIsAdFrame = function() {
    var params_ = new DocumentCoordinationUnit_SetIsAdFrame_Params();
    var builder = new codec.MessageV0Builder(
        kDocumentCoordinationUnit_SetIsAdFrame_Name,
        codec.align(DocumentCoordinationUnit_SetIsAdFrame_Params.encodedSize));
    builder.encodeStruct(DocumentCoordinationUnit_SetIsAdFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DocumentCoordinationUnitPtr.prototype.onNonPersistentNotificationCreated = function() {
    return DocumentCoordinationUnitProxy.prototype.onNonPersistentNotificationCreated
        .apply(this.ptr.getProxy(), arguments);
  };

  DocumentCoordinationUnitProxy.prototype.onNonPersistentNotificationCreated = function() {
    var params_ = new DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params();
    var builder = new codec.MessageV0Builder(
        kDocumentCoordinationUnit_OnNonPersistentNotificationCreated_Name,
        codec.align(DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params.encodedSize));
    builder.encodeStruct(DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DocumentCoordinationUnitStub(delegate) {
    this.delegate_ = delegate;
  }
  DocumentCoordinationUnitStub.prototype.setNetworkAlmostIdle = function() {
    return this.delegate_ && this.delegate_.setNetworkAlmostIdle && this.delegate_.setNetworkAlmostIdle();
  }
  DocumentCoordinationUnitStub.prototype.setLifecycleState = function(state) {
    return this.delegate_ && this.delegate_.setLifecycleState && this.delegate_.setLifecycleState(state);
  }
  DocumentCoordinationUnitStub.prototype.setHasNonEmptyBeforeUnload = function(hasNonemptyBeforeunload) {
    return this.delegate_ && this.delegate_.setHasNonEmptyBeforeUnload && this.delegate_.setHasNonEmptyBeforeUnload(hasNonemptyBeforeunload);
  }
  DocumentCoordinationUnitStub.prototype.setInterventionPolicy = function(intervention, policy) {
    return this.delegate_ && this.delegate_.setInterventionPolicy && this.delegate_.setInterventionPolicy(intervention, policy);
  }
  DocumentCoordinationUnitStub.prototype.setIsAdFrame = function() {
    return this.delegate_ && this.delegate_.setIsAdFrame && this.delegate_.setIsAdFrame();
  }
  DocumentCoordinationUnitStub.prototype.onNonPersistentNotificationCreated = function() {
    return this.delegate_ && this.delegate_.onNonPersistentNotificationCreated && this.delegate_.onNonPersistentNotificationCreated();
  }

  DocumentCoordinationUnitStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDocumentCoordinationUnit_SetNetworkAlmostIdle_Name:
      var params = reader.decodeStruct(DocumentCoordinationUnit_SetNetworkAlmostIdle_Params);
      this.setNetworkAlmostIdle();
      return true;
    case kDocumentCoordinationUnit_SetLifecycleState_Name:
      var params = reader.decodeStruct(DocumentCoordinationUnit_SetLifecycleState_Params);
      this.setLifecycleState(params.state);
      return true;
    case kDocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Name:
      var params = reader.decodeStruct(DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params);
      this.setHasNonEmptyBeforeUnload(params.hasNonemptyBeforeunload);
      return true;
    case kDocumentCoordinationUnit_SetInterventionPolicy_Name:
      var params = reader.decodeStruct(DocumentCoordinationUnit_SetInterventionPolicy_Params);
      this.setInterventionPolicy(params.intervention, params.policy);
      return true;
    case kDocumentCoordinationUnit_SetIsAdFrame_Name:
      var params = reader.decodeStruct(DocumentCoordinationUnit_SetIsAdFrame_Params);
      this.setIsAdFrame();
      return true;
    case kDocumentCoordinationUnit_OnNonPersistentNotificationCreated_Name:
      var params = reader.decodeStruct(DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params);
      this.onNonPersistentNotificationCreated();
      return true;
    default:
      return false;
    }
  };

  DocumentCoordinationUnitStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDocumentCoordinationUnitRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDocumentCoordinationUnit_SetNetworkAlmostIdle_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DocumentCoordinationUnit_SetNetworkAlmostIdle_Params;
      break;
      case kDocumentCoordinationUnit_SetLifecycleState_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DocumentCoordinationUnit_SetLifecycleState_Params;
      break;
      case kDocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params;
      break;
      case kDocumentCoordinationUnit_SetInterventionPolicy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DocumentCoordinationUnit_SetInterventionPolicy_Params;
      break;
      case kDocumentCoordinationUnit_SetIsAdFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DocumentCoordinationUnit_SetIsAdFrame_Params;
      break;
      case kDocumentCoordinationUnit_OnNonPersistentNotificationCreated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDocumentCoordinationUnitResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DocumentCoordinationUnit = {
    name: 'resource_coordinator.mojom.DocumentCoordinationUnit',
    kVersion: 0,
    ptrClass: DocumentCoordinationUnitPtr,
    proxyClass: DocumentCoordinationUnitProxy,
    stubClass: DocumentCoordinationUnitStub,
    validateRequest: validateDocumentCoordinationUnitRequest,
    validateResponse: null,
  };
  DocumentCoordinationUnitStub.prototype.validator = validateDocumentCoordinationUnitRequest;
  DocumentCoordinationUnitProxy.prototype.validator = null;
  var kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name = 1745180896;
  var kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name = 1046309033;

  function ProcessCoordinationUnitPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProcessCoordinationUnit,
                                                   handleOrPtrInfo);
  }

  function ProcessCoordinationUnitAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProcessCoordinationUnit, associatedInterfacePtrInfo);
  }

  ProcessCoordinationUnitAssociatedPtr.prototype =
      Object.create(ProcessCoordinationUnitPtr.prototype);
  ProcessCoordinationUnitAssociatedPtr.prototype.constructor =
      ProcessCoordinationUnitAssociatedPtr;

  function ProcessCoordinationUnitProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProcessCoordinationUnitPtr.prototype.setExpectedTaskQueueingDuration = function() {
    return ProcessCoordinationUnitProxy.prototype.setExpectedTaskQueueingDuration
        .apply(this.ptr.getProxy(), arguments);
  };

  ProcessCoordinationUnitProxy.prototype.setExpectedTaskQueueingDuration = function(duration) {
    var params_ = new ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params();
    params_.duration = duration;
    var builder = new codec.MessageV0Builder(
        kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name,
        codec.align(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params.encodedSize));
    builder.encodeStruct(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProcessCoordinationUnitPtr.prototype.setMainThreadTaskLoadIsLow = function() {
    return ProcessCoordinationUnitProxy.prototype.setMainThreadTaskLoadIsLow
        .apply(this.ptr.getProxy(), arguments);
  };

  ProcessCoordinationUnitProxy.prototype.setMainThreadTaskLoadIsLow = function(mainThreadTaskLoadIsLow) {
    var params_ = new ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params();
    params_.mainThreadTaskLoadIsLow = mainThreadTaskLoadIsLow;
    var builder = new codec.MessageV0Builder(
        kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name,
        codec.align(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params.encodedSize));
    builder.encodeStruct(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProcessCoordinationUnitStub(delegate) {
    this.delegate_ = delegate;
  }
  ProcessCoordinationUnitStub.prototype.setExpectedTaskQueueingDuration = function(duration) {
    return this.delegate_ && this.delegate_.setExpectedTaskQueueingDuration && this.delegate_.setExpectedTaskQueueingDuration(duration);
  }
  ProcessCoordinationUnitStub.prototype.setMainThreadTaskLoadIsLow = function(mainThreadTaskLoadIsLow) {
    return this.delegate_ && this.delegate_.setMainThreadTaskLoadIsLow && this.delegate_.setMainThreadTaskLoadIsLow(mainThreadTaskLoadIsLow);
  }

  ProcessCoordinationUnitStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name:
      var params = reader.decodeStruct(ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params);
      this.setExpectedTaskQueueingDuration(params.duration);
      return true;
    case kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name:
      var params = reader.decodeStruct(ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params);
      this.setMainThreadTaskLoadIsLow(params.mainThreadTaskLoadIsLow);
      return true;
    default:
      return false;
    }
  };

  ProcessCoordinationUnitStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateProcessCoordinationUnitRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params;
      break;
      case kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProcessCoordinationUnitResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProcessCoordinationUnit = {
    name: 'resource_coordinator.mojom.ProcessCoordinationUnit',
    kVersion: 0,
    ptrClass: ProcessCoordinationUnitPtr,
    proxyClass: ProcessCoordinationUnitProxy,
    stubClass: ProcessCoordinationUnitStub,
    validateRequest: validateProcessCoordinationUnitRequest,
    validateResponse: null,
  };
  ProcessCoordinationUnitStub.prototype.validator = validateProcessCoordinationUnitRequest;
  ProcessCoordinationUnitProxy.prototype.validator = null;
  exports.CoordinationUnitType = CoordinationUnitType;
  exports.InterventionPolicy = InterventionPolicy;
  exports.PolicyControlledIntervention = PolicyControlledIntervention;
  exports.DocumentCoordinationUnit = DocumentCoordinationUnit;
  exports.DocumentCoordinationUnitPtr = DocumentCoordinationUnitPtr;
  exports.DocumentCoordinationUnitAssociatedPtr = DocumentCoordinationUnitAssociatedPtr;
  exports.ProcessCoordinationUnit = ProcessCoordinationUnit;
  exports.ProcessCoordinationUnitPtr = ProcessCoordinationUnitPtr;
  exports.ProcessCoordinationUnitAssociatedPtr = ProcessCoordinationUnitAssociatedPtr;
})();