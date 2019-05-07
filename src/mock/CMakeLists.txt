add_library(libmock INTERFACE)

target_include_directories(libmock 
            INTERFACE 
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(libmock 
            INTERFACE    
            GTest::Main
            GTest::GTest
)