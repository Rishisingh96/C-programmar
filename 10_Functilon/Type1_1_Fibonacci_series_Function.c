#include <stdio.h>
int main(){
	Fibonacci_series();
}
void Fibonacci_series()
{
	int i, a, x, n = 0, f = 1;
	printf("Enter your value");
	scanf("%d", &x);
	for (i = 1; i <= x; i++)
	{
		printf("%d\n", n);
		a = n + f;
		n = f;
		f = a;
	}
	return 0;
}