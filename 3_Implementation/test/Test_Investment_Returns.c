#include "unity.h"
#include"Investment_Returns.h"

/* Required by the unity test framework */
void setUp(void)
{
}

/* Required by the unity test framework */
void tearDown(void)
{
}

/** @brief Prototypes for all the test functions */
void fd_test()
{
    float expected_fd_amount=1086;
    float result_fd_amount=0;
    TEST_ASSERT_EQUAL(SUCCESS,fd_interest(1000,10,10,&result_fd_amount));
    TEST_ASSERT_EQUAL(expected_fd_amount, result_fd_amount);
}

void rd_test()
{
    float expected_rd_amount=12329;
    float result_rd_amount=0;
    TEST_ASSERT_EQUAL(SUCCESS,rd_interest(1000,5,12,&result_rd_amount));
    TEST_ASSERT_EQUAL(expected_rd_amount, result_rd_amount);
}

void sip_test()
{
    float expected_sip_amount=12670;
    float result_sip_amount=0;
    TEST_ASSERT_EQUAL(SUCCESS,sip_interest(1000,10,1,&result_sip_amount));
    TEST_ASSERT_EQUAL(expected_sip_amount, result_sip_amount);
}

void lp_test()
{
    float expected_lp_amount=1100;
    float result_lp_amount=0;
    TEST_ASSERT_EQUAL(SUCCESS,lp_interest(1000,10,1,&result_lp_amount));
    TEST_ASSERT_EQUAL(expected_lp_amount, result_lp_amount);
}

/* Start of the application test */
int main(void)
{
    /* Initiate the Unity Test Framework */
    UnityBegin(NULL);

    /* Run Test functions */
    RUN_TEST(fd_test);
    RUN_TEST(rd_test);
    RUN_TEST(sip_test);
    RUN_TEST(lp_test);

    /* Close the Unity Test Framework */
    return (UnityEnd());
}