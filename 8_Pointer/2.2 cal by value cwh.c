#include<stdio.h>
int sum(int x,int y);
int main(){
	int x=4,y=7;
	printf("The value of x and y is %d and %d\n",x,y);
	printf("The value of 4+7 is %d\n",sum(x,y));
	printf("The value of x and y after function call is %d and %d\n",x,y);
return 0;	
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	b=2445;
	a=6657;
	return c;
}
