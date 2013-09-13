set(GTEST_INCLUDE_DIR "/usr/local/gtest/include")
set(GTEST_LIB_DIR "/usr/local/gtest/lib")
include_directories(${GTEST_INCLUDE_DIR})

add_executable(fizzbuzz_test "fizzbuzz_test.cpp" "../src/fizzbuzz.cpp" )
target_link_libraries(fizzbuzz_test  ${GTEST_LIB_DIR}/libgtest.a  ${GTEST_LIB_DIR}/libgtest_main.a)
