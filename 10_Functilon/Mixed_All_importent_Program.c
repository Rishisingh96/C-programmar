/* Type 4 : .........with return with argument.......*/
#include <stdio.h>
//#include<conio.h>
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
void Factorial_useForloop(int a)
{
	int n,i,val=1;
	printf("Enter your number for check factorial.\n");
	scanf("%d",&n);
	for(i=n;i>1;i--)
	{
		val*=i;
	}
	printf("Value of factorial=%d",val);
	return 0;
}

int main()
{
}

