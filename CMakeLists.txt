cmake_minimum_required(VERSION 3.31)
project(q_player)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(q_player main.cpp)
target_link_libraries(q_player
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

