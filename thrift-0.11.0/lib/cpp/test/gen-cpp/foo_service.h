/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef foo_service_H
#define foo_service_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "AnnotationTest_types.h"



#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class foo_serviceIf {
 public:
  virtual ~foo_serviceIf() {}
  virtual void foo() = 0;
};

class foo_serviceIfFactory {
 public:
  typedef foo_serviceIf Handler;

  virtual ~foo_serviceIfFactory() {}

  virtual foo_serviceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(foo_serviceIf* /* handler */) = 0;
};

class foo_serviceIfSingletonFactory : virtual public foo_serviceIfFactory {
 public:
  foo_serviceIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<foo_serviceIf>& iface) : iface_(iface) {}
  virtual ~foo_serviceIfSingletonFactory() {}

  virtual foo_serviceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(foo_serviceIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<foo_serviceIf> iface_;
};

class foo_serviceNull : virtual public foo_serviceIf {
 public:
  virtual ~foo_serviceNull() {}
  void foo() {
    return;
  }
};


class foo_service_foo_args {
 public:

  foo_service_foo_args(const foo_service_foo_args&);
  foo_service_foo_args& operator=(const foo_service_foo_args&);
  foo_service_foo_args() {
  }

  virtual ~foo_service_foo_args() throw();

  bool operator == (const foo_service_foo_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const foo_service_foo_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const foo_service_foo_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class foo_service_foo_pargs {
 public:


  virtual ~foo_service_foo_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class foo_service_foo_result {
 public:

  foo_service_foo_result(const foo_service_foo_result&);
  foo_service_foo_result& operator=(const foo_service_foo_result&);
  foo_service_foo_result() {
  }

  virtual ~foo_service_foo_result() throw();

  bool operator == (const foo_service_foo_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const foo_service_foo_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const foo_service_foo_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class foo_service_foo_presult {
 public:


  virtual ~foo_service_foo_presult() throw();

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class foo_serviceClient : virtual public foo_serviceIf {
 public:
  foo_serviceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  foo_serviceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void foo();
  void send_foo();
  void recv_foo();
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class foo_serviceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<foo_serviceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (foo_serviceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_foo(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  foo_serviceProcessor(::apache::thrift::stdcxx::shared_ptr<foo_serviceIf> iface) :
    iface_(iface) {
    processMap_["foo"] = &foo_serviceProcessor::process_foo;
  }

  virtual ~foo_serviceProcessor() {}
};

class foo_serviceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  foo_serviceProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< foo_serviceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< foo_serviceIfFactory > handlerFactory_;
};

class foo_serviceMultiface : virtual public foo_serviceIf {
 public:
  foo_serviceMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<foo_serviceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~foo_serviceMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<foo_serviceIf> > ifaces_;
  foo_serviceMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<foo_serviceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void foo() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->foo();
    }
    ifaces_[i]->foo();
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class foo_serviceConcurrentClient : virtual public foo_serviceIf {
 public:
  foo_serviceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  foo_serviceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void foo();
  int32_t send_foo();
  void recv_foo(const int32_t seqid);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif



#endif
