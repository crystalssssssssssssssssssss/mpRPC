#include "test.pb.h"
#include <iostream>
#include <string>

using namespace fixbug;


int main(){
    
    // LoginResponse rsp;
    // ResultCode* res = rsp.mutable_result();
    // rsp.set_success(0);
    // res->set_errcode(1);
    // res->set_errmsg("login failed");

    GetFriendsListResponse list; 

    //列表操作
    ResultCode* rc = list.mutable_result();
    rc->set_errcode(0);
    rc->set_errmsg("");

    User* u1 = list.add_friend_list();
    u1->set_name("zs");
    u1->set_age(21);
    u1->set_sex(User::MAN);

    User* u2 = list.add_friend_list();
    u2->set_name("ls");
    u2->set_age(21);
    u2->set_sex(User::MAN);
    
    std::cout<<"list size = "<<list.friend_list_size()<<"\n";
    for(int i = 0; i<list.friend_list_size(); i++){
        User u = list.friend_list(i);
        std::cout<<"name : "<< u.name()<<" ";
        std::cout<<"age : "<<u.age()<<" ";
        std::cout<<"sex : "<<u.sex()<<"\n";
    }

    return 0;
}

int main1(){
    
    //封装login请求对象的数据
    LoginRequest req;
    req.set_name("zhang san");
    req.set_pwd("123456");

    //将LoginRequest对象序列化成字节数组(char*)
    std::string send_str;
    if(req.SerializeToString(&send_str)){
         std::cout<< send_str.c_str() << "\n";
    }

    //从send_str反序列化出一个login请求对象
    LoginRequest reqB;
    if(reqB.ParseFromString(send_str)){
        std::cout<<"name:"<<reqB.name()<<"\n"<<"pwd:"<<reqB.pwd()<<"\n";
    }


    return 0;
}