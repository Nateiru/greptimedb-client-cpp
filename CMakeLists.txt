# Copyright 2023 Greptime Team
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required (VERSION 3.22)
project (db_client VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)              # Compile as C++11.
set(CMAKE_CXX_STANDARD_REQUIRED ON)     # Require C++11 support.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g") # Enable optimization level 3

# generate complie_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set project root directory
set(GREPTIMEDB_CLIENT_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(GREPTIMEDB_CLIENT_THIRD_PARTY_INCLUDE_DIR 
        ${GREPTIMEDB_CLIENT_ROOT_DIR}
        ${GREPTIMEDB_CLIENT_ROOT_DIR}/contrib
        ${GREPTIMEDB_CLIENT_ROOT_DIR}/contrib/greptime-proto/c++
        ${GREPTIMEDB_CLIENT_ROOT_DIR}/contrib/grpc/include
        ${GREPTIMEDB_CLIENT_ROOT_DIR}/contrib/grpc/third_party/abseil-cpp
        ${GREPTIMEDB_CLIENT_ROOT_DIR}/contrib/grpc/third_party/protobuf/src
        )

include_directories(
        ${GREPTIMEDB_CLIENT_THIRD_PARTY_INCLUDE_DIR}
        )

add_subdirectory(contrib)
add_subdirectory(db_client)
add_subdirectory(liautoinc)
