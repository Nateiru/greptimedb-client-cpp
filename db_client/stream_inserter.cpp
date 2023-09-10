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

#include "stream_inserter.h"

namespace greptime {

StreamInserter::StreamInserter(std::string dbname_, GreptimeDatabase::Stub* stub, GreptimeResponse* response) : dbname(dbname_) {
  context = std::make_shared<ClientContext>();
  context->set_wait_for_ready(true);
  writer = std::move(stub->HandleRequests(context.get(), response));
}

bool StreamInserter::WriteOnce(InsertRequest insert_request) {
  InsertRequests insert_requests;
  insert_requests.add_inserts()->Swap(&insert_request);
  RequestHeader request_header;
  request_header.set_dbname(dbname);

  GreptimeRequest greptime_request;
  greptime_request.mutable_header()->Swap(&request_header);
  greptime_request.mutable_inserts()->Swap(&insert_requests); 
  return writer->Write(greptime_request);
}

bool StreamInserter::WriteDone() {
  return writer->WritesDone();
}
}  // namespace greptime
