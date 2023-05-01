cmake_minimum_required(VERSION 3.5)

project(LibraryUsage LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5Core)
set(DetectionLib

    "${PROJECT_SOURCE_DIR}/lib/libDetection.so"

)
include_directories( Intrface
    "${PROJECT_SOURCE_DIR}/lib/"
    )
#link_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(LibraryUsage
  main.cpp
  TestClass.cpp
)
message(">>>>>>>>>>>" ${DetectionLib})
target_link_libraries(LibraryUsage
    Qt5::Core
    ${DetectionLib}
    )
