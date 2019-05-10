
add_executable(cv
        main.cpp
        
)
 

target_link_libraries(cv
        PUBLIC
        ${OpenCV_LIBS}
        libdisplay
        libprocess
        libthread-pool
        librecord
)


add_subdirectory(process)
add_subdirectory(display)
add_subdirectory(mock)
add_subdirectory(thread-pool)
add_subdirectory(record)



