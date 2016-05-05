#CMake 最低版本号要求 
cmake_minimum_required (VERSION 2.8)

#项目名称
project (matrix)

#源码文件夹
aux_source_directory ( src SRCS)
aux_source_directory ( test TEST_SRCS)
aux_source_directory ( test/unity UNITY_SRCS)

#include path
include_directories ( inc )
include_directories ( test )
include_directories ( test/unity )

#编译选项
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0 -g -Wall")
	
#指定生成目标
add_executable ( matrix ${SRCS} ${TEST_SRCS} ${UNITY_SRCS} main.c )

