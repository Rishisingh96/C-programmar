#include <stdio.h>
int factorialIterative(int n)
{
	long long int i, val = 1;
	for (i = n; i > 1; i--)
	{
		val *= i;
	}
	return (val);
}
int factorialRecursive(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return n * factorialRecursive(n - 1);
}
int factorialwhile(int n)
{
	int val = 1, i = n;
	while (i > 1)
	{
		val *= i;
		i--;
	}
	return (val);
}

int main()
{
	int n;
	printf("Enter the value of number for factorial calculation\n");
	scanf("%d", &n);
	//int factorial=factorialIterative(n);  /*..if we can run using for
	//int factorial=factorialRecursive(n);  loop,or wile loop or recursive than
	int factorial = factorialwhile(n); //Open comment and run...*/
	printf("The value of factorial is %lld\n", factorial);
	return 0;
}
