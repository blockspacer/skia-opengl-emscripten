// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.



/** @enum {number} */
memoryInstrumentation.mojom.DumpType = {};
memoryInstrumentation.mojom.DumpType.PERIODIC_INTERVAL;
memoryInstrumentation.mojom.DumpType.EXPLICITLY_TRIGGERED;
memoryInstrumentation.mojom.DumpType.SUMMARY_ONLY;
/** @enum {number} */
memoryInstrumentation.mojom.LevelOfDetail = {};
memoryInstrumentation.mojom.LevelOfDetail.BACKGROUND;
memoryInstrumentation.mojom.LevelOfDetail.LIGHT;
memoryInstrumentation.mojom.LevelOfDetail.DETAILED;
/** @enum {number} */
memoryInstrumentation.mojom.ProcessType = {};
memoryInstrumentation.mojom.ProcessType.OTHER;
memoryInstrumentation.mojom.ProcessType.BROWSER;
memoryInstrumentation.mojom.ProcessType.RENDERER;
memoryInstrumentation.mojom.ProcessType.GPU;
memoryInstrumentation.mojom.ProcessType.UTILITY;
memoryInstrumentation.mojom.ProcessType.PLUGIN;
memoryInstrumentation.mojom.ProcessType.ARC;
/** @enum {number} */
memoryInstrumentation.mojom.MemoryMapOption = {};
memoryInstrumentation.mojom.MemoryMapOption.NONE;
memoryInstrumentation.mojom.MemoryMapOption.MODULES;
memoryInstrumentation.mojom.MemoryMapOption.FULL;
goog.provide('memoryInstrumentation.mojom.ClientProcess');
goog.provide('memoryInstrumentation.mojom.ClientProcessImpl');
goog.provide('memoryInstrumentation.mojom.ClientProcessPtr');



/**
 * @const
 * @type { !mojo.Interface };
 */
memoryInstrumentation.mojom.ClientProcess;

/** @interface */
memoryInstrumentation.mojom.ClientProcessImpl = class {
  /**
   * @param { !memoryInstrumentation.mojom.RequestArgs } args
   * @return {Promise}
   */
  requestChromeMemoryDump(args) {}
  /**
   * @param { !memoryInstrumentation.mojom.MemoryMapOption } option
   * @param { !Array<mojoBase.mojom.ProcessId> } pids
   * @return {Promise}
   */
  requestOSMemoryDump(option, pids) {}
};

/**
 * @implements { mojo.InterfacePtr }
 * @implements { memoryInstrumentation.mojom.ClientProcessImpl }
 */
memoryInstrumentation.mojom.ClientProcessPtr = class {
  /**
   * @param { !memoryInstrumentation.mojom.RequestArgs } args
   * @return {Promise}
   */
  requestChromeMemoryDump(args) {}
  /**
   * @param { !memoryInstrumentation.mojom.MemoryMapOption } option
   * @param { !Array<mojoBase.mojom.ProcessId> } pids
   * @return {Promise}
   */
  requestOSMemoryDump(option, pids) {}
};

goog.provide('memoryInstrumentation.mojom.HeapProfiler');
goog.provide('memoryInstrumentation.mojom.HeapProfilerImpl');
goog.provide('memoryInstrumentation.mojom.HeapProfilerPtr');



/**
 * @const
 * @type { !mojo.Interface };
 */
memoryInstrumentation.mojom.HeapProfiler;

/** @interface */
memoryInstrumentation.mojom.HeapProfilerImpl = class {
  /**
   * @param { !boolean } stripPathFromMappedFiles
   * @return {Promise}
   */
  dumpProcessesForTracing(stripPathFromMappedFiles) {}
};

/**
 * @implements { mojo.InterfacePtr }
 * @implements { memoryInstrumentation.mojom.HeapProfilerImpl }
 */
memoryInstrumentation.mojom.HeapProfilerPtr = class {
  /**
   * @param { !boolean } stripPathFromMappedFiles
   * @return {Promise}
   */
  dumpProcessesForTracing(stripPathFromMappedFiles) {}
};

goog.provide('memoryInstrumentation.mojom.HeapProfilerHelper');
goog.provide('memoryInstrumentation.mojom.HeapProfilerHelperImpl');
goog.provide('memoryInstrumentation.mojom.HeapProfilerHelperPtr');



/**
 * @const
 * @type { !mojo.Interface };
 */
memoryInstrumentation.mojom.HeapProfilerHelper;

/** @interface */
memoryInstrumentation.mojom.HeapProfilerHelperImpl = class {
  /**
   * @param { !Array<mojoBase.mojom.ProcessId> } pids
   * @return {Promise}
   */
  getVmRegionsForHeapProfiler(pids) {}
};

/**
 * @implements { mojo.InterfacePtr }
 * @implements { memoryInstrumentation.mojom.HeapProfilerHelperImpl }
 */
