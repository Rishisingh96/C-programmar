//Q4_Find sum of 3x3 matrix 2D array elements.
#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{										//Input Array
			printf("Enter value for 3x3 Marix:-");
			scanf("%d",&a[i][j]);
		}
	}
	printf("In 2D Array Element are:-");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)			// Output Array
		{
			printf("%d\t",a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{	
			sum=sum*a[i][j];
		}	
	}
		printf("\nsum of all Element =%d\n",sum);
	return 0;
}
