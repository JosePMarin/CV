
#CMake version >= 3.10 required for gtest_discover_tests
cmake_minimum_required(VERSION 3.10.3)


cmake_policy(SET CMP0015 NEW)
cmake_policy(SET CMP0048 NEW)


add_executable(test_testDisp
        testdisp.cpp
)


target_include_directories(test_testDisp
        PUBLIC
        ${CMAKE_SOURCE_DIR}/tests/mock
        ${GTest_LIBRARY}
        
)

target_link_libraries(test_testDisp
        PUBLIC
        GTest::Main
        GTest::GTest
        libdisplay
        libprocess
        stdc++fs
        ${CMAKE_THREAD_LIBS_INIT}
        
)




gtest_discover_tests(test_testDisp TEST_PREFIX unit_

)

install (TARGETS test_testDisp
        DESTINATION "${CMAKE_INSTALL_TESTDIR}"
)