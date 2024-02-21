#include<stdio.h>
#include<conio.h>
int power(int,int)
int main()
{
	int a,b,result;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	result=power(a,b);
	getch();
}
int power(int x,int y)
{
	int z;
	return(pow(x,y))
}
