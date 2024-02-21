#include<stdio.h>
#include<conio.h>
void function1(void);
void function2(void);
auto int main()
{
	int m=1000;
	function2();
	printf("%d",m);    //Third output 
	getch();
}
void function1()
{
	int m=10;
	printf("%d\n",m);  //first output
}
void function2()
{
	int n=100;
	function1();
	printf("%d\n",n);   //second output
}
