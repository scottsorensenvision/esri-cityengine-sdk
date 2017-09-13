cmake_minimum_required(VERSION 3.3)
cmake_policy(SET CMP0015 NEW)


### dependencies
if(NOT prt_DIR)
	message(STATUS "prt_DIR not set, trying fallback ${PROJECT_SOURCE_DIR}/../../../prt/cmake")
	set(prt_DIR "${PROJECT_SOURCE_DIR}/../../../prt/cmake") # fallback location
endif()
find_package(prt CONFIG)
include_directories(${PRT_INCLUDE_PATH})
set(CESDK_VERSION "cesdk_${PRT_VERSION_MAJOR}_${PRT_VERSION_MINOR}_${PRT_VERSION_MICRO}")

### build target

if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose one of: Debug Release RelWithDebInfo MinSizeRel" FORCE)
endif()

set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

file( GLOB header_list *.h *.hpp)
file( GLOB source_list *.cpp )

include_directories( ${PRT_INCLUDE_PATH} )
add_executable(prt4cmd prt4cmd.cpp utils.cpp)
target_link_libraries(prt4cmd ${PRT_LINK_LIBRARIES} ${PRT_EXT_LIBRARIES} ${PRT_LIBRARIES})


