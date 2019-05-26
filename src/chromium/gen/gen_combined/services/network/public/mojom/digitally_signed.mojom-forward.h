// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class DigitallySignedDataView;


enum class HashAlgorithm : int32_t;

enum class SignatureAlgorithm : int32_t;
class DigitallySigned;
using DigitallySignedPtr = mojo::StructPtr<DigitallySigned>;




}  // namespace mojom
}  // namespace network
#include "net/cert/signed_certificate_timestamp.h"

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_FORWARD_H_