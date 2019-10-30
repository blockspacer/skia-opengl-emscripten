#pragma once

#include <stdio.h>
#include <string>

#include <algorithm>
#include <cassert>
#include <cmath>
#include <functional>
#include <iostream>
#include <cstdlib>
#include <map>
#include <sstream>
#include <string>
#include <vector>
#include <limits>
#include <stdint.h>
#include <utility>
#include <memory>
#include <utility>
#include <cmath>
#include <memory>
#include <string>
#include <vector>
#include <memory>
#include <string>
#include <vector>

#ifdef ENABLE_BASE

#include "base/memory/ptr_util.h"
#include "base/macros.h"
#include "base/strings/stringprintf.h"
#include "base/stl_util.h"
#include "base/strings/utf_string_conversions.h"
//#include "base/task/sequence_manager/thread_controller_with_message_pump_impl.h"
#include "base/bind.h"
#include "base/bind_helpers.h"
#include "base/memory/scoped_refptr.h"
#include "base/single_thread_task_runner.h"
#include "base/threading/thread_task_runner_handle.h"

#include "base/numerics/checked_math.h"
#include "base/numerics/clamped_math.h"
#include "base/numerics/safe_conversions.h"

#include "base/i18n/icu_string_conversions.h"
#include "base/i18n/string_compare.h"

#include "base/stl_util.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/sys_string_conversions.h"
#include "base/base_switches.h"
#include "base/command_line.h"
#include "base/containers/small_map.h"
#include "base/i18n/icu_util.h"
#include "base/i18n/rtl.h"
#include "base/allocator/partition_allocator/page_allocator.h"

#include "base/message_loop/message_loop.h"
#include "base/at_exit.h"
#include "base/run_loop.h"
#include "base/task/thread_pool/thread_pool.h"

#include "base/memory/scoped_refptr.h"

#include "base/i18n/rtl.h"
#include "base/stl_util.h"

#include "base/memory/ref_counted_memory.h"
#include "base/memory/read_only_shared_memory_region.h"
#include "base/stl_util.h"
#include "base/bind.h"
#include "base/memory/weak_ptr.h"
//#include "base/test/gtest_util.h"
#include "base/threading/thread.h"
#include "base/logging.h"
#include "base/system/sys_info.h"

#include "base/synchronization/waitable_event.h"

//#include "base/task/sequence_manager/sequence_manager.h"

#include "base/observer_list.h"
#include "base/synchronization/lock.h"
#include "base/synchronization/waitable_event.h"
#include "base/threading/thread.h"
#include "base/timer/timer.h"

#include "base/callback.h"
//#include "base/containers/hash_tables.h"
#include "base/bind.h"
#include "base/callback.h"
#include "base/command_line.h"
#include "base/logging.h"
#include "base/memory/weak_ptr.h"
#include "base/message_loop/message_loop.h"
#include "base/optional.h"
#include "base/strings/stringprintf.h"
#include "base/synchronization/waitable_event.h"
//#include "base/trace_event/trace_event.h"
#include "base/bind.h"
#include "base/strings/stringprintf.h"
#include "base/trace_event/trace_event.h"
#include "base/callback.h"
////#include "base/message_loop.h"

#include "base/files/file_path.h"
#include "base/message_loop/message_loop.h"
#include "base/synchronization/waitable_event.h"
#include "base/threading/thread.h"
#include "base/threading/thread_checker.h"

#include "base/feature_list.h"

// Create a TYPE_DEFAULT message-loop.

#if defined(__EMSCRIPTEN__)

#define ENABLE_EMSCRIPTEN_INPUT 1

//static base::MessageLoop browser_loop;
//base::RunLoop run_loop;
//static scoped_refptr<base::SingleThreadTaskRunner> task_runner =
#endif // __EMSCRIPTEN__

#endif // ENABLE_BASE

#ifdef ENABLE_WTF
#include "third_party/blink/renderer/platform/wtf/wtf.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/math_extras.h"
#include "third_party/blink/renderer/platform/wtf/text/cstring.h"

#include "third_party/blink/renderer/platform/wtf/text/string_impl.h"


/// @note init allocator before executing any code.
#include "third_party/blink/renderer/platform/wtf/allocator/partitions.h"
//#include "testing/gmock/include/gmock/gmock.h"
//#include "testing/gtest/include/gtest/gtest.h"

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"

#include "third_party/blink/renderer/platform/wtf/dtoa/dtoa.h"

#include "third_party/blink/renderer/platform/wtf/functional.h"
//#include "testing/gtest/include/gtest/gtest.h"
#include "third_party/blink/renderer/platform/wtf/allocator.h"
#include "third_party/blink/renderer/platform/wtf/leak_annotations.h"
#include "third_party/blink/renderer/platform/wtf/ref_counted.h"
//#include "third_party/blink/renderer/platform/wtf/wtf_test_helper.h"

#endif // ENABLE_WTF

// TODO https://kapadia.github.io/emscripten/2013/09/13/emscripten-pointers-and-pointers.html
// TODO https://github.com/bakerstu/openmrn/blob/5f6bb8934fe13b2897d5f52ec6b358bd87dd886a/src/utils/FileUtils.cxx#L44
int read_file(const char* fPath, char*& fileString, long int& fsize, const bool closeString);

bool isDebugPeriodReached();

bool incDebugPeriodicCounter();

void DCHECK_RUNS_IN_THEAD_ON_MT_WASM();

//// must be POT
//int width = 1920;//1024;//512;
extern int DRAW_SURFACE_WIDTH;
//// must be POT
//int height = 1080;//1080;//4096;//10000;//1200;//1024;//512;
extern int DRAW_SURFACE_HEIGHT;

//int drawingBufferWidth = 1920;
extern int DRAW_BUFFER_WIDTH;
//int drawingBufferHeight = 1080;
extern int DRAW_BUFFER_HEIGHT;

//const int maxDrawingBufferWidth = 1920;
extern int MAX_DRAW_BUFFER_WIDTH;
//const int maxDrawingBufferHeight = 1080;
extern int MAX_DRAW_BUFFER_HEIGHT;

//int browser_width = width;//1920;
extern int BROWSER_WIDTH;
//int browser_height = height;//10000;
extern int BROWSER_HEIGHT;
