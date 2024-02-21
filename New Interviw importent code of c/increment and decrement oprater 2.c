#include<stdio.h>

int main()
{
	int x=4,y,z,q,i;
	y = --x;
	z = x++;
	i= ++x;
	q = x--;
	printf("%d %d %d %d %d",x,y,z,q,i);
}
