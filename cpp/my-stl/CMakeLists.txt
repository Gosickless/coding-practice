cmake_minimum_required(VERSION 3.12)
project(my-stl VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(BUILD_TESTS "Build the test executable" ON)

# 1. 创建核心库目标（接口库）
add_library(my_stl_core INTERFACE)

# 2. 关键修复：使用 $<BUILD_INTERFACE:...> 生成器表达式
target_include_directories(my_stl_core INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    # 安装时使用不同的路径，这里先注释
    # $<INSTALL_INTERFACE:include/my-stl>
)

# 3. 自动发现并添加测试文件
if(BUILD_TESTS)
    file(GLOB TEST_SOURCES CONFIGURE_DEPENDS "tests/*.cpp")
    
    if(TEST_SOURCES)
        add_executable(run_tests ${TEST_SOURCES})
        target_link_libraries(run_tests PRIVATE my_stl_core)
        
        set_target_properties(run_tests PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
            OUTPUT_NAME "my-stl-tests"
        )
        message(STATUS "✅ 测试程序配置成功")
    else()
        message(WARNING "⚠️  测试目录为空，请添加 tests/*.cpp 文件")
    endif()
else()
    message(STATUS "⏸️  已禁用测试构建")
endif()

# 4. 可选：简单的库安装规则（如需分发）
# install(DIRECTORY . DESTINATION include/my-stl
#     FILES_MATCHING PATTERN "*.h"
#     PATTERN "tests" EXCLUDE
# )