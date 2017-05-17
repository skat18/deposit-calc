#include "ctest.h"
#include "func.h"

CTEST(Fail, Fail_ok) {
    int res = Cheak(905,15);
    ASSERT_EQUAL(1, res);
}

