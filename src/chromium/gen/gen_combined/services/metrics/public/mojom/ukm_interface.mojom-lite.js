// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('ukm.mojom');








/** @export */
ukm.mojom.UkmRecorderInterfaceRequest = class {
  /** @param {!MojoHandle} handle */
  constructor(handle) {
    /** @public {!MojoHandle} */
    this.handle = handle;
  }
};



/**
 * @export
 * @implements { ukm.mojom.UkmRecorderInterfaceInterface }
 */
ukm.mojom.UkmRecorderInterfaceProxy = class {
  /** @param {MojoHandle=} opt_handle */
  constructor(opt_handle) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceProxyBase<!ukm.mojom.UkmRecorderInterfaceRequest>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceProxyBase(
          ukm.mojom.UkmRecorderInterfaceRequest,
          opt_handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper<!ukm.mojom.UkmRecorderInterfaceRequest>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !ukm.mojom.UkmEntry } entry
   */

  addEntry(
      entry) {
    this.proxy.sendMessage(
        963731108,
        ukm.mojom.UkmRecorderInterface_AddEntry_ParamsSpec.$,
        null,
        [
          entry
        ]);
  }

  
  /**
   * @param { !number } sourceId
   * @param { !string } url
   */

  updateSourceURL(
      sourceId,
      url) {
    this.proxy.sendMessage(
        153816209,
        ukm.mojom.UkmRecorderInterface_UpdateSourceURL_ParamsSpec.$,
        null,
        [
          sourceId,
          url
        ]);
  }
};

/**
 * An object which receives request messages for the UkmRecorderInterface
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
ukm.mojom.UkmRecorderInterface = class {
  /**
   * @param {!ukm.mojom.UkmRecorderInterfaceInterface } impl
   */
  constructor(impl) {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;

    this.target_.registerHandler(
        963731108,
        ukm.mojom.UkmRecorderInterface_AddEntry_ParamsSpec.$,
        null,
        impl.addEntry.bind(impl));
    this.target_.registerHandler(
        153816209,
        ukm.mojom.UkmRecorderInterface_UpdateSourceURL_ParamsSpec.$,
        null,
        impl.updateSourceURL.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.target_.getConnectionErrorEventRouter();
  }

  /**
   * Binds a new handle to this object. Messages which arrive on the handle will
   * be read and dispatched to this object.
   *
   * @param {!MojoHandle} handle
   * @export
   */
  bindHandle(handle) {
    this.target_.bindHandle(handle);
  }

  /**
   * Returns a proxy for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!ukm.mojom.UkmRecorderInterfaceProxy}
   * @export
   */
  static getProxy() {
    let proxy = new ukm.mojom.UkmRecorderInterfaceProxy;
    Mojo.bindInterface('ukm.mojom.UkmRecorderInterface',
                       proxy.$.createRequest().handle);
    return proxy;
  }

  /**
   * Returns a proxy for this interface which sends messages directly to this
   * object. Any number of proxies may be created to the same object.
   *
   * @return {!ukm.mojom.UkmRecorderInterfaceProxy}
   * @export
   */
  createProxy() {
    let proxy = new ukm.mojom.UkmRecorderInterfaceProxy;
    this.target_.bindHandle(proxy.$.createRequest().handle);
    return proxy;
  }
};


/**
 * @const {string}
 * @export
 */
ukm.mojom.UkmRecorderInterface.$interfaceName =
    'ukm.mojom.UkmRecorderInterface';

/**
 * An object which receives request messages for the UkmRecorderInterface
 * mojom interface and dispatches them as callbacks. One callback target exists
 * on this object for each message defined in the mojom interface, and each
 * target can have any number of listeners added to it.
 *
 * @export
 */
ukm.mojom.UkmRecorderInterfaceCallbackRouter = class {
  constructor() {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;
    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.addEntry =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        963731108,
        ukm.mojom.UkmRecorderInterface_AddEntry_ParamsSpec.$,
        null,
        this.addEntry.createTargetHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.updateSourceURL =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        153816209,
        ukm.mojom.UkmRecorderInterface_UpdateSourceURL_ParamsSpec.$,
        null,
        this.updateSourceURL.createTargetHandler(false /* expectsResponse */));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.target_.getConnectionErrorEventRouter();
  }

  /**
   * Binds a new handle to this object. Messages which arrive on the handle will
   * be read and dispatched as callbacks on this object.
   *
   * @param {!MojoHandle} handle
   * @export
   */
  bindHandle(handle) {
    this.target_.bindHandle(handle);
  }

  /**
   * Closes all bindings bound to this target. The target will not receive any
   * further message message events unless rebound to one or more handles.
   */
  closeBindings() {
    this.target_.closeBindings();
  }

  /**
   * Returns a proxy for this interface which sends messages directly to this
   * object. Any number of proxies may be created to the same object.
   *
   * @return {!ukm.mojom.UkmRecorderInterfaceProxy}
   * @export
   */
  createProxy() {
    let proxy = new ukm.mojom.UkmRecorderInterfaceProxy;
    this.target_.bindHandle(proxy.$.createRequest().handle);
    return proxy;
  }

  /**
   * @param {number} id An ID returned by a prior call to addListener.
   * @return {boolean} True iff the identified listener was found and removed.
   * @export
   */
  removeListener(id) {
    return this.router_.removeListener(id);
  }
};



/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
ukm.mojom.UkmEntrySpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
ukm.mojom.UkmRecorderInterface_AddEntry_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
ukm.mojom.UkmRecorderInterface_UpdateSourceURL_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    ukm.mojom.UkmEntrySpec.$,
    'UkmEntry',
    24,
    [
      mojo.internal.StructField(
        'sourceId', 0,
        0,
        mojo.internal.Int64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'eventHash', 8,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'metrics', 16,
        0,
        mojo.internal.Map(mojo.internal.Uint64, mojo.internal.Int64, false),
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    ukm.mojom.UkmRecorderInterface_AddEntry_ParamsSpec.$,
    'UkmRecorderInterface_AddEntry_Params',
    8,
    [
      mojo.internal.StructField(
        'entry', 0,
        0,
        ukm.mojom.UkmEntrySpec.$,
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    ukm.mojom.UkmRecorderInterface_UpdateSourceURL_ParamsSpec.$,
    'UkmRecorderInterface_UpdateSourceURL_Params',
    16,
    [
      mojo.internal.StructField(
        'sourceId', 0,
        0,
        mojo.internal.Int64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'url', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ]);



