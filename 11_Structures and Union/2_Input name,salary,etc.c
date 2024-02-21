#include<stdio.h>
struct employce
{
	int emp_code;
	char emp_name[70];
	char desig[70];
	float salary;
} a;
int main()
{
	struct employce a;
	printf("\nEnter employe code:");
	scanf("%d",&a.emp_code);
	//gets(a.emp_code);
	printf("\nEnter employe name :");
	scanf("%s",&a.emp_name);
	//gets(a.emp_name);
	printf("\nEnter designation :");
	scanf("%s",&a.desig);
	//gets(a.desig);
	printf("\nEnter Salary :");
	scanf("%f",&a.salary);
	//gets(a.salary);
	
	printf("\nCode = %d",a.emp_code);
	printf("\nName = %s",a.emp_name);
	printf("\nDesignation = %s",a.desig);
	printf("\nSalary = %f",a.salary);
	
return 0;
}
