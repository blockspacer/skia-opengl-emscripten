// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-params-data.h"
namespace proxy_resolver {
namespace mojom {

std::ostream& operator<<(std::ostream& os, HostResolveOperation value) {
  switch(value) {
    case HostResolveOperation::DNS_RESOLVE:
      return os << "HostResolveOperation::DNS_RESOLVE";
    case HostResolveOperation::DNS_RESOLVE_EX:
      return os << "HostResolveOperation::DNS_RESOLVE_EX";
    case HostResolveOperation::MY_IP_ADDRESS:
      return os << "HostResolveOperation::MY_IP_ADDRESS";
    case HostResolveOperation::MY_IP_ADDRESS_EX:
      return os << "HostResolveOperation::MY_IP_ADDRESS_EX";
    default:
      return os << "Unknown HostResolveOperation value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ProxyScheme value) {
  switch(value) {
    case ProxyScheme::INVALID:
      return os << "ProxyScheme::INVALID";
    case ProxyScheme::DIRECT:
      return os << "ProxyScheme::DIRECT";
    case ProxyScheme::HTTP:
      return os << "ProxyScheme::HTTP";
    case ProxyScheme::SOCKS4:
      return os << "ProxyScheme::SOCKS4";
    case ProxyScheme::SOCKS5:
      return os << "ProxyScheme::SOCKS5";
    case ProxyScheme::HTTPS:
      return os << "ProxyScheme::HTTPS";
    case ProxyScheme::QUIC:
      return os << "ProxyScheme::QUIC";
    default:
      return os << "Unknown ProxyScheme value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool ProxyServer_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyServer_Data* object = static_cast<const ProxyServer_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }


  if (!::proxy_resolver::mojom::internal::ProxyScheme_Data
        ::Validate(object->scheme, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->host, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams host_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->host, validation_context,
                                         &host_validate_params)) {
    return false;
  }

  return true;
}

ProxyServer_Data::ProxyServer_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyInfo_Data* object = static_cast<const ProxyInfo_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->proxy_servers, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams proxy_servers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->proxy_servers, validation_context,
                                         &proxy_servers_validate_params)) {
    return false;
  }

  return true;
}

ProxyInfo_Data::ProxyInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HostResolverRequestClient_ReportResult_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HostResolverRequestClient_ReportResult_Params_Data* object = static_cast<const HostResolverRequestClient_ReportResult_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->result, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams result_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->result, validation_context,
                                         &result_validate_params)) {
    return false;
  }

  return true;
}

HostResolverRequestClient_ReportResult_Params_Data::HostResolverRequestClient_ReportResult_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyResolver_GetProxyForUrl_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolver_GetProxyForUrl_Params_Data* object = static_cast<const ProxyResolver_GetProxyForUrl_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

ProxyResolver_GetProxyForUrl_Params_Data::ProxyResolver_GetProxyForUrl_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyResolverRequestClient_ReportResult_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverRequestClient_ReportResult_Params_Data* object = static_cast<const ProxyResolverRequestClient_ReportResult_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->proxy_info, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->proxy_info, validation_context))
    return false;

  return true;
}

ProxyResolverRequestClient_ReportResult_Params_Data::ProxyResolverRequestClient_ReportResult_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyResolverRequestClient_Alert_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverRequestClient_Alert_Params_Data* object = static_cast<const ProxyResolverRequestClient_Alert_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error, validation_context,
                                         &error_validate_params)) {
    return false;
  }

  return true;
}

ProxyResolverRequestClient_Alert_Params_Data::ProxyResolverRequestClient_Alert_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyResolverRequestClient_OnError_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverRequestClient_OnError_Params_Data* object = static_cast<const ProxyResolverRequestClient_OnError_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error, validation_context,
                                         &error_validate_params)) {
    return false;
  }

  return true;
}

ProxyResolverRequestClient_OnError_Params_Data::ProxyResolverRequestClient_OnError_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyResolverRequestClient_ResolveDns_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverRequestClient_ResolveDns_Params_Data* object = static_cast<const ProxyResolverRequestClient_ResolveDns_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->host, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams host_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->host, validation_context,
                                         &host_validate_params)) {
    return false;
  }


  if (!::proxy_resolver::mojom::internal::HostResolveOperation_Data
        ::Validate(object->operation, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

ProxyResolverRequestClient_ResolveDns_Params_Data::ProxyResolverRequestClient_ResolveDns_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyResolverFactory_CreateResolver_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverFactory_CreateResolver_Params_Data* object = static_cast<const ProxyResolverFactory_CreateResolver_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->pac_script, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams pac_script_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->pac_script, validation_context,
                                         &pac_script_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->resolver, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->resolver,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

ProxyResolverFactory_CreateResolver_Params_Data::ProxyResolverFactory_CreateResolver_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyResolverFactoryRequestClient_ReportResult_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverFactoryRequestClient_ReportResult_Params_Data* object = static_cast<const ProxyResolverFactoryRequestClient_ReportResult_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  return true;
}

ProxyResolverFactoryRequestClient_ReportResult_Params_Data::ProxyResolverFactoryRequestClient_ReportResult_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyResolverFactoryRequestClient_Alert_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverFactoryRequestClient_Alert_Params_Data* object = static_cast<const ProxyResolverFactoryRequestClient_Alert_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error, validation_context,
                                         &error_validate_params)) {
    return false;
  }

  return true;
}

ProxyResolverFactoryRequestClient_Alert_Params_Data::ProxyResolverFactoryRequestClient_Alert_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyResolverFactoryRequestClient_OnError_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverFactoryRequestClient_OnError_Params_Data* object = static_cast<const ProxyResolverFactoryRequestClient_OnError_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error, validation_context,
                                         &error_validate_params)) {
    return false;
  }

  return true;
}

ProxyResolverFactoryRequestClient_OnError_Params_Data::ProxyResolverFactoryRequestClient_OnError_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProxyResolverFactoryRequestClient_ResolveDns_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* object = static_cast<const ProxyResolverFactoryRequestClient_ResolveDns_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->host, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams host_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->host, validation_context,
                                         &host_validate_params)) {
    return false;
  }


  if (!::proxy_resolver::mojom::internal::HostResolveOperation_Data
        ::Validate(object->operation, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

ProxyResolverFactoryRequestClient_ResolveDns_Params_Data::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace proxy_resolver

#if defined(_MSC_VER)
#pragma warning(pop)
#endif