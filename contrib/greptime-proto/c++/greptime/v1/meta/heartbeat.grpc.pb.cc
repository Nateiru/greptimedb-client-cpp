// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: greptime/v1/meta/heartbeat.proto

#include "greptime/v1/meta/heartbeat.pb.h"
#include "greptime/v1/meta/heartbeat.grpc.pb.h"

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
namespace meta {

static const char* Heartbeat_method_names[] = {
  "/greptime.v1.meta.Heartbeat/Heartbeat",
  "/greptime.v1.meta.Heartbeat/AskLeader",
};

std::unique_ptr< Heartbeat::Stub> Heartbeat::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Heartbeat::Stub> stub(new Heartbeat::Stub(channel, options));
  return stub;
}

Heartbeat::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Heartbeat_(Heartbeat_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_AskLeader_(Heartbeat_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReaderWriter< ::greptime::v1::meta::HeartbeatRequest, ::greptime::v1::meta::HeartbeatResponse>* Heartbeat::Stub::HeartbeatRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::greptime::v1::meta::HeartbeatRequest, ::greptime::v1::meta::HeartbeatResponse>::Create(channel_.get(), rpcmethod_Heartbeat_, context);
}

void Heartbeat::Stub::async::Heartbeat(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::greptime::v1::meta::HeartbeatRequest,::greptime::v1::meta::HeartbeatResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderWriterFactory< ::greptime::v1::meta::HeartbeatRequest,::greptime::v1::meta::HeartbeatResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_Heartbeat_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::greptime::v1::meta::HeartbeatRequest, ::greptime::v1::meta::HeartbeatResponse>* Heartbeat::Stub::AsyncHeartbeatRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::greptime::v1::meta::HeartbeatRequest, ::greptime::v1::meta::HeartbeatResponse>::Create(channel_.get(), cq, rpcmethod_Heartbeat_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::greptime::v1::meta::HeartbeatRequest, ::greptime::v1::meta::HeartbeatResponse>* Heartbeat::Stub::PrepareAsyncHeartbeatRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::greptime::v1::meta::HeartbeatRequest, ::greptime::v1::meta::HeartbeatResponse>::Create(channel_.get(), cq, rpcmethod_Heartbeat_, context, false, nullptr);
}

::grpc::Status Heartbeat::Stub::AskLeader(::grpc::ClientContext* context, const ::greptime::v1::meta::AskLeaderRequest& request, ::greptime::v1::meta::AskLeaderResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::greptime::v1::meta::AskLeaderRequest, ::greptime::v1::meta::AskLeaderResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AskLeader_, context, request, response);
}

void Heartbeat::Stub::async::AskLeader(::grpc::ClientContext* context, const ::greptime::v1::meta::AskLeaderRequest* request, ::greptime::v1::meta::AskLeaderResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::greptime::v1::meta::AskLeaderRequest, ::greptime::v1::meta::AskLeaderResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AskLeader_, context, request, response, std::move(f));
}

void Heartbeat::Stub::async::AskLeader(::grpc::ClientContext* context, const ::greptime::v1::meta::AskLeaderRequest* request, ::greptime::v1::meta::AskLeaderResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AskLeader_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::AskLeaderResponse>* Heartbeat::Stub::PrepareAsyncAskLeaderRaw(::grpc::ClientContext* context, const ::greptime::v1::meta::AskLeaderRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::greptime::v1::meta::AskLeaderResponse, ::greptime::v1::meta::AskLeaderRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AskLeader_, context, request);
}

::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::AskLeaderResponse>* Heartbeat::Stub::AsyncAskLeaderRaw(::grpc::ClientContext* context, const ::greptime::v1::meta::AskLeaderRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAskLeaderRaw(context, request, cq);
  result->StartCall();
  return result;
}

Heartbeat::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Heartbeat_method_names[0],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< Heartbeat::Service, ::greptime::v1::meta::HeartbeatRequest, ::greptime::v1::meta::HeartbeatResponse>(
          [](Heartbeat::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReaderWriter<::greptime::v1::meta::HeartbeatResponse,
             ::greptime::v1::meta::HeartbeatRequest>* stream) {
               return service->Heartbeat(ctx, stream);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Heartbeat_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Heartbeat::Service, ::greptime::v1::meta::AskLeaderRequest, ::greptime::v1::meta::AskLeaderResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Heartbeat::Service* service,
             ::grpc::ServerContext* ctx,
             const ::greptime::v1::meta::AskLeaderRequest* req,
             ::greptime::v1::meta::AskLeaderResponse* resp) {
               return service->AskLeader(ctx, req, resp);
             }, this)));
}

Heartbeat::Service::~Service() {
}

::grpc::Status Heartbeat::Service::Heartbeat(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::greptime::v1::meta::HeartbeatResponse, ::greptime::v1::meta::HeartbeatRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Heartbeat::Service::AskLeader(::grpc::ServerContext* context, const ::greptime::v1::meta::AskLeaderRequest* request, ::greptime::v1::meta::AskLeaderResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace greptime
}  // namespace v1
}  // namespace meta

