#pragma once

#include "build/buildflag.h"

// see https://github.com/search?q=BUILDFLAG_INTERNAL_POSIX_AVOID_MMAP&type=Code

#define BUILDFLAG_INTERNAL_POSIX_AVOID_MMAP() (1)
#define BUILDFLAG_INTERNAL_DISABLE_FILE_SUPPORT() (1)
#define BUILDFLAG_INTERNAL_DISABLE_FTP_SUPPORT() (1)
#define BUILDFLAG_INTERNAL_ENABLE_MDNS() (0)
#define BUILDFLAG_INTERNAL_ENABLE_REPORTING() (0)
#define BUILDFLAG_INTERNAL_ENABLE_WEBSOCKETS() (0)
#define BUILDFLAG_INTERNAL_INCLUDE_TRANSPORT_SECURITY_STATE_PRELOAD_LIST() (0)
#define BUILDFLAG_INTERNAL_USE_KERBEROS() (0)
#define BUILDFLAG_INTERNAL_TRIAL_COMPARISON_CERT_VERIFIER_SUPPORTED() (0)