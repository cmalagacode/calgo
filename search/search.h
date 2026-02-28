#ifndef CALGO_SEARCH_H_
#define CALGO_SEARCH_H_

#include <stdint.h>

// ===============================================================================
// # binary search
/*
  ## Summary:
  Searching algorithm that allows you to search for a target within the array or list in logarithmic time complexity.
  Array or list needs to be sorted in asc order.
*/
int16_t binary_search_i16(const int16_t* arr, int16_t size, int16_t target);
int32_t binary_search_i32(const int32_t* arr, int32_t size, int32_t target);
int64_t binary_search_i64(const int64_t* arr, int64_t size, int64_t target);
// ===============================================================================
// ===============================================================================
// # linear search
/*
  ## Summary:
  Searching algorithm that allows you to search for a target within the array or list in linear time complexity.
  Array or list does not need to be sorted because the algorithm traverses through the entire array or list.
  It is important to note that the time complexity is dependent on N.
*/
int16_t linear_search_i16(const int16_t* arr, int16_t size, int16_t target);
int32_t linear_search_i32(const int32_t* arr, int32_t size, int32_t target);
int64_t linear_search_i64(const int64_t* arr, int64_t size, int64_t target);
// ===============================================================================

#endif