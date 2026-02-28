#ifndef CALGO_SEARCH_H_
#define CALGO_SEARCH_H_

#include <stdint.h>
// array needs to be sorted in asc order.
int16_t binary_search_i16(const int16_t* arr, int16_t size, int16_t target);
// array needs to be sorted in asc order.
int32_t binary_search_i32(const int32_t* arr, int32_t size, int32_t target);
// array needs to be sorted in asc order.
int64_t binary_search_i64(const int64_t* arr, int64_t size, int64_t target);

#endif