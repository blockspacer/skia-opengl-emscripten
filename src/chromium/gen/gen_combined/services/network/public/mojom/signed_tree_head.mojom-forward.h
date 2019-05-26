// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class SignedTreeHeadDataView;


enum class SignedTreeHeadVersion : int32_t;
class SignedTreeHead;
using SignedTreeHeadPtr = mojo::StructPtr<SignedTreeHead>;




}  // namespace mojom
}  // namespace network
#include "net/cert/signed_tree_head.h"

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_FORWARD_H_