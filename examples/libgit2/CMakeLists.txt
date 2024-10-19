file(GLOB_RECURSE libgit2_example_src src/*.h src/*.c)

FetchContent_Declare(
    libgit2
    GIT_REPOSITORY https://github.com/libgit2/libgit2.git
    GIT_TAG        v1.8.1
    SOURCE_DIR     ${CMAKE_SOURCE_DIR}/deps/libgit2
    BINARY_DIR     ${CMAKE_SOURCE_DIR}/bin/libgit2
)

FetchContent_MakeAvailable(libgit2)

set(BUILD_SHARED_LIBS OFF BOOL)

add_executable(libgit2_example ${libgit2_example_src})
target_include_directories(libgit2_example PRIVATE ${libgit2_SOURCE_DIR}/include)
#TODO: Link statically
target_link_libraries(libgit2_example libgit2package)

set_target_properties(libgit2_example
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/libgit2_example"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/libgit2_example"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/libgit2_example"
)
