cmake_minimum_required(VERSION 3.16)
project(Game2D LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

# SDL3 estático
set(SDL_STATIC ON CACHE BOOL "" FORCE)
set(SDL_SHARED OFF CACHE BOOL "" FORCE)
set(SDL_TEST OFF CACHE BOOL "" FORCE)

# Adiciona SDL3 diretamente do source
add_subdirectory(vendor/SDL3)

# Inclui diretórios e arquivos do jogo
include_directories(vendor/SDL3/include)
file(GLOB GAME_SOURCES src/*.cpp)
add_executable(Game2D ${GAME_SOURCES})

# Linka com a biblioteca SDL3 compilada localmente
target_link_libraries(Game2D PRIVATE SDL3-static)

# Linux-only: dependências extra
if(UNIX AND NOT APPLE)
    target_link_libraries(Game2D PRIVATE dl pthread m X11)
endif()
