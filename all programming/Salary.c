//Program to find your grade by number
#include<stdio.h>
int main()
{
    float s,gs,da,hra;
    printf("ent n =\n");
    scanf("%f",&s);
    da=s*40/100;
    printf("da=%f\n",da);
    hra=s*20/100;
    printf("hra=%f\n",hra);
    gs=da+hra+s;
    printf("gross salary=%f",gs);
    return 0;
    }
    