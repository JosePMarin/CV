
ADD_EXECUTABLE(testdisp 
    testdisp.cpp
)

TARGET_LINK_LIBRARIES(testfoo
    
    libgtest
    libgmock
)

add_test(NAME testfoo
         COMMAND testfoo)