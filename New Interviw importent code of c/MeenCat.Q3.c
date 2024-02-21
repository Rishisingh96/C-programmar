#include<stdio.h>
int main()

{
	int a,b=5,c;
	a=b++;
	c=++b;
	printf("%d %d",a,c);
	return 0;
}
