cmake_minimum_required(VERSION 3.21)

project(ParkingManage VERSION 1.0.0)

set(CMAKE_APPLE_SILICON_PROCESS, arm64)
set(CMAKE_OSX_ARCHITECTURES, arm64)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c11")

set(PRJ_SRC_LIST)
set(PRJ_HEADER_LIST)
set(PRJ_LIBRARIES)
set(PRJ_INCLUDE_DIRS)

set(prj_inc_dir ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(prj_src_dir ${CMAKE_CURRENT_SOURCE_DIR}/src)

# 数据结构
set(prj_inc_data_structure_dir ${prj_inc_dir}/data_structure)
set(prj_src_data_structure_dir ${prj_src_dir}/data_structure)
file(GLOB data_structure_header_files "${prj_inc_data_structure_dir}/*.h")
file(GLOB data_structure_src_files "${prj_src_data_structure_dir}/*.c")
list(APPEND PRJ_HEADER_LIST ${data_structure_header_files})
list(APPEND PRJ_SRC_LIST ${data_structure_src_files})

# 可视化
set(prj_inc_visualization_dir ${prj_inc_dir}/visualization)
set(prj_src_visualization_dir ${prj_src_dir}/visualization)
file(GLOB visualization_header_files "${prj_inc_visualization_dir}/*.h")
file(GLOB visualization_src_files "${prj_src_visualization_dir}/*.c")
list(APPEND PRJ_HEADER_LIST ${visualization_header_files})
list(APPEND PRJ_SRC_LIST ${visualization_src_files})

list(APPEND PRJ_INCLUDE_DIRS ${prj_inc_dir})

# 添加gtk+3
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
add_definitions(${GTK3_CFLAGS_OTHER})

add_executable(${PROJECT_NAME} src/main.c ${PRJ_SRC_LIST} ${PRJ_HEADER_LIST})

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PRJ_INCLUDE_DIRS}
        )

target_compile_features(${PROJECT_NAME}
        PUBLIC
        cxx_std_14
        )


target_link_libraries(${PROJECT_NAME}
        PRIVATE
        ${PRJ_LIBRARIES}
        ${GTK3_LIBRARIES}
        )
