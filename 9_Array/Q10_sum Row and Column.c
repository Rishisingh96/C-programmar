//Finde to sum of Column and Row of Matrix.
#include<stdio.h>
int main()
{
	int i,j,a[3][3] ,sum;
	printf("Enter your Matrix of Column and Row.");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
	printf("\nMatrix is :\n");  //For Output
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	//Logic of sum of Row and Column.
	for(i=0;i<3;i++)
	{	
		sum = 0;
		for(j=0;j<3;j++)
		{
			sum=sum + a[i][j];
		}
		printf("\nSum of Row %d is : %d",i+1,sum);
	}
		
	for(i=0;i<3;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
			column=column+a[j][i];
		}
		printf("Sum of Columan : %d",column);
	}
	return 0;
}
