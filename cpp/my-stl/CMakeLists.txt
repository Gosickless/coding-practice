cmake_minimum_required(VERSION 3.8)
project(my-stl VERSION 1.0.0 LANGUAGES CXX)

# C++标准设置
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 将当前目录添加到包含路径
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# 主测试程序
add_executable(run_tests
    tests/main.cpp
    tests/test_vector.cpp
    # 在这里添加新的测试文件
)

# 可选：为测试程序设置友好名称
set_target_properties(run_tests PROPERTIES
    OUTPUT_NAME "my-stl-tests"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)