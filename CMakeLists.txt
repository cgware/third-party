cmake_minimum_required(VERSION 3.10)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER CMake)

project(third-party LANGUAGES C)

set(BUILD_SHARED_LIBS OFF CACHE BOOL "Build static libraries")

include(FetchContent)

add_subdirectory(examples)
