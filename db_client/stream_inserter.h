// Copyright 2023 Greptime Team
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#pragma once

#include <queue>
#include <mutex>
#include <atomic>
#include <memory>
#include <thread>
#include <cassert>
#include <cstddef>
#include <iostream>
#include <condition_variable>

#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/support/sync_stream.h>

#include <greptime/v1/database.pb.h>
#include <greptime/v1/database.grpc.pb.h>

namespace greptime {

using greptime::v1::GreptimeDatabase;
using greptime::v1::GreptimeRequest;
using greptime::v1::GreptimeResponse;
using greptime::v1::InsertRequest;
using greptime::v1::InsertRequests;
using greptime::v1::RequestHeader;
using grpc::ClientContext;
using grpc::Status;
using grpc::Channel;
using grpc::ClientWriter;

/// StreamInserter is a single-producer single-consumer(SPSC) model.
/// When writing or WriteBatch is called, only the Request is written to the Buffer.
/// To prevent OOM, the Buffer has a capacity limit determined by BUFFER_SIZE
/// A background thread periodically obtains a batch of Requests from the Buffer and sends a batch through the gRPC.
/// The number of requests in a batch is determined by BATCH_BYTE_LIMIT
class StreamInserter {
public:

    StreamInserter(std::string dbname_, GreptimeDatabase::Stub* stub, GreptimeResponse* response);

    /// Write a InsertRequest into Buffer
    bool WriteOnce(InsertRequest insert_request);

    /// WriteDone confirm all requests in std::queue are sent
    bool WriteDone();
    /// Finish will return grpc Status
    /// See \a grpc::StatusCode for details on the available code 
    Status Finish() { return writer->Finish(); }

protected:
    // static constexpr size_t BUFFER_SIZE = 100000;
    // static constexpr size_t BATCH_BYTE_LIMIT = 2981328;

private:
    std::string dbname;
    std::shared_ptr<ClientContext> context;
    std::weak_ptr<GreptimeDatabase::Stub> stub;
    std::unique_ptr<ClientWriter<GreptimeRequest>> writer;
};

}  // namespace greptime
