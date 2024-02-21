//Q6-Print Left and Right Digonal Element of a 2D Array.
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
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
	printf("\nLeft Digonal element are\n ");
    for(i=0;i<3;i++)
    {	
      for(j=0;j<3;j++)
     {	
         if(i==j)
			 printf("%d\t",a[i][j]);
     }	
	}
	 printf("\nRight Digonal element are\n ");
	 for(i=0;i<3;i++)
	 {	
	 	for(j=0;j<3;j++)
	 	{
			 if(i+j==2)		 
			 	printf("%d\t",a[i][j]);
		}		
	 }	
	 return 0;
}
