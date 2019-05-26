// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_ACCESSIBILITY_AX_ENUMS_MOJOM_BLINK_H_
#define UI_ACCESSIBILITY_AX_ENUMS_MOJOM_BLINK_H_

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
#include "ui/accessibility/ax_enums.mojom-shared.h"
#include "ui/accessibility/ax_enums.mojom-blink-forward.h"

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
#include "base/component_export.h"




namespace WTF {
struct ax_mojom_internal_Event_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::Event& value) {
    using utype = std::underlying_type<::ax::mojom::Event>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::Event& left, const ::ax::mojom::Event& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::Event>
    : public GenericHashTraits<::ax::mojom::Event> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::Event& value) {
    return value == static_cast<::ax::mojom::Event>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::Event& slot, bool) {
    slot = static_cast<::ax::mojom::Event>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::Event& value) {
    return value == static_cast<::ax::mojom::Event>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_Role_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::Role& value) {
    using utype = std::underlying_type<::ax::mojom::Role>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::Role& left, const ::ax::mojom::Role& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::Role>
    : public GenericHashTraits<::ax::mojom::Role> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::Role& value) {
    return value == static_cast<::ax::mojom::Role>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::Role& slot, bool) {
    slot = static_cast<::ax::mojom::Role>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::Role& value) {
    return value == static_cast<::ax::mojom::Role>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_State_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::State& value) {
    using utype = std::underlying_type<::ax::mojom::State>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::State& left, const ::ax::mojom::State& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::State>
    : public GenericHashTraits<::ax::mojom::State> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::State& value) {
    return value == static_cast<::ax::mojom::State>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::State& slot, bool) {
    slot = static_cast<::ax::mojom::State>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::State& value) {
    return value == static_cast<::ax::mojom::State>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_Action_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::Action& value) {
    using utype = std::underlying_type<::ax::mojom::Action>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::Action& left, const ::ax::mojom::Action& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::Action>
    : public GenericHashTraits<::ax::mojom::Action> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::Action& value) {
    return value == static_cast<::ax::mojom::Action>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::Action& slot, bool) {
    slot = static_cast<::ax::mojom::Action>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::Action& value) {
    return value == static_cast<::ax::mojom::Action>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_ActionFlags_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::ActionFlags& value) {
    using utype = std::underlying_type<::ax::mojom::ActionFlags>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::ActionFlags& left, const ::ax::mojom::ActionFlags& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::ActionFlags>
    : public GenericHashTraits<::ax::mojom::ActionFlags> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::ActionFlags& value) {
    return value == static_cast<::ax::mojom::ActionFlags>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::ActionFlags& slot, bool) {
    slot = static_cast<::ax::mojom::ActionFlags>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::ActionFlags& value) {
    return value == static_cast<::ax::mojom::ActionFlags>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_DefaultActionVerb_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::DefaultActionVerb& value) {
    using utype = std::underlying_type<::ax::mojom::DefaultActionVerb>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::DefaultActionVerb& left, const ::ax::mojom::DefaultActionVerb& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::DefaultActionVerb>
    : public GenericHashTraits<::ax::mojom::DefaultActionVerb> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::DefaultActionVerb& value) {
    return value == static_cast<::ax::mojom::DefaultActionVerb>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::DefaultActionVerb& slot, bool) {
    slot = static_cast<::ax::mojom::DefaultActionVerb>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::DefaultActionVerb& value) {
    return value == static_cast<::ax::mojom::DefaultActionVerb>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_Mutation_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::Mutation& value) {
    using utype = std::underlying_type<::ax::mojom::Mutation>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::Mutation& left, const ::ax::mojom::Mutation& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::Mutation>
    : public GenericHashTraits<::ax::mojom::Mutation> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::Mutation& value) {
    return value == static_cast<::ax::mojom::Mutation>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::Mutation& slot, bool) {
    slot = static_cast<::ax::mojom::Mutation>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::Mutation& value) {
    return value == static_cast<::ax::mojom::Mutation>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_StringAttribute_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::StringAttribute& value) {
    using utype = std::underlying_type<::ax::mojom::StringAttribute>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::StringAttribute& left, const ::ax::mojom::StringAttribute& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::StringAttribute>
    : public GenericHashTraits<::ax::mojom::StringAttribute> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::StringAttribute& value) {
    return value == static_cast<::ax::mojom::StringAttribute>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::StringAttribute& slot, bool) {
    slot = static_cast<::ax::mojom::StringAttribute>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::StringAttribute& value) {
    return value == static_cast<::ax::mojom::StringAttribute>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_IntAttribute_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::IntAttribute& value) {
    using utype = std::underlying_type<::ax::mojom::IntAttribute>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::IntAttribute& left, const ::ax::mojom::IntAttribute& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::IntAttribute>
    : public GenericHashTraits<::ax::mojom::IntAttribute> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::IntAttribute& value) {
    return value == static_cast<::ax::mojom::IntAttribute>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::IntAttribute& slot, bool) {
    slot = static_cast<::ax::mojom::IntAttribute>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::IntAttribute& value) {
    return value == static_cast<::ax::mojom::IntAttribute>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_FloatAttribute_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::FloatAttribute& value) {
    using utype = std::underlying_type<::ax::mojom::FloatAttribute>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::FloatAttribute& left, const ::ax::mojom::FloatAttribute& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::FloatAttribute>
    : public GenericHashTraits<::ax::mojom::FloatAttribute> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::FloatAttribute& value) {
    return value == static_cast<::ax::mojom::FloatAttribute>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::FloatAttribute& slot, bool) {
    slot = static_cast<::ax::mojom::FloatAttribute>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::FloatAttribute& value) {
    return value == static_cast<::ax::mojom::FloatAttribute>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_BoolAttribute_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::BoolAttribute& value) {
    using utype = std::underlying_type<::ax::mojom::BoolAttribute>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::BoolAttribute& left, const ::ax::mojom::BoolAttribute& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::BoolAttribute>
    : public GenericHashTraits<::ax::mojom::BoolAttribute> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::BoolAttribute& value) {
    return value == static_cast<::ax::mojom::BoolAttribute>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::BoolAttribute& slot, bool) {
    slot = static_cast<::ax::mojom::BoolAttribute>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::BoolAttribute& value) {
    return value == static_cast<::ax::mojom::BoolAttribute>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_IntListAttribute_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::IntListAttribute& value) {
    using utype = std::underlying_type<::ax::mojom::IntListAttribute>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::IntListAttribute& left, const ::ax::mojom::IntListAttribute& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::IntListAttribute>
    : public GenericHashTraits<::ax::mojom::IntListAttribute> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::IntListAttribute& value) {
    return value == static_cast<::ax::mojom::IntListAttribute>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::IntListAttribute& slot, bool) {
    slot = static_cast<::ax::mojom::IntListAttribute>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::IntListAttribute& value) {
    return value == static_cast<::ax::mojom::IntListAttribute>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_StringListAttribute_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::StringListAttribute& value) {
    using utype = std::underlying_type<::ax::mojom::StringListAttribute>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::StringListAttribute& left, const ::ax::mojom::StringListAttribute& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::StringListAttribute>
    : public GenericHashTraits<::ax::mojom::StringListAttribute> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::StringListAttribute& value) {
    return value == static_cast<::ax::mojom::StringListAttribute>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::StringListAttribute& slot, bool) {
    slot = static_cast<::ax::mojom::StringListAttribute>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::StringListAttribute& value) {
    return value == static_cast<::ax::mojom::StringListAttribute>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_MarkerType_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::MarkerType& value) {
    using utype = std::underlying_type<::ax::mojom::MarkerType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::MarkerType& left, const ::ax::mojom::MarkerType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::MarkerType>
    : public GenericHashTraits<::ax::mojom::MarkerType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::MarkerType& value) {
    return value == static_cast<::ax::mojom::MarkerType>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::MarkerType& slot, bool) {
    slot = static_cast<::ax::mojom::MarkerType>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::MarkerType& value) {
    return value == static_cast<::ax::mojom::MarkerType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_ListStyle_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::ListStyle& value) {
    using utype = std::underlying_type<::ax::mojom::ListStyle>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::ListStyle& left, const ::ax::mojom::ListStyle& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::ListStyle>
    : public GenericHashTraits<::ax::mojom::ListStyle> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::ListStyle& value) {
    return value == static_cast<::ax::mojom::ListStyle>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::ListStyle& slot, bool) {
    slot = static_cast<::ax::mojom::ListStyle>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::ListStyle& value) {
    return value == static_cast<::ax::mojom::ListStyle>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_TextDirection_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::TextDirection& value) {
    using utype = std::underlying_type<::ax::mojom::TextDirection>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::TextDirection& left, const ::ax::mojom::TextDirection& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::TextDirection>
    : public GenericHashTraits<::ax::mojom::TextDirection> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::TextDirection& value) {
    return value == static_cast<::ax::mojom::TextDirection>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::TextDirection& slot, bool) {
    slot = static_cast<::ax::mojom::TextDirection>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::TextDirection& value) {
    return value == static_cast<::ax::mojom::TextDirection>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_TextPosition_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::TextPosition& value) {
    using utype = std::underlying_type<::ax::mojom::TextPosition>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::TextPosition& left, const ::ax::mojom::TextPosition& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::TextPosition>
    : public GenericHashTraits<::ax::mojom::TextPosition> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::TextPosition& value) {
    return value == static_cast<::ax::mojom::TextPosition>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::TextPosition& slot, bool) {
    slot = static_cast<::ax::mojom::TextPosition>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::TextPosition& value) {
    return value == static_cast<::ax::mojom::TextPosition>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_TextStyle_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::TextStyle& value) {
    using utype = std::underlying_type<::ax::mojom::TextStyle>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::TextStyle& left, const ::ax::mojom::TextStyle& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::TextStyle>
    : public GenericHashTraits<::ax::mojom::TextStyle> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::TextStyle& value) {
    return value == static_cast<::ax::mojom::TextStyle>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::TextStyle& slot, bool) {
    slot = static_cast<::ax::mojom::TextStyle>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::TextStyle& value) {
    return value == static_cast<::ax::mojom::TextStyle>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_TextDecorationStyle_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::TextDecorationStyle& value) {
    using utype = std::underlying_type<::ax::mojom::TextDecorationStyle>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::TextDecorationStyle& left, const ::ax::mojom::TextDecorationStyle& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::TextDecorationStyle>
    : public GenericHashTraits<::ax::mojom::TextDecorationStyle> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::TextDecorationStyle& value) {
    return value == static_cast<::ax::mojom::TextDecorationStyle>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::TextDecorationStyle& slot, bool) {
    slot = static_cast<::ax::mojom::TextDecorationStyle>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::TextDecorationStyle& value) {
    return value == static_cast<::ax::mojom::TextDecorationStyle>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_AriaCurrentState_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::AriaCurrentState& value) {
    using utype = std::underlying_type<::ax::mojom::AriaCurrentState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::AriaCurrentState& left, const ::ax::mojom::AriaCurrentState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::AriaCurrentState>
    : public GenericHashTraits<::ax::mojom::AriaCurrentState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::AriaCurrentState& value) {
    return value == static_cast<::ax::mojom::AriaCurrentState>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::AriaCurrentState& slot, bool) {
    slot = static_cast<::ax::mojom::AriaCurrentState>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::AriaCurrentState& value) {
    return value == static_cast<::ax::mojom::AriaCurrentState>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_HasPopup_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::HasPopup& value) {
    using utype = std::underlying_type<::ax::mojom::HasPopup>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::HasPopup& left, const ::ax::mojom::HasPopup& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::HasPopup>
    : public GenericHashTraits<::ax::mojom::HasPopup> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::HasPopup& value) {
    return value == static_cast<::ax::mojom::HasPopup>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::HasPopup& slot, bool) {
    slot = static_cast<::ax::mojom::HasPopup>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::HasPopup& value) {
    return value == static_cast<::ax::mojom::HasPopup>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_InvalidState_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::InvalidState& value) {
    using utype = std::underlying_type<::ax::mojom::InvalidState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::InvalidState& left, const ::ax::mojom::InvalidState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::InvalidState>
    : public GenericHashTraits<::ax::mojom::InvalidState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::InvalidState& value) {
    return value == static_cast<::ax::mojom::InvalidState>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::InvalidState& slot, bool) {
    slot = static_cast<::ax::mojom::InvalidState>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::InvalidState& value) {
    return value == static_cast<::ax::mojom::InvalidState>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_Restriction_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::Restriction& value) {
    using utype = std::underlying_type<::ax::mojom::Restriction>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::Restriction& left, const ::ax::mojom::Restriction& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::Restriction>
    : public GenericHashTraits<::ax::mojom::Restriction> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::Restriction& value) {
    return value == static_cast<::ax::mojom::Restriction>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::Restriction& slot, bool) {
    slot = static_cast<::ax::mojom::Restriction>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::Restriction& value) {
    return value == static_cast<::ax::mojom::Restriction>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_CheckedState_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::CheckedState& value) {
    using utype = std::underlying_type<::ax::mojom::CheckedState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::CheckedState& left, const ::ax::mojom::CheckedState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::CheckedState>
    : public GenericHashTraits<::ax::mojom::CheckedState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::CheckedState& value) {
    return value == static_cast<::ax::mojom::CheckedState>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::CheckedState& slot, bool) {
    slot = static_cast<::ax::mojom::CheckedState>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::CheckedState& value) {
    return value == static_cast<::ax::mojom::CheckedState>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_SortDirection_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::SortDirection& value) {
    using utype = std::underlying_type<::ax::mojom::SortDirection>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::SortDirection& left, const ::ax::mojom::SortDirection& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::SortDirection>
    : public GenericHashTraits<::ax::mojom::SortDirection> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::SortDirection& value) {
    return value == static_cast<::ax::mojom::SortDirection>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::SortDirection& slot, bool) {
    slot = static_cast<::ax::mojom::SortDirection>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::SortDirection& value) {
    return value == static_cast<::ax::mojom::SortDirection>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_NameFrom_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::NameFrom& value) {
    using utype = std::underlying_type<::ax::mojom::NameFrom>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::NameFrom& left, const ::ax::mojom::NameFrom& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::NameFrom>
    : public GenericHashTraits<::ax::mojom::NameFrom> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::NameFrom& value) {
    return value == static_cast<::ax::mojom::NameFrom>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::NameFrom& slot, bool) {
    slot = static_cast<::ax::mojom::NameFrom>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::NameFrom& value) {
    return value == static_cast<::ax::mojom::NameFrom>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_DescriptionFrom_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::DescriptionFrom& value) {
    using utype = std::underlying_type<::ax::mojom::DescriptionFrom>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::DescriptionFrom& left, const ::ax::mojom::DescriptionFrom& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::DescriptionFrom>
    : public GenericHashTraits<::ax::mojom::DescriptionFrom> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::DescriptionFrom& value) {
    return value == static_cast<::ax::mojom::DescriptionFrom>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::DescriptionFrom& slot, bool) {
    slot = static_cast<::ax::mojom::DescriptionFrom>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::DescriptionFrom& value) {
    return value == static_cast<::ax::mojom::DescriptionFrom>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_EventFrom_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::EventFrom& value) {
    using utype = std::underlying_type<::ax::mojom::EventFrom>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::EventFrom& left, const ::ax::mojom::EventFrom& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::EventFrom>
    : public GenericHashTraits<::ax::mojom::EventFrom> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::EventFrom& value) {
    return value == static_cast<::ax::mojom::EventFrom>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::EventFrom& slot, bool) {
    slot = static_cast<::ax::mojom::EventFrom>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::EventFrom& value) {
    return value == static_cast<::ax::mojom::EventFrom>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_Gesture_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::Gesture& value) {
    using utype = std::underlying_type<::ax::mojom::Gesture>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::Gesture& left, const ::ax::mojom::Gesture& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::Gesture>
    : public GenericHashTraits<::ax::mojom::Gesture> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::Gesture& value) {
    return value == static_cast<::ax::mojom::Gesture>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::Gesture& slot, bool) {
    slot = static_cast<::ax::mojom::Gesture>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::Gesture& value) {
    return value == static_cast<::ax::mojom::Gesture>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_TextAffinity_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::TextAffinity& value) {
    using utype = std::underlying_type<::ax::mojom::TextAffinity>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::TextAffinity& left, const ::ax::mojom::TextAffinity& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::TextAffinity>
    : public GenericHashTraits<::ax::mojom::TextAffinity> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::TextAffinity& value) {
    return value == static_cast<::ax::mojom::TextAffinity>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::TextAffinity& slot, bool) {
    slot = static_cast<::ax::mojom::TextAffinity>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::TextAffinity& value) {
    return value == static_cast<::ax::mojom::TextAffinity>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_TreeOrder_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::TreeOrder& value) {
    using utype = std::underlying_type<::ax::mojom::TreeOrder>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::TreeOrder& left, const ::ax::mojom::TreeOrder& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::TreeOrder>
    : public GenericHashTraits<::ax::mojom::TreeOrder> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::TreeOrder& value) {
    return value == static_cast<::ax::mojom::TreeOrder>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::TreeOrder& slot, bool) {
    slot = static_cast<::ax::mojom::TreeOrder>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::TreeOrder& value) {
    return value == static_cast<::ax::mojom::TreeOrder>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_AXTreeIDType_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::AXTreeIDType& value) {
    using utype = std::underlying_type<::ax::mojom::AXTreeIDType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::AXTreeIDType& left, const ::ax::mojom::AXTreeIDType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::AXTreeIDType>
    : public GenericHashTraits<::ax::mojom::AXTreeIDType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::AXTreeIDType& value) {
    return value == static_cast<::ax::mojom::AXTreeIDType>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::AXTreeIDType& slot, bool) {
    slot = static_cast<::ax::mojom::AXTreeIDType>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::AXTreeIDType& value) {
    return value == static_cast<::ax::mojom::AXTreeIDType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct ax_mojom_internal_ImageAnnotationStatus_DataHashFn {
  static unsigned GetHash(const ::ax::mojom::ImageAnnotationStatus& value) {
    using utype = std::underlying_type<::ax::mojom::ImageAnnotationStatus>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::ax::mojom::ImageAnnotationStatus& left, const ::ax::mojom::ImageAnnotationStatus& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::ax::mojom::ImageAnnotationStatus>
    : public GenericHashTraits<::ax::mojom::ImageAnnotationStatus> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::ax::mojom::ImageAnnotationStatus& value) {
    return value == static_cast<::ax::mojom::ImageAnnotationStatus>(-1000000);
  }
  static void ConstructDeletedValue(::ax::mojom::ImageAnnotationStatus& slot, bool) {
    slot = static_cast<::ax::mojom::ImageAnnotationStatus>(-1000001);
  }
  static bool IsDeletedValue(const ::ax::mojom::ImageAnnotationStatus& value) {
    return value == static_cast<::ax::mojom::ImageAnnotationStatus>(-1000001);
  }
};
}  // namespace WTF


namespace ax {
namespace mojom {
namespace blink {





}  // namespace blink
}  // namespace mojom
}  // namespace ax

namespace mojo {

}  // namespace mojo

#endif  // UI_ACCESSIBILITY_AX_ENUMS_MOJOM_BLINK_H_