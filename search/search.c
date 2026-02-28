#include "search.h"

int16_t binary_search_i16(const int16_t* arr, const int16_t size, const int16_t target) {
    int16_t left = 0;
    int16_t right = size - 1;

    while (left <= right) {
        const int16_t mid = (left + right) / 2;
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

int64_t binary_search_i64(const int64_t* arr, const int64_t size, const int64_t target) {
    int64_t left = 0;
    int64_t right = size - 1;

    while (left <= right) {
        const int64_t mid = (left + right) / 2;
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