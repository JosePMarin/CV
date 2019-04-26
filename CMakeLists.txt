
#Setting minimum version required for the app (according with googletest minimum version)
cmake_minimum_required(VERSION 3.10.3)

#Setting up the project, version and language
project (cv VERSION 1.0.0 LANGUAGES CXX)

#Setting configurations for the compiler: c++ version and debug mode (-g command en gcc in order to add symbols for debugging proposes)
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_BUILD_TYPE Debug)

#Setting the path to the binaries of the tests
set(CMAKE_INSTALL_TESTDIR "${CMAKE_CURRENT_SOURCE_DIR}/bin/tests" CACHE STRING "Test executable (bin/tests)")

mark_as_advanced (CMAKE_INSTALL_TESTDIR)


#Setting all the variables that points to binaries (exec, libs and headers) [For the compiler (makefile)]
set (CMAKE_INSTALL_BINDIR "${CMAKE_CURRENT_SOURCE_DIR}/bin" CACHE STRING "User executables (bin)")
set (CMAKE_INSTALL_LIBDIR "${CMAKE_CURRENT_SOURCE_DIR}/bin/lib${LIB_SUFFIX}" CACHE STRING "Object code libraries (lib)")
set (CMAKE_INSTALL_INCLUDEDIR "${CMAKE_CURRENT_SOURCE_DIR}/bin/include" CACHE STRING "header files (include)")


#Pointing the compiler to check in /cmake for the packages
list (APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")


#path for gtest libraries
set (GTEST_ROOT "${CMAKE_CURRENT_LIST_DIR}/extra/googletest/build/install/")

#Include it and enable their use for testing
include(GoogleTest)
enable_testing()
add_custom_target(unit_tests COMMAND ${CMAKE_CTEST_COMMAND} -R unit_)


#Locating packages
find_package ( GTest REQUIRED )
find_package ( OpenCV REQUIRED )

message (STATUS "found this OpenCV: ${OpenCV_LIBRARY}")
message (STATUS "found this GTest: ${GTest_LIBRARY}")

add_subdirectory(src)