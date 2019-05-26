// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
//    gpu/config/process_json.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#include "gpu/config/software_rendering_list_autogen.h"

#include "gpu/config/software_rendering_list_arrays_and_structs_autogen.h"
#include "gpu/config/software_rendering_list_exceptions_autogen.h"

namespace gpu {

const GpuControlList::Entry kSoftwareRenderingListEntries[] = {
{
3,  // id
"GL driver is software rendered. GPU acceleration is disabled",
base::size(kFeatureListForSoftwareEntry3),  // features size
kFeatureListForSoftwareEntry3,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry3),  // CrBugs size
kCrBugsForSoftwareEntry3,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry3,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry3_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
4,  // id
"The Intel Mobile 945 Express family of chipsets is not compatible with WebGL",
base::size(kFeatureListForSoftwareEntry4),  // features size
kFeatureListForSoftwareEntry4,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry4),  // CrBugs size
kCrBugsForSoftwareEntry4,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
base::size(kDeviceIDsForSoftwareEntry4),  // DeviceIDs size
kDeviceIDsForSoftwareEntry4,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry4_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
5,  // id
"ATI/AMD cards with older drivers in Linux are crash-prone",
base::size(kFeatureListForSoftwareEntry5),  // features size
kFeatureListForSoftwareEntry5,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry5),  // CrBugs size
kCrBugsForSoftwareEntry5,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x1002,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry5_1043157500,  // more data
},
base::size(kExceptionsForEntry5),  // exceptions count
kExceptionsForEntry5,  // exceptions
},
{
8,  // id
"NVIDIA GeForce FX Go5200 is assumed to be buggy",
base::size(kFeatureListForSoftwareEntry8),  // features size
kFeatureListForSoftwareEntry8,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry8),  // CrBugs size
kCrBugsForSoftwareEntry8,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
base::size(kDeviceIDsForSoftwareEntry8),  // DeviceIDs size
kDeviceIDsForSoftwareEntry8,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry8_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
17,  // id
"Older Intel mesa drivers are crash-prone",
base::size(kFeatureListForSoftwareEntry17),  // features size
kFeatureListForSoftwareEntry17,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry17),  // CrBugs size
kCrBugsForSoftwareEntry17,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForSoftwareEntry17,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry17_1043157500,  // more data
},
base::size(kExceptionsForEntry17),  // exceptions count
kExceptionsForEntry17,  // exceptions
},
{
18,  // id
"NVIDIA Quadro FX 1500 is buggy",
base::size(kFeatureListForSoftwareEntry18),  // features size
kFeatureListForSoftwareEntry18,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry18),  // CrBugs size
kCrBugsForSoftwareEntry18,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
base::size(kDeviceIDsForSoftwareEntry18),  // DeviceIDs size
kDeviceIDsForSoftwareEntry18,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry18_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
27,  // id
"ATI/AMD cards with older drivers in Linux are crash-prone",
base::size(kFeatureListForSoftwareEntry27),  // features size
kFeatureListForSoftwareEntry27,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry27),  // CrBugs size
kCrBugsForSoftwareEntry27,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry27,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry27_1043157500,  // more data
},
base::size(kExceptionsForEntry27),  // exceptions count
kExceptionsForEntry27,  // exceptions
},
{
28,  // id
"ATI/AMD cards with third-party drivers in Linux are crash-prone",
base::size(kFeatureListForSoftwareEntry28),  // features size
kFeatureListForSoftwareEntry28,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry28),  // CrBugs size
kCrBugsForSoftwareEntry28,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry28,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry28_1043157500,  // more data
},
base::size(kExceptionsForEntry28),  // exceptions count
kExceptionsForEntry28,  // exceptions
},
{
29,  // id
"ATI/AMD cards with third-party drivers in Linux are crash-prone",
base::size(kFeatureListForSoftwareEntry29),  // features size
kFeatureListForSoftwareEntry29,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry29),  // CrBugs size
kCrBugsForSoftwareEntry29,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry29,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry29_1043157500,  // more data
},
base::size(kExceptionsForEntry29),  // exceptions count
kExceptionsForEntry29,  // exceptions
},
{
30,  // id
"NVIDIA cards with nouveau drivers in Linux are unstable",
base::size(kFeatureListForSoftwareEntry30),  // features size
kFeatureListForSoftwareEntry30,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry30),  // CrBugs size
kCrBugsForSoftwareEntry30,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForSoftwareEntry30,  // driver info
&kGLStringsForSoftwareEntry30,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry30_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
37,  // id
"Older drivers are unreliable for Optimus on Linux",
base::size(kFeatureListForSoftwareEntry37),  // features size
kFeatureListForSoftwareEntry37,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry37),  // CrBugs size
kCrBugsForSoftwareEntry37,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleOptimus,  // multi_gpu_style
&kDriverInfoForSoftwareEntry37,  // driver info
&kGLStringsForSoftwareEntry37,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry37_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
47,  // id
"NVIDIA linux drivers older than 295.* are assumed to be buggy",
base::size(kFeatureListForSoftwareEntry47),  // features size
kFeatureListForSoftwareEntry47,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry47),  // CrBugs size
kCrBugsForSoftwareEntry47,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForSoftwareEntry47,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry47_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
48,  // id
"Accelerated video decode is unavailable on Linux",
base::size(kFeatureListForSoftwareEntry48),  // features size
kFeatureListForSoftwareEntry48,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry48),  // CrBugs size
kCrBugsForSoftwareEntry48,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry48_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
50,  // id
"Disable VMware software renderer on older Mesa",
base::size(kFeatureListForSoftwareEntry50),  // features size
kFeatureListForSoftwareEntry50,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry50),  // CrBugs size
kCrBugsForSoftwareEntry50,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry50,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry50_1043157500,  // more data
},
base::size(kExceptionsForEntry50),  // exceptions count
kExceptionsForEntry50,  // exceptions
},
{
53,  // id
"The Intel GMA500 is too slow for Stage3D",
base::size(kFeatureListForSoftwareEntry53),  // features size
kFeatureListForSoftwareEntry53,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry53),  // CrBugs size
kCrBugsForSoftwareEntry53,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
base::size(kDeviceIDsForSoftwareEntry53),  // DeviceIDs size
kDeviceIDsForSoftwareEntry53,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry53_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
56,  // id
"NVIDIA linux drivers are unstable when using multiple Open GL contexts and with low memory",
base::size(kFeatureListForSoftwareEntry56),  // features size
kFeatureListForSoftwareEntry56,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry56),  // CrBugs size
kCrBugsForSoftwareEntry56,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForSoftwareEntry56,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry56_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
93,  // id
"GLX indirect rendering (X remoting) is not supported",
base::size(kFeatureListForSoftwareEntry93),  // features size
kFeatureListForSoftwareEntry93,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry93),  // CrBugs size
kCrBugsForSoftwareEntry93,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry93_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
95,  // id
"AMD driver version 13.101 is unstable on linux.",
base::size(kFeatureListForSoftwareEntry95),  // features size
kFeatureListForSoftwareEntry95,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry95),  // CrBugs size
kCrBugsForSoftwareEntry95,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x1002,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForSoftwareEntry95,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry95_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
107,  // id
"Haswell GT1 Intel drivers are buggy on kernels < 3.19.1",
base::size(kFeatureListForSoftwareEntry107),  // features size
kFeatureListForSoftwareEntry107,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry107),  // CrBugs size
kCrBugsForSoftwareEntry107,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "3.19.1", nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
base::size(kGpuSeriesForEntry107),  // gpu_series size
kGpuSeriesForEntry107,  // gpu_series
&kMoreForEntry107_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
110,  // id
"Only enable WebGL for the Mesa Gallium llvmpipe driver",
base::size(kFeatureListForSoftwareEntry110),  // features size
kFeatureListForSoftwareEntry110,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry110),  // CrBugs size
kCrBugsForSoftwareEntry110,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForSoftwareEntry110,  // driver info
&kGLStringsForSoftwareEntry110,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry110_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
125,  // id
"VirtualBox driver is unstable on linux.",
base::size(kFeatureListForSoftwareEntry125),  // features size
kFeatureListForSoftwareEntry125,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry125),  // CrBugs size
kCrBugsForSoftwareEntry125,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x80ee,  // vendor_id
base::size(kDeviceIDsForSoftwareEntry125),  // DeviceIDs size
kDeviceIDsForSoftwareEntry125,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry125_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
129,  // id
"Intel drivers are buggy on Linux 2.x",
base::size(kFeatureListForSoftwareEntry129),  // features size
kFeatureListForSoftwareEntry129,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry129),  // CrBugs size
kCrBugsForSoftwareEntry129,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "3.0", nullptr},  // os_version
0x8086,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry129_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
131,  // id
"Mesa drivers older than 10.4.3 is crash prone on Linux Intel i965gm",
base::size(kFeatureListForSoftwareEntry131),  // features size
kFeatureListForSoftwareEntry131,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry131),  // CrBugs size
kCrBugsForSoftwareEntry131,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x1f96,  // vendor_id
base::size(kDeviceIDsForSoftwareEntry131),  // DeviceIDs size
kDeviceIDsForSoftwareEntry131,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForSoftwareEntry131,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry131_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
134,  // id
"Mesa driver 10.1.3 renders incorrectly and crashes on multiple vendors",
base::size(kFeatureListForSoftwareEntry134),  // features size
kFeatureListForSoftwareEntry134,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry134),  // CrBugs size
kCrBugsForSoftwareEntry134,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForSoftwareEntry134,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry134_1043157500,  // more data
},
base::size(kExceptionsForEntry134),  // exceptions count
kExceptionsForEntry134,  // exceptions
},
{
140,  // id
"MSAA and depth texture buggy on Adreno 3xx, also disable WebGL2",
base::size(kFeatureListForSoftwareEntry140),  // features size
kFeatureListForSoftwareEntry140,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry140),  // CrBugs size
kCrBugsForSoftwareEntry140,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry140,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry140_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
152,  // id
"Test entry where all features except WebGL blacklisted",
base::size(kFeatureListForSoftwareEntry152),  // features size
kFeatureListForSoftwareEntry152,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
0,  // CrBugs size
nullptr,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry152_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
153,  // id
"Test entry where WebGL is blacklisted",
base::size(kFeatureListForSoftwareEntry153),  // features size
kFeatureListForSoftwareEntry153,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
0,  // CrBugs size
nullptr,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry153_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
154,  // id
"Protected video decoding with swap chain is for Windows and Intel only",
base::size(kFeatureListForSoftwareEntry154),  // features size
kFeatureListForSoftwareEntry154,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
0,  // CrBugs size
nullptr,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // DeviceIDs size
nullptr,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry154_1043157500,  // more data
},
base::size(kExceptionsForEntry154),  // exceptions count
kExceptionsForEntry154,  // exceptions
},
{
161,  // id
"Newer Mesa drivers experience visual corruption on very old hardware",
base::size(kFeatureListForSoftwareEntry161),  // features size
kFeatureListForSoftwareEntry161,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
base::size(kCrBugsForSoftwareEntry161),  // CrBugs size
kCrBugsForSoftwareEntry161,  // CrBugs
{
GpuControlList::kOsLinux,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
base::size(kDeviceIDsForSoftwareEntry161),  // DeviceIDs size
kDeviceIDsForSoftwareEntry161,  // DeviceIDs
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForSoftwareEntry161,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // gpu_series size
nullptr,  // gpu_series
&kMoreForEntry161_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
};
const size_t kSoftwareRenderingListEntryCount = 29;
}  // namespace gpu
