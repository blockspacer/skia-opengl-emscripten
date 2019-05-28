#!/usr/bin/python

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
"""Prints the canonical path to the toolchains directory to stdout."""

import sys

import _env  # pylint: disable=unused-import
from starboard.tools import build


def main(argv):
  del argv  # Not used.
  print '%s' % build.GetToolchainsDir()
  return 0


if __name__ == '__main__':
  sys.exit(main(sys.argv[1:]))
