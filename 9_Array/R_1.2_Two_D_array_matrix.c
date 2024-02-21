#include<stdio.h>
int main()
{
	//Solution-1 Or
	int i,j,marks[2][4]={{45,23,5,6},
						{4,56,2,3}}; // we called Two-D array
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			// 1-Withought Matrix form
			//	printf("The value of %d, %d element of the array is %d\n",i,j,marks[i][j]);		
			//2-If we want a matrix form than we are take..
			printf("%d ",marks[i][j]);
		}
		printf("\n");
	}
	return 0;
}
