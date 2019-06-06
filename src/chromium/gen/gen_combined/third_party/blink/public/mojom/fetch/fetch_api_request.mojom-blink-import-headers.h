// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_BLINK_IMPORT_HEADERS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_BLINK_IMPORT_HEADERS_H_
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink-import-headers.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/fetch_api.mojom-blink.h"
#include "services/network/public/mojom/fetch_api.mojom-blink-import-headers.h"
#include "services/network/public/mojom/request_context_frame_type.mojom-blink.h"
#include "services/network/public/mojom/request_context_frame_type.mojom-blink-import-headers.h"
#include "services/network/public/mojom/url_loader.mojom-blink.h"
#include "services/network/public/mojom/url_loader.mojom-blink-import-headers.h"
#endif // ENABLE_GNET
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-blink.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-blink-import-headers.h"
#include "third_party/blink/public/mojom/referrer.mojom-blink.h"
#include "third_party/blink/public/mojom/referrer.mojom-blink-import-headers.h"
#include "url/mojom/url.mojom-blink.h"
#include "url/mojom/url.mojom-blink-import-headers.h"

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_BLINK_IMPORT_HEADERS_H_
