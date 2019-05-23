// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/push_messaging/push_messaging_status.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/push_messaging/push_messaging_status.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, PushDeliveryStatus value) {
  switch(value) {
    case PushDeliveryStatus::SUCCESS:
      return os << "PushDeliveryStatus::SUCCESS";
    case PushDeliveryStatus::UNKNOWN_APP_ID:
      return os << "PushDeliveryStatus::UNKNOWN_APP_ID";
    case PushDeliveryStatus::PERMISSION_DENIED:
      return os << "PushDeliveryStatus::PERMISSION_DENIED";
    case PushDeliveryStatus::NO_SERVICE_WORKER:
      return os << "PushDeliveryStatus::NO_SERVICE_WORKER";
    case PushDeliveryStatus::SERVICE_WORKER_ERROR:
      return os << "PushDeliveryStatus::SERVICE_WORKER_ERROR";
    case PushDeliveryStatus::EVENT_WAITUNTIL_REJECTED:
      return os << "PushDeliveryStatus::EVENT_WAITUNTIL_REJECTED";
    case PushDeliveryStatus::TIMEOUT:
      return os << "PushDeliveryStatus::TIMEOUT";
    default:
      return os << "Unknown PushDeliveryStatus value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PushGetRegistrationStatus value) {
  switch(value) {
    case PushGetRegistrationStatus::SUCCESS:
      return os << "PushGetRegistrationStatus::SUCCESS";
    case PushGetRegistrationStatus::SERVICE_NOT_AVAILABLE:
      return os << "PushGetRegistrationStatus::SERVICE_NOT_AVAILABLE";
    case PushGetRegistrationStatus::STORAGE_ERROR:
      return os << "PushGetRegistrationStatus::STORAGE_ERROR";
    case PushGetRegistrationStatus::REGISTRATION_NOT_FOUND:
      return os << "PushGetRegistrationStatus::REGISTRATION_NOT_FOUND";
    case PushGetRegistrationStatus::INCOGNITO_REGISTRATION_NOT_FOUND:
      return os << "PushGetRegistrationStatus::INCOGNITO_REGISTRATION_NOT_FOUND";
    case PushGetRegistrationStatus::STORAGE_CORRUPT:
      return os << "PushGetRegistrationStatus::STORAGE_CORRUPT";
    case PushGetRegistrationStatus::RENDERER_SHUTDOWN:
      return os << "PushGetRegistrationStatus::RENDERER_SHUTDOWN";
    case PushGetRegistrationStatus::NO_LIVE_SERVICE_WORKER:
      return os << "PushGetRegistrationStatus::NO_LIVE_SERVICE_WORKER";
    default:
      return os << "Unknown PushGetRegistrationStatus value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PushRegistrationStatus value) {
  switch(value) {
    case PushRegistrationStatus::SUCCESS_FROM_PUSH_SERVICE:
      return os << "PushRegistrationStatus::SUCCESS_FROM_PUSH_SERVICE";
    case PushRegistrationStatus::NO_SERVICE_WORKER:
      return os << "PushRegistrationStatus::NO_SERVICE_WORKER";
    case PushRegistrationStatus::SERVICE_NOT_AVAILABLE:
      return os << "PushRegistrationStatus::SERVICE_NOT_AVAILABLE";
    case PushRegistrationStatus::LIMIT_REACHED:
      return os << "PushRegistrationStatus::LIMIT_REACHED";
    case PushRegistrationStatus::PERMISSION_DENIED:
      return os << "PushRegistrationStatus::PERMISSION_DENIED";
    case PushRegistrationStatus::SERVICE_ERROR:
      return os << "PushRegistrationStatus::SERVICE_ERROR";
    case PushRegistrationStatus::NO_SENDER_ID:
      return os << "PushRegistrationStatus::NO_SENDER_ID";
    case PushRegistrationStatus::STORAGE_ERROR:
      return os << "PushRegistrationStatus::STORAGE_ERROR";
    case PushRegistrationStatus::SUCCESS_FROM_CACHE:
      return os << "PushRegistrationStatus::SUCCESS_FROM_CACHE";
    case PushRegistrationStatus::NETWORK_ERROR:
      return os << "PushRegistrationStatus::NETWORK_ERROR";
    case PushRegistrationStatus::INCOGNITO_PERMISSION_DENIED:
      return os << "PushRegistrationStatus::INCOGNITO_PERMISSION_DENIED";
    case PushRegistrationStatus::PUBLIC_KEY_UNAVAILABLE:
      return os << "PushRegistrationStatus::PUBLIC_KEY_UNAVAILABLE";
    case PushRegistrationStatus::MANIFEST_EMPTY_OR_MISSING:
      return os << "PushRegistrationStatus::MANIFEST_EMPTY_OR_MISSING";
    case PushRegistrationStatus::SENDER_ID_MISMATCH:
      return os << "PushRegistrationStatus::SENDER_ID_MISMATCH";
    case PushRegistrationStatus::STORAGE_CORRUPT:
      return os << "PushRegistrationStatus::STORAGE_CORRUPT";
    case PushRegistrationStatus::RENDERER_SHUTDOWN:
      return os << "PushRegistrationStatus::RENDERER_SHUTDOWN";
    case PushRegistrationStatus::SUCCESS_NEW_SUBSCRIPTION_FROM_PUSH_SERVICE:
      return os << "PushRegistrationStatus::SUCCESS_NEW_SUBSCRIPTION_FROM_PUSH_SERVICE";
    default:
      return os << "Unknown PushRegistrationStatus value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PushUnregistrationReason value) {
  switch(value) {
    case PushUnregistrationReason::UNKNOWN:
      return os << "PushUnregistrationReason::UNKNOWN";
    case PushUnregistrationReason::JAVASCRIPT_API:
      return os << "PushUnregistrationReason::JAVASCRIPT_API";
    case PushUnregistrationReason::PERMISSION_REVOKED:
      return os << "PushUnregistrationReason::PERMISSION_REVOKED";
    case PushUnregistrationReason::DELIVERY_UNKNOWN_APP_ID:
      return os << "PushUnregistrationReason::DELIVERY_UNKNOWN_APP_ID";
    case PushUnregistrationReason::DELIVERY_PERMISSION_DENIED:
      return os << "PushUnregistrationReason::DELIVERY_PERMISSION_DENIED";
    case PushUnregistrationReason::DELIVERY_NO_SERVICE_WORKER:
      return os << "PushUnregistrationReason::DELIVERY_NO_SERVICE_WORKER";
    case PushUnregistrationReason::GCM_STORE_RESET:
      return os << "PushUnregistrationReason::GCM_STORE_RESET";
    case PushUnregistrationReason::SERVICE_WORKER_UNREGISTERED:
      return os << "PushUnregistrationReason::SERVICE_WORKER_UNREGISTERED";
    case PushUnregistrationReason::SUBSCRIBE_STORAGE_CORRUPT:
      return os << "PushUnregistrationReason::SUBSCRIBE_STORAGE_CORRUPT";
    case PushUnregistrationReason::GET_SUBSCRIPTION_STORAGE_CORRUPT:
      return os << "PushUnregistrationReason::GET_SUBSCRIPTION_STORAGE_CORRUPT";
    case PushUnregistrationReason::SERVICE_WORKER_DATABASE_WIPED:
      return os << "PushUnregistrationReason::SERVICE_WORKER_DATABASE_WIPED";
    default:
      return os << "Unknown PushUnregistrationReason value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PushUnregistrationStatus value) {
  switch(value) {
    case PushUnregistrationStatus::SUCCESS_UNREGISTERED:
      return os << "PushUnregistrationStatus::SUCCESS_UNREGISTERED";
    case PushUnregistrationStatus::SUCCESS_WAS_NOT_REGISTERED:
      return os << "PushUnregistrationStatus::SUCCESS_WAS_NOT_REGISTERED";
    case PushUnregistrationStatus::PENDING_NETWORK_ERROR:
      return os << "PushUnregistrationStatus::PENDING_NETWORK_ERROR";
    case PushUnregistrationStatus::NO_SERVICE_WORKER:
      return os << "PushUnregistrationStatus::NO_SERVICE_WORKER";
    case PushUnregistrationStatus::SERVICE_NOT_AVAILABLE:
      return os << "PushUnregistrationStatus::SERVICE_NOT_AVAILABLE";
    case PushUnregistrationStatus::PENDING_SERVICE_ERROR:
      return os << "PushUnregistrationStatus::PENDING_SERVICE_ERROR";
    case PushUnregistrationStatus::STORAGE_ERROR:
      return os << "PushUnregistrationStatus::STORAGE_ERROR";
    case PushUnregistrationStatus::NETWORK_ERROR:
      return os << "PushUnregistrationStatus::NETWORK_ERROR";
    default:
      return os << "Unknown PushUnregistrationStatus value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PushUserVisibleStatus value) {
  switch(value) {
    case PushUserVisibleStatus::REQUIRED_AND_SHOWN:
      return os << "PushUserVisibleStatus::REQUIRED_AND_SHOWN";
    case PushUserVisibleStatus::NOT_REQUIRED_BUT_SHOWN:
      return os << "PushUserVisibleStatus::NOT_REQUIRED_BUT_SHOWN";
    case PushUserVisibleStatus::NOT_REQUIRED_AND_NOT_SHOWN:
      return os << "PushUserVisibleStatus::NOT_REQUIRED_AND_NOT_SHOWN";
    case PushUserVisibleStatus::REQUIRED_BUT_NOT_SHOWN_USED_GRACE:
      return os << "PushUserVisibleStatus::REQUIRED_BUT_NOT_SHOWN_USED_GRACE";
    case PushUserVisibleStatus::REQUIRED_BUT_NOT_SHOWN_GRACE_EXCEEDED:
      return os << "PushUserVisibleStatus::REQUIRED_BUT_NOT_SHOWN_GRACE_EXCEEDED";
    default:
      return os << "Unknown PushUserVisibleStatus value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif