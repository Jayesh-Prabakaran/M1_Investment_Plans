#include<stdio.h>
#include<math.h>
void investments(int value);
void fd_interest(float p, float r, float t);
void rd_interest(float p, float r, float t);
void sip_interest(float p, float r, float t);
int main()
{
    int option;
    printf("Select one of the investment options:\n1. Fixed Deposit (FD)\n2. Recurring Deposit (RD)\n3. Systematic Investment Plan\n");
    scanf("%d",&option);
    investments(option);
    return 0;
}
void investments(int value)
{
    float principal,roi,time;
    switch(value)
    {
        case 1:
            printf("Enter the Total Investment (Rupees): ");
            scanf("%f",&principal);

            printf("Enter the Rate Of Interest (%%): ");
            scanf("%f",&roi);

            printf("Enter the Time Period (Months): ");
            scanf("%f",&time);

            fd_interest(principal,roi,time);
            break;

        case 2:
            printf("Enter the Monthly Investment (Rupees): ");
            scanf("%f",&principal);

            printf("Enter the Rate Of Interest (%%): ");
            scanf("%f",&roi);

            printf("Enter the Time Period (Months): ");
            scanf("%f",&time);

            rd_interest(principal,roi,time);
            break;

        case 3:
            printf("Enter the Monthly Investment (Rupees): ");
            scanf("%f",&principal);

            printf("Enter the Expected Return Rate (%%): ");
            scanf("%f",&roi);

            printf("Enter the Time Period (Years): ");
            scanf("%f",&time);

            sip_interest(principal,roi,time);
            break;

        default:
            printf("\nYou cannot select anything other than the two investment options.");
    }
}
void fd_interest(float p, float r, float t)
{
    float calc1=1+(r/400);
    float calc2=pow( calc1,(4* (t/12) ) );
    float final=calc2*p;
    printf("\nThe Maturity Amount at the end of %.2f months is Rupees %.2f",t,final);
}
void rd_interest(float p, float r, float t)
{
    float i=r/400;
    float calc1=pow(i,t/3);
    float calc2=calc1-1;
    float numerator=p*calc2;
    float calc3=pow((1+i),-0.333333);
    float denominator=1-calc3;
    float final=numerator/denominator;
    printf("\nThe Maturity Amount at the end of %.2f months is Rupees %.2f",t,final);
}
void sip_interest(float p, float r, float t)
{
    float i=r/1200;
    float calc1=pow((1+i),t*12);
    float calc2=calc1-1;
    float calc3=calc2/i;
    float final=p*calc3*(1+i);
    printf("\nThe Maturity Amount at the end of %.2f months is Rupees %.2f",t,final);
}