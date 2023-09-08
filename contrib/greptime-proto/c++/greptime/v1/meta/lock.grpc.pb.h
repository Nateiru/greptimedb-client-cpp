// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: greptime/v1/meta/lock.proto
// Original file comments:
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
//
#ifndef GRPC_greptime_2fv1_2fmeta_2flock_2eproto__INCLUDED
#define GRPC_greptime_2fv1_2fmeta_2flock_2eproto__INCLUDED

#include "greptime/v1/meta/lock.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace greptime {
namespace v1 {
namespace meta {

class Lock final {
 public:
  static constexpr char const* service_full_name() {
    return "greptime.v1.meta.Lock";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Lock acquires a distributed shared lock on a given named lock. On success,
    // it will return a unique key that exists so long as the lock is held by the
    // caller.
    virtual ::grpc::Status Lock(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest& request, ::greptime::v1::meta::LockResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greptime::v1::meta::LockResponse>> AsyncLock(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greptime::v1::meta::LockResponse>>(AsyncLockRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greptime::v1::meta::LockResponse>> PrepareAsyncLock(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greptime::v1::meta::LockResponse>>(PrepareAsyncLockRaw(context, request, cq));
    }
    // Unlock takes a key returned by Lock and releases the hold on lock.
    virtual ::grpc::Status Unlock(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest& request, ::greptime::v1::meta::UnlockResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greptime::v1::meta::UnlockResponse>> AsyncUnlock(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greptime::v1::meta::UnlockResponse>>(AsyncUnlockRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greptime::v1::meta::UnlockResponse>> PrepareAsyncUnlock(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::greptime::v1::meta::UnlockResponse>>(PrepareAsyncUnlockRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Lock acquires a distributed shared lock on a given named lock. On success,
      // it will return a unique key that exists so long as the lock is held by the
      // caller.
      virtual void Lock(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest* request, ::greptime::v1::meta::LockResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Lock(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest* request, ::greptime::v1::meta::LockResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      // Unlock takes a key returned by Lock and releases the hold on lock.
      virtual void Unlock(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest* request, ::greptime::v1::meta::UnlockResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Unlock(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest* request, ::greptime::v1::meta::UnlockResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::greptime::v1::meta::LockResponse>* AsyncLockRaw(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::greptime::v1::meta::LockResponse>* PrepareAsyncLockRaw(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::greptime::v1::meta::UnlockResponse>* AsyncUnlockRaw(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::greptime::v1::meta::UnlockResponse>* PrepareAsyncUnlockRaw(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Lock(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest& request, ::greptime::v1::meta::LockResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::LockResponse>> AsyncLock(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::LockResponse>>(AsyncLockRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::LockResponse>> PrepareAsyncLock(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::LockResponse>>(PrepareAsyncLockRaw(context, request, cq));
    }
    ::grpc::Status Unlock(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest& request, ::greptime::v1::meta::UnlockResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::UnlockResponse>> AsyncUnlock(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::UnlockResponse>>(AsyncUnlockRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::UnlockResponse>> PrepareAsyncUnlock(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::UnlockResponse>>(PrepareAsyncUnlockRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Lock(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest* request, ::greptime::v1::meta::LockResponse* response, std::function<void(::grpc::Status)>) override;
      void Lock(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest* request, ::greptime::v1::meta::LockResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void Unlock(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest* request, ::greptime::v1::meta::UnlockResponse* response, std::function<void(::grpc::Status)>) override;
      void Unlock(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest* request, ::greptime::v1::meta::UnlockResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::LockResponse>* AsyncLockRaw(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::LockResponse>* PrepareAsyncLockRaw(::grpc::ClientContext* context, const ::greptime::v1::meta::LockRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::UnlockResponse>* AsyncUnlockRaw(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::greptime::v1::meta::UnlockResponse>* PrepareAsyncUnlockRaw(::grpc::ClientContext* context, const ::greptime::v1::meta::UnlockRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Lock_;
    const ::grpc::internal::RpcMethod rpcmethod_Unlock_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Lock acquires a distributed shared lock on a given named lock. On success,
    // it will return a unique key that exists so long as the lock is held by the
    // caller.
    virtual ::grpc::Status Lock(::grpc::ServerContext* context, const ::greptime::v1::meta::LockRequest* request, ::greptime::v1::meta::LockResponse* response);
    // Unlock takes a key returned by Lock and releases the hold on lock.
    virtual ::grpc::Status Unlock(::grpc::ServerContext* context, const ::greptime::v1::meta::UnlockRequest* request, ::greptime::v1::meta::UnlockResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Lock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Lock() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Lock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Lock(::grpc::ServerContext* /*context*/, const ::greptime::v1::meta::LockRequest* /*request*/, ::greptime::v1::meta::LockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLock(::grpc::ServerContext* context, ::greptime::v1::meta::LockRequest* request, ::grpc::ServerAsyncResponseWriter< ::greptime::v1::meta::LockResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Unlock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Unlock() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Unlock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Unlock(::grpc::ServerContext* /*context*/, const ::greptime::v1::meta::UnlockRequest* /*request*/, ::greptime::v1::meta::UnlockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUnlock(::grpc::ServerContext* context, ::greptime::v1::meta::UnlockRequest* request, ::grpc::ServerAsyncResponseWriter< ::greptime::v1::meta::UnlockResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Lock<WithAsyncMethod_Unlock<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Lock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Lock() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::greptime::v1::meta::LockRequest, ::greptime::v1::meta::LockResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::greptime::v1::meta::LockRequest* request, ::greptime::v1::meta::LockResponse* response) { return this->Lock(context, request, response); }));}
    void SetMessageAllocatorFor_Lock(
        ::grpc::MessageAllocator< ::greptime::v1::meta::LockRequest, ::greptime::v1::meta::LockResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::greptime::v1::meta::LockRequest, ::greptime::v1::meta::LockResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Lock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Lock(::grpc::ServerContext* /*context*/, const ::greptime::v1::meta::LockRequest* /*request*/, ::greptime::v1::meta::LockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Lock(
      ::grpc::CallbackServerContext* /*context*/, const ::greptime::v1::meta::LockRequest* /*request*/, ::greptime::v1::meta::LockResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Unlock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Unlock() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::greptime::v1::meta::UnlockRequest, ::greptime::v1::meta::UnlockResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::greptime::v1::meta::UnlockRequest* request, ::greptime::v1::meta::UnlockResponse* response) { return this->Unlock(context, request, response); }));}
    void SetMessageAllocatorFor_Unlock(
        ::grpc::MessageAllocator< ::greptime::v1::meta::UnlockRequest, ::greptime::v1::meta::UnlockResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::greptime::v1::meta::UnlockRequest, ::greptime::v1::meta::UnlockResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Unlock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Unlock(::grpc::ServerContext* /*context*/, const ::greptime::v1::meta::UnlockRequest* /*request*/, ::greptime::v1::meta::UnlockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Unlock(
      ::grpc::CallbackServerContext* /*context*/, const ::greptime::v1::meta::UnlockRequest* /*request*/, ::greptime::v1::meta::UnlockResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Lock<WithCallbackMethod_Unlock<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Lock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Lock() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Lock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Lock(::grpc::ServerContext* /*context*/, const ::greptime::v1::meta::LockRequest* /*request*/, ::greptime::v1::meta::LockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Unlock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Unlock() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Unlock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Unlock(::grpc::ServerContext* /*context*/, const ::greptime::v1::meta::UnlockRequest* /*request*/, ::greptime::v1::meta::UnlockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Lock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Lock() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Lock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Lock(::grpc::ServerContext* /*context*/, const ::greptime::v1::meta::LockRequest* /*request*/, ::greptime::v1::meta::LockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLock(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Unlock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Unlock() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Unlock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Unlock(::grpc::ServerContext* /*context*/, const ::greptime::v1::meta::UnlockRequest* /*request*/, ::greptime::v1::meta::UnlockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUnlock(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Lock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Lock() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Lock(context, request, response); }));
    }
    ~WithRawCallbackMethod_Lock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Lock(::grpc::ServerContext* /*context*/, const ::greptime::v1::meta::LockRequest* /*request*/, ::greptime::v1::meta::LockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Lock(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Unlock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Unlock() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Unlock(context, request, response); }));
    }
    ~WithRawCallbackMethod_Unlock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Unlock(::grpc::ServerContext* /*context*/, const ::greptime::v1::meta::UnlockRequest* /*request*/, ::greptime::v1::meta::UnlockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Unlock(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Lock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Lock() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::greptime::v1::meta::LockRequest, ::greptime::v1::meta::LockResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::greptime::v1::meta::LockRequest, ::greptime::v1::meta::LockResponse>* streamer) {
                       return this->StreamedLock(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Lock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Lock(::grpc::ServerContext* /*context*/, const ::greptime::v1::meta::LockRequest* /*request*/, ::greptime::v1::meta::LockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedLock(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::greptime::v1::meta::LockRequest,::greptime::v1::meta::LockResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Unlock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Unlock() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::greptime::v1::meta::UnlockRequest, ::greptime::v1::meta::UnlockResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::greptime::v1::meta::UnlockRequest, ::greptime::v1::meta::UnlockResponse>* streamer) {
                       return this->StreamedUnlock(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Unlock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Unlock(::grpc::ServerContext* /*context*/, const ::greptime::v1::meta::UnlockRequest* /*request*/, ::greptime::v1::meta::UnlockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedUnlock(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::greptime::v1::meta::UnlockRequest,::greptime::v1::meta::UnlockResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Lock<WithStreamedUnaryMethod_Unlock<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Lock<WithStreamedUnaryMethod_Unlock<Service > > StreamedService;
};

}  // namespace meta
}  // namespace v1
}  // namespace greptime


#endif  // GRPC_greptime_2fv1_2fmeta_2flock_2eproto__INCLUDED
