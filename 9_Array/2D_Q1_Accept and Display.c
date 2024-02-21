#include<stdio.h>
int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for 2D Array:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("In 2D Array Element are:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	return 0;
}
