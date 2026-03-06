#include "sort.h"

#define MAX_STACK 64

int32_t partition_helper_i32(int32_t arr[], const int32_t start_index,
                             const int32_t end_index) {
  const int32_t x = arr[end_index];
  int32_t i = start_index - 1;

  for (int32_t j = start_index; j <= end_index - 1; j++) {
    if (arr[j] <= x) {
      i++;
      const int32_t temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  int32_t temp = arr[i + 1];
  arr[i + 1] = arr[end_index];
  arr[end_index] = temp;
  return i + 1;
}

void quick_sort_i32(int32_t arr[], int32_t start_index, int32_t end_index) {
  if (start_index >= end_index) {
    return;
  }

  int32_t stack[MAX_STACK];
  int32_t top = -1;

  stack[++top] = start_index;
  stack[++top] = end_index;

  while (top >= 0) {
    end_index = stack[top--];
    start_index = stack[top--];

    while (start_index < end_index) {
      const int32_t pivot = partition_helper_i32(arr, start_index, end_index);
      const int32_t left_size = pivot - 1 - start_index;
      const int32_t right_size = end_index - (pivot + 1);

      if (left_size > right_size) {
        if (left_size > 0) {
          stack[++top] = start_index;
          stack[++top] = pivot - 1;
        }
        start_index = pivot + 1;
      } else {
        if (right_size > 0) {
          stack[++top] = pivot + 1;
          stack[++top] = end_index;
        }
        end_index = pivot - 1;
      }
    }
  }
}