memoryInstrumentation.mojom.HeapProfilerHelperPtr = class {
  /**
   * @param { !Array<mojoBase.mojom.ProcessId> } pids
   * @return {Promise}
   */
  getVmRegionsForHeapProfiler(pids) {}
};

goog.provide('memoryInstrumentation.mojom.Coordinator');
goog.provide('memoryInstrumentation.mojom.CoordinatorImpl');
goog.provide('memoryInstrumentation.mojom.CoordinatorPtr');



/**
 * @const
 * @type { !mojo.Interface };
 */
memoryInstrumentation.mojom.Coordinator;

/** @interface */
memoryInstrumentation.mojom.CoordinatorImpl = class {
  /**
   * @param { !memoryInstrumentation.mojom.ClientProcessPtr } clientProcess
   * @param { !memoryInstrumentation.mojom.ProcessType } processType
   */
  registerClientProcess(clientProcess, processType) {}
  /**
   * @param { !memoryInstrumentation.mojom.DumpType } dumpType
   * @param { !memoryInstrumentation.mojom.LevelOfDetail } levelOfDetail
   * @param { !Array<string> } allocatorDumpNames
   * @return {Promise}
   */
  requestGlobalMemoryDump(dumpType, levelOfDetail, allocatorDumpNames) {}
  /**
   * @param { !mojoBase.mojom.ProcessId } pid
   * @param { !Array<string> } allocatorDumpNames
   * @return {Promise}
   */
  requestGlobalMemoryDumpForPid(pid, allocatorDumpNames) {}
  /**
   * @param { !mojoBase.mojom.ProcessId } pid
   * @return {Promise}
   */
  requestPrivateMemoryFootprint(pid) {}
  /**
   * @param { !memoryInstrumentation.mojom.DumpType } dumpType
   * @param { !memoryInstrumentation.mojom.LevelOfDetail } levelOfDetail
   * @return {Promise}
   */
  requestGlobalMemoryDumpAndAppendToTrace(dumpType, levelOfDetail) {}
  /**
   * @param { !memoryInstrumentation.mojom.HeapProfilerPtr } heapProfiler
   */
  registerHeapProfiler(heapProfiler) {}
};

/**
 * @implements { mojo.InterfacePtr }
 * @implements { memoryInstrumentation.mojom.CoordinatorImpl }
 */
memoryInstrumentation.mojom.CoordinatorPtr = class {
  /**
   * @param { !memoryInstrumentation.mojom.ClientProcessPtr } clientProcess
   * @param { !memoryInstrumentation.mojom.ProcessType } processType
   */
  registerClientProcess(clientProcess, processType) {}
  /**
   * @param { !memoryInstrumentation.mojom.DumpType } dumpType
   * @param { !memoryInstrumentation.mojom.LevelOfDetail } levelOfDetail
   * @param { !Array<string> } allocatorDumpNames
   * @return {Promise}
   */
  requestGlobalMemoryDump(dumpType, levelOfDetail, allocatorDumpNames) {}
  /**
   * @param { !mojoBase.mojom.ProcessId } pid
   * @param { !Array<string> } allocatorDumpNames
   * @return {Promise}
   */
  requestGlobalMemoryDumpForPid(pid, allocatorDumpNames) {}
  /**
   * @param { !mojoBase.mojom.ProcessId } pid
   * @return {Promise}
   */
  requestPrivateMemoryFootprint(pid) {}
  /**
   * @param { !memoryInstrumentation.mojom.DumpType } dumpType
   * @param { !memoryInstrumentation.mojom.LevelOfDetail } levelOfDetail
   * @return {Promise}
   */
  requestGlobalMemoryDumpAndAppendToTrace(dumpType, levelOfDetail) {}
  /**
   * @param { !memoryInstrumentation.mojom.HeapProfilerPtr } heapProfiler
   */
  registerHeapProfiler(heapProfiler) {}
};

goog.provide('memoryInstrumentation.mojom.RequestArgs');

memoryInstrumentation.mojom.RequestArgs = class {
  constructor() {
    /** @type { !number } */
    this.dumpGuid;
    /** @type { !memoryInstrumentation.mojom.DumpType } */
    this.dumpType;
    /** @type { !memoryInstrumentation.mojom.LevelOfDetail } */
    this.levelOfDetail;
  }
};

goog.provide('memoryInstrumentation.mojom.RawAllocatorDumpEdge');

memoryInstrumentation.mojom.RawAllocatorDumpEdge = class {
  constructor() {
    /** @type { !number } */
    this.sourceId;
    /** @type { !number } */
    this.targetId;
    /** @type { !number } */
    this.importance;
    /** @type { !boolean } */
    this.overridable;
  }
};

goog.provide('memoryInstrumentation.mojom.RawAllocatorDumpEntry');

