// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class URLLoaderFactoryBundleDataView;

class URLLoaderFactoryBundle;
using URLLoaderFactoryBundlePtr = mojo::StructPtr<URLLoaderFactoryBundle>;




}  // namespace mojom
}  // namespace blink
#include "third_party/blink/public/common/loader/url_loader_factory_bundle.h"

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_FORWARD_H_