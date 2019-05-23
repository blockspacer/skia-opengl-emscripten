// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class FetchAPIRequestHeadersDataView;

class FetchAPIRequestDataView;


enum class RequestContextType : int32_t;

enum class FetchCacheMode : int32_t;

enum class FetchImportanceMode : int32_t;
class FetchAPIRequestHeaders;
using FetchAPIRequestHeadersPtr = mojo::StructPtr<FetchAPIRequestHeaders>;

class FetchAPIRequest;
using FetchAPIRequestPtr = mojo::StructPtr<FetchAPIRequest>;




}  // namespace mojom
}  // namespace blink
#include "base/containers/flat_map.h"
#include "base/strings/string_util.h"
#include "third_party/blink/public/common/fetch/fetch_api_request_headers_map.h"

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_FORWARD_H_