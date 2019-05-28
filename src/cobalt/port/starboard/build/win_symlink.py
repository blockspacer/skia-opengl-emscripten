#!/usr/bin/python
# Copyright 2018 The Cobalt Authors. All Rights Reserved.
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

"""
This file provides functions that provide symlinking of folders. This is
necessary because os.symlink in python 2.7 is missing for Windows.

Reparse points: Are os-level symlinks for folders which can be created without
admin access. Symlinks for folders are supported using this mechanism. Note
that reparse points require special care for traversal, because reparse points
are often skipped or treated as files by the various python path manipulation
functions in os and shutil modules. rmtree() as a replacement for
shutil.rmtree() is provided.

Junction points: Are low level file system symlinks. We do not support these
yet because creating them requires admin level acccess, or Windows 10 Insiders
build 14972, which is not widely available yet.
"""


################################################################################
#                                  API                                         #
################################################################################


def CreateReparsePoint(from_folder, link_folder):
  """ Mimics os.symlink for usage. If link cannot be created then an OSError
  is raised."""
  return _CreateReparsePoint(from_folder, link_folder)


def ReadReparsePoint(path):
  """ Mimics os.readlink for usage. """
  return _ReadReparsePoint(path)


def IsReparsePoint(path):
  """ Mimics os.islink for usage. """
  return _IsReparsePoint(path)


def UnlinkReparsePoint(link_dir):
  """ Mimics os.unlink for usage. The sym link_dir is removed."""
  return _UnlinkReparsePoint(link_dir)


def RmtreeShallow(dirpath):
  """ Like shutil.rmtree on linux, which deletes symlinks but doesn't follow
  them. Note that shutil.rmtree on windows will follow the symlink and delete
  the files in the original directory!"""
  return _RmtreeShallow(dirpath)


def OsWalk(top, topdown=True, onerror=None, followlinks=False):
  """ Like os.walk() but correctly handles windows reparse points as symlinks.
  All symlink directories are returned in the directory list and the caller must
  call IsReparsePoint() on the path to determine whether the directory is
  real or a symlink."""
  return _OsWalk(top, topdown, onerror, followlinks)


################################################################################
#                                 IMPL                                         #
################################################################################


import os
import shutil
import subprocess
import stat
import tempfile
import time
import traceback


def _RemoveEmptyDirectory(path):
  _RETRY_TIMES = 10
  for i in range(0, _RETRY_TIMES):
    try:
      os.chmod(path, stat.S_IWRITE)
      os.rmdir(path)
      return
    except Exception:
      if i == _RETRY_TIMES-1:
        raise
      else:
        time.sleep(.1)
        pass


def _RmtreeShallow(root_dir):
  del_dirs = []  # Defer deletion of directories.
  if _IsReparsePoint(root_dir):
    _UnlinkReparsePoint(root_dir)
    return
  for root, dirs, files in OsWalk(root_dir, followlinks=False):
    for name in files:
      path = os.path.join(root, name)
      os.remove(path)
    for name in dirs:
      path = os.path.join(root, name)
      if _IsReparsePoint(path):
        _UnlinkReparsePoint(path)
      else:
        del_dirs.append(path)
  # At this point, all files should be deleted and all symlinks should be
  # unlinked.
  for d in del_dirs + [root_dir]:
    try:
      if os.path.isdir(d):
        shutil.rmtree(d)
    except Exception as err:
      traceback.print_exc()
      print('Error while deleting: ' + str(err))


def _ReadReparsePointShell(path):
  path = os.path.abspath(path)
  cmd_parts = ['fsutil', 'reparsepoint', 'query', path]
  try:
    out = subprocess.check_output(cmd_parts)
  except subprocess.CalledProcessError:
    # Expected if the link doesn't exist.
    return None
  try:
    lines = out.splitlines()
    lines = [ l for l in lines if "Print Name:" in l ]
    if not lines:
      return None
    out = lines[0].split()
    return out[2]
  except Exception as err:
    traceback.print_exc()
    print err
    return None


def _ReadReparsePoint(path):
  try:
    from win_symlink_fast import FastReadReparseLink
    return FastReadReparseLink(path)
  except Exception as err:
    # Fallback
    print(__file__ + ' error: ' + str(err) + \
          ', falling back to command line version.')
    return _ReadReparsePointShell(path)


def _IsReparsePoint(path):
  try:
    from win_symlink_fast import FastIsReparseLink
    return FastIsReparseLink(path)
  except  Exception as err:
    print(__file__ + ' error: ' + str(err) + \
          ', falling back to command line version.')
    return None != _ReadReparsePointShell(path)


def _CreateReparsePoint(from_folder, link_folder):
  link_folder = os.path.abspath(link_folder)
  if os.path.isdir(link_folder):
    _RemoveEmptyDirectory(link_folder)
  else:
    _UnlinkReparsePoint(link_folder)  # Deletes if it exists.
  try:
    from win_symlink_fast import FastCreateReparseLink
    FastCreateReparseLink(from_folder, link_folder)
    return
  except OSError as os_err:
    # The operating system doesn't support the call.
    pass
  except Exception as err:
    print(__file__ + ' unexpected error: ' + str(err) + \
          ', from='+from_folder+', link='+link_folder+ \
          ', falling back to command line version.')
  par_dir = os.path.dirname(link_folder)
  if not os.path.isdir(par_dir):
    os.makedirs(par_dir)
  cmd_parts = ['cmd', '/c', 'mklink', '/j', link_folder, from_folder]
  subprocess.check_output(cmd_parts)
  if not _IsReparsePoint(link_folder):
    raise OSError('Could not create sym link ' + link_folder + ' to ' + \
                  from_folder)


