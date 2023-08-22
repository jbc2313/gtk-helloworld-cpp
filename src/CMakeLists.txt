
add_executable(helloworld main.cxx helloworld.h helloworld.cxx)

target_link_libraries(helloworld PRIVATE ${GTKMM_LIBRARIES})

target_compile_options(helloworld PRIVATE ${GTKMM_CFLAGS_OTHER})

target_include_directories(helloworld PRIVATE ${GTKMM_INCLUDE_DIRS})


#target_link_directories(helloworld PRIVATE ${GTKMM_LIBRARY_DIRS})
