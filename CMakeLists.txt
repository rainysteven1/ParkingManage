cmake_minimum_required(VERSION 3.21)
project(ParkingManage VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_PREFIX_PATH /opt/homebrew/Cellar/qt/6.3.1_1)

add_subdirectory(src/MainWidget)

