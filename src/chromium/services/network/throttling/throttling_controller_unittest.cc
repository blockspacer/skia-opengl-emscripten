// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/network/throttling/throttling_controller.h"

#include <stdint.h>

#include <memory>
#include <string>
#include <utility>

#include "base/bind.h"
#include "base/memory/ref_counted.h"
#include "base/message_loop/message_loop.h"
#include "base/run_loop.h"
#include "base/stl_util.h"
#include "base/test/test_mock_time_task_runner.h"
#include "net/base/chunked_upload_data_stream.h"
#include "net/base/completion_repeating_callback.h"
#include "net/http/http_transaction_test_util.h"
#include "net/log/net_log.h"
#include "net/log/net_log_with_source.h"
#include "services/network/throttling/network_conditions.h"
#include "services/network/throttling/scoped_throttling_token.h"
#include "services/network/throttling/throttling_network_interceptor.h"
#include "services/network/throttling/throttling_network_transaction.h"
#include "services/network/throttling/throttling_upload_data_stream.h"
#include "testing/gtest/include/gtest/gtest.h"
#include "url/gurl.h"

namespace network {

using net::kSimpleGET_Transaction;
using net::MockHttpRequest;
using net::MockNetworkLayer;
using net::MockTransaction;
using net::TEST_MODE_SYNC_NET_START;

const char kUploadData[] = "upload_data";
int64_t kUploadIdentifier = 17;

class TestCallback {
 public:
  TestCallback() : run_count_(0), value_(0) {}
  void Run(int value) {
    run_count_++;
    value_ = value;
  }
  int run_count() { return run_count_; }
  int value() { return value_; }

 private:
  int run_count_;
  int value_;
};

class ThrottlingControllerTestHelper {
 public:
  ThrottlingControllerTestHelper()
      : task_runner_(base::MakeRefCounted<base::TestMockTimeTaskRunner>()),
        completion_callback_(base::BindRepeating(&TestCallback::Run,
                                                 base::Unretained(&callback_))),
        mock_transaction_(kSimpleGET_Transaction),
        buffer_(base::MakeRefCounted<net::IOBuffer>(64)),
        net_log_(std::make_unique<net::NetLog>()),
        net_log_with_source_(
            net::NetLogWithSource::Make(net_log_.get(),
                                        net::NetLogSourceType::URL_REQUEST)),
        profile_id_(base::UnguessableToken::Create()) {
    mock_transaction_.test_mode = TEST_MODE_SYNC_NET_START;
    mock_transaction_.url = "http://dot.com";
    AddMockTransaction(&mock_transaction_);

    std::unique_ptr<net::HttpTransaction> network_transaction;
    network_layer_.CreateTransaction(net::DEFAULT_PRIORITY,
                                     &network_transaction);
    transaction_.reset(
        new ThrottlingNetworkTransaction(std::move(network_transaction)));
    message_loop_.SetTaskRunner(task_runner_);
  }

  void SetNetworkState(bool offline, double download, double upload) {
    std::unique_ptr<NetworkConditions> conditions(
        new NetworkConditions(offline, 0, download, upload));
    ThrottlingController::SetConditions(profile_id_, std::move(conditions));
  }

  void SetNetworkState(const base::UnguessableToken& id, bool offline) {
    std::unique_ptr<NetworkConditions> conditions(
        new NetworkConditions(offline));
    ThrottlingController::SetConditions(id, std::move(conditions));
  }

  int Start(bool with_upload) {
    request_.reset(new MockHttpRequest(mock_transaction_));
    throttling_token_ = ScopedThrottlingToken::MaybeCreate(
        net_log_with_source_.source().id, profile_id_);

    if (with_upload) {
      upload_data_stream_.reset(
          new net::ChunkedUploadDataStream(kUploadIdentifier));
      upload_data_stream_->AppendData(kUploadData, base::size(kUploadData),
                                      true);
      request_->upload_data_stream = upload_data_stream_.get();
    }

    int rv = transaction_->Start(request_.get(), completion_callback_,
                                 net_log_with_source_);
    EXPECT_EQ(with_upload, !!transaction_->custom_upload_data_stream_);
    return rv;
  }

  int Read() {
    return transaction_->Read(buffer_.get(), 64, completion_callback_);
  }

  bool ShouldFail() {
    if (transaction_->interceptor_)
      return transaction_->interceptor_->IsOffline();
    ThrottlingNetworkInterceptor* interceptor =
        ThrottlingController::GetInterceptor(net_log_with_source_.source().id);
    EXPECT_TRUE(!!interceptor);
    return interceptor->IsOffline();
  }