def _UnlinkReparsePoint(link_dir):
  if not _IsReparsePoint(link_dir):
    return
  cmd_parts = ['fsutil', 'reparsepoint', 'delete', link_dir]
  subprocess.check_output(cmd_parts)
  # The folder will now be unlinked, but will still exist.
  if os.path.isdir(link_dir):
    try:
      _RemoveEmptyDirectory(link_dir)
    except Exception as err:
      print(__file__ + " could not remove " + link_dir)
      print(str(err))
  if _IsReparsePoint(link_dir):
    raise IOError("Link still exists: " + _ReadReparsePoint(link_dir))
  if os.path.isdir(link_dir):
    print("WARNING - Link as folder still exists: " + link_dir)


def _IsSamePath(p1, p2):
  if not p1:
    p1 = None
  if not p2:
    p2 = None
  if p1 == p2:
    return True
  if (not p1) or (not p2):
    return False
  p1 = os.path.abspath(os.path.normpath(p1))
  p2 = os.path.abspath(os.path.normpath(p2))
  if p1 == p2:
    return True
  try:
    return os.stat(p1) == os.stat(p2)
  except:
    return False


def _OsWalk(top, topdown, onerror, followlinks):
  try:
    names = os.listdir(top)
  except OSError as err:
    if onerror is not None:
      onerror(err)
    return
  dirs, nondirs = [], []
  for name in names:
    if os.path.isdir(os.path.join(top, name)):
      dirs.append(name)
    else:
      nondirs.append(name)
  if topdown:
    yield top, dirs, nondirs
  for name in dirs:
    new_path = os.path.join(top, name)
    if followlinks or not _IsReparsePoint(new_path):
      for x in _OsWalk(new_path, topdown, onerror, followlinks):
        yield x
  if not topdown:
    yield top, dirs, nondirs


def UnitTest():
  """Tests that a small directory hierarchy can be created and then symlinked,
  and then removed."""
  tmp_dir = os.path.join(tempfile.gettempdir(), 'win_symlink')
  from_dir = os.path.join(tmp_dir, 'from_dir')
  test_txt = os.path.join(from_dir, 'test.txt')
  inner_dir = os.path.join(from_dir, 'inner_dir')
  link_dir = os.path.join(tmp_dir, 'link')
  link_dir2 = os.path.join(tmp_dir, 'link2')
  if IsReparsePoint(link_dir):
    print "Deleting previous link_dir:", link_dir
    UnlinkReparsePoint(link_dir)
  else:
    print "Previous link dir does not exist."
  print "from_dir:", os.path.abspath(from_dir)
  print "link_dir:", os.path.abspath(link_dir)
  print "link_dir exists? ", _ReadReparsePoint(link_dir)

  if not os.path.isdir(from_dir):
    os.makedirs(from_dir)
  if not os.path.isdir(inner_dir):
    os.makedirs(inner_dir)
  with open(test_txt, 'w') as fd:
    fd.write('hello world')

  # Check that the ReadReparsePoint handles non link objects ok.
  if ReadReparsePoint(from_dir):
    raise IOError("Exepected ReadReparsePoint() to return None for " + from_dir)
  if ReadReparsePoint(test_txt):
    raise IOError("Exepected ReadReparsePoint() to return None for " + test_txt)

  CreateReparsePoint(from_dir, link_dir)

  link_created_ok = IsReparsePoint(link_dir)
  if link_created_ok:
    print("Link created: " + str(link_created_ok))
  else:
    raise IOError("Failed to create link " + link_dir)

  if not os.path.exists(link_dir):
    raise IOError('os.path.exists(link_dir) is False.')

  CreateReparsePoint(from_dir, link_dir2)
  if not IsReparsePoint(link_dir2):
    raise IOError("Failed to create link " + link_dir2)
  UnlinkReparsePoint(link_dir2)
  if os.path.exists(link_dir2):
    raise IOError("Still exists: " + link_dir2)

  from_dir_2 = ReadReparsePoint(link_dir)
  if _IsSamePath(from_dir_2, from_dir):
    print "Link exists."
  else:
    raise IOError("Link mismatch: " + from_dir_2 + ' != ' + from_dir)
  def GetAllPaths(start_dir, followlinks):
    paths = []
    for root, dirs, files in OsWalk(tmp_dir, followlinks=followlinks):
      for name in files:
        path = os.path.join(root, name)
        paths.append(path)
      for name in dirs:
        path = os.path.join(root, name)
        paths.append(path)
    return paths
  def PathTypeToString(path):
    if IsReparsePoint(path):
      return 'link'
    if os.path.isdir(path):
      return 'dir'
    return 'file'
  paths_nofollow_links = GetAllPaths(tmp_dir, followlinks=False)
  paths_follow_links = GetAllPaths(tmp_dir, followlinks=True)
  print '\nOsWalk Follow links:'
  for path in paths_follow_links:
    print '  ' + path + ' (' + PathTypeToString(path) + ')'
  print '\nOsWalk No-Follow links:'
  for path in paths_nofollow_links:
    print '  ' + path + ' (' + PathTypeToString(path) + ')'
  print ''

  assert(link_dir in paths_nofollow_links)
  assert(link_dir in paths_follow_links)
  assert(os.path.join(link_dir, 'test.txt') in paths_follow_links)
  assert(not os.path.join(link_dir, 'test.txt') in paths_nofollow_links)
  RmtreeShallow(link_dir)
  if os.path.exists(link_dir):
    raise IOError("Link dir " + link_dir + " still exists.")
  if not os.path.exists(from_dir):
    raise IOError("From Dir " + from_dir + " was deleted!")
  print "Test completed."


if __name__ == "__main__":
  UnitTest()
