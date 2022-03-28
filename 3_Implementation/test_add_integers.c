#include "unity.h"
extern void test_add_integers();
void setUp(void)
{

}
void tearDown(void)
{

}
int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(test_add_integers);
    return(UnityEnd());
}