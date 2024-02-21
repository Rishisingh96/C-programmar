/*....program to find max and min in two number..*/
#include<stdio.h>
#include<conio.h>
int maximum(int num1,int num2);
int minimum(int num1,int num2);
int main()
{
	int num1,num2,max,min;
	printf("Enter any two number\n");
	scanf("%d%d",&num1,&num2);
	max=maximum(num1,num2);
	min=minimum(num1,num2);
	printf("Maximum no.=%d",max);
	printf("Mininum no.=%d",min);
	getch();
}
int maximum(int num1,int num2)
	
	{
		return(num1>num2)?num1:num2;
	}
	int minimum(int num1,int num2)
	{
		return(num1>num2)?num2:num1;
	}


