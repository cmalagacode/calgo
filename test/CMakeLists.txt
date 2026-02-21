include(FetchContent)
FetchContent_Declare(
        unit-test
        GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
        GIT_TAG v2.6.1
)
FetchContent_MakeAvailable(unit-test)
add_executable(test main.c)
target_link_libraries(test PRIVATE unity search)
target_include_directories(test PRIVATE ${CMAKE_CURRENT_LIST_DIR})