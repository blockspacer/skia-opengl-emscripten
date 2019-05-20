// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CDM_CDM_MODULE_H_
#define MEDIA_CDM_CDM_MODULE_H_

#include <memory>
#include <vector>

#include "base/files/file_path.h"
#include "base/macros.h"
#include "base/scoped_native_library.h"
#include "media/base/media_export.h"
#include "media/cdm/api/content_decryption_module.h"
#include "media/media_buildflags.h"

#if BUILDFLAG(ENABLE_CDM_HOST_VERIFICATION)
#include "media/cdm/cdm_host_file.h"
#include "media/cdm/cdm_host_files.h"
#endif  // BUILDFLAG(ENABLE_CDM_HOST_VERIFICATION)

namespace media {

class MEDIA_EXPORT CdmModule {
 public:
  static CdmModule* GetInstance();

  // Reset the CdmModule instance so that each test have it's own instance.
  static void ResetInstanceForTesting();

  ~CdmModule();

  using CreateCdmFunc = void* (*)(int cdm_interface_version,
                                  const char* key_system,
                                  uint32_t key_system_size,
                                  GetCdmHostFunc get_cdm_host_func,
                                  void* user_data);

  CreateCdmFunc GetCreateCdmFunc();

// Loads the CDM, initialize function pointers and initialize the CDM module.
// This must only be called only once.
#if BUILDFLAG(ENABLE_CDM_HOST_VERIFICATION)
  bool Initialize(const base::FilePath& cdm_path,
                  std::vector<CdmHostFilePath> cdm_host_file_paths);
#else
  bool Initialize(const base::FilePath& cdm_path);
#endif  // BUILDFLAG(ENABLE_CDM_HOST_VERIFICATION)

  // Calls INITIALIZE_CDM_MODULE on the actually library CDM. Must be called
  // within the sandbox!
  void InitializeCdmModule();

  base::FilePath GetCdmPath() const;

  bool was_initialize_called() const { return was_initialize_called_; }

 private:
  using InitializeCdmModuleFunc = void (*)();
  using DeinitializeCdmModuleFunc = void (*)();
  using GetCdmVersionFunc = char* (*)();

  CdmModule();

  bool was_initialize_called_ = false;
  base::FilePath cdm_path_;
  base::ScopedNativeLibrary library_;
  CreateCdmFunc create_cdm_func_ = nullptr;
  InitializeCdmModuleFunc initialize_cdm_module_func_ = nullptr;
  DeinitializeCdmModuleFunc deinitialize_cdm_module_func_ = nullptr;
  GetCdmVersionFunc get_cdm_version_func_ = nullptr;

  DISALLOW_COPY_AND_ASSIGN(CdmModule);
};

}  // namespace media

#endif  // MEDIA_CDM_CDM_MODULE_H_
