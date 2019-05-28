# Copyright 2016 The Cobalt Authors. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
"""Utilities to use the toolchain from the Android NDK."""

import ConfigParser
import fcntl
import hashlib
import logging
import os
import re
import shutil
import StringIO
import subprocess
import sys
import time
import urllib
import zipfile

from starboard.tools import build

# The API level of NDK standalone toolchain to install. This should be the
# minimum API level on which the app is expected to run. If some feature from a
# newer NDK level is needed, this may be increased with caution.
# https://developer.android.com/ndk/guides/stable_apis.html
#
# Using 24 will lead to missing symbols on API 23 devices.
# https://github.com/android-ndk/ndk/issues/126
_ANDROID_NDK_API_LEVEL = '21'

# Packages to install in the Android SDK.
# Get available packages from "sdkmanager --list --verbose"
_ANDROID_SDK_PACKAGES = [
    'build-tools;28.0.3',
    'cmake;3.6.4111459',
    'emulator',
    'extras;android;m2repository',
    'extras;google;m2repository',
    'lldb;3.1',
    'ndk-bundle',
    'patcher;v4',
    'platforms;android-28',
    'platform-tools',
    'tools',
]

# Seconds to sleep before writing "y" for android sdk update license prompt.
_SDK_LICENSE_PROMPT_SLEEP_SECONDS = 5

# Location from which to download the SDK command-line tools
# see https://developer.android.com/studio/index.html#command-tools
_SDK_URL = 'https://dl.google.com/android/repository/sdk-tools-linux-3859397.zip'

_STARBOARD_TOOLCHAINS_DIR = build.GetToolchainsDir()

# The path to the Android SDK, if placed inside of starboard-toolchains.
_STARBOARD_TOOLCHAINS_SDK_DIR = os.path.join(_STARBOARD_TOOLCHAINS_DIR,
                                             'AndroidSdk')

_ANDROID_HOME = os.environ.get('ANDROID_HOME')
if _ANDROID_HOME:
  _SDK_PATH = _ANDROID_HOME
else:
  _SDK_PATH = _STARBOARD_TOOLCHAINS_SDK_DIR

_ANDROID_NDK_HOME = os.environ.get('ANDROID_NDK_HOME')
if _ANDROID_NDK_HOME:
  _NDK_PATH = _ANDROID_NDK_HOME
else:
  _NDK_PATH = os.path.join(_SDK_PATH, 'ndk-bundle')

_SDKMANAGER_TOOL = os.path.join(_SDK_PATH, 'tools', 'bin', 'sdkmanager')

# Maps the Android ABI to the architecture name of the toolchain.
_TOOLS_ABI_ARCH_MAP = {
    'x86': 'x86',
    'armeabi': 'arm',
    'armeabi-v7a': 'arm',
    'arm64-v8a': 'arm64',
}

_SCRIPT_HASH_PROPERTY = 'SdkUtils.Hash'

with open(__file__, 'rb') as script:
  _SCRIPT_HASH = hashlib.md5(script.read()).hexdigest()


def GetToolsPath(abi):
  """Returns the path where the NDK standalone toolchain should be."""
  tools_arch = _TOOLS_ABI_ARCH_MAP[abi]
  tools_dir = 'android_toolchain_api{}_{}'.format(_ANDROID_NDK_API_LEVEL,
                                                  tools_arch)
  return os.path.realpath(os.path.join(_STARBOARD_TOOLCHAINS_DIR, tools_dir))


def _CheckStamp(dir_path):
  """Checks that the specified directory is up-to-date with the NDK."""
  stamp_path = os.path.join(dir_path, 'ndk.stamp')
  return (os.path.exists(stamp_path) and
          _ReadNdkRevision(stamp_path) == _GetInstalledNdkRevision() and
          _ReadProperty(stamp_path, _SCRIPT_HASH_PROPERTY) == _SCRIPT_HASH)


def _UpdateStamp(dir_path):
  """Updates the stamp file in the specified directory to the NDK revision."""
  path = GetNdkPath()
  properties_path = os.path.join(path, 'source.properties')
  stamp_path = os.path.join(dir_path, 'ndk.stamp')
  shutil.copyfile(properties_path, stamp_path)
  with open(stamp_path, 'a') as stamp:
    stamp.write('{} = {}\n'.format(_SCRIPT_HASH_PROPERTY, _SCRIPT_HASH))


