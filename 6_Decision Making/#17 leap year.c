 /*.....Wap to check given year is leap year or not?.......*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter tha value of a");
	scanf("%d",&a);
	if (a%4==0)
	{
		printf("This year is Leap Year");
	}
	else
	{
		printf("This is not Leap Year");
	}
	getch();
}
