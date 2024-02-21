//with arguments and No return type
#include<stdio.h>
struct employee
{
	int code;
	char name[50];
	float salary;
}aa;
void display(struct employee*);
int main()
{
	struct employee aa;
	printf("\nEnter Employee code: ");
	scanf("%d",&aa.code);
	printf("\nEnter Employee name: ");
	scanf("%s",&aa.name);
	//get(aa.name);
	printf("\nEnter Employee salary: ");
	scanf("%f",&aa.salary);
	display(&aa);
	return 0;	
}
void display(struct employee *aa)
{
	printf("\nCode=%d",aa->code);
	printf("\nName=%s",aa->name);
	printf("\nSalary=%f",aa->salary);
}
