//Adition of two Matrix.
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("\nEnter yor 1 Matrix:\n");
	//For Input of a Matrix.
	for(i=0;i<3;i++)
	{
	
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter yor 2 Matrix.\n");
	//Input for b Matrix.
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//For Output of a Matrix.
	printf("\nFirst Matrix is:\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("\nSecond Matrix is :");
	//Output for b Matrix
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
	}
	//Logic of Adition of two Matrix
	for(i=0;i<3;i++)
	{
	
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
	
		}
	}
	//Output of C Matrix
	printf("\nAddition of Matrix is \n");
	for(i=0;i<3;i++)
	{
		ptintf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
	}
	return 0;
}

