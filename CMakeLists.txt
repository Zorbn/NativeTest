cmake_minimum_required(VERSION 3.0.0)
project(nativeTest VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(nativeTest SHARED nativeTest.cpp)
target_include_directories(nativeTest PRIVATE C:/Users/Nic/Desktop/Other/Dev/Haxe/HashLink/include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
