# Declare the libraries
add_library(libprocess STATIC
        Process.cpp
)

#link the libraries in depencendy of this one
target_link_libraries(libprocess
    PUBLIC
    ${OpenCV_LIBS}
    libbasevideo
)

# Specify the include directories exported by the libraries
target_include_directories(libprocess PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)