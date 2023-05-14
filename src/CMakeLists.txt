set(BASE_LIBRARY_NAME "base")

# search and src file in subdirs
aux_source_directory("./base" SRC_BASE)
message(STATUS "Base source file list")
message(STATUS "${SRC_BASE}")

add_library(${BASE_LIBRARY_NAME} STATIC ${SRC_BASE})
