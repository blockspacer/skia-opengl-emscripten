// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.



/** @enum {number} */
mojoBase.mojom.ApplicationState = {};
mojoBase.mojom.ApplicationState.UNKNOWN;
mojoBase.mojom.ApplicationState.HAS_RUNNING_ACTIVITIES;
mojoBase.mojom.ApplicationState.HAS_PAUSED_ACTIVITIES;
mojoBase.mojom.ApplicationState.HAS_STOPPED_ACTIVITIES;
mojoBase.mojom.ApplicationState.HAS_DESTROYED_ACTIVITIES;