#include "ctest.h"
#include "func.h"

CTEST(input, sum_less10k) {
    int res = Cheak(905,15);
    ASSERT_EQUAL(1, res);
}

CTEST(input, sum_more10k) {
    int res = Cheak(10001,45);
    ASSERT_EQUAL(0, res);
}

CTEST(input, negative_amount) {
    int res = Cheak(-10001,45);
    ASSERT_EQUAL(1, res);
}
