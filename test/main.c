#include "search.h"
#include "sort.h"
#include "unity.h"

// ===================================================
void setUp(void) {
    // optional
    printf("Starting Test Setup\n");
}

void tearDown(void) {
    // optional
    printf("Ending Test Tear Down\n");
}

// ===================================================

void test_binary_search_i16(void) {
    constexpr int16_t ARRAY_TEST_CASE_SIZE = 3;
    constexpr int16_t test_cases[ARRAY_TEST_CASE_SIZE][2][9] = {
        {{1, 2, 3, 4, 500, 4444, 8000, 8500, 8700}, {8500}},
        {{1, 2, 3, 4, 500, 4444, 8000, 8500, 8700}, {4444}},
        {{1, 2, 3, 4, 500, 4444, 8000, 8500, 8700}, {500}}
    };
    const int16_t expected_results[ARRAY_TEST_CASE_SIZE] = {7, 5, 4};
    for (size_t i = 0; i < ARRAY_TEST_CASE_SIZE; i++) {
        const int16_t result = binary_search_i16(
            test_cases[i][0],
            sizeof(test_cases[i][0]) / sizeof(test_cases[i][0][0]),
            test_cases[i][1][0]
        );
        TEST_ASSERT_EQUAL(expected_results[i], result);
    }
}

void test_binary_search_i32(void) {
    constexpr int32_t ARRAY_TEST_CASE_SIZE = 3;
    const int32_t test_cases[ARRAY_TEST_CASE_SIZE][2][9] = {
        {{1, 2, 3, 4, 500, 4444, 8000, 8500, 8700}, {8500}},
        {{1, 2, 3, 4, 500, 4444, 8000, 8500, 8700}, {4444}},
        {{1, 2, 3, 4, 500, 4444, 8000, 8500, 8700}, {500}}
    };
    const int32_t expected_results[ARRAY_TEST_CASE_SIZE] = {7, 5, 4};
    for (size_t i = 0; i < ARRAY_TEST_CASE_SIZE; i++) {
        const int32_t result = binary_search_i32(
            test_cases[i][0], sizeof(test_cases[i][0]) / sizeof(test_cases[i][0][0]),
            test_cases[i][1][0]);
        TEST_ASSERT_EQUAL(expected_results[i], result);
    }
}

void test_binary_search_i64(void) {
    constexpr int64_t ARRAY_TEST_CASE_SIZE = 3;
    const int64_t test_cases[ARRAY_TEST_CASE_SIZE][2][9] = {
        {{1, 2, 3, 4, 500, 4444, 8000, 8500, 8700}, {8500}},
        {{1, 2, 3, 4, 500, 4444, 8000, 8500, 8700}, {4444}},
        {{1, 2, 3, 4, 500, 4444, 8000, 8500, 8700}, {500}}
    };
    const int64_t expected_results[ARRAY_TEST_CASE_SIZE] = {7, 5, 4};
    for (size_t i = 0; i < ARRAY_TEST_CASE_SIZE; i++) {
        const int32_t result = binary_search_i64(
            test_cases[i][0], sizeof(test_cases[i][0]) / sizeof(test_cases[i][0][0]),
            test_cases[i][1][0]);
        TEST_ASSERT_EQUAL(expected_results[i], result);
    }
}

void test_linear_search_i16(void) {
    constexpr int TEST_INPUT_SIZE = 3;
    const int16_t test_cases[TEST_INPUT_SIZE][2][9] = {
        {{344, 44, 54, 66, 56, 7, 45, 99, 22}, {100}},
        {{344, 44, 54, 66, 56, 7, 45, 99, 22}, {99}},
        {{344, 44, 54, 66, 56, 7, 45, 99, 22}, {22}}
    };
    const int16_t expected_results[TEST_INPUT_SIZE] = {-1, 7, 8};
    for (size_t i = 0; i < TEST_INPUT_SIZE; i++) {
        const int16_t result = linear_search_i16(
            test_cases[i][0],
            sizeof(test_cases[i][0]) / sizeof(test_cases[i][0][0]),
            test_cases[i][1][0]
        );
        TEST_ASSERT_EQUAL(expected_results[i], result);
    }
}

void test_quick_sort_i32(void) {
    constexpr int TEST_CASE_SIZE = 3;
    constexpr int TEST_CASE_INPUT_SIZE = 9;
    const int32_t test_cases[TEST_CASE_SIZE][TEST_CASE_INPUT_SIZE] = {
        {344, 44, 54, 66, 56, 7, 45, 99, 22},
        {344, 44, 54, 66, 56, 7, 45, 99, 22},
        {344, 44, 54, 66, 56, 7, 45, 99, 22}
    };
    const int32_t expected_results[TEST_CASE_SIZE][TEST_CASE_INPUT_SIZE] = {
        {7, 22, 44, 45, 54, 56, 66, 99, 344},
        {7, 22, 44, 45, 54, 56, 66, 99, 344},
        {7, 22, 44, 45, 54, 56, 66, 99, 344}
    };
    for (size_t i = 0; i < TEST_CASE_SIZE; i++) {
        quick_sort_i32(
            test_cases[i],
            0,
            sizeof(test_cases[i]) / sizeof(test_cases[i][0]) - 1
        );
        for (size_t j = 0; j < TEST_CASE_INPUT_SIZE; j++) {
            TEST_ASSERT_EQUAL(expected_results[i][j], test_cases[i][j]);
        }
    }
}

int main() {
    UNITY_BEGIN();
    // Start Binary Search
    RUN_TEST(test_binary_search_i16);
    RUN_TEST(test_binary_search_i32);
    RUN_TEST(test_binary_search_i64);
    // End Binary Search
    // Start Linear Search
    RUN_TEST(test_linear_search_i16);
    // End Linear Search
    // Start quick sort
    RUN_TEST(test_quick_sort_i32);
    // End quick sort
    return UNITY_END();
}