  bool HasStarted() { return !!transaction_->request_; }

  bool HasFailed() { return transaction_->failed_; }

  void CancelTransaction() { transaction_.reset(); }

  int ReadUploadData() {
    EXPECT_EQ(net::OK, transaction_->custom_upload_data_stream_->Init(
                           completion_callback_, net::NetLogWithSource()));
    return transaction_->custom_upload_data_stream_->Read(buffer_.get(), 64,
                                                          completion_callback_);
  }

  ~ThrottlingControllerTestHelper() {
    RemoveMockTransaction(&mock_transaction_);
  }

  TestCallback* callback() { return &callback_; }
  ThrottlingNetworkTransaction* transaction() { return transaction_.get(); }

  void FastForwardUntilNoTasksRemain() {
    task_runner_->FastForwardUntilNoTasksRemain();
  }

 private:
  scoped_refptr<base::TestMockTimeTaskRunner> task_runner_;
  base::MessageLoop message_loop_;
  MockNetworkLayer network_layer_;
  TestCallback callback_;
  net::CompletionRepeatingCallback completion_callback_;
  MockTransaction mock_transaction_;
  std::unique_ptr<ThrottlingNetworkTransaction> transaction_;
  scoped_refptr<net::IOBuffer> buffer_;
  std::unique_ptr<net::ChunkedUploadDataStream> upload_data_stream_;
  std::unique_ptr<MockHttpRequest> request_;
  std::unique_ptr<net::NetLog> net_log_;
  std::unique_ptr<network::ScopedThrottlingToken> throttling_token_;
  const net::NetLogWithSource net_log_with_source_;
  const base::UnguessableToken profile_id_;
};

TEST(ThrottlingControllerTest, SingleDisableEnable) {
  ThrottlingControllerTestHelper helper;
  helper.SetNetworkState(false, 0, 0);
  helper.Start(false);

  EXPECT_FALSE(helper.ShouldFail());
  helper.SetNetworkState(true, 0, 0);
  EXPECT_TRUE(helper.ShouldFail());
  helper.SetNetworkState(false, 0, 0);
  EXPECT_FALSE(helper.ShouldFail());

  base::RunLoop().RunUntilIdle();
}

TEST(ThrottlingControllerTest, InterceptorIsolation) {
  const base::UnguessableToken another_profile_id =
      base::UnguessableToken::Create();
  ThrottlingControllerTestHelper helper;
  helper.SetNetworkState(false, 0, 0);
  helper.Start(false);

  EXPECT_FALSE(helper.ShouldFail());
  helper.SetNetworkState(another_profile_id, true);
  EXPECT_FALSE(helper.ShouldFail());
  helper.SetNetworkState(true, 0, 0);
  EXPECT_TRUE(helper.ShouldFail());

  helper.SetNetworkState(another_profile_id, false);
  helper.SetNetworkState(false, 0, 0);
  base::RunLoop().RunUntilIdle();
}

TEST(ThrottlingControllerTest, FailOnStart) {
  ThrottlingControllerTestHelper helper;
  helper.SetNetworkState(true, 0, 0);

  int rv = helper.Start(false);
  EXPECT_EQ(rv, net::ERR_INTERNET_DISCONNECTED);

  base::RunLoop().RunUntilIdle();
  EXPECT_EQ(helper.callback()->run_count(), 0);
}

TEST(ThrottlingControllerTest, FailRunningTransaction) {
  ThrottlingControllerTestHelper helper;
  helper.SetNetworkState(false, 0, 0);
  TestCallback* callback = helper.callback();

  int rv = helper.Start(false);
  EXPECT_EQ(rv, net::OK);

  rv = helper.Read();
  EXPECT_EQ(rv, net::ERR_IO_PENDING);
  EXPECT_EQ(callback->run_count(), 0);

  helper.SetNetworkState(true, 0, 0);
  EXPECT_EQ(callback->run_count(), 0);

  // Wait until HttpTrancation completes reading and invokes callback.
  // ThrottlingNetworkTransaction should report error instead.
  helper.FastForwardUntilNoTasksRemain();
  EXPECT_EQ(callback->run_count(), 1);
  EXPECT_EQ(callback->value(), net::ERR_INTERNET_DISCONNECTED);

  // Check that transaction is not failed second time.
  helper.SetNetworkState(false, 0, 0);
  helper.SetNetworkState(true, 0, 0);
  EXPECT_EQ(callback->run_count(), 1);
}

TEST(ThrottlingControllerTest, ReadAfterFail) {
  ThrottlingControllerTestHelper helper;
  helper.SetNetworkState(false, 0, 0);

  int rv = helper.Start(false);
  EXPECT_EQ(rv, net::OK);
  EXPECT_TRUE(helper.HasStarted());

  helper.SetNetworkState(true, 0, 0);
  // Not failed yet, as no IO was initiated.
  EXPECT_FALSE(helper.HasFailed());

  rv = helper.Read();
  // Fails on first IO.
  EXPECT_EQ(rv, net::ERR_INTERNET_DISCONNECTED);

  // Check that callback is never invoked.
  base::RunLoop().RunUntilIdle();
  EXPECT_EQ(helper.callback()->run_count(), 0);
}

TEST(ThrottlingControllerTest, CancelTransaction) {
  ThrottlingControllerTestHelper helper;
  helper.SetNetworkState(false, 0, 0);

  int rv = helper.Start(false);
  EXPECT_EQ(rv, net::OK);
  EXPECT_TRUE(helper.HasStarted());
  helper.CancelTransaction();

  // Should not crash.
  helper.SetNetworkState(true, 0, 0);
  helper.SetNetworkState(false, 0, 0);
  base::RunLoop().RunUntilIdle();
}

TEST(ThrottlingControllerTest, CancelFailedTransaction) {
  ThrottlingControllerTestHelper helper;
  helper.SetNetworkState(true, 0, 0);

  int rv = helper.Start(false);
  EXPECT_EQ(rv, net::ERR_INTERNET_DISCONNECTED);
  EXPECT_TRUE(helper.HasStarted());
  helper.CancelTransaction();

  // Should not crash.
  helper.SetNetworkState(true, 0, 0);
  helper.SetNetworkState(false, 0, 0);
  base::RunLoop().RunUntilIdle();
}

TEST(ThrottlingControllerTest, UploadDoesNotFail) {
  ThrottlingControllerTestHelper helper;
  helper.SetNetworkState(true, 0, 0);
  int rv = helper.Start(true);
  EXPECT_EQ(rv, net::ERR_INTERNET_DISCONNECTED);
  rv = helper.ReadUploadData();
  EXPECT_EQ(rv, static_cast<int>(base::size(kUploadData)));
}

TEST(ThrottlingControllerTest, DownloadOnly) {
  ThrottlingControllerTestHelper helper;
  TestCallback* callback = helper.callback();

  helper.SetNetworkState(false, 10000000, 0);
  int rv = helper.Start(false);
  EXPECT_EQ(rv, net::ERR_IO_PENDING);
  helper.FastForwardUntilNoTasksRemain();
  EXPECT_EQ(callback->run_count(), 1);
  EXPECT_GE(callback->value(), net::OK);

  rv = helper.Read();
  EXPECT_EQ(rv, net::ERR_IO_PENDING);
  EXPECT_EQ(callback->run_count(), 1);
  helper.FastForwardUntilNoTasksRemain();
  EXPECT_EQ(callback->run_count(), 2);
  EXPECT_GE(callback->value(), net::OK);
}

TEST(ThrottlingControllerTest, UploadOnly) {
  ThrottlingControllerTestHelper helper;
  TestCallback* callback = helper.callback();

  helper.SetNetworkState(false, 0, 1000000);
  int rv = helper.Start(true);
  EXPECT_EQ(rv, net::OK);
  helper.FastForwardUntilNoTasksRemain();
  EXPECT_EQ(callback->run_count(), 0);

  rv = helper.Read();
  EXPECT_EQ(rv, net::ERR_IO_PENDING);
  EXPECT_EQ(callback->run_count(), 0);
  helper.FastForwardUntilNoTasksRemain();
  EXPECT_EQ(callback->run_count(), 1);
  EXPECT_GE(callback->value(), net::OK);

  rv = helper.ReadUploadData();
  EXPECT_EQ(rv, net::ERR_IO_PENDING);
  EXPECT_EQ(callback->run_count(), 1);
  helper.FastForwardUntilNoTasksRemain();
  EXPECT_EQ(callback->run_count(), 2);
  EXPECT_EQ(callback->value(), static_cast<int>(base::size(kUploadData)));
}

}  // namespace network
