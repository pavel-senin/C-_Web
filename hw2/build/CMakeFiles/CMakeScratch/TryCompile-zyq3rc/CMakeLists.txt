cmake_minimum_required(VERSION 3.27.1.0)
cmake_policy(SET CMP0126 OLD)
cmake_policy(SET CMP0128 OLD)
project(CMAKE_TRY_COMPILE C)
set_property(DIRECTORY PROPERTY INCLUDE_DIRECTORIES "")
set(CMAKE_VERBOSE_MAKEFILE 1)
set(CMAKE_C_FLAGS "")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${COMPILE_DEFINITIONS}")
set(CMAKE_C_FLAGS_DEBUG "-g")
set(CMAKE_EXE_LINKER_FLAGS "")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${EXE_LINKER_FLAGS}")
include_directories(${INCLUDE_DIRECTORIES})
set(CMAKE_SUPPRESS_REGENERATION 1)
link_directories(${LINK_DIRECTORIES})
add_definitions([==[-v]==])
cmake_policy(SET CMP0065 NEW)
cmake_policy(SET CMP0083 OLD)
include("${CMAKE_ROOT}/Modules/Internal/HeaderpadWorkaround.cmake")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "D:/GB/CPP_Web/hw2/build/CMakeFiles/CMakeScratch/TryCompile-zyq3rc")
add_executable(cmTC_63905 "C:/MinGW/mingw64/share/cmake-3.27/Modules/CMakeCCompilerABI.c")
file(GENERATE OUTPUT "${CMAKE_BINARY_DIR}/cmTC_63905_loc"
     CONTENT $<TARGET_FILE:cmTC_63905>)
target_link_libraries(cmTC_63905 ${LINK_LIBRARIES})
