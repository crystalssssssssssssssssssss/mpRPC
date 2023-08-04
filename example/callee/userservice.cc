#include <iostream>
#include <string>
#include "user.pb.h"
#include "friend.pb.h"
#include "mprpcapplication.h"  //这里直接包含头文件名字即可，cmake会帮我们找到具体头文件所在的目录
#include "rpcprovider.h"
#include "logger.h"
#include <vector>
/**
 * UserService原来是一个本地服务，提供了进程内的本地方法，Login
*/
class UserService : public fixbug::UserServiceRpc    //使用rpc服务发布端(rpc服务提供者)
{
public:
    bool Login(std::string name, std::string pwd)
    {
        std::cout<<"doing local service : Login" << std::endl;
        std::cout<< "name:" << name << "pwd :" << pwd << std::endl;
        return false;
    }  

    bool Register(std::string id ,std::string name, std::string pwd)
    {
        std::cout<<"doing local service : Register" << std::endl;
        std::cout<<"id:" << id << "name:" << name << "pwd :" << pwd << std::endl;
        return true;  
    }  

/**
 * 重写基类UserServiceRpc的虚函数 下面这些方法都是框架直接调用的
 * caller   ===> Login(LoginRequest)  ==> muduo ==>  callee
 * callee   ===> Login(LoginRequest) ===> 调用下述的Login方法
 * */
    void Login(::google::protobuf::RpcController* controller,
                       const ::fixbug::LoginRequest* request,
                       ::fixbug::LoginResponse* response,
                       ::google::protobuf::Closure* done)
    {
        //框架给业务上报了请求参数LoginRequest 应用获取相应数据做本地业务
        std::string name = request->name();
        std::string pwd = request->pwd();
        
        //本地业务
        bool res = Login(name, pwd);

        //把响应写入 包括错误码、错误消息、返回值
        response->set_success(1);
        fixbug::ResultCode* rc = response->mutable_result();
        rc->set_errcode(1);
        rc->set_errmsg("Login error");

        //执行回调操作   执行响应对象数据的序列化和网络发送（由框架来完成）
        done->Run();
    }

    void  Register(::google::protobuf::RpcController* controller,
                       const ::fixbug::RegisterRequest* request,
                       ::fixbug::RegisterResponse* response,
                       ::google::protobuf::Closure* done)
    {
        //框架给业务上报了请求参数LoginRequest 应用获取相应数据做本地业务
        std::string id = request->id();
        std::string name = request->name();
        std::string pwd = request->pwd();
        
        //本地业务
        bool res = Register(id, name, pwd);

        //把响应写入 包括错误码、错误消息、返回值
        response->set_success(res);
        fixbug::ResultCode* rc = response->mutable_result();
        rc->set_errcode(0);
        rc->set_errmsg("");

        //执行回调操作   执行响应对象数据的序列化和网络发送（由框架来完成）
        done->Run();
    }
};


class GetFriendListService : public fixbug::GetFriendListServiceRpc
{
public:
    std::vector<std::string> GetFriendList(uint32_t user_id)
    {
        std::cout<<"doing local service : GetFriendList" << std::endl;
        std::vector<std::string> res;
        res.push_back("plplplp");
        res.push_back("lclclclcl");
        res.push_back("ttttytytyty");
        return res;
    }

    void GetFriendList(::google::protobuf::RpcController* controller,
                       const ::fixbug::GetFriendListRequest* request,
                       ::fixbug::GetFriendListResponse* response,
                       ::google::protobuf::Closure* done)
    {
        uint32_t user_id = request->user_id();
        
        std::vector<std::string> res = GetFriendList(user_id);

        response->mutable_result()->set_errcode(0) ;
        response->mutable_result()->set_errmsg("");
        for(auto&& name : res){
            std::string* p = response->add_friends();
            *p = name;
        }
        response->set_success(0);

        done->Run();
    }
    


};


int main(int argc, char** argv){ 
    
    
    //调用框架的初始化操作
    MprpcApplication::Init(argc, argv);
    LOG_INFO("MprpcApplication init success");
    LOG_ERR("eeeeeerrror%d", 1000000);
    //provider是一个rpc网络服务对象， 把UserService对象发布到rpc节点上
    RpcProvider provider;
    provider.NotifyService(new UserService());
    LOG_INFO("NotifyService UserService success");
    provider.NotifyService(new GetFriendListService());
    LOG_ERR("eeeeeerrror%d", 9999999);
    LOG_INFO("NotifyService GetFriendListService success");

    //启动一个rpc服务发布节点， Run以后， 进程进入阻塞状态， 等待远程的rpc调用请求
    provider.Run();
    return 0;
}