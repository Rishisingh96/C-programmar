//Q7_Print Left and Right Diagonal Element of a 2D array.
#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{										//Input Array
			printf("Enter value for 2D Array:-");
			scanf("%d",&a[i][j]);
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
        sum=0;
         for(j=0;j<3;j++)
        {	
            sum=sum+a[i][j];
        }
        printf("\nSum of Row %d is %d",i+1,sum);
    }	
     for(i=0;i<3;i++)
    {
        sum=0;
         for(j=0;j<3;j++)
        {	
            sum=sum+a[j][i];
        }
        printf("\nSum of Colum %d is %d",i+1,sum);
    }
       	
	return 0;
}
