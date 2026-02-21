add_library(search STATIC search.c)

target_include_directories(
        search
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)