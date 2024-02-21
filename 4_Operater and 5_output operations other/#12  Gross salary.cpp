/*…. WAP to calculate the Gross Salary of an employee.
 Assume Gross Salary=Basic Salary+DA+HRA DA=40% of Basic Salary HRA=20% of Basic Salary....*/
#include<stdio.h>
int main()
{
	int Bs,Gs,Da,Hra;
	printf("Enter your Basic salary:");
	scanf("%d",&Bs);
	Da=Bs*40/100;
	Hra=20*20/100;
	Gs=Bs+Da+Hra;
	printf("Gross salary=%d",Gs);
	return 0;
}
