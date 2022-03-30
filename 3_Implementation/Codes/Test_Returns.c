#include "unity.h"
#include"Returns.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void automated_interest_test()
{
    float expected_fd_amount=1086;
    float result_fd_amount=1;
    TEST_ASSERT_EQUAL(SUCCESS,fd_interest(1000,10,10,result_fd_amount));
    TEST_ASSERT_EQUAL(expected_fd_amount, result_fd_amount);
}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(automated_interest_test);

    return (UnityEnd());
}