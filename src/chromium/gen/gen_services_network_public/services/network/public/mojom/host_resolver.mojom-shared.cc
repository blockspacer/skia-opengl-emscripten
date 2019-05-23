// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/host_resolver.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/host_resolver.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, DnsQueryType value) {
  switch(value) {
    case DnsQueryType::UNSPECIFIED:
      return os << "DnsQueryType::UNSPECIFIED";
    case DnsQueryType::A:
      return os << "DnsQueryType::A";
    case DnsQueryType::AAAA:
      return os << "DnsQueryType::AAAA";
    case DnsQueryType::TXT:
      return os << "DnsQueryType::TXT";
    case DnsQueryType::PTR:
      return os << "DnsQueryType::PTR";
    case DnsQueryType::SRV:
      return os << "DnsQueryType::SRV";
    default:
      return os << "Unknown DnsQueryType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, DnsConfigOverrides_Tristate value) {
  switch(value) {
    case DnsConfigOverrides_Tristate::NO_OVERRIDE:
      return os << "DnsConfigOverrides_Tristate::NO_OVERRIDE";
    case DnsConfigOverrides_Tristate::TRISTATE_TRUE:
      return os << "DnsConfigOverrides_Tristate::TRISTATE_TRUE";
    case DnsConfigOverrides_Tristate::TRISTATE_FALSE:
      return os << "DnsConfigOverrides_Tristate::TRISTATE_FALSE";
    default:
      return os << "Unknown DnsConfigOverrides_Tristate value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ResolveHostParameters_Source value) {
  switch(value) {
    case ResolveHostParameters_Source::ANY:
      return os << "ResolveHostParameters_Source::ANY";
    case ResolveHostParameters_Source::SYSTEM:
      return os << "ResolveHostParameters_Source::SYSTEM";
    case ResolveHostParameters_Source::DNS:
      return os << "ResolveHostParameters_Source::DNS";
    case ResolveHostParameters_Source::MULTICAST_DNS:
      return os << "ResolveHostParameters_Source::MULTICAST_DNS";
    case ResolveHostParameters_Source::LOCAL_ONLY:
      return os << "ResolveHostParameters_Source::LOCAL_ONLY";
    default:
      return os << "Unknown ResolveHostParameters_Source value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, MdnsListenClient_UpdateType value) {
  switch(value) {
    case MdnsListenClient_UpdateType::ADDED:
      return os << "MdnsListenClient_UpdateType::ADDED";
    case MdnsListenClient_UpdateType::CHANGED:
      return os << "MdnsListenClient_UpdateType::CHANGED";
    case MdnsListenClient_UpdateType::REMOVED:
      return os << "MdnsListenClient_UpdateType::REMOVED";
    default:
      return os << "Unknown MdnsListenClient_UpdateType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool DnsHost_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DnsHost_Data* object = static_cast<const DnsHost_Data*>(data);

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
          object->hostname, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams hostname_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->hostname, validation_context,
                                         &hostname_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->address, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->address, validation_context))
    return false;

  return true;
}

DnsHost_Data::DnsHost_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DnsOverHttpsServer_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DnsOverHttpsServer_Data* object = static_cast<const DnsOverHttpsServer_Data*>(data);

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
          object->server_template, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams server_template_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->server_template, validation_context,
                                         &server_template_validate_params)) {
    return false;
  }

  return true;
}

DnsOverHttpsServer_Data::DnsOverHttpsServer_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DnsConfigOverrides_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DnsConfigOverrides_Data* object = static_cast<const DnsConfigOverrides_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 72 }};

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

  const mojo::internal::ContainerValidateParams nameservers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->nameservers, validation_context,
                                         &nameservers_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams search_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->search, validation_context,
                                         &search_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams hosts_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->hosts, validation_context,
                                         &hosts_validate_params)) {
    return false;
  }


  if (!::network::mojom::internal::DnsConfigOverrides_Tristate_Data
        ::Validate(object->append_to_multi_label_name, validation_context))
    return false;


  if (!::network::mojom::internal::DnsConfigOverrides_Tristate_Data
        ::Validate(object->randomize_ports, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->timeout, validation_context))
    return false;


  if (!::network::mojom::internal::DnsConfigOverrides_Tristate_Data
        ::Validate(object->rotate, validation_context))
    return false;


  if (!::network::mojom::internal::DnsConfigOverrides_Tristate_Data
        ::Validate(object->use_local_ipv6, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams dns_over_https_servers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->dns_over_https_servers, validation_context,
                                         &dns_over_https_servers_validate_params)) {
    return false;
  }

  return true;
}

DnsConfigOverrides_Data::DnsConfigOverrides_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ResolveHostParameters_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ResolveHostParameters_Data* object = static_cast<const ResolveHostParameters_Data*>(data);

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


  if (!::network::mojom::internal::DnsQueryType_Data
        ::Validate(object->dns_query_type, validation_context))
    return false;


  if (!::network::mojom::internal::RequestPriority_Data
        ::Validate(object->initial_priority, validation_context))
    return false;


  if (!::network::mojom::internal::ResolveHostParameters_Source_Data
        ::Validate(object->source, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterface(object->control_handle,
                                                 validation_context)) {
    return false;
  }

  return true;
}

ResolveHostParameters_Data::ResolveHostParameters_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ResolveHostHandle_Cancel_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ResolveHostHandle_Cancel_Params_Data* object = static_cast<const ResolveHostHandle_Cancel_Params_Data*>(data);

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

