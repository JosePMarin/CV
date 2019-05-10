# Declare the libraries
add_library(librecord STATIC
        Record.cpp
)

#link the libraries in depencendy of this one
target_link_libraries(librecord
    PUBLIC
    ${OpenCV_LIBS}
)

# Specify the include directories exported by the libraries
target_include_directories(librecord PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)