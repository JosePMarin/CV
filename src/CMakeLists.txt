

add_executable(cv
        main.cpp
        src/display.cpp
        src/process.cpp
)


target_include_directories(cv
        PRIVATE
        headers/
)   

target_link_libraries(cv
        PUBLIC
        ${OpenCV_LIBS}
)

