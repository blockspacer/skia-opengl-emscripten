// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-shared.h"
#include "third_party/blink/public/mojom/renderer_preference_watcher.mojom-shared.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/shared_worker.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/shared_worker_host.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SharedWorkerFactoryInterfaceBase {};

using SharedWorkerFactoryPtrDataView =
    mojo::InterfacePtrDataView<SharedWorkerFactoryInterfaceBase>;
using SharedWorkerFactoryRequestDataView =
    mojo::InterfaceRequestDataView<SharedWorkerFactoryInterfaceBase>;
using SharedWorkerFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SharedWorkerFactoryInterfaceBase>;
using SharedWorkerFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SharedWorkerFactoryInterfaceBase>;


}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_SHARED_H_