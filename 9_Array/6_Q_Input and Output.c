#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter your value for 2D Array.");
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n2D Array Elements are ");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];	
		}
	}
	printf("\nSum of Matrix is= %d\n",sum);
	return 0;	
}
