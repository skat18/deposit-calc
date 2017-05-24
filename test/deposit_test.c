#include "ctest.h"
#include "func.h"

CTEST(Func_Perform, less_100k_coefficient_09) {
    int res = Perform(10000,15);
    ASSERT_EQUAL(9000, res);
}

CTEST(Func_Perform, more_100k_coefficient_103) {
    int res = Perform(100001,50);
    ASSERT_EQUAL(103001, res);
}

CTEST(Func_Perform, more_100k_coefficient_108) {
    int res = Perform(100001,209);
    ASSERT_EQUAL(108001, res);
}

CTEST(Func_Perform, more_100k_coefficient_115ok) {
    int res = Perform(100001,341);
    ASSERT_EQUAL(115001, res);
}

CTEST(Func_Perform, more_100k_coefficient_102ok) {
    int res = Perform(90000,50);
    ASSERT_EQUAL(94554, res);
}




