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
"""Starboard Raspberry Pi shared Cobalt configuration."""

import os

from cobalt.build import cobalt_configuration
from starboard.tools.testing import test_filter


class CobaltRaspiConfiguration(cobalt_configuration.CobaltConfiguration):
  """Starboard Raspberry Pi shared Cobalt configuration."""

  def __init__(self, platform_configuration, application_name,
               application_directory):
    super(CobaltRaspiConfiguration, self).__init__(
        platform_configuration, application_name, application_directory)

  def GetPostIncludes(self):
    # If there isn't a configuration.gypi found in the usual place, we'll
    # supplement with our shared implementation.
    includes = super(CobaltRaspiConfiguration, self).GetPostIncludes()
    for include in includes:
      if os.path.basename(include) == 'configuration.gypi':
        return includes

    shared_gypi_path = os.path.join(
        os.path.dirname(__file__), 'configuration.gypi')
    if os.path.isfile(shared_gypi_path):
      includes.append(shared_gypi_path)
    return includes

  def WebdriverBenchmarksEnabled(self):
    return True

  def GetTestFilters(self):
    filters = super(CobaltRaspiConfiguration, self).GetTestFilters()
    filters.extend([
        # These tests are currently producing slightly different images on the
        # RasPi.
        test_filter.TestFilter('renderer_test',
                               'PixelTest.CircularSubPixelBorder'),
        test_filter.TestFilter('renderer_test',
                               'PixelTest.FilterBlurred100PxText')
    ])
    return filters

  def GetWebPlatformTestFilters(self):
    filters = super(CobaltRaspiConfiguration, self).GetWebPlatformTestFilters()
    filters += [
        ('csp/WebPlatformTest.Run/'
         'content_security_policy_media_src_media_src_allowed_html'),
    ]
    return filters

  def GetTestEnvVariables(self):
    return {
        'base_unittests': {
            'ASAN_OPTIONS': 'detect_leaks=0'
        },
        'crypto_unittests': {
            'ASAN_OPTIONS': 'detect_leaks=0'
        },
        'net_unittests': {
            'ASAN_OPTIONS': 'detect_leaks=0'
        }
    }
