#include<stdio.h>
#include<stdlib.h>
int sum = 34;
int *functionDangling()
{
	int a,b,sum2;
	a = 34;
	b = 364;
	sum = a+b;
	return &sum;
}
int main()
{
	/*code ..........*/
	return 0;
}

