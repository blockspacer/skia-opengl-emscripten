// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class UsageBreakdownDataView;


enum class StorageType : int32_t;

enum class QuotaStatusCode : int32_t;
class UsageBreakdown;
using UsageBreakdownPtr = mojo::StructPtr<UsageBreakdown>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_FORWARD_H_