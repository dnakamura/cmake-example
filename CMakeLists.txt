cmake_minimum_required(VERSION 3.4)

project(example
	VERSION 1.0
	LANGUAGES CXX
)

# Set default configuration options
set(MY_CONFIG_OPTION OFF CACHE BOOL "Enable fancy option")
set(HEADER_CONFIG_OPTION ON CACHE BOOL "Enable header define")

add_subdirectory(library)

add_executable( example
	main.cpp
)

target_link_libraries(example PUBLIC my_library)

if(MY_CONFIG_OPTION)
	target_compile_definitions(example PRIVATE -DMY_CONFIG_OPTION)
endif()
