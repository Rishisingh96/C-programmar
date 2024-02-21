/*Write a program to ilustrate the proparti of a static variable.....*/
#include<stdio.h>
#include<conio.h>
void stat();
void main()
{
	int i;
	for(i=1;i<=3;i++)
	{
		stat();
	}
	getch();
}
void stat()
{
	static int x=0;
	x=x+1;
	printf("n=%d\n",x);
}
