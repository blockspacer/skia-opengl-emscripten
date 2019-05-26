// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_FORWARD_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class HitTestRegionDataView;

class HitTestRegionListDataView;

class HitTestRegion;
using HitTestRegionPtr = mojo::StructPtr<HitTestRegion>;

class HitTestRegionList;
using HitTestRegionListPtr = mojo::StructPtr<HitTestRegionList>;




}  // namespace mojom
}  // namespace viz
#include "components/viz/common/hit_test/hit_test_region_list.h"

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_FORWARD_H_