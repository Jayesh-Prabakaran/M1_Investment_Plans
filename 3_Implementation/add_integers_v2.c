#include <stdio.h>
int add_integers(int num1, int num2)
{
    int sum=num1+num2;
    return sum;
}

int main()
{
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
    return 0;
}