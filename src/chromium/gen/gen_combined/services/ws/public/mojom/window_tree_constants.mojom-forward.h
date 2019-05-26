// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_CONSTANTS_MOJOM_FORWARD_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_CONSTANTS_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ws {
namespace mojom {
class FrameDecorationValuesDataView;

class WindowDataDataView;

class WsDisplayDataView;


enum class EventResult : int32_t;

enum class EventTargetingPolicy : int32_t;

enum class MoveLoopSource : int32_t;

enum class OrderDirection : int32_t;

enum class ShowState : int32_t;

enum class WindowType : int32_t;

enum class OcclusionState : int32_t;

constexpr uint32_t kDropEffectNone = 0U;

constexpr uint32_t kDropEffectMove = 1U;

constexpr uint32_t kDropEffectCopy = 2U;

constexpr uint32_t kDropEffectLink = 4U;

constexpr uint32_t kEmbedFlagEmbedderInterceptsEvents = 0x01U;

constexpr uint32_t kEmbedFlagEmbedderControlsVisibility = 0x02U;

constexpr int32_t kResizeBehaviorNone = 0;

constexpr int32_t kResizeBehaviorCanResize = 1;

constexpr int32_t kResizeBehaviorCanMaximize = 2;

constexpr int32_t kResizeBehaviorCanMinimize = 4;
class FrameDecorationValues;
using FrameDecorationValuesPtr = mojo::StructPtr<FrameDecorationValues>;

class WindowData;
using WindowDataPtr = mojo::StructPtr<WindowData>;

class WsDisplay;
using WsDisplayPtr = mojo::StructPtr<WsDisplay>;




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_CONSTANTS_MOJOM_FORWARD_H_