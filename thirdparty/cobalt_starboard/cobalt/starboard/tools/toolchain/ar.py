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
"""Allows to use GNU ar as a static linker."""

from starboard.tools.toolchain import abstract
from starboard.tools.toolchain import common


class StaticLinkerBase(object):
  """A base class for GNU ar-based static linkers."""

  def __init__(self, **kwargs):
    self._path = common.GetPath('ar', **kwargs)
    self._extra_flags = kwargs.get('extra_flags', [])

  def GetPath(self):
    return self._path

  def GetExtraFlags(self):
    return self._extra_flags

  def GetMaxConcurrentProcesses(self):
    # Run as much concurrent processes as possible.
    return None

  def GetDescription(self):
    return 'AR $out'

  def GetRspFilePath(self):
    return '$out.rsp'

  def GetRspFileContent(self):
    return '$in_newline'


class StaticLinker(StaticLinkerBase, abstract.StaticLinker):
  """Creates self-contained archives using GNU ar."""

  def __init__(self, **kwargs):
    super(StaticLinker, self).__init__(**kwargs)

  def GetCommand(self, path, extra_flags, flags, shell):
    del flags  # Not used.
    return shell.And('rm -f $out',
                     '{0} rcs {1} $out @$rspfile'.format(path, extra_flags))


class StaticThinLinker(StaticLinkerBase, abstract.StaticThinLinker):
  """Creates thin archives using GNU ar."""

  def __init__(self, **kwargs):
    super(StaticThinLinker, self).__init__(**kwargs)

  def GetCommand(self, path, extra_flags, flags, shell):
    del flags  # Not used.
    return shell.And('rm -f $out',
                     '{0} rcsT {1} $out @$rspfile'.format(path, extra_flags))
