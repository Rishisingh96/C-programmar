/*...with argument and with return valu....*/
#include<stdio.h>
#include<conio.h>
float area()
{
	float r,a;
	printf("Enter your number:");
	scanf("%d",&r);
	a=3.14*r*r;
	printf("Area of circle=%f",a);
	return(a);
}
int table()
{
	int n,i;
	for(i=1;i<=10;++i)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
	return(n);
	
}
void main()
{
	area();
	table();
	getch();
}