ResolveHostHandle_Cancel_Params_Data::ResolveHostHandle_Cancel_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ResolveHostClient_OnComplete_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ResolveHostClient_OnComplete_Params_Data* object = static_cast<const ResolveHostClient_OnComplete_Params_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->resolved_addresses, validation_context))
    return false;

  return true;
}

ResolveHostClient_OnComplete_Params_Data::ResolveHostClient_OnComplete_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ResolveHostClient_OnTextResults_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ResolveHostClient_OnTextResults_Params_Data* object = static_cast<const ResolveHostClient_OnTextResults_Params_Data*>(data);

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
          object->text_results, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams text_results_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->text_results, validation_context,
                                         &text_results_validate_params)) {
    return false;
  }

  return true;
}

ResolveHostClient_OnTextResults_Params_Data::ResolveHostClient_OnTextResults_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ResolveHostClient_OnHostnameResults_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ResolveHostClient_OnHostnameResults_Params_Data* object = static_cast<const ResolveHostClient_OnHostnameResults_Params_Data*>(data);

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
          object->hosts, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams hosts_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->hosts, validation_context,
                                         &hosts_validate_params)) {
    return false;
  }

  return true;
}

ResolveHostClient_OnHostnameResults_Params_Data::ResolveHostClient_OnHostnameResults_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MdnsListenClient_OnAddressResult_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MdnsListenClient_OnAddressResult_Params_Data* object = static_cast<const MdnsListenClient_OnAddressResult_Params_Data*>(data);

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


  if (!::network::mojom::internal::MdnsListenClient_UpdateType_Data
        ::Validate(object->update_type, validation_context))
    return false;


  if (!::network::mojom::internal::DnsQueryType_Data
        ::Validate(object->query_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->endpoint, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->endpoint, validation_context))
    return false;

  return true;
}

MdnsListenClient_OnAddressResult_Params_Data::MdnsListenClient_OnAddressResult_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MdnsListenClient_OnTextResult_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MdnsListenClient_OnTextResult_Params_Data* object = static_cast<const MdnsListenClient_OnTextResult_Params_Data*>(data);

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


  if (!::network::mojom::internal::MdnsListenClient_UpdateType_Data
        ::Validate(object->update_type, validation_context))
    return false;


  if (!::network::mojom::internal::DnsQueryType_Data
        ::Validate(object->query_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->text_records, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams text_records_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->text_records, validation_context,
                                         &text_records_validate_params)) {
    return false;
  }

  return true;
}

MdnsListenClient_OnTextResult_Params_Data::MdnsListenClient_OnTextResult_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MdnsListenClient_OnHostnameResult_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MdnsListenClient_OnHostnameResult_Params_Data* object = static_cast<const MdnsListenClient_OnHostnameResult_Params_Data*>(data);

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


  if (!::network::mojom::internal::MdnsListenClient_UpdateType_Data
        ::Validate(object->update_type, validation_context))
    return false;


  if (!::network::mojom::internal::DnsQueryType_Data
        ::Validate(object->query_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->host, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->host, validation_context))
    return false;

  return true;
}

MdnsListenClient_OnHostnameResult_Params_Data::MdnsListenClient_OnHostnameResult_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MdnsListenClient_OnUnhandledResult_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MdnsListenClient_OnUnhandledResult_Params_Data* object = static_cast<const MdnsListenClient_OnUnhandledResult_Params_Data*>(data);

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


  if (!::network::mojom::internal::MdnsListenClient_UpdateType_Data
        ::Validate(object->update_type, validation_context))
    return false;


  if (!::network::mojom::internal::DnsQueryType_Data
        ::Validate(object->query_type, validation_context))
    return false;

  return true;
}

MdnsListenClient_OnUnhandledResult_Params_Data::MdnsListenClient_OnUnhandledResult_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HostResolver_ResolveHost_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HostResolver_ResolveHost_Params_Data* object = static_cast<const HostResolver_ResolveHost_Params_Data*>(data);

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
  if (!mojo::internal::ValidateStruct(object->host, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->optional_parameters, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->response_client, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->response_client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

HostResolver_ResolveHost_Params_Data::HostResolver_ResolveHost_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HostResolver_MdnsListen_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HostResolver_MdnsListen_Params_Data* object = static_cast<const HostResolver_MdnsListen_Params_Data*>(data);

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
  if (!mojo::internal::ValidateStruct(object->host, validation_context))
    return false;


  if (!::network::mojom::internal::DnsQueryType_Data
        ::Validate(object->query_type, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->response_client, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->response_client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

HostResolver_MdnsListen_Params_Data::HostResolver_MdnsListen_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HostResolver_MdnsListen_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HostResolver_MdnsListen_ResponseParams_Data* object = static_cast<const HostResolver_MdnsListen_ResponseParams_Data*>(data);

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

HostResolver_MdnsListen_ResponseParams_Data::HostResolver_MdnsListen_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data* object = static_cast<const DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data::DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DnsConfigChangeManager_RequestNotifications_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DnsConfigChangeManager_RequestNotifications_Params_Data* object = static_cast<const DnsConfigChangeManager_RequestNotifications_Params_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client_ptr, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client_ptr,
                                                 validation_context)) {
    return false;
  }

  return true;
}

DnsConfigChangeManager_RequestNotifications_Params_Data::DnsConfigChangeManager_RequestNotifications_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif