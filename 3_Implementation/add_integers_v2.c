#include <stdio.h>
#include "unity.h"
int add_integers(int num1, int num2)
{
    int sum=num1+num2;
    return sum;
}

void test_add_integers()
{
    #if 0
    if(0==add_integers(0, 0))
    printf("Add function works.\n");
    else
    printf("Add function does not work.\n");

    if(30==add_integers(10, 20))
    printf("Add function works for positive numbers.\n");
    else
    printf("Add function does not work for positive number.\n");

    if(-30==add_integers(-10, -20))
    printf("Add function works for negative numbers.\n");
    else
    printf("Add function does not work for negative numbers.\n");
    #endif
    TEST_ASSERT_EQUAL(0,add_integers(0, 0));
    TEST_ASSERT_EQUAL(30,add_integers(10, 20));
    TEST_ASSERT_EQUAL(-30,add_integers(-10, -20));
}
#if 0
int main()
{
    test_add_integers();
    return 0;
}
#endif