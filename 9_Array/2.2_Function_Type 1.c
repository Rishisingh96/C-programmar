//Type 1: No Argument No return value By Using Array.
//Type 1: With No Argument and No return value.
#include<stdio.h>
void square();
void add();
void main()
{
	square();
	add();
}
void square()
{
	int n;
	printf("Plese Enter any number\n");
	scanf("%d",&n);
	printf("square= %d\n",n*n);
}
void add()
{
	int a,b;
	printf("Enter your number \n");
	scanf("%d%d",&a,&b);
	printf("add=%d\n",a+b);
}
