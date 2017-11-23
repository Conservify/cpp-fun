project(ARDUINO_PROJECTS)
cmake_minimum_required(VERSION 2.6)
set(CMAKE_VERBOSE_MAKEFILE on)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/../arduino-cmake-minimal/cmake/")

include(ArduinoMinimal)

include_directories(./)

arduino(empty "empty.cpp" "")
arduino(hello_world "hello_world.cpp" "")
arduino(function_pointers "function_pointers.cpp" "")
arduino(arrays_pointer "arrays_pointer.cpp" "")
arduino(arrays_std_array "arrays_std_array.cpp" "")
arduino(arrays_std_vector "arrays_std_vector.cpp" "")
