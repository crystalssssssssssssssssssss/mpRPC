# aux_source_directory(. SRC_LIST) # 将当前目录下的文件名放入SRC_LIST 注意使用aux_source_directory有一个问题，每次添加新文件都不会进行识别
set(SRC_LIST mprpcapplication.cc mprpcconfig.cc rpcprovider.cc rpcheader.pb.cc mprpcchannel.cc mprpccontroller.cc logger.cc zookeeperutil.cc) # 新添加的源文件可以添加在后面
add_library(mprpc ${SRC_LIST}) # SHARED表示生成一个动态库，默认生成静态库 

#设置muduo网络库的依赖
target_link_libraries(mprpc  muduo_net muduo_base pthread zookeeper_mt)  # 注意这里muduo_net库都是静态库，所以mprpc也要变成静态库，且muduo_net和muduo_base顺序不能调换，因为muduo_base依赖muduo_net