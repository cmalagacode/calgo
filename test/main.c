#include "unity.h"
#include "search.h"

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
    // ==============================================
    /*
        test_arrays = input arrays used to test
        test_arrays_targets = the target for the search for each test
        test_arrays_result = the correct result that the function should return
    */
    constexpr int16_t ARRAY_TEST_CASE_SIZE = 3;
    const int16_t test_arrays[ARRAY_TEST_CASE_SIZE][9] = {
        {1, 2, 3, 4, 500, 4444, 8000, 8500, 8700},
        {1, 2, 3, 4, 500, 4444, 8000, 8500, 8700},
        {1, 2, 3, 4, 500, 4444, 8000, 8500, 8700}
    };
    const int16_t test_arrays_targets[ARRAY_TEST_CASE_SIZE] = {
        8500,
        4444,
        500
    };
    const int16_t test_arrays_result[ARRAY_TEST_CASE_SIZE] = {
        7,
        5,
        4
    };
    // ==============================================
    for (size_t i = 0; i < ARRAY_TEST_CASE_SIZE; i++) {
        const int16_t result = binary_search_i16(
            test_arrays[i], sizeof(test_arrays[i]) / sizeof(test_arrays[i][0]),
            test_arrays_targets[i]
        );
        TEST_ASSERT_EQUAL(test_arrays_result[i], result);
    }
}

void test_binary_search_i32(void) {
    // ==============================================
    /*
        test_arrays = input arrays used to test
        test_arrays_targets = the target for the search for each test
        test_arrays_result = the correct result that the function should return
    */
    constexpr int32_t ARRAY_TEST_CASE_SIZE = 3;
    const int32_t test_arrays[ARRAY_TEST_CASE_SIZE][9] = {
        {1, 2, 3, 4, 500, 4444, 8000, 8500, 8700},
        {1, 2, 3, 4, 500, 4444, 8000, 8500, 8700},
        {1, 2, 3, 4, 500, 4444, 8000, 8500, 8700}
    };
    const int32_t test_arrays_targets[ARRAY_TEST_CASE_SIZE] = {
        8500,
        4444,
        500
    };
    const int32_t test_arrays_result[ARRAY_TEST_CASE_SIZE] = {
        7,
        5,
        4
    };
    // ==============================================
    for (size_t i = 0; i < ARRAY_TEST_CASE_SIZE; i++) {
        const int32_t result = binary_search_i32(
            test_arrays[i], sizeof(test_arrays[i]) / sizeof(test_arrays[i][0]),
            test_arrays_targets[i]
        );
        TEST_ASSERT_EQUAL(test_arrays_result[i], result);
    }
}

void test_binary_search_i64(void) {
    // ==============================================
    /*
        test_arrays = input arrays used to test
        test_arrays_targets = the target for the search for each test
        test_arrays_result = the correct result that the function should return
    */
    constexpr int64_t ARRAY_TEST_CASE_SIZE = 3;
    const int64_t test_arrays[ARRAY_TEST_CASE_SIZE][9] = {
        {1, 2, 3, 4, 500, 4444, 8000, 8500, 8700},
        {1, 2, 3, 4, 500, 4444, 8000, 8500, 8700},
        {1, 2, 3, 4, 500, 4444, 8000, 8500, 8700}
    };
    const int64_t test_arrays_targets[ARRAY_TEST_CASE_SIZE] = {
        8500,
        4444,
        500
    };
    const int64_t test_arrays_result[ARRAY_TEST_CASE_SIZE] = {
        7,
        5,
        4
    };
    // ==============================================
    for (size_t i = 0; i < ARRAY_TEST_CASE_SIZE; i++) {
        const int64_t result = binary_search_i64(
            test_arrays[i], sizeof(test_arrays[i]) / sizeof(test_arrays[i][0]),
            test_arrays_targets[i]
        );
        TEST_ASSERT_EQUAL(test_arrays_result[i], result);
    }
}


int main() {
    UNITY_BEGIN();
    RUN_TEST(test_binary_search_i16);
    RUN_TEST(test_binary_search_i32);
    RUN_TEST(test_binary_search_i64);
    return UNITY_END();
}
