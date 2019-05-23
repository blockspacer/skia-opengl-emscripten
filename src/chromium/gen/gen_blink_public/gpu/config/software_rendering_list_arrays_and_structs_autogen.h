// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
//    gpu/config/process_json.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#ifndef GPU_CONFIG_SOFTWARE_RENDERING_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_
#define GPU_CONFIG_SOFTWARE_RENDERING_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_

#include "gpu/config/gpu_feature_type.h"

namespace gpu {
const int kFeatureListForSoftwareEntry3[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry3[2] = {
59302,
315217,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry3 = {
nullptr,
"(?i).*software.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry3_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry4[4] = {
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
};

const uint32_t kCrBugsForSoftwareEntry4[1] = {
232035,
};

const uint32_t kDeviceIDsForSoftwareEntry4[2] = {
0x27AE,
0x27A2,
};

const GpuControlList::More kMoreForEntry4_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry5[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry5[6] = {
71381,
76428,
73910,
101225,
136240,
357314,
};

const GpuControlList::More kMoreForEntry5_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry5Exception0 = {
".*AMD.*",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleLexical, "8.98", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry5_1043157500Exception0 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry5Exception1 = {
"Mesa",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "10.0.4", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry5_1043157500Exception1 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry5Exception2 = {
".*ANGLE.*",  // driver_vendor
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry5_1043157500Exception2 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry8[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry8[1] = {
72938,
};

const uint32_t kDeviceIDsForSoftwareEntry8[1] = {
0x0324,
};

const GpuControlList::More kMoreForEntry8_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry17[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry17[4] = {
76703,
164555,
225200,
340886,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry17 = {
"Mesa",  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "10.1", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry17_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const uint32_t kDeviceIDsForSoftwareEntry17Exception0[12] = {
0x0102,
0x0106,
0x0112,
0x0116,
0x0122,
0x0126,
0x010a,
0x0152,
0x0156,
0x015a,
0x0162,
0x0166,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry17Exception0 = {
nullptr,  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "8.0", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry17_1043157500Exception0 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const uint32_t kDeviceIDsForSoftwareEntry17Exception1[16] = {
0xa001,
0xa002,
0xa011,
0xa012,
0x29a2,
0x2992,
0x2982,
0x2972,
0x2a12,
0x2a42,
0x2e02,
0x2e12,
0x2e22,
0x2e32,
0x2e42,
0x2e92,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry17Exception1 = {
nullptr,  // driver_vendor
{GpuControlList::kGT, GpuControlList::kVersionStyleNumerical, "8.0.2", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry17_1043157500Exception1 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const uint32_t kDeviceIDsForSoftwareEntry17Exception2[2] = {
0x0042,
0x0046,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry17Exception2 = {
nullptr,  // driver_vendor
{GpuControlList::kGT, GpuControlList::kVersionStyleNumerical, "8.0.4", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry17_1043157500Exception2 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const uint32_t kDeviceIDsForSoftwareEntry17Exception3[1] = {
0x2a02,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry17Exception3 = {
nullptr,  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "9.1", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry17_1043157500Exception3 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const uint32_t kDeviceIDsForSoftwareEntry17Exception4[2] = {
0x0a16,
0x0a26,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry17Exception4 = {
nullptr,  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "10.0.1", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry17_1043157500Exception4 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry18[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry18[1] = {
84701,
};

const uint32_t kDeviceIDsForSoftwareEntry18[1] = {
0x029e,
};

const GpuControlList::More kMoreForEntry18_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry27[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry27[4] = {
95934,
94973,
136240,
357314,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry27 = {
"ATI.*",
nullptr,
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry27_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry27Exception0 = {
".*AMD.*",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleLexical, "8.98", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry27_1043157500Exception0 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry27Exception1 = {
"Mesa",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "10.0.4", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry27_1043157500Exception1 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry28[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry28[3] = {
95934,
94973,
357314,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry28 = {
"X\\.Org.*",
".*AMD.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry28_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry28Exception0 = {
"Mesa",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "10.0.4", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry28_1043157500Exception0 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry29[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry29[3] = {
95934,
94973,
357314,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry29 = {
"X\\.Org.*",
".*ATI.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry29_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry29Exception0 = {
"Mesa",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "10.0.4", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry29_1043157500Exception0 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry30[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry30[2] = {
94103,
876523,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry30 = {
"Mesa",  // driver_vendor
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry30 = {
"(?i)nouveau.*",
nullptr,
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry30_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry37[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry37[2] = {
131308,
363418,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry37 = {
"Mesa",  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "10.1", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry37 = {
"Intel.*",
nullptr,
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry37_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry47[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry47[1] = {
78497,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry47 = {
"NVIDIA",  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "295", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry47_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry48[1] = {
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
};

const uint32_t kCrBugsForSoftwareEntry48[1] = {
137247,
};

const GpuControlList::More kMoreForEntry48_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry50[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry50[4] = {
145531,
332596,
571899,
629434,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry50 = {
"VMware.*",
nullptr,
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry50_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry50Exception0 = {
"Mesa",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "9.2.1", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry50Exception0 = {
nullptr,
".*SVGA3D.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry50_1043157500Exception0 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry50Exception1 = {
"Mesa",  // driver_vendor
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, "10.1.3", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry50Exception1 = {
nullptr,
".*llvmpipe.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry50_1043157500Exception1 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry53[1] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
};

const uint32_t kCrBugsForSoftwareEntry53[1] = {
152096,
};

const uint32_t kDeviceIDsForSoftwareEntry53[2] = {
0x8108,
0x8109,
};

const GpuControlList::More kMoreForEntry53_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry56[3] = {
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
};

const uint32_t kCrBugsForSoftwareEntry56[1] = {
145600,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry56 = {
"NVIDIA",  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "331.38", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry56_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry93[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry93[1] = {
72373,
};

const GpuControlList::More kMoreForEntry93_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "2", nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry95[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry95[1] = {
363378,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry95 = {
".*AMD.*",  // driver_vendor
{GpuControlList::kEQ, GpuControlList::kVersionStyleNumerical, "13.101", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry95_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry107[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry107[1] = {
463243,
};

const GpuSeriesType kGpuSeriesForEntry107[1] = {
GpuSeriesType::kIntelHaswell,
};

const GpuControlList::More kMoreForEntry107_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry110[11] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry110[1] = {
571899,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry110 = {
"Mesa",  // driver_vendor
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry110 = {
"VMware.*",
".*llvmpipe.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry110_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry125[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry125[2] = {
656572,
658668,
};

const uint32_t kDeviceIDsForSoftwareEntry125[1] = {
0xbeef,
};

const GpuControlList::More kMoreForEntry125_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry129[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry129[1] = {
662909,
};

const GpuControlList::More kMoreForEntry129_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry131[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry131[1] = {
462426,
};

const uint32_t kDeviceIDsForSoftwareEntry131[1] = {
0x2a02,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry131 = {
"Mesa",  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, "10.4.3", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry131_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry134[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry134[1] = {
629434,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry134 = {
"Mesa",  // driver_vendor
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, "10.1.3", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry134_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry134Exception0 = {
nullptr,
".*SVGA3D.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry134_1043157500Exception0 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry134Exception1 = {
nullptr,
".*llvmpipe.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry134_1043157500Exception1 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry134Exception2 = {
nullptr,
"Mesa OffScreen",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry134_1043157500Exception2 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry140[1] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
};

const uint32_t kCrBugsForSoftwareEntry140[2] = {
449116,
698197,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry140 = {
nullptr,
"Adreno \\(TM\\) 3.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry140_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry152[11] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const GpuControlList::More kMoreForEntry152_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
1,  // test_group
};

const int kFeatureListForSoftwareEntry153[1] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
};

const GpuControlList::More kMoreForEntry153_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
2,  // test_group
};

const int kFeatureListForSoftwareEntry154[1] = {
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
};

const GpuControlList::More kMoreForEntry154_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const GpuControlList::More kMoreForEntry154_1043157500Exception0 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

const int kFeatureListForSoftwareEntry161[12] = {
GPU_FEATURE_TYPE_FLASH_STAGE3D,
GPU_FEATURE_TYPE_GPU_COMPOSITING,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_FLASH3D,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_PROTECTED_VIDEO_DECODE,
GPU_FEATURE_TYPE_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_FLASH_STAGE3D_BASELINE,
};

const uint32_t kCrBugsForSoftwareEntry161[1] = {
890688,
};

const uint32_t kDeviceIDsForSoftwareEntry161[1] = {
0x2a42,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry161 = {
nullptr,  // driver_vendor
{GpuControlList::kEQ, GpuControlList::kVersionStyleNumerical, "18.1.7", nullptr},  // driver_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // driver_date
};

const GpuControlList::More kMoreForEntry161_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
};

}  // namespace gpu

#endif  // GPU_CONFIG_SOFTWARE_RENDERING_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_
