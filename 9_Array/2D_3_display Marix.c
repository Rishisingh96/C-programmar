//Enter the element for 3 row & 4 colums the 
#include<stdio.h>
int main()
{
	int i,j,array[3][4];
	printf("Enter 12 element:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("Matrix is :");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			printf("%d\t",array[i][j]);
		}
	}
	
	return 0;
}
