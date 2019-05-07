
#CMake version >= 3.10 required for gtest_discover_tests
cmake_minimum_required(VERSION 3.10.3)


cmake_policy(SET CMP0015 NEW)  #Enable link_directories()
cmake_policy(SET CMP0048 NEW)   #Enable VERSION option of the project()
#Check policies https://www.mankier.com/7/cmake-policies#Policies_Introduced_by_Cmake_3.0-CMP0048

add_executable(test_testDisp
        DisplayTest.cpp
)


target_include_directories(test_testDisp
        PUBLIC
        ${CMAKE_SOURCE_DIR}
        #${GTest_LIBRARY}
        
)

target_link_libraries(test_testDisp
        PUBLIC
        GTest::Main
        GTest::GTest
        libdisplay
        libmock
        stdc++fs
        ${CMAKE_THREAD_LIBS_INIT}
        ${GTEST_BOTH_LIBRARIES}
        
)




gtest_discover_tests(test_testDisp TEST_PREFIX unit_

)

install (TARGETS test_testDisp
        DESTINATION "${CMAKE_INSTALL_TESTDIR}"
)