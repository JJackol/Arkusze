cmake_minimum_required (VERSION 3.10)
project (Arkusze)

message("cmake-Hello world-cmake!")

# The version number.
#set (Arkusze_VERSION_MAJOR 1)
#set (Arkusze_VERSION_MINOR 0)

file(GLOB SOURCES 	src/*.h
					src/*.cpp
	)

add_executable(Arkusze ${SOURCES})
