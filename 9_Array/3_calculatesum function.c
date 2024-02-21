//Program to calculate the sum array element passing to function.
#include<stdio.h>
int calculatesum(int num[]); //function is declared
int main()
{
	int i,result,num[10];
	printf("Enter 10 numbers to sum");
	for(i=0; i<=9; i++)
	{
		scanf("%d",&num[i]);
		result = calculatesum(num);  //Passing array 
		printf("Result = %d",result);
		return 0;
	}
}	
int calculatesum(int num[])
{
	int i,sum=0;
	for(i=0; i<=9; i++)
	{
		sum=sum+num[i];			
	}	
	printf("Your total sum is : %d",sum);
}

