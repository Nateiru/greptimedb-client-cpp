// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: greptime/v1/database.proto

#include "greptime/v1/database.pb.h"
#include "greptime/v1/database.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace greptime {
namespace v1 {

static const char* GreptimeDatabase_method_names[] = {
  "/greptime.v1.GreptimeDatabase/Handle",
  "/greptime.v1.GreptimeDatabase/HandleRequests",
};

std::unique_ptr< GreptimeDatabase::Stub> GreptimeDatabase::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< GreptimeDatabase::Stub> stub(new GreptimeDatabase::Stub(channel, options));
  return stub;
}

GreptimeDatabase::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Handle_(GreptimeDatabase_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_HandleRequests_(GreptimeDatabase_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  {}

::grpc::Status GreptimeDatabase::Stub::Handle(::grpc::ClientContext* context, const ::greptime::v1::GreptimeRequest& request, ::greptime::v1::GreptimeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::greptime::v1::GreptimeRequest, ::greptime::v1::GreptimeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Handle_, context, request, response);
}

void GreptimeDatabase::Stub::async::Handle(::grpc::ClientContext* context, const ::greptime::v1::GreptimeRequest* request, ::greptime::v1::GreptimeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::greptime::v1::GreptimeRequest, ::greptime::v1::GreptimeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Handle_, context, request, response, std::move(f));
}

void GreptimeDatabase::Stub::async::Handle(::grpc::ClientContext* context, const ::greptime::v1::GreptimeRequest* request, ::greptime::v1::GreptimeResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Handle_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::greptime::v1::GreptimeResponse>* GreptimeDatabase::Stub::PrepareAsyncHandleRaw(::grpc::ClientContext* context, const ::greptime::v1::GreptimeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::greptime::v1::GreptimeResponse, ::greptime::v1::GreptimeRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Handle_, context, request);
}

::grpc::ClientAsyncResponseReader< ::greptime::v1::GreptimeResponse>* GreptimeDatabase::Stub::AsyncHandleRaw(::grpc::ClientContext* context, const ::greptime::v1::GreptimeRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncHandleRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientWriter< ::greptime::v1::GreptimeRequest>* GreptimeDatabase::Stub::HandleRequestsRaw(::grpc::ClientContext* context, ::greptime::v1::GreptimeResponse* response) {
  return ::grpc::internal::ClientWriterFactory< ::greptime::v1::GreptimeRequest>::Create(channel_.get(), rpcmethod_HandleRequests_, context, response);
}

void GreptimeDatabase::Stub::async::HandleRequests(::grpc::ClientContext* context, ::greptime::v1::GreptimeResponse* response, ::grpc::ClientWriteReactor< ::greptime::v1::GreptimeRequest>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::greptime::v1::GreptimeRequest>::Create(stub_->channel_.get(), stub_->rpcmethod_HandleRequests_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::greptime::v1::GreptimeRequest>* GreptimeDatabase::Stub::AsyncHandleRequestsRaw(::grpc::ClientContext* context, ::greptime::v1::GreptimeResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::greptime::v1::GreptimeRequest>::Create(channel_.get(), cq, rpcmethod_HandleRequests_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::greptime::v1::GreptimeRequest>* GreptimeDatabase::Stub::PrepareAsyncHandleRequestsRaw(::grpc::ClientContext* context, ::greptime::v1::GreptimeResponse* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::greptime::v1::GreptimeRequest>::Create(channel_.get(), cq, rpcmethod_HandleRequests_, context, response, false, nullptr);
}

GreptimeDatabase::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GreptimeDatabase_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GreptimeDatabase::Service, ::greptime::v1::GreptimeRequest, ::greptime::v1::GreptimeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GreptimeDatabase::Service* service,
             ::grpc::ServerContext* ctx,
             const ::greptime::v1::GreptimeRequest* req,
             ::greptime::v1::GreptimeResponse* resp) {
               return service->Handle(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GreptimeDatabase_method_names[1],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< GreptimeDatabase::Service, ::greptime::v1::GreptimeRequest, ::greptime::v1::GreptimeResponse>(
          [](GreptimeDatabase::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReader<::greptime::v1::GreptimeRequest>* reader,
             ::greptime::v1::GreptimeResponse* resp) {
               return service->HandleRequests(ctx, reader, resp);
             }, this)));
}

GreptimeDatabase::Service::~Service() {
}

::grpc::Status GreptimeDatabase::Service::Handle(::grpc::ServerContext* context, const ::greptime::v1::GreptimeRequest* request, ::greptime::v1::GreptimeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GreptimeDatabase::Service::HandleRequests(::grpc::ServerContext* context, ::grpc::ServerReader< ::greptime::v1::GreptimeRequest>* reader, ::greptime::v1::GreptimeResponse* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace greptime
}  // namespace v1

