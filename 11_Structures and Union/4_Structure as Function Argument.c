#include<stdio.h>
struct employee
{
	int emp_code;
	char emp_name[50];
	float salary;
};
	void display(struct employee);
int main()
{
	struct employee aa;
		printf("Enter employee code: ");
		scanf("%d",&aa.emp_code);
		printf("Enter Employee name: ");
		scanf("%s",&aa.emp_name);
		printf("Enter Employee salary: ");
		scanf("%f",&aa.salary);
		display(aa);
	return 0;
}
	void display(struct employee x)
	{	
		printf("\nEmp_Code =%d",x.emp_code);		
		printf("\nemp_name =%s",x.emp_name);		
		printf("\nSalary=%f",x.salary);		
	}
	
	

