#include<stdio.h>
//Chapter 4- : Loop Control instruction 
//Prectice set :
//Q-1 Multiplication tabal
//Q-2 Multiplication of 10 in reversed order.

int main()
{
	int i;
	printf("***Multiplication tabal of 10***\n");
	for(i=10;i;i--)
	{
		printf("10 x %d= %d\n",i,10*i);
	}
	return 0;
}

