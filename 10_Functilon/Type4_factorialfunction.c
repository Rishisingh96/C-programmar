/* Type 4 : .........with return with argument.......*/
#include <stdio.h>
//#include<conio.h>
int main()
{
	long int x,f;
	int factorial(int);
	printf("Enter any number to find factorial\n");
	scanf("%d", &x);
	f=factorial(x);
	printf("Factorial is %d",f);
	return 0;
}
int factorial(int a)
{
	int fact = 1;
	while (a > 0)
	{
		fact = fact * a;
		a = a - 1;
	}
	return (fact);
}
