/*Write a progrma to find factorial of a number using recursion.*/
#include<stdio.h>
int fact(int n)
{
	if(n==1 || n==0)
	{
		return 1;
	}
	else 
	{
		return n*fact(n-1);
	}
}
int main()
{
	int n;
	printf("Enter the number whose factorial you want to calculate?\n");
	scanf("%d",&n);
	printf("\nThe Factorial of %d is %d",n,fact(n));
	return 0;
}
