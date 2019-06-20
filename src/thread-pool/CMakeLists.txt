# Declare the libraries
add_library(libthread-pool   STATIC
        ThreadPool.cpp    
)

#link the libraries in depencendy of this one
target_link_libraries(libthread-pool
    PUBLIC
)

# Specify the include directories exported by the libraries
target_include_directories(libthread-pool 
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)