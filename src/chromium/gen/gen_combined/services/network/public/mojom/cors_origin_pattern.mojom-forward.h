// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class CorsOriginPatternDataView;

class CorsOriginAccessPatternsDataView;


enum class CorsOriginAccessMatchMode : int32_t;

enum class CorsOriginAccessMatchPriority : int32_t;
class CorsOriginPattern;
using CorsOriginPatternPtr = mojo::InlinedStructPtr<CorsOriginPattern>;

class CorsOriginAccessPatterns;
using CorsOriginAccessPatternsPtr = mojo::StructPtr<CorsOriginAccessPatterns>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_FORWARD_H_