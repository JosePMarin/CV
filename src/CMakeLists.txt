
add_executable(cv
        main.cpp
        
)
 

target_link_libraries(cv
        PUBLIC
        ${OpenCV_LIBS}
        libdisplay
        libprocess
)


add_subdirectory(process)
add_subdirectory(display)


