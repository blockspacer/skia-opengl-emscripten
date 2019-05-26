// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('memoryInstrumentation.mojom');
  var big_string$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/big_string.mojom', '../../../../../mojo/public/mojom/base/big_string.mojom.js');
  }
  var process_id$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/process_id.mojom', '../../../../../mojo/public/mojom/base/process_id.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../../mojo/public/mojom/base/time.mojom.js');
  }


  var DumpType = {};
  DumpType.PERIODIC_INTERVAL = 0;
  DumpType.EXPLICITLY_TRIGGERED = DumpType.PERIODIC_INTERVAL + 1;
  DumpType.SUMMARY_ONLY = DumpType.EXPLICITLY_TRIGGERED + 1;
  DumpType.MIN_VALUE = 0,
  DumpType.MAX_VALUE = 2,

  DumpType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  DumpType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var LevelOfDetail = {};
  LevelOfDetail.BACKGROUND = 0;
  LevelOfDetail.LIGHT = LevelOfDetail.BACKGROUND + 1;
  LevelOfDetail.DETAILED = LevelOfDetail.LIGHT + 1;
  LevelOfDetail.MIN_VALUE = 0,
  LevelOfDetail.MAX_VALUE = 2,

  LevelOfDetail.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  LevelOfDetail.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ProcessType = {};
  ProcessType.OTHER = 0;
  ProcessType.BROWSER = ProcessType.OTHER + 1;
  ProcessType.RENDERER = ProcessType.BROWSER + 1;
  ProcessType.GPU = ProcessType.RENDERER + 1;
  ProcessType.UTILITY = ProcessType.GPU + 1;
  ProcessType.PLUGIN = ProcessType.UTILITY + 1;
  ProcessType.ARC = ProcessType.PLUGIN + 1;
  ProcessType.MIN_VALUE = 0,
  ProcessType.MAX_VALUE = 6,

  ProcessType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    }
    return false;
  };

  ProcessType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var MemoryMapOption = {};
  MemoryMapOption.NONE = 0;
  MemoryMapOption.MODULES = MemoryMapOption.NONE + 1;
  MemoryMapOption.FULL = MemoryMapOption.MODULES + 1;
  MemoryMapOption.MIN_VALUE = 0,
  MemoryMapOption.MAX_VALUE = 2,

  MemoryMapOption.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  MemoryMapOption.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function RequestArgs(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RequestArgs.prototype.initDefaults_ = function() {
    this.dumpGuid = 0;
    this.dumpType = 0;
    this.levelOfDetail = 0;
  };
  RequestArgs.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RequestArgs.validate = function(messageValidator, offset) {
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



    // validate RequestArgs.dumpType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, DumpType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RequestArgs.levelOfDetail
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, LevelOfDetail);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RequestArgs.encodedSize = codec.kStructHeaderSize + 16;

  RequestArgs.decode = function(decoder) {
    var packed;
    var val = new RequestArgs();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dumpGuid = decoder.decodeStruct(codec.Uint64);
    val.dumpType = decoder.decodeStruct(codec.Int32);
    val.levelOfDetail = decoder.decodeStruct(codec.Int32);
    return val;
  };

  RequestArgs.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RequestArgs.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.dumpGuid);
    encoder.encodeStruct(codec.Int32, val.dumpType);
    encoder.encodeStruct(codec.Int32, val.levelOfDetail);
  };
  function RawAllocatorDumpEdge(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RawAllocatorDumpEdge.prototype.initDefaults_ = function() {
    this.sourceId = 0;
    this.targetId = 0;
    this.importance = 0;
    this.overridable = false;
  };
  RawAllocatorDumpEdge.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RawAllocatorDumpEdge.validate = function(messageValidator, offset) {
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





    return validator.validationError.NONE;
  };

  RawAllocatorDumpEdge.encodedSize = codec.kStructHeaderSize + 24;

  RawAllocatorDumpEdge.decode = function(decoder) {
    var packed;
    var val = new RawAllocatorDumpEdge();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sourceId = decoder.decodeStruct(codec.Uint64);
    val.targetId = decoder.decodeStruct(codec.Uint64);
    val.importance = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.overridable = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RawAllocatorDumpEdge.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RawAllocatorDumpEdge.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.sourceId);
    encoder.encodeStruct(codec.Uint64, val.targetId);
    encoder.encodeStruct(codec.Int32, val.importance);
    packed = 0;
    packed |= (val.overridable & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RawAllocatorDumpEntry(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RawAllocatorDumpEntry.prototype.initDefaults_ = function() {
    this.name = null;
    this.units = null;
    this.value = null;
  };
  RawAllocatorDumpEntry.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RawAllocatorDumpEntry.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawAllocatorDumpEntry.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawAllocatorDumpEntry.units
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawAllocatorDumpEntry.value
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 16, RawAllocatorDumpEntryValue, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RawAllocatorDumpEntry.encodedSize = codec.kStructHeaderSize + 32;

  RawAllocatorDumpEntry.decode = function(decoder) {
    var packed;
    var val = new RawAllocatorDumpEntry();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.units = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(RawAllocatorDumpEntryValue);
    return val;
  };

  RawAllocatorDumpEntry.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RawAllocatorDumpEntry.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.units);
    encoder.encodeStruct(RawAllocatorDumpEntryValue, val.value);
  };
  function RawAllocatorDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RawAllocatorDump.prototype.initDefaults_ = function() {
    this.id = 0;
    this.absoluteName = null;
    this.weak = false;
    this.levelOfDetail = 0;
    this.entries = null;
  };
  RawAllocatorDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RawAllocatorDump.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate RawAllocatorDump.absoluteName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate RawAllocatorDump.levelOfDetail
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 20, LevelOfDetail);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawAllocatorDump.entries
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(RawAllocatorDumpEntry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RawAllocatorDump.encodedSize = codec.kStructHeaderSize + 32;

  RawAllocatorDump.decode = function(decoder) {
    var packed;
    var val = new RawAllocatorDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint64);
    val.absoluteName = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.weak = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.levelOfDetail = decoder.decodeStruct(codec.Int32);
    val.entries = decoder.decodeArrayPointer(new codec.PointerTo(RawAllocatorDumpEntry));
    return val;
  };

  RawAllocatorDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RawAllocatorDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.id);
    encoder.encodeStruct(codec.String, val.absoluteName);
    packed = 0;
    packed |= (val.weak & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.levelOfDetail);
    encoder.encodeArrayPointer(new codec.PointerTo(RawAllocatorDumpEntry), val.entries);
  };
  function RawProcessMemoryDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RawProcessMemoryDump.prototype.initDefaults_ = function() {
    this.levelOfDetail = 0;
    this.allocatorDumpEdges = null;
    this.allocatorDumps = null;
  };
  RawProcessMemoryDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RawProcessMemoryDump.validate = function(messageValidator, offset) {
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


    // validate RawProcessMemoryDump.levelOfDetail
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, LevelOfDetail);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawProcessMemoryDump.allocatorDumpEdges
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(RawAllocatorDumpEdge), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawProcessMemoryDump.allocatorDumps
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(RawAllocatorDump), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RawProcessMemoryDump.encodedSize = codec.kStructHeaderSize + 24;

  RawProcessMemoryDump.decode = function(decoder) {
    var packed;
    var val = new RawProcessMemoryDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.levelOfDetail = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.allocatorDumpEdges = decoder.decodeArrayPointer(new codec.PointerTo(RawAllocatorDumpEdge));
    val.allocatorDumps = decoder.decodeArrayPointer(new codec.PointerTo(RawAllocatorDump));
    return val;
  };

  RawProcessMemoryDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RawProcessMemoryDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.levelOfDetail);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(RawAllocatorDumpEdge), val.allocatorDumpEdges);
    encoder.encodeArrayPointer(new codec.PointerTo(RawAllocatorDump), val.allocatorDumps);
  };
  function VmRegion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VmRegion.kProtectionFlagsRead = 4;
  VmRegion.kProtectionFlagsWrite = 2;
  VmRegion.kProtectionFlagsExec = 1;
  VmRegion.kProtectionFlagsMayshare = 128;
  VmRegion.prototype.initDefaults_ = function() {
    this.startAddress = 0;
    this.sizeInBytes = 0;
    this.moduleTimestamp = 0;
    this.moduleDebugid = null;
    this.moduleDebugPath = null;
    this.protectionFlags = 0;
    this.mappedFile = null;
    this.byteStatsPrivateDirtyResident = 0;
    this.byteStatsPrivateCleanResident = 0;
    this.byteStatsSharedDirtyResident = 0;
    this.byteStatsSharedCleanResident = 0;
    this.byteStatsSwapped = 0;
    this.byteStatsProportionalResident = 0;
  };
  VmRegion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VmRegion.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 112}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;





    // validate VmRegion.moduleDebugid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VmRegion.moduleDebugPath
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate VmRegion.mappedFile
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;







    return validator.validationError.NONE;
  };

  VmRegion.encodedSize = codec.kStructHeaderSize + 104;

  VmRegion.decode = function(decoder) {
    var packed;
    var val = new VmRegion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.startAddress = decoder.decodeStruct(codec.Uint64);
    val.sizeInBytes = decoder.decodeStruct(codec.Uint64);
    val.moduleTimestamp = decoder.decodeStruct(codec.Uint64);
    val.moduleDebugid = decoder.decodeStruct(codec.String);
    val.moduleDebugPath = decoder.decodeStruct(codec.String);
    val.protectionFlags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.mappedFile = decoder.decodeStruct(codec.String);
    val.byteStatsPrivateDirtyResident = decoder.decodeStruct(codec.Uint64);
    val.byteStatsPrivateCleanResident = decoder.decodeStruct(codec.Uint64);
    val.byteStatsSharedDirtyResident = decoder.decodeStruct(codec.Uint64);
    val.byteStatsSharedCleanResident = decoder.decodeStruct(codec.Uint64);
    val.byteStatsSwapped = decoder.decodeStruct(codec.Uint64);
    val.byteStatsProportionalResident = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  VmRegion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VmRegion.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.startAddress);
    encoder.encodeStruct(codec.Uint64, val.sizeInBytes);
    encoder.encodeStruct(codec.Uint64, val.moduleTimestamp);
    encoder.encodeStruct(codec.String, val.moduleDebugid);
    encoder.encodeStruct(codec.String, val.moduleDebugPath);
    encoder.encodeStruct(codec.Uint32, val.protectionFlags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.mappedFile);
    encoder.encodeStruct(codec.Uint64, val.byteStatsPrivateDirtyResident);
    encoder.encodeStruct(codec.Uint64, val.byteStatsPrivateCleanResident);
    encoder.encodeStruct(codec.Uint64, val.byteStatsSharedDirtyResident);
    encoder.encodeStruct(codec.Uint64, val.byteStatsSharedCleanResident);
    encoder.encodeStruct(codec.Uint64, val.byteStatsSwapped);
    encoder.encodeStruct(codec.Uint64, val.byteStatsProportionalResident);
  };
  function PlatformPrivateFootprint(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PlatformPrivateFootprint.prototype.initDefaults_ = function() {
    this.physFootprintBytes = 0;
    this.internalBytes = 0;
    this.compressedBytes = 0;
    this.rssAnonBytes = 0;
    this.vmSwapBytes = 0;
    this.privateBytes = 0;
  };
  PlatformPrivateFootprint.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PlatformPrivateFootprint.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;







    return validator.validationError.NONE;
  };

  PlatformPrivateFootprint.encodedSize = codec.kStructHeaderSize + 48;

  PlatformPrivateFootprint.decode = function(decoder) {
    var packed;
    var val = new PlatformPrivateFootprint();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.physFootprintBytes = decoder.decodeStruct(codec.Uint64);
    val.internalBytes = decoder.decodeStruct(codec.Uint64);
    val.compressedBytes = decoder.decodeStruct(codec.Uint64);
    val.rssAnonBytes = decoder.decodeStruct(codec.Uint64);
    val.vmSwapBytes = decoder.decodeStruct(codec.Uint64);
    val.privateBytes = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  PlatformPrivateFootprint.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PlatformPrivateFootprint.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.physFootprintBytes);
    encoder.encodeStruct(codec.Uint64, val.internalBytes);
    encoder.encodeStruct(codec.Uint64, val.compressedBytes);
    encoder.encodeStruct(codec.Uint64, val.rssAnonBytes);
    encoder.encodeStruct(codec.Uint64, val.vmSwapBytes);
    encoder.encodeStruct(codec.Uint64, val.privateBytes);
  };
  function RawOSMemDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RawOSMemDump.prototype.initDefaults_ = function() {
    this.residentSetKb = 0;
    this.peakResidentSetKb = 0;
    this.isPeakRssResettable = false;
    this.platformPrivateFootprint = null;
    this.memoryMaps = null;
    this.nativeLibraryPagesBitmap = null;
  };
  RawOSMemDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RawOSMemDump.validate = function(messageValidator, offset) {
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





    // validate RawOSMemDump.platformPrivateFootprint
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, PlatformPrivateFootprint, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawOSMemDump.memoryMaps
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(VmRegion), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RawOSMemDump.nativeLibraryPagesBitmap
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RawOSMemDump.encodedSize = codec.kStructHeaderSize + 40;

  RawOSMemDump.decode = function(decoder) {
    var packed;
    var val = new RawOSMemDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.residentSetKb = decoder.decodeStruct(codec.Uint32);
    val.peakResidentSetKb = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.isPeakRssResettable = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.platformPrivateFootprint = decoder.decodeStructPointer(PlatformPrivateFootprint);
    val.memoryMaps = decoder.decodeArrayPointer(new codec.PointerTo(VmRegion));
    val.nativeLibraryPagesBitmap = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  RawOSMemDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RawOSMemDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.residentSetKb);
    encoder.encodeStruct(codec.Uint32, val.peakResidentSetKb);
    packed = 0;
    packed |= (val.isPeakRssResettable & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(PlatformPrivateFootprint, val.platformPrivateFootprint);
    encoder.encodeArrayPointer(new codec.PointerTo(VmRegion), val.memoryMaps);
    encoder.encodeArrayPointer(codec.Uint8, val.nativeLibraryPagesBitmap);
  };
  function OSMemDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OSMemDump.prototype.initDefaults_ = function() {
    this.residentSetKb = 0;
    this.peakResidentSetKb = 0;
    this.isPeakRssResettable = false;
    this.privateFootprintKb = 0;
    this.sharedFootprintKb = 0;
    this.privateFootprintSwapKb = 0;
  };
  OSMemDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  OSMemDump.validate = function(messageValidator, offset) {
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







    return validator.validationError.NONE;
  };

  OSMemDump.encodedSize = codec.kStructHeaderSize + 24;

  OSMemDump.decode = function(decoder) {
    var packed;
    var val = new OSMemDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.residentSetKb = decoder.decodeStruct(codec.Uint32);
    val.peakResidentSetKb = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.isPeakRssResettable = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.privateFootprintKb = decoder.decodeStruct(codec.Uint32);
    val.sharedFootprintKb = decoder.decodeStruct(codec.Uint32);
    val.privateFootprintSwapKb = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  OSMemDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OSMemDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.residentSetKb);
    encoder.encodeStruct(codec.Uint32, val.peakResidentSetKb);
    packed = 0;
    packed |= (val.isPeakRssResettable & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.privateFootprintKb);
    encoder.encodeStruct(codec.Uint32, val.sharedFootprintKb);
    encoder.encodeStruct(codec.Uint32, val.privateFootprintSwapKb);
  };
  function AllocatorMemDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AllocatorMemDump.prototype.initDefaults_ = function() {
    this.numericEntries = null;
  };
  AllocatorMemDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AllocatorMemDump.validate = function(messageValidator, offset) {
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


    // validate AllocatorMemDump.numericEntries
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 0, false, codec.String, codec.Uint64, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AllocatorMemDump.encodedSize = codec.kStructHeaderSize + 8;

  AllocatorMemDump.decode = function(decoder) {
    var packed;
    var val = new AllocatorMemDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.numericEntries = decoder.decodeMapPointer(codec.String, codec.Uint64);
    return val;
  };

  AllocatorMemDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AllocatorMemDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeMapPointer(codec.String, codec.Uint64, val.numericEntries);
  };
  function ProcessMemoryDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessMemoryDump.prototype.initDefaults_ = function() {
    this.processType = 0;
    this.osDump = null;
    this.chromeAllocatorDumps = null;
    this.pid = null;
    this.serviceNames = null;
  };
  ProcessMemoryDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProcessMemoryDump.validate = function(messageValidator, offset) {
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


    // validate ProcessMemoryDump.processType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ProcessType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessMemoryDump.osDump
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, OSMemDump, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessMemoryDump.chromeAllocatorDumps
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 16, false, codec.String, new codec.PointerTo(AllocatorMemDump), false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessMemoryDump.pid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, process_id$.ProcessId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessMemoryDump.serviceNames
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessMemoryDump.encodedSize = codec.kStructHeaderSize + 40;

  ProcessMemoryDump.decode = function(decoder) {
    var packed;
    var val = new ProcessMemoryDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.processType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.osDump = decoder.decodeStructPointer(OSMemDump);
    val.chromeAllocatorDumps = decoder.decodeMapPointer(codec.String, new codec.PointerTo(AllocatorMemDump));
    val.pid = decoder.decodeStructPointer(process_id$.ProcessId);
    val.serviceNames = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  ProcessMemoryDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessMemoryDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.processType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(OSMemDump, val.osDump);
    encoder.encodeMapPointer(codec.String, new codec.PointerTo(AllocatorMemDump), val.chromeAllocatorDumps);
    encoder.encodeStructPointer(process_id$.ProcessId, val.pid);
    encoder.encodeArrayPointer(codec.String, val.serviceNames);
  };
  function AggregatedMetrics(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AggregatedMetrics.prototype.initDefaults_ = function() {
    this.nativeLibraryResidentKb = 0;
  };
  AggregatedMetrics.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AggregatedMetrics.validate = function(messageValidator, offset) {
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

  AggregatedMetrics.encodedSize = codec.kStructHeaderSize + 8;

  AggregatedMetrics.decode = function(decoder) {
    var packed;
    var val = new AggregatedMetrics();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.nativeLibraryResidentKb = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AggregatedMetrics.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AggregatedMetrics.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.nativeLibraryResidentKb);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GlobalMemoryDump(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GlobalMemoryDump.prototype.initDefaults_ = function() {
    this.startTime = null;
    this.processDumps = null;
    this.aggregatedMetrics = null;
  };
  GlobalMemoryDump.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  GlobalMemoryDump.validate = function(messageValidator, offset) {
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


    // validate GlobalMemoryDump.startTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GlobalMemoryDump.processDumps
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(ProcessMemoryDump), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GlobalMemoryDump.aggregatedMetrics
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, AggregatedMetrics, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GlobalMemoryDump.encodedSize = codec.kStructHeaderSize + 24;

  GlobalMemoryDump.decode = function(decoder) {
    var packed;
    var val = new GlobalMemoryDump();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.startTime = decoder.decodeStructPointer(time$.TimeTicks);
    val.processDumps = decoder.decodeArrayPointer(new codec.PointerTo(ProcessMemoryDump));
    val.aggregatedMetrics = decoder.decodeStructPointer(AggregatedMetrics);
    return val;
  };

  GlobalMemoryDump.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GlobalMemoryDump.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeTicks, val.startTime);
    encoder.encodeArrayPointer(new codec.PointerTo(ProcessMemoryDump), val.processDumps);
    encoder.encodeStructPointer(AggregatedMetrics, val.aggregatedMetrics);
  };
  function HeapProfileResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HeapProfileResult.prototype.initDefaults_ = function() {
    this.pid = null;
    this.json = null;
  };
  HeapProfileResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HeapProfileResult.validate = function(messageValidator, offset) {
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


    // validate HeapProfileResult.pid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, process_id$.ProcessId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate HeapProfileResult.json
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, big_string$.BigString, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HeapProfileResult.encodedSize = codec.kStructHeaderSize + 16;

  HeapProfileResult.decode = function(decoder) {
    var packed;
    var val = new HeapProfileResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStructPointer(process_id$.ProcessId);
    val.json = decoder.decodeStructPointer(big_string$.BigString);
    return val;
  };

  HeapProfileResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HeapProfileResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(process_id$.ProcessId, val.pid);
    encoder.encodeStructPointer(big_string$.BigString, val.json);
  };
  function ClientProcess_RequestChromeMemoryDump_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientProcess_RequestChromeMemoryDump_Params.prototype.initDefaults_ = function() {
    this.args = null;
  };
  ClientProcess_RequestChromeMemoryDump_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ClientProcess_RequestChromeMemoryDump_Params.validate = function(messageValidator, offset) {
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


    // validate ClientProcess_RequestChromeMemoryDump_Params.args
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, RequestArgs, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClientProcess_RequestChromeMemoryDump_Params.encodedSize = codec.kStructHeaderSize + 8;

  ClientProcess_RequestChromeMemoryDump_Params.decode = function(decoder) {
    var packed;
    var val = new ClientProcess_RequestChromeMemoryDump_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.args = decoder.decodeStructPointer(RequestArgs);
    return val;
  };

  ClientProcess_RequestChromeMemoryDump_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientProcess_RequestChromeMemoryDump_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(RequestArgs, val.args);
  };
  function ClientProcess_RequestChromeMemoryDump_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientProcess_RequestChromeMemoryDump_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.dumpId = 0;
    this.rawProcessMemoryDump = null;
  };
  ClientProcess_RequestChromeMemoryDump_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ClientProcess_RequestChromeMemoryDump_ResponseParams.validate = function(messageValidator, offset) {
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




    // validate ClientProcess_RequestChromeMemoryDump_ResponseParams.rawProcessMemoryDump
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, RawProcessMemoryDump, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClientProcess_RequestChromeMemoryDump_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ClientProcess_RequestChromeMemoryDump_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClientProcess_RequestChromeMemoryDump_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dumpId = decoder.decodeStruct(codec.Uint64);
    val.rawProcessMemoryDump = decoder.decodeStructPointer(RawProcessMemoryDump);
    return val;
  };

  ClientProcess_RequestChromeMemoryDump_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientProcess_RequestChromeMemoryDump_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.dumpId);
    encoder.encodeStructPointer(RawProcessMemoryDump, val.rawProcessMemoryDump);
  };
  function ClientProcess_RequestOSMemoryDump_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientProcess_RequestOSMemoryDump_Params.prototype.initDefaults_ = function() {
    this.option = 0;
    this.pids = null;
  };
  ClientProcess_RequestOSMemoryDump_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ClientProcess_RequestOSMemoryDump_Params.validate = function(messageValidator, offset) {
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


    // validate ClientProcess_RequestOSMemoryDump_Params.option
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, MemoryMapOption);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClientProcess_RequestOSMemoryDump_Params.pids
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(process_id$.ProcessId), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClientProcess_RequestOSMemoryDump_Params.encodedSize = codec.kStructHeaderSize + 16;

  ClientProcess_RequestOSMemoryDump_Params.decode = function(decoder) {
    var packed;
    var val = new ClientProcess_RequestOSMemoryDump_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.option = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.pids = decoder.decodeArrayPointer(new codec.PointerTo(process_id$.ProcessId));
    return val;
  };

  ClientProcess_RequestOSMemoryDump_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientProcess_RequestOSMemoryDump_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.option);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(process_id$.ProcessId), val.pids);
  };
  function ClientProcess_RequestOSMemoryDump_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientProcess_RequestOSMemoryDump_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.dumps = null;
  };
  ClientProcess_RequestOSMemoryDump_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ClientProcess_RequestOSMemoryDump_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate ClientProcess_RequestOSMemoryDump_ResponseParams.dumps
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 8, false, new codec.PointerTo(process_id$.ProcessId), new codec.PointerTo(RawOSMemDump), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClientProcess_RequestOSMemoryDump_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ClientProcess_RequestOSMemoryDump_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClientProcess_RequestOSMemoryDump_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dumps = decoder.decodeMapPointer(new codec.PointerTo(process_id$.ProcessId), new codec.PointerTo(RawOSMemDump));
    return val;
  };

  ClientProcess_RequestOSMemoryDump_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientProcess_RequestOSMemoryDump_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(new codec.PointerTo(process_id$.ProcessId), new codec.PointerTo(RawOSMemDump), val.dumps);
  };
  function HeapProfiler_DumpProcessesForTracing_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HeapProfiler_DumpProcessesForTracing_Params.prototype.initDefaults_ = function() {
    this.stripPathFromMappedFiles = false;
  };
  HeapProfiler_DumpProcessesForTracing_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HeapProfiler_DumpProcessesForTracing_Params.validate = function(messageValidator, offset) {
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

  HeapProfiler_DumpProcessesForTracing_Params.encodedSize = codec.kStructHeaderSize + 8;

  HeapProfiler_DumpProcessesForTracing_Params.decode = function(decoder) {
    var packed;
    var val = new HeapProfiler_DumpProcessesForTracing_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.stripPathFromMappedFiles = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  HeapProfiler_DumpProcessesForTracing_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HeapProfiler_DumpProcessesForTracing_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.stripPathFromMappedFiles & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function HeapProfiler_DumpProcessesForTracing_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HeapProfiler_DumpProcessesForTracing_ResponseParams.prototype.initDefaults_ = function() {
    this.results = null;
  };
  HeapProfiler_DumpProcessesForTracing_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HeapProfiler_DumpProcessesForTracing_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate HeapProfiler_DumpProcessesForTracing_ResponseParams.results
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(HeapProfileResult), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HeapProfiler_DumpProcessesForTracing_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  HeapProfiler_DumpProcessesForTracing_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HeapProfiler_DumpProcessesForTracing_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.results = decoder.decodeArrayPointer(new codec.PointerTo(HeapProfileResult));
    return val;
  };

  HeapProfiler_DumpProcessesForTracing_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HeapProfiler_DumpProcessesForTracing_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(HeapProfileResult), val.results);
  };
  function HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.prototype.initDefaults_ = function() {
    this.pids = null;
  };
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.validate = function(messageValidator, offset) {
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


    // validate HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.pids
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(process_id$.ProcessId), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.encodedSize = codec.kStructHeaderSize + 8;

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.decode = function(decoder) {
    var packed;
    var val = new HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pids = decoder.decodeArrayPointer(new codec.PointerTo(process_id$.ProcessId));
    return val;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(process_id$.ProcessId), val.pids);
  };
  function HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.prototype.initDefaults_ = function() {
    this.vmRegions = null;
  };
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.vmRegions
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 0, false, new codec.PointerTo(process_id$.ProcessId), new codec.ArrayOf(new codec.PointerTo(VmRegion)), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.vmRegions = decoder.decodeMapPointer(new codec.PointerTo(process_id$.ProcessId), new codec.ArrayOf(new codec.PointerTo(VmRegion)));
    return val;
  };

  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeMapPointer(new codec.PointerTo(process_id$.ProcessId), new codec.ArrayOf(new codec.PointerTo(VmRegion)), val.vmRegions);
  };
  function Coordinator_RegisterClientProcess_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RegisterClientProcess_Params.prototype.initDefaults_ = function() {
    this.clientProcess = new ClientProcessPtr();
    this.processType = 0;
  };
  Coordinator_RegisterClientProcess_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Coordinator_RegisterClientProcess_Params.validate = function(messageValidator, offset) {
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


    // validate Coordinator_RegisterClientProcess_Params.clientProcess
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RegisterClientProcess_Params.processType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, ProcessType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RegisterClientProcess_Params.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RegisterClientProcess_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RegisterClientProcess_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientProcess = decoder.decodeStruct(new codec.Interface(ClientProcessPtr));
    val.processType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Coordinator_RegisterClientProcess_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RegisterClientProcess_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(ClientProcessPtr), val.clientProcess);
    encoder.encodeStruct(codec.Int32, val.processType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Coordinator_RequestGlobalMemoryDump_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestGlobalMemoryDump_Params.prototype.initDefaults_ = function() {
    this.dumpType = 0;
    this.levelOfDetail = 0;
    this.allocatorDumpNames = null;
  };
  Coordinator_RequestGlobalMemoryDump_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Coordinator_RequestGlobalMemoryDump_Params.validate = function(messageValidator, offset) {
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


    // validate Coordinator_RequestGlobalMemoryDump_Params.dumpType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DumpType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RequestGlobalMemoryDump_Params.levelOfDetail
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, LevelOfDetail);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RequestGlobalMemoryDump_Params.allocatorDumpNames
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RequestGlobalMemoryDump_Params.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RequestGlobalMemoryDump_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestGlobalMemoryDump_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dumpType = decoder.decodeStruct(codec.Int32);
    val.levelOfDetail = decoder.decodeStruct(codec.Int32);
    val.allocatorDumpNames = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  Coordinator_RequestGlobalMemoryDump_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestGlobalMemoryDump_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.dumpType);
    encoder.encodeStruct(codec.Int32, val.levelOfDetail);
    encoder.encodeArrayPointer(codec.String, val.allocatorDumpNames);
  };
  function Coordinator_RequestGlobalMemoryDump_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestGlobalMemoryDump_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.globalMemoryDump = null;
  };
  Coordinator_RequestGlobalMemoryDump_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Coordinator_RequestGlobalMemoryDump_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate Coordinator_RequestGlobalMemoryDump_ResponseParams.globalMemoryDump
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, GlobalMemoryDump, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RequestGlobalMemoryDump_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RequestGlobalMemoryDump_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestGlobalMemoryDump_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.globalMemoryDump = decoder.decodeStructPointer(GlobalMemoryDump);
    return val;
  };

  Coordinator_RequestGlobalMemoryDump_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestGlobalMemoryDump_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(GlobalMemoryDump, val.globalMemoryDump);
  };
  function Coordinator_RequestGlobalMemoryDumpForPid_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestGlobalMemoryDumpForPid_Params.prototype.initDefaults_ = function() {
    this.pid = null;
    this.allocatorDumpNames = null;
  };
  Coordinator_RequestGlobalMemoryDumpForPid_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Coordinator_RequestGlobalMemoryDumpForPid_Params.validate = function(messageValidator, offset) {
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


    // validate Coordinator_RequestGlobalMemoryDumpForPid_Params.pid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, process_id$.ProcessId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RequestGlobalMemoryDumpForPid_Params.allocatorDumpNames
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_Params.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RequestGlobalMemoryDumpForPid_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestGlobalMemoryDumpForPid_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStructPointer(process_id$.ProcessId);
    val.allocatorDumpNames = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestGlobalMemoryDumpForPid_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(process_id$.ProcessId, val.pid);
    encoder.encodeArrayPointer(codec.String, val.allocatorDumpNames);
  };
  function Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.globalMemoryDump = null;
  };
  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.globalMemoryDump
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, GlobalMemoryDump, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.globalMemoryDump = decoder.decodeStructPointer(GlobalMemoryDump);
    return val;
  };

  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(GlobalMemoryDump, val.globalMemoryDump);
  };
  function Coordinator_RequestPrivateMemoryFootprint_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestPrivateMemoryFootprint_Params.prototype.initDefaults_ = function() {
    this.pid = null;
  };
  Coordinator_RequestPrivateMemoryFootprint_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Coordinator_RequestPrivateMemoryFootprint_Params.validate = function(messageValidator, offset) {
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


    // validate Coordinator_RequestPrivateMemoryFootprint_Params.pid
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, process_id$.ProcessId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RequestPrivateMemoryFootprint_Params.encodedSize = codec.kStructHeaderSize + 8;

  Coordinator_RequestPrivateMemoryFootprint_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestPrivateMemoryFootprint_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStructPointer(process_id$.ProcessId);
    return val;
  };

  Coordinator_RequestPrivateMemoryFootprint_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestPrivateMemoryFootprint_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(process_id$.ProcessId, val.pid);
  };
  function Coordinator_RequestPrivateMemoryFootprint_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestPrivateMemoryFootprint_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.globalMemoryDump = null;
  };
  Coordinator_RequestPrivateMemoryFootprint_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Coordinator_RequestPrivateMemoryFootprint_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate Coordinator_RequestPrivateMemoryFootprint_ResponseParams.globalMemoryDump
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, GlobalMemoryDump, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RequestPrivateMemoryFootprint_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RequestPrivateMemoryFootprint_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestPrivateMemoryFootprint_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.globalMemoryDump = decoder.decodeStructPointer(GlobalMemoryDump);
    return val;
  };

  Coordinator_RequestPrivateMemoryFootprint_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestPrivateMemoryFootprint_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(GlobalMemoryDump, val.globalMemoryDump);
  };
  function Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.prototype.initDefaults_ = function() {
    this.dumpType = 0;
    this.levelOfDetail = 0;
  };
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.validate = function(messageValidator, offset) {
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


    // validate Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.dumpType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DumpType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.levelOfDetail
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, LevelOfDetail);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.encodedSize = codec.kStructHeaderSize + 8;

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dumpType = decoder.decodeStruct(codec.Int32);
    val.levelOfDetail = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.dumpType);
    encoder.encodeStruct(codec.Int32, val.levelOfDetail);
  };
  function Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.dumpId = 0;
  };
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.validate = function(messageValidator, offset) {
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



    return validator.validationError.NONE;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dumpId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.dumpId);
  };
  function Coordinator_RegisterHeapProfiler_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Coordinator_RegisterHeapProfiler_Params.prototype.initDefaults_ = function() {
    this.heapProfiler = new HeapProfilerPtr();
  };
  Coordinator_RegisterHeapProfiler_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Coordinator_RegisterHeapProfiler_Params.validate = function(messageValidator, offset) {
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


    // validate Coordinator_RegisterHeapProfiler_Params.heapProfiler
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Coordinator_RegisterHeapProfiler_Params.encodedSize = codec.kStructHeaderSize + 8;

  Coordinator_RegisterHeapProfiler_Params.decode = function(decoder) {
    var packed;
    var val = new Coordinator_RegisterHeapProfiler_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.heapProfiler = decoder.decodeStruct(new codec.Interface(HeapProfilerPtr));
    return val;
  };

  Coordinator_RegisterHeapProfiler_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Coordinator_RegisterHeapProfiler_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(HeapProfilerPtr), val.heapProfiler);
  };

  function RawAllocatorDumpEntryValue(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  RawAllocatorDumpEntryValue.Tags = {
    valueUint64: 0,
    valueString: 1,
  };

  RawAllocatorDumpEntryValue.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  RawAllocatorDumpEntryValue.prototype.initValue_ = function(value) {
    if (value == undefined) {
      return;
    }

    var keys = Object.keys(value);
    if (keys.length == 0) {
      return;
    }

    if (keys.length > 1) {
      throw new TypeError("You may set only one member on a union.");
    }

    var fields = [
        "valueUint64",
        "valueString",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a RawAllocatorDumpEntryValue member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  Object.defineProperty(RawAllocatorDumpEntryValue.prototype, "valueUint64", {
    get: function() {
      if (this.$tag != RawAllocatorDumpEntryValue.Tags.valueUint64) {
        throw new ReferenceError(
            "RawAllocatorDumpEntryValue.valueUint64 is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = RawAllocatorDumpEntryValue.Tags.valueUint64;
      this.$data = value;
    }
  });
  Object.defineProperty(RawAllocatorDumpEntryValue.prototype, "valueString", {
    get: function() {
      if (this.$tag != RawAllocatorDumpEntryValue.Tags.valueString) {
        throw new ReferenceError(
            "RawAllocatorDumpEntryValue.valueString is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = RawAllocatorDumpEntryValue.Tags.valueString;
      this.$data = value;
    }
  });


    RawAllocatorDumpEntryValue.encode = function(encoder, val) {
      if (val == null) {
        encoder.writeUint64(0);
        encoder.writeUint64(0);
        return;
      }
      if (val.$tag == undefined) {
        throw new TypeError("Cannot encode unions with an unknown member set.");
      }

      encoder.writeUint32(16);
      encoder.writeUint32(val.$tag);
      switch (val.$tag) {
        case RawAllocatorDumpEntryValue.Tags.valueUint64:
          encoder.encodeStruct(codec.Uint64, val.valueUint64);
          break;
        case RawAllocatorDumpEntryValue.Tags.valueString:
          encoder.encodeStruct(codec.String, val.valueString);
          break;
      }
      encoder.align();
    };


    RawAllocatorDumpEntryValue.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new RawAllocatorDumpEntryValue();
      var tag = decoder.readUint32();
      switch (tag) {
        case RawAllocatorDumpEntryValue.Tags.valueUint64:
          result.valueUint64 = decoder.decodeStruct(codec.Uint64);
          break;
        case RawAllocatorDumpEntryValue.Tags.valueString:
          result.valueString = decoder.decodeStruct(codec.String);
          break;
      }
      decoder.align();

      return result;
    };


    RawAllocatorDumpEntryValue.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case RawAllocatorDumpEntryValue.Tags.valueUint64:
          

          break;
        case RawAllocatorDumpEntryValue.Tags.valueString:
          

    // validate RawAllocatorDumpEntryValue.valueString
    err = messageValidator.validateStringPointer(data_offset, false)
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  RawAllocatorDumpEntryValue.encodedSize = 16;
  var kClientProcess_RequestChromeMemoryDump_Name = 284774441;
  var kClientProcess_RequestOSMemoryDump_Name = 418999089;

  function ClientProcessPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ClientProcess,
                                                   handleOrPtrInfo);
  }

  function ClientProcessAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ClientProcess, associatedInterfacePtrInfo);
  }

  ClientProcessAssociatedPtr.prototype =
      Object.create(ClientProcessPtr.prototype);
  ClientProcessAssociatedPtr.prototype.constructor =
      ClientProcessAssociatedPtr;

  function ClientProcessProxy(receiver) {
    this.receiver_ = receiver;
  }
  ClientProcessPtr.prototype.requestChromeMemoryDump = function() {
    return ClientProcessProxy.prototype.requestChromeMemoryDump
        .apply(this.ptr.getProxy(), arguments);
  };

  ClientProcessProxy.prototype.requestChromeMemoryDump = function(args) {
    var params_ = new ClientProcess_RequestChromeMemoryDump_Params();
    params_.args = args;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClientProcess_RequestChromeMemoryDump_Name,
          codec.align(ClientProcess_RequestChromeMemoryDump_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClientProcess_RequestChromeMemoryDump_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClientProcess_RequestChromeMemoryDump_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClientProcessPtr.prototype.requestOSMemoryDump = function() {
    return ClientProcessProxy.prototype.requestOSMemoryDump
        .apply(this.ptr.getProxy(), arguments);
  };

  ClientProcessProxy.prototype.requestOSMemoryDump = function(option, pids) {
    var params_ = new ClientProcess_RequestOSMemoryDump_Params();
    params_.option = option;
    params_.pids = pids;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClientProcess_RequestOSMemoryDump_Name,
          codec.align(ClientProcess_RequestOSMemoryDump_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClientProcess_RequestOSMemoryDump_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClientProcess_RequestOSMemoryDump_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ClientProcessStub(delegate) {
    this.delegate_ = delegate;
  }
  ClientProcessStub.prototype.requestChromeMemoryDump = function(args) {
    return this.delegate_ && this.delegate_.requestChromeMemoryDump && this.delegate_.requestChromeMemoryDump(args);
  }
  ClientProcessStub.prototype.requestOSMemoryDump = function(option, pids) {
    return this.delegate_ && this.delegate_.requestOSMemoryDump && this.delegate_.requestOSMemoryDump(option, pids);
  }

  ClientProcessStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ClientProcessStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kClientProcess_RequestChromeMemoryDump_Name:
      var params = reader.decodeStruct(ClientProcess_RequestChromeMemoryDump_Params);
      this.requestChromeMemoryDump(params.args).then(function(response) {
        var responseParams =
            new ClientProcess_RequestChromeMemoryDump_ResponseParams();
        responseParams.success = response.success;
        responseParams.dumpId = response.dumpId;
        responseParams.rawProcessMemoryDump = response.rawProcessMemoryDump;
        var builder = new codec.MessageV1Builder(
            kClientProcess_RequestChromeMemoryDump_Name,
            codec.align(ClientProcess_RequestChromeMemoryDump_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClientProcess_RequestChromeMemoryDump_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kClientProcess_RequestOSMemoryDump_Name:
      var params = reader.decodeStruct(ClientProcess_RequestOSMemoryDump_Params);
      this.requestOSMemoryDump(params.option, params.pids).then(function(response) {
        var responseParams =
            new ClientProcess_RequestOSMemoryDump_ResponseParams();
        responseParams.success = response.success;
        responseParams.dumps = response.dumps;
        var builder = new codec.MessageV1Builder(
            kClientProcess_RequestOSMemoryDump_Name,
            codec.align(ClientProcess_RequestOSMemoryDump_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClientProcess_RequestOSMemoryDump_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateClientProcessRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kClientProcess_RequestChromeMemoryDump_Name:
        if (message.expectsResponse())
          paramsClass = ClientProcess_RequestChromeMemoryDump_Params;
      break;
      case kClientProcess_RequestOSMemoryDump_Name:
        if (message.expectsResponse())
          paramsClass = ClientProcess_RequestOSMemoryDump_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateClientProcessResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kClientProcess_RequestChromeMemoryDump_Name:
        if (message.isResponse())
          paramsClass = ClientProcess_RequestChromeMemoryDump_ResponseParams;
        break;
      case kClientProcess_RequestOSMemoryDump_Name:
        if (message.isResponse())
          paramsClass = ClientProcess_RequestOSMemoryDump_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ClientProcess = {
    name: 'memory_instrumentation.mojom.ClientProcess',
    kVersion: 0,
    ptrClass: ClientProcessPtr,
    proxyClass: ClientProcessProxy,
    stubClass: ClientProcessStub,
    validateRequest: validateClientProcessRequest,
    validateResponse: validateClientProcessResponse,
  };
  ClientProcessStub.prototype.validator = validateClientProcessRequest;
  ClientProcessProxy.prototype.validator = validateClientProcessResponse;
  var kHeapProfiler_DumpProcessesForTracing_Name = 46401998;

  function HeapProfilerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(HeapProfiler,
                                                   handleOrPtrInfo);
  }

  function HeapProfilerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        HeapProfiler, associatedInterfacePtrInfo);
  }

  HeapProfilerAssociatedPtr.prototype =
      Object.create(HeapProfilerPtr.prototype);
  HeapProfilerAssociatedPtr.prototype.constructor =
      HeapProfilerAssociatedPtr;

  function HeapProfilerProxy(receiver) {
    this.receiver_ = receiver;
  }
  HeapProfilerPtr.prototype.dumpProcessesForTracing = function() {
    return HeapProfilerProxy.prototype.dumpProcessesForTracing
        .apply(this.ptr.getProxy(), arguments);
  };

  HeapProfilerProxy.prototype.dumpProcessesForTracing = function(stripPathFromMappedFiles) {
    var params_ = new HeapProfiler_DumpProcessesForTracing_Params();
    params_.stripPathFromMappedFiles = stripPathFromMappedFiles;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kHeapProfiler_DumpProcessesForTracing_Name,
          codec.align(HeapProfiler_DumpProcessesForTracing_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HeapProfiler_DumpProcessesForTracing_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HeapProfiler_DumpProcessesForTracing_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function HeapProfilerStub(delegate) {
    this.delegate_ = delegate;
  }
  HeapProfilerStub.prototype.dumpProcessesForTracing = function(stripPathFromMappedFiles) {
    return this.delegate_ && this.delegate_.dumpProcessesForTracing && this.delegate_.dumpProcessesForTracing(stripPathFromMappedFiles);
  }

  HeapProfilerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  HeapProfilerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kHeapProfiler_DumpProcessesForTracing_Name:
      var params = reader.decodeStruct(HeapProfiler_DumpProcessesForTracing_Params);
      this.dumpProcessesForTracing(params.stripPathFromMappedFiles).then(function(response) {
        var responseParams =
            new HeapProfiler_DumpProcessesForTracing_ResponseParams();
        responseParams.results = response.results;
        var builder = new codec.MessageV1Builder(
            kHeapProfiler_DumpProcessesForTracing_Name,
            codec.align(HeapProfiler_DumpProcessesForTracing_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HeapProfiler_DumpProcessesForTracing_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateHeapProfilerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kHeapProfiler_DumpProcessesForTracing_Name:
        if (message.expectsResponse())
          paramsClass = HeapProfiler_DumpProcessesForTracing_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateHeapProfilerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kHeapProfiler_DumpProcessesForTracing_Name:
        if (message.isResponse())
          paramsClass = HeapProfiler_DumpProcessesForTracing_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var HeapProfiler = {
    name: 'memory_instrumentation.mojom.HeapProfiler',
    kVersion: 0,
    ptrClass: HeapProfilerPtr,
    proxyClass: HeapProfilerProxy,
    stubClass: HeapProfilerStub,
    validateRequest: validateHeapProfilerRequest,
    validateResponse: validateHeapProfilerResponse,
  };
  HeapProfilerStub.prototype.validator = validateHeapProfilerRequest;
  HeapProfilerProxy.prototype.validator = validateHeapProfilerResponse;
  var kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name = 871431103;

  function HeapProfilerHelperPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(HeapProfilerHelper,
                                                   handleOrPtrInfo);
  }

  function HeapProfilerHelperAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        HeapProfilerHelper, associatedInterfacePtrInfo);
  }

  HeapProfilerHelperAssociatedPtr.prototype =
      Object.create(HeapProfilerHelperPtr.prototype);
  HeapProfilerHelperAssociatedPtr.prototype.constructor =
      HeapProfilerHelperAssociatedPtr;

  function HeapProfilerHelperProxy(receiver) {
    this.receiver_ = receiver;
  }
  HeapProfilerHelperPtr.prototype.getVmRegionsForHeapProfiler = function() {
    return HeapProfilerHelperProxy.prototype.getVmRegionsForHeapProfiler
        .apply(this.ptr.getProxy(), arguments);
  };

  HeapProfilerHelperProxy.prototype.getVmRegionsForHeapProfiler = function(pids) {
    var params_ = new HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params();
    params_.pids = pids;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name,
          codec.align(HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function HeapProfilerHelperStub(delegate) {
    this.delegate_ = delegate;
  }
  HeapProfilerHelperStub.prototype.getVmRegionsForHeapProfiler = function(pids) {
    return this.delegate_ && this.delegate_.getVmRegionsForHeapProfiler && this.delegate_.getVmRegionsForHeapProfiler(pids);
  }

  HeapProfilerHelperStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  HeapProfilerHelperStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name:
      var params = reader.decodeStruct(HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params);
      this.getVmRegionsForHeapProfiler(params.pids).then(function(response) {
        var responseParams =
            new HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams();
        responseParams.vmRegions = response.vmRegions;
        var builder = new codec.MessageV1Builder(
            kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name,
            codec.align(HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateHeapProfilerHelperRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name:
        if (message.expectsResponse())
          paramsClass = HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateHeapProfilerHelperResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name:
        if (message.isResponse())
          paramsClass = HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var HeapProfilerHelper = {
    name: 'memory_instrumentation.mojom.HeapProfilerHelper',
    kVersion: 0,
    ptrClass: HeapProfilerHelperPtr,
    proxyClass: HeapProfilerHelperProxy,
    stubClass: HeapProfilerHelperStub,
    validateRequest: validateHeapProfilerHelperRequest,
    validateResponse: validateHeapProfilerHelperResponse,
  };
  HeapProfilerHelperStub.prototype.validator = validateHeapProfilerHelperRequest;
  HeapProfilerHelperProxy.prototype.validator = validateHeapProfilerHelperResponse;
  var kCoordinator_RegisterClientProcess_Name = 2081116682;
  var kCoordinator_RequestGlobalMemoryDump_Name = 226090531;
  var kCoordinator_RequestGlobalMemoryDumpForPid_Name = 1882671527;
  var kCoordinator_RequestPrivateMemoryFootprint_Name = 860837762;
  var kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name = 603434616;
  var kCoordinator_RegisterHeapProfiler_Name = 1968783795;

  function CoordinatorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Coordinator,
                                                   handleOrPtrInfo);
  }

  function CoordinatorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Coordinator, associatedInterfacePtrInfo);
  }

  CoordinatorAssociatedPtr.prototype =
      Object.create(CoordinatorPtr.prototype);
  CoordinatorAssociatedPtr.prototype.constructor =
      CoordinatorAssociatedPtr;

  function CoordinatorProxy(receiver) {
    this.receiver_ = receiver;
  }
  CoordinatorPtr.prototype.registerClientProcess = function() {
    return CoordinatorProxy.prototype.registerClientProcess
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.registerClientProcess = function(clientProcess, processType) {
    var params_ = new Coordinator_RegisterClientProcess_Params();
    params_.clientProcess = clientProcess;
    params_.processType = processType;
    var builder = new codec.MessageV0Builder(
        kCoordinator_RegisterClientProcess_Name,
        codec.align(Coordinator_RegisterClientProcess_Params.encodedSize));
    builder.encodeStruct(Coordinator_RegisterClientProcess_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CoordinatorPtr.prototype.requestGlobalMemoryDump = function() {
    return CoordinatorProxy.prototype.requestGlobalMemoryDump
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.requestGlobalMemoryDump = function(dumpType, levelOfDetail, allocatorDumpNames) {
    var params_ = new Coordinator_RequestGlobalMemoryDump_Params();
    params_.dumpType = dumpType;
    params_.levelOfDetail = levelOfDetail;
    params_.allocatorDumpNames = allocatorDumpNames;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinator_RequestGlobalMemoryDump_Name,
          codec.align(Coordinator_RequestGlobalMemoryDump_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Coordinator_RequestGlobalMemoryDump_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Coordinator_RequestGlobalMemoryDump_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CoordinatorPtr.prototype.requestGlobalMemoryDumpForPid = function() {
    return CoordinatorProxy.prototype.requestGlobalMemoryDumpForPid
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.requestGlobalMemoryDumpForPid = function(pid, allocatorDumpNames) {
    var params_ = new Coordinator_RequestGlobalMemoryDumpForPid_Params();
    params_.pid = pid;
    params_.allocatorDumpNames = allocatorDumpNames;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinator_RequestGlobalMemoryDumpForPid_Name,
          codec.align(Coordinator_RequestGlobalMemoryDumpForPid_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Coordinator_RequestGlobalMemoryDumpForPid_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CoordinatorPtr.prototype.requestPrivateMemoryFootprint = function() {
    return CoordinatorProxy.prototype.requestPrivateMemoryFootprint
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.requestPrivateMemoryFootprint = function(pid) {
    var params_ = new Coordinator_RequestPrivateMemoryFootprint_Params();
    params_.pid = pid;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinator_RequestPrivateMemoryFootprint_Name,
          codec.align(Coordinator_RequestPrivateMemoryFootprint_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Coordinator_RequestPrivateMemoryFootprint_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Coordinator_RequestPrivateMemoryFootprint_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CoordinatorPtr.prototype.requestGlobalMemoryDumpAndAppendToTrace = function() {
    return CoordinatorProxy.prototype.requestGlobalMemoryDumpAndAppendToTrace
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.requestGlobalMemoryDumpAndAppendToTrace = function(dumpType, levelOfDetail) {
    var params_ = new Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params();
    params_.dumpType = dumpType;
    params_.levelOfDetail = levelOfDetail;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name,
          codec.align(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CoordinatorPtr.prototype.registerHeapProfiler = function() {
    return CoordinatorProxy.prototype.registerHeapProfiler
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinatorProxy.prototype.registerHeapProfiler = function(heapProfiler) {
    var params_ = new Coordinator_RegisterHeapProfiler_Params();
    params_.heapProfiler = heapProfiler;
    var builder = new codec.MessageV0Builder(
        kCoordinator_RegisterHeapProfiler_Name,
        codec.align(Coordinator_RegisterHeapProfiler_Params.encodedSize));
    builder.encodeStruct(Coordinator_RegisterHeapProfiler_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CoordinatorStub(delegate) {
    this.delegate_ = delegate;
  }
  CoordinatorStub.prototype.registerClientProcess = function(clientProcess, processType) {
    return this.delegate_ && this.delegate_.registerClientProcess && this.delegate_.registerClientProcess(clientProcess, processType);
  }
  CoordinatorStub.prototype.requestGlobalMemoryDump = function(dumpType, levelOfDetail, allocatorDumpNames) {
    return this.delegate_ && this.delegate_.requestGlobalMemoryDump && this.delegate_.requestGlobalMemoryDump(dumpType, levelOfDetail, allocatorDumpNames);
  }
  CoordinatorStub.prototype.requestGlobalMemoryDumpForPid = function(pid, allocatorDumpNames) {
    return this.delegate_ && this.delegate_.requestGlobalMemoryDumpForPid && this.delegate_.requestGlobalMemoryDumpForPid(pid, allocatorDumpNames);
  }
  CoordinatorStub.prototype.requestPrivateMemoryFootprint = function(pid) {
    return this.delegate_ && this.delegate_.requestPrivateMemoryFootprint && this.delegate_.requestPrivateMemoryFootprint(pid);
  }
  CoordinatorStub.prototype.requestGlobalMemoryDumpAndAppendToTrace = function(dumpType, levelOfDetail) {
    return this.delegate_ && this.delegate_.requestGlobalMemoryDumpAndAppendToTrace && this.delegate_.requestGlobalMemoryDumpAndAppendToTrace(dumpType, levelOfDetail);
  }
  CoordinatorStub.prototype.registerHeapProfiler = function(heapProfiler) {
    return this.delegate_ && this.delegate_.registerHeapProfiler && this.delegate_.registerHeapProfiler(heapProfiler);
  }

  CoordinatorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCoordinator_RegisterClientProcess_Name:
      var params = reader.decodeStruct(Coordinator_RegisterClientProcess_Params);
      this.registerClientProcess(params.clientProcess, params.processType);
      return true;
    case kCoordinator_RegisterHeapProfiler_Name:
      var params = reader.decodeStruct(Coordinator_RegisterHeapProfiler_Params);
      this.registerHeapProfiler(params.heapProfiler);
      return true;
    default:
      return false;
    }
  };

  CoordinatorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCoordinator_RequestGlobalMemoryDump_Name:
      var params = reader.decodeStruct(Coordinator_RequestGlobalMemoryDump_Params);
      this.requestGlobalMemoryDump(params.dumpType, params.levelOfDetail, params.allocatorDumpNames).then(function(response) {
        var responseParams =
            new Coordinator_RequestGlobalMemoryDump_ResponseParams();
        responseParams.success = response.success;
        responseParams.globalMemoryDump = response.globalMemoryDump;
        var builder = new codec.MessageV1Builder(
            kCoordinator_RequestGlobalMemoryDump_Name,
            codec.align(Coordinator_RequestGlobalMemoryDump_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Coordinator_RequestGlobalMemoryDump_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCoordinator_RequestGlobalMemoryDumpForPid_Name:
      var params = reader.decodeStruct(Coordinator_RequestGlobalMemoryDumpForPid_Params);
      this.requestGlobalMemoryDumpForPid(params.pid, params.allocatorDumpNames).then(function(response) {
        var responseParams =
            new Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams();
        responseParams.success = response.success;
        responseParams.globalMemoryDump = response.globalMemoryDump;
        var builder = new codec.MessageV1Builder(
            kCoordinator_RequestGlobalMemoryDumpForPid_Name,
            codec.align(Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCoordinator_RequestPrivateMemoryFootprint_Name:
      var params = reader.decodeStruct(Coordinator_RequestPrivateMemoryFootprint_Params);
      this.requestPrivateMemoryFootprint(params.pid).then(function(response) {
        var responseParams =
            new Coordinator_RequestPrivateMemoryFootprint_ResponseParams();
        responseParams.success = response.success;
        responseParams.globalMemoryDump = response.globalMemoryDump;
        var builder = new codec.MessageV1Builder(
            kCoordinator_RequestPrivateMemoryFootprint_Name,
            codec.align(Coordinator_RequestPrivateMemoryFootprint_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Coordinator_RequestPrivateMemoryFootprint_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name:
      var params = reader.decodeStruct(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params);
      this.requestGlobalMemoryDumpAndAppendToTrace(params.dumpType, params.levelOfDetail).then(function(response) {
        var responseParams =
            new Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams();
        responseParams.success = response.success;
        responseParams.dumpId = response.dumpId;
        var builder = new codec.MessageV1Builder(
            kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name,
            codec.align(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateCoordinatorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCoordinator_RegisterClientProcess_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Coordinator_RegisterClientProcess_Params;
      break;
      case kCoordinator_RequestGlobalMemoryDump_Name:
        if (message.expectsResponse())
          paramsClass = Coordinator_RequestGlobalMemoryDump_Params;
      break;
      case kCoordinator_RequestGlobalMemoryDumpForPid_Name:
        if (message.expectsResponse())
          paramsClass = Coordinator_RequestGlobalMemoryDumpForPid_Params;
      break;
      case kCoordinator_RequestPrivateMemoryFootprint_Name:
        if (message.expectsResponse())
          paramsClass = Coordinator_RequestPrivateMemoryFootprint_Params;
      break;
      case kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name:
        if (message.expectsResponse())
          paramsClass = Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params;
      break;
      case kCoordinator_RegisterHeapProfiler_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Coordinator_RegisterHeapProfiler_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCoordinatorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kCoordinator_RequestGlobalMemoryDump_Name:
        if (message.isResponse())
          paramsClass = Coordinator_RequestGlobalMemoryDump_ResponseParams;
        break;
      case kCoordinator_RequestGlobalMemoryDumpForPid_Name:
        if (message.isResponse())
          paramsClass = Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams;
        break;
      case kCoordinator_RequestPrivateMemoryFootprint_Name:
        if (message.isResponse())
          paramsClass = Coordinator_RequestPrivateMemoryFootprint_ResponseParams;
        break;
      case kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name:
        if (message.isResponse())
          paramsClass = Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Coordinator = {
    name: 'memory_instrumentation.mojom.Coordinator',
    kVersion: 0,
    ptrClass: CoordinatorPtr,
    proxyClass: CoordinatorProxy,
    stubClass: CoordinatorStub,
    validateRequest: validateCoordinatorRequest,
    validateResponse: validateCoordinatorResponse,
  };
  CoordinatorStub.prototype.validator = validateCoordinatorRequest;
  CoordinatorProxy.prototype.validator = validateCoordinatorResponse;
  exports.DumpType = DumpType;
  exports.LevelOfDetail = LevelOfDetail;
  exports.ProcessType = ProcessType;
  exports.MemoryMapOption = MemoryMapOption;
  exports.RequestArgs = RequestArgs;
  exports.RawAllocatorDumpEdge = RawAllocatorDumpEdge;
  exports.RawAllocatorDumpEntry = RawAllocatorDumpEntry;
  exports.RawAllocatorDump = RawAllocatorDump;
  exports.RawProcessMemoryDump = RawProcessMemoryDump;
  exports.VmRegion = VmRegion;
  exports.PlatformPrivateFootprint = PlatformPrivateFootprint;
  exports.RawOSMemDump = RawOSMemDump;
  exports.OSMemDump = OSMemDump;
  exports.AllocatorMemDump = AllocatorMemDump;
  exports.ProcessMemoryDump = ProcessMemoryDump;
  exports.AggregatedMetrics = AggregatedMetrics;
  exports.GlobalMemoryDump = GlobalMemoryDump;
  exports.HeapProfileResult = HeapProfileResult;
  exports.RawAllocatorDumpEntryValue = RawAllocatorDumpEntryValue;
  exports.ClientProcess = ClientProcess;
  exports.ClientProcessPtr = ClientProcessPtr;
  exports.ClientProcessAssociatedPtr = ClientProcessAssociatedPtr;
  exports.HeapProfiler = HeapProfiler;
  exports.HeapProfilerPtr = HeapProfilerPtr;
  exports.HeapProfilerAssociatedPtr = HeapProfilerAssociatedPtr;
  exports.HeapProfilerHelper = HeapProfilerHelper;
  exports.HeapProfilerHelperPtr = HeapProfilerHelperPtr;
  exports.HeapProfilerHelperAssociatedPtr = HeapProfilerHelperAssociatedPtr;
  exports.Coordinator = Coordinator;
  exports.CoordinatorPtr = CoordinatorPtr;
  exports.CoordinatorAssociatedPtr = CoordinatorAssociatedPtr;
})();