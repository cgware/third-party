file(GLOB_RECURSE unity_example_src src/*.h src/*.c)

FetchContent_Declare(
    Unity
    GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
    GIT_TAG        v2.6.0
    SOURCE_DIR     ${CMAKE_SOURCE_DIR}/deps/unity
    BINARY_DIR     ${CMAKE_SOURCE_DIR}/bin/unity
)

FetchContent_MakeAvailable(Unity)

add_executable(unity_example ${unity_example_src})
target_link_libraries(unity_example PRIVATE unity)

set_target_properties( unity_example
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/unity_example"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/unity_example"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/unity_example"
)
