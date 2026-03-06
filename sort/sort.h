#ifndef SORT_H_
#define SORT_H_

#include <stdlib.h>

// ==============================================================
// quick sort algorithm (average: linearithmic)
/*
    A common algorithm used to sort an array or list.
    A pivot is chosen to divide the array.
    The goal is that the array on the left will have all
    elements less than the pivot and the array on the right will
    have all the elements greater than the pivot.
    On average this algorithm is faster than merge sort.
    Can be implemented using recursion and iteration.
    This implementation uses iteration to avoid stack overflow issues
    with larger structures.
*/
int32_t partition_helper_i32(int32_t arr[], int32_t start_index,
                             int32_t end_index);
void quick_sort_i32(int32_t arr[], int32_t start_index, int32_t end_index);

// ==============================================================

#endif
