/*..write a program to illustrate the use of Global variabal..*/
//External variable
#include<stdio.h>
#include<conio.h>
int gv;                 //Global variable
int main()
{
	void function1();   //Function declaration
	gv=10;
	printf("%d is the value of gv before call\n",gv);
	function1();
	printf("%d is value of gv ofter function call\n",gv);
	getch();
}
void function1()
{
	gv=15;
}
