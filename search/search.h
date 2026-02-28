#ifndef CALGO_SEARCH_H_
#define CALGO_SEARCH_H_

#include <stdint.h>

// array needs to be sorted in asc order.
int32_t binary_search_i32(const int32_t* arr, int32_t size, int32_t target);

#endif