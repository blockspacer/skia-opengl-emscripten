// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('resourceCoordinator.mojom.LifecycleState');
goog.require('mojoBase.mojom.TimeDelta');




goog.provide('resourceCoordinator.mojom.CoordinationUnitType');
goog.provide('resourceCoordinator.mojom.CoordinationUnitTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
resourceCoordinator.mojom.CoordinationUnitTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
resourceCoordinator.mojom.CoordinationUnitType = {
  
  kFrame: 0,
  kPage: 0,
  kProcess: 0,
  kSystem: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};

/** @suppress {checkTypes} */
resourceCoordinator.mojom.CoordinationUnitType.kFrame = 0;

/** @suppress {checkTypes} */
resourceCoordinator.mojom.CoordinationUnitType.kPage = resourceCoordinator.mojom.CoordinationUnitType.kFrame + 1;

/** @suppress {checkTypes} */
resourceCoordinator.mojom.CoordinationUnitType.kProcess = resourceCoordinator.mojom.CoordinationUnitType.kPage + 1;

/** @suppress {checkTypes} */
resourceCoordinator.mojom.CoordinationUnitType.kSystem = resourceCoordinator.mojom.CoordinationUnitType.kProcess + 1;

goog.provide('resourceCoordinator.mojom.InterventionPolicy');
goog.provide('resourceCoordinator.mojom.InterventionPolicySpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
resourceCoordinator.mojom.InterventionPolicySpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
resourceCoordinator.mojom.InterventionPolicy = {
  
  kUnknown: 0,
  kOptIn: 0,
  kOptOut: 0,
  kDefault: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};

/** @suppress {checkTypes} */
resourceCoordinator.mojom.InterventionPolicy.kUnknown = 0;

/** @suppress {checkTypes} */
resourceCoordinator.mojom.InterventionPolicy.kOptIn = resourceCoordinator.mojom.InterventionPolicy.kUnknown + 1;

/** @suppress {checkTypes} */
resourceCoordinator.mojom.InterventionPolicy.kOptOut = resourceCoordinator.mojom.InterventionPolicy.kOptIn + 1;

/** @suppress {checkTypes} */
resourceCoordinator.mojom.InterventionPolicy.kDefault = resourceCoordinator.mojom.InterventionPolicy.kOptOut + 1;

goog.provide('resourceCoordinator.mojom.PolicyControlledIntervention');
goog.provide('resourceCoordinator.mojom.PolicyControlledInterventionSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
resourceCoordinator.mojom.PolicyControlledInterventionSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
resourceCoordinator.mojom.PolicyControlledIntervention = {
  
  kPageLifecycleTransitions: 0,
  MIN_VALUE: 0,
  MAX_VALUE: 0,
};

/** @suppress {checkTypes} */
resourceCoordinator.mojom.PolicyControlledIntervention.kPageLifecycleTransitions = 0;



goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit');
goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnitCallbackRouter');
goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnitInterface');
goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnitProxy');
goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnitRequest');


/** @export */
resourceCoordinator.mojom.DocumentCoordinationUnitRequest = class {
  /** @param {!MojoHandle} handle */
  constructor(handle) {
    /** @public {!MojoHandle} */
    this.handle = handle;
  }
};

/** @interface */
resourceCoordinator.mojom.DocumentCoordinationUnitInterface = class {
  
  /**
   */

  setNetworkAlmostIdle() {}
  
  /**
   * @param { !resourceCoordinator.mojom.LifecycleState } state
   */

  setLifecycleState(state) {}
  
  /**
   * @param { !boolean } hasNonemptyBeforeunload
   */

  setHasNonEmptyBeforeUnload(hasNonemptyBeforeunload) {}
  
  /**
   * @param { !resourceCoordinator.mojom.PolicyControlledIntervention } intervention
   * @param { !resourceCoordinator.mojom.InterventionPolicy } policy
   */

  setInterventionPolicy(intervention, policy) {}
  
  /**
   */

  setIsAdFrame() {}
  
  /**
   */

  onNonPersistentNotificationCreated() {}
};

/**
 * @export
 * @implements { resourceCoordinator.mojom.DocumentCoordinationUnitInterface }
 */
resourceCoordinator.mojom.DocumentCoordinationUnitProxy = class {
  /** @param {MojoHandle=} opt_handle */
  constructor(opt_handle) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceProxyBase<!resourceCoordinator.mojom.DocumentCoordinationUnitRequest>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceProxyBase(
          resourceCoordinator.mojom.DocumentCoordinationUnitRequest,
          opt_handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper<!resourceCoordinator.mojom.DocumentCoordinationUnitRequest>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   */

  setNetworkAlmostIdle() {
    this.proxy.sendMessage(
        779153566,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetNetworkAlmostIdle_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   * @param { !resourceCoordinator.mojom.LifecycleState } state
   */

  setLifecycleState(
      state) {
    this.proxy.sendMessage(
        900699292,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetLifecycleState_ParamsSpec.$,
        null,
        [
          state
        ]);
  }

  
  /**
   * @param { !boolean } hasNonemptyBeforeunload
   */

  setHasNonEmptyBeforeUnload(
      hasNonemptyBeforeunload) {
    this.proxy.sendMessage(
        724434959,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_ParamsSpec.$,
        null,
        [
          hasNonemptyBeforeunload
        ]);
  }

  
  /**
   * @param { !resourceCoordinator.mojom.PolicyControlledIntervention } intervention
   * @param { !resourceCoordinator.mojom.InterventionPolicy } policy
   */

  setInterventionPolicy(
      intervention,
      policy) {
    this.proxy.sendMessage(
        2027613163,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetInterventionPolicy_ParamsSpec.$,
        null,
        [
          intervention,
          policy
        ]);
  }

  
  /**
   */

  setIsAdFrame() {
    this.proxy.sendMessage(
        1397656912,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetIsAdFrame_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   */

  onNonPersistentNotificationCreated() {
    this.proxy.sendMessage(
        2053608518,
        resourceCoordinator.mojom.DocumentCoordinationUnit_OnNonPersistentNotificationCreated_ParamsSpec.$,
        null,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the DocumentCoordinationUnit
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
resourceCoordinator.mojom.DocumentCoordinationUnit = class {
  /**
   * @param {!resourceCoordinator.mojom.DocumentCoordinationUnitInterface } impl
   */
  constructor(impl) {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;

    this.target_.registerHandler(
        779153566,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetNetworkAlmostIdle_ParamsSpec.$,
        null,
        impl.setNetworkAlmostIdle.bind(impl));
    this.target_.registerHandler(
        900699292,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetLifecycleState_ParamsSpec.$,
        null,
        impl.setLifecycleState.bind(impl));
    this.target_.registerHandler(
        724434959,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_ParamsSpec.$,
        null,
        impl.setHasNonEmptyBeforeUnload.bind(impl));
    this.target_.registerHandler(
        2027613163,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetInterventionPolicy_ParamsSpec.$,
        null,
        impl.setInterventionPolicy.bind(impl));
    this.target_.registerHandler(
        1397656912,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetIsAdFrame_ParamsSpec.$,
        null,
        impl.setIsAdFrame.bind(impl));
    this.target_.registerHandler(
        2053608518,
        resourceCoordinator.mojom.DocumentCoordinationUnit_OnNonPersistentNotificationCreated_ParamsSpec.$,
        null,
        impl.onNonPersistentNotificationCreated.bind(impl));
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
   * @return {!resourceCoordinator.mojom.DocumentCoordinationUnitProxy}
   * @export
   */
  static getProxy() {
    let proxy = new resourceCoordinator.mojom.DocumentCoordinationUnitProxy;
    Mojo.bindInterface('resource_coordinator.mojom.DocumentCoordinationUnit',
                       proxy.$.createRequest().handle);
    return proxy;
  }

  /**
   * Returns a proxy for this interface which sends messages directly to this
   * object. Any number of proxies may be created to the same object.
   *
   * @return {!resourceCoordinator.mojom.DocumentCoordinationUnitProxy}
   * @export
   */
  createProxy() {
    let proxy = new resourceCoordinator.mojom.DocumentCoordinationUnitProxy;
    this.target_.bindHandle(proxy.$.createRequest().handle);
    return proxy;
  }
};


/**
 * @const {string}
 * @export
 */
resourceCoordinator.mojom.DocumentCoordinationUnit.$interfaceName =
    'resource_coordinator.mojom.DocumentCoordinationUnit';

/**
 * An object which receives request messages for the DocumentCoordinationUnit
 * mojom interface and dispatches them as callbacks. One callback target exists
 * on this object for each message defined in the mojom interface, and each
 * target can have any number of listeners added to it.
 *
 * @export
 */
resourceCoordinator.mojom.DocumentCoordinationUnitCallbackRouter = class {
  constructor() {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;
    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.setNetworkAlmostIdle =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        779153566,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetNetworkAlmostIdle_ParamsSpec.$,
        null,
        this.setNetworkAlmostIdle.createTargetHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.setLifecycleState =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        900699292,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetLifecycleState_ParamsSpec.$,
        null,
        this.setLifecycleState.createTargetHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.setHasNonEmptyBeforeUnload =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        724434959,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_ParamsSpec.$,
        null,
        this.setHasNonEmptyBeforeUnload.createTargetHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.setInterventionPolicy =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        2027613163,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetInterventionPolicy_ParamsSpec.$,
        null,
        this.setInterventionPolicy.createTargetHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.setIsAdFrame =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        1397656912,
        resourceCoordinator.mojom.DocumentCoordinationUnit_SetIsAdFrame_ParamsSpec.$,
        null,
        this.setIsAdFrame.createTargetHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.onNonPersistentNotificationCreated =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        2053608518,
        resourceCoordinator.mojom.DocumentCoordinationUnit_OnNonPersistentNotificationCreated_ParamsSpec.$,
        null,
        this.onNonPersistentNotificationCreated.createTargetHandler(false /* expectsResponse */));
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
   * @return {!resourceCoordinator.mojom.DocumentCoordinationUnitProxy}
   * @export
   */
  createProxy() {
    let proxy = new resourceCoordinator.mojom.DocumentCoordinationUnitProxy;
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


goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnit');
goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnitCallbackRouter');
goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnitInterface');
goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnitProxy');
goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnitRequest');


/** @export */
resourceCoordinator.mojom.ProcessCoordinationUnitRequest = class {
  /** @param {!MojoHandle} handle */
  constructor(handle) {
    /** @public {!MojoHandle} */
    this.handle = handle;
  }
};

/** @interface */
resourceCoordinator.mojom.ProcessCoordinationUnitInterface = class {
  
  /**
   * @param { !mojoBase.mojom.TimeDelta } duration
   */

  setExpectedTaskQueueingDuration(duration) {}
  
  /**
   * @param { !boolean } mainThreadTaskLoadIsLow
   */

  setMainThreadTaskLoadIsLow(mainThreadTaskLoadIsLow) {}
};

/**
 * @export
 * @implements { resourceCoordinator.mojom.ProcessCoordinationUnitInterface }
 */
resourceCoordinator.mojom.ProcessCoordinationUnitProxy = class {
  /** @param {MojoHandle=} opt_handle */
  constructor(opt_handle) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceProxyBase<!resourceCoordinator.mojom.ProcessCoordinationUnitRequest>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceProxyBase(
          resourceCoordinator.mojom.ProcessCoordinationUnitRequest,
          opt_handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper<!resourceCoordinator.mojom.ProcessCoordinationUnitRequest>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceProxyBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !mojoBase.mojom.TimeDelta } duration
   */

  setExpectedTaskQueueingDuration(
      duration) {
    this.proxy.sendMessage(
        1745180896,
        resourceCoordinator.mojom.ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsSpec.$,
        null,
        [
          duration
        ]);
  }

  
  /**
   * @param { !boolean } mainThreadTaskLoadIsLow
   */

  setMainThreadTaskLoadIsLow(
      mainThreadTaskLoadIsLow) {
    this.proxy.sendMessage(
        1046309033,
        resourceCoordinator.mojom.ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsSpec.$,
        null,
        [
          mainThreadTaskLoadIsLow
        ]);
  }
};

/**
 * An object which receives request messages for the ProcessCoordinationUnit
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
resourceCoordinator.mojom.ProcessCoordinationUnit = class {
  /**
   * @param {!resourceCoordinator.mojom.ProcessCoordinationUnitInterface } impl
   */
  constructor(impl) {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;

    this.target_.registerHandler(
        1745180896,
        resourceCoordinator.mojom.ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsSpec.$,
        null,
        impl.setExpectedTaskQueueingDuration.bind(impl));
    this.target_.registerHandler(
        1046309033,
        resourceCoordinator.mojom.ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsSpec.$,
        null,
        impl.setMainThreadTaskLoadIsLow.bind(impl));
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
   * @return {!resourceCoordinator.mojom.ProcessCoordinationUnitProxy}
   * @export
   */
  static getProxy() {
    let proxy = new resourceCoordinator.mojom.ProcessCoordinationUnitProxy;
    Mojo.bindInterface('resource_coordinator.mojom.ProcessCoordinationUnit',
                       proxy.$.createRequest().handle);
    return proxy;
  }

  /**
   * Returns a proxy for this interface which sends messages directly to this
   * object. Any number of proxies may be created to the same object.
   *
   * @return {!resourceCoordinator.mojom.ProcessCoordinationUnitProxy}
   * @export
   */
  createProxy() {
    let proxy = new resourceCoordinator.mojom.ProcessCoordinationUnitProxy;
    this.target_.bindHandle(proxy.$.createRequest().handle);
    return proxy;
  }
};


/**
 * @const {string}
 * @export
 */
resourceCoordinator.mojom.ProcessCoordinationUnit.$interfaceName =
    'resource_coordinator.mojom.ProcessCoordinationUnit';

/**
 * An object which receives request messages for the ProcessCoordinationUnit
 * mojom interface and dispatches them as callbacks. One callback target exists
 * on this object for each message defined in the mojom interface, and each
 * target can have any number of listeners added to it.
 *
 * @export
 */
resourceCoordinator.mojom.ProcessCoordinationUnitCallbackRouter = class {
  constructor() {
    this.target_ = new mojo.internal.interfaceSupport.InterfaceTarget;
    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.setExpectedTaskQueueingDuration =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        1745180896,
        resourceCoordinator.mojom.ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsSpec.$,
        null,
        this.setExpectedTaskQueueingDuration.createTargetHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackTarget}
     */
    this.setMainThreadTaskLoadIsLow =
        new mojo.internal.interfaceSupport.InterfaceCallbackTarget(
            this.router_);

    this.target_.registerHandler(
        1046309033,
        resourceCoordinator.mojom.ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsSpec.$,
        null,
        this.setMainThreadTaskLoadIsLow.createTargetHandler(false /* expectsResponse */));
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
   * @return {!resourceCoordinator.mojom.ProcessCoordinationUnitProxy}
   * @export
   */
  createProxy() {
    let proxy = new resourceCoordinator.mojom.ProcessCoordinationUnitProxy;
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


goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetNetworkAlmostIdle_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
resourceCoordinator.mojom.DocumentCoordinationUnit_SetNetworkAlmostIdle_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetLifecycleState_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
resourceCoordinator.mojom.DocumentCoordinationUnit_SetLifecycleState_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
resourceCoordinator.mojom.DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetInterventionPolicy_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
resourceCoordinator.mojom.DocumentCoordinationUnit_SetInterventionPolicy_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetIsAdFrame_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
resourceCoordinator.mojom.DocumentCoordinationUnit_SetIsAdFrame_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_OnNonPersistentNotificationCreated_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
resourceCoordinator.mojom.DocumentCoordinationUnit_OnNonPersistentNotificationCreated_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
resourceCoordinator.mojom.ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
resourceCoordinator.mojom.ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    resourceCoordinator.mojom.DocumentCoordinationUnit_SetNetworkAlmostIdle_ParamsSpec.$,
    'DocumentCoordinationUnit_SetNetworkAlmostIdle_Params',
    0,
    [
    ]);

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetNetworkAlmostIdle_Params');


/** @typedef {Object} */

resourceCoordinator.mojom.DocumentCoordinationUnit_SetNetworkAlmostIdle_Params;



mojo.internal.Struct(
    resourceCoordinator.mojom.DocumentCoordinationUnit_SetLifecycleState_ParamsSpec.$,
    'DocumentCoordinationUnit_SetLifecycleState_Params',
    8,
    [
      mojo.internal.StructField(
        'state', 0,
        0,
        resourceCoordinator.mojom.LifecycleStateSpec.$,
        0,
        false /* nullable */),
    ]);

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetLifecycleState_Params');


/**
 * @typedef { {
 *   state: !resourceCoordinator.mojom.LifecycleState,
 * } }
 */

resourceCoordinator.mojom.DocumentCoordinationUnit_SetLifecycleState_Params;



mojo.internal.Struct(
    resourceCoordinator.mojom.DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_ParamsSpec.$,
    'DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params',
    8,
    [
      mojo.internal.StructField(
        'hasNonemptyBeforeunload', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ]);

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params');


/**
 * @typedef { {
 *   hasNonemptyBeforeunload: !boolean,
 * } }
 */

resourceCoordinator.mojom.DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params;



mojo.internal.Struct(
    resourceCoordinator.mojom.DocumentCoordinationUnit_SetInterventionPolicy_ParamsSpec.$,
    'DocumentCoordinationUnit_SetInterventionPolicy_Params',
    8,
    [
      mojo.internal.StructField(
        'intervention', 0,
        0,
        resourceCoordinator.mojom.PolicyControlledInterventionSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'policy', 4,
        0,
        resourceCoordinator.mojom.InterventionPolicySpec.$,
        0,
        false /* nullable */),
    ]);

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetInterventionPolicy_Params');


/**
 * @typedef { {
 *   intervention: !resourceCoordinator.mojom.PolicyControlledIntervention,
 *   policy: !resourceCoordinator.mojom.InterventionPolicy,
 * } }
 */

resourceCoordinator.mojom.DocumentCoordinationUnit_SetInterventionPolicy_Params;



mojo.internal.Struct(
    resourceCoordinator.mojom.DocumentCoordinationUnit_SetIsAdFrame_ParamsSpec.$,
    'DocumentCoordinationUnit_SetIsAdFrame_Params',
    0,
    [
    ]);

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetIsAdFrame_Params');


/** @typedef {Object} */

resourceCoordinator.mojom.DocumentCoordinationUnit_SetIsAdFrame_Params;



mojo.internal.Struct(
    resourceCoordinator.mojom.DocumentCoordinationUnit_OnNonPersistentNotificationCreated_ParamsSpec.$,
    'DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params',
    0,
    [
    ]);

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params');


/** @typedef {Object} */

resourceCoordinator.mojom.DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params;



mojo.internal.Struct(
    resourceCoordinator.mojom.ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsSpec.$,
    'ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params',
    8,
    [
      mojo.internal.StructField(
        'duration', 0,
        0,
        mojoBase.mojom.TimeDeltaSpec.$,
        null,
        false /* nullable */),
    ]);

goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params');


/**
 * @typedef { {
 *   duration: !mojoBase.mojom.TimeDelta,
 * } }
 */

resourceCoordinator.mojom.ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params;



mojo.internal.Struct(
    resourceCoordinator.mojom.ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsSpec.$,
    'ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params',
    8,
    [
      mojo.internal.StructField(
        'mainThreadTaskLoadIsLow', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ]);

goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params');


/**
 * @typedef { {
 *   mainThreadTaskLoadIsLow: !boolean,
 * } }
 */

resourceCoordinator.mojom.ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params;

