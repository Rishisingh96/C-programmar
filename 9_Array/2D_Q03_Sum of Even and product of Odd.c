//Q3_Find sum of even and Product of odd in 2D array.
#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0,pro=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{										//Input Array
			printf("Enter value for 2D Array:-");
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
			if(a[i][j]%2==0)
				sum=sum+a[i][j];
			else
				pro=pro*a[i][j];
		}	
	}
	printf("\nSum of Even = %d\n, Product of Odd=%d\n",sum,pro);
	return 0;
}
	
