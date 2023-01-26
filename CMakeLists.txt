cmake_minimum_required(VERSION 3.23)
project(clion_learning_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(welcome welcome.cpp)
add_executable(context_actions lessons/context_actions.cpp)

