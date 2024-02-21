
#include<stdio.h>
struct employee
{
	int emp_code;
	char emp_name[50];
	float salary;
};
int main()
{
	struct employee x;
	x.emp_code=1;
	//x.emp_name[50]="Rishi";
	x.salary=50000;
	strcpy(x.emp_name,"Rishi singh");
	
	printf("Employe code is %d\n",x.emp_code);
	printf("Employe name is %s\n",x.emp_name);
	printf("Employe salary is %f\n",x.salary);
	
	return 0;
}
