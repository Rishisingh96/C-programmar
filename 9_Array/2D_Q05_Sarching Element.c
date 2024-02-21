//Search an element in 2D array.
#include<stdio.h>
int main(){
	int a[3][3],i,j,key;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)				// Input section
		{
			printf("Enter Value of 2D Array:- ");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)				// Output section
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("Enter your number  which you want serch.");
	scanf("%d",&key);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==key)
			{	
			printf("Element is [%d] [%d] pos",i,j);
			return 0;	
			}	
		}
	}
		printf("\nElement Not Found.");	
return 0;	
}