def GetNdkPath():
  return _NDK_PATH


def GetSdkPath():
  return _SDK_PATH


def _ReadNdkRevision(properties_path):
  return _ReadProperty(properties_path, 'pkg.revision')


def _ReadProperty(properties_path, property_key):
  with open(properties_path, 'r') as f:
    ini_str = '[properties]\n' + f.read()
  config = ConfigParser.RawConfigParser()
  config.readfp(StringIO.StringIO(ini_str))
  try:
    return config.get('properties', property_key)
  except ConfigParser.NoOptionError:
    return None


def _GetInstalledNdkRevision():
  """Returns the installed NDK's revision."""
  path = GetNdkPath()
  properties_path = os.path.join(path, 'source.properties')
  try:
    return _ReadNdkRevision(properties_path)
  except IOError:
    logging.error("Error: Can't read NDK properties in %s", properties_path)
    sys.exit(1)


def InstallSdkIfNeeded(abi):
  """Installs appropriate SDK/NDK and NDK standalone tools if needed."""
  _MaybeDownloadAndInstallSdkAndNdk()
  _MaybeMakeToolchain(abi)


def _DownloadAndUnzipFile(url, destination_path):
  dl_file, dummy_headers = urllib.urlretrieve(url)
  _UnzipFile(dl_file, destination_path)


def _UnzipFile(zip_path, dest_path):
  """Extract all files and restore permissions from a zip file."""
  zip_file = zipfile.ZipFile(zip_path)
  for info in zip_file.infolist():
    zip_file.extract(info.filename, dest_path)
    os.chmod(os.path.join(dest_path, info.filename), info.external_attr >> 16L)


def _MaybeDownloadAndInstallSdkAndNdk():
  """Download the SDK and NDK if not already available."""
  # Hold an exclusive advisory lock on the _STARBOARD_TOOLCHAINS_DIR, to
  # prevent issues with modification for multiple variants.
  try:
    toolchains_dir_fd = os.open(_STARBOARD_TOOLCHAINS_DIR, os.O_RDONLY)
    fcntl.flock(toolchains_dir_fd, fcntl.LOCK_EX)

    if _ANDROID_HOME:
      if not os.access(_SDKMANAGER_TOOL, os.X_OK):
        logging.error('Error: ANDROID_HOME is set but SDK is not present!')
        sys.exit(1)
      logging.warning('Warning: Using Android SDK in ANDROID_HOME,'
                      ' which is not automatically updated.\n'
                      '         The following package versions are installed:')
      installed_packages = _GetInstalledSdkPackages()
      for package in _ANDROID_SDK_PACKAGES:
        version = installed_packages.get(package, '< MISSING! >')
        msg = '  {:30} : {}'.format(package, version)
        logging.warning(msg)
    else:
      logging.warning('Checking Android SDK.')
      _DownloadInstallOrUpdateSdk()

    if _ANDROID_NDK_HOME:
      logging.warning('Warning: Using Android NDK in ANDROID_NDK_HOME,'
                      ' which is not automatically updated')
    ndk_revision = _GetInstalledNdkRevision()
    logging.warning('Using Android NDK version %s', ndk_revision)

    if _ANDROID_HOME or _ANDROID_NDK_HOME:
      reply = raw_input(
          'Do you want to continue using your custom Android tools? [yN]')
      if reply.upper() != 'Y':
        sys.exit(1)

  finally:
    fcntl.flock(toolchains_dir_fd, fcntl.LOCK_UN)
    os.close(toolchains_dir_fd)


