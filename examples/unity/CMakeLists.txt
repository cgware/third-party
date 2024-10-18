file(GLOB_RECURSE unity_example_src src/*.h src/*.c)

FetchContent_Declare(
    Unity
    GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
    GIT_TAG        master
)

FetchContent_MakeAvailable(Unity)

add_executable(unity_example ${unity_example_src})
target_link_libraries(unity_example unity)
