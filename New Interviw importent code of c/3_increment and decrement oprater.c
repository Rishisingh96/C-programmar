#include<stdio.h>
int main()
{
	int x=4,y,z,q;
	y = --x;
	z = x--;
	q=	z--;
	printf("%d %d %d %d",x,y,z,q);
}
