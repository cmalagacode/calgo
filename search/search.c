#include "search.h"

int32_t binary_search_i32(const int32_t* arr, const int32_t size, const int32_t target) {
    int32_t left = 0;
    int32_t right = size - 1;

    while (left <= right) {
        const int32_t mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}