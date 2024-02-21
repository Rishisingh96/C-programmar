#include<stdio.h>
int main(){
	int a[3][3],i,j,Even,Odd;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{										//Input Array
			printf("Enter value for 2D Array:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("In 2D Array Element are:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)			// Output Array
		{
			printf("%d\t",a[i][j]);
		}
	}
	Even=Odd=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2==0)
			Even++;
			else
			Odd++;
		}
	}
	printf("Total Even Number=%d\t,Total Odd number=%d\t",Even,Odd);
	return 0;
}
