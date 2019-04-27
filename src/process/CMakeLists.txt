# Declare the libraries
add_library(libprocess STATIC
        process.cpp
)

#link the libraries in depencendy of this one
target_link_libraries(libprocess
    PUBLIC
    ${OpenCV_LIBS}
)

# Specify the include directories exported by the libraries
target_include_directories(libprocess PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/headers
)