#include<stdio.h>
int main()
{
	//Solution 1 or
//	int i,marks[4]; // We called One-d array solution-1
//	for(i=0;i<4;i++)
//	{
//		printf("Enter the value of %d element of the array\n",i);
//		scanf("%d",&marks[i]);	
//	}
//	for(i=0;i<4;i++)
//	{
//		printf("The value of %d element of the array is %d\n",i,marks[i]);		
//	}
	//Solution-2 Or
	int i,marks[4]={45,23,5,6}; // we called one-d array
	for(i=0;i<4;i++)
	{
		printf("The value of %d element of the array is %d\n",i,marks[i]);		
	}
	return 0;
}
