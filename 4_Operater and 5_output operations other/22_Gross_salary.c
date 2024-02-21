#include<stdio.h>
int main() {
   int basic;
   float gross_salary,da,hra;
   printf("Enter basic salary : ");
   scanf("%d", &basic);
   if(basic<1500)
   {
   		da = (90 * basic) / 100;
   		hra = (10 * basic) / 100;
   }
   else if(basic>=1500)
   {
   		da = (98* basic) / 100;
   		hra = 500;
   }
   gross_salary = basic + da + hra;
   printf("\nGross salary : %.2f", gross_salary);
   return (0);
}
