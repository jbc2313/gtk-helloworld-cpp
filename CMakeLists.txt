#set(CMAKE_CXX_COMPILER "/usr/lib/llvm/16/bin/clang")

set(CMAKE_CXX_COMPILER "/usr/bin/g++")
project(helloworld)

cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-4.0)

add_subdirectory(src)

#add_executable(helloworld main.cxx helloworld.h helloworld.cxx)

#target_link_libraries(helloworld PRIVATE ${GTKMM_LIBRARIES})

#target_compile_definitions(helloworld PRIVATE ${GTKMM_CFLAGS_OTHER})

#target_include_directories(helloworld PRIVATE ${GTKMM_INCLUDE_DIRS})

#target_link_directories(helloworld PRIVATE ${GTKMM_LIBRARY_DIRS})
