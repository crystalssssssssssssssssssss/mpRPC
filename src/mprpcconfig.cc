#include "mprpcconfig.h"
#include <iostream>

//负责解析加载配置文件
void MprpcConfig::LoadConfigFile(const char* config_file)
{       
    FILE *pf = fopen(config_file, "r");
    if(nullptr == pf){
        std::cout<< config_file << "is not exist!" << std::endl;
    }

    // 1、正确的配置项， 2、注释  3、去掉开头的多余的空间
    while(!feof(pf)){
        char buf[512] = {0};
        fgets(buf, 512, pf);

        
        std::string read_buf(buf);
        Trim(read_buf);//去掉字符串前后多余的空格
        //判断注释
        if(read_buf[0] == '#' || read_buf .empty())
        {
            continue;
        }

        //判断配置项
        int idx = read_buf.find('=');
        if(idx == -1)
        {
            //配置项不合法
            continue;
        }

        std::string key;
        std::string value;
        key = read_buf.substr(0, idx);
        Trim(key);
        int endidx = read_buf.find('\n', idx);
        value = read_buf.substr(idx+1, endidx-idx-1);
        Trim(value);
        m_configMap.insert({key, value});

    }   
}
//查询配置项信息
std::string MprpcConfig::Load(const std::string& key)
{
    auto it = m_configMap.find(key);
    if(it == m_configMap.end()){
        return "";
    }
    return it->second;
}

void MprpcConfig::Trim(std::string& src_buf)
{
    int idx = src_buf.find_first_not_of(' ');
    if(idx != -1)
    {
        //说明字符串前面有空格
        src_buf = src_buf.substr(idx, src_buf.size() - idx);
    }

    //去掉字符串后面多余的空格
    idx = src_buf.find_last_not_of(' ');
    if(idx != -1){
        src_buf = src_buf.substr(0, idx+1);
    }
}