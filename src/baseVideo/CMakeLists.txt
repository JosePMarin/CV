# Declare the libraries
add_library(libbasevideo STATIC
        BaseVideo.cpp
)


#link the libraries in depencendy of this one
target_link_libraries(libbasevideo
        PUBLIC
        ${OpenCV_LIBS}
)

# Specify the include directories for the headers exported by this library
target_include_directories(libbasevideo PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)


