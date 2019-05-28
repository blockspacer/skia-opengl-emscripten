// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('memoryInstrumentation.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
memoryInstrumentation.mojom.DumpTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
memoryInstrumentation.mojom.DumpType = {
  
  PERIODIC_INTERVAL: 0,
  EXPLICITLY_TRIGGERED: 0,
  SUMMARY_ONLY: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.DumpType.PERIODIC_INTERVAL = 0;

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.DumpType.EXPLICITLY_TRIGGERED = memoryInstrumentation.mojom.DumpType.PERIODIC_INTERVAL + 1;

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.DumpType.SUMMARY_ONLY = memoryInstrumentation.mojom.DumpType.EXPLICITLY_TRIGGERED + 1;


/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
memoryInstrumentation.mojom.LevelOfDetailSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
memoryInstrumentation.mojom.LevelOfDetail = {
  
  BACKGROUND: 0,
  LIGHT: 0,
  DETAILED: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.LevelOfDetail.BACKGROUND = 0;

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.LevelOfDetail.LIGHT = memoryInstrumentation.mojom.LevelOfDetail.BACKGROUND + 1;

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.LevelOfDetail.DETAILED = memoryInstrumentation.mojom.LevelOfDetail.LIGHT + 1;


/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
memoryInstrumentation.mojom.ProcessTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
memoryInstrumentation.mojom.ProcessType = {
  
  OTHER: 0,
  BROWSER: 0,
  RENDERER: 0,
  GPU: 0,
  UTILITY: 0,
  PLUGIN: 0,
  ARC: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 6,
};

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.ProcessType.OTHER = 0;

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.ProcessType.BROWSER = memoryInstrumentation.mojom.ProcessType.OTHER + 1;

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.ProcessType.RENDERER = memoryInstrumentation.mojom.ProcessType.BROWSER + 1;

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.ProcessType.GPU = memoryInstrumentation.mojom.ProcessType.RENDERER + 1;

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.ProcessType.UTILITY = memoryInstrumentation.mojom.ProcessType.GPU + 1;

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.ProcessType.PLUGIN = memoryInstrumentation.mojom.ProcessType.UTILITY + 1;

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.ProcessType.ARC = memoryInstrumentation.mojom.ProcessType.PLUGIN + 1;


/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
memoryInstrumentation.mojom.MemoryMapOptionSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
memoryInstrumentation.mojom.MemoryMapOption = {
  
  NONE: 0,
  MODULES: 0,
  FULL: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.MemoryMapOption.NONE = 0;

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.MemoryMapOption.MODULES = memoryInstrumentation.mojom.MemoryMapOption.NONE + 1;

/** @suppress {checkTypes} */
memoryInstrumentation.mojom.MemoryMapOption.FULL = memoryInstrumentation.mojom.MemoryMapOption.MODULES + 1;





/** @export */
memoryInstrumentation.mojom.ClientProcessRequest = class {
  /** @param {!MojoHandle} handle */
  constructor(handle) {
    /** @public {!MojoHandle} */
    this.handle = handle;
  }
};



/**
 * @export
 * @implements { memoryInstrumentation.mojom.ClientProcessInterface }
 */
memoryInstrumentation.mojom.ClientProcessProxy = class {
  /** @param {MojoHandle=} opt_handle */
  constructor(opt_handle) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceProxyBase<!memoryInstrumentation.mojom.ClientProcessRequest>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceProxyBase(
          memoryInstrumentation.mojom.ClientProcessRequest,
          opt_handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper<!memoryInstrumentation.mojom.ClientProcessRequest>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !memoryInstrumentation.mojom.RequestArgs } args
   * @return {Promise<{
        success: !boolean,
        dumpId: !number,
        rawProcessMemoryDump: ?memoryInstrumentation.mojom.RawProcessMemoryDump,
   *  }>}
   */

  requestChromeMemoryDump(
      args) {
    return this.proxy.sendMessage(
        1103987692,
        memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_ParamsSpec.$,
        memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_ResponseParamsSpec.$,
        [
          args
        ]);
  }

  
  /**
   * @param { !memoryInstrumentation.mojom.MemoryMapOption } option
   * @param { !Array<!mojoBase.mojom.ProcessId> } pids
   * @return {Promise<{
        success: !boolean,
        dumps: !Map<!mojoBase.mojom.ProcessId, !memoryInstrumentation.mojom.RawOSMemDump>,
   *  }>}
   */

  requestOSMemoryDump(
      option,
      pids) {
    return this.proxy.sendMessage(
        709517803,
        memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_ParamsSpec.$,
        memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_ResponseParamsSpec.$,
        [
          option,
          pids
        ]);
  }
};

/**
 * An object which receives request messages for the ClientProcess
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
memoryInstrumentation.mojom.ClientProcess = class {
  /**
   * @param {!memoryInstrumentation.mojom.ClientProcessInterface } impl
   */
  constructor(impl) {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;

    this.target_.registerHandler(
        1103987692,
        memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_ParamsSpec.$,
        memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_ResponseParamsSpec.$,
        impl.requestChromeMemoryDump.bind(impl));
    this.target_.registerHandler(
        709517803,
        memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_ParamsSpec.$,
        memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_ResponseParamsSpec.$,
        impl.requestOSMemoryDump.bind(impl));
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
   * @return {!memoryInstrumentation.mojom.ClientProcessProxy}
   * @export
   */
  static getProxy() {
    let proxy = new memoryInstrumentation.mojom.ClientProcessProxy;
    Mojo.bindInterface('memory_instrumentation.mojom.ClientProcess',
                       proxy.$.createRequest().handle);
    return proxy;
  }

  /**
   * Returns a proxy for this interface which sends messages directly to this
   * object. Any number of proxies may be created to the same object.
   *
   * @return {!memoryInstrumentation.mojom.ClientProcessProxy}
   * @export
   */
  createProxy() {
    let proxy = new memoryInstrumentation.mojom.ClientProcessProxy;
    this.target_.bindHandle(proxy.$.createRequest().handle);
    return proxy;
  }
};


/**
 * @const {string}
 * @export
 */
memoryInstrumentation.mojom.ClientProcess.$interfaceName =
    'memory_instrumentation.mojom.ClientProcess';

/**
 * An object which receives request messages for the ClientProcess
 * mojom interface and dispatches them as callbacks. One callback target exists
 * on this object for each message defined in the mojom interface, and each
 * target can have any number of listeners added to it.
 *
 * @export
 */
memoryInstrumentation.mojom.ClientProcessCallbackRouter = class {
  constructor() {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;
    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.requestChromeMemoryDump =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        1103987692,
        memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_ParamsSpec.$,
        memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_ResponseParamsSpec.$,
        this.requestChromeMemoryDump.createTargetHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.requestOSMemoryDump =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        709517803,
        memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_ParamsSpec.$,
        memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_ResponseParamsSpec.$,
        this.requestOSMemoryDump.createTargetHandler(true /* expectsResponse */));
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
   * @return {!memoryInstrumentation.mojom.ClientProcessProxy}
   * @export
   */
  createProxy() {
    let proxy = new memoryInstrumentation.mojom.ClientProcessProxy;
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




/** @export */
memoryInstrumentation.mojom.HeapProfilerRequest = class {
  /** @param {!MojoHandle} handle */
  constructor(handle) {
    /** @public {!MojoHandle} */
    this.handle = handle;
  }
};



/**
 * @export
 * @implements { memoryInstrumentation.mojom.HeapProfilerInterface }
 */
memoryInstrumentation.mojom.HeapProfilerProxy = class {
  /** @param {MojoHandle=} opt_handle */
  constructor(opt_handle) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceProxyBase<!memoryInstrumentation.mojom.HeapProfilerRequest>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceProxyBase(
          memoryInstrumentation.mojom.HeapProfilerRequest,
          opt_handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper<!memoryInstrumentation.mojom.HeapProfilerRequest>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !boolean } stripPathFromMappedFiles
   * @return {Promise<{
        results: !Array<!memoryInstrumentation.mojom.HeapProfileResult>,
   *  }>}
   */

  dumpProcessesForTracing(
      stripPathFromMappedFiles) {
    return this.proxy.sendMessage(
        1159309029,
        memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_ParamsSpec.$,
        memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_ResponseParamsSpec.$,
        [
          stripPathFromMappedFiles
        ]);
  }
};

/**
 * An object which receives request messages for the HeapProfiler
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
memoryInstrumentation.mojom.HeapProfiler = class {
  /**
   * @param {!memoryInstrumentation.mojom.HeapProfilerInterface } impl
   */
  constructor(impl) {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;

    this.target_.registerHandler(
        1159309029,
        memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_ParamsSpec.$,
        memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_ResponseParamsSpec.$,
        impl.dumpProcessesForTracing.bind(impl));
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
   * @return {!memoryInstrumentation.mojom.HeapProfilerProxy}
   * @export
   */
  static getProxy() {
    let proxy = new memoryInstrumentation.mojom.HeapProfilerProxy;
    Mojo.bindInterface('memory_instrumentation.mojom.HeapProfiler',
                       proxy.$.createRequest().handle);
    return proxy;
  }

  /**
   * Returns a proxy for this interface which sends messages directly to this
   * object. Any number of proxies may be created to the same object.
   *
   * @return {!memoryInstrumentation.mojom.HeapProfilerProxy}
   * @export
   */
  createProxy() {
    let proxy = new memoryInstrumentation.mojom.HeapProfilerProxy;
    this.target_.bindHandle(proxy.$.createRequest().handle);
    return proxy;
  }
};


/**
 * @const {string}
 * @export
 */
memoryInstrumentation.mojom.HeapProfiler.$interfaceName =
    'memory_instrumentation.mojom.HeapProfiler';

/**
 * An object which receives request messages for the HeapProfiler
 * mojom interface and dispatches them as callbacks. One callback target exists
 * on this object for each message defined in the mojom interface, and each
 * target can have any number of listeners added to it.
 *
 * @export
 */
memoryInstrumentation.mojom.HeapProfilerCallbackRouter = class {
  constructor() {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;
    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.dumpProcessesForTracing =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        1159309029,
        memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_ParamsSpec.$,
        memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_ResponseParamsSpec.$,
        this.dumpProcessesForTracing.createTargetHandler(true /* expectsResponse */));
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
   * @return {!memoryInstrumentation.mojom.HeapProfilerProxy}
   * @export
   */
  createProxy() {
    let proxy = new memoryInstrumentation.mojom.HeapProfilerProxy;
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




/** @export */
memoryInstrumentation.mojom.HeapProfilerHelperRequest = class {
  /** @param {!MojoHandle} handle */
  constructor(handle) {
    /** @public {!MojoHandle} */
    this.handle = handle;
  }
};



/**
 * @export
 * @implements { memoryInstrumentation.mojom.HeapProfilerHelperInterface }
 */
memoryInstrumentation.mojom.HeapProfilerHelperProxy = class {
  /** @param {MojoHandle=} opt_handle */
  constructor(opt_handle) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceProxyBase<!memoryInstrumentation.mojom.HeapProfilerHelperRequest>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceProxyBase(
          memoryInstrumentation.mojom.HeapProfilerHelperRequest,
          opt_handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper<!memoryInstrumentation.mojom.HeapProfilerHelperRequest>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !Array<!mojoBase.mojom.ProcessId> } pids
   * @return {Promise<{
        vmRegions: !Map<!mojoBase.mojom.ProcessId, !Array<!memoryInstrumentation.mojom.VmRegion>>,
   *  }>}
   */

  getVmRegionsForHeapProfiler(
      pids) {
    return this.proxy.sendMessage(
        477720517,
        memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsSpec.$,
        memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsSpec.$,
        [
          pids
        ]);
  }
};

/**
 * An object which receives request messages for the HeapProfilerHelper
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
memoryInstrumentation.mojom.HeapProfilerHelper = class {
  /**
   * @param {!memoryInstrumentation.mojom.HeapProfilerHelperInterface } impl
   */
  constructor(impl) {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;

    this.target_.registerHandler(
        477720517,
        memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsSpec.$,
        memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsSpec.$,
        impl.getVmRegionsForHeapProfiler.bind(impl));
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
   * @return {!memoryInstrumentation.mojom.HeapProfilerHelperProxy}
   * @export
   */
  static getProxy() {
    let proxy = new memoryInstrumentation.mojom.HeapProfilerHelperProxy;
    Mojo.bindInterface('memory_instrumentation.mojom.HeapProfilerHelper',
                       proxy.$.createRequest().handle);
    return proxy;
  }

  /**
   * Returns a proxy for this interface which sends messages directly to this
   * object. Any number of proxies may be created to the same object.
   *
   * @return {!memoryInstrumentation.mojom.HeapProfilerHelperProxy}
   * @export
   */
  createProxy() {
    let proxy = new memoryInstrumentation.mojom.HeapProfilerHelperProxy;
    this.target_.bindHandle(proxy.$.createRequest().handle);
    return proxy;
  }
};


/**
 * @const {string}
 * @export
 */
memoryInstrumentation.mojom.HeapProfilerHelper.$interfaceName =
    'memory_instrumentation.mojom.HeapProfilerHelper';

/**
 * An object which receives request messages for the HeapProfilerHelper
 * mojom interface and dispatches them as callbacks. One callback target exists
 * on this object for each message defined in the mojom interface, and each
 * target can have any number of listeners added to it.
 *
 * @export
 */
memoryInstrumentation.mojom.HeapProfilerHelperCallbackRouter = class {
  constructor() {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;
    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.getVmRegionsForHeapProfiler =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        477720517,
        memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsSpec.$,
        memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsSpec.$,
        this.getVmRegionsForHeapProfiler.createTargetHandler(true /* expectsResponse */));
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
   * @return {!memoryInstrumentation.mojom.HeapProfilerHelperProxy}
   * @export
   */
  createProxy() {
    let proxy = new memoryInstrumentation.mojom.HeapProfilerHelperProxy;
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




/** @export */
memoryInstrumentation.mojom.CoordinatorRequest = class {
  /** @param {!MojoHandle} handle */
  constructor(handle) {
    /** @public {!MojoHandle} */
    this.handle = handle;
  }
};



/**
 * @export
 * @implements { memoryInstrumentation.mojom.CoordinatorInterface }
 */
memoryInstrumentation.mojom.CoordinatorProxy = class {
  /** @param {MojoHandle=} opt_handle */
  constructor(opt_handle) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceProxyBase<!memoryInstrumentation.mojom.CoordinatorRequest>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceProxyBase(
          memoryInstrumentation.mojom.CoordinatorRequest,
          opt_handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper<!memoryInstrumentation.mojom.CoordinatorRequest>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !memoryInstrumentation.mojom.ClientProcessProxy } clientProcess
   * @param { !memoryInstrumentation.mojom.ProcessType } processType
   */

  registerClientProcess(
      clientProcess,
      processType) {
    this.proxy.sendMessage(
        1755927300,
        memoryInstrumentation.mojom.Coordinator_RegisterClientProcess_ParamsSpec.$,
        null,
        [
          clientProcess,
          processType
        ]);
  }

  
  /**
   * @param { !memoryInstrumentation.mojom.DumpType } dumpType
   * @param { !memoryInstrumentation.mojom.LevelOfDetail } levelOfDetail
   * @param { !Array<!string> } allocatorDumpNames
   * @return {Promise<{
        success: !boolean,
        globalMemoryDump: ?memoryInstrumentation.mojom.GlobalMemoryDump,
   *  }>}
   */

  requestGlobalMemoryDump(
      dumpType,
      levelOfDetail,
      allocatorDumpNames) {
    return this.proxy.sendMessage(
        1903602841,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_ParamsSpec.$,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_ResponseParamsSpec.$,
        [
          dumpType,
          levelOfDetail,
          allocatorDumpNames
        ]);
  }

  
  /**
   * @param { !mojoBase.mojom.ProcessId } pid
   * @param { !Array<!string> } allocatorDumpNames
   * @return {Promise<{
        success: !boolean,
        globalMemoryDump: ?memoryInstrumentation.mojom.GlobalMemoryDump,
   *  }>}
   */

  requestGlobalMemoryDumpForPid(
      pid,
      allocatorDumpNames) {
    return this.proxy.sendMessage(
        1467436387,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_ParamsSpec.$,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsSpec.$,
        [
          pid,
          allocatorDumpNames
        ]);
  }

  
  /**
   * @param { !mojoBase.mojom.ProcessId } pid
   * @return {Promise<{
        success: !boolean,
        globalMemoryDump: ?memoryInstrumentation.mojom.GlobalMemoryDump,
   *  }>}
   */

  requestPrivateMemoryFootprint(
      pid) {
    return this.proxy.sendMessage(
        1351796908,
        memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_ParamsSpec.$,
        memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_ResponseParamsSpec.$,
        [
          pid
        ]);
  }

  
  /**
   * @param { !memoryInstrumentation.mojom.DumpType } dumpType
   * @param { !memoryInstrumentation.mojom.LevelOfDetail } levelOfDetail
   * @return {Promise<{
        success: !boolean,
        dumpId: !number,
   *  }>}
   */

  requestGlobalMemoryDumpAndAppendToTrace(
      dumpType,
      levelOfDetail) {
    return this.proxy.sendMessage(
        1895760151,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ParamsSpec.$,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParamsSpec.$,
        [
          dumpType,
          levelOfDetail
        ]);
  }

  
  /**
   * @param { !memoryInstrumentation.mojom.HeapProfilerProxy } heapProfiler
   */

  registerHeapProfiler(
      heapProfiler) {
    this.proxy.sendMessage(
        1746776072,
        memoryInstrumentation.mojom.Coordinator_RegisterHeapProfiler_ParamsSpec.$,
        null,
        [
          heapProfiler
        ]);
  }
};

/**
 * An object which receives request messages for the Coordinator
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
memoryInstrumentation.mojom.Coordinator = class {
  /**
   * @param {!memoryInstrumentation.mojom.CoordinatorInterface } impl
   */
  constructor(impl) {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;

    this.target_.registerHandler(
        1755927300,
        memoryInstrumentation.mojom.Coordinator_RegisterClientProcess_ParamsSpec.$,
        null,
        impl.registerClientProcess.bind(impl));
    this.target_.registerHandler(
        1903602841,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_ParamsSpec.$,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_ResponseParamsSpec.$,
        impl.requestGlobalMemoryDump.bind(impl));
    this.target_.registerHandler(
        1467436387,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_ParamsSpec.$,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsSpec.$,
        impl.requestGlobalMemoryDumpForPid.bind(impl));
    this.target_.registerHandler(
        1351796908,
        memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_ParamsSpec.$,
        memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_ResponseParamsSpec.$,
        impl.requestPrivateMemoryFootprint.bind(impl));
    this.target_.registerHandler(
        1895760151,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ParamsSpec.$,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParamsSpec.$,
        impl.requestGlobalMemoryDumpAndAppendToTrace.bind(impl));
    this.target_.registerHandler(
        1746776072,
        memoryInstrumentation.mojom.Coordinator_RegisterHeapProfiler_ParamsSpec.$,
        null,
        impl.registerHeapProfiler.bind(impl));
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
   * @return {!memoryInstrumentation.mojom.CoordinatorProxy}
   * @export
   */
  static getProxy() {
    let proxy = new memoryInstrumentation.mojom.CoordinatorProxy;
    Mojo.bindInterface('memory_instrumentation.mojom.Coordinator',
                       proxy.$.createRequest().handle);
    return proxy;
  }

  /**
   * Returns a proxy for this interface which sends messages directly to this
   * object. Any number of proxies may be created to the same object.
   *
   * @return {!memoryInstrumentation.mojom.CoordinatorProxy}
   * @export
   */
  createProxy() {
    let proxy = new memoryInstrumentation.mojom.CoordinatorProxy;
    this.target_.bindHandle(proxy.$.createRequest().handle);
    return proxy;
  }
};


/**
 * @const {string}
 * @export
 */
memoryInstrumentation.mojom.Coordinator.$interfaceName =
    'memory_instrumentation.mojom.Coordinator';

/**
 * An object which receives request messages for the Coordinator
 * mojom interface and dispatches them as callbacks. One callback target exists
 * on this object for each message defined in the mojom interface, and each
 * target can have any number of listeners added to it.
 *
 * @export
 */
memoryInstrumentation.mojom.CoordinatorCallbackRouter = class {
  constructor() {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;
    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.registerClientProcess =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        1755927300,
        memoryInstrumentation.mojom.Coordinator_RegisterClientProcess_ParamsSpec.$,
        null,
        this.registerClientProcess.createTargetHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.requestGlobalMemoryDump =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        1903602841,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_ParamsSpec.$,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_ResponseParamsSpec.$,
        this.requestGlobalMemoryDump.createTargetHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.requestGlobalMemoryDumpForPid =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        1467436387,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_ParamsSpec.$,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsSpec.$,
        this.requestGlobalMemoryDumpForPid.createTargetHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.requestPrivateMemoryFootprint =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        1351796908,
        memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_ParamsSpec.$,
        memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_ResponseParamsSpec.$,
        this.requestPrivateMemoryFootprint.createTargetHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.requestGlobalMemoryDumpAndAppendToTrace =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        1895760151,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ParamsSpec.$,
        memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParamsSpec.$,
        this.requestGlobalMemoryDumpAndAppendToTrace.createTargetHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.registerHeapProfiler =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        1746776072,
        memoryInstrumentation.mojom.Coordinator_RegisterHeapProfiler_ParamsSpec.$,
        null,
        this.registerHeapProfiler.createTargetHandler(false /* expectsResponse */));
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
   * @return {!memoryInstrumentation.mojom.CoordinatorProxy}
   * @export
   */
  createProxy() {
    let proxy = new memoryInstrumentation.mojom.CoordinatorProxy;
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
memoryInstrumentation.mojom.RequestArgsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.RawAllocatorDumpEdgeSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.RawAllocatorDumpEntrySpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.RawAllocatorDumpSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.RawProcessMemoryDumpSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.VmRegionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.PlatformPrivateFootprintSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.RawOSMemDumpSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.OSMemDumpSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.AllocatorMemDumpSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.ProcessMemoryDumpSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.AggregatedMetricsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.GlobalMemoryDumpSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.HeapProfileResultSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.Coordinator_RegisterClientProcess_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
memoryInstrumentation.mojom.Coordinator_RegisterHeapProfiler_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType} }
 * @export
 */
memoryInstrumentation.mojom.RawAllocatorDumpEntryValueSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    memoryInstrumentation.mojom.RequestArgsSpec.$,
    'RequestArgs',
    16,
    [
      mojo.internal.StructField(
        'dumpGuid', 0,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'dumpType', 8,
        0,
        memoryInstrumentation.mojom.DumpTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'levelOfDetail', 12,
        0,
        memoryInstrumentation.mojom.LevelOfDetailSpec.$,
        0,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.RawAllocatorDumpEdgeSpec.$,
    'RawAllocatorDumpEdge',
    24,
    [
      mojo.internal.StructField(
        'sourceId', 0,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'targetId', 8,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'importance', 16,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'overridable', 20,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.RawAllocatorDumpEntrySpec.$,
    'RawAllocatorDumpEntry',
    32,
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'units', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'value', 16,
        0,
        memoryInstrumentation.mojom.RawAllocatorDumpEntryValueSpec.$,
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.RawAllocatorDumpSpec.$,
    'RawAllocatorDump',
    32,
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'absoluteName', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'weak', 16,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'levelOfDetail', 20,
        0,
        memoryInstrumentation.mojom.LevelOfDetailSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'entries', 24,
        0,
        mojo.internal.Array(memoryInstrumentation.mojom.RawAllocatorDumpEntrySpec.$, false),
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.RawProcessMemoryDumpSpec.$,
    'RawProcessMemoryDump',
    24,
    [
      mojo.internal.StructField(
        'levelOfDetail', 0,
        0,
        memoryInstrumentation.mojom.LevelOfDetailSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'allocatorDumpEdges', 8,
        0,
        mojo.internal.Array(memoryInstrumentation.mojom.RawAllocatorDumpEdgeSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'allocatorDumps', 16,
        0,
        mojo.internal.Array(memoryInstrumentation.mojom.RawAllocatorDumpSpec.$, false),
        null,
        false /* nullable */),
    ]);



/**
 * @const { !number }
 * @export
 */
memoryInstrumentation.mojom.VmRegion_kProtectionFlagsRead =
    4;

/**
 * @const { !number }
 * @export
 */
memoryInstrumentation.mojom.VmRegion_kProtectionFlagsWrite =
    2;

/**
 * @const { !number }
 * @export
 */
memoryInstrumentation.mojom.VmRegion_kProtectionFlagsExec =
    1;

/**
 * @const { !number }
 * @export
 */
memoryInstrumentation.mojom.VmRegion_kProtectionFlagsMayshare =
    128;



mojo.internal.Struct(
    memoryInstrumentation.mojom.VmRegionSpec.$,
    'VmRegion',
    104,
    [
      mojo.internal.StructField(
        'startAddress', 0,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'sizeInBytes', 8,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'moduleTimestamp', 16,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'moduleDebugid', 24,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'moduleDebugPath', 32,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'protectionFlags', 40,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'mappedFile', 48,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'byteStatsPrivateDirtyResident', 56,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'byteStatsPrivateCleanResident', 64,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'byteStatsSharedDirtyResident', 72,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'byteStatsSharedCleanResident', 80,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'byteStatsSwapped', 88,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'byteStatsProportionalResident', 96,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.PlatformPrivateFootprintSpec.$,
    'PlatformPrivateFootprint',
    48,
    [
      mojo.internal.StructField(
        'physFootprintBytes', 0,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'internalBytes', 8,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'compressedBytes', 16,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'rssAnonBytes', 24,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'vmSwapBytes', 32,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'privateBytes', 40,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.RawOSMemDumpSpec.$,
    'RawOSMemDump',
    40,
    [
      mojo.internal.StructField(
        'residentSetKb', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'peakResidentSetKb', 4,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'isPeakRssResettable', 8,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'platformPrivateFootprint', 16,
        0,
        memoryInstrumentation.mojom.PlatformPrivateFootprintSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'memoryMaps', 24,
        0,
        mojo.internal.Array(memoryInstrumentation.mojom.VmRegionSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'nativeLibraryPagesBitmap', 32,
        0,
        mojo.internal.Array(mojo.internal.Uint8, false),
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.OSMemDumpSpec.$,
    'OSMemDump',
    24,
    [
      mojo.internal.StructField(
        'residentSetKb', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'peakResidentSetKb', 4,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'isPeakRssResettable', 8,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'privateFootprintKb', 12,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'sharedFootprintKb', 16,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'privateFootprintSwapKb', 20,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.AllocatorMemDumpSpec.$,
    'AllocatorMemDump',
    8,
    [
      mojo.internal.StructField(
        'numericEntries', 0,
        0,
        mojo.internal.Map(mojo.internal.String, mojo.internal.Uint64, false),
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.ProcessMemoryDumpSpec.$,
    'ProcessMemoryDump',
    40,
    [
      mojo.internal.StructField(
        'processType', 0,
        0,
        memoryInstrumentation.mojom.ProcessTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'osDump', 8,
        0,
        memoryInstrumentation.mojom.OSMemDumpSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'chromeAllocatorDumps', 16,
        0,
        mojo.internal.Map(mojo.internal.String, memoryInstrumentation.mojom.AllocatorMemDumpSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'pid', 24,
        0,
        mojoBase.mojom.ProcessIdSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'serviceNames', 32,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.AggregatedMetricsSpec.$,
    'AggregatedMetrics',
    8,
    [
      mojo.internal.StructField(
        'nativeLibraryResidentKb', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.GlobalMemoryDumpSpec.$,
    'GlobalMemoryDump',
    24,
    [
      mojo.internal.StructField(
        'startTime', 0,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'processDumps', 8,
        0,
        mojo.internal.Array(memoryInstrumentation.mojom.ProcessMemoryDumpSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'aggregatedMetrics', 16,
        0,
        memoryInstrumentation.mojom.AggregatedMetricsSpec.$,
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.HeapProfileResultSpec.$,
    'HeapProfileResult',
    16,
    [
      mojo.internal.StructField(
        'pid', 0,
        0,
        mojoBase.mojom.ProcessIdSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'json', 8,
        0,
        mojoBase.mojom.BigStringSpec.$,
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_ParamsSpec.$,
    'ClientProcess_RequestChromeMemoryDump_Params',
    8,
    [
      mojo.internal.StructField(
        'args', 0,
        0,
        memoryInstrumentation.mojom.RequestArgsSpec.$,
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_ResponseParamsSpec.$,
    'ClientProcess_RequestChromeMemoryDump_ResponseParams',
    24,
    [
      mojo.internal.StructField(
        'success', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'dumpId', 8,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'rawProcessMemoryDump', 16,
        0,
        memoryInstrumentation.mojom.RawProcessMemoryDumpSpec.$,
        null,
        true /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_ParamsSpec.$,
    'ClientProcess_RequestOSMemoryDump_Params',
    16,
    [
      mojo.internal.StructField(
        'option', 0,
        0,
        memoryInstrumentation.mojom.MemoryMapOptionSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'pids', 8,
        0,
        mojo.internal.Array(mojoBase.mojom.ProcessIdSpec.$, false),
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_ResponseParamsSpec.$,
    'ClientProcess_RequestOSMemoryDump_ResponseParams',
    16,
    [
      mojo.internal.StructField(
        'success', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'dumps', 8,
        0,
        mojo.internal.Map(mojoBase.mojom.ProcessIdSpec.$, memoryInstrumentation.mojom.RawOSMemDumpSpec.$, false),
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_ParamsSpec.$,
    'HeapProfiler_DumpProcessesForTracing_Params',
    8,
    [
      mojo.internal.StructField(
        'stripPathFromMappedFiles', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_ResponseParamsSpec.$,
    'HeapProfiler_DumpProcessesForTracing_ResponseParams',
    8,
    [
      mojo.internal.StructField(
        'results', 0,
        0,
        mojo.internal.Array(memoryInstrumentation.mojom.HeapProfileResultSpec.$, false),
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsSpec.$,
    'HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params',
    8,
    [
      mojo.internal.StructField(
        'pids', 0,
        0,
        mojo.internal.Array(mojoBase.mojom.ProcessIdSpec.$, false),
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsSpec.$,
    'HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams',
    8,
    [
      mojo.internal.StructField(
        'vmRegions', 0,
        0,
        mojo.internal.Map(mojoBase.mojom.ProcessIdSpec.$, mojo.internal.Array(memoryInstrumentation.mojom.VmRegionSpec.$, false), false),
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.Coordinator_RegisterClientProcess_ParamsSpec.$,
    'Coordinator_RegisterClientProcess_Params',
    16,
    [
      mojo.internal.StructField(
        'clientProcess', 0,
        0,
        mojo.internal.InterfaceProxy(memoryInstrumentation.mojom.ClientProcessProxy),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'processType', 8,
        0,
        memoryInstrumentation.mojom.ProcessTypeSpec.$,
        0,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_ParamsSpec.$,
    'Coordinator_RequestGlobalMemoryDump_Params',
    16,
    [
      mojo.internal.StructField(
        'dumpType', 0,
        0,
        memoryInstrumentation.mojom.DumpTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'levelOfDetail', 4,
        0,
        memoryInstrumentation.mojom.LevelOfDetailSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'allocatorDumpNames', 8,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_ResponseParamsSpec.$,
    'Coordinator_RequestGlobalMemoryDump_ResponseParams',
    16,
    [
      mojo.internal.StructField(
        'success', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'globalMemoryDump', 8,
        0,
        memoryInstrumentation.mojom.GlobalMemoryDumpSpec.$,
        null,
        true /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_ParamsSpec.$,
    'Coordinator_RequestGlobalMemoryDumpForPid_Params',
    16,
    [
      mojo.internal.StructField(
        'pid', 0,
        0,
        mojoBase.mojom.ProcessIdSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'allocatorDumpNames', 8,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsSpec.$,
    'Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams',
    16,
    [
      mojo.internal.StructField(
        'success', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'globalMemoryDump', 8,
        0,
        memoryInstrumentation.mojom.GlobalMemoryDumpSpec.$,
        null,
        true /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_ParamsSpec.$,
    'Coordinator_RequestPrivateMemoryFootprint_Params',
    8,
    [
      mojo.internal.StructField(
        'pid', 0,
        0,
        mojoBase.mojom.ProcessIdSpec.$,
        null,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_ResponseParamsSpec.$,
    'Coordinator_RequestPrivateMemoryFootprint_ResponseParams',
    16,
    [
      mojo.internal.StructField(
        'success', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'globalMemoryDump', 8,
        0,
        memoryInstrumentation.mojom.GlobalMemoryDumpSpec.$,
        null,
        true /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ParamsSpec.$,
    'Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params',
    8,
    [
      mojo.internal.StructField(
        'dumpType', 0,
        0,
        memoryInstrumentation.mojom.DumpTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'levelOfDetail', 4,
        0,
        memoryInstrumentation.mojom.LevelOfDetailSpec.$,
        0,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParamsSpec.$,
    'Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams',
    16,
    [
      mojo.internal.StructField(
        'success', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'dumpId', 8,
        0,
        mojo.internal.Uint64,
        0,
        false /* nullable */),
    ]);





mojo.internal.Struct(
    memoryInstrumentation.mojom.Coordinator_RegisterHeapProfiler_ParamsSpec.$,
    'Coordinator_RegisterHeapProfiler_Params',
    8,
    [
      mojo.internal.StructField(
        'heapProfiler', 0,
        0,
        mojo.internal.InterfaceProxy(memoryInstrumentation.mojom.HeapProfilerProxy),
        null,
        false /* nullable */),
    ]);





mojo.internal.Union(
    memoryInstrumentation.mojom.RawAllocatorDumpEntryValueSpec.$, 'RawAllocatorDumpEntryValue',
    {
      'valueUint64': {
        'ordinal': 0,
        'type': mojo.internal.Uint64,
      },
      'valueString': {
        'ordinal': 1,
        'type': mojo.internal.String,
      },
    });

/**
 * @typedef { {
 *   valueUint64: (!number|undefined),
 *   valueString: (!string|undefined),
 * } }
 */
memoryInstrumentation.mojom.RawAllocatorDumpEntryValue;