memoryInstrumentation.mojom.RawAllocatorDumpEntry = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !string } */
    this.units;
    /** @type { !Object } */
    this.value;
  }
};

goog.provide('memoryInstrumentation.mojom.RawAllocatorDump');

memoryInstrumentation.mojom.RawAllocatorDump = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !string } */
    this.absoluteName;
    /** @type { !boolean } */
    this.weak;
    /** @type { !memoryInstrumentation.mojom.LevelOfDetail } */
    this.levelOfDetail;
    /** @type { !Array<memoryInstrumentation.mojom.RawAllocatorDumpEntry> } */
    this.entries;
  }
};

goog.provide('memoryInstrumentation.mojom.RawProcessMemoryDump');

memoryInstrumentation.mojom.RawProcessMemoryDump = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.LevelOfDetail } */
    this.levelOfDetail;
    /** @type { !Array<memoryInstrumentation.mojom.RawAllocatorDumpEdge> } */
    this.allocatorDumpEdges;
    /** @type { !Array<memoryInstrumentation.mojom.RawAllocatorDump> } */
    this.allocatorDumps;
  }
};

goog.provide('memoryInstrumentation.mojom.VmRegion');

memoryInstrumentation.mojom.VmRegion = class {
  constructor() {
    /** @type { !number } */
    this.startAddress;
    /** @type { !number } */
    this.sizeInBytes;
    /** @type { !number } */
    this.moduleTimestamp;
    /** @type { !string } */
    this.moduleDebugid;
    /** @type { !string } */
    this.moduleDebugPath;
    /** @type { !number } */
    this.protectionFlags;
    /** @type { !string } */
    this.mappedFile;
    /** @type { !number } */
    this.byteStatsPrivateDirtyResident;
    /** @type { !number } */
    this.byteStatsPrivateCleanResident;
    /** @type { !number } */
    this.byteStatsSharedDirtyResident;
    /** @type { !number } */
    this.byteStatsSharedCleanResident;
    /** @type { !number } */
    this.byteStatsSwapped;
    /** @type { !number } */
    this.byteStatsProportionalResident;
  }
};

goog.provide('memoryInstrumentation.mojom.PlatformPrivateFootprint');

memoryInstrumentation.mojom.PlatformPrivateFootprint = class {
  constructor() {
    /** @type { !number } */
    this.physFootprintBytes;
    /** @type { !number } */
    this.internalBytes;
    /** @type { !number } */
    this.compressedBytes;
    /** @type { !number } */
    this.rssAnonBytes;
    /** @type { !number } */
    this.vmSwapBytes;
    /** @type { !number } */
    this.privateBytes;
  }
};

goog.provide('memoryInstrumentation.mojom.RawOSMemDump');

memoryInstrumentation.mojom.RawOSMemDump = class {
  constructor() {
    /** @type { !number } */
    this.residentSetKb;
    /** @type { !number } */
    this.peakResidentSetKb;
    /** @type { !boolean } */
    this.isPeakRssResettable;
    /** @type { !memoryInstrumentation.mojom.PlatformPrivateFootprint } */
    this.platformPrivateFootprint;
    /** @type { !Array<memoryInstrumentation.mojom.VmRegion> } */
    this.memoryMaps;
    /** @type { !Array<number> } */
    this.nativeLibraryPagesBitmap;
  }
};

goog.provide('memoryInstrumentation.mojom.OSMemDump');

memoryInstrumentation.mojom.OSMemDump = class {
  constructor() {
    /** @type { !number } */
    this.residentSetKb;
    /** @type { !number } */
    this.peakResidentSetKb;
    /** @type { !boolean } */
    this.isPeakRssResettable;
    /** @type { !number } */
    this.privateFootprintKb;
    /** @type { !number } */
    this.sharedFootprintKb;
    /** @type { !number } */
    this.privateFootprintSwapKb;
  }
};

goog.provide('memoryInstrumentation.mojom.AllocatorMemDump');

memoryInstrumentation.mojom.AllocatorMemDump = class {
  constructor() {
    /** @type { !Map<string, number> } */
    this.numericEntries;
  }
};

goog.provide('memoryInstrumentation.mojom.ProcessMemoryDump');

memoryInstrumentation.mojom.ProcessMemoryDump = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.ProcessType } */
    this.processType;
    /** @type { !memoryInstrumentation.mojom.OSMemDump } */
    this.osDump;
    /** @type { !Map<string, memoryInstrumentation.mojom.AllocatorMemDump> } */
    this.chromeAllocatorDumps;
    /** @type { !mojoBase.mojom.ProcessId } */
    this.pid;
    /** @type { !Array<string> } */
    this.serviceNames;
  }
};

goog.provide('memoryInstrumentation.mojom.AggregatedMetrics');

