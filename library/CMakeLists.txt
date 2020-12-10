
add_library(my_library SHARED library.cpp)

target_include_directories(my_library 
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/include
	PRIVATE
		${CMAKE_CURRENT_BINARY_DIR}
)

target_compile_definitions(my_library 
	PRIVATE 
		-DLIBRARY_INTERNAL
)

configure_file(config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)
