# Declare the libraries
add_library(libdisplay STATIC
        display.cpp
)


#link the libraries in depencendy of this one
target_link_libraries(libdisplay
    PUBLIC
    ${OpenCV_LIBS}
    libprocess
)

# Specify the include directories for the headers exported by this library
target_include_directories(libdisplay PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/headers
)



