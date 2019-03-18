project (project_test)

cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 11)


add_library(lib SHARED
            lib/date.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)

target_link_libraries(lib LINK_PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib/date.cpp)


target_include_directories(lib PRIVATE .)


add_executable(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp ${CMAKE_CURRENT_SOURCE_DIR}/lib/date.cpp)



