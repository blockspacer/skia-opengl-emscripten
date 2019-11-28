// Copyright 2019 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Module Overview: User Interface Navigation module
//
// API to allow applications to take advantage of the platform's native UI
// engine. This is mainly to drive the animation of visual elements and to
// signal which of those elements have focus. The implementation should not
// render any visual elements; instead, it will be used to guide the app in
// where these elements should be drawn.
//
// When the application creates the user interface, it will create SbUiNavItems
// for interactable elements. Additionally, the app must specify the position
// and size of these navigation items. As the app's user interface changes, it
// will create and destroy navigation items as appropriate.
//
// For each render frame, the app will query the local transform for each
// SbUiNavItem in case the native UI engine moves individual items in response
// to user interaction. If the navigation item is a container, then the content
// offset will also be queried to determine the placement of its content items.

#ifndef STARBOARD_UI_NAVIGATION_H_
#define STARBOARD_UI_NAVIGATION_H_

#include "starboard/configuration.h"
#include "starboard/export.h"
#include "starboard/types.h"
#include "starboard/window.h"

#if SB_API_VERSION >= SB_UI_NAVIGATION_VERSION

#ifdef __cplusplus
extern "C" {
#endif

// --- Types -----------------------------------------------------------------

// An opaque handle to an implementation-private structure representing a
// navigation item.
typedef struct SbUiNavItemPrivate* SbUiNavItem;

// Navigation items may be one of the following types. This must be specified
// upon item creation and may not change during the item's lifespan.
typedef enum SbUiNavItemType {
  // This is a single focusable item.
  kSbUiNavItemTypeFocus,

  // This is a container of navigation items which can also be containers
  // themselves or focusable items. Containers themselves cannot be focused.
  kSbUiNavItemTypeContainer,
} SbUiNavItemType;

// This represents a 2x3 transform matrix in row-major order.
//   | a b tx |
//   | c d ty |
typedef struct SbUiNavMatrix2x3 {
  float m[6];
} SbUiNavMatrix2x3;

// This represents a 4x4 transform matrix in row-major order.
typedef struct SbUiNavMatrix4 {
  float m[16];
} SbUiNavMatrix4;

// This structure specifies all the callbacks which the platform UI engine
// should invoke for various interaction events on navigation items. These
// callbacks may be invoked from any thread at any frequency. The
// |callback_context| is the value that was passed on creation of the
// relevant SbUiNavItem.
typedef struct SbUiNavCallbacks {
  // Invoke when an item has lost focus. This is only used with focus items.
  void (*onblur)(SbUiNavItem item, void* callback_context);

  // Invoke when an item has gained focus. This is only used with focus items.
  void (*onfocus)(SbUiNavItem item, void* callback_context);

  // Invoke when an item's content offset is changed. This is only used with
  // container items.
  void (*onscroll)(SbUiNavItem item, void* callback_context);
} SbUiNavCallbacks;

// This structure declares the interface to the UI navigation implementation.
// All function pointers must be specified if the platform supports UI
// navigation.
typedef struct SbUiNavInterface {
  // Create a new navigation item. When the user interacts with this item
  // the appropriate SbUiNavCallbacks function will be invoked with the
  // provided |callback_context|. An item is not interactable until it is
  // enabled.
  SbUiNavItem (*create_item)(SbUiNavItemType type,
                             const SbUiNavCallbacks* callbacks,
                             void* callback_context);

  // Destroy the given navigation item. If this is a content of another item,
  // then it will first be unregistered. Additionally, if this item contains
  // other items, then those will be unregistered as well, but they will not
  // be automatically destroyed.
  void (*destroy_item)(SbUiNavItem item);

  // This is used to manually force focus on a navigation item of type
  // kSbUiNavItemTypeFocus. Any previously focused navigation item should
  // receive the blur event. If the item is not transitively a content of the
  // root item, then this does nothing.
  void (*set_focus)(SbUiNavItem item);

  // This is used to enable or disable user interaction with the specified
  // navigation item. All navigation items are disabled when created, and
  // they must be explicitly enabled to allow user interaction. If a container
  // is disabled, then all of its contents are not interactable even though
  // they remain enabled. If |enabled| is false, it must be guaranteed that
  // once this function returns, no callbacks associated with this item will
  // be invoked until the item is re-enabled.
  void (*set_item_enabled)(SbUiNavItem item, bool enabled);

  // Set the interactable size of the specified navigation item. By default,
  // an item's size is (0,0).
  void (*set_item_size)(SbUiNavItem item, float width, float height);

  // Set the transform for the navigation item and its contents if the item is
  // a container. This specifies the placement of the item's center within its
  // container. The transform origin is the center of the item. Distance is
  // measured in pixels with the origin being the top-left of the item's
  // container. By default, an item's transform is identity.
  void (*set_item_transform)(SbUiNavItem item,
                             const SbUiNavMatrix2x3* transform);

  // Retrieve the focus transform matrix for the navigation item. The UI
  // engine may translate, rotate, and/or tilt focus items to reflect user
  // interaction. This transform should be multiplied with the item's transform
  // to get its position inside its container. The transform origin is the
  // center of the item. Return false if the item position should not be
  // changed (i.e. the transform should be treated as identity).
  bool (*get_item_focus_transform)(SbUiNavItem item,
                                   SbUiNavMatrix4* out_transform);

  // Retrieve a vector representing the focus location within a focused item.
  // This is used to provide feedback about user input that is too small to
  // result in a focus change. If there is no focus vector for the navigation
  // item, then return false and leave |out_x| and |out_y| unchanged. Otherwise,
  // return true and set the output values in the range of [-1, +1] with
  // (out_x, out_y) of (-1, -1) being the top-left corner of the navigation
  // item and (0, 0) being the center.
  bool (*get_item_focus_vector)(SbUiNavItem item, float* out_x, float* out_y);

  // This attaches the given navigation item (which must be a container) to
  // the specified window. Navigation items are only interactable if they are
  // transitively attached to a window.
  //
  // A navigation item may only have a SbUiNavItem or SbWindow as its direct
  // container. The navigation item hierarchy is established using
  // set_item_container_item() with the root container attached to a SbWindow
  // using set_item_container_window() to enable interaction with all enabled
  // items in the hierarchy.
  //
  // If |item| is already registered with a different window, then this will
  // unregister it from that window then attach it to the given |window|. It
  // is an error to register more than one navigation item with any given
  // window. If |window| is kSbWindowInvalid, then this will unregister the
  // |item| from its current window if any. Upon destruction of |item| or
  // |window|, the |item| is automatically unregistered from the |window|.
  void (*set_item_container_window)(SbUiNavItem item, SbWindow window);

  // A container navigation item may contain other navigation items. However,
  // it is an error to have circular containment or for |container| to not
  // be of type kSbUiNavItemTypeContainer. If |item| already has a different
  // container, then this first severs that connection. If |container| is
  // kSbUiNavItemInvalid, then this removes |item| from its current container.
  // Upon destruction of |item| or |container|, the |item| is automatically
  // removed from the |container|.
  //
  // The position of items within a container are specified relative to the
  // container's position. The position of these content items are further
  // modified by the container's "content offset".
  //
  // For example, consider item A with position (5,5) and content offset (0,0).
  // Given item B with position (10,10) is registered as a content of item A.
  // 1. Item B should be drawn at position (15,15).
  // 2. If item A's content offset is changed to (10,0), then item B should be
  //    drawn at position (5,15).
  //
  // Essentially, content items should be drawn at:
  //   [container position] + [content position] - [container content offset]
  void (*set_item_container_item)(SbUiNavItem item, SbUiNavItem container);

  // Set the current content offset for the given container. This may be used
  // to force scrolling to make certain content items visible. A container
  // item's content offset helps determine where its content items should be
  // drawn. Essentially, a content item should be drawn at:
  //   [container position] + [content position] - [container content offset]
  // If |item| is not a container, then this does nothing.
  // By default, the content offset is (0,0).
  void (*set_item_content_offset)(SbUiNavItem item,
                                  float content_offset_x,
                                  float content_offset_y);

  // Retrieve the current content offset for the navigation item. If |item| is
  // not a container, then the content offset is (0,0).
  void (*get_item_content_offset)(SbUiNavItem item,
                                  float* out_content_offset_x,
                                  float* out_content_offset_y);
} SbUiNavInterface;

// --- Constants -------------------------------------------------------------

// Well-defined value for an invalid navigation item.
#define kSbUiNavItemInvalid ((SbUiNavItem)NULL)

// --- Functions -------------------------------------------------------------

// Returns whether the given navigation item handle is valid.
static SB_C_INLINE bool SbUiNavItemIsValid(SbUiNavItem item) {
  return item != kSbUiNavItemInvalid;
}

// Retrieve the platform's UI navigation implementation. If the platform does
// not provide one, then return false without modifying |out_interface|.
// Otherwise, initialize all members of |out_interface| and return true.
SB_EXPORT bool SbUiNavGetInterface(SbUiNavInterface* out_interface);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // SB_API_VERSION >= SB_UI_NAVIGATION_VERSION

#endif  // STARBOARD_UI_NAVIGATION_H_
