set(GTest_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/extra/googletest/build/install/include)
set(GTest_LIBRARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/extra/googletest/build/install/lib)
set(LIBPREFIX "${CMAKE_SHARED_LIBRARY_PREFIX")
set(LIBSUFFIX "${CMAKE_SHARED_LIBRARY_SUFFIX")
set(GTest_LIBRARY "${GTest_LIBRARY_DIR}/${LIBPREFIX}GTest{LIBSUFFIX}")


add_library(GTest IMPORTED SHARED GLOBAL)

set_target_properties(GTest PROPERTIES
        IMPORTED_LOCATION                   "${GTest_LIBRARY}"
        INTERFACE_INCLUDE_DIRECTORIES       "${GTest_INCLUDE_DIR}"
        IMPORTED_LINK_INTERFACE_LIBRARIES   "${CMAKE_THREAD_LIBS_INIT}"
)


message( "-- found GTest: TRUE" )

message( "LIBPREFIX= "${LIBPREFIX} )
message( "LIBSUFFIX= ")${LIBSUFFIX} )