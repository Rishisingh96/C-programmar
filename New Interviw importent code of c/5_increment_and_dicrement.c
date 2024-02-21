#include<stdio.h>
int main()
{
	int a=3;
	printf("%d%d%d",a,++a,a++); //output 5 5 3 
									//becuse compiler right to left hoga
	return 0;
}