def _GetInstalledSdkPackages():
  """Returns a map of installed package name to package version."""
  # We detect and parse either new-style or old-style output from sdkmanager:
  #
  # [new-style]
  # Installed packages:
  # --------------------------------------
  # build-tools;25.0.2
  #     Description:        Android SDK Build-Tools 25.0.2
  #     Version:            25.0.2
  #     Installed Location: <abs path>
  # ...
  #
  # [old-style]
  # Installed packages:
  #   Path               | Version | Description                    | Location
  #   -------            | ------- | -------                        | -------
  #   build-tools;25.0.2 | 25.0.2  | Android SDK Build-Tools 25.0.2 | <rel path>
  # ...
  section_re = re.compile(r'^[A-Z][^:]*:$')
  version_re = re.compile(r'^\s+Version:\s+(\S+)')

  p = subprocess.Popen(
      [_SDKMANAGER_TOOL, '--list', '--verbose'], stdout=subprocess.PIPE)

  installed_package_versions = {}
  new_style = False
  old_style = False
  for line in iter(p.stdout.readline, ''):

    if section_re.match(line):
      if new_style or old_style:
        # We left the new/old style installed packages section
        break
      if line.startswith('Installed'):
        # Read the header of this section to determine new/old style
        line = p.stdout.readline().strip()
        new_style = line.startswith('----')
        old_style = line.startswith('Path')
        if old_style:
          line = p.stdout.readline().strip()
        if not line.startswith('----'):
          logging.error('Error: Unexpected SDK package listing format')
      continue

    # We're in the installed packages section, and it's new-style
    if new_style:
      if not line.startswith(' '):
        pkg_name = line.strip()
      else:
        m = version_re.match(line)
        if m:
          installed_package_versions[pkg_name] = m.group(1)

    # We're in the installed packages section, and it's old-style
    elif old_style:
      fields = [f.strip() for f in line.split('|', 2)]
      if len(fields) >= 2:
        installed_package_versions[fields[0]] = fields[1]

  # Discard the rest of the output
  p.communicate()
  return installed_package_versions


def _IsOnBuildbot():
  return 'BUILDBOT_BUILDERNAME' in os.environ


def _DownloadInstallOrUpdateSdk():
  """Downloads (if necessary) and installs/updates the Android SDK."""

  # If we can't access the "sdkmanager" tool, we need to download the SDK
  if not os.access(_SDKMANAGER_TOOL, os.X_OK):
    logging.warning('Downloading Android SDK to %s',
                    _STARBOARD_TOOLCHAINS_SDK_DIR)
    if os.path.exists(_STARBOARD_TOOLCHAINS_SDK_DIR):
      shutil.rmtree(_STARBOARD_TOOLCHAINS_SDK_DIR)
    _DownloadAndUnzipFile(_SDK_URL, _STARBOARD_TOOLCHAINS_SDK_DIR)
    if not os.access(_SDKMANAGER_TOOL, os.X_OK):
      logging.error('SDK download failed.')
      sys.exit(1)

  # Run the "sdkmanager" command with the appropriate packages

  if _IsOnBuildbot():
    stdin = subprocess.PIPE
  else:
    stdin = sys.stdin

  p = subprocess.Popen(
      [_SDKMANAGER_TOOL, '--verbose'] + _ANDROID_SDK_PACKAGES, stdin=stdin)

  if _IsOnBuildbot():
    time.sleep(_SDK_LICENSE_PROMPT_SLEEP_SECONDS)
    try:
      p.stdin.write('y\n')
    except IOError:
      logging.warning('There were no SDK licenses to accept.')

  p.wait()


def _MaybeMakeToolchain(abi):
  """Run the NDK's make_standalone_toolchain.py if necessary."""
  tools_arch = _TOOLS_ABI_ARCH_MAP[abi]
  tools_path = GetToolsPath(abi)
  if _CheckStamp(tools_path):
    logging.info('NDK %s toolchain already at %s', tools_arch,
                 _GetInstalledNdkRevision())
    return

  logging.warning('Installing NDK %s toolchain %s in %s', tools_arch,
                  _GetInstalledNdkRevision(), tools_path)

  if os.path.exists(tools_path):
    shutil.rmtree(tools_path)

  # Run the NDK script to make the standalone toolchain
  script_path = os.path.join(GetNdkPath(), 'build', 'tools',
                             'make_standalone_toolchain.py')
  args = [
      script_path, '--arch', tools_arch, '--api', _ANDROID_NDK_API_LEVEL,
      '--stl', 'libc++', '--install-dir', tools_path
  ]
  script_proc = subprocess.Popen(args)
  rc = script_proc.wait()
  if rc != 0:
    raise RuntimeError('%s failed.' % script_path)

  _UpdateStamp(tools_path)
