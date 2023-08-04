#include <iostream>
#include "mprpcapplication.h"
#include "user.pb.h"
#include "friend.pb.h"


int main(int argc, char** argv)
{
    //整个程序启动以后，想使用mprpc框架来享受rpc服务调用，一定需要先调用框架的初始化函数（只初始化一次)
    MprpcApplication::Init(argc, argv);
    

    
std::cout << "======================rpc Login start============================= " << std::endl;
    //演示调用远程发布的rpc方法Login
    fixbug::UserServiceRpc_Stub stub(new MprpcChannel());
    MprpcController controllerLogin, controllerRegister, controllerGetFriendList;
    //rpc方法的请求参数
    fixbug::LoginRequest request;
    request.set_name("zhang san");
    request.set_pwd("123");
    //rpc方法的响应，同步的rpc调用过程， Mprpcchannel::CallMethod
    fixbug::LoginResponse response;
    stub.Login(&controllerLogin, &request, &response, nullptr);   //RpcChannel-->Rpchannel::callMethod 集中来做所有rpc方法调用的参数序列化和网络发送

    //一次rpc调用完成，读调用的结果
    if(!controllerLogin.Failed() && 0 == response.result().errcode())
    {
        std::cout << "rpc login response success: " << response.success() << std::endl;
    }
    else
    {
        if(controllerLogin.Failed())std::cout<<controllerLogin.ErrorText()<<std::endl;
        else std::cout << "rpc login error msg : " << response.result().errmsg() << std::endl;
    }


std::cout << "======================rpc Login end=============================" << std::endl;

std::cout << "======================rpc Register start =============================" << std::endl;
    fixbug::RegisterRequest res;
    res.set_id("111111111");
    res.set_name("mprpc");
    res.set_pwd("6666666666666666");
    //rpc方法的响应，同步的rpc调用过程， Mprpcchannel::CallMethod
    fixbug::RegisterResponse rsp;

    stub.Register(&controllerRegister, &res, &rsp, nullptr);

    if(!controllerRegister.Failed() && 0 == rsp.result().errcode())
    {
        std::cout << "rpc register response success: " << rsp.success() << std::endl;
    }
    else
    {
        if(controllerRegister.Failed())std::cout<<controllerRegister.ErrorText()<<std::endl;
        else std::cout << "rpc register error msg : " << response.result().errmsg() << std::endl;
    }

std::cout << "======================rpc Register end =============================" << std::endl;

std::cout << "======================rpc GetFriendList start============================= " << std::endl;

    fixbug::GetFriendListServiceRpc_Stub stub1(new MprpcChannel());

    fixbug::GetFriendListRequest res1;
    res1.set_user_id(1000);
    //rpc方法的响应，同步的rpc调用过程， Mprpcchannel::CallMethod
    fixbug::GetFriendListResponse rsp1;

    stub1.GetFriendList(&controllerGetFriendList, &res1, &rsp1, nullptr);

    if(!controllerGetFriendList.Failed() && 0 == rsp1.result().errcode())
    {
        int size = rsp1.friends_size();
        for(int i = 0; i<size; ++i)
        {
            std::cout<<"index: "<<i+1 << "name:" << rsp1.friends(i)<<std::endl; 
        }
    }
    else
    {
         if(controllerGetFriendList.Failed())std::cout<<controllerGetFriendList.ErrorText()<<std::endl;
        else std::cout << "rpc GetFriendList error msg : " << rsp1.result().errmsg() << std::endl;
    }

    std::cout << "======================rpc GetFriendList end ============================= " << std::endl;
}


