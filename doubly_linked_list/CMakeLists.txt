add_library(doubly_linked_list STATIC doubly_linked_list.c)

target_include_directories(
        doubly_linked_list
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)