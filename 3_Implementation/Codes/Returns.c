#include<math.h>
#include"Returns.h"

fucntion_status fd_interest(float p, float r, float t, float result_fd_amount)
{
    float calc1=1+(r/400);
    float calc2=pow( calc1,(4* (t/12) ) );
    float final=calc2*p;
    if(result_fd_amount==final)
        return SUCCESS;
}

fucntion_status rd_interest(float p, float r, float t)
{
    float i=r/400;
    float calc1=(pow(1+i,t/3));
    float calc2=calc1-1;
    float numerator=p*calc2;
    float calc3=pow((1+i),-0.333333);
    float denominator=1-calc3;
    float final=numerator/denominator;
    printf("\nThe Maturity Amount at the end of %.2f months is Rupees %.2f",t,round(final));
}

fucntion_status sip_interest(float p, float r, float t)
{
    float i=r/1200;
    float calc1=pow((1+i),t*12);
    float calc2=calc1-1;
    float calc3=calc2/i;
    float final=p*calc3*(1+i);
    printf("\nThe Maturity Amount at the end of %.2f months is Rupees %.2f",t,round(final));
}

fucntion_status lp_interest(float p, float r, float t)
{
    float i=r/100;
    float calc1=pow((1+i),t);
    float final=p*calc1;
    printf("\nThe Maturity Amount at the end of %.2f months is Rupees %.2f",t,round(final));
}