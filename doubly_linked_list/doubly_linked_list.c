#include "doubly_linked_list.h"

struct DoublyLinkedList dll_new(void) {
  const struct DoublyLinkedList list = {
      .head = nullptr, .tail = nullptr, .size = 0};
  return list;
}

void dll_insert(struct DoublyLinkedList* list, const enum DLL_TYPES data_type,
                const union DLL_DATA data) {
  struct Node* n = calloc(1, sizeof(struct Node));

  if (list->size == 0) {
    if (data_type == DLL_I32) {
      n->data.data_i32 = data.data_i32;
    } else if (data_type == DLL_I64) {
      n->data.data_i64 = data.data_i64;
    } else if (data_type == DLL_F32) {
      n->data.data_f32 = data.data_f32;
    } else if (data_type == DLL_DBL) {
      n->data.data_dbl = data.data_dbl;
    } else if (data_type == DLL_STR) {
      n->data.data_str = data.data_str;
    } else {
      free(n);
      return;
    }
    n->next = nullptr;
    n->prev = nullptr;
    list->head = n;
    list->tail = n;
    list->size++;
  } else if (list->size >= 1) {
    if (data_type == DLL_I32) {
      n->data.data_i32 = data.data_i32;
    } else if (data_type == DLL_I64) {
      n->data.data_i64 = data.data_i64;
    } else if (data_type == DLL_F32) {
      n->data.data_f32 = data.data_f32;
    } else if (data_type == DLL_DBL) {
      n->data.data_dbl = data.data_dbl;
    } else if (data_type == DLL_STR) {
      n->data.data_str = data.data_str;
    } else {
      free(n);
      return;
    }
    n->next = nullptr;
    n->prev = list->tail;
    list->tail = n;
    list->size++;
  }
}

bool dll_delete(struct DoublyLinkedList* list,
                     const enum DLL_TYPES item_type,
                     const union DLL_DATA item) {
  struct Node* current_node = list->head;

  while (current_node != nullptr) {
    if (item_type == DLL_I32) {
      if (current_node->data.data_i32 == item.data_i32) {
        struct Node* prev_node = current_node->prev;
        prev_node->next = current_node->next;
        if (prev_node->next != nullptr) {
          current_node->next->prev = prev_node;
        }
        free(current_node);
        list->size--;
        return true;
      }
    } else if (item_type == DLL_I64) {
      if (current_node->data.data_i64 == item.data_i64) {
        struct Node* prev_node = current_node->prev;
        prev_node->next = current_node->next;
        if (prev_node->next != nullptr) {
          current_node->next->prev = prev_node;
        }
        free(current_node);
        list->size--;
        return true;
      }
    } else if (item_type == DLL_F32) {
      if (current_node->data.data_f32 == item.data_f32) {
        struct Node* prev_node = current_node->prev;
        prev_node->next = current_node->next;
        if (prev_node->next != nullptr) {
          current_node->next->prev = prev_node;
        }
        free(current_node);
        list->size--;
        return true;
      }
    } else if (item_type == DLL_DBL) {
      if (current_node->data.data_dbl == item.data_dbl) {
        struct Node* prev_node = current_node->prev;
        prev_node->next = current_node->next;
        if (prev_node->next != nullptr) {
          current_node->next->prev = prev_node;
        }
        free(current_node);
        list->size--;
        return true;
      }
    } else if (item_type == DLL_STR) {
      if (current_node->data.data_str == item.data_str) {
        struct Node* prev_node = current_node->prev;
        prev_node->next = current_node->next;
        if (prev_node->next != nullptr) {
          current_node->next->prev = prev_node;
        }
        free(current_node);
        list->size--;
        return true;
      }
    }
    current_node = current_node->next;
  }
  return false;
}

void dll_prepend(struct DoublyLinkedList* list,
                      const enum DLL_TYPES item_type,
                      const union DLL_DATA item) {
  struct Node* n = calloc(1, sizeof(struct Node));

  if (item_type == DLL_I32) {
    n->data.data_i32 = item.data_i32;
  } else if (item_type == DLL_I64) {
    n->data.data_i64 = item.data_i64;
  } else if (item_type == DLL_F32) {
    n->data.data_f32 = item.data_f32;
  } else if (item_type == DLL_DBL) {
    n->data.data_dbl = item.data_dbl;
  } else if (item_type == DLL_STR) {
    n->data.data_str = item.data_str;
  } else {
    free(n);
    return;
  }

  if (list->size == 0) {
    list->head = n;
    list->tail = n;
  } else  {
    list->head->prev = n;
    n->next = list->head;
    list->head = n;
  }
  list->size++;
}

// TODO BELOW

void append_dll_item(struct DoublyLinkedList* list, enum DLL_TYPES item_type, union DLL_DATA item) {
  struct Node* n = calloc(1, sizeof(struct Node));

  if (item_type == DLL_I32) {
    n->data.data_i32 = item.data_i32;
  } else if (item_type == DLL_I64) {
    n->data.data_i64 = item.data_i64;
  } else if (item_type == DLL_F32) {
    n->data.data_f32 = item.data_f32;
  } else if (item_type == DLL_DBL) {
    n->data.data_dbl = item.data_dbl;
  }

  if (list->size == 0) {
    list->head = n;
    list->tail = n;
  } else  {
    list->tail->next = n;
    n->prev = list->tail;
    list->tail = n;
  }
  list->size++;
}

void pop_first_dll_item(struct DoublyLinkedList* list) {
  if (list->size == 0) {
    return;
  }

  if (list->size == 1) {
    free(list->head);
    return;
  }

  struct Node* remove_node = list->head;

  if (list->head->next != nullptr) {
    list->head->next->prev = nullptr;
  }
  list->head = list->head->next;
  free(remove_node);
}

void pop(struct DoublyLinkedList* list) {
  if (list->size == 0) {
    return;
  }

  if (list->size == 1) {
    free(list->head);
    return;
  }

  struct Node* remove_node = list->tail;

  if (list->tail->prev != nullptr) {
    list->tail->prev->next = nullptr;
  }
  list->tail = list->tail->prev;
  free(remove_node);
}

void dll_clear(struct DoublyLinkedList* list) {
  if (list->size == 0) {
    return;
  }

  struct Node* current_node = list->head;
  while (current_node->next != nullptr) {
    struct Node* delete_node = current_node;
    current_node = current_node->next;
    free(delete_node);
    list->size--;
  }
}

void reverse_dll(struct DoublyLinkedList* list) {
  if (list->size == 0) {
    return;
  }
  list->head = list->tail;

  struct Node* current_node = list->tail;
  while (current_node != nullptr) {
    struct Node* next = current_node->prev;
    current_node->next = current_node->prev;
    current_node->prev = current_node->next;
    current_node = next;
  }

}