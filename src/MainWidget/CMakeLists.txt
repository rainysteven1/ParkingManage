project(MainWidget VERSION 1.0.0)

include_directories(./Headers)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(EXECUTABLE_OUTPUT_PATH ${ParkingManage_SOURCE_DIR}/bin)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

aux_source_directory(./ SRC_LIST)
file(GLOB HEADER_LIST ./Headers/*.h)
file(GLOB UI_LIST ./Forms/*.ui)

add_executable(${PROJECT_NAME} ${SRC_LIST} ${HEADER_LIST} ${UI_LIST})
target_link_libraries(${PROJECT_NAME}
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

