#include<stdio.h>
int main()
{
	int num=10;
	int *p;
	p=&num;
	printf("Adress of p variable is %u\n",p);
	p=p-1;
	printf("After Decrement Pointer : p variable is %u\n",p);
	return 0;
}
