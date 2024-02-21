// Type 1: With Argument and with return value.
#include <stdio.h>
int add(int a, int b);
int main()
{
	int a, b, c, s, x, y, T, a1, a2, a3;
	printf("Enter your number for add: \n");
	scanf("%d%d", &a, &b);
	printf("Enter your number for subtract: \n");
	scanf("%d%d", &x, &y);
	printf("Enter you number:\n");
	scanf("%d%d%d", &a1, &a2, &a3);
	c = add(a, b);
	s = subtract(x, y);
	T = Three_sum(a1, a2, a3);
	printf("Sum of 3 number=%d\n", T);
	printf("Add of two number is = %d\n", c);
	printf("subtract of two number is = %d\n", s);
	return;
}
int add(int x, int y)
{
	int c;
	c = x + y;
	return c;
}
int subtract(int p, int q)
{
	int s;
	s = p - q;
	return s;
}

int Three_sum(int f1, int f2, int f3)
{
	int t;
	t = f1 + f2 + f3;
	return t;
}
