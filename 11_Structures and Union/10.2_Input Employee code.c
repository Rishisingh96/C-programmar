// Best and Correct solution of Input Union. page 10.2_Input Employee code
#include<stdio.h>
union employee
{
	int emp_code;
	char emp_name;
	float salary;	
}aa;
int main()
{
	printf("\nEnter Employee code: ");
	scanf("%d",&aa.emp_code);
		printf("\nCode =%d",aa.emp_code);
	
	printf("\nEnter Employee name: ");
	scanf("%s",&aa.emp_name);
		printf("\nEmployee name = %s",aa.emp_name);
		
	printf("\nEnter Employee salary: ");
	scanf("%f",&aa.salary);
		printf("\nEmployee salary = %f",aa.salary);
	return 0;
}