memoryInstrumentation.mojom.AggregatedMetrics = class {
  constructor() {
    /** @type { !number } */
    this.nativeLibraryResidentKb;
  }
};

goog.provide('memoryInstrumentation.mojom.GlobalMemoryDump');

memoryInstrumentation.mojom.GlobalMemoryDump = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.startTime;
    /** @type { !Array<memoryInstrumentation.mojom.ProcessMemoryDump> } */
    this.processDumps;
    /** @type { !memoryInstrumentation.mojom.AggregatedMetrics } */
    this.aggregatedMetrics;
  }
};

goog.provide('memoryInstrumentation.mojom.HeapProfileResult');

memoryInstrumentation.mojom.HeapProfileResult = class {
  constructor() {
    /** @type { !mojoBase.mojom.ProcessId } */
    this.pid;
    /** @type { !mojoBase.mojom.BigString } */
    this.json;
  }
};

goog.provide('memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_Params');

memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_Params = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.RequestArgs } */
    this.args;
  }
};

goog.provide('memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_ResponseParams');

memoryInstrumentation.mojom.ClientProcess_RequestChromeMemoryDump_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !number } */
    this.dumpId;
    /** @type { memoryInstrumentation.mojom.RawProcessMemoryDump } */
    this.rawProcessMemoryDump;
  }
};

goog.provide('memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_Params');

memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_Params = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.MemoryMapOption } */
    this.option;
    /** @type { !Array<mojoBase.mojom.ProcessId> } */
    this.pids;
  }
};

goog.provide('memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_ResponseParams');

memoryInstrumentation.mojom.ClientProcess_RequestOSMemoryDump_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !Map<mojoBase.mojom.ProcessId, memoryInstrumentation.mojom.RawOSMemDump> } */
    this.dumps;
  }
};

goog.provide('memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_Params');

memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.stripPathFromMappedFiles;
  }
};

goog.provide('memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_ResponseParams');

memoryInstrumentation.mojom.HeapProfiler_DumpProcessesForTracing_ResponseParams = class {
  constructor() {
    /** @type { !Array<memoryInstrumentation.mojom.HeapProfileResult> } */
    this.results;
  }
};

goog.provide('memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params');

memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params = class {
  constructor() {
    /** @type { !Array<mojoBase.mojom.ProcessId> } */
    this.pids;
  }
};

goog.provide('memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams');

memoryInstrumentation.mojom.HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams = class {
  constructor() {
    /** @type { !Map<mojoBase.mojom.ProcessId, Array<memoryInstrumentation.mojom.VmRegion>> } */
    this.vmRegions;
  }
};

goog.provide('memoryInstrumentation.mojom.Coordinator_RegisterClientProcess_Params');

memoryInstrumentation.mojom.Coordinator_RegisterClientProcess_Params = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.ClientProcessPtr } */
    this.clientProcess;
    /** @type { !memoryInstrumentation.mojom.ProcessType } */
    this.processType;
  }
};

goog.provide('memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_Params');

memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_Params = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.DumpType } */
    this.dumpType;
    /** @type { !memoryInstrumentation.mojom.LevelOfDetail } */
    this.levelOfDetail;
    /** @type { !Array<string> } */
    this.allocatorDumpNames;
  }
};

goog.provide('memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_ResponseParams');

memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDump_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { memoryInstrumentation.mojom.GlobalMemoryDump } */
    this.globalMemoryDump;
  }
};

goog.provide('memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_Params');

memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.ProcessId } */
    this.pid;
    /** @type { !Array<string> } */
    this.allocatorDumpNames;
  }
};

goog.provide('memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams');

memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { memoryInstrumentation.mojom.GlobalMemoryDump } */
    this.globalMemoryDump;
  }
};

goog.provide('memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_Params');

memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.ProcessId } */
    this.pid;
  }
};

goog.provide('memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_ResponseParams');

memoryInstrumentation.mojom.Coordinator_RequestPrivateMemoryFootprint_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { memoryInstrumentation.mojom.GlobalMemoryDump } */
    this.globalMemoryDump;
  }
};

goog.provide('memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params');

memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.DumpType } */
    this.dumpType;
    /** @type { !memoryInstrumentation.mojom.LevelOfDetail } */
    this.levelOfDetail;
  }
};

goog.provide('memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams');

memoryInstrumentation.mojom.Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !number } */
    this.dumpId;
  }
};

goog.provide('memoryInstrumentation.mojom.Coordinator_RegisterHeapProfiler_Params');

memoryInstrumentation.mojom.Coordinator_RegisterHeapProfiler_Params = class {
  constructor() {
    /** @type { !memoryInstrumentation.mojom.HeapProfilerPtr } */
    this.heapProfiler;
  }
};
