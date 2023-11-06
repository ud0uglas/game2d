cmake_minimum_required(VERSION 3.0.0)
project(game2d)

add_executable(game2d src/main.cpp)

target_link_libraries(game2d SDL2main SDL2)