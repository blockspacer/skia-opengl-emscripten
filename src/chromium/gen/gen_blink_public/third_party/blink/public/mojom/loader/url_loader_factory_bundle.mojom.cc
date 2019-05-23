// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-params-data.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_URL_LOADER_FACTORY_BUNDLE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
URLLoaderFactoryBundle::URLLoaderFactoryBundle()
    : default_factory(),
      scheme_specific_factories(),
      initiator_specific_factories(),
      appcache_factory(),
      bypass_redirect_checks(false) {}

URLLoaderFactoryBundle::URLLoaderFactoryBundle(
    ::network::mojom::URLLoaderFactoryPtrInfo default_factory_in,
    base::flat_map<std::string, ::network::mojom::URLLoaderFactoryPtrInfo> scheme_specific_factories_in,
    base::flat_map<url::Origin, ::network::mojom::URLLoaderFactoryPtrInfo> initiator_specific_factories_in,
    ::network::mojom::URLLoaderFactoryPtrInfo appcache_factory_in,
    bool bypass_redirect_checks_in)
    : default_factory(std::move(default_factory_in)),
      scheme_specific_factories(std::move(scheme_specific_factories_in)),
      initiator_specific_factories(std::move(initiator_specific_factories_in)),
      appcache_factory(std::move(appcache_factory_in)),
      bypass_redirect_checks(std::move(bypass_redirect_checks_in)) {}

URLLoaderFactoryBundle::~URLLoaderFactoryBundle() = default;

bool URLLoaderFactoryBundle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::URLLoaderFactoryBundle::DataView, ::blink::mojom::URLLoaderFactoryBundlePtr>::Read(
    ::blink::mojom::URLLoaderFactoryBundle::DataView input,
    ::blink::mojom::URLLoaderFactoryBundlePtr* output) {
  bool success = true;
  ::blink::mojom::URLLoaderFactoryBundlePtr result(::blink::mojom::URLLoaderFactoryBundle::New());
  
      result->default_factory =
          input.TakeDefaultFactory<decltype(result->default_factory)>();
      if (!input.ReadSchemeSpecificFactories(&result->scheme_specific_factories))
        success = false;
      if (!input.ReadInitiatorSpecificFactories(&result->initiator_specific_factories))
        success = false;
      result->appcache_factory =
          input.TakeAppcacheFactory<decltype(result->appcache_factory)>();
      result->bypass_redirect_checks = input.bypass_redirect_checks();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif