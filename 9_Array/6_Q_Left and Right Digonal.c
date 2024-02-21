//Q6: Print left and Right Digonal Element of a 2D Array.
#include<stdio.h>
int main()
{	
	int a[3][3],i,j;
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{											// For Input
		printf("Enter value for 2D Array.");
		scanf("%d",&a[i][j]);
	}
	
	printf("In 2D Array Element are:-");
	for(i=0;i<3;i++)
	{
		printf("\n");										//For Output		
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);	
		}	
	}
	printf("\nLeft Digonal Element are:-");		//	1
	for(i=0;i<3;i++)							//    2
	for(j=0;j<3;j++)							//		3	
	{
		if(i==j)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("\nRight Digonal Element are:-");	
	for(i=0;i<3;i++)							//  	2
	for(j=0;j<3;j++)							//	  3	
	{											//	1
		if(i+j==2)
		{
			printf("%d\t",a[i][j]);
		}
	}
//		for(i=0;i<3;i++)							//  	2
//	for(j=0;j<3;j++)								//		3	
//	{
//		if(i+j==2)
//		{
//			printf("%d\t",a[i][j]);
//		}
//	}
	return 0;
}
