//with argument functin with return value 
//Write a program to calculate sum of three number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int sum (int,int,int);
	int a1,a2,a3,result;
	printf("Enter you number:")
	result=sum(a1,a2,a3);
	printf("Sum of 3 number=%d",result);
	getch();
}
	int sum(int f1,int f2,int f3)
	{
		int s;
		s=f1+f2+f3;
		return(s);
	}
