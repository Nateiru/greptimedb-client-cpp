cmake_minimum_required(VERSION 3.22)

project(proto_cpp)

file(GLOB_RECURSE OUTPUT_SOURCES "*.h" "*.cc")

add_library(${PROJECT_NAME} ${OUTPUT_SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})