/*Find out when syntex is Union , How memory consume and when syntex is structur 
How memory consume find to the memory consume.*/
#include<stdio.h>
union employee
{
	int emp_code;
	char emp_name[50];
	float salary ;
}aa;
//or
//union employee aa;
int main()
{
	printf("Size of aa is = %d",sizeof(aa));
	return 0;
}
