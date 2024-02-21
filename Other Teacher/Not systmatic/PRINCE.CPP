
#include<stdio.h>
#include<conio.h>
void main ()
{
	int lap;
	clrscr();
	printf("Enter your year:");
	scanf("%d",&lap);
	if(lap%4==0)
	{
	printf("This is lap year.");
	}
	else
	{
	printf("not lap year");
	}
getch();
}