# Copyright 2019 The Cobalt Authors. All Rights Reserved.
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
"""Launch web platform tests."""


from __future__ import absolute_import
from __future__ import division
from __future__ import print_function

import _env  # pylint: disable=unused-import

import logging

from cobalt.black_box_tests import black_box_tests
from cobalt.black_box_tests.web_platform_test_server import WebPlatformTestServer
from starboard.tools import abstract_launcher
from starboard.tools import build
from starboard.tools.testing import test_filter

# Configs web_platform_tests can run on.
_WEB_PLATFORM_TESTS_CONFIGS = ['debug', 'devel']

class WebPlatformTests(black_box_tests.BlackBoxTestCase):

  def test_simple(self):
    device_params = black_box_tests._device_params

    if device_params.config not in _WEB_PLATFORM_TESTS_CONFIGS:
      logging.warning('Can only run web platform tests on debug or devel '
                      'configs.')
      return

    with WebPlatformTestServer(binding_address=self.GetBindingAddress()):
      target_params = []

      platform_config = build.GetPlatformConfig(device_params.platform)
      cobalt_config = platform_config.GetApplicationConfiguration('cobalt')
      filters = cobalt_config.GetWebPlatformTestFilters()

      if test_filter.DISABLE_TESTING in filters:
        return

      if test_filter.FILTER_ALL in filters:
        return

      if filters:
        target_params.append('--gtest_filter=-{}'.format(':'.join(
            filters)))

      if device_params.target_params:
        target_params += device_params.target_params

      launcher = abstract_launcher.LauncherFactory(
          device_params.platform,
          'web_platform_tests',
          device_params.config,
          device_id=device_params.device_id,
          target_params=target_params,
          output_file=None,
          out_directory=device_params.out_directory)
      status = launcher.Run()
      self.assertEqual(status, 0)
