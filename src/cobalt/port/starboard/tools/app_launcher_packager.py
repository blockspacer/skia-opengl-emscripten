#!/usr/bin/python
#
# Copyright 2017 The Cobalt Authors. All Rights Reserved.
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
#
"""Extracts python files and writes platforms information.

This script extracts the app launcher scripts (and all their dependencies) from
the Cobalt source tree, and then packages them into a user-specified location so
that the app launcher can be run independent of the Cobalt source tree.
"""


################################################################################
#                                   API                                        #
################################################################################


def CopyAppLauncherTools(repo_root, dest_root,
                         additional_glob_patterns=None,
                         include_black_box_tests=True):
  """Copies app launcher related files to the destination root.
  repo_root: The 'src' path that will be used for packaging.
  dest_root: The directory where the src files will be stored.
  additional_glob_patterns: Some platforms may need to include certain
    dependencies beyond the default include file patterns. The results here will
    be merged in with _INCLUDE_FILE_PATTERNS.
  include_black_box_tests: If True then the resources for the black box tests
    are included."""
  _CopyAppLauncherTools(repo_root, dest_root,
                        additional_glob_patterns,
                        include_black_box_tests=include_black_box_tests)


def MakeZipArchive(src, output_zip):
  """Convenience function to zip up all files in the src directory (produced
  as dest_root argument in CopyAppLauncherTools()) which will create a zip
  file with the relative root being the src directory."""
  _MakeZipArchive(src, output_zip)


################################################################################
#                                  IMPL                                        #
################################################################################


import argparse
import fnmatch
import logging
import os
import shutil
import sys

import _env  # pylint: disable=unused-import
from paths import REPOSITORY_ROOT
from paths import THIRD_PARTY_ROOT
sys.path.append(THIRD_PARTY_ROOT)
from cobalt.build import cobalt_archive_extract
import starboard.build.port_symlink as port_symlink
import starboard.tools.platform
import jinja2


# Default python directories to app launcher resources.
_INCLUDE_FILE_PATTERNS = [
    ('buildbot', '*.py'),
    ('buildbot/device_server/shared/ssl_certs', '*'),
    ('cobalt', '*.py'),
    # TODO: Test and possibly prune.
    ('lbshell', '*.py'),
    ('starboard', '*.py'),
    # jinja2 required by this app_launcher_packager.py script.
    ('third_party/jinja2',  '*.py'),
    ('third_party/markupsafe', '*.py'), # Required by third_party/jinja2
]


_INCLUDE_BLACK_BOX_TESTS_PATTERNS = [
    # Black box and web platform tests have non-py assets, so everything
    # is picked up.
    ('cobalt/black_box_tests', '*'),
    ('third_party/web_platform_tests', '*'),
    ('third_party/proxy_py', '*'),
]

# Do not allow .git directories to make it into the build.
_EXCLUDE_DIRECTORY_PATTERNS = ['.git']


def _MakeDir(d):
  """Make the specified directory and any parents in the path.

  Args:
    d: Directory name to create.
  """
  if d and not os.path.isdir(d):
    root = os.path.dirname(d)
    _MakeDir(root)
    os.mkdir(d)


def _IsOutDir(source_root, d):
  """Check if d is under source_root/out directory.

  Args:
    source_root: Absolute path to the root of the files to be copied.
    d: Directory to be checked.
  """
  out_dir = os.path.join(source_root, 'out')
  return out_dir in d


def _FindFilesRecursive(src_root, glob_pattern):
  src_root = os.path.normpath(src_root)
  logging.info('Searching in %s for %s type files.', src_root, glob_pattern)
  file_list = []
  for root, dirs, files in os.walk(src_root, topdown=True):
    # Prunes when using os.walk with topdown=True
    [dirs.remove(d) for d in list(dirs) if d in _EXCLUDE_DIRECTORY_PATTERNS]
    # Eliminate any locally built files under the out directory.
    if _IsOutDir(src_root, root):
      continue
    files = fnmatch.filter(files, glob_pattern)
    for f in files:
      file_list.append(os.path.join(root, f))
  return file_list


