// Input Employee code,name ,salary  by using Union .
// If you want to Best and Correct solution fo to 10.2_Input Employee code
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
	printf("\nEnter Employee name: ");
	scanf("%s",&aa.emp_name);
	printf("\nEnter Employee salary: ");
	scanf("%f",&aa.salary);
	
	printf("\nEmployee Code = %d",aa.emp_code);
	printf("\nEmployee name = %s",aa.emp_name);
	printf("\nEmployee salary = %f",aa.salary);
	return 0;
}
