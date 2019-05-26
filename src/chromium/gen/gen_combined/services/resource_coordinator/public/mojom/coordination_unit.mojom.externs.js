// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.



/** @enum {number} */
resourceCoordinator.mojom.CoordinationUnitType = {};
resourceCoordinator.mojom.CoordinationUnitType.kFrame;
resourceCoordinator.mojom.CoordinationUnitType.kPage;
resourceCoordinator.mojom.CoordinationUnitType.kProcess;
resourceCoordinator.mojom.CoordinationUnitType.kSystem;
/** @enum {number} */
resourceCoordinator.mojom.InterventionPolicy = {};
resourceCoordinator.mojom.InterventionPolicy.kUnknown;
resourceCoordinator.mojom.InterventionPolicy.kOptIn;
resourceCoordinator.mojom.InterventionPolicy.kOptOut;
resourceCoordinator.mojom.InterventionPolicy.kDefault;
/** @enum {number} */
resourceCoordinator.mojom.PolicyControlledIntervention = {};
resourceCoordinator.mojom.PolicyControlledIntervention.kPageLifecycleTransitions;
goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit');
goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnitImpl');
goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnitPtr');



/**
 * @const
 * @type { !mojo.Interface };
 */
resourceCoordinator.mojom.DocumentCoordinationUnit;

/** @interface */
resourceCoordinator.mojom.DocumentCoordinationUnitImpl = class {
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
 * @implements { mojo.InterfacePtr }
 * @implements { resourceCoordinator.mojom.DocumentCoordinationUnitImpl }
 */
resourceCoordinator.mojom.DocumentCoordinationUnitPtr = class {
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

goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnit');
goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnitImpl');
goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnitPtr');



/**
 * @const
 * @type { !mojo.Interface };
 */
resourceCoordinator.mojom.ProcessCoordinationUnit;

/** @interface */
resourceCoordinator.mojom.ProcessCoordinationUnitImpl = class {
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
 * @implements { mojo.InterfacePtr }
 * @implements { resourceCoordinator.mojom.ProcessCoordinationUnitImpl }
 */
resourceCoordinator.mojom.ProcessCoordinationUnitPtr = class {
  /**
   * @param { !mojoBase.mojom.TimeDelta } duration
   */
  setExpectedTaskQueueingDuration(duration) {}
  /**
   * @param { !boolean } mainThreadTaskLoadIsLow
   */
  setMainThreadTaskLoadIsLow(mainThreadTaskLoadIsLow) {}
};

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetNetworkAlmostIdle_Params');

resourceCoordinator.mojom.DocumentCoordinationUnit_SetNetworkAlmostIdle_Params = class {
  constructor() {
  }
};

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetLifecycleState_Params');

resourceCoordinator.mojom.DocumentCoordinationUnit_SetLifecycleState_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.LifecycleState } */
    this.state;
  }
};

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params');

resourceCoordinator.mojom.DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.hasNonemptyBeforeunload;
  }
};

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetInterventionPolicy_Params');

resourceCoordinator.mojom.DocumentCoordinationUnit_SetInterventionPolicy_Params = class {
  constructor() {
    /** @type { !resourceCoordinator.mojom.PolicyControlledIntervention } */
    this.intervention;
    /** @type { !resourceCoordinator.mojom.InterventionPolicy } */
    this.policy;
  }
};

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_SetIsAdFrame_Params');

resourceCoordinator.mojom.DocumentCoordinationUnit_SetIsAdFrame_Params = class {
  constructor() {
  }
};

goog.provide('resourceCoordinator.mojom.DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params');

resourceCoordinator.mojom.DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params = class {
  constructor() {
  }
};

goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params');

resourceCoordinator.mojom.ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.duration;
  }
};

goog.provide('resourceCoordinator.mojom.ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params');

resourceCoordinator.mojom.ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.mainThreadTaskLoadIsLow;
  }
};
