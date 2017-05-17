#include "ctest.h"
#include "func.h"

CTEST(penalty, 100k) {
    int res = Perform(100001,30);
    ASSERT_EQUAL(90000, res);
}

CTEST(more100k, 103ok) {
    int res = Perform(100001,50);
    ASSERT_EQUAL(103001, res);
}

CTEST(more100k, 108ok) {
    int res = Perform(100001,209);
    ASSERT_EQUAL(108001, res);
}

CTEST(more100k, 115ok) {
    int res = Perform(100001,341);
    ASSERT_EQUAL(115001, res);
}

CTEST(less100k, 102ok) {
    int res = Perform(90000,50);
    ASSERT_EQUAL(94554, res);
}