def _WritePlatformsInfo(repo_root, dest_root):
  """Get platforms' information and write the platform.py based on a template.

  Platform.py is responsible for enumerating all supported platforms in the
  Cobalt source tree.  Since we are extracting the app launcher script from the
  Cobalt source tree, this function records which platforms are supported while
  the Cobalt source tree is still available and bakes them in to a newly created
  platform.py file that does not depend on the Cobalt source tree.

  Args:
    repo_root: Absolute path to the root of the repository where platforms'
      information is retrieved.
    dest_root: Absolute path to the root of the new repository into which
      platforms' information to be written.
  """
  logging.info('Baking platform info files.')
  current_file = os.path.abspath(__file__)
  current_dir = os.path.dirname(current_file)
  dest_dir = current_dir.replace(repo_root, dest_root)
  platforms_map = {}
  for p in starboard.tools.platform.GetAll():
    platform_path = os.path.relpath(
        starboard.tools.platform.Get(p).path, repo_root)
    platforms_map[p] = platform_path
  template = jinja2.Template(
      open(os.path.join(current_dir, 'platform.py.template')).read())
  with open(os.path.join(dest_dir, 'platform.py'), 'w+') as f:
    template.stream(platforms_map=platforms_map).dump(f, encoding='utf-8')
  logging.info('Finished baking in platform info files.')


def _CopyAppLauncherTools(repo_root, dest_root, additional_glob_patterns,
                          include_black_box_tests):
  # Step 1: Make sure dest_root is an absolute path.
  logging.info('Copying App Launcher tools to = %s', dest_root)
  dest_root = os.path.normpath(dest_root)
  if not os.path.isabs(dest_root):
    dest_root = os.path.join(os.getcwd(), dest_root)
  if port_symlink.IsWindows():
    dest_root = cobalt_archive_extract.ToWinUncPath(dest_root)
  logging.info('Absolute destination path = %s', dest_root)
  # Step 2: Remove previous output directory if it exists
  if os.path.isdir(dest_root):
    shutil.rmtree(dest_root)
  # Step 3: Find all glob files from specified search directories.
  include_glob_patterns = _INCLUDE_FILE_PATTERNS
  if additional_glob_patterns:
    include_glob_patterns += additional_glob_patterns
  if include_black_box_tests:
    include_glob_patterns += _INCLUDE_BLACK_BOX_TESTS_PATTERNS
  copy_list = []
  for d, glob_pattern in include_glob_patterns:
    flist = _FindFilesRecursive(os.path.join(repo_root, d), glob_pattern)
    copy_list.extend(flist)
  # Copy all src/*.py from repo_root without recursing down.
  for f in os.listdir(repo_root):
    src = os.path.join(repo_root, f)
    if os.path.isfile(src) and src.endswith('.py'):
      copy_list.append(src)
  # Order by file path string and remove any duplicate paths.
  copy_list = list(set(copy_list))
  copy_list.sort()
  folders_logged = set()
  # Step 4: Copy the src files to the destination directory.
  for src in copy_list:
    tail_path = os.path.relpath(src, repo_root)
    dst = os.path.join(dest_root, tail_path)
    d = os.path.dirname(dst)
    if not os.path.isdir(d):
      os.makedirs(d)
    src_folder = os.path.dirname(src)
    if not src_folder in folders_logged:
      folders_logged.add(src_folder)
      logging.info(src_folder + ' -> ' + os.path.dirname(dst))
    shutil.copy2(src, dst)
  # Step 5: Re-write the platform infos file in the new repo copy.
  _WritePlatformsInfo(repo_root, dest_root)


def _MakeZipArchive(src, output_zip):
  if os.path.isfile(output_zip):
    os.unlink(output_zip)
  logging.info('Creating a zip file of the app launcher package')
  logging.info(src + ' -> ' + output_zip)
  tmp_file = shutil.make_archive(src, 'zip', src)
  shutil.move(tmp_file, output_zip)


def main(command_args):
  logging.basicConfig(level=logging.INFO)
  parser = argparse.ArgumentParser()
  parser.add_argument(
      '-d',
      '--destination_root',
      required=True,
      help='The path to the root of the destination folder into which the '
           'application resources are packaged.')
  args = parser.parse_args(command_args)
  CopyAppLauncherTools(REPOSITORY_ROOT, args.destination_root)
  return 0


if __name__ == '__main__':
  sys.exit(main(sys.argv[1:]))
