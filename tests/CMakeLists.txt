###########
# For tests
# Set up GoogleTest requirements.
# GoogleTest requires at least C++14
project(test_c_utils C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        eff443c6ef5eb6ab598bfaae27f9427fdb4f6af7
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_definitions (-DUNIT_TEST)

include_directories (${TEST_SOURCE_DIR}/src
)

FetchContent_MakeAvailable(googletest)

add_executable(
        test_c_utils
        test_collections.cpp
)
target_link_libraries(
        test_c_utils
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_c_utils)
