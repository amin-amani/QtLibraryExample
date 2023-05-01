cmake_minimum_required(VERSION 3.5)

project(LibraryCreation LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

find_package(Qt5Core)
find_package(Qt5Network)
find_package(Qt5 REQUIRED COMPONENTS Widgets Core Test )

include_directories(${Qt5Widgets_INCLUDE_DIRS})
add_executable(LibraryCreation

  main.cpp
  ObjectDetection.cpp
  ObjectDetection.h
)
#add_library(Detection STATIC ObjectDetection.cpp)
add_library(Detection SHARED ObjectDetection.cpp)
#add_library(Detection  ObjectDetection.cpp)
#message("==============" ${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries(LibraryCreation Qt5::Core Qt5::Widgets)

