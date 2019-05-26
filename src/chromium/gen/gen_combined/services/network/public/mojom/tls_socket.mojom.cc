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

#include "services/network/public/mojom/tls_socket.mojom.h"

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

#include "services/network/public/mojom/tls_socket.mojom-params-data.h"
#include "services/network/public/mojom/tls_socket.mojom-shared-message-ids.h"

#include "services/network/public/mojom/tls_socket.mojom-import-headers.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TLS_SOCKET_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TLS_SOCKET_MOJOM_JUMBO_H_
#endif
namespace network {
namespace mojom {
TLSClientSocketOptions::TLSClientSocketOptions()
    : version_min(::network::mojom::SSLVersion::kTLS1),
      version_max(::network::mojom::SSLVersion::kTLS13),
      send_ssl_info(false),
      unsafely_skip_cert_verification(false) {}

TLSClientSocketOptions::TLSClientSocketOptions(
    ::network::mojom::SSLVersion version_min_in,
    ::network::mojom::SSLVersion version_max_in,
    bool send_ssl_info_in,
    bool unsafely_skip_cert_verification_in)
    : version_min(std::move(version_min_in)),
      version_max(std::move(version_max_in)),
      send_ssl_info(std::move(send_ssl_info_in)),
      unsafely_skip_cert_verification(std::move(unsafely_skip_cert_verification_in)) {}

TLSClientSocketOptions::~TLSClientSocketOptions() = default;
size_t TLSClientSocketOptions::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->version_min);
  seed = mojo::internal::Hash(seed, this->version_max);
  seed = mojo::internal::Hash(seed, this->send_ssl_info);
  seed = mojo::internal::Hash(seed, this->unsafely_skip_cert_verification);
  return seed;
}

bool TLSClientSocketOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char TLSClientSocket::Name_[] = "network.mojom.TLSClientSocket";

TLSClientSocketProxy::TLSClientSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool TLSClientSocketStubDispatch::Accept(
    TLSClientSocket* impl,
    mojo::Message* message) {
  return false;
}

// static
bool TLSClientSocketStubDispatch::AcceptWithResponder(
    TLSClientSocket* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool TLSClientSocketRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TLSClientSocket RequestValidator");

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::TLSClientSocketOptions::DataView, ::network::mojom::TLSClientSocketOptionsPtr>::Read(
    ::network::mojom::TLSClientSocketOptions::DataView input,
    ::network::mojom::TLSClientSocketOptionsPtr* output) {
  bool success = true;
  ::network::mojom::TLSClientSocketOptionsPtr result(::network::mojom::TLSClientSocketOptions::New());
  
      if (!input.ReadVersionMin(&result->version_min))
        success = false;
      if (!input.ReadVersionMax(&result->version_max))
        success = false;
      result->send_ssl_info = input.send_ssl_info();
      result->unsafely_skip_cert_verification = input.unsafely_skip_cert_verification();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif