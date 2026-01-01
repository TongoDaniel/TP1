cmake_minimum_required(VERSION 3.20)

project(TP1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Warnings (qualité) selon compilateur
if(g++)
  add_compile_options(/W4 /permissive-)
else()
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(TP1
  src/main.cpp
)

# Si tu utilises include/
target_include_directories(TP1 PRIVATE include)
