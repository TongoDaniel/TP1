cmake_minimum_required(VERSION 3.20)

project(TP1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Warnings (qualité) selon compilateur
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
endif()

add_executable(TP1
  src/main.cpp
  src/date.cpp
)

# Si tu utilises include/
target_include_directories(TP1 PRIVATE include)

# cmake -S . -B build -G Ninja
# cmake --build build 
# build\TP1.exe