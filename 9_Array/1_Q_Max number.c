#include<stdio.h>
int main()
{
	int a[10],i,max;
	printf("\nEnter 10 number.\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)  				 
		max=a[i];	// plese read it as (a[i]>max)
	}
	printf("\nMax Number is %d",max);
	return 0;
}
