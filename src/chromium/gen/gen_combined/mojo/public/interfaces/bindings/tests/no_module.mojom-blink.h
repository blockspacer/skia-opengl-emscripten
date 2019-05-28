// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_NO_MODULE_MOJOM_BLINK_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_NO_MODULE_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "mojo/public/interfaces/bindings/tests/no_module.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/no_module.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace WTF {
struct internal_EnumWithoutModule_DataHashFn {
  static unsigned GetHash(const ::EnumWithoutModule& value) {
    using utype = std::underlying_type<::EnumWithoutModule>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::EnumWithoutModule& left, const ::EnumWithoutModule& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::EnumWithoutModule>
    : public GenericHashTraits<::EnumWithoutModule> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::EnumWithoutModule& value) {
    return value == static_cast<::EnumWithoutModule>(-1000000);
  }
  static void ConstructDeletedValue(::EnumWithoutModule& slot, bool) {
    slot = static_cast<::EnumWithoutModule>(-1000001);
  }
  static bool IsDeletedValue(const ::EnumWithoutModule& value) {
    return value == static_cast<::EnumWithoutModule>(-1000001);
  }
};
}  // namespace WTF


namespace blink {





}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_NO_MODULE_MOJOM_BLINK_H_