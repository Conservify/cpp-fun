project(ARDUINO_PROJECTS)
cmake_minimum_required(VERSION 2.6)
set(CMAKE_VERBOSE_MAKEFILE on)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/../arduino-cmake-minimal/cmake/")

include(ArduinoMinimal)

include_directories(./)

arduino(empty "empty.cpp" "")

arduino(hello-world "hello-world.cpp" "")

arduino(function-pointers "function-pointers.cpp" "")
