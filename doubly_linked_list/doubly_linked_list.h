#ifndef CALGO_DOUBLY_LINKED_LIST_H
#define CALGO_DOUBLY_LINKED_LIST_H

#include <stdlib.h>

enum DLL_TYPES { DLL_I32, DLL_I64, DLL_F32, DLL_DBL, DLL_STR };
union DLL_DATA {
  int32_t data_i32;
  int64_t data_i64;
  float data_f32;
  double data_dbl;
  char* data_str;
};

struct Node {
  union {
    int32_t data_i32;
    int64_t data_i64;
    float data_f32;
    double data_dbl;
    char* data_str;
  } data;
  struct Node* next;
  struct Node* prev;
};

struct DoublyLinkedList {
  struct Node* head;
  struct Node* tail;
  size_t size;
};

struct DoublyLinkedList new_doubly_linked_list(void);
void insert_dll_item(struct DoublyLinkedList* list, enum DLL_TYPES data_type, union DLL_DATA data);
bool delete_dll_item(struct DoublyLinkedList* list, enum DLL_TYPES item_type, union DLL_DATA item);
void prepend_dll_item(struct DoublyLinkedList* list, enum DLL_TYPES item_type, union DLL_DATA item);
void append_dll_item(struct DoublyLinkedList* list, enum DLL_TYPES item_type, union DLL_DATA item);
void pop_first_dll_item(struct DoublyLinkedList* list);
void pop(struct DoublyLinkedList* list);
void dll_clear(struct DoublyLinkedList* list);
void reverse_dll(struct DoublyLinkedList* list);

#endif
