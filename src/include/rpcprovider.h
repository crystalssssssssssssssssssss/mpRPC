#pragma once

#include "google/protobuf/service.h"
#include <muduo/net/TcpServer.h>
#include <muduo/net/EventLoop.h>
#include <muduo/net/InetAddress.h>
#include <muduo/net/TcpConnection.h>
#include <functional>
#include <unordered_map>
#include "google/protobuf/descriptor.h"
//框架提供的专门发布rpc服务的网络对象类
class RpcProvider
{
public:
    //框架提供给外部使用的，可以发布rpc方法的函数接口
    void NotifyService(google::protobuf::Service* service);

    //启动rpc服务节点，开始提供rpc远程网络调用服务
    void Run();

private:
    //组合EventLoop
    muduo::net::EventLoop m_eventloop;

    //service服务类型信息
    struct ServiceInfo{
        google::protobuf::Service* m_service;  //保存服务对象
        std::unordered_map<std::string, const google::protobuf::MethodDescriptor*> m_methodMap; //保存服务的所有放的映射关系
    };
    //存储注册成功的服务对象和其服务方法
    std::unordered_map<std::string, ServiceInfo> m_serviceMap;


    void OnConnection(const muduo::net::TcpConnectionPtr& conn);
    void OnMessage(const muduo::net::TcpConnectionPtr&, muduo::net::Buffer*, muduo::Timestamp);
    //Closure的回调操作， 用于序列化rpc的响应和将序列化的响应通过网络发回给Rpc客户端
    void SendRpcResponse(const muduo::net::TcpConnectionPtr&, google::protobuf::Message* );
};