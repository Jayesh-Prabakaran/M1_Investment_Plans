#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void automated_interest_test()
{
    TEST_ASSERT_EQUAL(1086,fd_interest(1000,10,10));
    TEST_ASSERT_EQUAL(12329,rd_interest(1000,5,12));
    TEST_ASSERT_EQUAL(12670,sip_interest(1000,10,1));
    TEST_ASSERT_EQUAL(1100,lp_interest(1000,10,1));
}

int main(void)
{

    UnityBegin(NULL);

    RUN_TEST(automated_interest_test);

    return (UnityEnd());
}