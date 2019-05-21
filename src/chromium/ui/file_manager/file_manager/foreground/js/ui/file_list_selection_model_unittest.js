// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @type {!FileListSelectionModel} */
let selectionModel;

function setUp() {
  selectionModel = new FileListSelectionModel();
}

// Verify that all selection and focus is dropped if all selected files get
// deleted.
function testAdjustToReorderingAllAreDeleted() {
  // Set initial selection.
  selectionModel.selectedIndexes = [0, 1];
  // Delete the selected items.
  selectionModel.adjustToReordering([-1, -1, 0]);
  // Assert nothing is selected or in focus.
  assertArrayEquals([], selectionModel.selectedIndexes);
  assertFalse(selectionModel.getCheckSelectMode());
}

// Verify that all selection and focus is dropped only if all selected files get
// deleted.
function testAdjustToReorderingSomeAreDeleted() {
  // Set initial selection.
  selectionModel.selectedIndexes = [0, 1];
  // Delete the selected items.
  selectionModel.adjustToReordering([-1, 0, 1]);
  // Assert selection is not dropped.
  assertArrayEquals([0], selectionModel.selectedIndexes);
  assertTrue(selectionModel.getCheckSelectMode());
}
