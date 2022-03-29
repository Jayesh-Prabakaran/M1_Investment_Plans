#include<stdio.h>
#include<math.h>
#include "unity.h"

float fd_interest(float p, float r, float t);
float rd_interest(float p, float r, float t);
float sip_interest(float p, float r, float t);
float lp_interest(float p, float r, float t);

void manual_interest_test()
{
    if(1086==fd_interest(1000,10,10))
    printf("\nFD Interest function works.\n");

    if(12329==rd_interest(1000,5,12))
    printf("RD Interest function works.\n");
    
    if(12670==sip_interest(1000,10,1))
    printf("SIP Interest function works.\n");

    if(1100==lp_interest(1000,10,1))
    printf("LP Interest function works.\n");
    return 0;
}

float fd_interest(float p, float r, float t)
{
    float calc1=1+(r/400);
    float calc2=pow( calc1,(4* (t/12) ) );
    float final=calc2*p;
    return round(final);
}

float rd_interest(float p, float r, float t)
{
    float i=r/400;
    float calc1=(pow(1+i,t/3));
    float calc2=calc1-1;
    float numerator=p*calc2;
    float calc3=pow((1+i),-0.333333);
    float denominator=1-calc3;
    float final=numerator/denominator;
    return round(final);
}

float sip_interest(float p, float r, float t)
{
    float i=r/1200;
    float calc1=pow((1+i),t*12);
    float calc2=calc1-1;
    float calc3=calc2/i;
    float final=p*calc3*(1+i);
    return round(final);
}

float lp_interest(float p, float r, float t)
{
    float i=r/100;
    float calc1=pow((1+i),t);
    float final=p*calc1;
    return round(final);
}
