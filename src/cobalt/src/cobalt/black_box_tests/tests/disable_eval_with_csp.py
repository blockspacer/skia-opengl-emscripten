"""Ensure that Cobalt prohibits eval() when CSP is present in client page."""

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function

import _env  # pylint: disable=unused-import

from cobalt.black_box_tests import black_box_tests
from cobalt.black_box_tests.threaded_web_server import ThreadedWebServer


class DisableEvalWithCSPTest(black_box_tests.BlackBoxTestCase):

  def test_simple(self):

    with ThreadedWebServer(binding_address=self.GetBindingAddress()) as server:
      url = server.GetURL(file_name='testdata/disable_eval_with_csp.html')

      with self.CreateCobaltRunner(url=url) as runner:
        self.assertTrue(runner.JSTestsSucceeded())
