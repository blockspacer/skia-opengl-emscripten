// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'mojo/public/interfaces/bindings/pipe_control_messages.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojo.pipeControl');


  var kRunOrClosePipeMessageId = 0xFFFFFFFE;

  function RunOrClosePipeMessageParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RunOrClosePipeMessageParams.prototype.initDefaults_ = function() {
    this.input = null;
  };
  RunOrClosePipeMessageParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  RunOrClosePipeMessageParams.validate = function(messageValidator, offset) {
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


    // validate RunOrClosePipeMessageParams.input
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, RunOrClosePipeInput, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RunOrClosePipeMessageParams.encodedSize = codec.kStructHeaderSize + 16;

  RunOrClosePipeMessageParams.decode = function(decoder) {
    var packed;
    var val = new RunOrClosePipeMessageParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.input = decoder.decodeStruct(RunOrClosePipeInput);
    return val;
  };

  RunOrClosePipeMessageParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RunOrClosePipeMessageParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(RunOrClosePipeInput, val.input);
  };
  function DisconnectReason(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisconnectReason.prototype.initDefaults_ = function() {
    this.customReason = 0;
    this.description = null;
  };
  DisconnectReason.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DisconnectReason.validate = function(messageValidator, offset) {
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



    // validate DisconnectReason.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisconnectReason.encodedSize = codec.kStructHeaderSize + 16;

  DisconnectReason.decode = function(decoder) {
    var packed;
    var val = new DisconnectReason();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.customReason = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.description = decoder.decodeStruct(codec.String);
    return val;
  };

  DisconnectReason.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisconnectReason.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.customReason);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.description);
  };
  function PeerAssociatedEndpointClosedEvent(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PeerAssociatedEndpointClosedEvent.prototype.initDefaults_ = function() {
    this.id = 0;
    this.disconnectReason = null;
  };
  PeerAssociatedEndpointClosedEvent.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PeerAssociatedEndpointClosedEvent.validate = function(messageValidator, offset) {
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



    // validate PeerAssociatedEndpointClosedEvent.disconnectReason
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, DisconnectReason, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PeerAssociatedEndpointClosedEvent.encodedSize = codec.kStructHeaderSize + 16;

  PeerAssociatedEndpointClosedEvent.decode = function(decoder) {
    var packed;
    var val = new PeerAssociatedEndpointClosedEvent();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.disconnectReason = decoder.decodeStructPointer(DisconnectReason);
    return val;
  };

  PeerAssociatedEndpointClosedEvent.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PeerAssociatedEndpointClosedEvent.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(DisconnectReason, val.disconnectReason);
  };

  function RunOrClosePipeInput(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  RunOrClosePipeInput.Tags = {
    peerAssociatedEndpointClosedEvent: 0,
  };

  RunOrClosePipeInput.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  RunOrClosePipeInput.prototype.initValue_ = function(value) {
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
        "peerAssociatedEndpointClosedEvent",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a RunOrClosePipeInput member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  Object.defineProperty(RunOrClosePipeInput.prototype, "peerAssociatedEndpointClosedEvent", {
    get: function() {
      if (this.$tag != RunOrClosePipeInput.Tags.peerAssociatedEndpointClosedEvent) {
        throw new ReferenceError(
            "RunOrClosePipeInput.peerAssociatedEndpointClosedEvent is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = RunOrClosePipeInput.Tags.peerAssociatedEndpointClosedEvent;
      this.$data = value;
    }
  });


    RunOrClosePipeInput.encode = function(encoder, val) {
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
        case RunOrClosePipeInput.Tags.peerAssociatedEndpointClosedEvent:
          encoder.encodeStructPointer(PeerAssociatedEndpointClosedEvent, val.peerAssociatedEndpointClosedEvent);
          break;
      }
      encoder.align();
    };


    RunOrClosePipeInput.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new RunOrClosePipeInput();
      var tag = decoder.readUint32();
      switch (tag) {
        case RunOrClosePipeInput.Tags.peerAssociatedEndpointClosedEvent:
          result.peerAssociatedEndpointClosedEvent = decoder.decodeStructPointer(PeerAssociatedEndpointClosedEvent);
          break;
      }
      decoder.align();

      return result;
    };


    RunOrClosePipeInput.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case RunOrClosePipeInput.Tags.peerAssociatedEndpointClosedEvent:
          

    // validate RunOrClosePipeInput.peerAssociatedEndpointClosedEvent
    err = messageValidator.validateStructPointer(data_offset, PeerAssociatedEndpointClosedEvent, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  RunOrClosePipeInput.encodedSize = 16;
  exports.kRunOrClosePipeMessageId = kRunOrClosePipeMessageId;
  exports.RunOrClosePipeMessageParams = RunOrClosePipeMessageParams;
  exports.DisconnectReason = DisconnectReason;
  exports.PeerAssociatedEndpointClosedEvent = PeerAssociatedEndpointClosedEvent;
  exports.RunOrClosePipeInput = RunOrClosePipeInput;
})();