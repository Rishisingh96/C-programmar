#include<stdio.h>
int main()
{
	int a[10],i,min;
	printf("\nEnter 10 number.\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<min)  				 
		min=a[i];	// plese read it as (a[i]>max)
	}
	printf("\nMax Number is %d",min);
	return 0;
}
