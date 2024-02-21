#include <stdio.h>
void Fibonacci_series()
{
	int i, a, x, n = 0, f = 1;
	printf("\nEnter your value for Fibonacci_series\n");
	scanf("%d", &x);
	for (i = 1; i <= x; i++)
	{
		printf("%d\n", n);
		a = n + f;
		n = f;
		f = a;
	}
}
void Armstrong()
{
	int n, temp, r, sum = 0;
	printf("\nEnter your number for Armstrong:\n");
	scanf("%d", &n);
	temp = n;
	while (n > 0)
	{
		r = n % 10;
		sum = sum + r * r * r;
		n = n / 10;
	}
	if (temp == sum)
		printf("\nArmstrong number\n");
	else
		printf("\nNot Armstrong number\n");
}
void Revers_Number()
{
	int n, revers = 0, r;
	printf("\nEnter your number for revers number.\n");
	scanf("%d", &n);
	while (n != 0)
	{
		r = n % 10;
		revers = revers * 10 + r;
		n = n / 10;
	}
	printf("\nRevers number=%d\n", revers);
}
void PrimeNumber()
{
	int n, i, m = 0, flag = 0;
	printf("\nEnter the number to check prime:\n");
	scanf("%d", &n);
	m = n / 2;
	for (i = 2; i <= m; i++)
	{
		if (n % i == 0)
		{
			printf("\nNumber is not prime\n");
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("Number is prime\n");
}
void Pointer_PrimeNumber()
{
	int n, i, *p, count = 0;
	printf("\nEnter No. check for Prime number use pointer:\n ");
	scanf("%d", &n);
	p = &n;
	printf("\nPrime number Address is = %d\n", p);
	for (i = 1; i <= *p; i++)
	{
		if (*p % i == 0)
			count++;
	}
	if (count == 2)
		printf("\nPrime number\n");
	else
		printf("\nNot Prime number\n");
}
void factorial_while()
{
	int x;
	long int fact = 1;
	printf("\nEnter any number to find factorial:\n");
	scanf("%d", &x);
	while (x > 0)
	{
		fact = fact * x;
		// x=x-1;
		--x;
		//x--;
	}
	printf("\nFactorial is %d\n ", fact);
}
void factorial_for()
{
	int i, n, fact = 1;
	printf("Enter your number for check factorial.\n");
	scanf("%d", &n);
	for (i = n; i > 1; i--)
	{
		fact *= i;
		// or  fact = fact*i;
	}
	printf("\nValue of factorial=%d\n", fact);
}
int main()
{
	Revers_Number();
	Fibonacci_series();
	Armstrong();
	factorial_for();
	factorial_while();
	Pointer_PrimeNumber();
	PrimeNumber();

	// void factorial_for();
	// void factorial_while();
	// void Pointer_PrimeNumber();
	// void PrimeNumber();
}