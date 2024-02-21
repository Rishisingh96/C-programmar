/*.....WAP to swap 2 no’s without using a third variable...*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter your number:a,b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("b=%d,  a=%d",b,a);
	return 0;
}
