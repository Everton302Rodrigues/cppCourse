cmake_minimum_required(VERSION 3.20)
project(CppCourse)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE EXERCISES RELATIVE ${CMAKE_SOURCE_DIR} src/chap_3/*.cpp)

foreach(exercise ${EXERCISES})
	get_filename_component(exercise_name ${exercise} NAME_WE)
	add_executable(${exercise_name} ${exercise})
endforeach()

