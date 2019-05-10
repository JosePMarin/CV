# Declare the libraries
add_library(libthread-pool 
    INTERFACE
)

#link the libraries in depencendy of this one
target_link_libraries(libthread-pool
    INTERFACE
)

# Specify the include directories exported by the libraries
target_include_directories(libthread-pool 
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)