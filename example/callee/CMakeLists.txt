
set(SRC_LIST userservice.cc ../user.pb.cc ../friend.pb.cc)
add_executable(provider ${SRC_LIST})

target_link_libraries(provider mprpc protobuf) # 这里的provider需要用到框架的动态库和protobuf动态库